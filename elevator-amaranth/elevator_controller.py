from amaranth import *


class ElevatorController(Elaboratable):
    def __init__(self, num_floors=4):
        self.num_floors = num_floors

        self.floor_request        = Signal(num_floors)
        self.current_floor_sensor = Signal(num_floors)
        self.door_sensor          = Signal()
        self.emergency            = Signal()
        self.overload             = Signal()

        self.motor_up      = Signal()
        self.motor_down    = Signal()
        self.door_open     = Signal()
        self.door_close    = Signal()
        self.current_state = Signal(3)
        self.current_floor = Signal(range(num_floors))

    def elaborate(self, platform):
        m = Module()

        num_floors    = self.num_floors
        request_queue = Signal(num_floors)
        current_floor = Signal(range(num_floors))
        target_floor  = Signal(range(num_floors))
        door_timer    = Signal(24)
        DOOR_WAIT     = 50

        # Aggiorna current_floor dal sensore
        for i in range(num_floors):
            with m.If(self.current_floor_sensor[i]):
                m.d.sync += current_floor.eq(i)

        # Aggiorna request_queue dai pulsanti
        for i in range(num_floors):
            with m.If(self.floor_request[i]):
                m.d.sync += request_queue[i].eq(1)

        m.d.comb += self.current_floor.eq(current_floor)

        with m.FSM(reset="IDLE") as fsm:

            with m.State("IDLE"):
                m.d.comb += self.current_state.eq(0)
                with m.If(self.emergency):
                    m.d.sync += request_queue.eq(0)
                    m.next = "EMERGENCY"
                with m.Elif(request_queue != 0):
                    with m.If(request_queue.bit_select(current_floor, 1)):
                        m.d.sync += [
                            target_floor.eq(current_floor),
                            request_queue.eq(request_queue & ~(1 << current_floor)),
                        ]
                        m.next = "DOOR_OPENING"
                    with m.Elif(request_queue >> (current_floor + 1) != 0):
                        for i in range(num_floors - 1, -1, -1):
                            with m.If(request_queue[i] & (i > current_floor)):
                                m.d.sync += target_floor.eq(i)
                        m.next = "MOVING_UP"
                    with m.Else():
                        for i in range(num_floors):
                            with m.If(request_queue[i] & (i < current_floor)):
                                m.d.sync += target_floor.eq(i)
                        m.next = "MOVING_DOWN"

            with m.State("MOVING_UP"):
                m.d.comb += self.current_state.eq(1)
                with m.If(self.emergency):
                    m.d.sync += request_queue.eq(0)
                    m.next = "EMERGENCY"
                with m.Elif(
                    (current_floor == target_floor) |
                    request_queue.bit_select(current_floor, 1)
                ):
                    m.d.sync += request_queue.eq(request_queue & ~(1 << current_floor))
                    m.next = "DOOR_OPENING"

            with m.State("MOVING_DOWN"):
                m.d.comb += self.current_state.eq(2)
                with m.If(self.emergency):
                    m.d.sync += request_queue.eq(0)
                    m.next = "EMERGENCY"
                with m.Elif(
                    (current_floor == target_floor) |
                    request_queue.bit_select(current_floor, 1)
                ):
                    m.d.sync += request_queue.eq(request_queue & ~(1 << current_floor))
                    m.next = "DOOR_OPENING"

            with m.State("DOOR_OPENING"):
                m.d.comb += self.current_state.eq(3)
                with m.If(self.emergency):
                    m.d.sync += request_queue.eq(0)
                    m.next = "EMERGENCY"
                with m.Elif(self.door_sensor):
                    m.d.sync += door_timer.eq(0)
                    m.next = "DOOR_OPEN_WAIT"

            with m.State("DOOR_OPEN_WAIT"):
                m.d.comb += self.current_state.eq(4)
                m.d.sync += door_timer.eq(door_timer + 1)
                with m.If(self.emergency):
                    m.d.sync += request_queue.eq(0)
                    m.next = "EMERGENCY"
                with m.Elif(door_timer >= DOOR_WAIT):
                    m.next = "DOOR_CLOSING"

            with m.State("DOOR_CLOSING"):
                m.d.comb += self.current_state.eq(5)
                with m.If(self.emergency):
                    m.d.sync += request_queue.eq(0)
                    m.next = "EMERGENCY"
                with m.Elif(~self.door_sensor):
                    m.next = "IDLE"

            with m.State("EMERGENCY"):
                m.d.comb += self.current_state.eq(6)
                with m.If(~self.emergency & ~self.door_sensor):
                    m.next = "IDLE"

        m.d.comb += [
            self.motor_up.eq(fsm.ongoing("MOVING_UP")),
            self.motor_down.eq(fsm.ongoing("MOVING_DOWN")),
            self.door_open.eq(
                fsm.ongoing("DOOR_OPENING") |
                fsm.ongoing("DOOR_OPEN_WAIT") |
                fsm.ongoing("EMERGENCY")
            ),
            self.door_close.eq(fsm.ongoing("DOOR_CLOSING")),
        ]

        return m