# =============================================================================
# Makefile — MXFP4 BSV — usa Icarus Verilog come simulatore
# (Bluesim ha un bug interno in BSC 2024.01)
# =============================================================================
BSC    = bsc
IVLOG  = iverilog
VVP    = vvp
BSCLIB = /opt/bsc/lib/Libraries
VLIB   = /opt/bsc/lib/Verilog
BUILD  = build
GEN    = generated

BSCFLAGS = -no-warn-action-shadowing -bdir $(BUILD) -p $(BSCLIB)

sim: | $(BUILD) $(GEN)
	@echo "=== Passo 1: Genera Verilog dal design ==="
	$(BSC) $(BSCFLAGS) -verilog -g mkMXFP4DotProduct_N4_P0 \
		src/MXFP4DotProduct.bsv
	$(BSC) $(BSCFLAGS) -verilog -g mkMXFP4DotProduct_N4_P1 \
		src/MXFP4DotProduct.bsv
	$(BSC) $(BSCFLAGS) -verilog -g mkMXFP4DotProduct_N8_P0 \
		src/MXFP4DotProduct.bsv
	@mv -f *.v $(GEN)/ 2>/dev/null || true
	@mv -f src/*.v $(GEN)/ 2>/dev/null || true
	@echo ""
	@echo "=== Passo 2: Compila testbench Verilog con iverilog ==="
	$(IVLOG) -g2012 \
		-I $(VLIB) \
		$(GEN)/mkMXFP4DotProduct_N4_P0.v \
		$(GEN)/mkMXFP4DotProduct_N4_P1.v \
		$(GEN)/mkMXFP4DotProduct_N8_P0.v \
		$(VLIB)/RegFile.v \
		$(VLIB)/FIFO2.v \
		$(VLIB)/SizedFIFO.v \
		tb/tb_mxfp4.v \
		-o $(BUILD)/sim_tb
	@echo ""
	@echo "=== Passo 3: Simulazione ==="
	$(VVP) $(BUILD)/sim_tb

verilog: | $(GEN) $(BUILD)
	$(BSC) $(BSCFLAGS) -verilog src/MXFP4DotProduct.bsv
	@for MOD in mkMXFP4DotProduct_N4_P0 mkMXFP4DotProduct_N4_P1 \
	            mkMXFP4DotProduct_N8_P0 mkMXFP4DotProduct_N32_P0; do \
	    echo ">>> $$MOD"; \
	    $(BSC) $(BSCFLAGS) -verilog -g $$MOD src/MXFP4DotProduct.bsv; \
	done
	@mv -f *.v $(GEN)/ 2>/dev/null || true
	@ls -lh $(GEN)/*.v 2>/dev/null

$(BUILD):
	mkdir -p $(BUILD)
$(GEN):
	mkdir -p $(GEN)

clean:
	rm -rf $(BUILD)/*.bo $(BUILD)/*.ba $(BUILD)/*.o $(BUILD)/*.so
	rm -f $(BUILD)/sim_tb *.bo *.ba *.v

clean-all: clean
	rm -rf $(BUILD) $(GEN)

.PHONY: sim verilog clean clean-all
