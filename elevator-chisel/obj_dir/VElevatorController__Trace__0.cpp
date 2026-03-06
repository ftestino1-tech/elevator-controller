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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->ElevatorController__DOT__state),3);
        bufp->chgCData(oldp+1,(vlSelf->ElevatorController__DOT__currentFloor),2);
        bufp->chgCData(oldp+2,(vlSelf->ElevatorController__DOT__targetFloor),2);
        bufp->chgBit(oldp+3,(vlSelf->ElevatorController__DOT__requestQueue_0));
        bufp->chgBit(oldp+4,(vlSelf->ElevatorController__DOT__requestQueue_1));
        bufp->chgBit(oldp+5,(vlSelf->ElevatorController__DOT__requestQueue_2));
        bufp->chgBit(oldp+6,(vlSelf->ElevatorController__DOT__requestQueue_3));
        bufp->chgBit(oldp+7,(vlSelf->ElevatorController__DOT__unnamedblk1__DOT__hasUpperRequest));
        bufp->chgBit(oldp+8,(vlSelf->ElevatorController__DOT__unnamedblk1__DOT__hasLowerRequest));
    }
    bufp->chgBit(oldp+9,(vlSelf->clock));
    bufp->chgBit(oldp+10,(vlSelf->reset));
    bufp->chgCData(oldp+11,(vlSelf->io_floorRequest),4);
    bufp->chgCData(oldp+12,(vlSelf->io_currentFloorSensor),4);
    bufp->chgBit(oldp+13,(vlSelf->io_doorSensor));
    bufp->chgBit(oldp+14,(vlSelf->io_emergency));
    bufp->chgBit(oldp+15,(vlSelf->io_overload));
    bufp->chgBit(oldp+16,(vlSelf->io_motorUp));
    bufp->chgBit(oldp+17,(vlSelf->io_motorDown));
    bufp->chgBit(oldp+18,(vlSelf->io_doorOpen));
    bufp->chgBit(oldp+19,(vlSelf->io_doorClose));
    bufp->chgCData(oldp+20,(vlSelf->io_currentState),3);
    bufp->chgCData(oldp+21,(vlSelf->io_currentFloor),2);
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
}
