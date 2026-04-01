package mxfp4

import spinal.core._
import spinal.core.sim._
import spinal.lib._

// =============================================================================
// MXFP4 Parametric Dot-Product Engine — SpinalHDL Generator
// =============================================================================
// -----------------------------------------------------------------------------
// Configurazione parametrica
// -----------------------------------------------------------------------------
case class MXFP4Config(
  n            : Int = 32,
  pipelineDepth: Int = 0
) {
  require(n > 0 && (n & (n - 1)) == 0, "n deve essere una potenza di 2")
  require(pipelineDepth >= 0 && pipelineDepth <= 2,
    "pipelineDepth deve essere 0, 1 o 2")
  val treeDepth : Int = log2Up(n)
  val outWidth  : Int = 8 + treeDepth
}

// -----------------------------------------------------------------------------
// Fase 1: Moltiplicatore MXFP4 E2M1 a 4 bit
//
// -----------------------------------------------------------------------------
class MXFP4Multiplier extends Component {
  val io = new Bundle {
    val a       = in  UInt(4 bits)
    val b       = in  UInt(4 bits)
    val sign    = out UInt(1 bits)
    val expOut  = out UInt(3 bits)
    val mantOut = out UInt(4 bits)
  }

  val signA = io.a(3)
  val expA  = io.a(2 downto 1)
  val mantA = io.a(0)

  val signB = io.b(3)
  val expB  = io.b(2 downto 1)
  val mantB = io.b(0)

  // Bit implicito con caso speciale per zero
  val isZeroA  = (expA === 0) && (mantA === False)
  val isZeroB  = (expB === 0) && (mantB === False)
  val mantEffA = Mux(isZeroA, U"2'b00", U"1'b1" @@ mantA.asUInt)
  val mantEffB = Mux(isZeroB, U"2'b00", U"1'b1" @@ mantB.asUInt)

  io.sign    := (signA ^ signB).asUInt
  // SpinalHDL: resize esplicito per la somma degli esponenti a 3 bit
  io.expOut  := (expA.resize(3) + expB.resize(3)).resize(3)
  io.mantOut := (mantEffA * mantEffB).resize(4)
}

// -----------------------------------------------------------------------------
// Fase 2: Allineamento esponenti locali
//
// -----------------------------------------------------------------------------
class ExponentAligner(cfg: MXFP4Config) extends Component {
  val io = new Bundle {
    val signs   = in  Vec(UInt(1 bits),  cfg.n)
    val exps    = in  Vec(UInt(3 bits),  cfg.n)
    val mants   = in  Vec(UInt(4 bits),  cfg.n)
    val aligned = out Vec(SInt(8 bits),  cfg.n)
  }

  // Trova exp_max con foldLeft (riduzione parallela in Scala → logica combinatoria)
  val expMax = io.exps.reduce((a, b) => Mux(a > b, a, b))

  for (i <- 0 until cfg.n) {
    val shift    = (expMax - io.exps(i)).resize(3)
    val mantExt  = io.mants(i) @@ U"4'b0000"   // estendi a 8 bit con guardia
    val shifted  = (mantExt >> shift).resize(8)
    // Applica il segno
    io.aligned(i) := Mux(
      io.signs(i)(0),
      -(shifted.asSInt),
       shifted.asSInt
    )
  }
}

// -----------------------------------------------------------------------------
// Fase 3: Adder Tree binario ricorsivo con pipeline parametrica
//
// -----------------------------------------------------------------------------
class AdderTree(cfg: MXFP4Config) extends Component {
  val io = new Bundle {
    val inputs = in  Vec(SInt(8 bits), cfg.n)
    val result = out SInt(cfg.outWidth bits)
  }

  // Inserisce un registro di pipeline se il livello lo richiede
  def maybeReg(sig: SInt, levelIdx: Int): SInt = {
    val insertReg = cfg.pipelineDepth match {
      case 0 => false
      case 1 => levelIdx == cfg.treeDepth / 2
      case 2 => (levelIdx == cfg.treeDepth / 3) ||
                (levelIdx == (cfg.treeDepth * 2) / 3)
      case _ => false
    }
    // SpinalHDL: RegNext crea un flip-flop con clock implicito del Component
    if (insertReg) RegNext(sig) else sig
  }

  // Costruzione ricorsiva dell'adder tree
  def buildTree(nodes: Seq[SInt], level: Int): SInt = {
    if (nodes.length == 1) {
      nodes(0)
    } else {
      val nextLevel = nodes.grouped(2).map { pair =>
        // SpinalHDL: resize esplicito per evitare overflow nella somma
        val sum = (pair(0).resize(cfg.outWidth) + pair(1).resize(cfg.outWidth))
          .resize(cfg.outWidth)
        maybeReg(sum, level)
      }.toSeq
      buildTree(nextLevel, level + 1)
    }
  }

