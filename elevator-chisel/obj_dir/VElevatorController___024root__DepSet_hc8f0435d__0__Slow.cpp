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
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
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
            VL_FATAL_MT("ElevatorController.sv", 53, "", "Settle region did not converge.");
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

VL_ATTR_COLD void VElevatorController___024root___stl_sequent__TOP__0(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->io_motorUp = (1U == (IData)(vlSelf->ElevatorController__DOT__state));
    vlSelf->io_motorDown = (2U == (IData)(vlSelf->ElevatorController__DOT__state));
    vlSelf->io_doorOpen = ((3U == (IData)(vlSelf->ElevatorController__DOT__state)) 
                           | ((4U == (IData)(vlSelf->ElevatorController__DOT__state)) 
                              | (6U == (IData)(vlSelf->ElevatorController__DOT__state))));
    vlSelf->io_doorClose = (5U == (IData)(vlSelf->ElevatorController__DOT__state));
    vlSelf->io_currentState = vlSelf->ElevatorController__DOT__state;
    vlSelf->io_currentFloor = vlSelf->ElevatorController__DOT__currentFloor;
}

VL_ATTR_COLD void VElevatorController___024root___eval_stl(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VElevatorController___024root___stl_sequent__TOP__0(vlSelf);
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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VElevatorController___024root___ctor_var_reset(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_floorRequest = VL_RAND_RESET_I(4);
    vlSelf->io_currentFloorSensor = VL_RAND_RESET_I(4);
    vlSelf->io_doorSensor = VL_RAND_RESET_I(1);
    vlSelf->io_emergency = VL_RAND_RESET_I(1);
    vlSelf->io_overload = VL_RAND_RESET_I(1);
    vlSelf->io_motorUp = VL_RAND_RESET_I(1);
    vlSelf->io_motorDown = VL_RAND_RESET_I(1);
    vlSelf->io_doorOpen = VL_RAND_RESET_I(1);
    vlSelf->io_doorClose = VL_RAND_RESET_I(1);
    vlSelf->io_currentState = VL_RAND_RESET_I(3);
    vlSelf->io_currentFloor = VL_RAND_RESET_I(2);
    vlSelf->ElevatorController__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->ElevatorController__DOT__currentFloor = VL_RAND_RESET_I(2);
    vlSelf->ElevatorController__DOT__targetFloor = VL_RAND_RESET_I(2);
    vlSelf->ElevatorController__DOT__requestQueue_0 = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT__requestQueue_1 = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT__requestQueue_2 = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT__requestQueue_3 = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_4 = VL_RAND_RESET_I(4);
    vlSelf->ElevatorController__DOT__unnamedblk1__DOT___hasUpperRequest_T_2 = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT__unnamedblk1__DOT___hasUpperRequest_T_6 = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT__unnamedblk1__DOT__hasUpperRequest = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT__unnamedblk1__DOT__hasLowerRequest = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_5 = VL_RAND_RESET_I(4);
    vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_8 = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_10 = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_11 = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_12 = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_13 = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_14 = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_15 = VL_RAND_RESET_I(1);
    vlSelf->ElevatorController__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_16 = VL_RAND_RESET_I(3);
    vlSelf->ElevatorController__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_17 = VL_RAND_RESET_I(3);
    vlSelf->ElevatorController__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_18 = VL_RAND_RESET_I(24);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
