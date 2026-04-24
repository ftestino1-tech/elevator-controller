# MXFP4 Dot-Product Engine — Chisel Generator

Generatore hardware parametrico per il calcolo del prodotto scalare
in formato MXFP4 (OCP MX E2M1), scritto in Chisel 6.5.0 / Scala 2.13.12.

## Struttura del progetto

```
mxfp4_project/
├── build.sbt
├── project/
│   └── build.properties
└── src/
    ├── main/scala/mxfp4/
    │   └── MXFP4DotProductEngine.scala   ← sorgente principale
    └── test/scala/mxfp4/
        └── MXFP4DotProductTest.scala     ← 6 test funzionali
```

## Prerequisiti

- Java 11 o superiore (verifica con: java -version)
- sbt 1.9.7 (installa da https://www.scala-sbt.org/download.html)

Su macOS:      brew install sbt
Su Ubuntu:     sudo apt-get install sbt
Su Windows:    installer da scala-sbt.org

## Comandi

### Eseguire tutti i test
```bash
cd mxfp4_project
sbt test
```

### Eseguire un singolo test
```bash
sbt "testOnly mxfp4.MXFP4DotProductTest"
```

### Generare il Verilog (N=32, pipeline_depth=1)
Aggiungi al fondo di MXFP4DotProductEngine.scala l'oggetto GenerateVerilog,
poi esegui:
```bash
sbt "runMain mxfp4.GenerateVerilog"
```
Il Verilog viene scritto in ./generated/

## Parametri configurabili

Modifica MXFP4Config in MXFP4DotProductEngine.scala:

| Parametro      | Valori validi      | Descrizione                        |
|----------------|--------------------|------------------------------------|
| n              | 4, 8, 16, 32, 64  | Dimensione del vettore             |
| pipelineDepth  | 0, 1, 2           | Registri nell'adder tree           |

Esempi:
  MXFP4Config(n = 32, pipelineDepth = 0)  → combinatorio puro
  MXFP4Config(n = 32, pipelineDepth = 1)  → 1 registro, latenza 2 cicli
  MXFP4Config(n = 32, pipelineDepth = 2)  → 2 registri, latenza 3 cicli

## Codifica MXFP4 E2M1 (riferimento rapido)

Bit layout: [3]=segno  [2:1]=esponente_locale  [0]=mantissa

| Hex  | Binario | Valore |
|------|---------|--------|
| 0x0  | 0000    |  0.0   |
| 0x1  | 0001    |  0.5   |
| 0x2  | 0010    |  1.0   |
| 0x3  | 0011    |  1.5   |
| 0x4  | 0100    |  2.0   |
| 0x6  | 0110    |  4.0   |
| 0x7  | 0111    |  6.0   |
| 0xA  | 1010    | -1.0   |
| 0xF  | 1111    |  NaN   |

## Output dei test

I file VCD (waveform) vengono scritti in:
  test_run_dir/MXFP4DotProductTest*/

Aprili con GTKWave per visualizzare i segnali:
  gtkwave test_run_dir/MXFP4DotProductTest_*/MXFP4DotProductEngine.vcd
