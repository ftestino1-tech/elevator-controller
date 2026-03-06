// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VElevatorController.h for the primary calling header

#include "VElevatorController__pch.h"
#include "VElevatorController___024root.h"

extern const VlUnpacked<CData/*1:0*/, 128> VElevatorController__ConstPool__TABLE_hf262c860_0;

VL_INLINE_OPT void VElevatorController___024root___ico_sequent__TOP__0(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
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
    vlSelf->top__DOT____02451 = vlSelf->top__DOT__target_floor;
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
        vlSelf->top__DOT____02449 = 0U;
        vlSelf->top__DOT____02451 = 0U;
        vlSelf->top__DOT____02450 = 0U;
    }
}

void VElevatorController___024root___eval_ico(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VElevatorController___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VElevatorController___024root___eval_triggers__ico(VElevatorController___024root* vlSelf);

bool VElevatorController___024root___eval_phase__ico(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VElevatorController___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VElevatorController___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VElevatorController___024root___eval_act(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*2:0*/, 8> VElevatorController__ConstPool__TABLE_hd534e99b_0;

VL_INLINE_OPT void VElevatorController___024root___nba_sequent__TOP__0(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*2:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->top__DOT__door_timer = vlSelf->top__DOT____02452;
    vlSelf->top__DOT__target_floor = vlSelf->top__DOT____02451;
    vlSelf->top__DOT__fsm_state = vlSelf->top__DOT____02450;
    vlSelf->top__DOT__request_queue = vlSelf->top__DOT____02449;
    vlSelf->current_floor = vlSelf->top__DOT____02448;
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

void VElevatorController___024root___eval_nba(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VElevatorController___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
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
VL_ATTR_COLD void VElevatorController___024root___dump_triggers__ico(VElevatorController___024root* vlSelf);
#endif  // VL_DEBUG
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
            VElevatorController___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("ElevatorController.v", 6, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VElevatorController___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VElevatorController___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("ElevatorController.v", 6, "", "NBA region did not converge.");
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
                VL_FATAL_MT("ElevatorController.v", 6, "", "Active region did not converge.");
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
    if (VL_UNLIKELY((vlSelf->current_floor_sensor & 0xf0U))) {
        Verilated::overWidthError("current_floor_sensor");}
    if (VL_UNLIKELY((vlSelf->door_sensor & 0xfeU))) {
        Verilated::overWidthError("door_sensor");}
    if (VL_UNLIKELY((vlSelf->emergency & 0xfeU))) {
        Verilated::overWidthError("emergency");}
    if (VL_UNLIKELY((vlSelf->overload & 0xfeU))) {
        Verilated::overWidthError("overload");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->floor_request & 0xf0U))) {
        Verilated::overWidthError("floor_request");}
}
#endif  // VL_DEBUG