  val extInputs = io.inputs.map(_.resize(cfg.outWidth)).toSeq
  io.result := buildTree(extInputs, 0)
}

// -----------------------------------------------------------------------------
// Fase 4: Integrazione Shared Scale
// -----------------------------------------------------------------------------
class SharedScaleIntegrator(cfg: MXFP4Config) extends Component {
  val io = new Bundle {
    val treeSum       = in  SInt(cfg.outWidth bits)
    val scaleA        = in  UInt(8 bits)
    val scaleB        = in  UInt(8 bits)
    val dotProduct    = out SInt(cfg.outWidth bits)
    val combinedScale = out UInt(9 bits)
  }

  io.dotProduct    := io.treeSum
  // SpinalHDL: resize esplicito a 9 bit per la somma degli scale
  io.combinedScale := (io.scaleA.resize(9) + io.scaleB.resize(9)).resize(9)
}

// -----------------------------------------------------------------------------
// Top-level: MXFP4 Dot-Product Engine
//
// -----------------------------------------------------------------------------
class MXFP4DotProductEngine(cfg: MXFP4Config) extends Component {
  val io = new Bundle {
    val vecA          = in  Vec(UInt(4 bits), cfg.n)
    val vecB          = in  Vec(UInt(4 bits), cfg.n)
    val scaleA        = in  UInt(8 bits)
    val scaleB        = in  UInt(8 bits)
    val dotProduct    = out SInt(cfg.outWidth bits)
    val combinedScale = out UInt(9 bits)
  }

  // Fase 1: N moltiplicatori in parallelo
  // SpinalHDL: Seq.fill + new crea N istanze hardware indipendenti
  val multipliers = Seq.fill(cfg.n)(new MXFP4Multiplier)
  for (i <- 0 until cfg.n) {
    multipliers(i).io.a := io.vecA(i)
    multipliers(i).io.b := io.vecB(i)
  }

  // Fase 2: Allineamento
  val aligner = new ExponentAligner(cfg)
  for (i <- 0 until cfg.n) {
    aligner.io.signs(i) := multipliers(i).io.sign
    aligner.io.exps(i)  := multipliers(i).io.expOut
    aligner.io.mants(i) := multipliers(i).io.mantOut
  }

  // Fase 3: Adder Tree
  val adderTree = new AdderTree(cfg)
  adderTree.io.inputs := aligner.io.aligned

  // Fase 4: Shared Scale
  val scaleIntegrator = new SharedScaleIntegrator(cfg)
  scaleIntegrator.io.treeSum := adderTree.io.result
  scaleIntegrator.io.scaleA  := io.scaleA
  scaleIntegrator.io.scaleB  := io.scaleB

  io.dotProduct    := scaleIntegrator.io.dotProduct
  io.combinedScale := scaleIntegrator.io.combinedScale
}

// -----------------------------------------------------------------------------
// Generazione SystemVerilog parametrica
// Esegui con: sbt "runMain mxfp4.GenerateVerilog"
// I file .sv vengono scritti in ./generated/
// -----------------------------------------------------------------------------
object GenerateVerilog extends App {

  val configurations = Seq(
    MXFP4Config(n = 32, pipelineDepth = 0),
    MXFP4Config(n = 32, pipelineDepth = 1),
    MXFP4Config(n = 32, pipelineDepth = 2),
    MXFP4Config(n =  4, pipelineDepth = 0),
    MXFP4Config(n =  8, pipelineDepth = 1),
  )

  val outDir = new java.io.File("generated")
  outDir.mkdirs()

  for (cfg <- configurations) {
    val label = s"N${cfg.n}_P${cfg.pipelineDepth}"
    println(s"\n>>> Generazione SpinalHDL: $label")
    println(s"    n=${cfg.n}  pipelineDepth=${cfg.pipelineDepth}  treeDepth=${cfg.treeDepth}  outWidth=${cfg.outWidth} bit")

    // SpinalHDL: SpinalSystemVerilog genera direttamente .sv senza FIRRTL
    val report = SpinalConfig(
      targetDirectory  = "generated",
      netlistFileName  = s"MXFP4DotProductEngine_$label.sv",
      defaultClockDomainFrequency = FixedFrequency(100 MHz)
    ).generateSystemVerilog(new MXFP4DotProductEngine(cfg))

    println(s"    Scritto: generated/MXFP4DotProductEngine_$label.sv")
    println(s"    Report: ${report.toplevelName}")
  }

  println("\n>>> Generazione completata. File in ./generated/")
}
