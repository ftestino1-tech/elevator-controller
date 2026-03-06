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
        bufp->chgCData(oldp+0,(vlSelf->ElevatorController__DOT__switch_ElevatorController_l61),3);
        bufp->chgBit(oldp+1,(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_5));
        bufp->chgBit(oldp+2,(((IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_1) 
                              | ((IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_2) 
                                 | ((IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_3) 
                                    | (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_4))))));
        bufp->chgBit(oldp+3,(((IData)(vlSelf->ElevatorController__DOT__when_ElevatorController_l71_2) 
                              | ((IData)(vlSelf->ElevatorController__DOT__when_ElevatorController_l71_1) 
                                 | (IData)(vlSelf->ElevatorController__DOT__when_ElevatorController_l71)))));
        bufp->chgBit(oldp+4,(vlSelf->ElevatorController__DOT__when_ElevatorController_l71));
        bufp->chgBit(oldp+5,(vlSelf->ElevatorController__DOT__when_ElevatorController_l71_1));
        bufp->chgBit(oldp+6,(vlSelf->ElevatorController__DOT__when_ElevatorController_l71_2));
        bufp->chgBit(oldp+7,(((IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_1) 
                              & (0U < (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65)))));
        bufp->chgBit(oldp+8,(((IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_2) 
                              & (1U < (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65)))));
        bufp->chgBit(oldp+9,(((IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_3) 
                              & (2U < (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65)))));
        bufp->chgBit(oldp+10,(vlSelf->ElevatorController__DOT__when_ElevatorController_l88));
        bufp->chgBit(oldp+11,((0x32U <= vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l110)));
        bufp->chgWData(oldp+12,(vlSelf->ElevatorController__DOT__switch_ElevatorController_l61_string),96);
    }
    bufp->chgBit(oldp+15,(vlSelf->when_ElevatorController_l102));
    bufp->chgBit(oldp+16,(vlSelf->when_ElevatorController_l57));
    bufp->chgBit(oldp+17,(vlSelf->clk));
    bufp->chgBit(oldp+18,(vlSelf->reset));
    bufp->chgBit(oldp+19,((1U & (IData)(vlSelf->_zz_when_ElevatorController_l44))));
    bufp->chgBit(oldp+20,((1U & ((IData)(vlSelf->_zz_when_ElevatorController_l44) 
                                 >> 1U))));
    bufp->chgBit(oldp+21,((1U & ((IData)(vlSelf->_zz_when_ElevatorController_l44) 
                                 >> 2U))));
    bufp->chgBit(oldp+22,((1U & ((IData)(vlSelf->_zz_when_ElevatorController_l44) 
                                 >> 3U))));
    bufp->chgBit(oldp+23,((1U & (IData)(vlSelf->_zz_when_ElevatorController_l51))));
    bufp->chgBit(oldp+24,((1U & ((IData)(vlSelf->_zz_when_ElevatorController_l51) 
                                 >> 1U))));
    bufp->chgBit(oldp+25,((1U & ((IData)(vlSelf->_zz_when_ElevatorController_l51) 
                                 >> 2U))));
    bufp->chgBit(oldp+26,((1U & ((IData)(vlSelf->_zz_when_ElevatorController_l51) 
                                 >> 3U))));
    bufp->chgBit(oldp+27,((1U & (~ (IData)(vlSelf->when_ElevatorController_l102)))));
    bufp->chgBit(oldp+28,((1U & ((~ (IData)(vlSelf->when_ElevatorController_l57)) 
                                 & (~ (IData)(vlSelf->when_ElevatorController_l102))))));
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
