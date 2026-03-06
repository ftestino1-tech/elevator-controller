// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VElevatorController__Syms.h"


VL_ATTR_COLD void VElevatorController___024root__trace_init_sub__TOP__0(VElevatorController___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+16,0,"when_ElevatorController_l102",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"when_ElevatorController_l57",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ElevatorController", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+16,0,"when_ElevatorController_l102",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"when_ElevatorController_l57",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"State_idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+31,0,"State_movingUp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+32,0,"State_movingDown",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+33,0,"State_doorOpening",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+34,0,"State_doorOpenWait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+35,0,"State_doorClosing",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+36,0,"State_emergency",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1,0,"switch_ElevatorController_l61",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+2,0,"when_ElevatorController_l65",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"when_ElevatorController_l64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"when_ElevatorController_l69",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"when_ElevatorController_l44",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"when_ElevatorController_l44_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"when_ElevatorController_l44_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"when_ElevatorController_l44_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"when_ElevatorController_l51",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"when_ElevatorController_l51_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"when_ElevatorController_l51_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"when_ElevatorController_l51_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"when_ElevatorController_l71",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"when_ElevatorController_l71_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"when_ElevatorController_l71_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"when_ElevatorController_l71_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"when_ElevatorController_l78",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"when_ElevatorController_l78_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"when_ElevatorController_l78_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"when_ElevatorController_l78_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"when_ElevatorController_l88",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"when_ElevatorController_l95",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"when_ElevatorController_l110",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"when_ElevatorController_l116",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"when_ElevatorController_l122",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+13,0,"switch_ElevatorController_l61_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void VElevatorController___024root__trace_init_top(VElevatorController___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root__trace_init_top\n"); );
    // Body
    VElevatorController___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VElevatorController___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VElevatorController___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VElevatorController___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VElevatorController___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VElevatorController___024root__trace_register(VElevatorController___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VElevatorController___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VElevatorController___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VElevatorController___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VElevatorController___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VElevatorController___024root__trace_const_0_sub_0(VElevatorController___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VElevatorController___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root__trace_const_0\n"); );
    // Init
    VElevatorController___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VElevatorController___024root*>(voidSelf);
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VElevatorController___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VElevatorController___024root__trace_const_0_sub_0(VElevatorController___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+30,(0U),3);
    bufp->fullCData(oldp+31,(1U),3);
    bufp->fullCData(oldp+32,(2U),3);
    bufp->fullCData(oldp+33,(3U),3);
    bufp->fullCData(oldp+34,(4U),3);
    bufp->fullCData(oldp+35,(5U),3);
    bufp->fullCData(oldp+36,(6U),3);
    bufp->fullBit(oldp+37,(0U));
}

VL_ATTR_COLD void VElevatorController___024root__trace_full_0_sub_0(VElevatorController___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VElevatorController___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root__trace_full_0\n"); );
    // Init
    VElevatorController___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VElevatorController___024root*>(voidSelf);
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VElevatorController___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VElevatorController___024root__trace_full_0_sub_0(VElevatorController___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VElevatorController___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ElevatorController__DOT__switch_ElevatorController_l61),3);
    bufp->fullBit(oldp+2,(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_5));
    bufp->fullBit(oldp+3,(((IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_1) 
                           | ((IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_2) 
                              | ((IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_3) 
                                 | (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_4))))));
    bufp->fullBit(oldp+4,(((IData)(vlSelf->ElevatorController__DOT__when_ElevatorController_l71_2) 
                           | ((IData)(vlSelf->ElevatorController__DOT__when_ElevatorController_l71_1) 
                              | (IData)(vlSelf->ElevatorController__DOT__when_ElevatorController_l71)))));
    bufp->fullBit(oldp+5,(vlSelf->ElevatorController__DOT__when_ElevatorController_l71));
    bufp->fullBit(oldp+6,(vlSelf->ElevatorController__DOT__when_ElevatorController_l71_1));
    bufp->fullBit(oldp+7,(vlSelf->ElevatorController__DOT__when_ElevatorController_l71_2));
    bufp->fullBit(oldp+8,(((IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_1) 
                           & (0U < (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65)))));
    bufp->fullBit(oldp+9,(((IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_2) 
                           & (1U < (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65)))));
    bufp->fullBit(oldp+10,(((IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65_3) 
                            & (2U < (IData)(vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l65)))));
    bufp->fullBit(oldp+11,(vlSelf->ElevatorController__DOT__when_ElevatorController_l88));
    bufp->fullBit(oldp+12,((0x32U <= vlSelf->ElevatorController__DOT___zz_when_ElevatorController_l110)));
    bufp->fullWData(oldp+13,(vlSelf->ElevatorController__DOT__switch_ElevatorController_l61_string),96);
    bufp->fullBit(oldp+16,(vlSelf->when_ElevatorController_l102));
    bufp->fullBit(oldp+17,(vlSelf->when_ElevatorController_l57));
    bufp->fullBit(oldp+18,(vlSelf->clk));
    bufp->fullBit(oldp+19,(vlSelf->reset));
    bufp->fullBit(oldp+20,((1U & (IData)(vlSelf->_zz_when_ElevatorController_l44))));
    bufp->fullBit(oldp+21,((1U & ((IData)(vlSelf->_zz_when_ElevatorController_l44) 
                                  >> 1U))));
    bufp->fullBit(oldp+22,((1U & ((IData)(vlSelf->_zz_when_ElevatorController_l44) 
                                  >> 2U))));
    bufp->fullBit(oldp+23,((1U & ((IData)(vlSelf->_zz_when_ElevatorController_l44) 
                                  >> 3U))));
    bufp->fullBit(oldp+24,((1U & (IData)(vlSelf->_zz_when_ElevatorController_l51))));
    bufp->fullBit(oldp+25,((1U & ((IData)(vlSelf->_zz_when_ElevatorController_l51) 
                                  >> 1U))));
    bufp->fullBit(oldp+26,((1U & ((IData)(vlSelf->_zz_when_ElevatorController_l51) 
                                  >> 2U))));
    bufp->fullBit(oldp+27,((1U & ((IData)(vlSelf->_zz_when_ElevatorController_l51) 
                                  >> 3U))));
    bufp->fullBit(oldp+28,((1U & (~ (IData)(vlSelf->when_ElevatorController_l102)))));
    bufp->fullBit(oldp+29,((1U & ((~ (IData)(vlSelf->when_ElevatorController_l57)) 
                                  & (~ (IData)(vlSelf->when_ElevatorController_l102))))));
}
