# MXFP4 Dot-Product Engine — SpinalHDL Generator

Generatore hardware parametrico per il calcolo del prodotto scalare
in formato MXFP4 (OCP MX E2M1), scritto in SpinalHDL 1.10.2 / Scala 2.13.12.

## Differenze rispetto alla versione Chisel

| Aspetto            | Chisel 6.5.0              | SpinalHDL 1.10.2            |
|--------------------|---------------------------|-----------------------------|
| Classe base        | Module                    | Component                   |
| Segnali            | io.vecA(i)                | io.vecA(i) (stesso)         |
| Pipeline           | RegNext(sig)              | RegNext(sig) (stesso)       |
| Generazione HDL    | ChiselStage (via FIRRTL)  | SpinalConfig.generateSV     |
| Intermediario      | FIRRTL → firtool          | Nessuno (diretto)           |
| Clock domain       | Implicito in Module       | ClockDomain esplicito       |
| Simulazione        | chiseltest                | spinal.core.sim             |

## Struttura del progetto

    mxfp4_spinal/
    ├── build.sbt
    ├── project/build.properties
    └── src/
        ├── main/scala/mxfp4/
        │   └── MXFP4DotProductEngine.scala
        └── test/scala/mxfp4/
            └── MXFP4DotProductTest.scala

## Prerequisiti

- Java 11+ e sbt 1.9.7 (già installati dal progetto Chisel)
- Verilator (già installato) — usato da SpinalHDL sim internamente

## Comandi

### Eseguire tutti i test
    sbt test

### Generare il SystemVerilog
    sbt "runMain mxfp4.GenerateVerilog"
    # File in ./generated/

### Eseguire un singolo test
    sbt "testOnly mxfp4.MXFP4DotProductTest"

## Note sulla simulazione SpinalHDL

SpinalHDL usa Verilator internamente per la simulazione (SimConfig.withWave).
I file VCD vengono scritti in ./simWorkspace/MXFP4DotProductEngine/
Aprili con GTKWave:
    gtkwave simWorkspace/MXFP4DotProductEngine/*/simulation.vcd
