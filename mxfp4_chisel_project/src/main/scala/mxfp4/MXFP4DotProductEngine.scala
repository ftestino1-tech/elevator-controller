package mxfp4

import chisel3._
import chisel3.util._

// -----------------------------------------------------------------------------
// Configurazione parametrica del generatore
// -----------------------------------------------------------------------------
case class MXFP4Config(
  n            : Int = 32,
  pipelineDepth: Int = 0
) {
  require(n > 0 && (n & (n - 1)) == 0, "n deve essere una potenza di 2")
  require(pipelineDepth >= 0 && pipelineDepth <= 2,
    "pipelineDepth deve essere 0, 1 o 2")
  val treeDepth: Int = log2Ceil(n)
}

// -----------------------------------------------------------------------------
// Fase 1: Moltiplicatore MXFP4 E2M1 a 4 bit
//
// Layout bit: [3]=segno  [2:1]=esponente_locale  [0]=mantissa_stored
//
// -----------------------------------------------------------------------------
class MXFP4Multiplier extends Module {
  val io = IO(new Bundle {
    val a       = Input(UInt(4.W))
    val b       = Input(UInt(4.W))
    val sign    = Output(UInt(1.W))
    val expOut  = Output(UInt(3.W))
    val mantOut = Output(UInt(4.W))
  })

  val signA = io.a(3)
  val expA  = io.a(2, 1)
  val mantA = io.a(0)

  val signB = io.b(3)
  val expB  = io.b(2, 1)
  val mantB = io.b(0)

