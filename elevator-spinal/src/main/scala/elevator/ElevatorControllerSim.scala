package elevator

import spinal.core._
import spinal.core.sim._

object ElevatorControllerSim extends App {

  SimConfig
    .withVcdWave
    .compile(new ElevatorController(4))
    .doSim { dut =>

      dut.clockDomain.forkStimulus(period = 10)

      def tick(n: Int = 1): Unit =
        dut.clockDomain.waitRisingEdge(n)

      // Aspetta finche' una condizione e' vera (max maxTicks cicli)
      def waitUntil(maxTicks: Int)(cond: => Boolean): Unit = {
        var i = 0
        while (!cond && i < maxTicks) {
          tick(1)
          i += 1
        }
        if (!cond) println(s"  TIMEOUT dopo $maxTicks tick!")
      }

      // Init
      dut.io.emergency.#=(false)
      dut.io.overload.#=(false)
      dut.io.doorSensor.#=(false)
      dut.io.floorRequest.#=(0)
      dut.io.currentFloorSensor.#=(1)  // piano 0
      tick(5)

      // --- Test 1: IDLE ---
      println("=== Test: IDLE ===")
      assert(dut.io.motorUp.toBoolean == false)
      assert(dut.io.motorDown.toBoolean == false)
      println("  OK")

      // --- Test 2: MOVING UP (piano 0 -> piano 3) ---
      println("=== Test: MOVING UP ===")
      dut.io.floorRequest.#=(8)  // bit 3
      tick(3)
      dut.io.floorRequest.#=(0)

      waitUntil(20) { dut.io.motorUp.toBoolean }
      assert(dut.io.motorUp.toBoolean == true)
      println("  motorUp=true OK")

      // Arriva al piano 3
      dut.io.currentFloorSensor.#=(8)
      tick(3)

      // Apre porta
      dut.io.doorSensor.#=(true)
      waitUntil(20) { dut.io.doorOpen.toBoolean }
      assert(dut.io.doorOpen.toBoolean == true)
      println("  doorOpen=true OK")

      // Attesa DOOR_WAIT (50 cicli) + margine
      tick(60)

      // Ora siamo in doorClosing: abbassa doorSensor
      dut.io.doorSensor.#=(false)

      // Aspetta ritorno in IDLE (motorUp e motorDown entrambi false, doorOpen false)
      waitUntil(50) {
        !dut.io.motorUp.toBoolean &&
        !dut.io.motorDown.toBoolean &&
        !dut.io.doorOpen.toBoolean &&
        !dut.io.doorClose.toBoolean
      }
      println(s"  tornato in IDLE: motorUp=${dut.io.motorUp.toBoolean} doorOpen=${dut.io.doorOpen.toBoolean} OK")

      // --- Test 3: MOVING DOWN (piano 3 -> piano 1) ---
      println("=== Test: MOVING DOWN ===")
      dut.io.floorRequest.#=(2)  // bit 1
      tick(3)
      dut.io.floorRequest.#=(0)

      waitUntil(20) { dut.io.motorDown.toBoolean }
      assert(dut.io.motorDown.toBoolean == true)
      println("  motorDown=true OK")

      // Arriva al piano 1
      dut.io.currentFloorSensor.#=(2)
      tick(3)

      // Apre porta
      dut.io.doorSensor.#=(true)
      waitUntil(20) { dut.io.doorOpen.toBoolean }
      tick(60)

      dut.io.doorSensor.#=(false)
      waitUntil(50) {
        !dut.io.motorUp.toBoolean &&
        !dut.io.motorDown.toBoolean &&
        !dut.io.doorOpen.toBoolean &&
        !dut.io.doorClose.toBoolean
      }
      println("  ciclo completo OK")

      // --- Test 4: EMERGENCY ---
      println("=== Test: EMERGENCY ===")
      dut.io.floorRequest.#=(8)
      tick(3)
      dut.io.floorRequest.#=(0)
      tick(3)

      dut.io.emergency.#=(true)
      tick(3)
      assert(dut.io.doorOpen.toBoolean == true)
      println(s"  doorOpen in emergency=true OK")

      dut.io.emergency.#=(false)
      dut.io.doorSensor.#=(false)
      tick(5)

      println("=== Tutti i test passati! ===")
    }
}