// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMXFP4DotProductEngine.h for the primary calling header

#include "VMXFP4DotProductEngine__pch.h"
#include "VMXFP4DotProductEngine___024root.h"

VL_ATTR_COLD void VMXFP4DotProductEngine___024root___eval_static(VMXFP4DotProductEngine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root___eval_static\n"); );
}

VL_ATTR_COLD void VMXFP4DotProductEngine___024root___eval_initial(VMXFP4DotProductEngine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void VMXFP4DotProductEngine___024root___eval_final(VMXFP4DotProductEngine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMXFP4DotProductEngine___024root___dump_triggers__stl(VMXFP4DotProductEngine___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VMXFP4DotProductEngine___024root___eval_phase__stl(VMXFP4DotProductEngine___024root* vlSelf);

VL_ATTR_COLD void VMXFP4DotProductEngine___024root___eval_settle(VMXFP4DotProductEngine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VMXFP4DotProductEngine___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/fabio_testino/mxfp4_spinal_project/./simWorkspace/tmp/job_4/MXFP4DotProductEngine.v", 6, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VMXFP4DotProductEngine___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMXFP4DotProductEngine___024root___dump_triggers__stl(VMXFP4DotProductEngine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VMXFP4DotProductEngine___024root___stl_sequent__TOP__0(VMXFP4DotProductEngine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax;
    MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax = 0;
    CData/*2:0*/ MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax_1;
    MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax_1 = 0;
    CData/*2:0*/ MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax_2;
    MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax_2 = 0;
    CData/*2:0*/ MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax_3;
    MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax_3 = 0;
    CData/*2:0*/ MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax_4;
    MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax_4 = 0;
    CData/*2:0*/ MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax_5;
    MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax_5 = 0;
    // Body
    vlSelf->io_combinedScale = (0x1ffU & ((IData)(vlSelf->io_scaleA) 
                                          + (IData)(vlSelf->io_scaleB)));
    vlSelf->io_dotProduct = (0x7ffU & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__adderTree_1__DOT___zz_io_result) 
                                       + (IData)(vlSelf->MXFP4DotProductEngine__DOT__adderTree_1__DOT___zz_io_result_1)));
    vlSelf->MXFP4DotProductEngine__DOT__multipliers_7_io_expOut 
        = (7U & ((3U & ((IData)(vlSelf->io_vecA_7) 
                        >> 1U)) + (3U & ((IData)(vlSelf->io_vecB_7) 
                                         >> 1U))));
    vlSelf->MXFP4DotProductEngine__DOT__multipliers_6_io_expOut 
        = (7U & ((3U & ((IData)(vlSelf->io_vecA_6) 
                        >> 1U)) + (3U & ((IData)(vlSelf->io_vecB_6) 
                                         >> 1U))));
    vlSelf->MXFP4DotProductEngine__DOT__multipliers_5_io_expOut 
        = (7U & ((3U & ((IData)(vlSelf->io_vecA_5) 
                        >> 1U)) + (3U & ((IData)(vlSelf->io_vecB_5) 
                                         >> 1U))));
    vlSelf->MXFP4DotProductEngine__DOT__multipliers_4_io_expOut 
        = (7U & ((3U & ((IData)(vlSelf->io_vecA_4) 
                        >> 1U)) + (3U & ((IData)(vlSelf->io_vecB_4) 
                                         >> 1U))));
    vlSelf->MXFP4DotProductEngine__DOT__multipliers_3_io_expOut 
        = (7U & ((3U & ((IData)(vlSelf->io_vecA_3) 
                        >> 1U)) + (3U & ((IData)(vlSelf->io_vecB_3) 
                                         >> 1U))));
    vlSelf->MXFP4DotProductEngine__DOT__multipliers_2_io_expOut 
        = (7U & ((3U & ((IData)(vlSelf->io_vecA_2) 
                        >> 1U)) + (3U & ((IData)(vlSelf->io_vecB_2) 
                                         >> 1U))));
    vlSelf->MXFP4DotProductEngine__DOT__multipliers_0_io_expOut 
        = (7U & ((3U & ((IData)(vlSelf->io_vecA_0) 
                        >> 1U)) + (3U & ((IData)(vlSelf->io_vecB_0) 
                                         >> 1U))));
    vlSelf->MXFP4DotProductEngine__DOT__multipliers_1_io_expOut 
        = (7U & ((3U & ((IData)(vlSelf->io_vecA_1) 
                        >> 1U)) + (3U & ((IData)(vlSelf->io_vecB_1) 
                                         >> 1U))));
    MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax 
        = (((IData)(vlSelf->MXFP4DotProductEngine__DOT__multipliers_1_io_expOut) 
            < (IData)(vlSelf->MXFP4DotProductEngine__DOT__multipliers_0_io_expOut))
            ? (IData)(vlSelf->MXFP4DotProductEngine__DOT__multipliers_0_io_expOut)
            : (IData)(vlSelf->MXFP4DotProductEngine__DOT__multipliers_1_io_expOut));
    MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax_1 
        = (((IData)(vlSelf->MXFP4DotProductEngine__DOT__multipliers_2_io_expOut) 
            < (IData)(MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax))
            ? (IData)(MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax)
            : (IData)(vlSelf->MXFP4DotProductEngine__DOT__multipliers_2_io_expOut));
    MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax_2 
        = (((IData)(vlSelf->MXFP4DotProductEngine__DOT__multipliers_3_io_expOut) 
            < (IData)(MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax_1))
            ? (IData)(MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax_1)
            : (IData)(vlSelf->MXFP4DotProductEngine__DOT__multipliers_3_io_expOut));
    MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax_3 
        = (((IData)(vlSelf->MXFP4DotProductEngine__DOT__multipliers_4_io_expOut) 
            < (IData)(MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax_2))
            ? (IData)(MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax_2)
            : (IData)(vlSelf->MXFP4DotProductEngine__DOT__multipliers_4_io_expOut));
    MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax_4 
        = (((IData)(vlSelf->MXFP4DotProductEngine__DOT__multipliers_5_io_expOut) 
            < (IData)(MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax_3))
            ? (IData)(MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax_3)
            : (IData)(vlSelf->MXFP4DotProductEngine__DOT__multipliers_5_io_expOut));
    MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax_5 
        = (((IData)(vlSelf->MXFP4DotProductEngine__DOT__multipliers_6_io_expOut) 
            < (IData)(MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax_4))
            ? (IData)(MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax_4)
            : (IData)(vlSelf->MXFP4DotProductEngine__DOT__multipliers_6_io_expOut));
    vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT__expMax 
        = (((IData)(vlSelf->MXFP4DotProductEngine__DOT__multipliers_7_io_expOut) 
            < (IData)(MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax_5))
            ? (IData)(MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax_5)
            : (IData)(vlSelf->MXFP4DotProductEngine__DOT__multipliers_7_io_expOut));
    vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_0_2 
        = (0xffU & ((0xf0U & ((((IData)((0U == (7U 
                                                & (IData)(vlSelf->io_vecA_0))))
                                 ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_0)))) 
                               * ((IData)((0U == (7U 
                                                  & (IData)(vlSelf->io_vecB_0))))
                                   ? 0U : (2U | (1U 
                                                 & (IData)(vlSelf->io_vecB_0))))) 
                              << 4U)) >> (7U & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT__expMax) 
                                                - (IData)(vlSelf->MXFP4DotProductEngine__DOT__multipliers_0_io_expOut)))));
    vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_1_2 
        = (0xffU & ((0xf0U & ((((IData)((0U == (7U 
                                                & (IData)(vlSelf->io_vecA_1))))
                                 ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_1)))) 
                               * ((IData)((0U == (7U 
                                                  & (IData)(vlSelf->io_vecB_1))))
                                   ? 0U : (2U | (1U 
                                                 & (IData)(vlSelf->io_vecB_1))))) 
                              << 4U)) >> (7U & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT__expMax) 
                                                - (IData)(vlSelf->MXFP4DotProductEngine__DOT__multipliers_1_io_expOut)))));
    vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_2_2 
        = (0xffU & ((0xf0U & ((((IData)((0U == (7U 
                                                & (IData)(vlSelf->io_vecA_2))))
                                 ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_2)))) 
                               * ((IData)((0U == (7U 
                                                  & (IData)(vlSelf->io_vecB_2))))
                                   ? 0U : (2U | (1U 
                                                 & (IData)(vlSelf->io_vecB_2))))) 
                              << 4U)) >> (7U & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT__expMax) 
                                                - (IData)(vlSelf->MXFP4DotProductEngine__DOT__multipliers_2_io_expOut)))));
    vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_3_2 
        = (0xffU & ((0xf0U & ((((IData)((0U == (7U 
                                                & (IData)(vlSelf->io_vecA_3))))
                                 ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_3)))) 
                               * ((IData)((0U == (7U 
                                                  & (IData)(vlSelf->io_vecB_3))))
                                   ? 0U : (2U | (1U 
                                                 & (IData)(vlSelf->io_vecB_3))))) 
                              << 4U)) >> (7U & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT__expMax) 
                                                - (IData)(vlSelf->MXFP4DotProductEngine__DOT__multipliers_3_io_expOut)))));
    vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_4_2 
        = (0xffU & ((0xf0U & ((((IData)((0U == (7U 
                                                & (IData)(vlSelf->io_vecA_4))))
                                 ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_4)))) 
                               * ((IData)((0U == (7U 
                                                  & (IData)(vlSelf->io_vecB_4))))
                                   ? 0U : (2U | (1U 
                                                 & (IData)(vlSelf->io_vecB_4))))) 
                              << 4U)) >> (7U & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT__expMax) 
                                                - (IData)(vlSelf->MXFP4DotProductEngine__DOT__multipliers_4_io_expOut)))));
    vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_5_2 
        = (0xffU & ((0xf0U & ((((IData)((0U == (7U 
                                                & (IData)(vlSelf->io_vecA_5))))
                                 ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_5)))) 
                               * ((IData)((0U == (7U 
                                                  & (IData)(vlSelf->io_vecB_5))))
                                   ? 0U : (2U | (1U 
                                                 & (IData)(vlSelf->io_vecB_5))))) 
                              << 4U)) >> (7U & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT__expMax) 
                                                - (IData)(vlSelf->MXFP4DotProductEngine__DOT__multipliers_5_io_expOut)))));
    vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_6_2 
        = (0xffU & ((0xf0U & ((((IData)((0U == (7U 
                                                & (IData)(vlSelf->io_vecA_6))))
                                 ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_6)))) 
                               * ((IData)((0U == (7U 
                                                  & (IData)(vlSelf->io_vecB_6))))
                                   ? 0U : (2U | (1U 
                                                 & (IData)(vlSelf->io_vecB_6))))) 
                              << 4U)) >> (7U & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT__expMax) 
                                                - (IData)(vlSelf->MXFP4DotProductEngine__DOT__multipliers_6_io_expOut)))));
}

