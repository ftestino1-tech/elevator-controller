package elevator

import chisel3._
import chiseltest._
import chiseltest.simulator.WriteVcdAnnotation
import org.scalatest.flatspec.AnyFlatSpec

class ElevatorControllerTest extends AnyFlatSpec with ChiselScalatestTester {
  behavior of "ElevatorController"

  it should "initialize in idle state" in {
    test(new ElevatorController(4))
      .withAnnotations(Seq(WriteVcdAnnotation)) { dut =>
      dut.io.emergency.poke(false.B)
      dut.io.overload.poke(false.B)
      dut.io.doorSensor.poke(false.B)
      dut.io.floorRequest.poke(0.U)
      dut.io.currentFloorSensor.poke(1.U)

      dut.clock.step(1)
      dut.io.currentState.expect(0.U)
      dut.io.motorUp.expect(false.B)
      dut.io.motorDown.expect(false.B)
    }
  }

  it should "move up when requested" in {
    test(new ElevatorController(4))
      .withAnnotations(Seq(WriteVcdAnnotation)) { dut =>
      dut.io.emergency.poke(false.B)
      dut.io.overload.poke(false.B)
      dut.io.doorSensor.poke(false.B)
      dut.io.currentFloorSensor.poke(1.U)

      dut.clock.step(1)
      dut.io.floorRequest.poke(8.U)
      dut.clock.step(2)

      dut.io.motorUp.expect(true.B)
      dut.io.motorDown.expect(false.B)
    }
  }

  it should "move down when requested" in {
    test(new ElevatorController(4))
      .withAnnotations(Seq(WriteVcdAnnotation)) { dut =>
      dut.io.emergency.poke(false.B)
      dut.io.overload.poke(false.B)
      dut.io.doorSensor.poke(false.B)
      dut.io.currentFloorSensor.poke(8.U)

      dut.clock.step(1)
      dut.io.floorRequest.poke(1.U)
      dut.clock.step(2)

      dut.io.motorUp.expect(false.B)
      dut.io.motorDown.expect(true.B)
    }
  }

  it should "open doors at target floor" in {
    test(new ElevatorController(4))
      .withAnnotations(Seq(WriteVcdAnnotation)) { dut =>
      dut.io.emergency.poke(false.B)
      dut.io.overload.poke(false.B)
      dut.io.doorSensor.poke(false.B)
      dut.io.currentFloorSensor.poke(1.U)

      dut.clock.step(1)
      dut.io.floorRequest.poke(1.U)
      dut.clock.step(2)

      dut.io.doorOpen.expect(true.B)
    }
  }

  it should "handle emergency stop" in {
    test(new ElevatorController(4))
      .withAnnotations(Seq(WriteVcdAnnotation)) { dut =>
      dut.io.emergency.poke(false.B)
      dut.io.overload.poke(false.B)
      dut.io.doorSensor.poke(false.B)
      dut.io.currentFloorSensor.poke(1.U)
      dut.io.floorRequest.poke(8.U)

      dut.clock.step(2)
      dut.io.emergency.poke(true.B)
      dut.clock.step(1)

      dut.io.motorUp.expect(false.B)
      dut.io.motorDown.expect(false.B)
      dut.io.doorOpen.expect(true.B)
    }
  }
}
