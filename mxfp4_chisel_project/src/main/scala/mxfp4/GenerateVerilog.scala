package mxfp4

import _root_.circt.stage.ChiselStage

// -----------------------------------------------------------------------------
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
    println(s"\n>>> Generazione: $label")
    println(s"    n=${cfg.n}  pipelineDepth=${cfg.pipelineDepth}  treeDepth=${cfg.treeDepth}  outWidth=${8 + cfg.treeDepth} bit")

    val verilog = ChiselStage.emitSystemVerilog(
      new MXFP4DotProductEngine(cfg),
      firtoolOpts = Array(
        "--disable-all-randomization",
        "--strip-debug-info"
      )
    )

    val outFile = new java.io.File(outDir, s"MXFP4DotProductEngine_$label.sv")
    val pw = new java.io.PrintWriter(outFile)
    pw.write(verilog)
    pw.close()
    println(s"    Scritto: ${outFile.getPath}")
  }

  println("\n>>> Generazione completata. File in ./generated/")
}
