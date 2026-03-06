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

VL_INLINE_OPT void VElevatorController___024root___nba_sequent__TOP__0(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vdly__ElevatorController__DOT__state;
    __Vdly__ElevatorController__DOT__state = 0;
    CData/*1:0*/ __Vdly__ElevatorController__DOT__targetFloor;
    __Vdly__ElevatorController__DOT__targetFloor = 0;
    CData/*0:0*/ __Vdly__ElevatorController__DOT__requestQueue_0;
    __Vdly__ElevatorController__DOT__requestQueue_0 = 0;
    CData/*0:0*/ __Vdly__ElevatorController__DOT__requestQueue_1;
    __Vdly__ElevatorController__DOT__requestQueue_1 = 0;
    CData/*0:0*/ __Vdly__ElevatorController__DOT__requestQueue_2;
    __Vdly__ElevatorController__DOT__requestQueue_2 = 0;
    CData/*0:0*/ __Vdly__ElevatorController__DOT__requestQueue_3;
    __Vdly__ElevatorController__DOT__requestQueue_3 = 0;
    // Body
    __Vdly__ElevatorController__DOT__requestQueue_3 
        = vlSelf->ElevatorController__DOT__requestQueue_3;
    __Vdly__ElevatorController__DOT__requestQueue_2 
        = vlSelf->ElevatorController__DOT__requestQueue_2;
    __Vdly__ElevatorController__DOT__requestQueue_1 
        = vlSelf->ElevatorController__DOT__requestQueue_1;
    __Vdly__ElevatorController__DOT__requestQueue_0 
        = vlSelf->ElevatorController__DOT__requestQueue_0;
    __Vdly__ElevatorController__DOT__targetFloor = vlSelf->ElevatorController__DOT__targetFloor;
    __Vdly__ElevatorController__DOT__state = vlSelf->ElevatorController__DOT__state;
    if (vlSelf->reset) {
        __Vdly__ElevatorController__DOT__state = 0U;
        __Vdly__ElevatorController__DOT__targetFloor = 0U;
        __Vdly__ElevatorController__DOT__requestQueue_0 = 0U;
        __Vdly__ElevatorController__DOT__requestQueue_1 = 0U;
        __Vdly__ElevatorController__DOT__requestQueue_2 = 0U;
        __Vdly__ElevatorController__DOT__requestQueue_3 = 0U;
        vlSelf->ElevatorController__DOT__currentFloor = 0U;
    } else {
        vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN 
            = (1U & ((IData)(vlSelf->io_floorRequest) 
                     | (IData)(vlSelf->ElevatorController__DOT__requestQueue_0)));
        vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_0 
            = (1U & (((IData)(vlSelf->io_floorRequest) 
                      >> 1U) | (IData)(vlSelf->ElevatorController__DOT__requestQueue_1)));
        vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_1 
            = (1U & (((IData)(vlSelf->io_floorRequest) 
                      >> 2U) | (IData)(vlSelf->ElevatorController__DOT__requestQueue_2)));
        vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_2 
            = (IData)((((IData)(vlSelf->io_floorRequest) 
                        >> 3U) | (IData)(vlSelf->ElevatorController__DOT__requestQueue_3)));
        vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_3 
            = (0U == (IData)(vlSelf->ElevatorController__DOT__state));
        vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_4 
            = (((IData)(vlSelf->ElevatorController__DOT__requestQueue_3) 
                << 3U) | (((IData)(vlSelf->ElevatorController__DOT__requestQueue_2) 
                           << 2U) | (((IData)(vlSelf->ElevatorController__DOT__requestQueue_1) 
                                      << 1U) | (IData)(vlSelf->ElevatorController__DOT__requestQueue_0))));
        vlSelf->ElevatorController__DOT__unnamedblk1__DOT___hasUpperRequest_T_2 
            = (0U == (IData)(vlSelf->ElevatorController__DOT__currentFloor));
        vlSelf->ElevatorController__DOT__unnamedblk1__DOT___hasUpperRequest_T_6 
            = (3U != (IData)(vlSelf->ElevatorController__DOT__currentFloor));
        vlSelf->ElevatorController__DOT__unnamedblk1__DOT__hasUpperRequest 
            = ((((IData)(vlSelf->ElevatorController__DOT__requestQueue_1) 
                 & (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___hasUpperRequest_T_2)) 
                | ((IData)(vlSelf->ElevatorController__DOT__requestQueue_2) 
                   & (~ ((IData)(vlSelf->ElevatorController__DOT__currentFloor) 
                         >> 1U)))) | ((IData)(vlSelf->ElevatorController__DOT__requestQueue_3) 
                                      & (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___hasUpperRequest_T_6)));
        vlSelf->ElevatorController__DOT__unnamedblk1__DOT__hasLowerRequest 
            = ((((IData)(vlSelf->ElevatorController__DOT__requestQueue_0) 
                 & (0U != (IData)(vlSelf->ElevatorController__DOT__currentFloor))) 
                | ((IData)(vlSelf->ElevatorController__DOT__requestQueue_1) 
                   & ((IData)(vlSelf->ElevatorController__DOT__currentFloor) 
                      >> 1U))) | ((IData)(vlSelf->ElevatorController__DOT__requestQueue_2) 
                                  & (3U == (IData)(vlSelf->ElevatorController__DOT__currentFloor))));
        vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_5 
            = (((IData)(vlSelf->ElevatorController__DOT__requestQueue_3) 
                << 3U) | (((IData)(vlSelf->ElevatorController__DOT__requestQueue_2) 
                           << 2U) | (((IData)(vlSelf->ElevatorController__DOT__requestQueue_1) 
                                      << 1U) | (IData)(vlSelf->ElevatorController__DOT__requestQueue_0))));
        vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_6 
            = (1U & ((IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_5) 
                     >> (IData)(vlSelf->ElevatorController__DOT__currentFloor)));
        vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_7 
            = (0U == (IData)(vlSelf->ElevatorController__DOT__currentFloor));
        vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_8 
            = ((IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_6) 
               & (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_7));
        vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_9 
            = (1U == (IData)(vlSelf->ElevatorController__DOT__currentFloor));
        vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_10 
            = ((IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_6) 
               & (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_9));
        vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_11 
            = (2U == (IData)(vlSelf->ElevatorController__DOT__currentFloor));
        vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_12 
            = ((IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_6) 
               & (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_11));
        vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_13 
            = ((IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_6) 
               & (3U == (IData)(vlSelf->ElevatorController__DOT__currentFloor)));
        vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_14 
            = ((IData)(vlSelf->ElevatorController__DOT__currentFloor) 
               == (IData)(vlSelf->ElevatorController__DOT__targetFloor));
        vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_15 
            = ((1U == (IData)(vlSelf->ElevatorController__DOT__state)) 
               | (2U == (IData)(vlSelf->ElevatorController__DOT__state)));
        if (vlSelf->io_emergency) {
            __Vdly__ElevatorController__DOT__state = 6U;
        } else {
            vlSelf->ElevatorController__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_16 
                = (((IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_14) 
                    | (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_6))
                    ? 3U : (IData)(vlSelf->ElevatorController__DOT__state));
            vlSelf->ElevatorController__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_17 
                = ((((6U == (IData)(vlSelf->ElevatorController__DOT__state)) 
                     & (~ (IData)(vlSelf->io_emergency))) 
                    & (~ (IData)(vlSelf->io_doorSensor)))
                    ? 0U : (IData)(vlSelf->ElevatorController__DOT__state));
            vlSelf->ElevatorController__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_18 
                = ((0xfc0000U & (((IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_17) 
                                  << 0x15U) | ((IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_17) 
                                               << 0x12U))) 
                   | ((((IData)(vlSelf->io_doorSensor)
                         ? (IData)(vlSelf->ElevatorController__DOT__state)
                         : 0U) << 0xfU) | (((IData)(vlSelf->ElevatorController__DOT__state) 
                                            << 0xcU) 
                                           | ((((IData)(vlSelf->io_doorSensor)
                                                 ? 4U
                                                 : (IData)(vlSelf->ElevatorController__DOT__state)) 
                                               << 9U) 
                                              | (((IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_16) 
                                                  << 6U) 
                                                 | (((IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_16) 
                                                     << 3U) 
                                                    | ((0U 
                                                        != (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_4))
                                                        ? 
                                                       ((IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_6)
                                                         ? 3U
                                                         : 
                                                        ((IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT__hasUpperRequest)
                                                          ? 1U
                                                          : 
                                                         ((IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT__hasLowerRequest)
                                                           ? 2U
                                                           : (IData)(vlSelf->ElevatorController__DOT__state))))
                                                        : (IData)(vlSelf->ElevatorController__DOT__state))))))));
            __Vdly__ElevatorController__DOT__state 
                = ((0x17U >= (0x1fU & ((IData)(3U) 
                                       * (IData)(vlSelf->ElevatorController__DOT__state))))
                    ? (7U & (vlSelf->ElevatorController__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_18 
                             >> (0x1fU & ((IData)(3U) 
                                          * (IData)(vlSelf->ElevatorController__DOT__state)))))
                    : 0U);
        }
        if ((1U & (~ ((IData)(vlSelf->io_emergency) 
                      | (~ ((IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_3) 
                            & (0U != (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_4)))))))) {
            if (vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_6) {
                __Vdly__ElevatorController__DOT__targetFloor 
                    = vlSelf->ElevatorController__DOT__currentFloor;
            } else if (vlSelf->ElevatorController__DOT__unnamedblk1__DOT__hasUpperRequest) {
                if (((IData)(vlSelf->ElevatorController__DOT__requestQueue_1) 
                     & (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___hasUpperRequest_T_2))) {
                    __Vdly__ElevatorController__DOT__targetFloor = 1U;
                } else if (((IData)(vlSelf->ElevatorController__DOT__requestQueue_2) 
                            & (~ ((IData)(vlSelf->ElevatorController__DOT__currentFloor) 
                                  >> 1U)))) {
                    __Vdly__ElevatorController__DOT__targetFloor = 2U;
                } else if (((IData)(vlSelf->ElevatorController__DOT__requestQueue_3) 
                            & (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___hasUpperRequest_T_6))) {
                    __Vdly__ElevatorController__DOT__targetFloor = 3U;
                }
            } else if (vlSelf->ElevatorController__DOT__unnamedblk1__DOT__hasLowerRequest) {
                if (((IData)(vlSelf->ElevatorController__DOT__requestQueue_2) 
                     & (3U == (IData)(vlSelf->ElevatorController__DOT__currentFloor)))) {
                    __Vdly__ElevatorController__DOT__targetFloor = 2U;
                } else if (((IData)(vlSelf->ElevatorController__DOT__requestQueue_1) 
                            & ((IData)(vlSelf->ElevatorController__DOT__currentFloor) 
                               >> 1U))) {
                    __Vdly__ElevatorController__DOT__targetFloor = 1U;
                } else if (((IData)(vlSelf->ElevatorController__DOT__requestQueue_0) 
                            & (0U != (IData)(vlSelf->ElevatorController__DOT__currentFloor)))) {
                    __Vdly__ElevatorController__DOT__targetFloor = 0U;
                }
            }
        }
        __Vdly__ElevatorController__DOT__requestQueue_0 
            = ((~ (IData)(vlSelf->io_emergency)) & 
               ((IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_3)
                 ? ((~ ((0U != (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_4)) 
                        & (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_8))) 
                    & (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN))
                 : ((IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_15)
                     ? ((IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_14)
                         ? ((~ (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_7)) 
                            & (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN))
                         : ((~ (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_8)) 
                            & (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN)))
                     : (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN))));
        __Vdly__ElevatorController__DOT__requestQueue_1 
            = ((~ (IData)(vlSelf->io_emergency)) & 
               ((IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_3)
                 ? ((~ ((0U != (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_4)) 
                        & (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_10))) 
                    & (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_0))
                 : ((IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_15)
                     ? ((IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_14)
                         ? ((~ (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_9)) 
                            & (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_0))
                         : ((~ (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_10)) 
                            & (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_0)))
                     : (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_0))));
        __Vdly__ElevatorController__DOT__requestQueue_2 
            = ((~ (IData)(vlSelf->io_emergency)) & 
               ((IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_3)
                 ? ((~ ((0U != (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_4)) 
                        & (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_12))) 
                    & (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_1))
                 : ((IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_15)
                     ? ((IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_14)
                         ? ((~ (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_11)) 
                            & (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_1))
                         : ((~ (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_12)) 
                            & (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_1)))
                     : (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_1))));
        __Vdly__ElevatorController__DOT__requestQueue_3 
            = ((~ (IData)(vlSelf->io_emergency)) & 
               ((IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_3)
                 ? ((~ ((0U != (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_4)) 
                        & (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_13))) 
                    & (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_2))
                 : ((IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_15)
                     ? ((IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_14)
                         ? ((~ (IData)((3U == (IData)(vlSelf->ElevatorController__DOT__currentFloor)))) 
                            & (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_2))
                         : ((~ (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_13)) 
                            & (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_2)))
                     : (IData)(vlSelf->ElevatorController__DOT__unnamedblk1__DOT___GEN_2))));
        if ((8U & (IData)(vlSelf->io_currentFloorSensor))) {
            vlSelf->ElevatorController__DOT__currentFloor = 3U;
        } else if ((4U & (IData)(vlSelf->io_currentFloorSensor))) {
            vlSelf->ElevatorController__DOT__currentFloor = 2U;
        } else if ((2U & (IData)(vlSelf->io_currentFloorSensor))) {
            vlSelf->ElevatorController__DOT__currentFloor = 1U;
        } else if ((1U & (IData)(vlSelf->io_currentFloorSensor))) {
            vlSelf->ElevatorController__DOT__currentFloor = 0U;
        }
    }
    vlSelf->ElevatorController__DOT__targetFloor = __Vdly__ElevatorController__DOT__targetFloor;
    vlSelf->ElevatorController__DOT__requestQueue_0 
        = __Vdly__ElevatorController__DOT__requestQueue_0;
    vlSelf->ElevatorController__DOT__requestQueue_1 
        = __Vdly__ElevatorController__DOT__requestQueue_1;
    vlSelf->ElevatorController__DOT__requestQueue_2 
        = __Vdly__ElevatorController__DOT__requestQueue_2;
    vlSelf->ElevatorController__DOT__requestQueue_3 
        = __Vdly__ElevatorController__DOT__requestQueue_3;
    vlSelf->ElevatorController__DOT__state = __Vdly__ElevatorController__DOT__state;
    vlSelf->io_motorUp = (1U == (IData)(vlSelf->ElevatorController__DOT__state));
    vlSelf->io_motorDown = (2U == (IData)(vlSelf->ElevatorController__DOT__state));
    vlSelf->io_doorOpen = ((3U == (IData)(vlSelf->ElevatorController__DOT__state)) 
                           | ((4U == (IData)(vlSelf->ElevatorController__DOT__state)) 
                              | (6U == (IData)(vlSelf->ElevatorController__DOT__state))));
    vlSelf->io_doorClose = (5U == (IData)(vlSelf->ElevatorController__DOT__state));
    vlSelf->io_currentState = vlSelf->ElevatorController__DOT__state;
    vlSelf->io_currentFloor = vlSelf->ElevatorController__DOT__currentFloor;
}

void VElevatorController___024root___eval_nba(VElevatorController___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VElevatorController___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
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
            VL_FATAL_MT("ElevatorController.sv", 53, "", "NBA region did not converge.");
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
                VL_FATAL_MT("ElevatorController.sv", 53, "", "Active region did not converge.");
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
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_floorRequest & 0xf0U))) {
        Verilated::overWidthError("io_floorRequest");}
    if (VL_UNLIKELY((vlSelf->io_currentFloorSensor 
                     & 0xf0U))) {
        Verilated::overWidthError("io_currentFloorSensor");}
    if (VL_UNLIKELY((vlSelf->io_doorSensor & 0xfeU))) {
        Verilated::overWidthError("io_doorSensor");}
    if (VL_UNLIKELY((vlSelf->io_emergency & 0xfeU))) {
        Verilated::overWidthError("io_emergency");}
    if (VL_UNLIKELY((vlSelf->io_overload & 0xfeU))) {
        Verilated::overWidthError("io_overload");}
}
#endif  // VL_DEBUG
