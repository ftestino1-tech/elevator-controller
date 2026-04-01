package mxfp4

import spinal.core._
import spinal.core.sim._
import org.scalatest.flatspec.AnyFlatSpec
import org.scalatest.matchers.should.Matchers

class MXFP4DotProductTest extends AnyFlatSpec with Matchers {
  behavior of "MXFP4DotProductEngine (SpinalHDL)"

  // Helper: estensione di segno da outWidth bit a Long
  def signExtend(value: Long, width: Int): Long = {
    val mask = (1L << width) - 1L
    val v    = value & mask
    if ((v & (1L << (width - 1))) != 0) v - (1L << width) else v
  }

  // ---------------------------------------------------------------------------
  // Test 1: N=4, pipeline_depth=0 — combinatorio puro
  // vecA=vecB=[1.0 x4] → 0x2; atteso dotProduct=256, combinedScale=254
  // ---------------------------------------------------------------------------
  it should "calcolare dot product combinatorio N=4" in {
    val cfg = MXFP4Config(n = 4, pipelineDepth = 0)
    SimConfig.withWave.compile(new MXFP4DotProductEngine(cfg)).doSim { dut =>
      dut.clockDomain.forkStimulus(period = 10)

      for (i <- 0 until 4) {
        dut.io.vecA(i) #= 0x2
        dut.io.vecB(i) #= 0x2
      }
      dut.io.scaleA #= 127
      dut.io.scaleB #= 127

      dut.clockDomain.waitSampling(2)

      val dp = signExtend(dut.io.dotProduct.toLong, cfg.outWidth)
      assert(dp == 256,    s"dotProduct: got $dp, expected 256")
      assert(dut.io.combinedScale.toInt == 254,
        s"combinedScale: got ${dut.io.combinedScale.toInt}, expected 254")
      println(s"[TEST1] dotProduct=$dp  combinedScale=${dut.io.combinedScale.toInt}")
    }
  }

  // ---------------------------------------------------------------------------
  // Test 2: N=4, pipeline_depth=0 — segni negativi
  // vecA=[1.0 x4] (0x2)  vecB=[-1.0 x4] (0xA)
  // atteso: dotProduct=-256
  // ---------------------------------------------------------------------------
  it should "gestire segni negativi correttamente" in {
    val cfg = MXFP4Config(n = 4, pipelineDepth = 0)
    SimConfig.withWave.compile(new MXFP4DotProductEngine(cfg)).doSim { dut =>
      dut.clockDomain.forkStimulus(period = 10)

      for (i <- 0 until 4) {
        dut.io.vecA(i) #= 0x2   //  1.0
        dut.io.vecB(i) #= 0xA   // -1.0
      }
      dut.io.scaleA #= 127
      dut.io.scaleB #= 127

      dut.clockDomain.waitSampling(2)

      val dp = signExtend(dut.io.dotProduct.toLong, cfg.outWidth)
      assert(dp == -256, s"dotProduct: got $dp, expected -256")
      assert(dut.io.combinedScale.toInt == 254,
        s"combinedScale: got ${dut.io.combinedScale.toInt}, expected 254")
      println(s"[TEST2] dotProduct=$dp")
    }
  }

  // ---------------------------------------------------------------------------
  // Test 3: N=4, pipeline_depth=0 — vettore zero
  // vecA=[0.0 x4] (0x0)  vecB=[1.0 x4] (0x2)
  // atteso: dotProduct=0
  // ---------------------------------------------------------------------------
  it should "restituire zero con vettore nullo" in {
    val cfg = MXFP4Config(n = 4, pipelineDepth = 0)
    SimConfig.withWave.compile(new MXFP4DotProductEngine(cfg)).doSim { dut =>
      dut.clockDomain.forkStimulus(period = 10)

      for (i <- 0 until 4) {
        dut.io.vecA(i) #= 0x0
        dut.io.vecB(i) #= 0x2
      }
      dut.io.scaleA #= 127
      dut.io.scaleB #= 127

      dut.clockDomain.waitSampling(2)

      val dp = signExtend(dut.io.dotProduct.toLong, cfg.outWidth)
      assert(dp == 0, s"dotProduct: got $dp, expected 0")
      println(s"[TEST3] dotProduct=$dp")
    }
  }

