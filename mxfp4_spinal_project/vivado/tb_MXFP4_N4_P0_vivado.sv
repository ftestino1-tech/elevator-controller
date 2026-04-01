// =============================================================================
// Testbench SystemVerilog — MXFP4DotProductEngine N=4, pipeline_depth=0
// Target: Vivado Simulator (xsim) — SpinalHDL generated design
// =============================================================================

`timescale 1ns / 1ps

module tb_MXFP4_N4_P0;

  // -------------------------------------------------------------------------
  // Segnali del DUT
  // NOTA: SpinalHDL genera nomi di segnali senza prefisso "io_"
  // I nomi esatti sono: clk, reset, vecA_0..3, vecB_0..3, scaleA, scaleB
  // -------------------------------------------------------------------------
  logic        clk;
  logic        reset;
  logic [3:0]  vecA_0, vecA_1, vecA_2, vecA_3;
  logic [3:0]  vecB_0, vecB_1, vecB_2, vecB_3;
  logic [7:0]  scaleA;
  logic [7:0]  scaleB;
  logic [9:0]  dotProduct;     // outWidth = 8 + log2(4) = 10 bit
  logic [8:0]  combinedScale;  // 9 bit

  // -------------------------------------------------------------------------
  // Istanza DUT — SpinalHDL usa clk invece di clock
  // -------------------------------------------------------------------------
  MXFP4DotProductEngine dut (
    .clk            (clk),
    .reset          (reset),
    .vecA_0         (vecA_0),
    .vecA_1         (vecA_1),
    .vecA_2         (vecA_2),
    .vecA_3         (vecA_3),
    .vecB_0         (vecB_0),
    .vecB_1         (vecB_1),
    .vecB_2         (vecB_2),
    .vecB_3         (vecB_3),
    .scaleA         (scaleA),
    .scaleB         (scaleB),
    .dotProduct     (dotProduct),
    .combinedScale  (combinedScale)
  );

  // Clock 100 MHz
  initial clk = 0;
  always #5 clk = ~clk;

  // Contatori
  int pass_count = 0;
  int fail_count = 0;

  task automatic check_val(
    input string name,
    input logic signed [15:0] got,
    input logic signed [15:0] expected
  );
    if (got === expected) begin
      $display("  [PASS] %s = %0d", name, got);
      pass_count++;
    end else begin
      $display("  [FAIL] %s  got=%0d  expected=%0d", name, got, expected);
      fail_count++;
    end
  endtask

  task automatic check_positive(
    input string name,
    input logic signed [15:0] got
  );
    if (got > 0) begin
      $display("  [PASS] %s = %0d (> 0)", name, got);
      pass_count++;
    end else begin
      $display("  [FAIL] %s = %0d (atteso > 0)", name, got);
      fail_count++;
    end
  endtask

  task automatic set_vec(
    input logic [3:0] a0, a1, a2, a3,
    input logic [3:0] b0, b1, b2, b3
  );
    vecA_0=a0; vecA_1=a1; vecA_2=a2; vecA_3=a3;
    vecB_0=b0; vecB_1=b1; vecB_2=b2; vecB_3=b3;
  endtask

  initial begin
    $dumpfile("tb_MXFP4_N4_P0_spinal.vcd");
    $dumpvars(0, tb_MXFP4_N4_P0);

    $display("\n=== Vivado Sim — MXFP4DotProductEngine SpinalHDL N=4 P=0 ===");
    $display("    outWidth=10 bit, combinedScale=9 bit\n");

    // Reset
    reset  = 1;
    scaleA = 127; scaleB = 127;
    set_vec(4'h2,4'h2,4'h2,4'h2, 4'h2,4'h2,4'h2,4'h2);
    @(posedge clk); #1;
    reset = 0;

    // TEST 1: vecA=vecB=[1.0 x4] → dotProduct=256, combinedScale=254
    $display("[TEST 1] vecA=vecB=[1.0 x4] (0x2)");
    set_vec(4'h2,4'h2,4'h2,4'h2, 4'h2,4'h2,4'h2,4'h2);
    scaleA=127; scaleB=127;
    @(posedge clk); #1;
    check_val("dotProduct",    $signed(dotProduct),           256);
    check_val("combinedScale", $signed({1'b0,combinedScale}), 254);

    // TEST 2: vecA=[1.0 x4] vecB=[-1.0 x4] → dotProduct=-256
    $display("\n[TEST 2] vecA=[1.0 x4] (0x2)  vecB=[-1.0 x4] (0xA)");
    set_vec(4'h2,4'h2,4'h2,4'h2, 4'hA,4'hA,4'hA,4'hA);
    scaleA=127; scaleB=127;
    @(posedge clk); #1;
    check_val("dotProduct",    $signed(dotProduct),           -256);
    check_val("combinedScale", $signed({1'b0,combinedScale}),  254);

    // TEST 3: vecA=[0.0 x4] → dotProduct=0
    $display("\n[TEST 3] vecA=[0.0 x4] (0x0)  vecB=[1.0 x4]");
    set_vec(4'h0,4'h0,4'h0,4'h0, 4'h2,4'h2,4'h2,4'h2);
    scaleA=127; scaleB=127;
    @(posedge clk); #1;
    check_val("dotProduct", $signed(dotProduct), 0);

    // TEST 4: vecA=[1.5 x4] vecB=[1.0 x4] → dotProduct=384
    $display("\n[TEST 4] vecA=[1.5 x4] (0x3)  vecB=[1.0 x4] (0x2)");
    set_vec(4'h3,4'h3,4'h3,4'h3, 4'h2,4'h2,4'h2,4'h2);
    scaleA=127; scaleB=127;
    @(posedge clk); #1;
    check_val("dotProduct", $signed(dotProduct), 384);

    // TEST 5: vecA=vecB=[2.0 x4] → dotProduct>0, combinedScale=254
    $display("\n[TEST 5] vecA=vecB=[2.0 x4] (0x4)");
    set_vec(4'h4,4'h4,4'h4,4'h4, 4'h4,4'h4,4'h4,4'h4);
    scaleA=127; scaleB=127;
    @(posedge clk); #1;
    check_val("combinedScale", $signed({1'b0,combinedScale}), 254);
    check_positive("dotProduct", $signed(dotProduct));

    // TEST 6: scaleA=130, scaleB=125 → combinedScale=255
    $display("\n[TEST 6] scaleA=130  scaleB=125");
    set_vec(4'h2,4'h2,4'h2,4'h2, 4'h2,4'h2,4'h2,4'h2);
    scaleA=130; scaleB=125;
    @(posedge clk); #1;
    check_val("combinedScale", $signed({1'b0,combinedScale}), 255);

    $display("\n=== Risultato: %0d PASS, %0d FAIL ===\n",
             pass_count, fail_count);
    if (fail_count == 0)
      $display(">>> ALL TESTS PASSED <<<\n");
    else
      $display(">>> %0d TEST(S) FAILED <<<\n", fail_count);

    $finish;
  end

  initial begin
    #10000;
    $display("[TIMEOUT]");
    $finish;
  end

endmodule
