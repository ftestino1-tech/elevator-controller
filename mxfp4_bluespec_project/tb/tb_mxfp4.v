`timescale 1ns/1ps

module tb_mxfp4;

    reg CLK = 0;
    reg RST_N = 0;
    always #5 CLK = ~CLK;

    // N=4, pd=0 — vecA/vecB packed [15:0] (4 elem x 4bit)
    reg  [15:0] n4p0_vecA, n4p0_vecB;
    reg  [7:0]  n4p0_scaleA, n4p0_scaleB;
    reg         n4p0_en;
    wire [9:0]  n4p0_dot;
    wire [8:0]  n4p0_scale;
    wire        n4p0_rdy;

    // N=4, pd=1
    reg  [15:0] n4p1_vecA, n4p1_vecB;
    reg  [7:0]  n4p1_scaleA, n4p1_scaleB;
    reg         n4p1_en;
    wire [9:0]  n4p1_dot;
    wire [8:0]  n4p1_scale;

    // N=8, pd=0 — vecA/vecB packed [31:0] (8 elem x 4bit)
    reg  [31:0] n8p0_vecA, n8p0_vecB;
    reg  [7:0]  n8p0_scaleA, n8p0_scaleB;
    reg         n8p0_en;
    wire [10:0] n8p0_dot;
    wire [8:0]  n8p0_scale;

    mkMXFP4DotProduct_N4_P0 dut_n4p0 (
        .CLK(CLK), .RST_N(RST_N),
        .loadInputs_vecA(n4p0_vecA),
        .loadInputs_vecB(n4p0_vecB),
        .loadInputs_scaleA(n4p0_scaleA),
        .loadInputs_scaleB(n4p0_scaleB),
        .EN_loadInputs(n4p0_en),
        .getDotProduct(n4p0_dot),
        .getCombinedScale(n4p0_scale),
        .resultReady(n4p0_rdy),
        .RDY_loadInputs(), .RDY_getDotProduct(),
        .RDY_getCombinedScale(), .RDY_resultReady()
    );

    mkMXFP4DotProduct_N4_P1 dut_n4p1 (
        .CLK(CLK), .RST_N(RST_N),
        .loadInputs_vecA(n4p1_vecA),
        .loadInputs_vecB(n4p1_vecB),
        .loadInputs_scaleA(n4p1_scaleA),
        .loadInputs_scaleB(n4p1_scaleB),
        .EN_loadInputs(n4p1_en),
        .getDotProduct(n4p1_dot),
        .getCombinedScale(n4p1_scale),
        .resultReady(),
        .RDY_loadInputs(), .RDY_getDotProduct(),
        .RDY_getCombinedScale(), .RDY_resultReady()
    );

    mkMXFP4DotProduct_N8_P0 dut_n8p0 (
        .CLK(CLK), .RST_N(RST_N),
        .loadInputs_vecA(n8p0_vecA),
        .loadInputs_vecB(n8p0_vecB),
        .loadInputs_scaleA(n8p0_scaleA),
        .loadInputs_scaleB(n8p0_scaleB),
        .EN_loadInputs(n8p0_en),
        .getDotProduct(n8p0_dot),
        .getCombinedScale(n8p0_scale),
        .resultReady(),
        .RDY_loadInputs(), .RDY_getDotProduct(),
        .RDY_getCombinedScale(), .RDY_resultReady()
    );

    integer pass_count = 0;
    integer fail_count = 0;

    task check10;
        input signed [9:0]  got;
        input signed [9:0]  exp;
        input [255:0]        name;
        begin
            if (got === exp) begin $display("  [PASS] %0s = %0d", name, got); pass_count=pass_count+1; end
            else             begin $display("  [FAIL] %0s got=%0d exp=%0d", name, got, exp); fail_count=fail_count+1; end
        end
    endtask

    task check11;
        input signed [10:0] got;
        input signed [10:0] exp;
        input [255:0]        name;
        begin
            if (got === exp) begin $display("  [PASS] %0s = %0d", name, got); pass_count=pass_count+1; end
            else             begin $display("  [FAIL] %0s got=%0d exp=%0d", name, got, exp); fail_count=fail_count+1; end
        end
    endtask

    task check9;
        input [8:0]  got;
        input [8:0]  exp;
        input [255:0] name;
        begin
            if (got === exp) begin $display("  [PASS] %0s = %0d", name, got); pass_count=pass_count+1; end
            else             begin $display("  [FAIL] %0s got=%0d exp=%0d", name, got, exp); fail_count=fail_count+1; end
        end
    endtask

    // Helper: replicate a 4-bit value N times into a packed vector
    // N=4: {val,val,val,val} = 16 bit; N=8: 32 bit
    function [15:0] rep4; input [3:0] v;
        rep4 = {v,v,v,v};
    endfunction
    function [31:0] rep8; input [3:0] v;
        rep8 = {v,v,v,v,v,v,v,v};
    endfunction

    initial begin
        $dumpfile("tb/waveform_bsv.vcd");
        $dumpvars(0, tb_mxfp4);
    end

    initial begin
        $display("=== BlueSpec (iverilog) Testbench — MXFP4DotProductEngine ===");
        RST_N=0; n4p0_en=0; n4p1_en=0; n8p0_en=0;
        n4p0_vecA=0; n4p0_vecB=0; n4p0_scaleA=0; n4p0_scaleB=0;
        n4p1_vecA=0; n4p1_vecB=0; n4p1_scaleA=0; n4p1_scaleB=0;
        n8p0_vecA=0; n8p0_vecB=0; n8p0_scaleA=0; n8p0_scaleB=0;
        repeat(3) @(posedge CLK); RST_N=1; @(posedge CLK); #1;

        // TEST 1: N=4 pd=0 — [1.0 x4] → 256
        $display("\n[TEST 1] vecA=vecB=[1.0 x4] (0x2) — N=4 combinatorio");
        n4p0_vecA=rep4(4'h2); n4p0_vecB=rep4(4'h2);
        n4p0_scaleA=127; n4p0_scaleB=127;
        n4p0_en=1; @(posedge CLK); #1; n4p0_en=0;
        @(posedge CLK); #1;
        check10($signed(n4p0_dot), 10'sd256, "dotProduct");
        check9(n4p0_scale, 9'd254, "combinedScale");

        // TEST 2: vecB=[-1.0 x4] → -256
        $display("\n[TEST 2] vecA=[1.0 x4]  vecB=[-1.0 x4] (0xA)");
        n4p0_vecA=rep4(4'h2); n4p0_vecB=rep4(4'hA);
        n4p0_scaleA=127; n4p0_scaleB=127;
        n4p0_en=1; @(posedge CLK); #1; n4p0_en=0;
        @(posedge CLK); #1;
        check10($signed(n4p0_dot), -10'sd256, "dotProduct");
        check9(n4p0_scale, 9'd254, "combinedScale");

        // TEST 3: vecA=[0.0 x4] → 0
        $display("\n[TEST 3] vecA=[0.0 x4]  vecB=[1.0 x4]");
        n4p0_vecA=rep4(4'h0); n4p0_vecB=rep4(4'h2);
        n4p0_scaleA=127; n4p0_scaleB=127;
        n4p0_en=1; @(posedge CLK); #1; n4p0_en=0;
        @(posedge CLK); #1;
        check10($signed(n4p0_dot), 10'sd0, "dotProduct");

        // TEST 4: N=4 pd=1 — pipeline → 256
        $display("\n[TEST 4] vecA=vecB=[1.0 x4] — pipeline_depth=1");
        n4p1_vecA=rep4(4'h2); n4p1_vecB=rep4(4'h2);
        n4p1_scaleA=127; n4p1_scaleB=127;
        n4p1_en=1; @(posedge CLK); #1; n4p1_en=0;
        repeat(2) @(posedge CLK); #1;
        check10($signed(n4p1_dot), 10'sd256, "dotProduct");
        check9(n4p1_scale, 9'd254, "combinedScale");

        // TEST 5: N=8 pd=0 — [1.5 x8] → 768
        $display("\n[TEST 5] vecA=[1.5 x8] (0x3)  vecB=[1.0 x8] — N=8");
        n8p0_vecA=rep8(4'h3); n8p0_vecB=rep8(4'h2);
        n8p0_scaleA=127; n8p0_scaleB=127;
        n8p0_en=1; @(posedge CLK); #1; n8p0_en=0;
        @(posedge CLK); #1;
        check11($signed(n8p0_dot), 11'sd768, "dotProduct");

        // TEST 6: scaleA=130, scaleB=125 → 255
        $display("\n[TEST 6] scaleA=130  scaleB=125");
        n4p0_vecA=rep4(4'h2); n4p0_vecB=rep4(4'h2);
        n4p0_scaleA=130; n4p0_scaleB=125;
        n4p0_en=1; @(posedge CLK); #1; n4p0_en=0;
        @(posedge CLK); #1;
        check9(n4p0_scale, 9'd255, "combinedScale");

        $display("\n=== Risultato: %0d PASS, %0d FAIL ===", pass_count, fail_count);
        if (fail_count == 0) $display(">>> ALL TESTS PASSED <<<");
        else                 $display(">>> %0d TEST(S) FAILED <<<", fail_count);
        $finish;
    end

    initial begin #5000; $display("[TIMEOUT]"); $finish; end

endmodule
