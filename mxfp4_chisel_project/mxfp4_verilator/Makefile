# =============================================================================
# Makefile per testbench Verilator MXFP4
# Uso: make        → compila ed esegui N4_P0
#      make N=32   → compila ed esegui N32_P0
#      make clean  → pulizia
# =============================================================================

SV_DIR   = ../generated
TB_DIR   = .
OBJ_DIR  = obj_dir

N        ?= 4
P        ?= 0
MODULE   = MXFP4DotProductEngine
VARIANT  = $(MODULE)_N$(N)_P$(P)
SV_FILE  = $(SV_DIR)/$(VARIANT).sv
TB_FILE  = $(TB_DIR)/tb_MXFP4_N4_P0.cpp

all: compile run

compile:
	@echo ">>> Verilating $(VARIANT)..."
	verilator --cc --exe --build --trace \
		-Wall --Wno-fatal \
		--top-module $(MODULE) \
		$(SV_FILE) \
		$(TB_FILE) \
		-o $(VARIANT)
	@echo ">>> Compilazione completata: $(OBJ_DIR)/$(VARIANT)"

run:
	@echo ">>> Esecuzione simulazione..."
	./obj_dir/$(VARIANT)

waves:
	gtkwave dump.vcd &

clean:
	rm -rf obj_dir dump.vcd

.PHONY: all compile run waves clean
