package elevator

import chisel3._
import chisel3.util._

class ElevatorController(numFloors: Int = 4) extends Module {
  val io = IO(new Bundle {
    val floorRequest = Input(UInt(numFloors.W))
    val currentFloorSensor = Input(UInt(numFloors.W))
    val doorSensor = Input(Bool())
    val emergency = Input(Bool())
    val overload = Input(Bool())
    
    val motorUp = Output(Bool())
    val motorDown = Output(Bool())
    val doorOpen = Output(Bool())
    val doorClose = Output(Bool())
    val currentState = Output(UInt(3.W))
    val currentFloor = Output(UInt(log2Ceil(numFloors).W))
  })
  
  object State {
    val idle :: movingUp :: movingDown :: doorOpening :: doorOpenWait :: doorClosing :: emergency :: Nil = Enum(7)
  }
  
  val state = RegInit(State.idle)
  val currentFloor = RegInit(0.U(log2Ceil(numFloors).W))
  val targetFloor = RegInit(0.U(log2Ceil(numFloors).W))
  val requestQueue = RegInit(VecInit(Seq.fill(numFloors)(false.B)))
  val doorTimer = RegInit(0.U(24.W))
  val doorWaitTime = (50000000).U
  
  for (i <- 0 until numFloors) {
    when(io.floorRequest(i)) {
      requestQueue(i) := true.B
    }
  }
  
  for (i <- 0 until numFloors) {
    when(io.currentFloorSensor(i)) {
      currentFloor := i.U
    }
  }
  
  when(io.emergency) {
    state := State.emergency
    requestQueue.foreach(_ := false.B)
  } .otherwise {
    switch(state) {
      is(State.idle) {
        when(requestQueue.asUInt =/= 0.U) {
          val hasUpperRequest = requestQueue.zipWithIndex.map { case (req, i) =>
            req && (i.U > currentFloor)
          }.reduce(_ || _)
          
          val hasLowerRequest = requestQueue.zipWithIndex.map { case (req, i) =>
            req && (i.U < currentFloor)
          }.reduce(_ || _)
          
          when(requestQueue(currentFloor)) {
            targetFloor := currentFloor
            state := State.doorOpening
            requestQueue(currentFloor) := false.B
          } .elsewhen(hasUpperRequest) {
            for (i <- (numFloors - 1) to 0 by -1) {
              when(requestQueue(i) && (i.U > currentFloor)) {
                targetFloor := i.U
              }
            }
            state := State.movingUp
          } .elsewhen(hasLowerRequest) {
            for (i <- 0 until numFloors) {
              when(requestQueue(i) && (i.U < currentFloor)) {
                targetFloor := i.U
              }
            }
            state := State.movingDown
          }
        }
      }
      
      is(State.movingUp) {
        when(currentFloor === targetFloor) {
          state := State.doorOpening
          requestQueue(currentFloor) := false.B
        } .elsewhen(requestQueue(currentFloor)) {
          state := State.doorOpening
          requestQueue(currentFloor) := false.B
        }
      }
      
      is(State.movingDown) {
        when(currentFloor === targetFloor) {
          state := State.doorOpening
          requestQueue(currentFloor) := false.B
        } .elsewhen(requestQueue(currentFloor)) {
          state := State.doorOpening
          requestQueue(currentFloor) := false.B
        }
      }
      
      is(State.doorOpening) {
        when(io.doorSensor) {
          state := State.doorOpenWait
          doorTimer := 0.U
        }
      }
      
      is(State.doorOpenWait) {
        doorTimer := doorTimer + 1.U
        when(doorTimer >= doorWaitTime) {
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
  
  io.motorUp := state === State.movingUp
  io.motorDown := state === State.movingDown
  io.doorOpen := state === State.doorOpening || state === State.doorOpenWait || state === State.emergency
  io.doorClose := state === State.doorClosing
  io.currentState := state.asUInt
  io.currentFloor := currentFloor
}

object ElevatorControllerVerilog extends App {
  emitVerilog(new ElevatorController(4), Array("--target-dir", "generated"))
}
