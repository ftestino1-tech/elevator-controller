from amaranth import *
from amaranth.back.verilog import convert
from elevator_controller import ElevatorController

dut = ElevatorController(num_floors=4)
v = convert(dut, ports=[
    dut.floor_request,
    dut.current_floor_sensor,
    dut.door_sensor,
    dut.emergency,
    dut.overload,
    dut.motor_up,
    dut.motor_down,
    dut.door_open,
    dut.door_close,
    dut.current_floor,
])
with open("ElevatorController.v", "w") as f:
    f.write(v)
print("ElevatorController.v generato!")
