# MXFP4 Dot-Product Engine — BlueSpec SystemVerilog (BSV)

Generatore hardware parametrico per MXFP4 scritto in BSV.

## Prerequisiti

BlueSpec Compiler (bsc) installato in /opt/bsc:

    export PATH=/opt/bsc/bin:$PATH

## Struttura

    mxfp4_bluespec_project/
    ├── Makefile
    ├── src/
    │   └── MXFP4DotProduct.bsv     ← design principale
    ├── tb/
    │   └── MXFP4Testbench.bsv      ← testbench (6 test)
    ├── build/                       ← file intermedi (.bo, .ba)
    └── generated/                   ← Verilog generato (.v)

## Comandi

### Simulazione Bluesim (6 test funzionali)
    make sim

### Generazione Verilog (4 varianti)
    make verilog

### Pulizia
    make clean

## Differenze rispetto a Chisel/SpinalHDL/Amaranth

| Aspetto            | Chisel/SpinalHDL  | Amaranth          | BSV                    |
|--------------------|-------------------|-------------------|------------------------|
| Linguaggio ospite  | Scala             | Python            | Autonomo               |
| Paradigma          | RTL               | RTL sincrono      | Guarded Atomic Actions |
| Modulo base        | Module/Component  | Elaboratable      | module mk<Nome>        |
| Funzioni comb.     | def in Scala      | metodi Python     | function BSV           |
| Pipeline           | RegNext(sig)      | m.d.sync += reg   | Reg#(t) + rule         |
| Simulatore         | Verilator         | Sim. Python nativo| Bluesim (incluso)      |
| Output Verilog     | via FIRRTL        | via Yosys         | diretto (bsc -verilog) |
| Verifica formale   | parziale          | limitata          | nativa (GAA)           |

## Note sui nomi dei moduli

BSV usa il prefisso 'mk' per i moduli (convenzione della comunity):
- mkMXFP4DotProduct_N4_P0  → N=4, pipeline_depth=0
- mkMXFP4DotProduct_N4_P1  → N=4, pipeline_depth=1
- mkMXFP4DotProduct_N8_P0  → N=8, pipeline_depth=0
- mkMXFP4DotProduct_N32_P0 → N=32, pipeline_depth=0
