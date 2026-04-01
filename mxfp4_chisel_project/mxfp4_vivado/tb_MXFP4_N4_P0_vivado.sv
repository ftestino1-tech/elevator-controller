// =============================================================================
// Testbench SystemVerilog — MXFP4DotProductEngine N=4, pipeline_depth=0
// Target: Vivado Simulator (xsim)
// Replica gli stessi 9 casi del testbench Verilator
// =============================================================================

`timescale 1ns / 1ps

module tb_MXFP4_N4_P0;

  // -------------------------------------------------------------------------
  // Segnali del DUT (Design Under Test)
  // -------------------------------------------------------------------------
  logic        clock;
  logic        reset;
  logic [3:0]  io_vecA_0, io_vecA_1, io_vecA_2, io_vecA_3;
  logic [3:0]  io_vecB_0, io_vecB_1, io_vecB_2, io_vecB_3;
  logic [7:0]  io_scaleA;
  logic [7:0]  io_scaleB;
  logic [9:0]  io_dotProduct;    // outWidth = 8 + log2(4) = 10 bit
  logic [8:0]  io_combinedScale; // 9 bit (8+8 con overflow)

  // -------------------------------------------------------------------------
  // Istanza DUT
  // -------------------------------------------------------------------------
  MXFP4DotProductEngine dut (
    .clock           (clock),
    .reset           (reset),
    .io_vecA_0       (io_vecA_0),
    .io_vecA_1       (io_vecA_1),
    .io_vecA_2       (io_vecA_2),
    .io_vecA_3       (io_vecA_3),
    .io_vecB_0       (io_vecB_0),
    .io_vecB_1       (io_vecB_1),
    .io_vecB_2       (io_vecB_2),
    .io_vecB_3       (io_vecB_3),
    .io_scaleA       (io_scaleA),
    .io_scaleB       (io_scaleB),
    .io_dotProduct   (io_dotProduct),
    .io_combinedScale(io_combinedScale)
  );

  // -------------------------------------------------------------------------
  // Clock: periodo 10ns (100 MHz)
  // -------------------------------------------------------------------------
  initial clock = 0;
  always #5 clock = ~clock;

  // -------------------------------------------------------------------------
  // Contatori PASS/FAIL
  // -------------------------------------------------------------------------
  int pass_count = 0;
  int fail_count = 0;

  // -------------------------------------------------------------------------
  // Task: verifica valore con messaggio PASS/FAIL
  // -------------------------------------------------------------------------
  task automatic check_val(
    input string   name,
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

  // -------------------------------------------------------------------------
  // Helper: imposta tutti gli ingressi vettore
  // -------------------------------------------------------------------------
  task automatic set_vec(
    input logic [3:0] a0, a1, a2, a3,
    input logic [3:0] b0, b1, b2, b3
  );
    io_vecA_0 = a0; io_vecA_1 = a1;
    io_vecA_2 = a2; io_vecA_3 = a3;
    io_vecB_0 = b0; io_vecB_1 = b1;
    io_vecB_2 = b2; io_vecB_3 = b3;
  endtask

  // -------------------------------------------------------------------------
  // Sequenza di test principale
  // -------------------------------------------------------------------------
  initial begin
    // Dump waveform VCD per visualizzazione
    $dumpfile("tb_MXFP4_N4_P0.vcd");
    $dumpvars(0, tb_MXFP4_N4_P0);

    $display("\n=== Vivado Sim — MXFP4DotProductEngine N=4 P=0 ===");
    $display("    outWidth=10 bit, combinedScale=9 bit\n");

    // Reset iniziale
    reset    = 1;
    io_scaleA = 127;
    io_scaleB = 127;
    set_vec(4'h2, 4'h2, 4'h2, 4'h2,
            4'h2, 4'h2, 4'h2, 4'h2);
    @(posedge clock); #1;
    reset = 0;

    // -----------------------------------------------------------------
    // TEST 1: vecA=vecB=[1.0 x4] (0x2)
    // Atteso: dotProduct=256, combinedScale=254
    // -----------------------------------------------------------------
    $display("[TEST 1] vecA=vecB=[1.0 x4] (0x2)");
    set_vec(4'h2, 4'h2, 4'h2, 4'h2,
            4'h2, 4'h2, 4'h2, 4'h2);
    io_scaleA = 127; io_scaleB = 127;
    @(posedge clock); #1;
    check_val("dotProduct",    $signed(io_dotProduct),    256);
    check_val("combinedScale", $signed({1'b0, io_combinedScale}), 254);

    // -----------------------------------------------------------------
    // TEST 2: vecA=[1.0 x4] vecB=[-1.0 x4] (0xA)
    // Atteso: dotProduct=-256, combinedScale=254
    // -----------------------------------------------------------------
    $display("\n[TEST 2] vecA=[1.0 x4] (0x2)  vecB=[-1.0 x4] (0xA)");
    set_vec(4'h2, 4'h2, 4'h2, 4'h2,
            4'hA, 4'hA, 4'hA, 4'hA);
    io_scaleA = 127; io_scaleB = 127;
    @(posedge clock); #1;
    check_val("dotProduct",    $signed(io_dotProduct),   -256);
    check_val("combinedScale", $signed({1'b0, io_combinedScale}), 254);

    // -----------------------------------------------------------------
    // TEST 3: vecA=[0.0 x4] (0x0)  vecB=[1.0 x4]
    // Atteso: dotProduct=0
    // -----------------------------------------------------------------
    $display("\n[TEST 3] vecA=[0.0 x4] (0x0)  vecB=[1.0 x4]");
    set_vec(4'h0, 4'h0, 4'h0, 4'h0,
            4'h2, 4'h2, 4'h2, 4'h2);
    io_scaleA = 127; io_scaleB = 127;
    @(posedge clock); #1;
    check_val("dotProduct", $signed(io_dotProduct), 0);

    // -----------------------------------------------------------------
    // TEST 4: vecA=[1.5 x4] (0x3)  vecB=[1.0 x4] (0x2)
    // Atteso: dotProduct=384
    // -----------------------------------------------------------------
    $display("\n[TEST 4] vecA=[1.5 x4] (0x3)  vecB=[1.0 x4] (0x2)");
    set_vec(4'h3, 4'h3, 4'h3, 4'h3,
            4'h2, 4'h2, 4'h2, 4'h2);
    io_scaleA = 127; io_scaleB = 127;
    @(posedge clock); #1;
    check_val("dotProduct", $signed(io_dotProduct), 384);

    // -----------------------------------------------------------------
    // TEST 5: vecA=vecB=[2.0 x4] (0x4)
    // Atteso: dotProduct > 0, combinedScale=254
    // -----------------------------------------------------------------
    $display("\n[TEST 5] vecA=vecB=[2.0 x4] (0x4)");
    set_vec(4'h4, 4'h4, 4'h4, 4'h4,
            4'h4, 4'h4, 4'h4, 4'h4);
    io_scaleA = 127; io_scaleB = 127;
    @(posedge clock); #1;
    check_val("combinedScale", $signed({1'b0, io_combinedScale}), 254);
    check_positive("dotProduct", $signed(io_dotProduct));

    // -----------------------------------------------------------------
    // TEST 6: scaleA=130, scaleB=125 → combinedScale=255
    // -----------------------------------------------------------------
    $display("\n[TEST 6] scaleA=130  scaleB=125");
    set_vec(4'h2, 4'h2, 4'h2, 4'h2,
            4'h2, 4'h2, 4'h2, 4'h2);
    io_scaleA = 130; io_scaleB = 125;
    @(posedge clock); #1;
    check_val("combinedScale", $signed({1'b0, io_combinedScale}), 255);

    // -----------------------------------------------------------------
    // Risultato finale
    // -----------------------------------------------------------------
    $display("\n=== Risultato: %0d PASS, %0d FAIL ===\n",
             pass_count, fail_count);

    if (fail_count == 0)
      $display(">>> ALL TESTS PASSED <<<\n");
    else
      $display(">>> %0d TEST(S) FAILED <<<\n", fail_count);

    $finish;
  end

  // Timeout di sicurezza: 10us
  initial begin
    #10000;
    $display("[TIMEOUT] Simulazione terminata per timeout");
    $finish;
  end

endmodule
