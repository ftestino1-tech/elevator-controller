# =============================================================================
# Waveform demo — MXFP4DotProductEngine N=4, pipeline_depth=0
# Cambia gli input ogni 2 cicli per mostrare transizioni visibili in GTKWave
# Esegui: python3 tb/waveform_demo.py
# Apri:   gtkwave tb/waveform_demo.vcd tb/waveform_demo.gtkw
# =============================================================================

import sys, os
sys.path.insert(0, os.path.join(os.path.dirname(__file__), '..', 'src'))

from mxfp4_dot_product import MXFP4DotProductEngine
from amaranth.sim import Simulator, Tick

TB_DIR = os.path.dirname(os.path.abspath(__file__))

def run():
    dut = MXFP4DotProductEngine(n=4, pipeline_depth=0)

    # Sequenza di configurazioni da mostrare nelle waveform
    # (vecA_val, vecB_val, scaleA, scaleB, label)
    stimuli = [
        (0x2, 0x2, 127, 127, "1.0 x 1.0 → 256"),
        (0x3, 0x2, 127, 127, "1.5 x 1.0 → 384"),
        (0x4, 0x4, 127, 127, "2.0 x 2.0 → 1024"),
        (0x2, 0xA, 127, 127, "1.0 x -1.0 → -256"),
        (0x0, 0x2, 127, 127, "0.0 x 1.0 → 0"),
        (0x7, 0x7, 127, 127, "6.0 x 6.0 → 14400"),
        (0x2, 0x2, 130, 125, "scale 130+125 → cScale=255"),
        (0x3, 0x3, 127, 127, "1.5 x 1.5 → 576"),
    ]

    def sign_extend(v, w):
        mask = (1 << w) - 1
        v = v & mask
        return v - (1 << w) if v & (1 << (w-1)) else v

    def process():
        for a_val, b_val, sa, sb, label in stimuli:
            # Imposta input
            for i in range(4):
                yield dut.vec_a[i].eq(a_val)
                yield dut.vec_b[i].eq(b_val)
            yield dut.scale_a.eq(sa)
            yield dut.scale_b.eq(sb)
            # Aspetta 3 cicli per vedere la transizione
            yield Tick()
            yield Tick()
            yield Tick()
            dp = sign_extend((yield dut.dot_product), dut.out_width)
            cs = (yield dut.combined_scale)
            print(f"  {label:30s}  dotProduct={dp:6d}  combinedScale={cs}")
        # Cicli finali per chiudere bene il VCD
        for _ in range(3):
            yield Tick()

    sim = Simulator(dut)
    sim.add_clock(1e-8)
    sim.add_process(process)

    ports = list(dut.vec_a) + list(dut.vec_b) + \
            [dut.scale_a, dut.scale_b, dut.dot_product, dut.combined_scale]

    vcd_path  = os.path.join(TB_DIR, "waveform_demo.vcd")
    gtkw_path = os.path.join(TB_DIR, "waveform_demo.gtkw")

    with sim.write_vcd(vcd_path, gtkw_file=gtkw_path, traces=ports):
        sim.run()

    print(f"\nWaveform scritto: {vcd_path}")
    print(f"Apri con: gtkwave {vcd_path} {gtkw_path}")

if __name__ == "__main__":
    print("=== Waveform Demo — MXFP4 N=4 pipeline_depth=0 ===\n")
    run()
