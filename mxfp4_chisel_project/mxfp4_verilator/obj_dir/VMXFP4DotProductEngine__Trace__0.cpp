// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMXFP4DotProductEngine__Syms.h"


void VMXFP4DotProductEngine___024root__trace_chg_0_sub_0(VMXFP4DotProductEngine___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VMXFP4DotProductEngine___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root__trace_chg_0\n"); );
    // Init
    VMXFP4DotProductEngine___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMXFP4DotProductEngine___024root*>(voidSelf);
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VMXFP4DotProductEngine___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VMXFP4DotProductEngine___024root__trace_chg_0_sub_0(VMXFP4DotProductEngine___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->MXFP4DotProductEngine__DOT___aligner_io_aligned_0),8);
        bufp->chgCData(oldp+1,(vlSelf->MXFP4DotProductEngine__DOT___aligner_io_aligned_1),8);
        bufp->chgCData(oldp+2,(vlSelf->MXFP4DotProductEngine__DOT___aligner_io_aligned_2),8);
        bufp->chgCData(oldp+3,(vlSelf->MXFP4DotProductEngine__DOT___aligner_io_aligned_3),8);
        bufp->chgCData(oldp+4,(vlSelf->MXFP4DotProductEngine__DOT___multipliers_0_io_expOut),3);
        bufp->chgCData(oldp+5,(vlSelf->MXFP4DotProductEngine__DOT___multipliers_1_io_expOut),3);
        bufp->chgCData(oldp+6,(vlSelf->MXFP4DotProductEngine__DOT___multipliers_2_io_expOut),3);
        bufp->chgCData(oldp+7,(vlSelf->MXFP4DotProductEngine__DOT___multipliers_3_io_expOut),3);
        bufp->chgCData(oldp+8,(vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT__expMax),3);
        bufp->chgCData(oldp+9,(vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT__shifted),8);
        bufp->chgCData(oldp+10,(vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT__shifted_1),8);
        bufp->chgCData(oldp+11,(vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT__shifted_2),8);
        bufp->chgCData(oldp+12,(vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT__shifted_3),8);
    }
    bufp->chgBit(oldp+13,(vlSelf->clock));
    bufp->chgBit(oldp+14,(vlSelf->reset));
    bufp->chgCData(oldp+15,(vlSelf->io_vecA_0),4);
    bufp->chgCData(oldp+16,(vlSelf->io_vecA_1),4);
    bufp->chgCData(oldp+17,(vlSelf->io_vecA_2),4);
    bufp->chgCData(oldp+18,(vlSelf->io_vecA_3),4);
    bufp->chgCData(oldp+19,(vlSelf->io_vecB_0),4);
    bufp->chgCData(oldp+20,(vlSelf->io_vecB_1),4);
    bufp->chgCData(oldp+21,(vlSelf->io_vecB_2),4);
    bufp->chgCData(oldp+22,(vlSelf->io_vecB_3),4);
    bufp->chgCData(oldp+23,(vlSelf->io_scaleA),8);
    bufp->chgCData(oldp+24,(vlSelf->io_scaleB),8);
    bufp->chgSData(oldp+25,(vlSelf->io_dotProduct),10);
    bufp->chgSData(oldp+26,(vlSelf->io_combinedScale),9);
    bufp->chgBit(oldp+27,((1U & (((IData)(vlSelf->io_vecA_0) 
                                  ^ (IData)(vlSelf->io_vecB_0)) 
                                 >> 3U))));
    bufp->chgBit(oldp+28,((1U & (((IData)(vlSelf->io_vecA_1) 
                                  ^ (IData)(vlSelf->io_vecB_1)) 
                                 >> 3U))));
    bufp->chgBit(oldp+29,((1U & (((IData)(vlSelf->io_vecA_2) 
                                  ^ (IData)(vlSelf->io_vecB_2)) 
                                 >> 3U))));
    bufp->chgBit(oldp+30,((1U & (((IData)(vlSelf->io_vecA_3) 
                                  ^ (IData)(vlSelf->io_vecB_3)) 
                                 >> 3U))));
    bufp->chgCData(oldp+31,((0xfU & (((IData)((0U == 
                                               (7U 
                                                & (IData)(vlSelf->io_vecA_0))))
                                       ? 0U : (2U | 
                                               (1U 
                                                & (IData)(vlSelf->io_vecA_0)))) 
                                     * ((IData)((0U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->io_vecB_0))))
                                         ? 0U : (2U 
                                                 | (1U 
                                                    & (IData)(vlSelf->io_vecB_0))))))),4);
    bufp->chgCData(oldp+32,((0xfU & (((IData)((0U == 
                                               (7U 
                                                & (IData)(vlSelf->io_vecA_1))))
                                       ? 0U : (2U | 
                                               (1U 
                                                & (IData)(vlSelf->io_vecA_1)))) 
                                     * ((IData)((0U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->io_vecB_1))))
                                         ? 0U : (2U 
                                                 | (1U 
                                                    & (IData)(vlSelf->io_vecB_1))))))),4);
    bufp->chgCData(oldp+33,((0xfU & (((IData)((0U == 
                                               (7U 
                                                & (IData)(vlSelf->io_vecA_2))))
                                       ? 0U : (2U | 
                                               (1U 
                                                & (IData)(vlSelf->io_vecA_2)))) 
                                     * ((IData)((0U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->io_vecB_2))))
                                         ? 0U : (2U 
                                                 | (1U 
                                                    & (IData)(vlSelf->io_vecB_2))))))),4);
    bufp->chgCData(oldp+34,((0xfU & (((IData)((0U == 
                                               (7U 
                                                & (IData)(vlSelf->io_vecA_3))))
                                       ? 0U : (2U | 
                                               (1U 
                                                & (IData)(vlSelf->io_vecA_3)))) 
                                     * ((IData)((0U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->io_vecB_3))))
                                         ? 0U : (2U 
                                                 | (1U 
                                                    & (IData)(vlSelf->io_vecB_3))))))),4);
}

void VMXFP4DotProductEngine___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root__trace_cleanup\n"); );
    // Init
    VMXFP4DotProductEngine___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMXFP4DotProductEngine___024root*>(voidSelf);
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
