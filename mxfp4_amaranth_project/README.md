# MXFP4 Dot-Product Engine — Amaranth HDL

## Setup
    python3 -m venv venv
    source venv/bin/activate
    pip install amaranth==0.5.4

## Test (simulatore nativo Python, no Verilator)
    python3 tb/test_mxfp4.py

## Genera Verilog (richiede yosys: sudo apt-get install yosys)
    python3 generate_verilog.py

## Waveform (dopo i test)
    gtkwave tb/test1.vcd tb/test1.gtkw
