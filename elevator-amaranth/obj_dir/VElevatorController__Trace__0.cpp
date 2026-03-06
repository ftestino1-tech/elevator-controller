// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VElevatorController__Syms.h"


void VElevatorController___024root__trace_chg_0_sub_0(VElevatorController___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VElevatorController___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root__trace_chg_0\n"); );
    // Init
    VElevatorController___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VElevatorController___024root*>(voidSelf);
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VElevatorController___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VElevatorController___024root__trace_chg_0_sub_0(VElevatorController___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT____02448),2);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT____02449),4);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT____02450),3);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT____02451),2);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT____02452),24);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+5,((0U != (IData)(vlSelf->top__DOT__request_queue))));
        bufp->chgBit(oldp+6,(vlSelf->top__DOT____0242));
        bufp->chgBit(oldp+7,(vlSelf->top__DOT____02427));
        bufp->chgCData(oldp+8,(vlSelf->top__DOT____02430),4);
        bufp->chgIData(oldp+9,((0x1ffffffU & ((IData)(1U) 
                                              + vlSelf->top__DOT__door_timer))),25);
        bufp->chgBit(oldp+10,((0x32U <= vlSelf->top__DOT__door_timer)));
        bufp->chgCData(oldp+11,(vlSelf->top__DOT____0244),4);
        bufp->chgBit(oldp+12,(((2U == (IData)(vlSelf->top__DOT__fsm_state)) 
                               | (5U == (IData)(vlSelf->top__DOT__fsm_state)))));
        bufp->chgBit(oldp+13,((1U & (~ (IData)((0U 
                                                != (IData)(vlSelf->top__DOT__fsm_state)))))));
        bufp->chgBit(oldp+14,((1U == (IData)(vlSelf->top__DOT__fsm_state))));
        bufp->chgBit(oldp+15,((2U == (IData)(vlSelf->top__DOT__fsm_state))));
        bufp->chgBit(oldp+16,((5U == (IData)(vlSelf->top__DOT__fsm_state))));
        bufp->chgBit(oldp+17,((0U != (IData)(vlSelf->top__DOT____0244))));
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__current_state),3);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__door_timer),24);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__fsm_state),3);
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__request_queue),4);
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__target_floor),2);
    }
    bufp->chgBit(oldp+23,(vlSelf->clk));
    bufp->chgCData(oldp+24,(vlSelf->current_floor),2);
    bufp->chgCData(oldp+25,(vlSelf->current_floor_sensor),4);
    bufp->chgBit(oldp+26,(vlSelf->door_close));
    bufp->chgBit(oldp+27,(vlSelf->door_open));
    bufp->chgBit(oldp+28,(vlSelf->door_sensor));
    bufp->chgBit(oldp+29,(vlSelf->emergency));
    bufp->chgCData(oldp+30,(vlSelf->floor_request),4);
    bufp->chgBit(oldp+31,(vlSelf->motor_down));
    bufp->chgBit(oldp+32,(vlSelf->motor_up));
    bufp->chgBit(oldp+33,(vlSelf->overload));
    bufp->chgBit(oldp+34,(vlSelf->rst));
    bufp->chgBit(oldp+35,((((IData)(vlSelf->top__DOT__request_queue) 
                            >> 3U) & (3U > (IData)(vlSelf->current_floor)))));
    bufp->chgBit(oldp+36,((2U > (IData)(vlSelf->current_floor))));
    bufp->chgBit(oldp+37,((((IData)(vlSelf->top__DOT__request_queue) 
                            >> 2U) & (2U > (IData)(vlSelf->current_floor)))));
    bufp->chgBit(oldp+38,((1U > (IData)(vlSelf->current_floor))));
    bufp->chgBit(oldp+39,((((IData)(vlSelf->top__DOT__request_queue) 
                            >> 1U) & (1U > (IData)(vlSelf->current_floor)))));
    bufp->chgBit(oldp+40,((0U < (IData)(vlSelf->current_floor))));
    bufp->chgBit(oldp+41,(((IData)(vlSelf->top__DOT__request_queue) 
                           & (0U < (IData)(vlSelf->current_floor)))));
    bufp->chgBit(oldp+42,((1U < (IData)(vlSelf->current_floor))));
    bufp->chgBit(oldp+43,((((IData)(vlSelf->top__DOT__request_queue) 
                            >> 1U) & (1U < (IData)(vlSelf->current_floor)))));
    bufp->chgBit(oldp+44,((2U < (IData)(vlSelf->current_floor))));
    bufp->chgBit(oldp+45,((((IData)(vlSelf->top__DOT__request_queue) 
                            >> 2U) & (2U < (IData)(vlSelf->current_floor)))));
    bufp->chgBit(oldp+46,(((IData)(vlSelf->current_floor) 
                           == (IData)(vlSelf->top__DOT__target_floor))));
    bufp->chgCData(oldp+47,((0xfU & ((IData)(1U) << (IData)(vlSelf->current_floor)))),4);
    bufp->chgCData(oldp+48,((0xfU & (~ ((IData)(1U) 
                                        << (IData)(vlSelf->current_floor))))),4);
    bufp->chgCData(oldp+49,((7U & ((IData)(1U) + (IData)(vlSelf->current_floor)))),3);
    bufp->chgBit(oldp+50,((1U & (~ (IData)(vlSelf->door_sensor)))));
    bufp->chgBit(oldp+51,((1U & (~ (IData)(vlSelf->emergency)))));
    bufp->chgBit(oldp+52,((1U & ((~ (IData)(vlSelf->emergency)) 
                                 & (~ (IData)(vlSelf->door_sensor))))));
    bufp->chgBit(oldp+53,((3U > (IData)(vlSelf->current_floor))));
}

void VElevatorController___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root__trace_cleanup\n"); );
    // Init
    VElevatorController___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VElevatorController___024root*>(voidSelf);
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
