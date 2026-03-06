// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VElevatorController.h for the primary calling header

#include "VElevatorController__pch.h"
#include "VElevatorController___024root.h"

VL_ATTR_COLD void VElevatorController___024root___eval_static__TOP(VElevatorController___024root* vlSelf);

VL_ATTR_COLD void VElevatorController___024root___eval_static(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___eval_static\n"); );
    // Body
    VElevatorController___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VElevatorController___024root___eval_static__TOP(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->current_floor = 0U;
    vlSelf->top__DOT__door_timer = 0U;
    vlSelf->top__DOT__fsm_state = 0U;
    vlSelf->top__DOT__request_queue = 0U;
    vlSelf->top__DOT__target_floor = 0U;
}

VL_ATTR_COLD void VElevatorController___024root___eval_initial(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
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
            VL_FATAL_MT("ElevatorController.v", 6, "", "Settle region did not converge.");
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

extern const VlUnpacked<CData/*2:0*/, 8> VElevatorController__ConstPool__TABLE_hd534e99b_0;
extern const VlUnpacked<CData/*1:0*/, 128> VElevatorController__ConstPool__TABLE_hf262c860_0;

VL_ATTR_COLD void VElevatorController___024root___stl_sequent__TOP__0(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*2:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->motor_up = (3U == (IData)(vlSelf->top__DOT__fsm_state));
    vlSelf->motor_down = (4U == (IData)(vlSelf->top__DOT__fsm_state));
    vlSelf->door_open = (((2U == (IData)(vlSelf->top__DOT__fsm_state)) 
                          | (5U == (IData)(vlSelf->top__DOT__fsm_state))) 
                         | (1U == (IData)(vlSelf->top__DOT__fsm_state)));
    vlSelf->door_close = (6U == (IData)(vlSelf->top__DOT__fsm_state));
    __Vtableidx2 = vlSelf->top__DOT__fsm_state;
    vlSelf->top__DOT__current_state = VElevatorController__ConstPool__TABLE_hd534e99b_0
        [__Vtableidx2];
    vlSelf->top__DOT____02452 = vlSelf->top__DOT__door_timer;
    if ((0U != (IData)(vlSelf->top__DOT__fsm_state))) {
        if ((3U != (IData)(vlSelf->top__DOT__fsm_state))) {
            if ((4U != (IData)(vlSelf->top__DOT__fsm_state))) {
                if ((2U == (IData)(vlSelf->top__DOT__fsm_state))) {
                    if ((1U & (~ (IData)(vlSelf->emergency)))) {
                        if (vlSelf->door_sensor) {
                            vlSelf->top__DOT____02452 = 0U;
                        }
                    }
                } else if ((5U == (IData)(vlSelf->top__DOT__fsm_state))) {
                    vlSelf->top__DOT____02452 = (0xffffffU 
                                                 & ((IData)(1U) 
                                                    + vlSelf->top__DOT__door_timer));
                }
            }
        }
    }
    __Vtableidx1 = (((IData)(vlSelf->rst) << 6U) | 
                    (((IData)(vlSelf->current_floor_sensor) 
                      << 2U) | (IData)(vlSelf->current_floor)));
    vlSelf->top__DOT____02448 = VElevatorController__ConstPool__TABLE_hf262c860_0
        [__Vtableidx1];
    vlSelf->top__DOT____02430 = ((~ ((IData)(1U) << (IData)(vlSelf->current_floor))) 
                                 & (IData)(vlSelf->top__DOT__request_queue));
    vlSelf->top__DOT____0244 = (0xfU & ((IData)(vlSelf->top__DOT__request_queue) 
                                        >> (7U & ((IData)(1U) 
                                                  + (IData)(vlSelf->current_floor)))));
    vlSelf->top__DOT____0242 = (1U & ((IData)(vlSelf->top__DOT__request_queue) 
                                      >> (IData)(vlSelf->current_floor)));
    vlSelf->top__DOT____02451 = vlSelf->top__DOT__target_floor;
    vlSelf->top__DOT____02427 = (((IData)(vlSelf->current_floor) 
                                  == (IData)(vlSelf->top__DOT__target_floor)) 
                                 | (IData)(vlSelf->top__DOT____0242));
    vlSelf->top__DOT____02449 = vlSelf->top__DOT__request_queue;
    if ((1U & (IData)(vlSelf->floor_request))) {
        vlSelf->top__DOT____02449 = (1U | (IData)(vlSelf->top__DOT____02449));
    }
    if ((2U & (IData)(vlSelf->floor_request))) {
        vlSelf->top__DOT____02449 = (2U | (IData)(vlSelf->top__DOT____02449));
    }
    if ((4U & (IData)(vlSelf->floor_request))) {
        vlSelf->top__DOT____02449 = (4U | (IData)(vlSelf->top__DOT____02449));
    }
    if ((8U & (IData)(vlSelf->floor_request))) {
        vlSelf->top__DOT____02449 = (8U | (IData)(vlSelf->top__DOT____02449));
    }
    if ((0U == (IData)(vlSelf->top__DOT__fsm_state))) {
        if ((1U & (~ (IData)(vlSelf->emergency)))) {
            if ((0U != (IData)(vlSelf->top__DOT__request_queue))) {
                if (vlSelf->top__DOT____0242) {
                    vlSelf->top__DOT____02451 = vlSelf->current_floor;
                } else if ((0U != (IData)(vlSelf->top__DOT____0244))) {
                    if ((((IData)(vlSelf->top__DOT__request_queue) 
                          >> 3U) & (3U > (IData)(vlSelf->current_floor)))) {
                        vlSelf->top__DOT____02451 = 3U;
                    }
                    if ((((IData)(vlSelf->top__DOT__request_queue) 
                          >> 2U) & (2U > (IData)(vlSelf->current_floor)))) {
                        vlSelf->top__DOT____02451 = 2U;
                    }
                    if ((((IData)(vlSelf->top__DOT__request_queue) 
                          >> 1U) & (1U > (IData)(vlSelf->current_floor)))) {
                        vlSelf->top__DOT____02451 = 1U;
                    }
                } else {
                    if (((IData)(vlSelf->top__DOT__request_queue) 
                         & (0U < (IData)(vlSelf->current_floor)))) {
                        vlSelf->top__DOT____02451 = 0U;
                    }
                    if ((((IData)(vlSelf->top__DOT__request_queue) 
                          >> 1U) & (1U < (IData)(vlSelf->current_floor)))) {
                        vlSelf->top__DOT____02451 = 1U;
                    }
                    if ((((IData)(vlSelf->top__DOT__request_queue) 
                          >> 2U) & (2U < (IData)(vlSelf->current_floor)))) {
                        vlSelf->top__DOT____02451 = 2U;
                    }
                }
            }
        }
        vlSelf->top__DOT____02450 = vlSelf->top__DOT__fsm_state;
        if (vlSelf->emergency) {
            vlSelf->top__DOT____02449 = 0U;
            vlSelf->top__DOT____02450 = 1U;
        } else if ((0U != (IData)(vlSelf->top__DOT__request_queue))) {
            if (vlSelf->top__DOT____0242) {
                vlSelf->top__DOT____02449 = vlSelf->top__DOT____02430;
                vlSelf->top__DOT____02450 = 2U;
            } else {
                vlSelf->top__DOT____02450 = ((0U != (IData)(vlSelf->top__DOT____0244))
                                              ? 3U : 4U);
            }
        }
    } else {
        vlSelf->top__DOT____02450 = vlSelf->top__DOT__fsm_state;
        if ((3U == (IData)(vlSelf->top__DOT__fsm_state))) {
            if (vlSelf->emergency) {
                vlSelf->top__DOT____02449 = 0U;
                vlSelf->top__DOT____02450 = 1U;
            } else if (vlSelf->top__DOT____02427) {
                vlSelf->top__DOT____02449 = vlSelf->top__DOT____02430;
                vlSelf->top__DOT____02450 = 2U;
            }
        } else if ((4U == (IData)(vlSelf->top__DOT__fsm_state))) {
            if (vlSelf->emergency) {
                vlSelf->top__DOT____02449 = 0U;
                vlSelf->top__DOT____02450 = 1U;
            } else if (vlSelf->top__DOT____02427) {
                vlSelf->top__DOT____02449 = vlSelf->top__DOT____02430;
                vlSelf->top__DOT____02450 = 2U;
            }
        } else if ((2U == (IData)(vlSelf->top__DOT__fsm_state))) {
            if (vlSelf->emergency) {
                vlSelf->top__DOT____02449 = 0U;
                vlSelf->top__DOT____02450 = 1U;
            } else if (vlSelf->door_sensor) {
                vlSelf->top__DOT____02450 = 5U;
            }
        } else if ((5U == (IData)(vlSelf->top__DOT__fsm_state))) {
            if (vlSelf->emergency) {
                vlSelf->top__DOT____02449 = 0U;
                vlSelf->top__DOT____02450 = 1U;
            } else if ((0x32U <= vlSelf->top__DOT__door_timer)) {
                vlSelf->top__DOT____02450 = 6U;
            }
        } else if ((6U == (IData)(vlSelf->top__DOT__fsm_state))) {
            if (vlSelf->emergency) {
                vlSelf->top__DOT____02449 = 0U;
                vlSelf->top__DOT____02450 = 1U;
            } else if ((1U & (~ (IData)(vlSelf->door_sensor)))) {
                vlSelf->top__DOT____02450 = 0U;
            }
        } else if ((1U == (IData)(vlSelf->top__DOT__fsm_state))) {
            if ((1U & ((~ (IData)(vlSelf->emergency)) 
                       & (~ (IData)(vlSelf->door_sensor))))) {
                vlSelf->top__DOT____02450 = 0U;
            }
        }
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT____02452 = 0U;
        vlSelf->top__DOT____02451 = 0U;
        vlSelf->top__DOT____02449 = 0U;
        vlSelf->top__DOT____02450 = 0U;
    }
}

VL_ATTR_COLD void VElevatorController___024root___eval_stl(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VElevatorController___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
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
VL_ATTR_COLD void VElevatorController___024root___dump_triggers__ico(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VElevatorController___024root___dump_triggers__act(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void VElevatorController___024root___dump_triggers__nba(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VElevatorController___024root___ctor_var_reset(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->current_floor_sensor = VL_RAND_RESET_I(4);
    vlSelf->door_sensor = VL_RAND_RESET_I(1);
    vlSelf->emergency = VL_RAND_RESET_I(1);
    vlSelf->overload = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->motor_up = VL_RAND_RESET_I(1);
    vlSelf->motor_down = VL_RAND_RESET_I(1);
    vlSelf->door_open = VL_RAND_RESET_I(1);
    vlSelf->door_close = VL_RAND_RESET_I(1);
    vlSelf->current_floor = VL_RAND_RESET_I(2);
    vlSelf->floor_request = VL_RAND_RESET_I(4);
    vlSelf->top__DOT____0242 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____02427 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____02430 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT____0244 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT____02448 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT____02449 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT____02450 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT____02451 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT____02452 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__current_state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__door_timer = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__fsm_state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__request_queue = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__target_floor = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
