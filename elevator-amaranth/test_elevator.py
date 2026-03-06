from amaranth import *
from amaranth.sim import Simulator
from elevator_controller import ElevatorController


def test_elevator():
    dut = ElevatorController(num_floors=4)
    sim = Simulator(dut)
    sim.add_clock(1e-6)  # 1 MHz

    async def testbench(ctx):
        # --- Init ---
        ctx.set(dut.emergency, 0)
        ctx.set(dut.overload, 0)
        ctx.set(dut.door_sensor, 0)
        ctx.set(dut.floor_request, 0)
        ctx.set(dut.current_floor_sensor, 0b0001)  # piano 0

        # Aspetta qualche ciclo di clock
        for _ in range(3):
            await ctx.tick()

        # --- Test 1: IDLE ---
        print("=== Test: IDLE ===")
        state = ctx.get(dut.current_state)
        assert state == 0, f"Expected IDLE(0), got {state}"
        print(f"  current_state={state} ✓")

        # --- Test 2: richiesta piano 3 (dal piano 0, sale) ---
        print("=== Test: MOVING UP ===")
        ctx.set(dut.floor_request, 0b1000)  # piano 3
        await ctx.tick()
        await ctx.tick()
        ctx.set(dut.floor_request, 0)
        await ctx.tick()

        motor_up = ctx.get(dut.motor_up)
        assert motor_up == 1, f"Expected motor_up=1, got {motor_up}"
        print(f"  motor_up={motor_up} ✓")

        # Simula arrivo al piano 3
        ctx.set(dut.current_floor_sensor, 0b1000)
        await ctx.tick()
        await ctx.tick()

        # Apre la porta
        ctx.set(dut.door_sensor, 1)
        await ctx.tick()
        await ctx.tick()
        door_open = ctx.get(dut.door_open)
        assert door_open == 1, f"Expected door_open=1, got {door_open}"
        print(f"  door_open={door_open} ✓")

        # Attesa porta aperta (DOOR_WAIT = 50 cicli)
        for _ in range(60):
            await ctx.tick()

        # Chiude la porta
        ctx.set(dut.door_sensor, 0)
        await ctx.tick()
        await ctx.tick()
        await ctx.tick()

        # --- Test 3: richiesta piano 1 (dal piano 3, scende) ---
        print("=== Test: MOVING DOWN ===")
        ctx.set(dut.floor_request, 0b0010)  # piano 1
        await ctx.tick()
        await ctx.tick()
        ctx.set(dut.floor_request, 0)
        await ctx.tick()

        motor_down = ctx.get(dut.motor_down)
        assert motor_down == 1, f"Expected motor_down=1, got {motor_down}"
        print(f"  motor_down={motor_down} ✓")

        # Simula arrivo al piano 1
        ctx.set(dut.current_floor_sensor, 0b0010)
        await ctx.tick()
        await ctx.tick()

        # Apre la porta
        ctx.set(dut.door_sensor, 1)
        await ctx.tick()
        await ctx.tick()

        # Attesa porta aperta
        for _ in range(60):
            await ctx.tick()

        # Chiude la porta
        ctx.set(dut.door_sensor, 0)
        await ctx.tick()
        await ctx.tick()
        await ctx.tick()

        # --- Test 4: emergenza ---
        print("=== Test: EMERGENCY ===")
        ctx.set(dut.floor_request, 0b1000)
        await ctx.tick()
        await ctx.tick()
        ctx.set(dut.floor_request, 0)
        await ctx.tick()

        ctx.set(dut.emergency, 1)
        await ctx.tick()
        await ctx.tick()

        state = ctx.get(dut.current_state)
        assert state == 6, f"Expected EMERGENCY(6), got {state}"
        door_open = ctx.get(dut.door_open)
        assert door_open == 1, f"Expected door_open=1 in emergency, got {door_open}"
        print(f"  emergency state={state}, door_open={door_open} ✓")

        # Reset emergenza
        ctx.set(dut.emergency, 0)
        ctx.set(dut.door_sensor, 0)
        for _ in range(5):
            await ctx.tick()

        print("=== Tutti i test passati! ===")

    sim.add_testbench(testbench)

    with sim.write_vcd("elevator.vcd", "elevator.gtkw"):
        sim.run()

    print("File elevator.vcd generato!")


if __name__ == "__main__":
    test_elevator()