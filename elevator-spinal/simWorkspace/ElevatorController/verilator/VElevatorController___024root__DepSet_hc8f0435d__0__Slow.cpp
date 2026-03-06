// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VElevatorController.h for the primary calling header

#include "VElevatorController__pch.h"
#include "VElevatorController___024root.h"

VL_ATTR_COLD void VElevatorController___024root___eval_static(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___eval_static\n"); );
}

VL_ATTR_COLD void VElevatorController___024root___eval_initial(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
}

VL_ATTR_COLD void VElevatorController___024root___eval_final(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VElevatorController___024root___dump_triggers__stl(VElevatorController___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VElevatorController___024root___eval_phase__stl(VElevatorController___024root* vlSelf);

VL_ATTR_COLD void VElevatorController___024root___eval_settle(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___eval_settle\n"); );
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
            VElevatorController___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/fabio_testino/elevator-spinal/tmp/job_1/ElevatorController.v", 6, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VElevatorController___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VElevatorController___024root___dump_triggers__stl(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<VlWide<3>/*95:0*/, 8> VElevatorController__ConstPool__TABLE_h01a181c3_0;

VL_ATTR_COLD void VElevatorController___024root___stl_sequent__TOP__0(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->_zz_2 = (1U == (IData)(vlSelf->ElevatorController__DOT__switch_ElevatorController_l61));
    vlSelf->_zz_3 = (2U == (IData)(vlSelf->ElevatorController__DOT__switch_ElevatorController_l61));
    vlSelf->_zz_4 = ((3U == (IData)(vlSelf->ElevatorController__DOT__switch_ElevatorController_l61)) 
                     | ((4U == (IData)(vlSelf->ElevatorController__DOT__switch_ElevatorController_l61)) 
                        | (6U == (IData)(vlSelf->ElevatorController__DOT__switch_ElevatorController_l61))));
    vlSelf->_zz_5 = (5U == (IData)(vlSelf->ElevatorController__DOT__switch_ElevatorController_l61));
    vlSelf->_zz_6 = vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65;
    vlSelf->ElevatorController__DOT__when_ElevatorController_l110 
        = (0x32U <= vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l110);
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
    vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_5 
        = ((0U == (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65))
            ? (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_1)
            : ((1U == (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65))
                ? (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_2)
                : ((2U == (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65))
                    ? (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_3)
                    : (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_4))));
    vlSelf->ElevatorController__DOT__when_ElevatorController_l88 
        = (((IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65) 
            == (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l88)) 
           | (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_5));
}

VL_ATTR_COLD void VElevatorController___024root___eval_stl(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VElevatorController___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VElevatorController___024root___eval_triggers__stl(VElevatorController___024root* vlSelf);

VL_ATTR_COLD bool VElevatorController___024root___eval_phase__stl(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VElevatorController___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VElevatorController___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VElevatorController___024root___dump_triggers__act(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VElevatorController___024root___dump_triggers__nba(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VElevatorController___024root___ctor_var_reset(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->_zz_when_ElevatorController_l44 = VL_RAND_RESET_I(4);
    vlSelf->_zz_when_ElevatorController_l51 = VL_RAND_RESET_I(4);
    vlSelf->when_ElevatorController_l102 = VL_RAND_RESET_I(1);
    vlSelf->when_ElevatorController_l57 = VL_RAND_RESET_I(1);
    vlSelf->_zz_1 = VL_RAND_RESET_I(1);
    vlSelf->_zz_2 = VL_RAND_RESET_I(1);
    vlSelf->_zz_3 = VL_RAND_RESET_I(1);
    vlSelf->_zz_4 = VL_RAND_RESET_I(1);
    vlSelf->_zz_5 = VL_RAND_RESET_I(1);
    vlSelf->_zz_6 = VL_RAND_RESET_I(2);
    vlSelf->clk = 0;
    vlSelf->reset = 0;
    vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_5 = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT__switch_ElevatorController_l61 = VL_RAND_RESET_I(3);
    vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65 = VL_RAND_RESET_I(2);
    vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l88 = VL_RAND_RESET_I(2);
    vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_1 = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_2 = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_3 = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_4 = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l110 = VL_RAND_RESET_I(24);
    vlSelf->ElevatorController__DOT__when_ElevatorController_l64 = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT__when_ElevatorController_l71 = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT__when_ElevatorController_l71_1 = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT__when_ElevatorController_l71_2 = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT__when_ElevatorController_l78 = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT__when_ElevatorController_l78_1 = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT__when_ElevatorController_l78_2 = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT__when_ElevatorController_l88 = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT__when_ElevatorController_l110 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(96, vlSelf->ElevatorController__DOT__switch_ElevatorController_l61_string);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
