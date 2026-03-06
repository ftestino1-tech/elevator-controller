#include <verilated.h>
#include <verilated_vcd_c.h>
#include "obj_dir/VElevatorController.h"

#define DOOR_WAIT 50

vluint64_t sim_time = 0;

void tick(VElevatorController* dut, VerilatedVcdC* vcd) {
    dut->clock = 0;
    dut->eval();
    vcd->dump(sim_time++);
    dut->clock = 1;
    dut->eval();
    vcd->dump(sim_time++);
}

void ticks(VElevatorController* dut, VerilatedVcdC* vcd, int n) {
    for (int i = 0; i < n; i++) tick(dut, vcd);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    VElevatorController* dut = new VElevatorController;
    VerilatedVcdC* vcd = new VerilatedVcdC;
    dut->trace(vcd, 99);
    vcd->open("elevator_verilator.vcd");

    // Reset
    dut->reset = 1;
    dut->io_floorRequest = 0;
    dut->io_currentFloorSensor = 1;
    dut->io_doorSensor = 0;
    dut->io_emergency = 0;
    dut->io_overload = 0;
    ticks(dut, vcd, 5);
    dut->reset = 0;
    ticks(dut, vcd, 3);

    // --- Test 1: IDLE ---
    printf("=== Test: IDLE ===\n");
    printf("  motorUp=%d motorDown=%d\n", dut->io_motorUp, dut->io_motorDown);

    // --- Test 2: MOVING UP (piano 0 -> piano 3) ---
    printf("=== Test: MOVING UP ===\n");
    dut->io_floorRequest = 8;
    ticks(dut, vcd, 3);
    dut->io_floorRequest = 0;
    ticks(dut, vcd, 2);
    printf("  motorUp=%d\n", dut->io_motorUp);

    dut->io_currentFloorSensor = 8;
    ticks(dut, vcd, 3);

    dut->io_doorSensor = 1;
    ticks(dut, vcd, 2);
    printf("  doorOpen=%d\n", dut->io_doorOpen);
    ticks(dut, vcd, DOOR_WAIT + 10);

    dut->io_doorSensor = 0;
    ticks(dut, vcd, 20);

    // --- Test 3: MOVING DOWN (piano 3 -> piano 1) ---
    printf("=== Test: MOVING DOWN ===\n");
    dut->io_floorRequest = 2;
    ticks(dut, vcd, 5);
    dut->io_floorRequest = 0;
    ticks(dut, vcd, 5);
    printf("  motorDown=%d\n", dut->io_motorDown);

    dut->io_currentFloorSensor = 2;
    ticks(dut, vcd, 3);
    dut->io_doorSensor = 1;
    ticks(dut, vcd, 2);
    ticks(dut, vcd, DOOR_WAIT + 10);
    dut->io_doorSensor = 0;
    ticks(dut, vcd, 10);

    // --- Test 4: EMERGENCY ---
    printf("=== Test: EMERGENCY ===\n");
    dut->io_floorRequest = 8;
    ticks(dut, vcd, 3);
    dut->io_floorRequest = 0;
    ticks(dut, vcd, 2);
    dut->io_emergency = 1;
    ticks(dut, vcd, 3);
    printf("  doorOpen in emergency=%d\n", dut->io_doorOpen);
    dut->io_emergency = 0;
    ticks(dut, vcd, 5);

    printf("=== Simulazione completata! ===\n");

    vcd->close();
    delete dut;
    delete vcd;
    return 0;
}
