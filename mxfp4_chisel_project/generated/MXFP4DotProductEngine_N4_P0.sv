module MXFP4Multiplier(
  input  [3:0] io_a,
               io_b,
  output       io_sign,
  output [2:0] io_expOut,
  output [3:0] io_mantOut
);

  assign io_sign = io_a[3] ^ io_b[3];
  assign io_expOut = {1'h0, io_a[2:1]} + {1'h0, io_b[2:1]};
  assign io_mantOut =
    {2'h0, io_a[2:1] == 2'h0 & ~(io_a[0]) ? 2'h0 : {1'h1, io_a[0]}}
    * {2'h0, io_b[2:1] == 2'h0 & ~(io_b[0]) ? 2'h0 : {1'h1, io_b[0]}};
endmodule

module ExponentAligner(
  input        io_signs_0,
               io_signs_1,
               io_signs_2,
               io_signs_3,
  input  [2:0] io_exps_0,
               io_exps_1,
               io_exps_2,
               io_exps_3,
  input  [3:0] io_mants_0,
               io_mants_1,
               io_mants_2,
               io_mants_3,
  output [7:0] io_aligned_0,
               io_aligned_1,
               io_aligned_2,
               io_aligned_3
);

  wire [2:0] _expMax_T_1 = io_exps_0 > io_exps_1 ? io_exps_0 : io_exps_1;
  wire [2:0] _expMax_T_3 = _expMax_T_1 > io_exps_2 ? _expMax_T_1 : io_exps_2;
  wire [2:0] expMax = _expMax_T_3 > io_exps_3 ? _expMax_T_3 : io_exps_3;
  wire [7:0] shifted = {io_mants_0, 4'h0} >> expMax - io_exps_0;
  wire [7:0] shifted_1 = {io_mants_1, 4'h0} >> expMax - io_exps_1;
  wire [7:0] shifted_2 = {io_mants_2, 4'h0} >> expMax - io_exps_2;
  wire [7:0] shifted_3 = {io_mants_3, 4'h0} >> expMax - io_exps_3;
  assign io_aligned_0 = io_signs_0 ? 8'h0 - shifted : shifted;
  assign io_aligned_1 = io_signs_1 ? 8'h0 - shifted_1 : shifted_1;
  assign io_aligned_2 = io_signs_2 ? 8'h0 - shifted_2 : shifted_2;
  assign io_aligned_3 = io_signs_3 ? 8'h0 - shifted_3 : shifted_3;
endmodule

module AdderTree(
  input  [7:0] io_inputs_0,
               io_inputs_1,
               io_inputs_2,
               io_inputs_3,
  output [9:0] io_result
);

  wire [8:0] _GEN = {io_inputs_1[7], io_inputs_1} + {io_inputs_0[7], io_inputs_0};
  wire [8:0] _GEN_0 = {io_inputs_3[7], io_inputs_3} + {io_inputs_2[7], io_inputs_2};
  assign io_result = {_GEN_0[8], _GEN_0} + {_GEN[8], _GEN};
endmodule

module SharedScaleIntegrator(
  input  [9:0] io_treeSum,
  input  [7:0] io_scaleA,
               io_scaleB,
  output [9:0] io_dotProduct,
  output [8:0] io_combinedScale
);

  assign io_dotProduct = io_treeSum;
  assign io_combinedScale = {1'h0, io_scaleA} + {1'h0, io_scaleB};
endmodule

module MXFP4DotProductEngine(
  input        clock,
               reset,
  input  [3:0] io_vecA_0,
               io_vecA_1,
               io_vecA_2,
               io_vecA_3,
               io_vecB_0,
               io_vecB_1,
               io_vecB_2,
               io_vecB_3,
  input  [7:0] io_scaleA,
               io_scaleB,
  output [9:0] io_dotProduct,
  output [8:0] io_combinedScale
);

  wire [9:0] _adderTree_io_result;
  wire [7:0] _aligner_io_aligned_0;
  wire [7:0] _aligner_io_aligned_1;
  wire [7:0] _aligner_io_aligned_2;
  wire [7:0] _aligner_io_aligned_3;
  wire       _multipliers_3_io_sign;
  wire [2:0] _multipliers_3_io_expOut;
  wire [3:0] _multipliers_3_io_mantOut;
  wire       _multipliers_2_io_sign;
  wire [2:0] _multipliers_2_io_expOut;
  wire [3:0] _multipliers_2_io_mantOut;
  wire       _multipliers_1_io_sign;
  wire [2:0] _multipliers_1_io_expOut;
  wire [3:0] _multipliers_1_io_mantOut;
  wire       _multipliers_0_io_sign;
  wire [2:0] _multipliers_0_io_expOut;
  wire [3:0] _multipliers_0_io_mantOut;
  MXFP4Multiplier multipliers_0 (
    .io_a       (io_vecA_0),
    .io_b       (io_vecB_0),
    .io_sign    (_multipliers_0_io_sign),
    .io_expOut  (_multipliers_0_io_expOut),
    .io_mantOut (_multipliers_0_io_mantOut)
  );
  MXFP4Multiplier multipliers_1 (
    .io_a       (io_vecA_1),
    .io_b       (io_vecB_1),
    .io_sign    (_multipliers_1_io_sign),
    .io_expOut  (_multipliers_1_io_expOut),
    .io_mantOut (_multipliers_1_io_mantOut)
  );
  MXFP4Multiplier multipliers_2 (
    .io_a       (io_vecA_2),
    .io_b       (io_vecB_2),
    .io_sign    (_multipliers_2_io_sign),
    .io_expOut  (_multipliers_2_io_expOut),
    .io_mantOut (_multipliers_2_io_mantOut)
  );
  MXFP4Multiplier multipliers_3 (
    .io_a       (io_vecA_3),
    .io_b       (io_vecB_3),
    .io_sign    (_multipliers_3_io_sign),
    .io_expOut  (_multipliers_3_io_expOut),
    .io_mantOut (_multipliers_3_io_mantOut)
  );
  ExponentAligner aligner (
    .io_signs_0   (_multipliers_0_io_sign),
    .io_signs_1   (_multipliers_1_io_sign),
    .io_signs_2   (_multipliers_2_io_sign),
    .io_signs_3   (_multipliers_3_io_sign),
    .io_exps_0    (_multipliers_0_io_expOut),
    .io_exps_1    (_multipliers_1_io_expOut),
    .io_exps_2    (_multipliers_2_io_expOut),
    .io_exps_3    (_multipliers_3_io_expOut),
    .io_mants_0   (_multipliers_0_io_mantOut),
    .io_mants_1   (_multipliers_1_io_mantOut),
    .io_mants_2   (_multipliers_2_io_mantOut),
    .io_mants_3   (_multipliers_3_io_mantOut),
    .io_aligned_0 (_aligner_io_aligned_0),
    .io_aligned_1 (_aligner_io_aligned_1),
    .io_aligned_2 (_aligner_io_aligned_2),
    .io_aligned_3 (_aligner_io_aligned_3)
  );
  AdderTree adderTree (
    .io_inputs_0 (_aligner_io_aligned_0),
    .io_inputs_1 (_aligner_io_aligned_1),
    .io_inputs_2 (_aligner_io_aligned_2),
    .io_inputs_3 (_aligner_io_aligned_3),
    .io_result   (_adderTree_io_result)
  );
  SharedScaleIntegrator scaleIntegrator (
    .io_treeSum       (_adderTree_io_result),
    .io_scaleA        (io_scaleA),
    .io_scaleB        (io_scaleB),
    .io_dotProduct    (io_dotProduct),
    .io_combinedScale (io_combinedScale)
  );
endmodule

