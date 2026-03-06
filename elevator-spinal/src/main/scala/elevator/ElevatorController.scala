package elevator

import spinal.core._
import spinal.lib._

class ElevatorController(numFloors: Int = 4) extends Component {
  val io = new Bundle {
    val floorRequest       = in  Bits(numFloors bits)
    val currentFloorSensor = in  Bits(numFloors bits)
    val doorSensor         = in  Bool()
    val emergency          = in  Bool()
    val overload           = in  Bool()

    val motorUp            = out Bool()
    val motorDown          = out Bool()
    val doorOpen           = out Bool()
    val doorClose          = out Bool()
    val currentFloor       = out UInt(log2Up(numFloors) bits)
  }

  object State extends SpinalEnum {
    val idle, movingUp, movingDown,
        doorOpening, doorOpenWait,
        doorClosing, emergency = newElement()
  }

  val state        = RegInit(State.idle)
  val currentFloor = RegInit(U(0, log2Up(numFloors) bits))
  val targetFloor  = RegInit(U(0, log2Up(numFloors) bits))
  // Uso Vec di Bool invece di Bits per accesso dinamico
  val requestQueue = Vec(Reg(Bool()) init(False), numFloors)
  val doorTimer    = RegInit(U(0, 24 bits))
  val DOOR_WAIT    = 50

  // Segnali combinatori utili
  val reqAtCurrent  = requestQueue(currentFloor)
  val reqAtTarget   = requestQueue(targetFloor)
  val anyRequest    = requestQueue.reduce(_ || _)
  val hasUpper      = (0 until numFloors).map(i => requestQueue(i) && U(i) > currentFloor).reduce(_ || _)
  val hasLower      = (0 until numFloors).map(i => requestQueue(i) && U(i) < currentFloor).reduce(_ || _)

  // Aggiorna requestQueue dai pulsanti
  for (i <- 0 until numFloors) {
    when(io.floorRequest(i)) {
      requestQueue(i) := True
    }
  }

  // Aggiorna currentFloor dal sensore
  for (i <- 0 until numFloors) {
    when(io.currentFloorSensor(i)) {
      currentFloor := U(i)
    }
  }

  // FSM
  when(io.emergency) {
    state := State.emergency
    requestQueue.foreach(_ := False)
  } otherwise {
    switch(state) {

      is(State.idle) {
        when(anyRequest) {
          when(reqAtCurrent) {
            targetFloor      := currentFloor
            requestQueue(currentFloor) := False
            state            := State.doorOpening
          } elsewhen(hasUpper) {
            for (i <- (numFloors - 1) to 0 by -1) {
              when(requestQueue(i) && U(i) > currentFloor) {
                targetFloor := U(i)
              }
            }
            state := State.movingUp
          } otherwise {
            for (i <- 0 until numFloors) {
              when(requestQueue(i) && U(i) < currentFloor) {
                targetFloor := U(i)
              }
            }
            state := State.movingDown
          }
        }
      }

      is(State.movingUp) {
        when(currentFloor === targetFloor || reqAtCurrent) {
          requestQueue(currentFloor) := False
          state := State.doorOpening
        }
      }

      is(State.movingDown) {
        when(currentFloor === targetFloor || reqAtCurrent) {
          requestQueue(currentFloor) := False
          state := State.doorOpening
        }
      }

      is(State.doorOpening) {
        when(io.doorSensor) {
          doorTimer := 0
          state     := State.doorOpenWait
        }
      }

      is(State.doorOpenWait) {
        doorTimer := doorTimer + 1
        when(doorTimer >= DOOR_WAIT) {
          state := State.doorClosing
        }
      }

      is(State.doorClosing) {
        when(!io.doorSensor) {
          state := State.idle
        }
      }

      is(State.emergency) {
        when(!io.emergency && !io.doorSensor) {
          state := State.idle
        }
      }
    }
  }

  io.motorUp      := state === State.movingUp
  io.motorDown    := state === State.movingDown
  io.doorOpen     := state === State.doorOpening ||
                     state === State.doorOpenWait ||
                     state === State.emergency
  io.doorClose    := state === State.doorClosing
  io.currentFloor := currentFloor
}

object ElevatorControllerVerilog extends App {
  SpinalVerilog(new ElevatorController(4))
}