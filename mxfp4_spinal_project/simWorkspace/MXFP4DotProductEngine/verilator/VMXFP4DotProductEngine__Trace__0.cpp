// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMXFP4DotProductEngine__Syms.h"


void VMXFP4DotProductEngine___024root__trace_chg_0_sub_0(VMXFP4DotProductEngine___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void VMXFP4DotProductEngine___024root__trace_chg_0_sub_1(VMXFP4DotProductEngine___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VMXFP4DotProductEngine___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root__trace_chg_0\n"); );
    // Init
    VMXFP4DotProductEngine___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMXFP4DotProductEngine___024root*>(voidSelf);
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VMXFP4DotProductEngine___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
    VMXFP4DotProductEngine___024root__trace_chg_0_sub_1((&vlSymsp->TOP), bufp);
}

void VMXFP4DotProductEngine___024root__trace_chg_0_sub_0(VMXFP4DotProductEngine___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->MXFP4DotProductEngine__DOT__multipliers_0_io_expOut),3);
        bufp->chgCData(oldp+1,(vlSelf->MXFP4DotProductEngine__DOT__multipliers_1_io_expOut),3);
        bufp->chgCData(oldp+2,(vlSelf->MXFP4DotProductEngine__DOT__multipliers_2_io_expOut),3);
        bufp->chgCData(oldp+3,(vlSelf->MXFP4DotProductEngine__DOT__multipliers_3_io_expOut),3);
        bufp->chgCData(oldp+4,(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_0),8);
        bufp->chgCData(oldp+5,(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_1),8);
        bufp->chgCData(oldp+6,(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_2),8);
        bufp->chgCData(oldp+7,(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_3),8);
        bufp->chgSData(oldp+8,(((0x300U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_0) 
                                                          >> 7U)))) 
                                           << 8U)) 
                                | (IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_0))),10);
        bufp->chgSData(oldp+9,(((0x300U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_1) 
                                                          >> 7U)))) 
                                           << 8U)) 
                                | (IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_1))),10);
        bufp->chgSData(oldp+10,(((0x300U & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_2) 
                                                           >> 7U)))) 
                                            << 8U)) 
                                 | (IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_2))),10);
        bufp->chgSData(oldp+11,(((0x300U & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_3) 
                                                           >> 7U)))) 
                                            << 8U)) 
                                 | (IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_3))),10);
        bufp->chgCData(oldp+12,(vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT__expMax),3);
    }
    bufp->chgCData(oldp+13,(vlSelf->io_vecA_0),4);
    bufp->chgCData(oldp+14,(vlSelf->io_vecA_1),4);
    bufp->chgCData(oldp+15,(vlSelf->io_vecA_2),4);
    bufp->chgCData(oldp+16,(vlSelf->io_vecA_3),4);
    bufp->chgCData(oldp+17,(vlSelf->io_vecB_0),4);
    bufp->chgCData(oldp+18,(vlSelf->io_vecB_1),4);
    bufp->chgCData(oldp+19,(vlSelf->io_vecB_2),4);
    bufp->chgCData(oldp+20,(vlSelf->io_vecB_3),4);
    bufp->chgCData(oldp+21,(vlSelf->io_scaleA),8);
    bufp->chgCData(oldp+22,(vlSelf->io_scaleB),8);
    bufp->chgSData(oldp+23,(vlSelf->io_dotProduct),10);
    bufp->chgSData(oldp+24,(vlSelf->io_combinedScale),9);
    bufp->chgBit(oldp+25,(vlSelf->clk));
    bufp->chgBit(oldp+26,(vlSelf->reset));
    bufp->chgBit(oldp+27,((1U & (((IData)(vlSelf->io_vecA_0) 
                                  ^ (IData)(vlSelf->io_vecB_0)) 
                                 >> 3U))));
    bufp->chgCData(oldp+28,((0xfU & (((IData)((0U == 
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
    bufp->chgBit(oldp+29,((1U & (((IData)(vlSelf->io_vecA_1) 
                                  ^ (IData)(vlSelf->io_vecB_1)) 
                                 >> 3U))));
    bufp->chgCData(oldp+30,((0xfU & (((IData)((0U == 
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
    bufp->chgBit(oldp+31,((1U & (((IData)(vlSelf->io_vecA_2) 
                                  ^ (IData)(vlSelf->io_vecB_2)) 
                                 >> 3U))));
    bufp->chgCData(oldp+32,((0xfU & (((IData)((0U == 
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
    bufp->chgBit(oldp+33,((1U & (((IData)(vlSelf->io_vecA_3) 
                                  ^ (IData)(vlSelf->io_vecB_3)) 
                                 >> 3U))));
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
    bufp->chgBit(oldp+35,((1U & ((IData)(vlSelf->io_vecA_0) 
                                 >> 3U))));
    bufp->chgCData(oldp+36,((3U & ((IData)(vlSelf->io_vecA_0) 
                                   >> 1U))),2);
    bufp->chgBit(oldp+37,((1U & (IData)(vlSelf->io_vecA_0))));
    bufp->chgBit(oldp+38,((1U & ((IData)(vlSelf->io_vecB_0) 
                                 >> 3U))));
    bufp->chgCData(oldp+39,((3U & ((IData)(vlSelf->io_vecB_0) 
                                   >> 1U))),2);
    bufp->chgBit(oldp+40,((1U & (IData)(vlSelf->io_vecB_0))));
    bufp->chgBit(oldp+41,((IData)((0U == (7U & (IData)(vlSelf->io_vecA_0))))));
    bufp->chgBit(oldp+42,((IData)((0U == (7U & (IData)(vlSelf->io_vecB_0))))));
    bufp->chgCData(oldp+43,(((IData)((0U == (7U & (IData)(vlSelf->io_vecA_0))))
                              ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_0))))),2);
    bufp->chgCData(oldp+44,(((IData)((0U == (7U & (IData)(vlSelf->io_vecB_0))))
                              ? 0U : (2U | (1U & (IData)(vlSelf->io_vecB_0))))),2);
    bufp->chgBit(oldp+45,((1U & ((IData)(vlSelf->io_vecA_1) 
                                 >> 3U))));
    bufp->chgCData(oldp+46,((3U & ((IData)(vlSelf->io_vecA_1) 
                                   >> 1U))),2);
    bufp->chgBit(oldp+47,((1U & (IData)(vlSelf->io_vecA_1))));
    bufp->chgBit(oldp+48,((1U & ((IData)(vlSelf->io_vecB_1) 
                                 >> 3U))));
    bufp->chgCData(oldp+49,((3U & ((IData)(vlSelf->io_vecB_1) 
                                   >> 1U))),2);
    bufp->chgBit(oldp+50,((1U & (IData)(vlSelf->io_vecB_1))));
    bufp->chgBit(oldp+51,((IData)((0U == (7U & (IData)(vlSelf->io_vecA_1))))));
    bufp->chgBit(oldp+52,((IData)((0U == (7U & (IData)(vlSelf->io_vecB_1))))));
    bufp->chgCData(oldp+53,(((IData)((0U == (7U & (IData)(vlSelf->io_vecA_1))))
                              ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_1))))),2);
    bufp->chgCData(oldp+54,(((IData)((0U == (7U & (IData)(vlSelf->io_vecB_1))))
                              ? 0U : (2U | (1U & (IData)(vlSelf->io_vecB_1))))),2);
    bufp->chgBit(oldp+55,((1U & ((IData)(vlSelf->io_vecA_2) 
                                 >> 3U))));
}

void VMXFP4DotProductEngine___024root__trace_chg_0_sub_1(VMXFP4DotProductEngine___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root__trace_chg_0_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 57);
    // Body
    bufp->chgCData(oldp+0,((3U & ((IData)(vlSelf->io_vecA_2) 
                                  >> 1U))),2);
    bufp->chgBit(oldp+1,((1U & (IData)(vlSelf->io_vecA_2))));
    bufp->chgBit(oldp+2,((1U & ((IData)(vlSelf->io_vecB_2) 
                                >> 3U))));
    bufp->chgCData(oldp+3,((3U & ((IData)(vlSelf->io_vecB_2) 
                                  >> 1U))),2);
    bufp->chgBit(oldp+4,((1U & (IData)(vlSelf->io_vecB_2))));
    bufp->chgBit(oldp+5,((IData)((0U == (7U & (IData)(vlSelf->io_vecA_2))))));
    bufp->chgBit(oldp+6,((IData)((0U == (7U & (IData)(vlSelf->io_vecB_2))))));
    bufp->chgCData(oldp+7,(((IData)((0U == (7U & (IData)(vlSelf->io_vecA_2))))
                             ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_2))))),2);
    bufp->chgCData(oldp+8,(((IData)((0U == (7U & (IData)(vlSelf->io_vecB_2))))
                             ? 0U : (2U | (1U & (IData)(vlSelf->io_vecB_2))))),2);
    bufp->chgBit(oldp+9,((1U & ((IData)(vlSelf->io_vecA_3) 
                                >> 3U))));
    bufp->chgCData(oldp+10,((3U & ((IData)(vlSelf->io_vecA_3) 
                                   >> 1U))),2);
    bufp->chgBit(oldp+11,((1U & (IData)(vlSelf->io_vecA_3))));
    bufp->chgBit(oldp+12,((1U & ((IData)(vlSelf->io_vecB_3) 
                                 >> 3U))));
    bufp->chgCData(oldp+13,((3U & ((IData)(vlSelf->io_vecB_3) 
                                   >> 1U))),2);
    bufp->chgBit(oldp+14,((1U & (IData)(vlSelf->io_vecB_3))));
    bufp->chgBit(oldp+15,((IData)((0U == (7U & (IData)(vlSelf->io_vecA_3))))));
    bufp->chgBit(oldp+16,((IData)((0U == (7U & (IData)(vlSelf->io_vecB_3))))));
    bufp->chgCData(oldp+17,(((IData)((0U == (7U & (IData)(vlSelf->io_vecA_3))))
                              ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_3))))),2);
    bufp->chgCData(oldp+18,(((IData)((0U == (7U & (IData)(vlSelf->io_vecB_3))))
                              ? 0U : (2U | (1U & (IData)(vlSelf->io_vecB_3))))),2);
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
