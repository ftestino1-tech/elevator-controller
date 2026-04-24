import sys, os
sys.path.insert(0, os.path.join(os.path.dirname(__file__), '..', 'src'))

from mxfp4_dot_product import MXFP4DotProductEngine
from amaranth import *
from amaranth.sim import Simulator, Tick

TB_DIR = os.path.dirname(os.path.abspath(__file__))
os.makedirs(TB_DIR, exist_ok=True)

pass_count = 0
fail_count = 0

def sign_extend(value, width):
    mask = (1 << width) - 1
    v = value & mask
    if v & (1 << (width - 1)):
        v -= (1 << width)
    return v

def check(name, got, expected):
    global pass_count, fail_count
    if got == expected:
        print(f"  [PASS] {name} = {got}")
        pass_count += 1
    else:
        print(f"  [FAIL] {name}  got={got}  expected={expected}")
        fail_count += 1

def check_positive(name, got):
    global pass_count, fail_count
    if got > 0:
        print(f"  [PASS] {name} = {got} (> 0)")
        pass_count += 1
    else:
        print(f"  [FAIL] {name} = {got} (atteso > 0)")
        fail_count += 1

def collect_ports(dut):
    return list(dut.vec_a) + list(dut.vec_b) + \
           [dut.scale_a, dut.scale_b, dut.dot_product, dut.combined_scale]

def run_sim(dut, process_fn, vcd_name, cycles=4):
    sim = Simulator(dut)
    sim.add_clock(1e-8)

    def wrapper():
        yield from process_fn()
        for _ in range(cycles):
            yield Tick()

    sim.add_process(wrapper)
    vcd_path  = os.path.join(TB_DIR, vcd_name)
    gtkw_path = vcd_path.replace(".vcd", ".gtkw")
    with sim.write_vcd(vcd_path, gtkw_file=gtkw_path, traces=collect_ports(dut)):
        sim.run()

# TEST 1
def test_1():
    print("\n[TEST 1] vecA=vecB=[1.0 x4] (0x2) — combinatorio N=4")
    dut = MXFP4DotProductEngine(n=4, pipeline_depth=0)
    def process():
        for i in range(4):
            yield dut.vec_a[i].eq(0x2); yield dut.vec_b[i].eq(0x2)
        yield dut.scale_a.eq(127); yield dut.scale_b.eq(127)
        yield Tick(); yield Tick()
        check("dotProduct",    sign_extend((yield dut.dot_product), dut.out_width), 256)
        check("combinedScale", (yield dut.combined_scale), 254)
    run_sim(dut, process, "test1.vcd")

# TEST 2
def test_2():
    print("\n[TEST 2] vecA=[1.0 x4] vecB=[-1.0 x4] (0xA)")
    dut = MXFP4DotProductEngine(n=4, pipeline_depth=0)
    def process():
        for i in range(4):
            yield dut.vec_a[i].eq(0x2); yield dut.vec_b[i].eq(0xA)
        yield dut.scale_a.eq(127); yield dut.scale_b.eq(127)
        yield Tick(); yield Tick()
        check("dotProduct",    sign_extend((yield dut.dot_product), dut.out_width), -256)
        check("combinedScale", (yield dut.combined_scale), 254)
    run_sim(dut, process, "test2.vcd")

# TEST 3
def test_3():
    print("\n[TEST 3] vecA=[0.0 x4] vecB=[1.0 x4]")
    dut = MXFP4DotProductEngine(n=4, pipeline_depth=0)
    def process():
        for i in range(4):
            yield dut.vec_a[i].eq(0x0); yield dut.vec_b[i].eq(0x2)
        yield dut.scale_a.eq(127); yield dut.scale_b.eq(127)
        yield Tick(); yield Tick()
        check("dotProduct", sign_extend((yield dut.dot_product), dut.out_width), 0)
    run_sim(dut, process, "test3.vcd")

# TEST 4
def test_4():
    print("\n[TEST 4] vecA=vecB=[1.0 x8] — pipeline_depth=1")
    dut = MXFP4DotProductEngine(n=8, pipeline_depth=1)
    def process():
        for i in range(8):
            yield dut.vec_a[i].eq(0x2); yield dut.vec_b[i].eq(0x2)
        yield dut.scale_a.eq(127); yield dut.scale_b.eq(127)
        for _ in range(4): yield Tick()
        check("dotProduct",    sign_extend((yield dut.dot_product), dut.out_width), 512)
        check("combinedScale", (yield dut.combined_scale), 254)
    run_sim(dut, process, "test4.vcd", cycles=2)

# TEST 5
def test_5():
    print("\n[TEST 5] vecA=[1.5 x8] vecB=[1.0 x8] — pipeline_depth=2")
    dut = MXFP4DotProductEngine(n=8, pipeline_depth=2)
    def process():
        for i in range(8):
            yield dut.vec_a[i].eq(0x3); yield dut.vec_b[i].eq(0x2)
        yield dut.scale_a.eq(127); yield dut.scale_b.eq(127)
        for _ in range(5): yield Tick()
        check("dotProduct",    sign_extend((yield dut.dot_product), dut.out_width), 768)
        check("combinedScale", (yield dut.combined_scale), 254)
    run_sim(dut, process, "test5.vcd", cycles=2)

# TEST 6
def test_6():
    print("\n[TEST 6] scaleA=130  scaleB=125")
    dut = MXFP4DotProductEngine(n=4, pipeline_depth=0)
    def process():
        for i in range(4):
            yield dut.vec_a[i].eq(0x2); yield dut.vec_b[i].eq(0x2)
        yield dut.scale_a.eq(130); yield dut.scale_b.eq(125)
        yield Tick(); yield Tick()
        check("combinedScale", (yield dut.combined_scale), 255)
    run_sim(dut, process, "test6.vcd")

if __name__ == "__main__":
    print("=== Amaranth 0.5 Testbench — MXFP4DotProductEngine ===")
    test_1(); test_2(); test_3(); test_4(); test_5(); test_6()
    print(f"\n=== Risultato: {pass_count} PASS, {fail_count} FAIL ===")
    if fail_count == 0:
        print(">>> ALL TESTS PASSED <<<")
        print(f"\nWaveform: gtkwave tb/test1.vcd tb/test1.gtkw")
    else:
        print(f">>> {fail_count} TEST(S) FAILED <<<")
        sys.exit(1)
