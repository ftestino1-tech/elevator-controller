// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMXFP4DotProductEngine.h for the primary calling header

#include "VMXFP4DotProductEngine__pch.h"
#include "VMXFP4DotProductEngine___024root.h"

VL_INLINE_OPT void VMXFP4DotProductEngine___024root___ico_sequent__TOP__0(VMXFP4DotProductEngine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_0_2;
    MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_0_2 = 0;
    CData/*7:0*/ MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_1_2;
    MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_1_2 = 0;
    CData/*7:0*/ MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_2_2;
    MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_2_2 = 0;
    CData/*7:0*/ MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_3_2;
    MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_3_2 = 0;
    CData/*2:0*/ MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax;
    MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax = 0;
    CData/*2:0*/ MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax_1;
    MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax_1 = 0;
    // Body
    vlSelf->io_combinedScale = (0x1ffU & ((IData)(vlSelf->io_scaleA) 
                                          + (IData)(vlSelf->io_scaleB)));
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
    vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT__expMax 
        = (((IData)(vlSelf->MXFP4DotProductEngine__DOT__multipliers_3_io_expOut) 
            < (IData)(MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax_1))
            ? (IData)(MXFP4DotProductEngine__DOT__aligner__DOT___zz_expMax_1)
            : (IData)(vlSelf->MXFP4DotProductEngine__DOT__multipliers_3_io_expOut));
    MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_0_2 
        = (0xffU & ((0xf0U & ((((IData)((0U == (7U 
                                                & (IData)(vlSelf->io_vecA_0))))
                                 ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_0)))) 
                               * ((IData)((0U == (7U 
                                                  & (IData)(vlSelf->io_vecB_0))))
                                   ? 0U : (2U | (1U 
                                                 & (IData)(vlSelf->io_vecB_0))))) 
                              << 4U)) >> (7U & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT__expMax) 
                                                - (IData)(vlSelf->MXFP4DotProductEngine__DOT__multipliers_0_io_expOut)))));
    MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_1_2 
        = (0xffU & ((0xf0U & ((((IData)((0U == (7U 
                                                & (IData)(vlSelf->io_vecA_1))))
                                 ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_1)))) 
                               * ((IData)((0U == (7U 
                                                  & (IData)(vlSelf->io_vecB_1))))
                                   ? 0U : (2U | (1U 
                                                 & (IData)(vlSelf->io_vecB_1))))) 
                              << 4U)) >> (7U & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT__expMax) 
                                                - (IData)(vlSelf->MXFP4DotProductEngine__DOT__multipliers_1_io_expOut)))));
    MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_2_2 
        = (0xffU & ((0xf0U & ((((IData)((0U == (7U 
                                                & (IData)(vlSelf->io_vecA_2))))
                                 ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_2)))) 
                               * ((IData)((0U == (7U 
                                                  & (IData)(vlSelf->io_vecB_2))))
                                   ? 0U : (2U | (1U 
                                                 & (IData)(vlSelf->io_vecB_2))))) 
                              << 4U)) >> (7U & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT__expMax) 
                                                - (IData)(vlSelf->MXFP4DotProductEngine__DOT__multipliers_2_io_expOut)))));
    MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_3_2 
        = (0xffU & ((0xf0U & ((((IData)((0U == (7U 
                                                & (IData)(vlSelf->io_vecA_3))))
                                 ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_3)))) 
                               * ((IData)((0U == (7U 
                                                  & (IData)(vlSelf->io_vecB_3))))
                                   ? 0U : (2U | (1U 
                                                 & (IData)(vlSelf->io_vecB_3))))) 
                              << 4U)) >> (7U & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT__expMax) 
                                                - (IData)(vlSelf->MXFP4DotProductEngine__DOT__multipliers_3_io_expOut)))));
    vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_0 
        = (0xffU & ((8U & ((IData)(vlSelf->io_vecA_0) 
                           ^ (IData)(vlSelf->io_vecB_0)))
                     ? (- (IData)(MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_0_2))
                     : (IData)(MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_0_2)));
    vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_1 
        = (0xffU & ((8U & ((IData)(vlSelf->io_vecA_1) 
                           ^ (IData)(vlSelf->io_vecB_1)))
                     ? (- (IData)(MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_1_2))
                     : (IData)(MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_1_2)));
    vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_2 
        = (0xffU & ((8U & ((IData)(vlSelf->io_vecA_2) 
                           ^ (IData)(vlSelf->io_vecB_2)))
                     ? (- (IData)(MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_2_2))
                     : (IData)(MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_2_2)));
    vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_3 
        = (0xffU & ((8U & ((IData)(vlSelf->io_vecA_3) 
                           ^ (IData)(vlSelf->io_vecB_3)))
                     ? (- (IData)(MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_3_2))
                     : (IData)(MXFP4DotProductEngine__DOT__aligner__DOT___zz_io_aligned_3_2)));
    vlSelf->io_dotProduct = (0x3ffU & ((((0x300U & 
                                          ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_0) 
                                                          >> 7U)))) 
                                           << 8U)) 
                                         | (IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_0)) 
                                        + ((0x300U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_1) 
                                                              >> 7U)))) 
                                               << 8U)) 
                                           | (IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_1))) 
                                       + (((0x300U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_2) 
                                                              >> 7U)))) 
                                               << 8U)) 
                                           | (IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_2)) 
                                          + ((0x300U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_3) 
                                                                >> 7U)))) 
                                                 << 8U)) 
                                             | (IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_3)))));
}

