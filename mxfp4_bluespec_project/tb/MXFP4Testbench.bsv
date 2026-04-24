package MXFP4Testbench;

import MXFP4DotProduct::*;
import Vector::*;
import StmtFSM::*;

module mkTestbench(Empty);

    MXFP4DotProductIfc#(4, 10) dut_N4_P0 <- mkMXFP4DotProduct_N4_P0;
    MXFP4DotProductIfc#(4, 10) dut_N4_P1 <- mkMXFP4DotProduct_N4_P1;
    MXFP4DotProductIfc#(8, 11) dut_N8_P0 <- mkMXFP4DotProduct_N8_P0;

    Reg#(UInt#(16)) passCount <- mkReg(0);
    Reg#(UInt#(16)) failCount <- mkReg(0);

    Stmt testSeq = seq

        // TEST 1: N=4, pd=0 — vecA=vecB=[1.0 x4] → 256
        action
            $display("\n[TEST 1] vecA=vecB=[1.0 x4] (0x2) — N=4 combinatorio");
            dut_N4_P0.loadInputs(replicate(4'h2), replicate(4'h2), 8'd127, 8'd127);
        endaction
        action
            if (dut_N4_P0.getDotProduct() == 256) begin
                $display("  [PASS] dotProduct = %0d", dut_N4_P0.getDotProduct());
                passCount <= passCount + 1;
            end else begin
                $display("  [FAIL] dotProduct got=%0d exp=256", dut_N4_P0.getDotProduct());
                failCount <= failCount + 1;
            end
        endaction
        action
            if (dut_N4_P0.getCombinedScale() == 254) begin
                $display("  [PASS] combinedScale = %0d", dut_N4_P0.getCombinedScale());
                passCount <= passCount + 1;
            end else begin
                $display("  [FAIL] combinedScale got=%0d exp=254", dut_N4_P0.getCombinedScale());
                failCount <= failCount + 1;
            end
        endaction

        // TEST 2: vecB=[-1.0] → -256
        action
            $display("\n[TEST 2] vecA=[1.0 x4]  vecB=[-1.0 x4] (0xA)");
            dut_N4_P0.loadInputs(replicate(4'h2), replicate(4'hA), 8'd127, 8'd127);
        endaction
        action
            if (dut_N4_P0.getDotProduct() == -256) begin
                $display("  [PASS] dotProduct = %0d", dut_N4_P0.getDotProduct());
                passCount <= passCount + 1;
            end else begin
                $display("  [FAIL] dotProduct got=%0d exp=-256", dut_N4_P0.getDotProduct());
                failCount <= failCount + 1;
            end
        endaction
        action
            if (dut_N4_P0.getCombinedScale() == 254) begin
                $display("  [PASS] combinedScale = %0d", dut_N4_P0.getCombinedScale());
                passCount <= passCount + 1;
            end else begin
                $display("  [FAIL] combinedScale got=%0d exp=254", dut_N4_P0.getCombinedScale());
                failCount <= failCount + 1;
            end
        endaction

        // TEST 3: vecA=[0.0] → 0
        action
            $display("\n[TEST 3] vecA=[0.0 x4]  vecB=[1.0 x4]");
            dut_N4_P0.loadInputs(replicate(4'h0), replicate(4'h2), 8'd127, 8'd127);
        endaction
        action
            if (dut_N4_P0.getDotProduct() == 0) begin
                $display("  [PASS] dotProduct = %0d", dut_N4_P0.getDotProduct());
                passCount <= passCount + 1;
            end else begin
                $display("  [FAIL] dotProduct got=%0d exp=0", dut_N4_P0.getDotProduct());
                failCount <= failCount + 1;
            end
        endaction

        // TEST 4: N=4, pd=1 — pipeline
        action
            $display("\n[TEST 4] vecA=vecB=[1.0 x4] — pipeline_depth=1");
            dut_N4_P1.loadInputs(replicate(4'h2), replicate(4'h2), 8'd127, 8'd127);
        endaction
        noAction;
        action
            if (dut_N4_P1.getDotProduct() == 256) begin
                $display("  [PASS] dotProduct = %0d", dut_N4_P1.getDotProduct());
                passCount <= passCount + 1;
            end else begin
                $display("  [FAIL] dotProduct got=%0d exp=256", dut_N4_P1.getDotProduct());
                failCount <= failCount + 1;
            end
        endaction
        action
            if (dut_N4_P1.getCombinedScale() == 254) begin
                $display("  [PASS] combinedScale = %0d", dut_N4_P1.getCombinedScale());
                passCount <= passCount + 1;
            end else begin
                $display("  [FAIL] combinedScale got=%0d exp=254", dut_N4_P1.getCombinedScale());
                failCount <= failCount + 1;
            end
        endaction

        // TEST 5: N=8, pd=0 — [1.5 x8] → 768
        action
            $display("\n[TEST 5] vecA=[1.5 x8] (0x3)  vecB=[1.0 x8] — N=8");
            dut_N8_P0.loadInputs(replicate(4'h3), replicate(4'h2), 8'd127, 8'd127);
        endaction
        action
            if (dut_N8_P0.getDotProduct() == 768) begin
                $display("  [PASS] dotProduct = %0d", dut_N8_P0.getDotProduct());
                passCount <= passCount + 1;
            end else begin
                $display("  [FAIL] dotProduct got=%0d exp=768", dut_N8_P0.getDotProduct());
                failCount <= failCount + 1;
            end
        endaction

        // TEST 6: scaleA=130, scaleB=125 → combinedScale=255
        action
            $display("\n[TEST 6] scaleA=130  scaleB=125");
            dut_N4_P0.loadInputs(replicate(4'h2), replicate(4'h2), 8'd130, 8'd125);
        endaction
        action
            if (dut_N4_P0.getCombinedScale() == 255) begin
                $display("  [PASS] combinedScale = %0d", dut_N4_P0.getCombinedScale());
                passCount <= passCount + 1;
            end else begin
                $display("  [FAIL] combinedScale got=%0d exp=255", dut_N4_P0.getCombinedScale());
                failCount <= failCount + 1;
            end
        endaction

        action
            $display("\n=== Risultato: %0d PASS, %0d FAIL ===", passCount, failCount);
            if (failCount == 0)
                $display(">>> ALL TESTS PASSED <<<");
            else
                $display(">>> %0d TEST(S) FAILED <<<", failCount);
            $finish(0);
        endaction

    endseq;

    FSM fsm <- mkFSM(testSeq);

    Reg#(Bool) started <- mkReg(False);
    rule startOnce (!started);
        $display("=== BlueSpec Testbench — MXFP4DotProductEngine ===");
        fsm.start();
        started <= True;
    endrule

    Reg#(UInt#(16)) cycle <- mkReg(0);
    rule timeout;
        cycle <= cycle + 1;
        if (cycle > 2000) begin
            $display("[TIMEOUT]");
            $finish(1);
        end
    endrule

endmodule

endpackage
