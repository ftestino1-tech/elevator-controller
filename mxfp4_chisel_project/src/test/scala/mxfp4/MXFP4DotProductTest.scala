package mxfp4

import chisel3._
import chiseltest._
import chiseltest.simulator.WriteVcdAnnotation
import org.scalatest.flatspec.AnyFlatSpec

class MXFP4DotProductTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "MXFP4DotProductEngine"

  // ---------------------------------------------------------------------------
  // Test 1: N=4, pipeline_depth=0 — circuito combinatorio puro
  // vecA = vecB = [1.0, 1.0, 1.0, 1.0] → 0x2 = 0b0010 (s=0, e=01, m=0)
  // mant_eff = 1##0 = 0b10; prodotto mant = 0b10 * 0b10 = 4
  // aligned[i] = 4 << 4 = 64 (con 4 bit di guardia)
  // dotProduct atteso = 4 * 64 = 256
  // ---------------------------------------------------------------------------
  it should "calcolare dot product combinatorio N=4" in {
    val cfg = MXFP4Config(n = 4, pipelineDepth = 0)
    test(new MXFP4DotProductEngine(cfg))
      .withAnnotations(Seq(WriteVcdAnnotation)) { dut =>

      for (i <- 0 until 4) {
        dut.io.vecA(i).poke(0x2.U)
        dut.io.vecB(i).poke(0x2.U)
      }
      dut.io.scaleA.poke(127.U)
      dut.io.scaleB.poke(127.U)

      dut.clock.step(1)

      dut.io.combinedScale.expect(254.U)
      dut.io.dotProduct.expect(256.S)
      println(s"[TEST1] dotProduct = ${dut.io.dotProduct.peek().litValue}")
      println(s"[TEST1] combinedScale = ${dut.io.combinedScale.peek().litValue}")
    }
  }

  // ---------------------------------------------------------------------------
  // Test 2: N=4, pipeline_depth=0 — vettori con segni opposti
  // vecA = [1.0, ...] → 0x2; vecB = [-1.0, ...] → 0xA (s=1, e=01, m=0)
  // sign_out = 0 XOR 1 = 1 → negativo
  // dotProduct atteso = -256
  // ---------------------------------------------------------------------------
  it should "gestire segni negativi correttamente" in {
    val cfg = MXFP4Config(n = 4, pipelineDepth = 0)
    test(new MXFP4DotProductEngine(cfg))
      .withAnnotations(Seq(WriteVcdAnnotation)) { dut =>

      for (i <- 0 until 4) {
        dut.io.vecA(i).poke(0x2.U)   //  1.0
        dut.io.vecB(i).poke(0xA.U)   // -1.0
      }
      dut.io.scaleA.poke(127.U)
      dut.io.scaleB.poke(127.U)

      dut.clock.step(1)

      dut.io.combinedScale.expect(254.U)
      dut.io.dotProduct.expect(-256.S)
      println(s"[TEST2] dotProduct = ${dut.io.dotProduct.peek().litValue}")
    }
  }

  // ---------------------------------------------------------------------------
  // Test 3: N=4, pipeline_depth=0 — vettore zero
  // vecA = [0.0, ...] → 0x0; exp=0, mant=0 → exp_out=0, mant_out=0b10*0=0
  // dotProduct atteso = 0
  // ---------------------------------------------------------------------------
  it should "restituire zero con vettore nullo" in {
    val cfg = MXFP4Config(n = 4, pipelineDepth = 0)
    test(new MXFP4DotProductEngine(cfg))
      .withAnnotations(Seq(WriteVcdAnnotation)) { dut =>

      for (i <- 0 until 4) {
        dut.io.vecA(i).poke(0x0.U)   // 0.0
        dut.io.vecB(i).poke(0x2.U)   // 1.0
      }
      dut.io.scaleA.poke(127.U)
      dut.io.scaleB.poke(127.U)

      dut.clock.step(1)

      dut.io.dotProduct.expect(0.S)
      println(s"[TEST3] dotProduct = ${dut.io.dotProduct.peek().litValue}")
    }
  }

  // ---------------------------------------------------------------------------
  // Test 4: N=8, pipeline_depth=1 — 1 registro nell'adder tree
  // vecA = vecB = [1.0 x8] → 0x2; dotProduct atteso = 8 * 64 = 512
  // Risultato valido dopo 2 cicli di clock
  // ---------------------------------------------------------------------------
  it should "funzionare con pipeline_depth=1 su N=8" in {
    val cfg = MXFP4Config(n = 8, pipelineDepth = 1)
    test(new MXFP4DotProductEngine(cfg))
      .withAnnotations(Seq(WriteVcdAnnotation)) { dut =>

      for (i <- 0 until 8) {
        dut.io.vecA(i).poke(0x2.U)
        dut.io.vecB(i).poke(0x2.U)
      }
      dut.io.scaleA.poke(127.U)
      dut.io.scaleB.poke(127.U)

      dut.clock.step(2)   // latenza = 2 cicli con depth=1

      dut.io.combinedScale.expect(254.U)
      dut.io.dotProduct.expect(512.S)
      println(s"[TEST4] dotProduct = ${dut.io.dotProduct.peek().litValue}")
      println(s"[TEST4] combinedScale = ${dut.io.combinedScale.peek().litValue}")
    }
  }

  // ---------------------------------------------------------------------------
  // Test 5: N=8, pipeline_depth=2 — 2 registri nell'adder tree
  // vecA = [1.5 x8] → 0x3 (s=0, e=01, m=1)
  // vecB = [1.0 x8] → 0x2
  // mant_eff_A=0b11, mant_eff_B=0b10; prodotto=6; aligned=6<<4=96
  // dotProduct atteso = 8 * 96 = 768
  // Risultato valido dopo 3 cicli di clock
  // ---------------------------------------------------------------------------
  it should "funzionare con pipeline_depth=2 su N=8" in {
    val cfg = MXFP4Config(n = 8, pipelineDepth = 2)
    test(new MXFP4DotProductEngine(cfg))
      .withAnnotations(Seq(WriteVcdAnnotation)) { dut =>

      for (i <- 0 until 8) {
        dut.io.vecA(i).poke(0x3.U)   // 1.5
        dut.io.vecB(i).poke(0x2.U)   // 1.0
      }
      dut.io.scaleA.poke(127.U)
      dut.io.scaleB.poke(127.U)

      dut.clock.step(3)   // latenza = 3 cicli con depth=2

      dut.io.combinedScale.expect(254.U)
      dut.io.dotProduct.expect(768.S)
      println(s"[TEST5] dotProduct = ${dut.io.dotProduct.peek().litValue}")
    }
  }

  // ---------------------------------------------------------------------------
  // Test 6: N=4 — verifica combinedScale con scale diversi
  // scaleA=130, scaleB=125 → combinedScale atteso = 255
  // ---------------------------------------------------------------------------
  it should "sommare correttamente scaleA e scaleB" in {
    val cfg = MXFP4Config(n = 4, pipelineDepth = 0)
    test(new MXFP4DotProductEngine(cfg))
      .withAnnotations(Seq(WriteVcdAnnotation)) { dut =>

      for (i <- 0 until 4) {
        dut.io.vecA(i).poke(0x2.U)
        dut.io.vecB(i).poke(0x2.U)
      }
      dut.io.scaleA.poke(130.U)
      dut.io.scaleB.poke(125.U)

      dut.clock.step(1)

      dut.io.combinedScale.expect(255.U)
      println(s"[TEST6] combinedScale = ${dut.io.combinedScale.peek().litValue}")
    }
  }
}
