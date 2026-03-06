#include <verilated.h>
#include <verilated_vcd_c.h>
#include "obj_dir/VElevatorController.h"

#define DOOR_WAIT 50

vluint64_t sim_time = 0;

void tick(VElevatorController* dut, VerilatedVcdC* vcd) {
    dut->clk = 0;
    dut->eval();
    vcd->dump(sim_time++);
    dut->clk = 1;
    dut->eval();
    vcd->dump(sim_time++);
}

void ticks(VElevatorController* dut, VerilatedVcdC* vcd, int n) {
    for (int i = 0; i < n; i++) tick(dut, vcd);
}

void waitIdle(VElevatorController* dut, VerilatedVcdC* vcd, int maxTicks = 200) {
    for (int i = 0; i < maxTicks; i++) {
        tick(dut, vcd);
        if (dut->motor_up == 0 && dut->motor_down == 0 &&
            dut->door_open == 0 && dut->door_close == 0) {
            printf("  tornato in IDLE dopo %d tick\n", i+1);
            return;
        }
    }
    printf("  TIMEOUT: non tornato in IDLE!\n");
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    VElevatorController* dut = new VElevatorController;
    VerilatedVcdC* vcd = new VerilatedVcdC;
    dut->trace(vcd, 99);
    vcd->open("elevator_amaranth.vcd");

    // Reset
    dut->rst = 1;
    dut->floor_request = 0;
    dut->current_floor_sensor = 1;
    dut->door_sensor = 0;
    dut->emergency = 0;
    dut->overload = 0;
    ticks(dut, vcd, 5);
    dut->rst = 0;
    ticks(dut, vcd, 3);

    // --- Test 1: IDLE ---
    printf("=== Test: IDLE ===\n");
    printf("  motor_up=%d motor_down=%d\n", dut->motor_up, dut->motor_down);

    // --- Test 2: MOVING UP (piano 0 -> piano 3) ---
    printf("=== Test: MOVING UP ===\n");
    dut->floor_request = 8;
    ticks(dut, vcd, 3);
    dut->floor_request = 0;
    ticks(dut, vcd, 2);
    printf("  motor_up=%d\n", dut->motor_up);

    dut->current_floor_sensor = 8;
    ticks(dut, vcd, 3);
    dut->door_sensor = 1;
    ticks(dut, vcd, 2);
    printf("  door_open=%d\n", dut->door_open);
    ticks(dut, vcd, DOOR_WAIT + 10);
    dut->door_sensor = 0;
    waitIdle(dut, vcd);

    // --- Test 3: MOVING DOWN (piano 3 -> piano 1) ---
    printf("=== Test: MOVING DOWN ===\n");
    dut->floor_request = 2;
    ticks(dut, vcd, 5);
    dut->floor_request = 0;
    ticks(dut, vcd, 5);
    printf("  motor_down=%d\n", dut->motor_down);

    dut->current_floor_sensor = 2;
    ticks(dut, vcd, 3);
    dut->door_sensor = 1;
    ticks(dut, vcd, 2);
    ticks(dut, vcd, DOOR_WAIT + 10);
    dut->door_sensor = 0;
    waitIdle(dut, vcd);

    // --- Test 4: EMERGENCY ---
    printf("=== Test: EMERGENCY ===\n");
    dut->floor_request = 8;
    ticks(dut, vcd, 3);
    dut->floor_request = 0;
    ticks(dut, vcd, 2);
    dut->emergency = 1;
    ticks(dut, vcd, 3);
    printf("  door_open in emergency=%d\n", dut->door_open);
    dut->emergency = 0;
    ticks(dut, vcd, 5);

    printf("=== Simulazione completata! ===\n");

    vcd->close();
    delete dut;
    delete vcd;
    return 0;
}