void VMXFP4DotProductEngine___024root___eval_ico(VMXFP4DotProductEngine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VMXFP4DotProductEngine___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VMXFP4DotProductEngine___024root___eval_triggers__ico(VMXFP4DotProductEngine___024root* vlSelf);

bool VMXFP4DotProductEngine___024root___eval_phase__ico(VMXFP4DotProductEngine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VMXFP4DotProductEngine___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VMXFP4DotProductEngine___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VMXFP4DotProductEngine___024root___eval_act(VMXFP4DotProductEngine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root___eval_act\n"); );
}

void VMXFP4DotProductEngine___024root___eval_nba(VMXFP4DotProductEngine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root___eval_nba\n"); );
}

void VMXFP4DotProductEngine___024root___eval_triggers__act(VMXFP4DotProductEngine___024root* vlSelf);

bool VMXFP4DotProductEngine___024root___eval_phase__act(VMXFP4DotProductEngine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VMXFP4DotProductEngine___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VMXFP4DotProductEngine___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VMXFP4DotProductEngine___024root___eval_phase__nba(VMXFP4DotProductEngine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VMXFP4DotProductEngine___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMXFP4DotProductEngine___024root___dump_triggers__ico(VMXFP4DotProductEngine___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMXFP4DotProductEngine___024root___dump_triggers__nba(VMXFP4DotProductEngine___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMXFP4DotProductEngine___024root___dump_triggers__act(VMXFP4DotProductEngine___024root* vlSelf);
#endif  // VL_DEBUG

void VMXFP4DotProductEngine___024root___eval(VMXFP4DotProductEngine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VMXFP4DotProductEngine___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/fabio_testino/mxfp4_spinal_project/./simWorkspace/tmp/job_1/MXFP4DotProductEngine.v", 6, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VMXFP4DotProductEngine___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VMXFP4DotProductEngine___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/fabio_testino/mxfp4_spinal_project/./simWorkspace/tmp/job_1/MXFP4DotProductEngine.v", 6, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VMXFP4DotProductEngine___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/fabio_testino/mxfp4_spinal_project/./simWorkspace/tmp/job_1/MXFP4DotProductEngine.v", 6, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VMXFP4DotProductEngine___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VMXFP4DotProductEngine___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VMXFP4DotProductEngine___024root___eval_debug_assertions(VMXFP4DotProductEngine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->io_vecA_0 & 0xf0U))) {
        Verilated::overWidthError("io_vecA_0");}
    if (VL_UNLIKELY((vlSelf->io_vecA_1 & 0xf0U))) {
        Verilated::overWidthError("io_vecA_1");}
    if (VL_UNLIKELY((vlSelf->io_vecA_2 & 0xf0U))) {
        Verilated::overWidthError("io_vecA_2");}
    if (VL_UNLIKELY((vlSelf->io_vecA_3 & 0xf0U))) {
        Verilated::overWidthError("io_vecA_3");}
    if (VL_UNLIKELY((vlSelf->io_vecB_0 & 0xf0U))) {
        Verilated::overWidthError("io_vecB_0");}
    if (VL_UNLIKELY((vlSelf->io_vecB_1 & 0xf0U))) {
        Verilated::overWidthError("io_vecB_1");}
    if (VL_UNLIKELY((vlSelf->io_vecB_2 & 0xf0U))) {
        Verilated::overWidthError("io_vecB_2");}
    if (VL_UNLIKELY((vlSelf->io_vecB_3 & 0xf0U))) {
        Verilated::overWidthError("io_vecB_3");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