  // Aggiunge il bit implicito '1' SOLO per valori non-zero.
  // Caso speciale: exp=0 e mant=0 -> valore e' 0.0, mantEff deve essere 0.
  // Per tutti gli altri valori: mantEff = "1" ## mant_stored (fixed point 1.x)
  val isZeroA = (expA === 0.U) && (mantA === 0.U)
  val isZeroB = (expB === 0.U) && (mantB === 0.U)
  val mantEffA = Mux(isZeroA, 0.U(2.W), 1.U(1.W) ## mantA)
  val mantEffB = Mux(isZeroB, 0.U(2.W), 1.U(1.W) ## mantB)

  io.sign    := signA ^ signB
  io.expOut  := expA +& expB
  io.mantOut := mantEffA * mantEffB
}

// -----------------------------------------------------------------------------
// Fase 2: Allineamento esponenti locali
//
// Trova exp_max tra gli N prodotti e shifta ogni mantissa a destra di
// (exp_max - exp_i) per incolonnarle prima della somma.
// Mantissa dal moltiplicatore: 4 bit (fixed point 2.2).
// Estesa a 8 bit con 4 bit di guardia per preservare precisione.
// -----------------------------------------------------------------------------
class ExponentAligner(n: Int) extends Module {
  val io = IO(new Bundle {
    val signs   = Input(Vec(n, UInt(1.W)))
    val exps    = Input(Vec(n, UInt(3.W)))
    val mants   = Input(Vec(n, UInt(4.W)))
    val aligned = Output(Vec(n, SInt(8.W)))
  })

  val expMax = io.exps.reduce((a, b) => Mux(a > b, a, b))

  for (i <- 0 until n) {
    val shift   = expMax - io.exps(i)
    val mantExt = io.mants(i) ## 0.U(4.W)   // 8 bit
    val shifted = (mantExt >> shift)(7, 0)
    io.aligned(i) := Mux(
      io.signs(i).asBool,
      -(shifted.zext),
       shifted.zext
    )
  }
}

// -----------------------------------------------------------------------------
// Fase 3: Adder Tree binario ricorsivo con pipeline parametrica
//
// buildTree riduce ricorsivamente il vettore sommando a coppie.
// maybeReg inserisce un RegNext in base al livello e al pipelineDepth:
//   depth=0 -> nessun registro (tutto combinatorio)
//   depth=1 -> 1 registro a meta' albero
//   depth=2 -> 2 registri a 1/3 e 2/3 dell'albero
// -----------------------------------------------------------------------------
class AdderTree(cfg: MXFP4Config) extends Module {
  val outWidth = 8 + cfg.treeDepth

  val io = IO(new Bundle {
    val inputs = Input(Vec(cfg.n, SInt(8.W)))
    val result = Output(SInt(outWidth.W))
  })

  def maybeReg(sig: SInt, levelIdx: Int): SInt = {
    val insertReg = cfg.pipelineDepth match {
      case 0 => false
      case 1 => levelIdx == cfg.treeDepth / 2
      case 2 => (levelIdx == cfg.treeDepth / 3) ||
                (levelIdx == (cfg.treeDepth * 2) / 3)
      case _ => false
    }
    if (insertReg) RegNext(sig) else sig
  }

  def buildTree(nodes: Seq[SInt], level: Int): SInt = {
    if (nodes.length == 1) {
      nodes(0)
    } else {
      val nextLevel = nodes.grouped(2).map { pair =>
        val sum = pair(0) +& pair(1)
        maybeReg(sum, level)
      }.toSeq
      buildTree(nextLevel, level + 1)
    }
  }

  val extInputs = io.inputs.map(_.pad(outWidth))
  io.result := buildTree(extInputs, 0)
}

// -----------------------------------------------------------------------------
// Fase 4: Integrazione Shared Scale
// -----------------------------------------------------------------------------
class SharedScaleIntegrator(cfg: MXFP4Config) extends Module {
  val treeOutWidth = 8 + cfg.treeDepth

  val io = IO(new Bundle {
    val treeSum       = Input(SInt(treeOutWidth.W))
    val scaleA        = Input(UInt(8.W))
    val scaleB        = Input(UInt(8.W))
    val dotProduct    = Output(SInt(treeOutWidth.W))
    val combinedScale = Output(UInt(9.W))
  })

  io.dotProduct    := io.treeSum
  io.combinedScale := io.scaleA +& io.scaleB
}

// -----------------------------------------------------------------------------
// Top-level: MXFP4 Dot-Product Engine
// -----------------------------------------------------------------------------
class MXFP4DotProductEngine(cfg: MXFP4Config) extends Module {
  val treeOutWidth = 8 + cfg.treeDepth

  val io = IO(new Bundle {
    val vecA          = Input(Vec(cfg.n, UInt(4.W)))
    val vecB          = Input(Vec(cfg.n, UInt(4.W)))
    val scaleA        = Input(UInt(8.W))
    val scaleB        = Input(UInt(8.W))
    val dotProduct    = Output(SInt(treeOutWidth.W))
    val combinedScale = Output(UInt(9.W))
  })

  // Fase 1
  val multipliers = Seq.fill(cfg.n)(Module(new MXFP4Multiplier))
  for (i <- 0 until cfg.n) {
    multipliers(i).io.a := io.vecA(i)
    multipliers(i).io.b := io.vecB(i)
  }

  // Fase 2
  val aligner = Module(new ExponentAligner(cfg.n))
  for (i <- 0 until cfg.n) {
    aligner.io.signs(i) := multipliers(i).io.sign
    aligner.io.exps(i)  := multipliers(i).io.expOut
    aligner.io.mants(i) := multipliers(i).io.mantOut
  }

  // Fase 3
  val adderTree = Module(new AdderTree(cfg))
  adderTree.io.inputs := aligner.io.aligned

  // Fase 4
  val scaleIntegrator = Module(new SharedScaleIntegrator(cfg))
  scaleIntegrator.io.treeSum := adderTree.io.result
  scaleIntegrator.io.scaleA  := io.scaleA
  scaleIntegrator.io.scaleB  := io.scaleB

  io.dotProduct    := scaleIntegrator.io.dotProduct
  io.combinedScale := scaleIntegrator.io.combinedScale
}


