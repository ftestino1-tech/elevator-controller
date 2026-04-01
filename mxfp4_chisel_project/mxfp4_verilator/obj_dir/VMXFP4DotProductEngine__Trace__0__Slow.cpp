// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMXFP4DotProductEngine__Syms.h"


VL_ATTR_COLD void VMXFP4DotProductEngine___024root__trace_init_sub__TOP__0(VMXFP4DotProductEngine___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+14,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"io_vecA_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17,0,"io_vecA_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+18,0,"io_vecA_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+19,0,"io_vecA_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+20,0,"io_vecB_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+21,0,"io_vecB_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+22,0,"io_vecB_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+23,0,"io_vecB_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+24,0,"io_scaleA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"io_scaleB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+26,0,"io_dotProduct",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+27,0,"io_combinedScale",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("MXFP4DotProductEngine", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+14,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"io_vecA_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17,0,"io_vecA_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+18,0,"io_vecA_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+19,0,"io_vecA_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+20,0,"io_vecB_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+21,0,"io_vecB_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+22,0,"io_vecB_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+23,0,"io_vecB_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+24,0,"io_scaleA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"io_scaleB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+26,0,"io_dotProduct",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+27,0,"io_combinedScale",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("adderTree", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"io_inputs_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"io_inputs_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"io_inputs_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"io_inputs_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+26,0,"io_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->pushPrefix("aligner", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+28,0,"io_signs_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"io_signs_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"io_signs_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"io_signs_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"io_exps_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+6,0,"io_exps_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+7,0,"io_exps_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+8,0,"io_exps_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+32,0,"io_mants_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+33,0,"io_mants_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+34,0,"io_mants_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+35,0,"io_mants_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1,0,"io_aligned_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"io_aligned_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"io_aligned_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"io_aligned_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"expMax",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+10,0,"shifted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"shifted_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,0,"shifted_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+13,0,"shifted_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("multipliers_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+16,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+20,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+28,0,"io_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"io_expOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+32,0,"io_mantOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("multipliers_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+21,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+29,0,"io_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"io_expOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+33,0,"io_mantOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("multipliers_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+18,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+22,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+30,0,"io_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"io_expOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+34,0,"io_mantOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("multipliers_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+19,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+23,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+31,0,"io_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"io_expOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+35,0,"io_mantOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("scaleIntegrator", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+26,0,"io_treeSum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+24,0,"io_scaleA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"io_scaleB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+26,0,"io_dotProduct",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+27,0,"io_combinedScale",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VMXFP4DotProductEngine___024root__trace_init_top(VMXFP4DotProductEngine___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root__trace_init_top\n"); );
    // Body
    VMXFP4DotProductEngine___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VMXFP4DotProductEngine___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VMXFP4DotProductEngine___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VMXFP4DotProductEngine___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VMXFP4DotProductEngine___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VMXFP4DotProductEngine___024root__trace_register(VMXFP4DotProductEngine___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VMXFP4DotProductEngine___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VMXFP4DotProductEngine___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VMXFP4DotProductEngine___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VMXFP4DotProductEngine___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VMXFP4DotProductEngine___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root__trace_const_0\n"); );
    // Init
    VMXFP4DotProductEngine___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMXFP4DotProductEngine___024root*>(voidSelf);
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void VMXFP4DotProductEngine___024root__trace_full_0_sub_0(VMXFP4DotProductEngine___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VMXFP4DotProductEngine___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root__trace_full_0\n"); );
    // Init
    VMXFP4DotProductEngine___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMXFP4DotProductEngine___024root*>(voidSelf);
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VMXFP4DotProductEngine___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VMXFP4DotProductEngine___024root__trace_full_0_sub_0(VMXFP4DotProductEngine___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->MXFP4DotProductEngine__DOT___aligner_io_aligned_0),8);
    bufp->fullCData(oldp+2,(vlSelf->MXFP4DotProductEngine__DOT___aligner_io_aligned_1),8);
    bufp->fullCData(oldp+3,(vlSelf->MXFP4DotProductEngine__DOT___aligner_io_aligned_2),8);
    bufp->fullCData(oldp+4,(vlSelf->MXFP4DotProductEngine__DOT___aligner_io_aligned_3),8);
    bufp->fullCData(oldp+5,(vlSelf->MXFP4DotProductEngine__DOT___multipliers_0_io_expOut),3);
    bufp->fullCData(oldp+6,(vlSelf->MXFP4DotProductEngine__DOT___multipliers_1_io_expOut),3);
    bufp->fullCData(oldp+7,(vlSelf->MXFP4DotProductEngine__DOT___multipliers_2_io_expOut),3);
    bufp->fullCData(oldp+8,(vlSelf->MXFP4DotProductEngine__DOT___multipliers_3_io_expOut),3);
    bufp->fullCData(oldp+9,(vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT__expMax),3);
    bufp->fullCData(oldp+10,(vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT__shifted),8);
    bufp->fullCData(oldp+11,(vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT__shifted_1),8);
    bufp->fullCData(oldp+12,(vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT__shifted_2),8);
    bufp->fullCData(oldp+13,(vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT__shifted_3),8);
    bufp->fullBit(oldp+14,(vlSelf->clock));
    bufp->fullBit(oldp+15,(vlSelf->reset));
    bufp->fullCData(oldp+16,(vlSelf->io_vecA_0),4);
    bufp->fullCData(oldp+17,(vlSelf->io_vecA_1),4);
    bufp->fullCData(oldp+18,(vlSelf->io_vecA_2),4);
    bufp->fullCData(oldp+19,(vlSelf->io_vecA_3),4);
    bufp->fullCData(oldp+20,(vlSelf->io_vecB_0),4);
    bufp->fullCData(oldp+21,(vlSelf->io_vecB_1),4);
    bufp->fullCData(oldp+22,(vlSelf->io_vecB_2),4);
    bufp->fullCData(oldp+23,(vlSelf->io_vecB_3),4);
    bufp->fullCData(oldp+24,(vlSelf->io_scaleA),8);
    bufp->fullCData(oldp+25,(vlSelf->io_scaleB),8);
    bufp->fullSData(oldp+26,(vlSelf->io_dotProduct),10);
    bufp->fullSData(oldp+27,(vlSelf->io_combinedScale),9);
    bufp->fullBit(oldp+28,((1U & (((IData)(vlSelf->io_vecA_0) 
                                   ^ (IData)(vlSelf->io_vecB_0)) 
                                  >> 3U))));
    bufp->fullBit(oldp+29,((1U & (((IData)(vlSelf->io_vecA_1) 
                                   ^ (IData)(vlSelf->io_vecB_1)) 
                                  >> 3U))));
    bufp->fullBit(oldp+30,((1U & (((IData)(vlSelf->io_vecA_2) 
                                   ^ (IData)(vlSelf->io_vecB_2)) 
                                  >> 3U))));
    bufp->fullBit(oldp+31,((1U & (((IData)(vlSelf->io_vecA_3) 
                                   ^ (IData)(vlSelf->io_vecB_3)) 
                                  >> 3U))));
    bufp->fullCData(oldp+32,((0xfU & (((IData)((0U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->io_vecA_0))))
                                        ? 0U : (2U 
                                                | (1U 
                                                   & (IData)(vlSelf->io_vecA_0)))) 
                                      * ((IData)((0U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->io_vecB_0))))
                                          ? 0U : (2U 
                                                  | (1U 
                                                     & (IData)(vlSelf->io_vecB_0))))))),4);
    bufp->fullCData(oldp+33,((0xfU & (((IData)((0U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->io_vecA_1))))
                                        ? 0U : (2U 
                                                | (1U 
                                                   & (IData)(vlSelf->io_vecA_1)))) 
                                      * ((IData)((0U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->io_vecB_1))))
                                          ? 0U : (2U 
                                                  | (1U 
                                                     & (IData)(vlSelf->io_vecB_1))))))),4);
    bufp->fullCData(oldp+34,((0xfU & (((IData)((0U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->io_vecA_2))))
                                        ? 0U : (2U 
                                                | (1U 
                                                   & (IData)(vlSelf->io_vecA_2)))) 
                                      * ((IData)((0U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->io_vecB_2))))
                                          ? 0U : (2U 
                                                  | (1U 
                                                     & (IData)(vlSelf->io_vecB_2))))))),4);
    bufp->fullCData(oldp+35,((0xfU & (((IData)((0U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->io_vecA_3))))
                                        ? 0U : (2U 
                                                | (1U 
                                                   & (IData)(vlSelf->io_vecA_3)))) 
                                      * ((IData)((0U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->io_vecB_3))))
                                          ? 0U : (2U 
                                                  | (1U 
                                                     & (IData)(vlSelf->io_vecB_3))))))),4);
}
