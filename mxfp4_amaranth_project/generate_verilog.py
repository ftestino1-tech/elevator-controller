#!/usr/bin/env python3
# =============================================================================
# Generazione Verilog — MXFP4DotProductEngine (Amaranth 0.5)
# Usa amaranth-yosys (installato nel venv, no yosys di sistema necessario)
# Esegui con: python3 generate_verilog.py
# =============================================================================

import sys, os
sys.path.insert(0, os.path.join(os.path.dirname(__file__), 'src'))

from mxfp4_dot_product import MXFP4DotProductEngine
from amaranth.back import rtlil
import subprocess, shutil

CONFIGS = [(32,0),(32,1),(32,2),(4,0),(8,1)]
os.makedirs("generated", exist_ok=True)

print("=== Generazione Verilog — MXFP4DotProductEngine (Amaranth) ===\n")

# Trova yosys: prima nel venv, poi nel sistema
def find_yosys():
    # yosys installato da amaranth-yosys nel venv
    venv_yosys = os.path.join(
        os.path.dirname(sys.executable), "yosys"
    )
    if os.path.isfile(venv_yosys):
        return venv_yosys
    # yosys di sistema
    sys_yosys = shutil.which("yosys")
    if sys_yosys:
        return sys_yosys
    return None

yosys_bin = find_yosys()
if yosys_bin:
    print(f"Yosys trovato: {yosys_bin}\n")
else:
    print("Yosys non trovato — verranno scritti solo i file .il (RTLIL)\n")

for n, pd in CONFIGS:
    label = f"N{n}_P{pd}"
    print(f">>> {label}  n={n}  pipeline_depth={pd}")

    dut = MXFP4DotProductEngine(n=n, pipeline_depth=pd)
    ports = list(dut.vec_a) + list(dut.vec_b) + \
            [dut.scale_a, dut.scale_b, dut.dot_product, dut.combined_scale]

    # Genera RTLIL (sempre)
    il_text = rtlil.convert(dut, ports=ports)
    il_file = f"generated/MXFP4DotProduct_{label}.il"
    v_file  = f"generated/MXFP4DotProduct_{label}.v"

    with open(il_file, "w") as f:
        f.write(il_text)
    print(f"    RTLIL scritto: {il_file}")

    # Converti in Verilog se yosys disponibile
    if yosys_bin:
        yosys_cmd = (
            f"read_rtlil {il_file}; "
            f"proc; opt; clean; "
            f"write_verilog -noattr {v_file}"
        )
        r = subprocess.run(
            [yosys_bin, "-q", "-p", yosys_cmd],
            capture_output=True, text=True
        )
        if r.returncode == 0:
            size = os.path.getsize(v_file)
            print(f"    Verilog scritto: {v_file}  ({size} byte)")
        else:
            print(f"    Errore Yosys: {r.stderr[-200:]}")
    else:
        print(f"    (Yosys non disponibile, converti con: "
              f"yosys -p \"read_rtlil {il_file}; proc; write_verilog {v_file}\")")

print("\n>>> Generazione completata. File in ./generated/")
