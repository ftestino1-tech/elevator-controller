// Component : MXFP4DotProductEngine

`timescale 1ns/1ps

module MXFP4DotProductEngine (
  input  wire [3:0]    io_vecA_0,
  input  wire [3:0]    io_vecA_1,
  input  wire [3:0]    io_vecA_2,
  input  wire [3:0]    io_vecA_3,
  input  wire [3:0]    io_vecA_4,
  input  wire [3:0]    io_vecA_5,
  input  wire [3:0]    io_vecA_6,
  input  wire [3:0]    io_vecA_7,
  input  wire [3:0]    io_vecA_8,
  input  wire [3:0]    io_vecA_9,
  input  wire [3:0]    io_vecA_10,
  input  wire [3:0]    io_vecA_11,
  input  wire [3:0]    io_vecA_12,
  input  wire [3:0]    io_vecA_13,
  input  wire [3:0]    io_vecA_14,
  input  wire [3:0]    io_vecA_15,
  input  wire [3:0]    io_vecA_16,
  input  wire [3:0]    io_vecA_17,
  input  wire [3:0]    io_vecA_18,
  input  wire [3:0]    io_vecA_19,
  input  wire [3:0]    io_vecA_20,
  input  wire [3:0]    io_vecA_21,
  input  wire [3:0]    io_vecA_22,
  input  wire [3:0]    io_vecA_23,
  input  wire [3:0]    io_vecA_24,
  input  wire [3:0]    io_vecA_25,
  input  wire [3:0]    io_vecA_26,
  input  wire [3:0]    io_vecA_27,
  input  wire [3:0]    io_vecA_28,
  input  wire [3:0]    io_vecA_29,
  input  wire [3:0]    io_vecA_30,
  input  wire [3:0]    io_vecA_31,
  input  wire [3:0]    io_vecB_0,
  input  wire [3:0]    io_vecB_1,
  input  wire [3:0]    io_vecB_2,
  input  wire [3:0]    io_vecB_3,
  input  wire [3:0]    io_vecB_4,
  input  wire [3:0]    io_vecB_5,
  input  wire [3:0]    io_vecB_6,
  input  wire [3:0]    io_vecB_7,
  input  wire [3:0]    io_vecB_8,
  input  wire [3:0]    io_vecB_9,
  input  wire [3:0]    io_vecB_10,
  input  wire [3:0]    io_vecB_11,
  input  wire [3:0]    io_vecB_12,
  input  wire [3:0]    io_vecB_13,
  input  wire [3:0]    io_vecB_14,
  input  wire [3:0]    io_vecB_15,
  input  wire [3:0]    io_vecB_16,
  input  wire [3:0]    io_vecB_17,
  input  wire [3:0]    io_vecB_18,
  input  wire [3:0]    io_vecB_19,
  input  wire [3:0]    io_vecB_20,
  input  wire [3:0]    io_vecB_21,
  input  wire [3:0]    io_vecB_22,
  input  wire [3:0]    io_vecB_23,
  input  wire [3:0]    io_vecB_24,
  input  wire [3:0]    io_vecB_25,
  input  wire [3:0]    io_vecB_26,
  input  wire [3:0]    io_vecB_27,
  input  wire [3:0]    io_vecB_28,
  input  wire [3:0]    io_vecB_29,
  input  wire [3:0]    io_vecB_30,
  input  wire [3:0]    io_vecB_31,
  input  wire [7:0]    io_scaleA,
  input  wire [7:0]    io_scaleB,
  output wire [12:0]   io_dotProduct,
  output wire [8:0]    io_combinedScale
);

  wire       [0:0]    multipliers_0_io_sign;
  wire       [2:0]    multipliers_0_io_expOut;
  wire       [3:0]    multipliers_0_io_mantOut;
  wire       [0:0]    multipliers_1_io_sign;
  wire       [2:0]    multipliers_1_io_expOut;
  wire       [3:0]    multipliers_1_io_mantOut;
  wire       [0:0]    multipliers_2_io_sign;
  wire       [2:0]    multipliers_2_io_expOut;
  wire       [3:0]    multipliers_2_io_mantOut;
  wire       [0:0]    multipliers_3_io_sign;
  wire       [2:0]    multipliers_3_io_expOut;
  wire       [3:0]    multipliers_3_io_mantOut;
  wire       [0:0]    multipliers_4_io_sign;
  wire       [2:0]    multipliers_4_io_expOut;
  wire       [3:0]    multipliers_4_io_mantOut;
  wire       [0:0]    multipliers_5_io_sign;
  wire       [2:0]    multipliers_5_io_expOut;
  wire       [3:0]    multipliers_5_io_mantOut;
  wire       [0:0]    multipliers_6_io_sign;
  wire       [2:0]    multipliers_6_io_expOut;
  wire       [3:0]    multipliers_6_io_mantOut;
  wire       [0:0]    multipliers_7_io_sign;
  wire       [2:0]    multipliers_7_io_expOut;
  wire       [3:0]    multipliers_7_io_mantOut;
  wire       [0:0]    multipliers_8_io_sign;
  wire       [2:0]    multipliers_8_io_expOut;
  wire       [3:0]    multipliers_8_io_mantOut;
  wire       [0:0]    multipliers_9_io_sign;
  wire       [2:0]    multipliers_9_io_expOut;
  wire       [3:0]    multipliers_9_io_mantOut;
  wire       [0:0]    multipliers_10_io_sign;
  wire       [2:0]    multipliers_10_io_expOut;
  wire       [3:0]    multipliers_10_io_mantOut;
  wire       [0:0]    multipliers_11_io_sign;
  wire       [2:0]    multipliers_11_io_expOut;
  wire       [3:0]    multipliers_11_io_mantOut;
  wire       [0:0]    multipliers_12_io_sign;
  wire       [2:0]    multipliers_12_io_expOut;
  wire       [3:0]    multipliers_12_io_mantOut;
  wire       [0:0]    multipliers_13_io_sign;
  wire       [2:0]    multipliers_13_io_expOut;
  wire       [3:0]    multipliers_13_io_mantOut;
  wire       [0:0]    multipliers_14_io_sign;
  wire       [2:0]    multipliers_14_io_expOut;
  wire       [3:0]    multipliers_14_io_mantOut;
  wire       [0:0]    multipliers_15_io_sign;
  wire       [2:0]    multipliers_15_io_expOut;
  wire       [3:0]    multipliers_15_io_mantOut;
  wire       [0:0]    multipliers_16_io_sign;
  wire       [2:0]    multipliers_16_io_expOut;
  wire       [3:0]    multipliers_16_io_mantOut;
  wire       [0:0]    multipliers_17_io_sign;
  wire       [2:0]    multipliers_17_io_expOut;
  wire       [3:0]    multipliers_17_io_mantOut;
  wire       [0:0]    multipliers_18_io_sign;
  wire       [2:0]    multipliers_18_io_expOut;
  wire       [3:0]    multipliers_18_io_mantOut;
  wire       [0:0]    multipliers_19_io_sign;
  wire       [2:0]    multipliers_19_io_expOut;
  wire       [3:0]    multipliers_19_io_mantOut;
  wire       [0:0]    multipliers_20_io_sign;
  wire       [2:0]    multipliers_20_io_expOut;
  wire       [3:0]    multipliers_20_io_mantOut;
  wire       [0:0]    multipliers_21_io_sign;
  wire       [2:0]    multipliers_21_io_expOut;
  wire       [3:0]    multipliers_21_io_mantOut;
  wire       [0:0]    multipliers_22_io_sign;
  wire       [2:0]    multipliers_22_io_expOut;
  wire       [3:0]    multipliers_22_io_mantOut;
  wire       [0:0]    multipliers_23_io_sign;
  wire       [2:0]    multipliers_23_io_expOut;
  wire       [3:0]    multipliers_23_io_mantOut;
  wire       [0:0]    multipliers_24_io_sign;
  wire       [2:0]    multipliers_24_io_expOut;
  wire       [3:0]    multipliers_24_io_mantOut;
  wire       [0:0]    multipliers_25_io_sign;
  wire       [2:0]    multipliers_25_io_expOut;
  wire       [3:0]    multipliers_25_io_mantOut;
  wire       [0:0]    multipliers_26_io_sign;
  wire       [2:0]    multipliers_26_io_expOut;
  wire       [3:0]    multipliers_26_io_mantOut;
  wire       [0:0]    multipliers_27_io_sign;
  wire       [2:0]    multipliers_27_io_expOut;
  wire       [3:0]    multipliers_27_io_mantOut;
  wire       [0:0]    multipliers_28_io_sign;
  wire       [2:0]    multipliers_28_io_expOut;
  wire       [3:0]    multipliers_28_io_mantOut;
  wire       [0:0]    multipliers_29_io_sign;
  wire       [2:0]    multipliers_29_io_expOut;
  wire       [3:0]    multipliers_29_io_mantOut;
  wire       [0:0]    multipliers_30_io_sign;
  wire       [2:0]    multipliers_30_io_expOut;
  wire       [3:0]    multipliers_30_io_mantOut;
  wire       [0:0]    multipliers_31_io_sign;
  wire       [2:0]    multipliers_31_io_expOut;
  wire       [3:0]    multipliers_31_io_mantOut;
  wire       [7:0]    aligner_io_aligned_0;
  wire       [7:0]    aligner_io_aligned_1;
  wire       [7:0]    aligner_io_aligned_2;
  wire       [7:0]    aligner_io_aligned_3;
  wire       [7:0]    aligner_io_aligned_4;
  wire       [7:0]    aligner_io_aligned_5;
  wire       [7:0]    aligner_io_aligned_6;
  wire       [7:0]    aligner_io_aligned_7;
  wire       [7:0]    aligner_io_aligned_8;
  wire       [7:0]    aligner_io_aligned_9;
  wire       [7:0]    aligner_io_aligned_10;
  wire       [7:0]    aligner_io_aligned_11;
  wire       [7:0]    aligner_io_aligned_12;
  wire       [7:0]    aligner_io_aligned_13;
  wire       [7:0]    aligner_io_aligned_14;
  wire       [7:0]    aligner_io_aligned_15;
  wire       [7:0]    aligner_io_aligned_16;
  wire       [7:0]    aligner_io_aligned_17;
  wire       [7:0]    aligner_io_aligned_18;
  wire       [7:0]    aligner_io_aligned_19;
  wire       [7:0]    aligner_io_aligned_20;
  wire       [7:0]    aligner_io_aligned_21;
  wire       [7:0]    aligner_io_aligned_22;
  wire       [7:0]    aligner_io_aligned_23;
  wire       [7:0]    aligner_io_aligned_24;
  wire       [7:0]    aligner_io_aligned_25;
  wire       [7:0]    aligner_io_aligned_26;
  wire       [7:0]    aligner_io_aligned_27;
  wire       [7:0]    aligner_io_aligned_28;
  wire       [7:0]    aligner_io_aligned_29;
  wire       [7:0]    aligner_io_aligned_30;
  wire       [7:0]    aligner_io_aligned_31;
  wire       [12:0]   adderTree_1_io_result;
  wire       [12:0]   scaleIntegrator_io_dotProduct;
  wire       [8:0]    scaleIntegrator_io_combinedScale;

  MXFP4Multiplier multipliers_0 (
    .io_a       (io_vecA_0[3:0]               ), //i
    .io_b       (io_vecB_0[3:0]               ), //i
    .io_sign    (multipliers_0_io_sign        ), //o
    .io_expOut  (multipliers_0_io_expOut[2:0] ), //o
    .io_mantOut (multipliers_0_io_mantOut[3:0])  //o
  );
  MXFP4Multiplier multipliers_1 (
    .io_a       (io_vecA_1[3:0]               ), //i
    .io_b       (io_vecB_1[3:0]               ), //i
    .io_sign    (multipliers_1_io_sign        ), //o
    .io_expOut  (multipliers_1_io_expOut[2:0] ), //o
    .io_mantOut (multipliers_1_io_mantOut[3:0])  //o
  );
  MXFP4Multiplier multipliers_2 (
    .io_a       (io_vecA_2[3:0]               ), //i
    .io_b       (io_vecB_2[3:0]               ), //i
    .io_sign    (multipliers_2_io_sign        ), //o
    .io_expOut  (multipliers_2_io_expOut[2:0] ), //o
    .io_mantOut (multipliers_2_io_mantOut[3:0])  //o
  );
  MXFP4Multiplier multipliers_3 (
    .io_a       (io_vecA_3[3:0]               ), //i
    .io_b       (io_vecB_3[3:0]               ), //i
    .io_sign    (multipliers_3_io_sign        ), //o
    .io_expOut  (multipliers_3_io_expOut[2:0] ), //o
    .io_mantOut (multipliers_3_io_mantOut[3:0])  //o
  );
  MXFP4Multiplier multipliers_4 (
    .io_a       (io_vecA_4[3:0]               ), //i
    .io_b       (io_vecB_4[3:0]               ), //i
    .io_sign    (multipliers_4_io_sign        ), //o
    .io_expOut  (multipliers_4_io_expOut[2:0] ), //o
    .io_mantOut (multipliers_4_io_mantOut[3:0])  //o
  );
  MXFP4Multiplier multipliers_5 (
    .io_a       (io_vecA_5[3:0]               ), //i
    .io_b       (io_vecB_5[3:0]               ), //i
    .io_sign    (multipliers_5_io_sign        ), //o
    .io_expOut  (multipliers_5_io_expOut[2:0] ), //o
    .io_mantOut (multipliers_5_io_mantOut[3:0])  //o
  );
  MXFP4Multiplier multipliers_6 (
    .io_a       (io_vecA_6[3:0]               ), //i
    .io_b       (io_vecB_6[3:0]               ), //i
    .io_sign    (multipliers_6_io_sign        ), //o
    .io_expOut  (multipliers_6_io_expOut[2:0] ), //o
    .io_mantOut (multipliers_6_io_mantOut[3:0])  //o
  );
  MXFP4Multiplier multipliers_7 (
    .io_a       (io_vecA_7[3:0]               ), //i
    .io_b       (io_vecB_7[3:0]               ), //i
    .io_sign    (multipliers_7_io_sign        ), //o
    .io_expOut  (multipliers_7_io_expOut[2:0] ), //o
    .io_mantOut (multipliers_7_io_mantOut[3:0])  //o
  );
  MXFP4Multiplier multipliers_8 (
    .io_a       (io_vecA_8[3:0]               ), //i
    .io_b       (io_vecB_8[3:0]               ), //i
    .io_sign    (multipliers_8_io_sign        ), //o
    .io_expOut  (multipliers_8_io_expOut[2:0] ), //o
    .io_mantOut (multipliers_8_io_mantOut[3:0])  //o
  );
  MXFP4Multiplier multipliers_9 (
    .io_a       (io_vecA_9[3:0]               ), //i
    .io_b       (io_vecB_9[3:0]               ), //i
    .io_sign    (multipliers_9_io_sign        ), //o
    .io_expOut  (multipliers_9_io_expOut[2:0] ), //o
    .io_mantOut (multipliers_9_io_mantOut[3:0])  //o
  );
  MXFP4Multiplier multipliers_10 (
    .io_a       (io_vecA_10[3:0]               ), //i
    .io_b       (io_vecB_10[3:0]               ), //i
    .io_sign    (multipliers_10_io_sign        ), //o
    .io_expOut  (multipliers_10_io_expOut[2:0] ), //o
    .io_mantOut (multipliers_10_io_mantOut[3:0])  //o
  );
  MXFP4Multiplier multipliers_11 (
    .io_a       (io_vecA_11[3:0]               ), //i
    .io_b       (io_vecB_11[3:0]               ), //i
    .io_sign    (multipliers_11_io_sign        ), //o
    .io_expOut  (multipliers_11_io_expOut[2:0] ), //o
    .io_mantOut (multipliers_11_io_mantOut[3:0])  //o
  );
  MXFP4Multiplier multipliers_12 (
    .io_a       (io_vecA_12[3:0]               ), //i
    .io_b       (io_vecB_12[3:0]               ), //i
    .io_sign    (multipliers_12_io_sign        ), //o
    .io_expOut  (multipliers_12_io_expOut[2:0] ), //o
    .io_mantOut (multipliers_12_io_mantOut[3:0])  //o
  );
  MXFP4Multiplier multipliers_13 (
    .io_a       (io_vecA_13[3:0]               ), //i
    .io_b       (io_vecB_13[3:0]               ), //i
    .io_sign    (multipliers_13_io_sign        ), //o
    .io_expOut  (multipliers_13_io_expOut[2:0] ), //o
    .io_mantOut (multipliers_13_io_mantOut[3:0])  //o
  );
  MXFP4Multiplier multipliers_14 (
    .io_a       (io_vecA_14[3:0]               ), //i
    .io_b       (io_vecB_14[3:0]               ), //i
    .io_sign    (multipliers_14_io_sign        ), //o
    .io_expOut  (multipliers_14_io_expOut[2:0] ), //o
    .io_mantOut (multipliers_14_io_mantOut[3:0])  //o
  );
  MXFP4Multiplier multipliers_15 (
    .io_a       (io_vecA_15[3:0]               ), //i
    .io_b       (io_vecB_15[3:0]               ), //i
    .io_sign    (multipliers_15_io_sign        ), //o
    .io_expOut  (multipliers_15_io_expOut[2:0] ), //o
    .io_mantOut (multipliers_15_io_mantOut[3:0])  //o
  );
  MXFP4Multiplier multipliers_16 (
    .io_a       (io_vecA_16[3:0]               ), //i
    .io_b       (io_vecB_16[3:0]               ), //i
    .io_sign    (multipliers_16_io_sign        ), //o
    .io_expOut  (multipliers_16_io_expOut[2:0] ), //o
    .io_mantOut (multipliers_16_io_mantOut[3:0])  //o
  );
  MXFP4Multiplier multipliers_17 (
    .io_a       (io_vecA_17[3:0]               ), //i
    .io_b       (io_vecB_17[3:0]               ), //i
    .io_sign    (multipliers_17_io_sign        ), //o
    .io_expOut  (multipliers_17_io_expOut[2:0] ), //o
    .io_mantOut (multipliers_17_io_mantOut[3:0])  //o
  );
  MXFP4Multiplier multipliers_18 (
    .io_a       (io_vecA_18[3:0]               ), //i
    .io_b       (io_vecB_18[3:0]               ), //i
    .io_sign    (multipliers_18_io_sign        ), //o
    .io_expOut  (multipliers_18_io_expOut[2:0] ), //o
    .io_mantOut (multipliers_18_io_mantOut[3:0])  //o
  );
  MXFP4Multiplier multipliers_19 (
    .io_a       (io_vecA_19[3:0]               ), //i
    .io_b       (io_vecB_19[3:0]               ), //i
    .io_sign    (multipliers_19_io_sign        ), //o
    .io_expOut  (multipliers_19_io_expOut[2:0] ), //o
    .io_mantOut (multipliers_19_io_mantOut[3:0])  //o
  );
  MXFP4Multiplier multipliers_20 (
    .io_a       (io_vecA_20[3:0]               ), //i
    .io_b       (io_vecB_20[3:0]               ), //i
    .io_sign    (multipliers_20_io_sign        ), //o
    .io_expOut  (multipliers_20_io_expOut[2:0] ), //o
    .io_mantOut (multipliers_20_io_mantOut[3:0])  //o
  );
  MXFP4Multiplier multipliers_21 (
    .io_a       (io_vecA_21[3:0]               ), //i
    .io_b       (io_vecB_21[3:0]               ), //i
    .io_sign    (multipliers_21_io_sign        ), //o
    .io_expOut  (multipliers_21_io_expOut[2:0] ), //o
    .io_mantOut (multipliers_21_io_mantOut[3:0])  //o
  );
  MXFP4Multiplier multipliers_22 (
    .io_a       (io_vecA_22[3:0]               ), //i
    .io_b       (io_vecB_22[3:0]               ), //i
    .io_sign    (multipliers_22_io_sign        ), //o
    .io_expOut  (multipliers_22_io_expOut[2:0] ), //o
    .io_mantOut (multipliers_22_io_mantOut[3:0])  //o
  );
  MXFP4Multiplier multipliers_23 (
    .io_a       (io_vecA_23[3:0]               ), //i
    .io_b       (io_vecB_23[3:0]               ), //i
    .io_sign    (multipliers_23_io_sign        ), //o
    .io_expOut  (multipliers_23_io_expOut[2:0] ), //o
    .io_mantOut (multipliers_23_io_mantOut[3:0])  //o
  );
  MXFP4Multiplier multipliers_24 (
    .io_a       (io_vecA_24[3:0]               ), //i
    .io_b       (io_vecB_24[3:0]               ), //i
    .io_sign    (multipliers_24_io_sign        ), //o
    .io_expOut  (multipliers_24_io_expOut[2:0] ), //o
    .io_mantOut (multipliers_24_io_mantOut[3:0])  //o
  );
  MXFP4Multiplier multipliers_25 (
    .io_a       (io_vecA_25[3:0]               ), //i
    .io_b       (io_vecB_25[3:0]               ), //i
    .io_sign    (multipliers_25_io_sign        ), //o
    .io_expOut  (multipliers_25_io_expOut[2:0] ), //o
    .io_mantOut (multipliers_25_io_mantOut[3:0])  //o
  );
  MXFP4Multiplier multipliers_26 (
    .io_a       (io_vecA_26[3:0]               ), //i
    .io_b       (io_vecB_26[3:0]               ), //i
    .io_sign    (multipliers_26_io_sign        ), //o
    .io_expOut  (multipliers_26_io_expOut[2:0] ), //o
    .io_mantOut (multipliers_26_io_mantOut[3:0])  //o
  );
  MXFP4Multiplier multipliers_27 (
    .io_a       (io_vecA_27[3:0]               ), //i
    .io_b       (io_vecB_27[3:0]               ), //i
    .io_sign    (multipliers_27_io_sign        ), //o
    .io_expOut  (multipliers_27_io_expOut[2:0] ), //o
    .io_mantOut (multipliers_27_io_mantOut[3:0])  //o
  );
  MXFP4Multiplier multipliers_28 (
    .io_a       (io_vecA_28[3:0]               ), //i
    .io_b       (io_vecB_28[3:0]               ), //i
    .io_sign    (multipliers_28_io_sign        ), //o
    .io_expOut  (multipliers_28_io_expOut[2:0] ), //o
    .io_mantOut (multipliers_28_io_mantOut[3:0])  //o
  );
  MXFP4Multiplier multipliers_29 (
    .io_a       (io_vecA_29[3:0]               ), //i
    .io_b       (io_vecB_29[3:0]               ), //i
    .io_sign    (multipliers_29_io_sign        ), //o
    .io_expOut  (multipliers_29_io_expOut[2:0] ), //o
    .io_mantOut (multipliers_29_io_mantOut[3:0])  //o
  );
  MXFP4Multiplier multipliers_30 (
    .io_a       (io_vecA_30[3:0]               ), //i
    .io_b       (io_vecB_30[3:0]               ), //i
    .io_sign    (multipliers_30_io_sign        ), //o
    .io_expOut  (multipliers_30_io_expOut[2:0] ), //o
    .io_mantOut (multipliers_30_io_mantOut[3:0])  //o
  );
  MXFP4Multiplier multipliers_31 (
    .io_a       (io_vecA_31[3:0]               ), //i
    .io_b       (io_vecB_31[3:0]               ), //i
    .io_sign    (multipliers_31_io_sign        ), //o
    .io_expOut  (multipliers_31_io_expOut[2:0] ), //o
    .io_mantOut (multipliers_31_io_mantOut[3:0])  //o
  );
  ExponentAligner aligner (
    .io_signs_0    (multipliers_0_io_sign         ), //i
    .io_signs_1    (multipliers_1_io_sign         ), //i
    .io_signs_2    (multipliers_2_io_sign         ), //i
    .io_signs_3    (multipliers_3_io_sign         ), //i
    .io_signs_4    (multipliers_4_io_sign         ), //i
    .io_signs_5    (multipliers_5_io_sign         ), //i
    .io_signs_6    (multipliers_6_io_sign         ), //i
    .io_signs_7    (multipliers_7_io_sign         ), //i
    .io_signs_8    (multipliers_8_io_sign         ), //i
    .io_signs_9    (multipliers_9_io_sign         ), //i
    .io_signs_10   (multipliers_10_io_sign        ), //i
    .io_signs_11   (multipliers_11_io_sign        ), //i
    .io_signs_12   (multipliers_12_io_sign        ), //i
    .io_signs_13   (multipliers_13_io_sign        ), //i
    .io_signs_14   (multipliers_14_io_sign        ), //i
    .io_signs_15   (multipliers_15_io_sign        ), //i
    .io_signs_16   (multipliers_16_io_sign        ), //i
    .io_signs_17   (multipliers_17_io_sign        ), //i
    .io_signs_18   (multipliers_18_io_sign        ), //i
    .io_signs_19   (multipliers_19_io_sign        ), //i
    .io_signs_20   (multipliers_20_io_sign        ), //i
    .io_signs_21   (multipliers_21_io_sign        ), //i
    .io_signs_22   (multipliers_22_io_sign        ), //i
    .io_signs_23   (multipliers_23_io_sign        ), //i
    .io_signs_24   (multipliers_24_io_sign        ), //i
    .io_signs_25   (multipliers_25_io_sign        ), //i
    .io_signs_26   (multipliers_26_io_sign        ), //i
    .io_signs_27   (multipliers_27_io_sign        ), //i
    .io_signs_28   (multipliers_28_io_sign        ), //i
    .io_signs_29   (multipliers_29_io_sign        ), //i
    .io_signs_30   (multipliers_30_io_sign        ), //i
    .io_signs_31   (multipliers_31_io_sign        ), //i
    .io_exps_0     (multipliers_0_io_expOut[2:0]  ), //i
    .io_exps_1     (multipliers_1_io_expOut[2:0]  ), //i
    .io_exps_2     (multipliers_2_io_expOut[2:0]  ), //i
    .io_exps_3     (multipliers_3_io_expOut[2:0]  ), //i
    .io_exps_4     (multipliers_4_io_expOut[2:0]  ), //i
    .io_exps_5     (multipliers_5_io_expOut[2:0]  ), //i
    .io_exps_6     (multipliers_6_io_expOut[2:0]  ), //i
    .io_exps_7     (multipliers_7_io_expOut[2:0]  ), //i
    .io_exps_8     (multipliers_8_io_expOut[2:0]  ), //i
    .io_exps_9     (multipliers_9_io_expOut[2:0]  ), //i
    .io_exps_10    (multipliers_10_io_expOut[2:0] ), //i
    .io_exps_11    (multipliers_11_io_expOut[2:0] ), //i
    .io_exps_12    (multipliers_12_io_expOut[2:0] ), //i
    .io_exps_13    (multipliers_13_io_expOut[2:0] ), //i
    .io_exps_14    (multipliers_14_io_expOut[2:0] ), //i
    .io_exps_15    (multipliers_15_io_expOut[2:0] ), //i
    .io_exps_16    (multipliers_16_io_expOut[2:0] ), //i
    .io_exps_17    (multipliers_17_io_expOut[2:0] ), //i
    .io_exps_18    (multipliers_18_io_expOut[2:0] ), //i
    .io_exps_19    (multipliers_19_io_expOut[2:0] ), //i
    .io_exps_20    (multipliers_20_io_expOut[2:0] ), //i
    .io_exps_21    (multipliers_21_io_expOut[2:0] ), //i
    .io_exps_22    (multipliers_22_io_expOut[2:0] ), //i
    .io_exps_23    (multipliers_23_io_expOut[2:0] ), //i
    .io_exps_24    (multipliers_24_io_expOut[2:0] ), //i
    .io_exps_25    (multipliers_25_io_expOut[2:0] ), //i
    .io_exps_26    (multipliers_26_io_expOut[2:0] ), //i
    .io_exps_27    (multipliers_27_io_expOut[2:0] ), //i
    .io_exps_28    (multipliers_28_io_expOut[2:0] ), //i
    .io_exps_29    (multipliers_29_io_expOut[2:0] ), //i
    .io_exps_30    (multipliers_30_io_expOut[2:0] ), //i
    .io_exps_31    (multipliers_31_io_expOut[2:0] ), //i
    .io_mants_0    (multipliers_0_io_mantOut[3:0] ), //i
    .io_mants_1    (multipliers_1_io_mantOut[3:0] ), //i
    .io_mants_2    (multipliers_2_io_mantOut[3:0] ), //i
    .io_mants_3    (multipliers_3_io_mantOut[3:0] ), //i
    .io_mants_4    (multipliers_4_io_mantOut[3:0] ), //i
    .io_mants_5    (multipliers_5_io_mantOut[3:0] ), //i
    .io_mants_6    (multipliers_6_io_mantOut[3:0] ), //i
    .io_mants_7    (multipliers_7_io_mantOut[3:0] ), //i
    .io_mants_8    (multipliers_8_io_mantOut[3:0] ), //i
    .io_mants_9    (multipliers_9_io_mantOut[3:0] ), //i
    .io_mants_10   (multipliers_10_io_mantOut[3:0]), //i
    .io_mants_11   (multipliers_11_io_mantOut[3:0]), //i
    .io_mants_12   (multipliers_12_io_mantOut[3:0]), //i
    .io_mants_13   (multipliers_13_io_mantOut[3:0]), //i
    .io_mants_14   (multipliers_14_io_mantOut[3:0]), //i
    .io_mants_15   (multipliers_15_io_mantOut[3:0]), //i
    .io_mants_16   (multipliers_16_io_mantOut[3:0]), //i
    .io_mants_17   (multipliers_17_io_mantOut[3:0]), //i
    .io_mants_18   (multipliers_18_io_mantOut[3:0]), //i
    .io_mants_19   (multipliers_19_io_mantOut[3:0]), //i
    .io_mants_20   (multipliers_20_io_mantOut[3:0]), //i
    .io_mants_21   (multipliers_21_io_mantOut[3:0]), //i
    .io_mants_22   (multipliers_22_io_mantOut[3:0]), //i
    .io_mants_23   (multipliers_23_io_mantOut[3:0]), //i
    .io_mants_24   (multipliers_24_io_mantOut[3:0]), //i
    .io_mants_25   (multipliers_25_io_mantOut[3:0]), //i
    .io_mants_26   (multipliers_26_io_mantOut[3:0]), //i
    .io_mants_27   (multipliers_27_io_mantOut[3:0]), //i
    .io_mants_28   (multipliers_28_io_mantOut[3:0]), //i
    .io_mants_29   (multipliers_29_io_mantOut[3:0]), //i
    .io_mants_30   (multipliers_30_io_mantOut[3:0]), //i
    .io_mants_31   (multipliers_31_io_mantOut[3:0]), //i
    .io_aligned_0  (aligner_io_aligned_0[7:0]     ), //o
    .io_aligned_1  (aligner_io_aligned_1[7:0]     ), //o
    .io_aligned_2  (aligner_io_aligned_2[7:0]     ), //o
    .io_aligned_3  (aligner_io_aligned_3[7:0]     ), //o
    .io_aligned_4  (aligner_io_aligned_4[7:0]     ), //o
    .io_aligned_5  (aligner_io_aligned_5[7:0]     ), //o
    .io_aligned_6  (aligner_io_aligned_6[7:0]     ), //o
    .io_aligned_7  (aligner_io_aligned_7[7:0]     ), //o
    .io_aligned_8  (aligner_io_aligned_8[7:0]     ), //o
    .io_aligned_9  (aligner_io_aligned_9[7:0]     ), //o
    .io_aligned_10 (aligner_io_aligned_10[7:0]    ), //o
    .io_aligned_11 (aligner_io_aligned_11[7:0]    ), //o
    .io_aligned_12 (aligner_io_aligned_12[7:0]    ), //o
    .io_aligned_13 (aligner_io_aligned_13[7:0]    ), //o
    .io_aligned_14 (aligner_io_aligned_14[7:0]    ), //o
    .io_aligned_15 (aligner_io_aligned_15[7:0]    ), //o
    .io_aligned_16 (aligner_io_aligned_16[7:0]    ), //o
    .io_aligned_17 (aligner_io_aligned_17[7:0]    ), //o
    .io_aligned_18 (aligner_io_aligned_18[7:0]    ), //o
    .io_aligned_19 (aligner_io_aligned_19[7:0]    ), //o
    .io_aligned_20 (aligner_io_aligned_20[7:0]    ), //o
    .io_aligned_21 (aligner_io_aligned_21[7:0]    ), //o
    .io_aligned_22 (aligner_io_aligned_22[7:0]    ), //o
    .io_aligned_23 (aligner_io_aligned_23[7:0]    ), //o
    .io_aligned_24 (aligner_io_aligned_24[7:0]    ), //o
    .io_aligned_25 (aligner_io_aligned_25[7:0]    ), //o
    .io_aligned_26 (aligner_io_aligned_26[7:0]    ), //o
    .io_aligned_27 (aligner_io_aligned_27[7:0]    ), //o
    .io_aligned_28 (aligner_io_aligned_28[7:0]    ), //o
    .io_aligned_29 (aligner_io_aligned_29[7:0]    ), //o
    .io_aligned_30 (aligner_io_aligned_30[7:0]    ), //o
    .io_aligned_31 (aligner_io_aligned_31[7:0]    )  //o
  );
  AdderTree adderTree_1 (
    .io_inputs_0  (aligner_io_aligned_0[7:0]  ), //i
    .io_inputs_1  (aligner_io_aligned_1[7:0]  ), //i
    .io_inputs_2  (aligner_io_aligned_2[7:0]  ), //i
    .io_inputs_3  (aligner_io_aligned_3[7:0]  ), //i
    .io_inputs_4  (aligner_io_aligned_4[7:0]  ), //i
    .io_inputs_5  (aligner_io_aligned_5[7:0]  ), //i
    .io_inputs_6  (aligner_io_aligned_6[7:0]  ), //i
    .io_inputs_7  (aligner_io_aligned_7[7:0]  ), //i
    .io_inputs_8  (aligner_io_aligned_8[7:0]  ), //i
    .io_inputs_9  (aligner_io_aligned_9[7:0]  ), //i
    .io_inputs_10 (aligner_io_aligned_10[7:0] ), //i
    .io_inputs_11 (aligner_io_aligned_11[7:0] ), //i
    .io_inputs_12 (aligner_io_aligned_12[7:0] ), //i
    .io_inputs_13 (aligner_io_aligned_13[7:0] ), //i
    .io_inputs_14 (aligner_io_aligned_14[7:0] ), //i
    .io_inputs_15 (aligner_io_aligned_15[7:0] ), //i
    .io_inputs_16 (aligner_io_aligned_16[7:0] ), //i
    .io_inputs_17 (aligner_io_aligned_17[7:0] ), //i
    .io_inputs_18 (aligner_io_aligned_18[7:0] ), //i
    .io_inputs_19 (aligner_io_aligned_19[7:0] ), //i
    .io_inputs_20 (aligner_io_aligned_20[7:0] ), //i
    .io_inputs_21 (aligner_io_aligned_21[7:0] ), //i
    .io_inputs_22 (aligner_io_aligned_22[7:0] ), //i
    .io_inputs_23 (aligner_io_aligned_23[7:0] ), //i
    .io_inputs_24 (aligner_io_aligned_24[7:0] ), //i
    .io_inputs_25 (aligner_io_aligned_25[7:0] ), //i
    .io_inputs_26 (aligner_io_aligned_26[7:0] ), //i
    .io_inputs_27 (aligner_io_aligned_27[7:0] ), //i
    .io_inputs_28 (aligner_io_aligned_28[7:0] ), //i
    .io_inputs_29 (aligner_io_aligned_29[7:0] ), //i
    .io_inputs_30 (aligner_io_aligned_30[7:0] ), //i
    .io_inputs_31 (aligner_io_aligned_31[7:0] ), //i
    .io_result    (adderTree_1_io_result[12:0])  //o
  );
  SharedScaleIntegrator scaleIntegrator (
    .io_treeSum       (adderTree_1_io_result[12:0]          ), //i
    .io_scaleA        (io_scaleA[7:0]                       ), //i
    .io_scaleB        (io_scaleB[7:0]                       ), //i
    .io_dotProduct    (scaleIntegrator_io_dotProduct[12:0]  ), //o
    .io_combinedScale (scaleIntegrator_io_combinedScale[8:0])  //o
  );
  assign io_dotProduct = scaleIntegrator_io_dotProduct;
  assign io_combinedScale = scaleIntegrator_io_combinedScale;

endmodule

module SharedScaleIntegrator (
  input  wire [12:0]   io_treeSum,
  input  wire [7:0]    io_scaleA,
  input  wire [7:0]    io_scaleB,
  output wire [12:0]   io_dotProduct,
  output wire [8:0]    io_combinedScale
);

  wire       [8:0]    _zz_io_combinedScale;
  wire       [8:0]    _zz_io_combinedScale_1;

  assign _zz_io_combinedScale = {1'd0, io_scaleA};
  assign _zz_io_combinedScale_1 = {1'd0, io_scaleB};
  assign io_dotProduct = io_treeSum;
  assign io_combinedScale = (_zz_io_combinedScale + _zz_io_combinedScale_1);

endmodule

module AdderTree (
  input  wire [7:0]    io_inputs_0,
  input  wire [7:0]    io_inputs_1,
  input  wire [7:0]    io_inputs_2,
  input  wire [7:0]    io_inputs_3,
  input  wire [7:0]    io_inputs_4,
  input  wire [7:0]    io_inputs_5,
  input  wire [7:0]    io_inputs_6,
  input  wire [7:0]    io_inputs_7,
  input  wire [7:0]    io_inputs_8,
  input  wire [7:0]    io_inputs_9,
  input  wire [7:0]    io_inputs_10,
  input  wire [7:0]    io_inputs_11,
  input  wire [7:0]    io_inputs_12,
  input  wire [7:0]    io_inputs_13,
  input  wire [7:0]    io_inputs_14,
  input  wire [7:0]    io_inputs_15,
  input  wire [7:0]    io_inputs_16,
  input  wire [7:0]    io_inputs_17,
  input  wire [7:0]    io_inputs_18,
  input  wire [7:0]    io_inputs_19,
  input  wire [7:0]    io_inputs_20,
  input  wire [7:0]    io_inputs_21,
  input  wire [7:0]    io_inputs_22,
  input  wire [7:0]    io_inputs_23,
  input  wire [7:0]    io_inputs_24,
  input  wire [7:0]    io_inputs_25,
  input  wire [7:0]    io_inputs_26,
  input  wire [7:0]    io_inputs_27,
  input  wire [7:0]    io_inputs_28,
  input  wire [7:0]    io_inputs_29,
  input  wire [7:0]    io_inputs_30,
  input  wire [7:0]    io_inputs_31,
  output wire [12:0]   io_result
);

  wire       [12:0]   _zz_io_result;
  wire       [12:0]   _zz_io_result_1;
  wire       [12:0]   _zz_io_result_2;
  wire       [12:0]   _zz_io_result_3;
  wire       [12:0]   _zz_io_result_4;
  wire       [12:0]   _zz_io_result_5;
  wire       [12:0]   _zz_io_result_6;
  wire       [12:0]   _zz_io_result_7;
  wire       [12:0]   _zz_io_result_8;
  wire       [12:0]   _zz_io_result_9;
  wire       [12:0]   _zz_io_result_10;
  wire       [12:0]   _zz_io_result_11;
  wire       [12:0]   _zz_io_result_12;
  wire       [12:0]   _zz_io_result_13;
  wire       [12:0]   _zz_io_result_14;
  wire       [12:0]   _zz_io_result_15;
  wire       [12:0]   _zz_io_result_16;
  wire       [12:0]   _zz_io_result_17;
  wire       [12:0]   _zz_io_result_18;
  wire       [12:0]   _zz_io_result_19;
  wire       [12:0]   _zz_io_result_20;
  wire       [12:0]   _zz_io_result_21;
  wire       [12:0]   _zz_io_result_22;
  wire       [12:0]   _zz_io_result_23;
  wire       [12:0]   _zz_io_result_24;
  wire       [12:0]   _zz_io_result_25;
  wire       [12:0]   _zz_io_result_26;
  wire       [12:0]   _zz_io_result_27;
  wire       [12:0]   _zz_io_result_28;
  wire       [12:0]   _zz_io_result_29;
  wire       [12:0]   extInputs_0;
  wire       [12:0]   extInputs_1;
  wire       [12:0]   extInputs_2;
  wire       [12:0]   extInputs_3;
  wire       [12:0]   extInputs_4;
  wire       [12:0]   extInputs_5;
  wire       [12:0]   extInputs_6;
  wire       [12:0]   extInputs_7;
  wire       [12:0]   extInputs_8;
  wire       [12:0]   extInputs_9;
  wire       [12:0]   extInputs_10;
  wire       [12:0]   extInputs_11;
  wire       [12:0]   extInputs_12;
  wire       [12:0]   extInputs_13;
  wire       [12:0]   extInputs_14;
  wire       [12:0]   extInputs_15;
  wire       [12:0]   extInputs_16;
  wire       [12:0]   extInputs_17;
  wire       [12:0]   extInputs_18;
  wire       [12:0]   extInputs_19;
  wire       [12:0]   extInputs_20;
  wire       [12:0]   extInputs_21;
  wire       [12:0]   extInputs_22;
  wire       [12:0]   extInputs_23;
  wire       [12:0]   extInputs_24;
  wire       [12:0]   extInputs_25;
  wire       [12:0]   extInputs_26;
  wire       [12:0]   extInputs_27;
  wire       [12:0]   extInputs_28;
  wire       [12:0]   extInputs_29;
  wire       [12:0]   extInputs_30;
  wire       [12:0]   extInputs_31;

  assign _zz_io_result = ($signed(_zz_io_result_1) + $signed(_zz_io_result_8));
  assign _zz_io_result_1 = ($signed(_zz_io_result_2) + $signed(_zz_io_result_5));
  assign _zz_io_result_2 = ($signed(_zz_io_result_3) + $signed(_zz_io_result_4));
  assign _zz_io_result_3 = ($signed(extInputs_0) + $signed(extInputs_1));
  assign _zz_io_result_4 = ($signed(extInputs_2) + $signed(extInputs_3));
  assign _zz_io_result_5 = ($signed(_zz_io_result_6) + $signed(_zz_io_result_7));
  assign _zz_io_result_6 = ($signed(extInputs_4) + $signed(extInputs_5));
  assign _zz_io_result_7 = ($signed(extInputs_6) + $signed(extInputs_7));
  assign _zz_io_result_8 = ($signed(_zz_io_result_9) + $signed(_zz_io_result_12));
  assign _zz_io_result_9 = ($signed(_zz_io_result_10) + $signed(_zz_io_result_11));
  assign _zz_io_result_10 = ($signed(extInputs_8) + $signed(extInputs_9));
  assign _zz_io_result_11 = ($signed(extInputs_10) + $signed(extInputs_11));
  assign _zz_io_result_12 = ($signed(_zz_io_result_13) + $signed(_zz_io_result_14));
  assign _zz_io_result_13 = ($signed(extInputs_12) + $signed(extInputs_13));
  assign _zz_io_result_14 = ($signed(extInputs_14) + $signed(extInputs_15));
  assign _zz_io_result_15 = ($signed(_zz_io_result_16) + $signed(_zz_io_result_23));
  assign _zz_io_result_16 = ($signed(_zz_io_result_17) + $signed(_zz_io_result_20));
  assign _zz_io_result_17 = ($signed(_zz_io_result_18) + $signed(_zz_io_result_19));
  assign _zz_io_result_18 = ($signed(extInputs_16) + $signed(extInputs_17));
  assign _zz_io_result_19 = ($signed(extInputs_18) + $signed(extInputs_19));
  assign _zz_io_result_20 = ($signed(_zz_io_result_21) + $signed(_zz_io_result_22));
  assign _zz_io_result_21 = ($signed(extInputs_20) + $signed(extInputs_21));
  assign _zz_io_result_22 = ($signed(extInputs_22) + $signed(extInputs_23));
  assign _zz_io_result_23 = ($signed(_zz_io_result_24) + $signed(_zz_io_result_27));
  assign _zz_io_result_24 = ($signed(_zz_io_result_25) + $signed(_zz_io_result_26));
  assign _zz_io_result_25 = ($signed(extInputs_24) + $signed(extInputs_25));
  assign _zz_io_result_26 = ($signed(extInputs_26) + $signed(extInputs_27));
  assign _zz_io_result_27 = ($signed(_zz_io_result_28) + $signed(_zz_io_result_29));
  assign _zz_io_result_28 = ($signed(extInputs_28) + $signed(extInputs_29));
  assign _zz_io_result_29 = ($signed(extInputs_30) + $signed(extInputs_31));
  assign extInputs_0 = {{5{io_inputs_0[7]}}, io_inputs_0};
  assign extInputs_1 = {{5{io_inputs_1[7]}}, io_inputs_1};
  assign extInputs_2 = {{5{io_inputs_2[7]}}, io_inputs_2};
  assign extInputs_3 = {{5{io_inputs_3[7]}}, io_inputs_3};
  assign extInputs_4 = {{5{io_inputs_4[7]}}, io_inputs_4};
  assign extInputs_5 = {{5{io_inputs_5[7]}}, io_inputs_5};
  assign extInputs_6 = {{5{io_inputs_6[7]}}, io_inputs_6};
  assign extInputs_7 = {{5{io_inputs_7[7]}}, io_inputs_7};
  assign extInputs_8 = {{5{io_inputs_8[7]}}, io_inputs_8};
  assign extInputs_9 = {{5{io_inputs_9[7]}}, io_inputs_9};
  assign extInputs_10 = {{5{io_inputs_10[7]}}, io_inputs_10};
  assign extInputs_11 = {{5{io_inputs_11[7]}}, io_inputs_11};
  assign extInputs_12 = {{5{io_inputs_12[7]}}, io_inputs_12};
  assign extInputs_13 = {{5{io_inputs_13[7]}}, io_inputs_13};
  assign extInputs_14 = {{5{io_inputs_14[7]}}, io_inputs_14};
  assign extInputs_15 = {{5{io_inputs_15[7]}}, io_inputs_15};
  assign extInputs_16 = {{5{io_inputs_16[7]}}, io_inputs_16};
  assign extInputs_17 = {{5{io_inputs_17[7]}}, io_inputs_17};
  assign extInputs_18 = {{5{io_inputs_18[7]}}, io_inputs_18};
  assign extInputs_19 = {{5{io_inputs_19[7]}}, io_inputs_19};
  assign extInputs_20 = {{5{io_inputs_20[7]}}, io_inputs_20};
  assign extInputs_21 = {{5{io_inputs_21[7]}}, io_inputs_21};
  assign extInputs_22 = {{5{io_inputs_22[7]}}, io_inputs_22};
  assign extInputs_23 = {{5{io_inputs_23[7]}}, io_inputs_23};
  assign extInputs_24 = {{5{io_inputs_24[7]}}, io_inputs_24};
  assign extInputs_25 = {{5{io_inputs_25[7]}}, io_inputs_25};
  assign extInputs_26 = {{5{io_inputs_26[7]}}, io_inputs_26};
  assign extInputs_27 = {{5{io_inputs_27[7]}}, io_inputs_27};
  assign extInputs_28 = {{5{io_inputs_28[7]}}, io_inputs_28};
  assign extInputs_29 = {{5{io_inputs_29[7]}}, io_inputs_29};
  assign extInputs_30 = {{5{io_inputs_30[7]}}, io_inputs_30};
  assign extInputs_31 = {{5{io_inputs_31[7]}}, io_inputs_31};
  assign io_result = ($signed(_zz_io_result) + $signed(_zz_io_result_15));

endmodule

module ExponentAligner (
  input  wire [0:0]    io_signs_0,
  input  wire [0:0]    io_signs_1,
  input  wire [0:0]    io_signs_2,
  input  wire [0:0]    io_signs_3,
  input  wire [0:0]    io_signs_4,
  input  wire [0:0]    io_signs_5,
  input  wire [0:0]    io_signs_6,
  input  wire [0:0]    io_signs_7,
  input  wire [0:0]    io_signs_8,
  input  wire [0:0]    io_signs_9,
  input  wire [0:0]    io_signs_10,
  input  wire [0:0]    io_signs_11,
  input  wire [0:0]    io_signs_12,
  input  wire [0:0]    io_signs_13,
  input  wire [0:0]    io_signs_14,
  input  wire [0:0]    io_signs_15,
  input  wire [0:0]    io_signs_16,
  input  wire [0:0]    io_signs_17,
  input  wire [0:0]    io_signs_18,
  input  wire [0:0]    io_signs_19,
  input  wire [0:0]    io_signs_20,
  input  wire [0:0]    io_signs_21,
  input  wire [0:0]    io_signs_22,
  input  wire [0:0]    io_signs_23,
  input  wire [0:0]    io_signs_24,
  input  wire [0:0]    io_signs_25,
  input  wire [0:0]    io_signs_26,
  input  wire [0:0]    io_signs_27,
  input  wire [0:0]    io_signs_28,
  input  wire [0:0]    io_signs_29,
  input  wire [0:0]    io_signs_30,
  input  wire [0:0]    io_signs_31,
  input  wire [2:0]    io_exps_0,
  input  wire [2:0]    io_exps_1,
  input  wire [2:0]    io_exps_2,
  input  wire [2:0]    io_exps_3,
  input  wire [2:0]    io_exps_4,
  input  wire [2:0]    io_exps_5,
  input  wire [2:0]    io_exps_6,
  input  wire [2:0]    io_exps_7,
  input  wire [2:0]    io_exps_8,
  input  wire [2:0]    io_exps_9,
  input  wire [2:0]    io_exps_10,
  input  wire [2:0]    io_exps_11,
  input  wire [2:0]    io_exps_12,
  input  wire [2:0]    io_exps_13,
  input  wire [2:0]    io_exps_14,
  input  wire [2:0]    io_exps_15,
  input  wire [2:0]    io_exps_16,
  input  wire [2:0]    io_exps_17,
  input  wire [2:0]    io_exps_18,
  input  wire [2:0]    io_exps_19,
  input  wire [2:0]    io_exps_20,
  input  wire [2:0]    io_exps_21,
  input  wire [2:0]    io_exps_22,
  input  wire [2:0]    io_exps_23,
  input  wire [2:0]    io_exps_24,
  input  wire [2:0]    io_exps_25,
  input  wire [2:0]    io_exps_26,
  input  wire [2:0]    io_exps_27,
  input  wire [2:0]    io_exps_28,
  input  wire [2:0]    io_exps_29,
  input  wire [2:0]    io_exps_30,
  input  wire [2:0]    io_exps_31,
  input  wire [3:0]    io_mants_0,
  input  wire [3:0]    io_mants_1,
  input  wire [3:0]    io_mants_2,
  input  wire [3:0]    io_mants_3,
  input  wire [3:0]    io_mants_4,
  input  wire [3:0]    io_mants_5,
  input  wire [3:0]    io_mants_6,
  input  wire [3:0]    io_mants_7,
  input  wire [3:0]    io_mants_8,
  input  wire [3:0]    io_mants_9,
  input  wire [3:0]    io_mants_10,
  input  wire [3:0]    io_mants_11,
  input  wire [3:0]    io_mants_12,
  input  wire [3:0]    io_mants_13,
  input  wire [3:0]    io_mants_14,
  input  wire [3:0]    io_mants_15,
  input  wire [3:0]    io_mants_16,
  input  wire [3:0]    io_mants_17,
  input  wire [3:0]    io_mants_18,
  input  wire [3:0]    io_mants_19,
  input  wire [3:0]    io_mants_20,
  input  wire [3:0]    io_mants_21,
  input  wire [3:0]    io_mants_22,
  input  wire [3:0]    io_mants_23,
  input  wire [3:0]    io_mants_24,
  input  wire [3:0]    io_mants_25,
  input  wire [3:0]    io_mants_26,
  input  wire [3:0]    io_mants_27,
  input  wire [3:0]    io_mants_28,
  input  wire [3:0]    io_mants_29,
  input  wire [3:0]    io_mants_30,
  input  wire [3:0]    io_mants_31,
  output wire [7:0]    io_aligned_0,
  output wire [7:0]    io_aligned_1,
  output wire [7:0]    io_aligned_2,
  output wire [7:0]    io_aligned_3,
  output wire [7:0]    io_aligned_4,
  output wire [7:0]    io_aligned_5,
  output wire [7:0]    io_aligned_6,
  output wire [7:0]    io_aligned_7,
  output wire [7:0]    io_aligned_8,
  output wire [7:0]    io_aligned_9,
  output wire [7:0]    io_aligned_10,
  output wire [7:0]    io_aligned_11,
  output wire [7:0]    io_aligned_12,
  output wire [7:0]    io_aligned_13,
  output wire [7:0]    io_aligned_14,
  output wire [7:0]    io_aligned_15,
  output wire [7:0]    io_aligned_16,
  output wire [7:0]    io_aligned_17,
  output wire [7:0]    io_aligned_18,
  output wire [7:0]    io_aligned_19,
  output wire [7:0]    io_aligned_20,
  output wire [7:0]    io_aligned_21,
  output wire [7:0]    io_aligned_22,
  output wire [7:0]    io_aligned_23,
  output wire [7:0]    io_aligned_24,
  output wire [7:0]    io_aligned_25,
  output wire [7:0]    io_aligned_26,
  output wire [7:0]    io_aligned_27,
  output wire [7:0]    io_aligned_28,
  output wire [7:0]    io_aligned_29,
  output wire [7:0]    io_aligned_30,
  output wire [7:0]    io_aligned_31
);

  wire       [2:0]    _zz__zz_io_aligned_0;
  wire       [7:0]    _zz_io_aligned_0_1;
  wire       [7:0]    _zz_io_aligned_0_2;
  wire       [7:0]    _zz_io_aligned_0_3;
  wire       [2:0]    _zz__zz_io_aligned_1;
  wire       [7:0]    _zz_io_aligned_1_1;
  wire       [7:0]    _zz_io_aligned_1_2;
  wire       [7:0]    _zz_io_aligned_1_3;
  wire       [2:0]    _zz__zz_io_aligned_2;
  wire       [7:0]    _zz_io_aligned_2_1;
  wire       [7:0]    _zz_io_aligned_2_2;
  wire       [7:0]    _zz_io_aligned_2_3;
  wire       [2:0]    _zz__zz_io_aligned_3;
  wire       [7:0]    _zz_io_aligned_3_1;
  wire       [7:0]    _zz_io_aligned_3_2;
  wire       [7:0]    _zz_io_aligned_3_3;
  wire       [2:0]    _zz__zz_io_aligned_4;
  wire       [7:0]    _zz_io_aligned_4_1;
  wire       [7:0]    _zz_io_aligned_4_2;
  wire       [7:0]    _zz_io_aligned_4_3;
  wire       [2:0]    _zz__zz_io_aligned_5;
  wire       [7:0]    _zz_io_aligned_5_1;
  wire       [7:0]    _zz_io_aligned_5_2;
  wire       [7:0]    _zz_io_aligned_5_3;
  wire       [2:0]    _zz__zz_io_aligned_6;
  wire       [7:0]    _zz_io_aligned_6_1;
  wire       [7:0]    _zz_io_aligned_6_2;
  wire       [7:0]    _zz_io_aligned_6_3;
  wire       [2:0]    _zz__zz_io_aligned_7;
  wire       [7:0]    _zz_io_aligned_7_1;
  wire       [7:0]    _zz_io_aligned_7_2;
  wire       [7:0]    _zz_io_aligned_7_3;
  wire       [2:0]    _zz__zz_io_aligned_8;
  wire       [7:0]    _zz_io_aligned_8_1;
  wire       [7:0]    _zz_io_aligned_8_2;
  wire       [7:0]    _zz_io_aligned_8_3;
  wire       [2:0]    _zz__zz_io_aligned_9;
  wire       [7:0]    _zz_io_aligned_9_1;
  wire       [7:0]    _zz_io_aligned_9_2;
  wire       [7:0]    _zz_io_aligned_9_3;
  wire       [2:0]    _zz__zz_io_aligned_10;
  wire       [7:0]    _zz_io_aligned_10_1;
  wire       [7:0]    _zz_io_aligned_10_2;
  wire       [7:0]    _zz_io_aligned_10_3;
  wire       [2:0]    _zz__zz_io_aligned_11;
  wire       [7:0]    _zz_io_aligned_11_1;
  wire       [7:0]    _zz_io_aligned_11_2;
  wire       [7:0]    _zz_io_aligned_11_3;
  wire       [2:0]    _zz__zz_io_aligned_12;
  wire       [7:0]    _zz_io_aligned_12_1;
  wire       [7:0]    _zz_io_aligned_12_2;
  wire       [7:0]    _zz_io_aligned_12_3;
  wire       [2:0]    _zz__zz_io_aligned_13;
  wire       [7:0]    _zz_io_aligned_13_1;
  wire       [7:0]    _zz_io_aligned_13_2;
  wire       [7:0]    _zz_io_aligned_13_3;
  wire       [2:0]    _zz__zz_io_aligned_14;
  wire       [7:0]    _zz_io_aligned_14_1;
  wire       [7:0]    _zz_io_aligned_14_2;
  wire       [7:0]    _zz_io_aligned_14_3;
  wire       [2:0]    _zz__zz_io_aligned_15;
  wire       [7:0]    _zz_io_aligned_15_1;
  wire       [7:0]    _zz_io_aligned_15_2;
  wire       [7:0]    _zz_io_aligned_15_3;
  wire       [2:0]    _zz__zz_io_aligned_16;
  wire       [7:0]    _zz_io_aligned_16_1;
  wire       [7:0]    _zz_io_aligned_16_2;
  wire       [7:0]    _zz_io_aligned_16_3;
  wire       [2:0]    _zz__zz_io_aligned_17;
  wire       [7:0]    _zz_io_aligned_17_1;
  wire       [7:0]    _zz_io_aligned_17_2;
  wire       [7:0]    _zz_io_aligned_17_3;
  wire       [2:0]    _zz__zz_io_aligned_18;
  wire       [7:0]    _zz_io_aligned_18_1;
  wire       [7:0]    _zz_io_aligned_18_2;
  wire       [7:0]    _zz_io_aligned_18_3;
  wire       [2:0]    _zz__zz_io_aligned_19;
  wire       [7:0]    _zz_io_aligned_19_1;
  wire       [7:0]    _zz_io_aligned_19_2;
  wire       [7:0]    _zz_io_aligned_19_3;
  wire       [2:0]    _zz__zz_io_aligned_20;
  wire       [7:0]    _zz_io_aligned_20_1;
  wire       [7:0]    _zz_io_aligned_20_2;
  wire       [7:0]    _zz_io_aligned_20_3;
  wire       [2:0]    _zz__zz_io_aligned_21;
  wire       [7:0]    _zz_io_aligned_21_1;
  wire       [7:0]    _zz_io_aligned_21_2;
  wire       [7:0]    _zz_io_aligned_21_3;
  wire       [2:0]    _zz__zz_io_aligned_22;
  wire       [7:0]    _zz_io_aligned_22_1;
  wire       [7:0]    _zz_io_aligned_22_2;
  wire       [7:0]    _zz_io_aligned_22_3;
  wire       [2:0]    _zz__zz_io_aligned_23;
  wire       [7:0]    _zz_io_aligned_23_1;
  wire       [7:0]    _zz_io_aligned_23_2;
  wire       [7:0]    _zz_io_aligned_23_3;
  wire       [2:0]    _zz__zz_io_aligned_24;
  wire       [7:0]    _zz_io_aligned_24_1;
  wire       [7:0]    _zz_io_aligned_24_2;
  wire       [7:0]    _zz_io_aligned_24_3;
  wire       [2:0]    _zz__zz_io_aligned_25;
  wire       [7:0]    _zz_io_aligned_25_1;
  wire       [7:0]    _zz_io_aligned_25_2;
  wire       [7:0]    _zz_io_aligned_25_3;
  wire       [2:0]    _zz__zz_io_aligned_26;
  wire       [7:0]    _zz_io_aligned_26_1;
  wire       [7:0]    _zz_io_aligned_26_2;
  wire       [7:0]    _zz_io_aligned_26_3;
  wire       [2:0]    _zz__zz_io_aligned_27;
  wire       [7:0]    _zz_io_aligned_27_1;
  wire       [7:0]    _zz_io_aligned_27_2;
  wire       [7:0]    _zz_io_aligned_27_3;
  wire       [2:0]    _zz__zz_io_aligned_28;
  wire       [7:0]    _zz_io_aligned_28_1;
  wire       [7:0]    _zz_io_aligned_28_2;
  wire       [7:0]    _zz_io_aligned_28_3;
  wire       [2:0]    _zz__zz_io_aligned_29;
  wire       [7:0]    _zz_io_aligned_29_1;
  wire       [7:0]    _zz_io_aligned_29_2;
  wire       [7:0]    _zz_io_aligned_29_3;
  wire       [2:0]    _zz__zz_io_aligned_30;
  wire       [7:0]    _zz_io_aligned_30_1;
  wire       [7:0]    _zz_io_aligned_30_2;
  wire       [7:0]    _zz_io_aligned_30_3;
  wire       [2:0]    _zz__zz_io_aligned_31;
  wire       [7:0]    _zz_io_aligned_31_1;
  wire       [7:0]    _zz_io_aligned_31_2;
  wire       [7:0]    _zz_io_aligned_31_3;
  wire       [2:0]    _zz_expMax;
  wire       [2:0]    _zz_expMax_1;
  wire       [2:0]    _zz_expMax_2;
  wire       [2:0]    _zz_expMax_3;
  wire       [2:0]    _zz_expMax_4;
  wire       [2:0]    _zz_expMax_5;
  wire       [2:0]    _zz_expMax_6;
  wire       [2:0]    _zz_expMax_7;
  wire       [2:0]    _zz_expMax_8;
  wire       [2:0]    _zz_expMax_9;
  wire       [2:0]    _zz_expMax_10;
  wire       [2:0]    _zz_expMax_11;
  wire       [2:0]    _zz_expMax_12;
  wire       [2:0]    _zz_expMax_13;
  wire       [2:0]    _zz_expMax_14;
  wire       [2:0]    _zz_expMax_15;
  wire       [2:0]    _zz_expMax_16;
  wire       [2:0]    _zz_expMax_17;
  wire       [2:0]    _zz_expMax_18;
  wire       [2:0]    _zz_expMax_19;
  wire       [2:0]    _zz_expMax_20;
  wire       [2:0]    _zz_expMax_21;
  wire       [2:0]    _zz_expMax_22;
  wire       [2:0]    _zz_expMax_23;
  wire       [2:0]    _zz_expMax_24;
  wire       [2:0]    _zz_expMax_25;
  wire       [2:0]    _zz_expMax_26;
  wire       [2:0]    _zz_expMax_27;
  wire       [2:0]    _zz_expMax_28;
  wire       [2:0]    _zz_expMax_29;
  wire       [2:0]    expMax;
  wire       [7:0]    _zz_io_aligned_0;
  wire       [7:0]    _zz_io_aligned_1;
  wire       [7:0]    _zz_io_aligned_2;
  wire       [7:0]    _zz_io_aligned_3;
  wire       [7:0]    _zz_io_aligned_4;
  wire       [7:0]    _zz_io_aligned_5;
  wire       [7:0]    _zz_io_aligned_6;
  wire       [7:0]    _zz_io_aligned_7;
  wire       [7:0]    _zz_io_aligned_8;
  wire       [7:0]    _zz_io_aligned_9;
  wire       [7:0]    _zz_io_aligned_10;
  wire       [7:0]    _zz_io_aligned_11;
  wire       [7:0]    _zz_io_aligned_12;
  wire       [7:0]    _zz_io_aligned_13;
  wire       [7:0]    _zz_io_aligned_14;
  wire       [7:0]    _zz_io_aligned_15;
  wire       [7:0]    _zz_io_aligned_16;
  wire       [7:0]    _zz_io_aligned_17;
  wire       [7:0]    _zz_io_aligned_18;
  wire       [7:0]    _zz_io_aligned_19;
  wire       [7:0]    _zz_io_aligned_20;
  wire       [7:0]    _zz_io_aligned_21;
  wire       [7:0]    _zz_io_aligned_22;
  wire       [7:0]    _zz_io_aligned_23;
  wire       [7:0]    _zz_io_aligned_24;
  wire       [7:0]    _zz_io_aligned_25;
  wire       [7:0]    _zz_io_aligned_26;
  wire       [7:0]    _zz_io_aligned_27;
  wire       [7:0]    _zz_io_aligned_28;
  wire       [7:0]    _zz_io_aligned_29;
  wire       [7:0]    _zz_io_aligned_30;
  wire       [7:0]    _zz_io_aligned_31;

  assign _zz__zz_io_aligned_0 = (expMax - io_exps_0);
  assign _zz_io_aligned_0_1 = (- _zz_io_aligned_0_2);
  assign _zz_io_aligned_0_2 = _zz_io_aligned_0;
  assign _zz_io_aligned_0_3 = _zz_io_aligned_0;
  assign _zz__zz_io_aligned_1 = (expMax - io_exps_1);
  assign _zz_io_aligned_1_1 = (- _zz_io_aligned_1_2);
  assign _zz_io_aligned_1_2 = _zz_io_aligned_1;
  assign _zz_io_aligned_1_3 = _zz_io_aligned_1;
  assign _zz__zz_io_aligned_2 = (expMax - io_exps_2);
  assign _zz_io_aligned_2_1 = (- _zz_io_aligned_2_2);
  assign _zz_io_aligned_2_2 = _zz_io_aligned_2;
  assign _zz_io_aligned_2_3 = _zz_io_aligned_2;
  assign _zz__zz_io_aligned_3 = (expMax - io_exps_3);
  assign _zz_io_aligned_3_1 = (- _zz_io_aligned_3_2);
  assign _zz_io_aligned_3_2 = _zz_io_aligned_3;
  assign _zz_io_aligned_3_3 = _zz_io_aligned_3;
  assign _zz__zz_io_aligned_4 = (expMax - io_exps_4);
  assign _zz_io_aligned_4_1 = (- _zz_io_aligned_4_2);
  assign _zz_io_aligned_4_2 = _zz_io_aligned_4;
  assign _zz_io_aligned_4_3 = _zz_io_aligned_4;
  assign _zz__zz_io_aligned_5 = (expMax - io_exps_5);
  assign _zz_io_aligned_5_1 = (- _zz_io_aligned_5_2);
  assign _zz_io_aligned_5_2 = _zz_io_aligned_5;
  assign _zz_io_aligned_5_3 = _zz_io_aligned_5;
  assign _zz__zz_io_aligned_6 = (expMax - io_exps_6);
  assign _zz_io_aligned_6_1 = (- _zz_io_aligned_6_2);
  assign _zz_io_aligned_6_2 = _zz_io_aligned_6;
  assign _zz_io_aligned_6_3 = _zz_io_aligned_6;
  assign _zz__zz_io_aligned_7 = (expMax - io_exps_7);
  assign _zz_io_aligned_7_1 = (- _zz_io_aligned_7_2);
  assign _zz_io_aligned_7_2 = _zz_io_aligned_7;
  assign _zz_io_aligned_7_3 = _zz_io_aligned_7;
  assign _zz__zz_io_aligned_8 = (expMax - io_exps_8);
  assign _zz_io_aligned_8_1 = (- _zz_io_aligned_8_2);
  assign _zz_io_aligned_8_2 = _zz_io_aligned_8;
  assign _zz_io_aligned_8_3 = _zz_io_aligned_8;
  assign _zz__zz_io_aligned_9 = (expMax - io_exps_9);
  assign _zz_io_aligned_9_1 = (- _zz_io_aligned_9_2);
  assign _zz_io_aligned_9_2 = _zz_io_aligned_9;
  assign _zz_io_aligned_9_3 = _zz_io_aligned_9;
  assign _zz__zz_io_aligned_10 = (expMax - io_exps_10);
  assign _zz_io_aligned_10_1 = (- _zz_io_aligned_10_2);
  assign _zz_io_aligned_10_2 = _zz_io_aligned_10;
  assign _zz_io_aligned_10_3 = _zz_io_aligned_10;
  assign _zz__zz_io_aligned_11 = (expMax - io_exps_11);
  assign _zz_io_aligned_11_1 = (- _zz_io_aligned_11_2);
  assign _zz_io_aligned_11_2 = _zz_io_aligned_11;
  assign _zz_io_aligned_11_3 = _zz_io_aligned_11;
  assign _zz__zz_io_aligned_12 = (expMax - io_exps_12);
  assign _zz_io_aligned_12_1 = (- _zz_io_aligned_12_2);
  assign _zz_io_aligned_12_2 = _zz_io_aligned_12;
  assign _zz_io_aligned_12_3 = _zz_io_aligned_12;
  assign _zz__zz_io_aligned_13 = (expMax - io_exps_13);
  assign _zz_io_aligned_13_1 = (- _zz_io_aligned_13_2);
  assign _zz_io_aligned_13_2 = _zz_io_aligned_13;
  assign _zz_io_aligned_13_3 = _zz_io_aligned_13;
  assign _zz__zz_io_aligned_14 = (expMax - io_exps_14);
  assign _zz_io_aligned_14_1 = (- _zz_io_aligned_14_2);
  assign _zz_io_aligned_14_2 = _zz_io_aligned_14;
  assign _zz_io_aligned_14_3 = _zz_io_aligned_14;
  assign _zz__zz_io_aligned_15 = (expMax - io_exps_15);
  assign _zz_io_aligned_15_1 = (- _zz_io_aligned_15_2);
  assign _zz_io_aligned_15_2 = _zz_io_aligned_15;
  assign _zz_io_aligned_15_3 = _zz_io_aligned_15;
  assign _zz__zz_io_aligned_16 = (expMax - io_exps_16);
  assign _zz_io_aligned_16_1 = (- _zz_io_aligned_16_2);
  assign _zz_io_aligned_16_2 = _zz_io_aligned_16;
  assign _zz_io_aligned_16_3 = _zz_io_aligned_16;
  assign _zz__zz_io_aligned_17 = (expMax - io_exps_17);
  assign _zz_io_aligned_17_1 = (- _zz_io_aligned_17_2);
  assign _zz_io_aligned_17_2 = _zz_io_aligned_17;
  assign _zz_io_aligned_17_3 = _zz_io_aligned_17;
  assign _zz__zz_io_aligned_18 = (expMax - io_exps_18);
  assign _zz_io_aligned_18_1 = (- _zz_io_aligned_18_2);
  assign _zz_io_aligned_18_2 = _zz_io_aligned_18;
  assign _zz_io_aligned_18_3 = _zz_io_aligned_18;
  assign _zz__zz_io_aligned_19 = (expMax - io_exps_19);
  assign _zz_io_aligned_19_1 = (- _zz_io_aligned_19_2);
  assign _zz_io_aligned_19_2 = _zz_io_aligned_19;
  assign _zz_io_aligned_19_3 = _zz_io_aligned_19;
  assign _zz__zz_io_aligned_20 = (expMax - io_exps_20);
  assign _zz_io_aligned_20_1 = (- _zz_io_aligned_20_2);
  assign _zz_io_aligned_20_2 = _zz_io_aligned_20;
  assign _zz_io_aligned_20_3 = _zz_io_aligned_20;
  assign _zz__zz_io_aligned_21 = (expMax - io_exps_21);
  assign _zz_io_aligned_21_1 = (- _zz_io_aligned_21_2);
  assign _zz_io_aligned_21_2 = _zz_io_aligned_21;
  assign _zz_io_aligned_21_3 = _zz_io_aligned_21;
  assign _zz__zz_io_aligned_22 = (expMax - io_exps_22);
  assign _zz_io_aligned_22_1 = (- _zz_io_aligned_22_2);
  assign _zz_io_aligned_22_2 = _zz_io_aligned_22;
  assign _zz_io_aligned_22_3 = _zz_io_aligned_22;
  assign _zz__zz_io_aligned_23 = (expMax - io_exps_23);
  assign _zz_io_aligned_23_1 = (- _zz_io_aligned_23_2);
  assign _zz_io_aligned_23_2 = _zz_io_aligned_23;
  assign _zz_io_aligned_23_3 = _zz_io_aligned_23;
  assign _zz__zz_io_aligned_24 = (expMax - io_exps_24);
  assign _zz_io_aligned_24_1 = (- _zz_io_aligned_24_2);
  assign _zz_io_aligned_24_2 = _zz_io_aligned_24;
  assign _zz_io_aligned_24_3 = _zz_io_aligned_24;
  assign _zz__zz_io_aligned_25 = (expMax - io_exps_25);
  assign _zz_io_aligned_25_1 = (- _zz_io_aligned_25_2);
  assign _zz_io_aligned_25_2 = _zz_io_aligned_25;
  assign _zz_io_aligned_25_3 = _zz_io_aligned_25;
  assign _zz__zz_io_aligned_26 = (expMax - io_exps_26);
  assign _zz_io_aligned_26_1 = (- _zz_io_aligned_26_2);
  assign _zz_io_aligned_26_2 = _zz_io_aligned_26;
  assign _zz_io_aligned_26_3 = _zz_io_aligned_26;
  assign _zz__zz_io_aligned_27 = (expMax - io_exps_27);
  assign _zz_io_aligned_27_1 = (- _zz_io_aligned_27_2);
  assign _zz_io_aligned_27_2 = _zz_io_aligned_27;
  assign _zz_io_aligned_27_3 = _zz_io_aligned_27;
  assign _zz__zz_io_aligned_28 = (expMax - io_exps_28);
  assign _zz_io_aligned_28_1 = (- _zz_io_aligned_28_2);
  assign _zz_io_aligned_28_2 = _zz_io_aligned_28;
  assign _zz_io_aligned_28_3 = _zz_io_aligned_28;
  assign _zz__zz_io_aligned_29 = (expMax - io_exps_29);
  assign _zz_io_aligned_29_1 = (- _zz_io_aligned_29_2);
  assign _zz_io_aligned_29_2 = _zz_io_aligned_29;
  assign _zz_io_aligned_29_3 = _zz_io_aligned_29;
  assign _zz__zz_io_aligned_30 = (expMax - io_exps_30);
  assign _zz_io_aligned_30_1 = (- _zz_io_aligned_30_2);
  assign _zz_io_aligned_30_2 = _zz_io_aligned_30;
  assign _zz_io_aligned_30_3 = _zz_io_aligned_30;
  assign _zz__zz_io_aligned_31 = (expMax - io_exps_31);
  assign _zz_io_aligned_31_1 = (- _zz_io_aligned_31_2);
  assign _zz_io_aligned_31_2 = _zz_io_aligned_31;
  assign _zz_io_aligned_31_3 = _zz_io_aligned_31;
  assign _zz_expMax = ((io_exps_1 < io_exps_0) ? io_exps_0 : io_exps_1);
  assign _zz_expMax_1 = ((io_exps_2 < _zz_expMax) ? _zz_expMax : io_exps_2);
  assign _zz_expMax_2 = ((io_exps_3 < _zz_expMax_1) ? _zz_expMax_1 : io_exps_3);
  assign _zz_expMax_3 = ((io_exps_4 < _zz_expMax_2) ? _zz_expMax_2 : io_exps_4);
  assign _zz_expMax_4 = ((io_exps_5 < _zz_expMax_3) ? _zz_expMax_3 : io_exps_5);
  assign _zz_expMax_5 = ((io_exps_6 < _zz_expMax_4) ? _zz_expMax_4 : io_exps_6);
  assign _zz_expMax_6 = ((io_exps_7 < _zz_expMax_5) ? _zz_expMax_5 : io_exps_7);
  assign _zz_expMax_7 = ((io_exps_8 < _zz_expMax_6) ? _zz_expMax_6 : io_exps_8);
  assign _zz_expMax_8 = ((io_exps_9 < _zz_expMax_7) ? _zz_expMax_7 : io_exps_9);
  assign _zz_expMax_9 = ((io_exps_10 < _zz_expMax_8) ? _zz_expMax_8 : io_exps_10);
  assign _zz_expMax_10 = ((io_exps_11 < _zz_expMax_9) ? _zz_expMax_9 : io_exps_11);
  assign _zz_expMax_11 = ((io_exps_12 < _zz_expMax_10) ? _zz_expMax_10 : io_exps_12);
  assign _zz_expMax_12 = ((io_exps_13 < _zz_expMax_11) ? _zz_expMax_11 : io_exps_13);
  assign _zz_expMax_13 = ((io_exps_14 < _zz_expMax_12) ? _zz_expMax_12 : io_exps_14);
  assign _zz_expMax_14 = ((io_exps_15 < _zz_expMax_13) ? _zz_expMax_13 : io_exps_15);
  assign _zz_expMax_15 = ((io_exps_16 < _zz_expMax_14) ? _zz_expMax_14 : io_exps_16);
  assign _zz_expMax_16 = ((io_exps_17 < _zz_expMax_15) ? _zz_expMax_15 : io_exps_17);
  assign _zz_expMax_17 = ((io_exps_18 < _zz_expMax_16) ? _zz_expMax_16 : io_exps_18);
  assign _zz_expMax_18 = ((io_exps_19 < _zz_expMax_17) ? _zz_expMax_17 : io_exps_19);
  assign _zz_expMax_19 = ((io_exps_20 < _zz_expMax_18) ? _zz_expMax_18 : io_exps_20);
  assign _zz_expMax_20 = ((io_exps_21 < _zz_expMax_19) ? _zz_expMax_19 : io_exps_21);
  assign _zz_expMax_21 = ((io_exps_22 < _zz_expMax_20) ? _zz_expMax_20 : io_exps_22);
  assign _zz_expMax_22 = ((io_exps_23 < _zz_expMax_21) ? _zz_expMax_21 : io_exps_23);
  assign _zz_expMax_23 = ((io_exps_24 < _zz_expMax_22) ? _zz_expMax_22 : io_exps_24);
  assign _zz_expMax_24 = ((io_exps_25 < _zz_expMax_23) ? _zz_expMax_23 : io_exps_25);
  assign _zz_expMax_25 = ((io_exps_26 < _zz_expMax_24) ? _zz_expMax_24 : io_exps_26);
  assign _zz_expMax_26 = ((io_exps_27 < _zz_expMax_25) ? _zz_expMax_25 : io_exps_27);
  assign _zz_expMax_27 = ((io_exps_28 < _zz_expMax_26) ? _zz_expMax_26 : io_exps_28);
  assign _zz_expMax_28 = ((io_exps_29 < _zz_expMax_27) ? _zz_expMax_27 : io_exps_29);
  assign _zz_expMax_29 = ((io_exps_30 < _zz_expMax_28) ? _zz_expMax_28 : io_exps_30);
  assign expMax = ((io_exps_31 < _zz_expMax_29) ? _zz_expMax_29 : io_exps_31);
  assign _zz_io_aligned_0 = ({io_mants_0,4'b0000} >>> _zz__zz_io_aligned_0);
  assign io_aligned_0 = (io_signs_0[0] ? _zz_io_aligned_0_1 : _zz_io_aligned_0_3);
  assign _zz_io_aligned_1 = ({io_mants_1,4'b0000} >>> _zz__zz_io_aligned_1);
  assign io_aligned_1 = (io_signs_1[0] ? _zz_io_aligned_1_1 : _zz_io_aligned_1_3);
  assign _zz_io_aligned_2 = ({io_mants_2,4'b0000} >>> _zz__zz_io_aligned_2);
  assign io_aligned_2 = (io_signs_2[0] ? _zz_io_aligned_2_1 : _zz_io_aligned_2_3);
  assign _zz_io_aligned_3 = ({io_mants_3,4'b0000} >>> _zz__zz_io_aligned_3);
  assign io_aligned_3 = (io_signs_3[0] ? _zz_io_aligned_3_1 : _zz_io_aligned_3_3);
  assign _zz_io_aligned_4 = ({io_mants_4,4'b0000} >>> _zz__zz_io_aligned_4);
  assign io_aligned_4 = (io_signs_4[0] ? _zz_io_aligned_4_1 : _zz_io_aligned_4_3);
  assign _zz_io_aligned_5 = ({io_mants_5,4'b0000} >>> _zz__zz_io_aligned_5);
  assign io_aligned_5 = (io_signs_5[0] ? _zz_io_aligned_5_1 : _zz_io_aligned_5_3);
  assign _zz_io_aligned_6 = ({io_mants_6,4'b0000} >>> _zz__zz_io_aligned_6);
  assign io_aligned_6 = (io_signs_6[0] ? _zz_io_aligned_6_1 : _zz_io_aligned_6_3);
  assign _zz_io_aligned_7 = ({io_mants_7,4'b0000} >>> _zz__zz_io_aligned_7);
  assign io_aligned_7 = (io_signs_7[0] ? _zz_io_aligned_7_1 : _zz_io_aligned_7_3);
  assign _zz_io_aligned_8 = ({io_mants_8,4'b0000} >>> _zz__zz_io_aligned_8);
  assign io_aligned_8 = (io_signs_8[0] ? _zz_io_aligned_8_1 : _zz_io_aligned_8_3);
  assign _zz_io_aligned_9 = ({io_mants_9,4'b0000} >>> _zz__zz_io_aligned_9);
  assign io_aligned_9 = (io_signs_9[0] ? _zz_io_aligned_9_1 : _zz_io_aligned_9_3);
  assign _zz_io_aligned_10 = ({io_mants_10,4'b0000} >>> _zz__zz_io_aligned_10);
  assign io_aligned_10 = (io_signs_10[0] ? _zz_io_aligned_10_1 : _zz_io_aligned_10_3);
  assign _zz_io_aligned_11 = ({io_mants_11,4'b0000} >>> _zz__zz_io_aligned_11);
  assign io_aligned_11 = (io_signs_11[0] ? _zz_io_aligned_11_1 : _zz_io_aligned_11_3);
  assign _zz_io_aligned_12 = ({io_mants_12,4'b0000} >>> _zz__zz_io_aligned_12);
  assign io_aligned_12 = (io_signs_12[0] ? _zz_io_aligned_12_1 : _zz_io_aligned_12_3);
  assign _zz_io_aligned_13 = ({io_mants_13,4'b0000} >>> _zz__zz_io_aligned_13);
  assign io_aligned_13 = (io_signs_13[0] ? _zz_io_aligned_13_1 : _zz_io_aligned_13_3);
  assign _zz_io_aligned_14 = ({io_mants_14,4'b0000} >>> _zz__zz_io_aligned_14);
  assign io_aligned_14 = (io_signs_14[0] ? _zz_io_aligned_14_1 : _zz_io_aligned_14_3);
  assign _zz_io_aligned_15 = ({io_mants_15,4'b0000} >>> _zz__zz_io_aligned_15);
  assign io_aligned_15 = (io_signs_15[0] ? _zz_io_aligned_15_1 : _zz_io_aligned_15_3);
  assign _zz_io_aligned_16 = ({io_mants_16,4'b0000} >>> _zz__zz_io_aligned_16);
  assign io_aligned_16 = (io_signs_16[0] ? _zz_io_aligned_16_1 : _zz_io_aligned_16_3);
  assign _zz_io_aligned_17 = ({io_mants_17,4'b0000} >>> _zz__zz_io_aligned_17);
  assign io_aligned_17 = (io_signs_17[0] ? _zz_io_aligned_17_1 : _zz_io_aligned_17_3);
  assign _zz_io_aligned_18 = ({io_mants_18,4'b0000} >>> _zz__zz_io_aligned_18);
  assign io_aligned_18 = (io_signs_18[0] ? _zz_io_aligned_18_1 : _zz_io_aligned_18_3);
  assign _zz_io_aligned_19 = ({io_mants_19,4'b0000} >>> _zz__zz_io_aligned_19);
  assign io_aligned_19 = (io_signs_19[0] ? _zz_io_aligned_19_1 : _zz_io_aligned_19_3);
  assign _zz_io_aligned_20 = ({io_mants_20,4'b0000} >>> _zz__zz_io_aligned_20);
  assign io_aligned_20 = (io_signs_20[0] ? _zz_io_aligned_20_1 : _zz_io_aligned_20_3);
  assign _zz_io_aligned_21 = ({io_mants_21,4'b0000} >>> _zz__zz_io_aligned_21);
  assign io_aligned_21 = (io_signs_21[0] ? _zz_io_aligned_21_1 : _zz_io_aligned_21_3);
  assign _zz_io_aligned_22 = ({io_mants_22,4'b0000} >>> _zz__zz_io_aligned_22);
  assign io_aligned_22 = (io_signs_22[0] ? _zz_io_aligned_22_1 : _zz_io_aligned_22_3);
  assign _zz_io_aligned_23 = ({io_mants_23,4'b0000} >>> _zz__zz_io_aligned_23);
  assign io_aligned_23 = (io_signs_23[0] ? _zz_io_aligned_23_1 : _zz_io_aligned_23_3);
  assign _zz_io_aligned_24 = ({io_mants_24,4'b0000} >>> _zz__zz_io_aligned_24);
  assign io_aligned_24 = (io_signs_24[0] ? _zz_io_aligned_24_1 : _zz_io_aligned_24_3);
  assign _zz_io_aligned_25 = ({io_mants_25,4'b0000} >>> _zz__zz_io_aligned_25);
  assign io_aligned_25 = (io_signs_25[0] ? _zz_io_aligned_25_1 : _zz_io_aligned_25_3);
  assign _zz_io_aligned_26 = ({io_mants_26,4'b0000} >>> _zz__zz_io_aligned_26);
  assign io_aligned_26 = (io_signs_26[0] ? _zz_io_aligned_26_1 : _zz_io_aligned_26_3);
  assign _zz_io_aligned_27 = ({io_mants_27,4'b0000} >>> _zz__zz_io_aligned_27);
  assign io_aligned_27 = (io_signs_27[0] ? _zz_io_aligned_27_1 : _zz_io_aligned_27_3);
  assign _zz_io_aligned_28 = ({io_mants_28,4'b0000} >>> _zz__zz_io_aligned_28);
  assign io_aligned_28 = (io_signs_28[0] ? _zz_io_aligned_28_1 : _zz_io_aligned_28_3);
  assign _zz_io_aligned_29 = ({io_mants_29,4'b0000} >>> _zz__zz_io_aligned_29);
  assign io_aligned_29 = (io_signs_29[0] ? _zz_io_aligned_29_1 : _zz_io_aligned_29_3);
  assign _zz_io_aligned_30 = ({io_mants_30,4'b0000} >>> _zz__zz_io_aligned_30);
  assign io_aligned_30 = (io_signs_30[0] ? _zz_io_aligned_30_1 : _zz_io_aligned_30_3);
  assign _zz_io_aligned_31 = ({io_mants_31,4'b0000} >>> _zz__zz_io_aligned_31);
  assign io_aligned_31 = (io_signs_31[0] ? _zz_io_aligned_31_1 : _zz_io_aligned_31_3);

endmodule



module MXFP4Multiplier (
  input  wire [3:0]    io_a,
  input  wire [3:0]    io_b,
  output wire [0:0]    io_sign,
  output wire [2:0]    io_expOut,
  output wire [3:0]    io_mantOut
);

  wire       [2:0]    _zz_io_expOut;
  wire       [2:0]    _zz_io_expOut_1;
  wire                signA;
  wire       [1:0]    expA;
  wire                mantA;
  wire                signB;
  wire       [1:0]    expB;
  wire                mantB;
  wire                isZeroA;
  wire                isZeroB;
  wire       [1:0]    mantEffA;
  wire       [1:0]    mantEffB;

  assign _zz_io_expOut = {1'd0, expA};
  assign _zz_io_expOut_1 = {1'd0, expB};
  assign signA = io_a[3];
  assign expA = io_a[2 : 1];
  assign mantA = io_a[0];
  assign signB = io_b[3];
  assign expB = io_b[2 : 1];
  assign mantB = io_b[0];
  assign isZeroA = ((expA == 2'b00) && (mantA == 1'b0));
  assign isZeroB = ((expB == 2'b00) && (mantB == 1'b0));
  assign mantEffA = (isZeroA ? 2'b00 : {1'b1,mantA});
  assign mantEffB = (isZeroB ? 2'b00 : {1'b1,mantB});
  assign io_sign = (signA ^ signB);
  assign io_expOut = (_zz_io_expOut + _zz_io_expOut_1);
  assign io_mantOut = (mantEffA * mantEffB);

endmodule
