// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VElevatorController.h for the primary calling header

#include "VElevatorController__pch.h"
#include "VElevatorController___024root.h"

void VElevatorController___024root___eval_act(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___eval_act\n"); );
}

extern const VlUnpacked<VlWide<3>/*95:0*/, 8> VElevatorController__ConstPool__TABLE_h01a181c3_0;

VL_INLINE_OPT void VElevatorController___024root___nba_sequent__TOP__0(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*2:0*/ __Vdly__ElevatorController__DOT__switch_ElevatorController_l61;
    __Vdly__ElevatorController__DOT__switch_ElevatorController_l61 = 0;
    IData/*23:0*/ __Vdly__ElevatorController__DOT___zz_when_ElevatorController_l110;
    __Vdly__ElevatorController__DOT___zz_when_ElevatorController_l110 = 0;
    // Body
    __Vdly__ElevatorController__DOT___zz_when_ElevatorController_l110 
        = vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l110;
    __Vdly__ElevatorController__DOT__switch_ElevatorController_l61 
        = vlSelf->ElevatorController__DOT__switch_ElevatorController_l61;
    if (vlSelf->reset) {
        __Vdly__ElevatorController__DOT__switch_ElevatorController_l61 = 0U;
        vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l88 = 0U;
        vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_1 = 0U;
        vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_2 = 0U;
        vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_3 = 0U;
        vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_4 = 0U;
        __Vdly__ElevatorController__DOT___zz_when_ElevatorController_l110 = 0U;
        vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65 = 0U;
    } else {
        if ((1U & (IData)(vlSelf->_zz_when_ElevatorController_l44))) {
            vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_1 = 1U;
        }
        if ((2U & (IData)(vlSelf->_zz_when_ElevatorController_l44))) {
            vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_2 = 1U;
        }
        if ((4U & (IData)(vlSelf->_zz_when_ElevatorController_l44))) {
            vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_3 = 1U;
        }
        if ((8U & (IData)(vlSelf->_zz_when_ElevatorController_l44))) {
            vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_4 = 1U;
        }
        if (vlSelf->when_ElevatorController_l57) {
            __Vdly__ElevatorController__DOT__switch_ElevatorController_l61 = 6U;
            vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_1 = 0U;
            vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_2 = 0U;
            vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_3 = 0U;
            vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_4 = 0U;
        } else if ((4U & (IData)(vlSelf->ElevatorController__DOT__switch_ElevatorController_l61))) {
            if ((2U & (IData)(vlSelf->ElevatorController__DOT__switch_ElevatorController_l61))) {
                if ((1U & ((~ (IData)(vlSelf->when_ElevatorController_l57)) 
                           & (~ (IData)(vlSelf->when_ElevatorController_l102))))) {
                    __Vdly__ElevatorController__DOT__switch_ElevatorController_l61 = 0U;
                }
            } else if ((1U & (IData)(vlSelf->ElevatorController__DOT__switch_ElevatorController_l61))) {
                if ((1U & (~ (IData)(vlSelf->when_ElevatorController_l102)))) {
                    __Vdly__ElevatorController__DOT__switch_ElevatorController_l61 = 0U;
                }
            } else {
                __Vdly__ElevatorController__DOT___zz_when_ElevatorController_l110 
                    = (0xffffffU & ((IData)(1U) + vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l110));
                if (vlSelf->ElevatorController__DOT__when_ElevatorController_l110) {
                    __Vdly__ElevatorController__DOT__switch_ElevatorController_l61 = 5U;
                }
            }
        } else if ((2U & (IData)(vlSelf->ElevatorController__DOT__switch_ElevatorController_l61))) {
            if ((1U & (IData)(vlSelf->ElevatorController__DOT__switch_ElevatorController_l61))) {
                if (vlSelf->when_ElevatorController_l102) {
                    __Vdly__ElevatorController__DOT___zz_when_ElevatorController_l110 = 0U;
                    __Vdly__ElevatorController__DOT__switch_ElevatorController_l61 = 4U;
                }
            } else if (vlSelf->ElevatorController__DOT__when_ElevatorController_l88) {
                if ((1U & ((IData)(1U) << (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65)))) {
                    vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_1 = 0U;
                }
                if ((2U & ((IData)(1U) << (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65)))) {
                    vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_2 = 0U;
                }
                if ((4U & ((IData)(1U) << (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65)))) {
                    vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_3 = 0U;
                }
                if ((8U & ((IData)(1U) << (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65)))) {
                    vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_4 = 0U;
                }
                __Vdly__ElevatorController__DOT__switch_ElevatorController_l61 = 3U;
            }
        } else if ((1U & (IData)(vlSelf->ElevatorController__DOT__switch_ElevatorController_l61))) {
            if (vlSelf->ElevatorController__DOT__when_ElevatorController_l88) {
                if ((1U & ((IData)(1U) << (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65)))) {
                    vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_1 = 0U;
                }
                if ((2U & ((IData)(1U) << (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65)))) {
                    vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_2 = 0U;
                }
                if ((4U & ((IData)(1U) << (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65)))) {
                    vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_3 = 0U;
                }
                if ((8U & ((IData)(1U) << (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65)))) {
                    vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_4 = 0U;
                }
                __Vdly__ElevatorController__DOT__switch_ElevatorController_l61 = 3U;
            }
        } else if (vlSelf->ElevatorController__DOT__when_ElevatorController_l64) {
            if (vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_5) {
                vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l88 
                    = vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65;
                if ((1U & ((IData)(1U) << (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65)))) {
                    vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_1 = 0U;
                }
                if ((2U & ((IData)(1U) << (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65)))) {
                    vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_2 = 0U;
                }
                if ((4U & ((IData)(1U) << (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65)))) {
                    vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_3 = 0U;
                }
                if ((8U & ((IData)(1U) << (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65)))) {
                    vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_4 = 0U;
                }
                __Vdly__ElevatorController__DOT__switch_ElevatorController_l61 = 3U;
            } else if (((IData)(vlSelf->ElevatorController__DOT__when_ElevatorController_l71_2) 
                        | ((IData)(vlSelf->ElevatorController__DOT__when_ElevatorController_l71_1) 
                           | (IData)(vlSelf->ElevatorController__DOT__when_ElevatorController_l71)))) {
                if (vlSelf->ElevatorController__DOT__when_ElevatorController_l71) {
                    vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l88 = 3U;
                }
                __Vdly__ElevatorController__DOT__switch_ElevatorController_l61 = 1U;
                if (vlSelf->ElevatorController__DOT__when_ElevatorController_l71_1) {
                    vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l88 = 2U;
                }
                if (vlSelf->ElevatorController__DOT__when_ElevatorController_l71_2) {
                    vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l88 = 1U;
                }
            } else {
                if (vlSelf->ElevatorController__DOT__when_ElevatorController_l78) {
                    vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l88 = 0U;
                }
                __Vdly__ElevatorController__DOT__switch_ElevatorController_l61 = 2U;
                if (vlSelf->ElevatorController__DOT__when_ElevatorController_l78_1) {
                    vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l88 = 1U;
                }
                if (vlSelf->ElevatorController__DOT__when_ElevatorController_l78_2) {
                    vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l88 = 2U;
                }
            }
        }
        if ((1U & (IData)(vlSelf->_zz_when_ElevatorController_l51))) {
            vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65 = 0U;
        }
        if ((2U & (IData)(vlSelf->_zz_when_ElevatorController_l51))) {
            vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65 = 1U;
        }
        if ((4U & (IData)(vlSelf->_zz_when_ElevatorController_l51))) {
            vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65 = 2U;
        }
        if ((8U & (IData)(vlSelf->_zz_when_ElevatorController_l51))) {
            vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65 = 3U;
        }
    }
    vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l110 
        = __Vdly__ElevatorController__DOT___zz_when_ElevatorController_l110;
    vlSelf->ElevatorController__DOT__switch_ElevatorController_l61 
        = __Vdly__ElevatorController__DOT__switch_ElevatorController_l61;
    vlSelf->ElevatorController__DOT__when_ElevatorController_l110 
        = (0x32U <= vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l110);
    vlSelf->_zz_2 = (1U == (IData)(vlSelf->ElevatorController__DOT__switch_ElevatorController_l61));
    vlSelf->_zz_3 = (2U == (IData)(vlSelf->ElevatorController__DOT__switch_ElevatorController_l61));
    vlSelf->_zz_4 = ((3U == (IData)(vlSelf->ElevatorController__DOT__switch_ElevatorController_l61)) 
                     | ((4U == (IData)(vlSelf->ElevatorController__DOT__switch_ElevatorController_l61)) 
                        | (6U == (IData)(vlSelf->ElevatorController__DOT__switch_ElevatorController_l61))));
    vlSelf->_zz_5 = (5U == (IData)(vlSelf->ElevatorController__DOT__switch_ElevatorController_l61));
    __Vtableidx1 = vlSelf->ElevatorController__DOT__switch_ElevatorController_l61;
    vlSelf->ElevatorController__DOT__switch_ElevatorController_l61_string[0U] 
        = VElevatorController__ConstPool__TABLE_h01a181c3_0
        [__Vtableidx1][0U];
    vlSelf->ElevatorController__DOT__switch_ElevatorController_l61_string[1U] 
        = VElevatorController__ConstPool__TABLE_h01a181c3_0
        [__Vtableidx1][1U];
    vlSelf->ElevatorController__DOT__switch_ElevatorController_l61_string[2U] 
        = VElevatorController__ConstPool__TABLE_h01a181c3_0
        [__Vtableidx1][2U];
    vlSelf->ElevatorController__DOT__when_ElevatorController_l64 
        = ((IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_1) 
           | ((IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_2) 
              | ((IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_3) 
                 | (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_4))));
    vlSelf->_zz_6 = vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65;
    vlSelf->ElevatorController__DOT__when_ElevatorController_l71 
        = ((IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_4) 
           & (3U > (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65)));
    vlSelf->ElevatorController__DOT__when_ElevatorController_l71_1 
        = ((IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_3) 
           & (2U > (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65)));
    vlSelf->ElevatorController__DOT__when_ElevatorController_l71_2 
        = ((IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_2) 
           & (1U > (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65)));
    vlSelf->ElevatorController__DOT__when_ElevatorController_l78 
        = ((IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_1) 
           & (0U < (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65)));
    vlSelf->ElevatorController__DOT__when_ElevatorController_l78_1 
        = ((IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_2) 
           & (1U < (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65)));
    vlSelf->ElevatorController__DOT__when_ElevatorController_l78_2 
        = ((IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_3) 
           & (2U < (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65)));
    vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_5 
        = ((0U == (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65))
            ? (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_1)
            : ((1U == (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65))
                ? (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_2)
                : ((2U == (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65))
                    ? (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_3)
                    : (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_4))));
}

