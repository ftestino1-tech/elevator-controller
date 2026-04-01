# Simulazione Vivado — MXFP4DotProductEngine

## File necessari
- `MXFP4DotProductEngine_N4_P0.sv`  ← generato da Chisel (in generated/)
- `tb_MXFP4_N4_P0_vivado.sv`        ← testbench (questa cartella)

## Procedura passo per passo

### 1. Apri Vivado e crea un nuovo progetto
- Vivado → "Create Project"
- Nome: `mxfp4_sim`
- Project type: **RTL Project**
- Spunta "Do not specify sources at this time"
- Device: qualsiasi (es. xc7a35tcpg236-1) — per simulazione non importa

### 2. Aggiungi i file sorgente
- Flow Navigator → "Add Sources" → "Add or create design sources"
- Aggiungi: `MXFP4DotProductEngine_N4_P0.sv`
- Flow Navigator → "Add Sources" → "Add or create simulation sources"
- Aggiungi: `tb_MXFP4_N4_P0_vivado.sv`

### 3. Imposta il top del testbench
- Sources → Simulation Sources → tasto destro su `tb_MXFP4_N4_P0`
- "Set as Top"

### 4. Avvia la simulazione
- Flow Navigator → "Run Simulation" → "Run Behavioral Simulation"

### 5. Risultati attesi nella console Tcl
```
=== Vivado Sim — MXFP4DotProductEngine N=4 P=0 ===

[TEST 1] vecA=vecB=[1.0 x4] (0x2)
  [PASS] dotProduct = 256
  [PASS] combinedScale = 254
[TEST 2] ...
  [PASS] dotProduct = -256
...
=== Risultato: 9 PASS, 0 FAIL ===
>>> ALL TESTS PASSED <<<
```

### 6. Visualizza le waveform
- Nella finestra Waveform di Vivado trovi tutti i segnali
- Aggiungi io_dotProduct, io_vecA_*, io_vecB_*, io_scaleA, io_scaleB
- Imposta io_dotProduct come "Signed Decimal" per vedere i valori negativi

## Note
- outWidth=10 bit per N=4: Vivado gestisce automaticamente $signed()
- Il file .sv generato da Chisel 6 usa SystemVerilog, compatibile con xsim
- Per simulare N=32: usa MXFP4DotProductEngine_N32_P0.sv con outWidth=13
