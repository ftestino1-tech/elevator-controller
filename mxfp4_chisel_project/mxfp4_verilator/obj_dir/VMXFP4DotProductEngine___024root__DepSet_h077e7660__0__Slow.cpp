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
            VL_FATAL_MT("../generated/MXFP4DotProductEngine_N4_P0.sv", 74, "", "Settle region did not converge.");
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

void VMXFP4DotProductEngine___024root___ico_sequent__TOP__0(VMXFP4DotProductEngine___024root* vlSelf);

VL_ATTR_COLD void VMXFP4DotProductEngine___024root___eval_stl(VMXFP4DotProductEngine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VMXFP4DotProductEngine___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
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
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VMXFP4DotProductEngine___024root___ctor_var_reset(VMXFP4DotProductEngine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_vecA_0 = VL_RAND_RESET_I(4);
    vlSelf->io_vecA_1 = VL_RAND_RESET_I(4);
    vlSelf->io_vecA_2 = VL_RAND_RESET_I(4);
    vlSelf->io_vecA_3 = VL_RAND_RESET_I(4);
    vlSelf->io_vecB_0 = VL_RAND_RESET_I(4);
    vlSelf->io_vecB_1 = VL_RAND_RESET_I(4);
    vlSelf->io_vecB_2 = VL_RAND_RESET_I(4);
    vlSelf->io_vecB_3 = VL_RAND_RESET_I(4);
    vlSelf->io_scaleA = VL_RAND_RESET_I(8);
    vlSelf->io_scaleB = VL_RAND_RESET_I(8);
    vlSelf->io_dotProduct = VL_RAND_RESET_I(10);
    vlSelf->io_combinedScale = VL_RAND_RESET_I(9);
    vlSelf->MXFP4DotProductEngine__DOT___aligner_io_aligned_0 = VL_RAND_RESET_I(8);
    vlSelf->MXFP4DotProductEngine__DOT___aligner_io_aligned_1 = VL_RAND_RESET_I(8);
    vlSelf->MXFP4DotProductEngine__DOT___aligner_io_aligned_2 = VL_RAND_RESET_I(8);
    vlSelf->MXFP4DotProductEngine__DOT___aligner_io_aligned_3 = VL_RAND_RESET_I(8);
    vlSelf->MXFP4DotProductEngine__DOT___multipliers_3_io_expOut = VL_RAND_RESET_I(3);
    vlSelf->MXFP4DotProductEngine__DOT___multipliers_2_io_expOut = VL_RAND_RESET_I(3);
    vlSelf->MXFP4DotProductEngine__DOT___multipliers_1_io_expOut = VL_RAND_RESET_I(3);
    vlSelf->MXFP4DotProductEngine__DOT___multipliers_0_io_expOut = VL_RAND_RESET_I(3);
    vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT__expMax = VL_RAND_RESET_I(3);
    vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT__shifted = VL_RAND_RESET_I(8);
    vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT__shifted_1 = VL_RAND_RESET_I(8);
    vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT__shifted_2 = VL_RAND_RESET_I(8);
    vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT__shifted_3 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