VL_INLINE_OPT void VElevatorController___024root___nba_sequent__TOP__1(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->ElevatorController__DOT__when_ElevatorController_l88 
        = (((IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65) 
            == (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l88)) 
           | (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_5));
}

void VElevatorController___024root___eval_nba(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VElevatorController___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        VElevatorController___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void VElevatorController___024root___eval_triggers__act(VElevatorController___024root* vlSelf);

bool VElevatorController___024root___eval_phase__act(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VElevatorController___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VElevatorController___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VElevatorController___024root___eval_phase__nba(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VElevatorController___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VElevatorController___024root___dump_triggers__nba(VElevatorController___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VElevatorController___024root___dump_triggers__act(VElevatorController___024root* vlSelf);
#endif  // VL_DEBUG

void VElevatorController___024root___eval(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VElevatorController___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/fabio_testino/elevator-spinal/tmp/job_1/ElevatorController.v", 6, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VElevatorController___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/fabio_testino/elevator-spinal/tmp/job_1/ElevatorController.v", 6, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VElevatorController___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VElevatorController___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VElevatorController___024root___eval_debug_assertions(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->_zz_when_ElevatorController_l44 
                     & 0xf0U))) {
        Verilated::overWidthError("_zz_when_ElevatorController_l44");}
    if (VL_UNLIKELY((vlSelf->_zz_when_ElevatorController_l51 
                     & 0xf0U))) {
        Verilated::overWidthError("_zz_when_ElevatorController_l51");}
    if (VL_UNLIKELY((vlSelf->when_ElevatorController_l102 
                     & 0xfeU))) {
        Verilated::overWidthError("when_ElevatorController_l102");}
    if (VL_UNLIKELY((vlSelf->when_ElevatorController_l57 
                     & 0xfeU))) {
        Verilated::overWidthError("when_ElevatorController_l57");}
    if (VL_UNLIKELY((vlSelf->_zz_1 & 0xfeU))) {
        Verilated::overWidthError("_zz_1");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