void VMXFP4DotProductEngine___024root___ico_sequent__TOP__1(VMXFP4DotProductEngine___024root* vlSelf);

VL_ATTR_COLD void VMXFP4DotProductEngine___024root___eval_stl(VMXFP4DotProductEngine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VMXFP4DotProductEngine___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        VMXFP4DotProductEngine___024root___ico_sequent__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD void VMXFP4DotProductEngine___024root___eval_triggers__stl(VMXFP4DotProductEngine___024root* vlSelf);

VL_ATTR_COLD bool VMXFP4DotProductEngine___024root___eval_phase__stl(VMXFP4DotProductEngine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VMXFP4DotProductEngine___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VMXFP4DotProductEngine___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMXFP4DotProductEngine___024root___dump_triggers__ico(VMXFP4DotProductEngine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VMXFP4DotProductEngine___024root___dump_triggers__act(VMXFP4DotProductEngine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VMXFP4DotProductEngine___024root___dump_triggers__nba(VMXFP4DotProductEngine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VMXFP4DotProductEngine___024root___ctor_var_reset(VMXFP4DotProductEngine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->io_vecA_0 = VL_RAND_RESET_I(4);
    vlSelf->io_vecA_1 = VL_RAND_RESET_I(4);
    vlSelf->io_vecA_2 = VL_RAND_RESET_I(4);
    vlSelf->io_vecA_3 = VL_RAND_RESET_I(4);
    vlSelf->io_vecA_4 = VL_RAND_RESET_I(4);
    vlSelf->io_vecA_5 = VL_RAND_RESET_I(4);
    vlSelf->io_vecA_6 = VL_RAND_RESET_I(4);
    vlSelf->io_vecA_7 = VL_RAND_RESET_I(4);
    vlSelf->io_vecB_0 = VL_RAND_RESET_I(4);
    vlSelf->io_vecB_1 = VL_RAND_RESET_I(4);
    vlSelf->io_vecB_2 = VL_RAND_RESET_I(4);
    vlSelf->io_vecB_3 = VL_RAND_RESET_I(4);
    vlSelf->io_vecB_4 = VL_RAND_RESET_I(4);
    vlSelf->io_vecB_5 = VL_RAND_RESET_I(4);
    vlSelf->io_vecB_6 = VL_RAND_RESET_I(4);
    vlSelf->io_vecB_7 = VL_RAND_RESET_I(4);
    vlSelf->io_scaleA = VL_RAND_RESET_I(8);
    vlSelf->io_scaleB = VL_RAND_RESET_I(8);
    vlSelf->io_dotProduct = VL_RAND_RESET_I(11);
    vlSelf->io_combinedScale = VL_RAND_RESET_I(9);
    vlSelf->clk = 0;
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->MXFP4DotProductEngine__DOT__multipliers_0_io_expOut = VL_RAND_RESET_I(3);
    vlSelf->MXFP4DotProductEngine__DOT__multipliers_1_io_expOut = VL_RAND_RESET_I(3);
    vlSelf->MXFP4DotProductEngine__DOT__multipliers_2_io_expOut = VL_RAND_RESET_I(3);
    vlSelf->MXFP4DotProductEngine__DOT__multipliers_3_io_expOut = VL_RAND_RESET_I(3);
    vlSelf->MXFP4DotProductEngine__DOT__multipliers_4_io_expOut = VL_RAND_RESET_I(3);
    vlSelf->MXFP4DotProductEngine__DOT__multipliers_5_io_expOut = VL_RAND_RESET_I(3);
    vlSelf->MXFP4DotProductEngine__DOT__multipliers_6_io_expOut = VL_RAND_RESET_I(3);
    vlSelf->MXFP4DotProductEngine__DOT__multipliers_7_io_expOut = VL_RAND_RESET_I(3);
    vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_0 = VL_RAND_RESET_I(8);
    vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_1 = VL_RAND_RESET_I(8);
    vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_2 = VL_RAND_RESET_I(8);
    vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_3 = VL_RAND_RESET_I(8);
    vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_4 = VL_RAND_RESET_I(8);
    vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_5 = VL_RAND_RESET_I(8);
    vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_6 = VL_RAND_RESET_I(8);
    vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_7 = VL_RAND_RESET_I(8);
    vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_0_2 = VL_RAND_RESET_I(8);
    vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_1_2 = VL_RAND_RESET_I(8);
    vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_2_2 = VL_RAND_RESET_I(8);
    vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_3_2 = VL_RAND_RESET_I(8);
    vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_4_2 = VL_RAND_RESET_I(8);
    vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_5_2 = VL_RAND_RESET_I(8);
    vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_6_2 = VL_RAND_RESET_I(8);
    vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT__expMax = VL_RAND_RESET_I(3);
    vlSelf->MXFP4DotProductEngine__DOT__adderTree_1__DOT___zz_io_result = VL_RAND_RESET_I(11);
    vlSelf->MXFP4DotProductEngine__DOT__adderTree_1__DOT___zz_io_result_1 = VL_RAND_RESET_I(11);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
