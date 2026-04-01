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
               io_signs_4,
               io_signs_5,
               io_signs_6,
               io_signs_7,
  input  [2:0] io_exps_0,
               io_exps_1,
               io_exps_2,
               io_exps_3,
               io_exps_4,
               io_exps_5,
               io_exps_6,
               io_exps_7,
  input  [3:0] io_mants_0,
               io_mants_1,
               io_mants_2,
               io_mants_3,
               io_mants_4,
               io_mants_5,
               io_mants_6,
               io_mants_7,
  output [7:0] io_aligned_0,
               io_aligned_1,
               io_aligned_2,
               io_aligned_3,
               io_aligned_4,
               io_aligned_5,
               io_aligned_6,
               io_aligned_7
);

  wire [2:0] _expMax_T_1 = io_exps_0 > io_exps_1 ? io_exps_0 : io_exps_1;
  wire [2:0] _expMax_T_3 = _expMax_T_1 > io_exps_2 ? _expMax_T_1 : io_exps_2;
  wire [2:0] _expMax_T_5 = _expMax_T_3 > io_exps_3 ? _expMax_T_3 : io_exps_3;
  wire [2:0] _expMax_T_7 = _expMax_T_5 > io_exps_4 ? _expMax_T_5 : io_exps_4;
  wire [2:0] _expMax_T_9 = _expMax_T_7 > io_exps_5 ? _expMax_T_7 : io_exps_5;
  wire [2:0] _expMax_T_11 = _expMax_T_9 > io_exps_6 ? _expMax_T_9 : io_exps_6;
  wire [2:0] expMax = _expMax_T_11 > io_exps_7 ? _expMax_T_11 : io_exps_7;
  wire [7:0] shifted = {io_mants_0, 4'h0} >> expMax - io_exps_0;
  wire [7:0] shifted_1 = {io_mants_1, 4'h0} >> expMax - io_exps_1;
  wire [7:0] shifted_2 = {io_mants_2, 4'h0} >> expMax - io_exps_2;
  wire [7:0] shifted_3 = {io_mants_3, 4'h0} >> expMax - io_exps_3;
  wire [7:0] shifted_4 = {io_mants_4, 4'h0} >> expMax - io_exps_4;
  wire [7:0] shifted_5 = {io_mants_5, 4'h0} >> expMax - io_exps_5;
  wire [7:0] shifted_6 = {io_mants_6, 4'h0} >> expMax - io_exps_6;
  wire [7:0] shifted_7 = {io_mants_7, 4'h0} >> expMax - io_exps_7;
  assign io_aligned_0 = io_signs_0 ? 8'h0 - shifted : shifted;
  assign io_aligned_1 = io_signs_1 ? 8'h0 - shifted_1 : shifted_1;
  assign io_aligned_2 = io_signs_2 ? 8'h0 - shifted_2 : shifted_2;
  assign io_aligned_3 = io_signs_3 ? 8'h0 - shifted_3 : shifted_3;
  assign io_aligned_4 = io_signs_4 ? 8'h0 - shifted_4 : shifted_4;
  assign io_aligned_5 = io_signs_5 ? 8'h0 - shifted_5 : shifted_5;
  assign io_aligned_6 = io_signs_6 ? 8'h0 - shifted_6 : shifted_6;
  assign io_aligned_7 = io_signs_7 ? 8'h0 - shifted_7 : shifted_7;
endmodule

module AdderTree(
  input         clock,
  input  [7:0]  io_inputs_0,
                io_inputs_1,
                io_inputs_2,
                io_inputs_3,
                io_inputs_4,
                io_inputs_5,
                io_inputs_6,
                io_inputs_7,
  output [10:0] io_result
);

  reg [12:0] io_result_nextLevel_0_1;
  reg [12:0] io_result_nextLevel_1_1;
  always @(posedge clock) begin
    automatic logic [8:0] _GEN =
      {io_inputs_1[7], io_inputs_1} + {io_inputs_0[7], io_inputs_0};
    automatic logic [8:0] _GEN_0 =
      {io_inputs_3[7], io_inputs_3} + {io_inputs_2[7], io_inputs_2};
    automatic logic [8:0] _GEN_1 =
      {io_inputs_5[7], io_inputs_5} + {io_inputs_4[7], io_inputs_4};
    automatic logic [8:0] _GEN_2 =
      {io_inputs_7[7], io_inputs_7} + {io_inputs_6[7], io_inputs_6};
    automatic logic [9:0] _GEN_3 = {_GEN_0[8], _GEN_0} + {_GEN[8], _GEN};
    automatic logic [9:0] _GEN_4 = {_GEN_2[8], _GEN_2} + {_GEN_1[8], _GEN_1};
    io_result_nextLevel_0_1 <= {{3{_GEN_3[9]}}, _GEN_3};
    io_result_nextLevel_1_1 <= {{3{_GEN_4[9]}}, _GEN_4};
  end // always @(posedge)
  assign io_result = io_result_nextLevel_0_1[10:0] + io_result_nextLevel_1_1[10:0];
endmodule

module SharedScaleIntegrator(
  input  [10:0] io_treeSum,
  input  [7:0]  io_scaleA,
                io_scaleB,
  output [10:0] io_dotProduct,
  output [8:0]  io_combinedScale
);

  assign io_dotProduct = io_treeSum;
  assign io_combinedScale = {1'h0, io_scaleA} + {1'h0, io_scaleB};
endmodule

module MXFP4DotProductEngine(
  input         clock,
                reset,
  input  [3:0]  io_vecA_0,
                io_vecA_1,
                io_vecA_2,
                io_vecA_3,
                io_vecA_4,
                io_vecA_5,
                io_vecA_6,
                io_vecA_7,
                io_vecB_0,
                io_vecB_1,
                io_vecB_2,
                io_vecB_3,
                io_vecB_4,
                io_vecB_5,
                io_vecB_6,
                io_vecB_7,
  input  [7:0]  io_scaleA,
                io_scaleB,
  output [10:0] io_dotProduct,
  output [8:0]  io_combinedScale
);

  wire [10:0] _adderTree_io_result;
  wire [7:0]  _aligner_io_aligned_0;
  wire [7:0]  _aligner_io_aligned_1;
  wire [7:0]  _aligner_io_aligned_2;
  wire [7:0]  _aligner_io_aligned_3;
  wire [7:0]  _aligner_io_aligned_4;
  wire [7:0]  _aligner_io_aligned_5;
  wire [7:0]  _aligner_io_aligned_6;
  wire [7:0]  _aligner_io_aligned_7;
  wire        _multipliers_7_io_sign;
  wire [2:0]  _multipliers_7_io_expOut;
  wire [3:0]  _multipliers_7_io_mantOut;
  wire        _multipliers_6_io_sign;
  wire [2:0]  _multipliers_6_io_expOut;
  wire [3:0]  _multipliers_6_io_mantOut;
  wire        _multipliers_5_io_sign;
  wire [2:0]  _multipliers_5_io_expOut;
  wire [3:0]  _multipliers_5_io_mantOut;
  wire        _multipliers_4_io_sign;
  wire [2:0]  _multipliers_4_io_expOut;
  wire [3:0]  _multipliers_4_io_mantOut;
  wire        _multipliers_3_io_sign;
  wire [2:0]  _multipliers_3_io_expOut;
  wire [3:0]  _multipliers_3_io_mantOut;
  wire        _multipliers_2_io_sign;
  wire [2:0]  _multipliers_2_io_expOut;
  wire [3:0]  _multipliers_2_io_mantOut;
  wire        _multipliers_1_io_sign;
  wire [2:0]  _multipliers_1_io_expOut;
  wire [3:0]  _multipliers_1_io_mantOut;
  wire        _multipliers_0_io_sign;
  wire [2:0]  _multipliers_0_io_expOut;
  wire [3:0]  _multipliers_0_io_mantOut;
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
  MXFP4Multiplier multipliers_4 (
    .io_a       (io_vecA_4),
    .io_b       (io_vecB_4),
    .io_sign    (_multipliers_4_io_sign),
    .io_expOut  (_multipliers_4_io_expOut),
    .io_mantOut (_multipliers_4_io_mantOut)
  );
  MXFP4Multiplier multipliers_5 (
    .io_a       (io_vecA_5),
    .io_b       (io_vecB_5),
    .io_sign    (_multipliers_5_io_sign),
    .io_expOut  (_multipliers_5_io_expOut),
    .io_mantOut (_multipliers_5_io_mantOut)
  );
  MXFP4Multiplier multipliers_6 (
    .io_a       (io_vecA_6),
    .io_b       (io_vecB_6),
    .io_sign    (_multipliers_6_io_sign),
    .io_expOut  (_multipliers_6_io_expOut),
    .io_mantOut (_multipliers_6_io_mantOut)
  );
  MXFP4Multiplier multipliers_7 (
    .io_a       (io_vecA_7),
    .io_b       (io_vecB_7),
    .io_sign    (_multipliers_7_io_sign),
    .io_expOut  (_multipliers_7_io_expOut),
    .io_mantOut (_multipliers_7_io_mantOut)
  );
  ExponentAligner aligner (
    .io_signs_0   (_multipliers_0_io_sign),
    .io_signs_1   (_multipliers_1_io_sign),
    .io_signs_2   (_multipliers_2_io_sign),
    .io_signs_3   (_multipliers_3_io_sign),
    .io_signs_4   (_multipliers_4_io_sign),
    .io_signs_5   (_multipliers_5_io_sign),
    .io_signs_6   (_multipliers_6_io_sign),
    .io_signs_7   (_multipliers_7_io_sign),
    .io_exps_0    (_multipliers_0_io_expOut),
    .io_exps_1    (_multipliers_1_io_expOut),
    .io_exps_2    (_multipliers_2_io_expOut),
    .io_exps_3    (_multipliers_3_io_expOut),
    .io_exps_4    (_multipliers_4_io_expOut),
    .io_exps_5    (_multipliers_5_io_expOut),
    .io_exps_6    (_multipliers_6_io_expOut),
    .io_exps_7    (_multipliers_7_io_expOut),
    .io_mants_0   (_multipliers_0_io_mantOut),
    .io_mants_1   (_multipliers_1_io_mantOut),
    .io_mants_2   (_multipliers_2_io_mantOut),
    .io_mants_3   (_multipliers_3_io_mantOut),
    .io_mants_4   (_multipliers_4_io_mantOut),
    .io_mants_5   (_multipliers_5_io_mantOut),
    .io_mants_6   (_multipliers_6_io_mantOut),
    .io_mants_7   (_multipliers_7_io_mantOut),
    .io_aligned_0 (_aligner_io_aligned_0),
    .io_aligned_1 (_aligner_io_aligned_1),
    .io_aligned_2 (_aligner_io_aligned_2),
    .io_aligned_3 (_aligner_io_aligned_3),
    .io_aligned_4 (_aligner_io_aligned_4),
    .io_aligned_5 (_aligner_io_aligned_5),
    .io_aligned_6 (_aligner_io_aligned_6),
    .io_aligned_7 (_aligner_io_aligned_7)
  );
  AdderTree adderTree (
    .clock       (clock),
    .io_inputs_0 (_aligner_io_aligned_0),
    .io_inputs_1 (_aligner_io_aligned_1),
    .io_inputs_2 (_aligner_io_aligned_2),
    .io_inputs_3 (_aligner_io_aligned_3),
    .io_inputs_4 (_aligner_io_aligned_4),
    .io_inputs_5 (_aligner_io_aligned_5),
    .io_inputs_6 (_aligner_io_aligned_6),
    .io_inputs_7 (_aligner_io_aligned_7),
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

