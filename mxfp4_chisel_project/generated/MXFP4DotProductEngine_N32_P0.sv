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
               io_signs_8,
               io_signs_9,
               io_signs_10,
               io_signs_11,
               io_signs_12,
               io_signs_13,
               io_signs_14,
               io_signs_15,
               io_signs_16,
               io_signs_17,
               io_signs_18,
               io_signs_19,
               io_signs_20,
               io_signs_21,
               io_signs_22,
               io_signs_23,
               io_signs_24,
               io_signs_25,
               io_signs_26,
               io_signs_27,
               io_signs_28,
               io_signs_29,
               io_signs_30,
               io_signs_31,
  input  [2:0] io_exps_0,
               io_exps_1,
               io_exps_2,
               io_exps_3,
               io_exps_4,
               io_exps_5,
               io_exps_6,
               io_exps_7,
               io_exps_8,
               io_exps_9,
               io_exps_10,
               io_exps_11,
               io_exps_12,
               io_exps_13,
               io_exps_14,
               io_exps_15,
               io_exps_16,
               io_exps_17,
               io_exps_18,
               io_exps_19,
               io_exps_20,
               io_exps_21,
               io_exps_22,
               io_exps_23,
               io_exps_24,
               io_exps_25,
               io_exps_26,
               io_exps_27,
               io_exps_28,
               io_exps_29,
               io_exps_30,
               io_exps_31,
  input  [3:0] io_mants_0,
               io_mants_1,
               io_mants_2,
               io_mants_3,
               io_mants_4,
               io_mants_5,
               io_mants_6,
               io_mants_7,
               io_mants_8,
               io_mants_9,
               io_mants_10,
               io_mants_11,
               io_mants_12,
               io_mants_13,
               io_mants_14,
               io_mants_15,
               io_mants_16,
               io_mants_17,
               io_mants_18,
               io_mants_19,
               io_mants_20,
               io_mants_21,
               io_mants_22,
               io_mants_23,
               io_mants_24,
               io_mants_25,
               io_mants_26,
               io_mants_27,
               io_mants_28,
               io_mants_29,
               io_mants_30,
               io_mants_31,
  output [7:0] io_aligned_0,
               io_aligned_1,
               io_aligned_2,
               io_aligned_3,
               io_aligned_4,
               io_aligned_5,
               io_aligned_6,
               io_aligned_7,
               io_aligned_8,
               io_aligned_9,
               io_aligned_10,
               io_aligned_11,
               io_aligned_12,
               io_aligned_13,
               io_aligned_14,
               io_aligned_15,
               io_aligned_16,
               io_aligned_17,
               io_aligned_18,
               io_aligned_19,
               io_aligned_20,
               io_aligned_21,
               io_aligned_22,
               io_aligned_23,
               io_aligned_24,
               io_aligned_25,
               io_aligned_26,
               io_aligned_27,
               io_aligned_28,
               io_aligned_29,
               io_aligned_30,
               io_aligned_31
);

  wire [2:0] _expMax_T_1 = io_exps_0 > io_exps_1 ? io_exps_0 : io_exps_1;
  wire [2:0] _expMax_T_3 = _expMax_T_1 > io_exps_2 ? _expMax_T_1 : io_exps_2;
  wire [2:0] _expMax_T_5 = _expMax_T_3 > io_exps_3 ? _expMax_T_3 : io_exps_3;
  wire [2:0] _expMax_T_7 = _expMax_T_5 > io_exps_4 ? _expMax_T_5 : io_exps_4;
  wire [2:0] _expMax_T_9 = _expMax_T_7 > io_exps_5 ? _expMax_T_7 : io_exps_5;
  wire [2:0] _expMax_T_11 = _expMax_T_9 > io_exps_6 ? _expMax_T_9 : io_exps_6;
  wire [2:0] _expMax_T_13 = _expMax_T_11 > io_exps_7 ? _expMax_T_11 : io_exps_7;
  wire [2:0] _expMax_T_15 = _expMax_T_13 > io_exps_8 ? _expMax_T_13 : io_exps_8;
  wire [2:0] _expMax_T_17 = _expMax_T_15 > io_exps_9 ? _expMax_T_15 : io_exps_9;
  wire [2:0] _expMax_T_19 = _expMax_T_17 > io_exps_10 ? _expMax_T_17 : io_exps_10;
  wire [2:0] _expMax_T_21 = _expMax_T_19 > io_exps_11 ? _expMax_T_19 : io_exps_11;
  wire [2:0] _expMax_T_23 = _expMax_T_21 > io_exps_12 ? _expMax_T_21 : io_exps_12;
  wire [2:0] _expMax_T_25 = _expMax_T_23 > io_exps_13 ? _expMax_T_23 : io_exps_13;
  wire [2:0] _expMax_T_27 = _expMax_T_25 > io_exps_14 ? _expMax_T_25 : io_exps_14;
  wire [2:0] _expMax_T_29 = _expMax_T_27 > io_exps_15 ? _expMax_T_27 : io_exps_15;
  wire [2:0] _expMax_T_31 = _expMax_T_29 > io_exps_16 ? _expMax_T_29 : io_exps_16;
  wire [2:0] _expMax_T_33 = _expMax_T_31 > io_exps_17 ? _expMax_T_31 : io_exps_17;
  wire [2:0] _expMax_T_35 = _expMax_T_33 > io_exps_18 ? _expMax_T_33 : io_exps_18;
  wire [2:0] _expMax_T_37 = _expMax_T_35 > io_exps_19 ? _expMax_T_35 : io_exps_19;
  wire [2:0] _expMax_T_39 = _expMax_T_37 > io_exps_20 ? _expMax_T_37 : io_exps_20;
  wire [2:0] _expMax_T_41 = _expMax_T_39 > io_exps_21 ? _expMax_T_39 : io_exps_21;
  wire [2:0] _expMax_T_43 = _expMax_T_41 > io_exps_22 ? _expMax_T_41 : io_exps_22;
  wire [2:0] _expMax_T_45 = _expMax_T_43 > io_exps_23 ? _expMax_T_43 : io_exps_23;
  wire [2:0] _expMax_T_47 = _expMax_T_45 > io_exps_24 ? _expMax_T_45 : io_exps_24;
  wire [2:0] _expMax_T_49 = _expMax_T_47 > io_exps_25 ? _expMax_T_47 : io_exps_25;
  wire [2:0] _expMax_T_51 = _expMax_T_49 > io_exps_26 ? _expMax_T_49 : io_exps_26;
  wire [2:0] _expMax_T_53 = _expMax_T_51 > io_exps_27 ? _expMax_T_51 : io_exps_27;
  wire [2:0] _expMax_T_55 = _expMax_T_53 > io_exps_28 ? _expMax_T_53 : io_exps_28;
  wire [2:0] _expMax_T_57 = _expMax_T_55 > io_exps_29 ? _expMax_T_55 : io_exps_29;
  wire [2:0] _expMax_T_59 = _expMax_T_57 > io_exps_30 ? _expMax_T_57 : io_exps_30;
  wire [2:0] expMax = _expMax_T_59 > io_exps_31 ? _expMax_T_59 : io_exps_31;
  wire [7:0] shifted = {io_mants_0, 4'h0} >> expMax - io_exps_0;
  wire [7:0] shifted_1 = {io_mants_1, 4'h0} >> expMax - io_exps_1;
  wire [7:0] shifted_2 = {io_mants_2, 4'h0} >> expMax - io_exps_2;
  wire [7:0] shifted_3 = {io_mants_3, 4'h0} >> expMax - io_exps_3;
  wire [7:0] shifted_4 = {io_mants_4, 4'h0} >> expMax - io_exps_4;
  wire [7:0] shifted_5 = {io_mants_5, 4'h0} >> expMax - io_exps_5;
  wire [7:0] shifted_6 = {io_mants_6, 4'h0} >> expMax - io_exps_6;
  wire [7:0] shifted_7 = {io_mants_7, 4'h0} >> expMax - io_exps_7;
  wire [7:0] shifted_8 = {io_mants_8, 4'h0} >> expMax - io_exps_8;
  wire [7:0] shifted_9 = {io_mants_9, 4'h0} >> expMax - io_exps_9;
  wire [7:0] shifted_10 = {io_mants_10, 4'h0} >> expMax - io_exps_10;
  wire [7:0] shifted_11 = {io_mants_11, 4'h0} >> expMax - io_exps_11;
  wire [7:0] shifted_12 = {io_mants_12, 4'h0} >> expMax - io_exps_12;
  wire [7:0] shifted_13 = {io_mants_13, 4'h0} >> expMax - io_exps_13;
  wire [7:0] shifted_14 = {io_mants_14, 4'h0} >> expMax - io_exps_14;
  wire [7:0] shifted_15 = {io_mants_15, 4'h0} >> expMax - io_exps_15;
  wire [7:0] shifted_16 = {io_mants_16, 4'h0} >> expMax - io_exps_16;
  wire [7:0] shifted_17 = {io_mants_17, 4'h0} >> expMax - io_exps_17;
  wire [7:0] shifted_18 = {io_mants_18, 4'h0} >> expMax - io_exps_18;
  wire [7:0] shifted_19 = {io_mants_19, 4'h0} >> expMax - io_exps_19;
  wire [7:0] shifted_20 = {io_mants_20, 4'h0} >> expMax - io_exps_20;
  wire [7:0] shifted_21 = {io_mants_21, 4'h0} >> expMax - io_exps_21;
  wire [7:0] shifted_22 = {io_mants_22, 4'h0} >> expMax - io_exps_22;
  wire [7:0] shifted_23 = {io_mants_23, 4'h0} >> expMax - io_exps_23;
  wire [7:0] shifted_24 = {io_mants_24, 4'h0} >> expMax - io_exps_24;
  wire [7:0] shifted_25 = {io_mants_25, 4'h0} >> expMax - io_exps_25;
  wire [7:0] shifted_26 = {io_mants_26, 4'h0} >> expMax - io_exps_26;
  wire [7:0] shifted_27 = {io_mants_27, 4'h0} >> expMax - io_exps_27;
  wire [7:0] shifted_28 = {io_mants_28, 4'h0} >> expMax - io_exps_28;
  wire [7:0] shifted_29 = {io_mants_29, 4'h0} >> expMax - io_exps_29;
  wire [7:0] shifted_30 = {io_mants_30, 4'h0} >> expMax - io_exps_30;
  wire [7:0] shifted_31 = {io_mants_31, 4'h0} >> expMax - io_exps_31;
  assign io_aligned_0 = io_signs_0 ? 8'h0 - shifted : shifted;
  assign io_aligned_1 = io_signs_1 ? 8'h0 - shifted_1 : shifted_1;
  assign io_aligned_2 = io_signs_2 ? 8'h0 - shifted_2 : shifted_2;
  assign io_aligned_3 = io_signs_3 ? 8'h0 - shifted_3 : shifted_3;
  assign io_aligned_4 = io_signs_4 ? 8'h0 - shifted_4 : shifted_4;
  assign io_aligned_5 = io_signs_5 ? 8'h0 - shifted_5 : shifted_5;
  assign io_aligned_6 = io_signs_6 ? 8'h0 - shifted_6 : shifted_6;
  assign io_aligned_7 = io_signs_7 ? 8'h0 - shifted_7 : shifted_7;
  assign io_aligned_8 = io_signs_8 ? 8'h0 - shifted_8 : shifted_8;
  assign io_aligned_9 = io_signs_9 ? 8'h0 - shifted_9 : shifted_9;
  assign io_aligned_10 = io_signs_10 ? 8'h0 - shifted_10 : shifted_10;
  assign io_aligned_11 = io_signs_11 ? 8'h0 - shifted_11 : shifted_11;
  assign io_aligned_12 = io_signs_12 ? 8'h0 - shifted_12 : shifted_12;
  assign io_aligned_13 = io_signs_13 ? 8'h0 - shifted_13 : shifted_13;
  assign io_aligned_14 = io_signs_14 ? 8'h0 - shifted_14 : shifted_14;
  assign io_aligned_15 = io_signs_15 ? 8'h0 - shifted_15 : shifted_15;
  assign io_aligned_16 = io_signs_16 ? 8'h0 - shifted_16 : shifted_16;
  assign io_aligned_17 = io_signs_17 ? 8'h0 - shifted_17 : shifted_17;
  assign io_aligned_18 = io_signs_18 ? 8'h0 - shifted_18 : shifted_18;
  assign io_aligned_19 = io_signs_19 ? 8'h0 - shifted_19 : shifted_19;
  assign io_aligned_20 = io_signs_20 ? 8'h0 - shifted_20 : shifted_20;
  assign io_aligned_21 = io_signs_21 ? 8'h0 - shifted_21 : shifted_21;
  assign io_aligned_22 = io_signs_22 ? 8'h0 - shifted_22 : shifted_22;
  assign io_aligned_23 = io_signs_23 ? 8'h0 - shifted_23 : shifted_23;
  assign io_aligned_24 = io_signs_24 ? 8'h0 - shifted_24 : shifted_24;
  assign io_aligned_25 = io_signs_25 ? 8'h0 - shifted_25 : shifted_25;
  assign io_aligned_26 = io_signs_26 ? 8'h0 - shifted_26 : shifted_26;
  assign io_aligned_27 = io_signs_27 ? 8'h0 - shifted_27 : shifted_27;
  assign io_aligned_28 = io_signs_28 ? 8'h0 - shifted_28 : shifted_28;
  assign io_aligned_29 = io_signs_29 ? 8'h0 - shifted_29 : shifted_29;
  assign io_aligned_30 = io_signs_30 ? 8'h0 - shifted_30 : shifted_30;
  assign io_aligned_31 = io_signs_31 ? 8'h0 - shifted_31 : shifted_31;
endmodule

module AdderTree(
  input  [7:0]  io_inputs_0,
                io_inputs_1,
                io_inputs_2,
                io_inputs_3,
                io_inputs_4,
                io_inputs_5,
                io_inputs_6,
                io_inputs_7,
                io_inputs_8,
                io_inputs_9,
                io_inputs_10,
                io_inputs_11,
                io_inputs_12,
                io_inputs_13,
                io_inputs_14,
                io_inputs_15,
                io_inputs_16,
                io_inputs_17,
                io_inputs_18,
                io_inputs_19,
                io_inputs_20,
                io_inputs_21,
                io_inputs_22,
                io_inputs_23,
                io_inputs_24,
                io_inputs_25,
                io_inputs_26,
                io_inputs_27,
                io_inputs_28,
                io_inputs_29,
                io_inputs_30,
                io_inputs_31,
  output [12:0] io_result
);

  wire [8:0]  _GEN = {io_inputs_1[7], io_inputs_1} + {io_inputs_0[7], io_inputs_0};
  wire [8:0]  _GEN_0 = {io_inputs_3[7], io_inputs_3} + {io_inputs_2[7], io_inputs_2};
  wire [8:0]  _GEN_1 = {io_inputs_5[7], io_inputs_5} + {io_inputs_4[7], io_inputs_4};
  wire [8:0]  _GEN_2 = {io_inputs_7[7], io_inputs_7} + {io_inputs_6[7], io_inputs_6};
  wire [8:0]  _GEN_3 = {io_inputs_9[7], io_inputs_9} + {io_inputs_8[7], io_inputs_8};
  wire [8:0]  _GEN_4 = {io_inputs_11[7], io_inputs_11} + {io_inputs_10[7], io_inputs_10};
  wire [8:0]  _GEN_5 = {io_inputs_13[7], io_inputs_13} + {io_inputs_12[7], io_inputs_12};
  wire [8:0]  _GEN_6 = {io_inputs_15[7], io_inputs_15} + {io_inputs_14[7], io_inputs_14};
  wire [8:0]  _GEN_7 = {io_inputs_17[7], io_inputs_17} + {io_inputs_16[7], io_inputs_16};
  wire [8:0]  _GEN_8 = {io_inputs_19[7], io_inputs_19} + {io_inputs_18[7], io_inputs_18};
  wire [8:0]  _GEN_9 = {io_inputs_21[7], io_inputs_21} + {io_inputs_20[7], io_inputs_20};
  wire [8:0]  _GEN_10 = {io_inputs_23[7], io_inputs_23} + {io_inputs_22[7], io_inputs_22};
  wire [8:0]  _GEN_11 = {io_inputs_25[7], io_inputs_25} + {io_inputs_24[7], io_inputs_24};
  wire [8:0]  _GEN_12 = {io_inputs_27[7], io_inputs_27} + {io_inputs_26[7], io_inputs_26};
  wire [8:0]  _GEN_13 = {io_inputs_29[7], io_inputs_29} + {io_inputs_28[7], io_inputs_28};
  wire [8:0]  _GEN_14 = {io_inputs_31[7], io_inputs_31} + {io_inputs_30[7], io_inputs_30};
  wire [9:0]  _GEN_15 = {_GEN_0[8], _GEN_0} + {_GEN[8], _GEN};
  wire [9:0]  _GEN_16 = {_GEN_2[8], _GEN_2} + {_GEN_1[8], _GEN_1};
  wire [9:0]  _GEN_17 = {_GEN_4[8], _GEN_4} + {_GEN_3[8], _GEN_3};
  wire [9:0]  _GEN_18 = {_GEN_6[8], _GEN_6} + {_GEN_5[8], _GEN_5};
  wire [9:0]  _GEN_19 = {_GEN_8[8], _GEN_8} + {_GEN_7[8], _GEN_7};
  wire [9:0]  _GEN_20 = {_GEN_10[8], _GEN_10} + {_GEN_9[8], _GEN_9};
  wire [9:0]  _GEN_21 = {_GEN_12[8], _GEN_12} + {_GEN_11[8], _GEN_11};
  wire [9:0]  _GEN_22 = {_GEN_14[8], _GEN_14} + {_GEN_13[8], _GEN_13};
  wire [10:0] _GEN_23 = {_GEN_16[9], _GEN_16} + {_GEN_15[9], _GEN_15};
  wire [10:0] _GEN_24 = {_GEN_18[9], _GEN_18} + {_GEN_17[9], _GEN_17};
  wire [10:0] _GEN_25 = {_GEN_20[9], _GEN_20} + {_GEN_19[9], _GEN_19};
  wire [10:0] _GEN_26 = {_GEN_22[9], _GEN_22} + {_GEN_21[9], _GEN_21};
  wire [11:0] _GEN_27 = {_GEN_24[10], _GEN_24} + {_GEN_23[10], _GEN_23};
  wire [11:0] _GEN_28 = {_GEN_26[10], _GEN_26} + {_GEN_25[10], _GEN_25};
  assign io_result = {_GEN_28[11], _GEN_28} + {_GEN_27[11], _GEN_27};
endmodule

module SharedScaleIntegrator(
  input  [12:0] io_treeSum,
  input  [7:0]  io_scaleA,
                io_scaleB,
  output [12:0] io_dotProduct,
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
                io_vecA_8,
                io_vecA_9,
                io_vecA_10,
                io_vecA_11,
                io_vecA_12,
                io_vecA_13,
                io_vecA_14,
                io_vecA_15,
                io_vecA_16,
                io_vecA_17,
                io_vecA_18,
                io_vecA_19,
                io_vecA_20,
                io_vecA_21,
                io_vecA_22,
                io_vecA_23,
                io_vecA_24,
                io_vecA_25,
                io_vecA_26,
                io_vecA_27,
                io_vecA_28,
                io_vecA_29,
                io_vecA_30,
                io_vecA_31,
                io_vecB_0,
                io_vecB_1,
                io_vecB_2,
                io_vecB_3,
                io_vecB_4,
                io_vecB_5,
                io_vecB_6,
                io_vecB_7,
                io_vecB_8,
                io_vecB_9,
                io_vecB_10,
                io_vecB_11,
                io_vecB_12,
                io_vecB_13,
                io_vecB_14,
                io_vecB_15,
                io_vecB_16,
                io_vecB_17,
                io_vecB_18,
                io_vecB_19,
                io_vecB_20,
                io_vecB_21,
                io_vecB_22,
                io_vecB_23,
                io_vecB_24,
                io_vecB_25,
                io_vecB_26,
                io_vecB_27,
                io_vecB_28,
                io_vecB_29,
                io_vecB_30,
                io_vecB_31,
  input  [7:0]  io_scaleA,
                io_scaleB,
  output [12:0] io_dotProduct,
  output [8:0]  io_combinedScale
);

  wire [12:0] _adderTree_io_result;
  wire [7:0]  _aligner_io_aligned_0;
  wire [7:0]  _aligner_io_aligned_1;
  wire [7:0]  _aligner_io_aligned_2;
  wire [7:0]  _aligner_io_aligned_3;
  wire [7:0]  _aligner_io_aligned_4;
  wire [7:0]  _aligner_io_aligned_5;
  wire [7:0]  _aligner_io_aligned_6;
  wire [7:0]  _aligner_io_aligned_7;
  wire [7:0]  _aligner_io_aligned_8;
  wire [7:0]  _aligner_io_aligned_9;
  wire [7:0]  _aligner_io_aligned_10;
  wire [7:0]  _aligner_io_aligned_11;
  wire [7:0]  _aligner_io_aligned_12;
  wire [7:0]  _aligner_io_aligned_13;
  wire [7:0]  _aligner_io_aligned_14;
  wire [7:0]  _aligner_io_aligned_15;
  wire [7:0]  _aligner_io_aligned_16;
  wire [7:0]  _aligner_io_aligned_17;
  wire [7:0]  _aligner_io_aligned_18;
  wire [7:0]  _aligner_io_aligned_19;
  wire [7:0]  _aligner_io_aligned_20;
  wire [7:0]  _aligner_io_aligned_21;
  wire [7:0]  _aligner_io_aligned_22;
  wire [7:0]  _aligner_io_aligned_23;
  wire [7:0]  _aligner_io_aligned_24;
  wire [7:0]  _aligner_io_aligned_25;
  wire [7:0]  _aligner_io_aligned_26;
  wire [7:0]  _aligner_io_aligned_27;
  wire [7:0]  _aligner_io_aligned_28;
  wire [7:0]  _aligner_io_aligned_29;
  wire [7:0]  _aligner_io_aligned_30;
  wire [7:0]  _aligner_io_aligned_31;
  wire        _multipliers_31_io_sign;
  wire [2:0]  _multipliers_31_io_expOut;
  wire [3:0]  _multipliers_31_io_mantOut;
  wire        _multipliers_30_io_sign;
  wire [2:0]  _multipliers_30_io_expOut;
  wire [3:0]  _multipliers_30_io_mantOut;
  wire        _multipliers_29_io_sign;
  wire [2:0]  _multipliers_29_io_expOut;
  wire [3:0]  _multipliers_29_io_mantOut;
  wire        _multipliers_28_io_sign;
  wire [2:0]  _multipliers_28_io_expOut;
  wire [3:0]  _multipliers_28_io_mantOut;
  wire        _multipliers_27_io_sign;
  wire [2:0]  _multipliers_27_io_expOut;
  wire [3:0]  _multipliers_27_io_mantOut;
  wire        _multipliers_26_io_sign;
  wire [2:0]  _multipliers_26_io_expOut;
  wire [3:0]  _multipliers_26_io_mantOut;
  wire        _multipliers_25_io_sign;
  wire [2:0]  _multipliers_25_io_expOut;
  wire [3:0]  _multipliers_25_io_mantOut;
  wire        _multipliers_24_io_sign;
  wire [2:0]  _multipliers_24_io_expOut;
  wire [3:0]  _multipliers_24_io_mantOut;
  wire        _multipliers_23_io_sign;
  wire [2:0]  _multipliers_23_io_expOut;
  wire [3:0]  _multipliers_23_io_mantOut;
  wire        _multipliers_22_io_sign;
  wire [2:0]  _multipliers_22_io_expOut;
  wire [3:0]  _multipliers_22_io_mantOut;
  wire        _multipliers_21_io_sign;
  wire [2:0]  _multipliers_21_io_expOut;
  wire [3:0]  _multipliers_21_io_mantOut;
  wire        _multipliers_20_io_sign;
  wire [2:0]  _multipliers_20_io_expOut;
  wire [3:0]  _multipliers_20_io_mantOut;
  wire        _multipliers_19_io_sign;
  wire [2:0]  _multipliers_19_io_expOut;
  wire [3:0]  _multipliers_19_io_mantOut;
  wire        _multipliers_18_io_sign;
  wire [2:0]  _multipliers_18_io_expOut;
  wire [3:0]  _multipliers_18_io_mantOut;
  wire        _multipliers_17_io_sign;
  wire [2:0]  _multipliers_17_io_expOut;
  wire [3:0]  _multipliers_17_io_mantOut;
  wire        _multipliers_16_io_sign;
  wire [2:0]  _multipliers_16_io_expOut;
  wire [3:0]  _multipliers_16_io_mantOut;
  wire        _multipliers_15_io_sign;
  wire [2:0]  _multipliers_15_io_expOut;
  wire [3:0]  _multipliers_15_io_mantOut;
  wire        _multipliers_14_io_sign;
  wire [2:0]  _multipliers_14_io_expOut;
  wire [3:0]  _multipliers_14_io_mantOut;
  wire        _multipliers_13_io_sign;
  wire [2:0]  _multipliers_13_io_expOut;
  wire [3:0]  _multipliers_13_io_mantOut;
  wire        _multipliers_12_io_sign;
  wire [2:0]  _multipliers_12_io_expOut;
  wire [3:0]  _multipliers_12_io_mantOut;
  wire        _multipliers_11_io_sign;
  wire [2:0]  _multipliers_11_io_expOut;
  wire [3:0]  _multipliers_11_io_mantOut;
  wire        _multipliers_10_io_sign;
  wire [2:0]  _multipliers_10_io_expOut;
  wire [3:0]  _multipliers_10_io_mantOut;
  wire        _multipliers_9_io_sign;
  wire [2:0]  _multipliers_9_io_expOut;
  wire [3:0]  _multipliers_9_io_mantOut;
  wire        _multipliers_8_io_sign;
  wire [2:0]  _multipliers_8_io_expOut;
  wire [3:0]  _multipliers_8_io_mantOut;
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
  MXFP4Multiplier multipliers_8 (
    .io_a       (io_vecA_8),
    .io_b       (io_vecB_8),
    .io_sign    (_multipliers_8_io_sign),
    .io_expOut  (_multipliers_8_io_expOut),
    .io_mantOut (_multipliers_8_io_mantOut)
  );
  MXFP4Multiplier multipliers_9 (
    .io_a       (io_vecA_9),
    .io_b       (io_vecB_9),
    .io_sign    (_multipliers_9_io_sign),
    .io_expOut  (_multipliers_9_io_expOut),
    .io_mantOut (_multipliers_9_io_mantOut)
  );
  MXFP4Multiplier multipliers_10 (
    .io_a       (io_vecA_10),
    .io_b       (io_vecB_10),
    .io_sign    (_multipliers_10_io_sign),
    .io_expOut  (_multipliers_10_io_expOut),
    .io_mantOut (_multipliers_10_io_mantOut)
  );
  MXFP4Multiplier multipliers_11 (
    .io_a       (io_vecA_11),
    .io_b       (io_vecB_11),
    .io_sign    (_multipliers_11_io_sign),
    .io_expOut  (_multipliers_11_io_expOut),
    .io_mantOut (_multipliers_11_io_mantOut)
  );
  MXFP4Multiplier multipliers_12 (
    .io_a       (io_vecA_12),
    .io_b       (io_vecB_12),
    .io_sign    (_multipliers_12_io_sign),
    .io_expOut  (_multipliers_12_io_expOut),
    .io_mantOut (_multipliers_12_io_mantOut)
  );
  MXFP4Multiplier multipliers_13 (
    .io_a       (io_vecA_13),
    .io_b       (io_vecB_13),
    .io_sign    (_multipliers_13_io_sign),
    .io_expOut  (_multipliers_13_io_expOut),
    .io_mantOut (_multipliers_13_io_mantOut)
  );
  MXFP4Multiplier multipliers_14 (
    .io_a       (io_vecA_14),
    .io_b       (io_vecB_14),
    .io_sign    (_multipliers_14_io_sign),
    .io_expOut  (_multipliers_14_io_expOut),
    .io_mantOut (_multipliers_14_io_mantOut)
  );
  MXFP4Multiplier multipliers_15 (
    .io_a       (io_vecA_15),
    .io_b       (io_vecB_15),
    .io_sign    (_multipliers_15_io_sign),
    .io_expOut  (_multipliers_15_io_expOut),
    .io_mantOut (_multipliers_15_io_mantOut)
  );
  MXFP4Multiplier multipliers_16 (
    .io_a       (io_vecA_16),
    .io_b       (io_vecB_16),
    .io_sign    (_multipliers_16_io_sign),
    .io_expOut  (_multipliers_16_io_expOut),
    .io_mantOut (_multipliers_16_io_mantOut)
  );
  MXFP4Multiplier multipliers_17 (
    .io_a       (io_vecA_17),
    .io_b       (io_vecB_17),
    .io_sign    (_multipliers_17_io_sign),
    .io_expOut  (_multipliers_17_io_expOut),
    .io_mantOut (_multipliers_17_io_mantOut)
  );
  MXFP4Multiplier multipliers_18 (
    .io_a       (io_vecA_18),
    .io_b       (io_vecB_18),
    .io_sign    (_multipliers_18_io_sign),
    .io_expOut  (_multipliers_18_io_expOut),
    .io_mantOut (_multipliers_18_io_mantOut)
  );
  MXFP4Multiplier multipliers_19 (
    .io_a       (io_vecA_19),
    .io_b       (io_vecB_19),
    .io_sign    (_multipliers_19_io_sign),
    .io_expOut  (_multipliers_19_io_expOut),
    .io_mantOut (_multipliers_19_io_mantOut)
  );
  MXFP4Multiplier multipliers_20 (
    .io_a       (io_vecA_20),
    .io_b       (io_vecB_20),
    .io_sign    (_multipliers_20_io_sign),
    .io_expOut  (_multipliers_20_io_expOut),
    .io_mantOut (_multipliers_20_io_mantOut)
  );
  MXFP4Multiplier multipliers_21 (
    .io_a       (io_vecA_21),
    .io_b       (io_vecB_21),
    .io_sign    (_multipliers_21_io_sign),
    .io_expOut  (_multipliers_21_io_expOut),
    .io_mantOut (_multipliers_21_io_mantOut)
  );
  MXFP4Multiplier multipliers_22 (
    .io_a       (io_vecA_22),
    .io_b       (io_vecB_22),
    .io_sign    (_multipliers_22_io_sign),
    .io_expOut  (_multipliers_22_io_expOut),
    .io_mantOut (_multipliers_22_io_mantOut)
  );
  MXFP4Multiplier multipliers_23 (
    .io_a       (io_vecA_23),
    .io_b       (io_vecB_23),
    .io_sign    (_multipliers_23_io_sign),
    .io_expOut  (_multipliers_23_io_expOut),
    .io_mantOut (_multipliers_23_io_mantOut)
  );
  MXFP4Multiplier multipliers_24 (
    .io_a       (io_vecA_24),
    .io_b       (io_vecB_24),
    .io_sign    (_multipliers_24_io_sign),
    .io_expOut  (_multipliers_24_io_expOut),
    .io_mantOut (_multipliers_24_io_mantOut)
  );
  MXFP4Multiplier multipliers_25 (
    .io_a       (io_vecA_25),
    .io_b       (io_vecB_25),
    .io_sign    (_multipliers_25_io_sign),
    .io_expOut  (_multipliers_25_io_expOut),
    .io_mantOut (_multipliers_25_io_mantOut)
  );
  MXFP4Multiplier multipliers_26 (
    .io_a       (io_vecA_26),
    .io_b       (io_vecB_26),
    .io_sign    (_multipliers_26_io_sign),
    .io_expOut  (_multipliers_26_io_expOut),
    .io_mantOut (_multipliers_26_io_mantOut)
  );
  MXFP4Multiplier multipliers_27 (
    .io_a       (io_vecA_27),
    .io_b       (io_vecB_27),
    .io_sign    (_multipliers_27_io_sign),
    .io_expOut  (_multipliers_27_io_expOut),
    .io_mantOut (_multipliers_27_io_mantOut)
  );
  MXFP4Multiplier multipliers_28 (
    .io_a       (io_vecA_28),
    .io_b       (io_vecB_28),
    .io_sign    (_multipliers_28_io_sign),
    .io_expOut  (_multipliers_28_io_expOut),
    .io_mantOut (_multipliers_28_io_mantOut)
  );
  MXFP4Multiplier multipliers_29 (
    .io_a       (io_vecA_29),
    .io_b       (io_vecB_29),
    .io_sign    (_multipliers_29_io_sign),
    .io_expOut  (_multipliers_29_io_expOut),
    .io_mantOut (_multipliers_29_io_mantOut)
  );
  MXFP4Multiplier multipliers_30 (
    .io_a       (io_vecA_30),
    .io_b       (io_vecB_30),
    .io_sign    (_multipliers_30_io_sign),
    .io_expOut  (_multipliers_30_io_expOut),
    .io_mantOut (_multipliers_30_io_mantOut)
  );
  MXFP4Multiplier multipliers_31 (
    .io_a       (io_vecA_31),
    .io_b       (io_vecB_31),
    .io_sign    (_multipliers_31_io_sign),
    .io_expOut  (_multipliers_31_io_expOut),
    .io_mantOut (_multipliers_31_io_mantOut)
  );
  ExponentAligner aligner (
    .io_signs_0    (_multipliers_0_io_sign),
    .io_signs_1    (_multipliers_1_io_sign),
    .io_signs_2    (_multipliers_2_io_sign),
    .io_signs_3    (_multipliers_3_io_sign),
    .io_signs_4    (_multipliers_4_io_sign),
    .io_signs_5    (_multipliers_5_io_sign),
    .io_signs_6    (_multipliers_6_io_sign),
    .io_signs_7    (_multipliers_7_io_sign),
    .io_signs_8    (_multipliers_8_io_sign),
    .io_signs_9    (_multipliers_9_io_sign),
    .io_signs_10   (_multipliers_10_io_sign),
    .io_signs_11   (_multipliers_11_io_sign),
    .io_signs_12   (_multipliers_12_io_sign),
    .io_signs_13   (_multipliers_13_io_sign),
    .io_signs_14   (_multipliers_14_io_sign),
    .io_signs_15   (_multipliers_15_io_sign),
    .io_signs_16   (_multipliers_16_io_sign),
    .io_signs_17   (_multipliers_17_io_sign),
    .io_signs_18   (_multipliers_18_io_sign),
    .io_signs_19   (_multipliers_19_io_sign),
    .io_signs_20   (_multipliers_20_io_sign),
    .io_signs_21   (_multipliers_21_io_sign),
    .io_signs_22   (_multipliers_22_io_sign),
    .io_signs_23   (_multipliers_23_io_sign),
    .io_signs_24   (_multipliers_24_io_sign),
    .io_signs_25   (_multipliers_25_io_sign),
    .io_signs_26   (_multipliers_26_io_sign),
    .io_signs_27   (_multipliers_27_io_sign),
    .io_signs_28   (_multipliers_28_io_sign),
    .io_signs_29   (_multipliers_29_io_sign),
    .io_signs_30   (_multipliers_30_io_sign),
    .io_signs_31   (_multipliers_31_io_sign),
    .io_exps_0     (_multipliers_0_io_expOut),
    .io_exps_1     (_multipliers_1_io_expOut),
    .io_exps_2     (_multipliers_2_io_expOut),
    .io_exps_3     (_multipliers_3_io_expOut),
    .io_exps_4     (_multipliers_4_io_expOut),
    .io_exps_5     (_multipliers_5_io_expOut),
    .io_exps_6     (_multipliers_6_io_expOut),
    .io_exps_7     (_multipliers_7_io_expOut),
    .io_exps_8     (_multipliers_8_io_expOut),
    .io_exps_9     (_multipliers_9_io_expOut),
    .io_exps_10    (_multipliers_10_io_expOut),
    .io_exps_11    (_multipliers_11_io_expOut),
    .io_exps_12    (_multipliers_12_io_expOut),
    .io_exps_13    (_multipliers_13_io_expOut),
    .io_exps_14    (_multipliers_14_io_expOut),
    .io_exps_15    (_multipliers_15_io_expOut),
    .io_exps_16    (_multipliers_16_io_expOut),
    .io_exps_17    (_multipliers_17_io_expOut),
    .io_exps_18    (_multipliers_18_io_expOut),
    .io_exps_19    (_multipliers_19_io_expOut),
    .io_exps_20    (_multipliers_20_io_expOut),
    .io_exps_21    (_multipliers_21_io_expOut),
    .io_exps_22    (_multipliers_22_io_expOut),
    .io_exps_23    (_multipliers_23_io_expOut),
    .io_exps_24    (_multipliers_24_io_expOut),
    .io_exps_25    (_multipliers_25_io_expOut),
    .io_exps_26    (_multipliers_26_io_expOut),
    .io_exps_27    (_multipliers_27_io_expOut),
    .io_exps_28    (_multipliers_28_io_expOut),
    .io_exps_29    (_multipliers_29_io_expOut),
    .io_exps_30    (_multipliers_30_io_expOut),
    .io_exps_31    (_multipliers_31_io_expOut),
    .io_mants_0    (_multipliers_0_io_mantOut),
    .io_mants_1    (_multipliers_1_io_mantOut),
    .io_mants_2    (_multipliers_2_io_mantOut),
    .io_mants_3    (_multipliers_3_io_mantOut),
    .io_mants_4    (_multipliers_4_io_mantOut),
    .io_mants_5    (_multipliers_5_io_mantOut),
    .io_mants_6    (_multipliers_6_io_mantOut),
    .io_mants_7    (_multipliers_7_io_mantOut),
    .io_mants_8    (_multipliers_8_io_mantOut),
    .io_mants_9    (_multipliers_9_io_mantOut),
    .io_mants_10   (_multipliers_10_io_mantOut),
    .io_mants_11   (_multipliers_11_io_mantOut),
    .io_mants_12   (_multipliers_12_io_mantOut),
    .io_mants_13   (_multipliers_13_io_mantOut),
    .io_mants_14   (_multipliers_14_io_mantOut),
    .io_mants_15   (_multipliers_15_io_mantOut),
    .io_mants_16   (_multipliers_16_io_mantOut),
    .io_mants_17   (_multipliers_17_io_mantOut),
    .io_mants_18   (_multipliers_18_io_mantOut),
    .io_mants_19   (_multipliers_19_io_mantOut),
    .io_mants_20   (_multipliers_20_io_mantOut),
    .io_mants_21   (_multipliers_21_io_mantOut),
    .io_mants_22   (_multipliers_22_io_mantOut),
    .io_mants_23   (_multipliers_23_io_mantOut),
    .io_mants_24   (_multipliers_24_io_mantOut),
    .io_mants_25   (_multipliers_25_io_mantOut),
    .io_mants_26   (_multipliers_26_io_mantOut),
    .io_mants_27   (_multipliers_27_io_mantOut),
    .io_mants_28   (_multipliers_28_io_mantOut),
    .io_mants_29   (_multipliers_29_io_mantOut),
    .io_mants_30   (_multipliers_30_io_mantOut),
    .io_mants_31   (_multipliers_31_io_mantOut),
    .io_aligned_0  (_aligner_io_aligned_0),
    .io_aligned_1  (_aligner_io_aligned_1),
    .io_aligned_2  (_aligner_io_aligned_2),
    .io_aligned_3  (_aligner_io_aligned_3),
    .io_aligned_4  (_aligner_io_aligned_4),
    .io_aligned_5  (_aligner_io_aligned_5),
    .io_aligned_6  (_aligner_io_aligned_6),
    .io_aligned_7  (_aligner_io_aligned_7),
    .io_aligned_8  (_aligner_io_aligned_8),
    .io_aligned_9  (_aligner_io_aligned_9),
    .io_aligned_10 (_aligner_io_aligned_10),
    .io_aligned_11 (_aligner_io_aligned_11),
    .io_aligned_12 (_aligner_io_aligned_12),
    .io_aligned_13 (_aligner_io_aligned_13),
    .io_aligned_14 (_aligner_io_aligned_14),
    .io_aligned_15 (_aligner_io_aligned_15),
    .io_aligned_16 (_aligner_io_aligned_16),
    .io_aligned_17 (_aligner_io_aligned_17),
    .io_aligned_18 (_aligner_io_aligned_18),
    .io_aligned_19 (_aligner_io_aligned_19),
    .io_aligned_20 (_aligner_io_aligned_20),
    .io_aligned_21 (_aligner_io_aligned_21),
    .io_aligned_22 (_aligner_io_aligned_22),
    .io_aligned_23 (_aligner_io_aligned_23),
    .io_aligned_24 (_aligner_io_aligned_24),
    .io_aligned_25 (_aligner_io_aligned_25),
    .io_aligned_26 (_aligner_io_aligned_26),
    .io_aligned_27 (_aligner_io_aligned_27),
    .io_aligned_28 (_aligner_io_aligned_28),
    .io_aligned_29 (_aligner_io_aligned_29),
    .io_aligned_30 (_aligner_io_aligned_30),
    .io_aligned_31 (_aligner_io_aligned_31)
  );
  AdderTree adderTree (
    .io_inputs_0  (_aligner_io_aligned_0),
    .io_inputs_1  (_aligner_io_aligned_1),
    .io_inputs_2  (_aligner_io_aligned_2),
    .io_inputs_3  (_aligner_io_aligned_3),
    .io_inputs_4  (_aligner_io_aligned_4),
    .io_inputs_5  (_aligner_io_aligned_5),
    .io_inputs_6  (_aligner_io_aligned_6),
    .io_inputs_7  (_aligner_io_aligned_7),
    .io_inputs_8  (_aligner_io_aligned_8),
    .io_inputs_9  (_aligner_io_aligned_9),
    .io_inputs_10 (_aligner_io_aligned_10),
    .io_inputs_11 (_aligner_io_aligned_11),
    .io_inputs_12 (_aligner_io_aligned_12),
    .io_inputs_13 (_aligner_io_aligned_13),
    .io_inputs_14 (_aligner_io_aligned_14),
    .io_inputs_15 (_aligner_io_aligned_15),
    .io_inputs_16 (_aligner_io_aligned_16),
    .io_inputs_17 (_aligner_io_aligned_17),
    .io_inputs_18 (_aligner_io_aligned_18),
    .io_inputs_19 (_aligner_io_aligned_19),
    .io_inputs_20 (_aligner_io_aligned_20),
    .io_inputs_21 (_aligner_io_aligned_21),
    .io_inputs_22 (_aligner_io_aligned_22),
    .io_inputs_23 (_aligner_io_aligned_23),
    .io_inputs_24 (_aligner_io_aligned_24),
    .io_inputs_25 (_aligner_io_aligned_25),
    .io_inputs_26 (_aligner_io_aligned_26),
    .io_inputs_27 (_aligner_io_aligned_27),
    .io_inputs_28 (_aligner_io_aligned_28),
    .io_inputs_29 (_aligner_io_aligned_29),
    .io_inputs_30 (_aligner_io_aligned_30),
    .io_inputs_31 (_aligner_io_aligned_31),
    .io_result    (_adderTree_io_result)
  );
  SharedScaleIntegrator scaleIntegrator (
    .io_treeSum       (_adderTree_io_result),
    .io_scaleA        (io_scaleA),
    .io_scaleB        (io_scaleB),
    .io_dotProduct    (io_dotProduct),
    .io_combinedScale (io_combinedScale)
  );
endmodule