  // ---------------------------------------------------------------------------
  // Test 4: N=8, pipeline_depth=1 — 1 registro nell'adder tree
  // vecA=vecB=[1.0 x8] → atteso dotProduct=512
  // Risultato valido dopo 2 cicli (latenza pipeline)
  // ---------------------------------------------------------------------------
  it should "funzionare con pipeline_depth=1 su N=8" in {
    val cfg = MXFP4Config(n = 8, pipelineDepth = 1)
    SimConfig.withWave.compile(new MXFP4DotProductEngine(cfg)).doSim { dut =>
      dut.clockDomain.forkStimulus(period = 10)

      for (i <- 0 until 8) {
        dut.io.vecA(i) #= 0x2
        dut.io.vecB(i) #= 0x2
      }
      dut.io.scaleA #= 127
      dut.io.scaleB #= 127

      // pipeline_depth=1 → latenza 2 cicli
      dut.clockDomain.waitSampling(3)

      val dp = signExtend(dut.io.dotProduct.toLong, cfg.outWidth)
      assert(dp == 512, s"dotProduct: got $dp, expected 512")
      assert(dut.io.combinedScale.toInt == 254,
        s"combinedScale: got ${dut.io.combinedScale.toInt}, expected 254")
      println(s"[TEST4] dotProduct=$dp  combinedScale=${dut.io.combinedScale.toInt}")
    }
  }

  // ---------------------------------------------------------------------------
  // Test 5: N=8, pipeline_depth=2 — 2 registri nell'adder tree
  // vecA=[1.5 x8] (0x3)  vecB=[1.0 x8] (0x2)
  // atteso dotProduct=768, latenza 3 cicli
  // ---------------------------------------------------------------------------
  it should "funzionare con pipeline_depth=2 su N=8" in {
    val cfg = MXFP4Config(n = 8, pipelineDepth = 2)
    SimConfig.withWave.compile(new MXFP4DotProductEngine(cfg)).doSim { dut =>
      dut.clockDomain.forkStimulus(period = 10)

      for (i <- 0 until 8) {
        dut.io.vecA(i) #= 0x3   // 1.5
        dut.io.vecB(i) #= 0x2   // 1.0
      }
      dut.io.scaleA #= 127
      dut.io.scaleB #= 127

      // pipeline_depth=2 → latenza 3 cicli
      dut.clockDomain.waitSampling(4)

      val dp = signExtend(dut.io.dotProduct.toLong, cfg.outWidth)
      assert(dp == 768, s"dotProduct: got $dp, expected 768")
      assert(dut.io.combinedScale.toInt == 254,
        s"combinedScale: got ${dut.io.combinedScale.toInt}, expected 254")
      println(s"[TEST5] dotProduct=$dp")
    }
  }

  // ---------------------------------------------------------------------------
  // Test 6: N=4 — verifica combinedScale con scale diversi
  // scaleA=130, scaleB=125 → combinedScale=255
  // ---------------------------------------------------------------------------
  it should "sommare correttamente scaleA e scaleB" in {
    val cfg = MXFP4Config(n = 4, pipelineDepth = 0)
    SimConfig.withWave.compile(new MXFP4DotProductEngine(cfg)).doSim { dut =>
      dut.clockDomain.forkStimulus(period = 10)

      for (i <- 0 until 4) {
        dut.io.vecA(i) #= 0x2
        dut.io.vecB(i) #= 0x2
      }
      dut.io.scaleA #= 130
      dut.io.scaleB #= 125

      dut.clockDomain.waitSampling(2)

      assert(dut.io.combinedScale.toInt == 255,
        s"combinedScale: got ${dut.io.combinedScale.toInt}, expected 255")
      println(s"[TEST6] combinedScale=${dut.io.combinedScale.toInt}")
    }
  }
}
