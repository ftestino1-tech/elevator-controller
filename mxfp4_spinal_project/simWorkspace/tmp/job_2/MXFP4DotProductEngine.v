// Generator : SpinalHDL v1.10.2    git head : 279867b771fb50fc0aec21d8a20d8fdad0f87e3f
// Component : MXFP4DotProductEngine

`timescale 1ns/1ps

module MXFP4DotProductEngine (
  input  wire [3:0]    io_vecA_0,
  input  wire [3:0]    io_vecA_1,
  input  wire [3:0]    io_vecA_2,
  input  wire [3:0]    io_vecA_3,
  input  wire [3:0]    io_vecB_0,
  input  wire [3:0]    io_vecB_1,
  input  wire [3:0]    io_vecB_2,
  input  wire [3:0]    io_vecB_3,
  input  wire [7:0]    io_scaleA,
  input  wire [7:0]    io_scaleB,
  output wire [9:0]    io_dotProduct,
  output wire [8:0]    io_combinedScale,
  input  wire          clk,
  input  wire          reset
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
  wire       [7:0]    aligner_io_aligned_0;
  wire       [7:0]    aligner_io_aligned_1;
  wire       [7:0]    aligner_io_aligned_2;
  wire       [7:0]    aligner_io_aligned_3;
  wire       [9:0]    adderTree_1_io_result;
  wire       [9:0]    scaleIntegrator_io_dotProduct;
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
  ExponentAligner aligner (
    .io_signs_0   (multipliers_0_io_sign        ), //i
    .io_signs_1   (multipliers_1_io_sign        ), //i
    .io_signs_2   (multipliers_2_io_sign        ), //i
    .io_signs_3   (multipliers_3_io_sign        ), //i
    .io_exps_0    (multipliers_0_io_expOut[2:0] ), //i
    .io_exps_1    (multipliers_1_io_expOut[2:0] ), //i
    .io_exps_2    (multipliers_2_io_expOut[2:0] ), //i
    .io_exps_3    (multipliers_3_io_expOut[2:0] ), //i
    .io_mants_0   (multipliers_0_io_mantOut[3:0]), //i
    .io_mants_1   (multipliers_1_io_mantOut[3:0]), //i
    .io_mants_2   (multipliers_2_io_mantOut[3:0]), //i
    .io_mants_3   (multipliers_3_io_mantOut[3:0]), //i
    .io_aligned_0 (aligner_io_aligned_0[7:0]    ), //o
    .io_aligned_1 (aligner_io_aligned_1[7:0]    ), //o
    .io_aligned_2 (aligner_io_aligned_2[7:0]    ), //o
    .io_aligned_3 (aligner_io_aligned_3[7:0]    )  //o
  );
  AdderTree adderTree_1 (
    .io_inputs_0 (aligner_io_aligned_0[7:0] ), //i
    .io_inputs_1 (aligner_io_aligned_1[7:0] ), //i
    .io_inputs_2 (aligner_io_aligned_2[7:0] ), //i
    .io_inputs_3 (aligner_io_aligned_3[7:0] ), //i
    .io_result   (adderTree_1_io_result[9:0])  //o
  );
  SharedScaleIntegrator scaleIntegrator (
    .io_treeSum       (adderTree_1_io_result[9:0]           ), //i
    .io_scaleA        (io_scaleA[7:0]                       ), //i
    .io_scaleB        (io_scaleB[7:0]                       ), //i
    .io_dotProduct    (scaleIntegrator_io_dotProduct[9:0]   ), //o
    .io_combinedScale (scaleIntegrator_io_combinedScale[8:0])  //o
  );
  assign io_dotProduct = scaleIntegrator_io_dotProduct;
  assign io_combinedScale = scaleIntegrator_io_combinedScale;

endmodule

module SharedScaleIntegrator (
  input  wire [9:0]    io_treeSum,
  input  wire [7:0]    io_scaleA,
  input  wire [7:0]    io_scaleB,
  output wire [9:0]    io_dotProduct,
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
  output wire [9:0]    io_result
);

  wire       [9:0]    _zz_io_result;
  wire       [9:0]    _zz_io_result_1;
  wire       [9:0]    extInputs_0;
  wire       [9:0]    extInputs_1;
  wire       [9:0]    extInputs_2;
  wire       [9:0]    extInputs_3;

  assign _zz_io_result = ($signed(extInputs_0) + $signed(extInputs_1));
  assign _zz_io_result_1 = ($signed(extInputs_2) + $signed(extInputs_3));
  assign extInputs_0 = {{2{io_inputs_0[7]}}, io_inputs_0};
  assign extInputs_1 = {{2{io_inputs_1[7]}}, io_inputs_1};
  assign extInputs_2 = {{2{io_inputs_2[7]}}, io_inputs_2};
  assign extInputs_3 = {{2{io_inputs_3[7]}}, io_inputs_3};
  assign io_result = ($signed(_zz_io_result) + $signed(_zz_io_result_1));

endmodule

module ExponentAligner (
  input  wire [0:0]    io_signs_0,
  input  wire [0:0]    io_signs_1,
  input  wire [0:0]    io_signs_2,
  input  wire [0:0]    io_signs_3,
  input  wire [2:0]    io_exps_0,
  input  wire [2:0]    io_exps_1,
  input  wire [2:0]    io_exps_2,
  input  wire [2:0]    io_exps_3,
  input  wire [3:0]    io_mants_0,
  input  wire [3:0]    io_mants_1,
  input  wire [3:0]    io_mants_2,
  input  wire [3:0]    io_mants_3,
  output wire [7:0]    io_aligned_0,
  output wire [7:0]    io_aligned_1,
  output wire [7:0]    io_aligned_2,
  output wire [7:0]    io_aligned_3
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
  wire       [2:0]    _zz_expMax;
  wire       [2:0]    _zz_expMax_1;
  wire       [2:0]    expMax;
  wire       [7:0]    _zz_io_aligned_0;
  wire       [7:0]    _zz_io_aligned_1;
  wire       [7:0]    _zz_io_aligned_2;
  wire       [7:0]    _zz_io_aligned_3;

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
  assign _zz_expMax = ((io_exps_1 < io_exps_0) ? io_exps_0 : io_exps_1);
  assign _zz_expMax_1 = ((io_exps_2 < _zz_expMax) ? _zz_expMax : io_exps_2);
  assign expMax = ((io_exps_3 < _zz_expMax_1) ? _zz_expMax_1 : io_exps_3);
  assign _zz_io_aligned_0 = ({io_mants_0,4'b0000} >>> _zz__zz_io_aligned_0);
  assign io_aligned_0 = (io_signs_0[0] ? _zz_io_aligned_0_1 : _zz_io_aligned_0_3);
  assign _zz_io_aligned_1 = ({io_mants_1,4'b0000} >>> _zz__zz_io_aligned_1);
  assign io_aligned_1 = (io_signs_1[0] ? _zz_io_aligned_1_1 : _zz_io_aligned_1_3);
  assign _zz_io_aligned_2 = ({io_mants_2,4'b0000} >>> _zz__zz_io_aligned_2);
  assign io_aligned_2 = (io_signs_2[0] ? _zz_io_aligned_2_1 : _zz_io_aligned_2_3);
  assign _zz_io_aligned_3 = ({io_mants_3,4'b0000} >>> _zz__zz_io_aligned_3);
  assign io_aligned_3 = (io_signs_3[0] ? _zz_io_aligned_3_1 : _zz_io_aligned_3_3);

endmodule

//MXFP4Multiplier_3 replaced by MXFP4Multiplier

//MXFP4Multiplier_2 replaced by MXFP4Multiplier

//MXFP4Multiplier_1 replaced by MXFP4Multiplier

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
