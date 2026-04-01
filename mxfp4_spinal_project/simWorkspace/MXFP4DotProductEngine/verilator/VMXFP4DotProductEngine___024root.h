// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMXFP4DotProductEngine.h for the primary calling header

#ifndef VERILATED_VMXFP4DOTPRODUCTENGINE___024ROOT_H_
#define VERILATED_VMXFP4DOTPRODUCTENGINE___024ROOT_H_  // guard

#include "verilated.h"


class VMXFP4DotProductEngine__Syms;

class alignas(VL_CACHE_LINE_BYTES) VMXFP4DotProductEngine___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(io_vecA_0,3,0);
    VL_IN8(io_vecA_1,3,0);
    VL_IN8(io_vecA_2,3,0);
    VL_IN8(io_vecA_3,3,0);
    VL_IN8(io_vecB_0,3,0);
    VL_IN8(io_vecB_1,3,0);
    VL_IN8(io_vecB_2,3,0);
    VL_IN8(io_vecB_3,3,0);
    VL_IN8(io_scaleA,7,0);
    VL_IN8(io_scaleB,7,0);
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*2:0*/ MXFP4DotProductEngine__DOT__multipliers_0_io_expOut;
    CData/*2:0*/ MXFP4DotProductEngine__DOT__multipliers_1_io_expOut;
    CData/*2:0*/ MXFP4DotProductEngine__DOT__multipliers_2_io_expOut;
    CData/*2:0*/ MXFP4DotProductEngine__DOT__multipliers_3_io_expOut;
    CData/*7:0*/ MXFP4DotProductEngine__DOT__aligner_io_aligned_0;
    CData/*7:0*/ MXFP4DotProductEngine__DOT__aligner_io_aligned_1;
    CData/*7:0*/ MXFP4DotProductEngine__DOT__aligner_io_aligned_2;
    CData/*7:0*/ MXFP4DotProductEngine__DOT__aligner_io_aligned_3;
    CData/*2:0*/ MXFP4DotProductEngine__DOT__aligner__DOT__expMax;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(io_dotProduct,9,0);
    VL_OUT16(io_combinedScale,8,0);
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VMXFP4DotProductEngine__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMXFP4DotProductEngine___024root(VMXFP4DotProductEngine__Syms* symsp, const char* v__name);
    ~VMXFP4DotProductEngine___024root();
    VL_UNCOPYABLE(VMXFP4DotProductEngine___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
