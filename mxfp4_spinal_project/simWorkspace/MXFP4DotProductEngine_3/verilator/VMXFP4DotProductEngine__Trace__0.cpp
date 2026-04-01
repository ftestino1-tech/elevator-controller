// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMXFP4DotProductEngine__Syms.h"


void VMXFP4DotProductEngine___024root__trace_chg_0_sub_0(VMXFP4DotProductEngine___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void VMXFP4DotProductEngine___024root__trace_chg_0_sub_1(VMXFP4DotProductEngine___024root* vlSelf, VerilatedVcd::Buffer* bufp);
void VMXFP4DotProductEngine___024root__trace_chg_0_sub_2(VMXFP4DotProductEngine___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VMXFP4DotProductEngine___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root__trace_chg_0\n"); );
    // Init
    VMXFP4DotProductEngine___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMXFP4DotProductEngine___024root*>(voidSelf);
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VMXFP4DotProductEngine___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
    VMXFP4DotProductEngine___024root__trace_chg_0_sub_1((&vlSymsp->TOP), bufp);
    VMXFP4DotProductEngine___024root__trace_chg_0_sub_2((&vlSymsp->TOP), bufp);
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
        bufp->chgCData(oldp+4,(vlSelf->MXFP4DotProductEngine__DOT__multipliers_4_io_expOut),3);
        bufp->chgCData(oldp+5,(vlSelf->MXFP4DotProductEngine__DOT__multipliers_5_io_expOut),3);
        bufp->chgCData(oldp+6,(vlSelf->MXFP4DotProductEngine__DOT__multipliers_6_io_expOut),3);
        bufp->chgCData(oldp+7,(vlSelf->MXFP4DotProductEngine__DOT__multipliers_7_io_expOut),3);
        bufp->chgCData(oldp+8,(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_0),8);
        bufp->chgCData(oldp+9,(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_1),8);
        bufp->chgCData(oldp+10,(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_2),8);
        bufp->chgCData(oldp+11,(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_3),8);
        bufp->chgCData(oldp+12,(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_4),8);
        bufp->chgCData(oldp+13,(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_5),8);
        bufp->chgCData(oldp+14,(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_6),8);
        bufp->chgCData(oldp+15,(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_7),8);
        bufp->chgSData(oldp+16,(((0x700U & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_0) 
                                                           >> 7U)))) 
                                            << 8U)) 
                                 | (IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_0))),11);
        bufp->chgSData(oldp+17,(((0x700U & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_1) 
                                                           >> 7U)))) 
                                            << 8U)) 
                                 | (IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_1))),11);
        bufp->chgSData(oldp+18,(((0x700U & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_2) 
                                                           >> 7U)))) 
                                            << 8U)) 
                                 | (IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_2))),11);
        bufp->chgSData(oldp+19,(((0x700U & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_3) 
                                                           >> 7U)))) 
                                            << 8U)) 
                                 | (IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_3))),11);
        bufp->chgSData(oldp+20,(((0x700U & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_4) 
                                                           >> 7U)))) 
                                            << 8U)) 
                                 | (IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_4))),11);
        bufp->chgSData(oldp+21,(((0x700U & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_5) 
                                                           >> 7U)))) 
                                            << 8U)) 
                                 | (IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_5))),11);
        bufp->chgSData(oldp+22,(((0x700U & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_6) 
                                                           >> 7U)))) 
                                            << 8U)) 
                                 | (IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_6))),11);
        bufp->chgSData(oldp+23,(((0x700U & ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_7) 
                                                           >> 7U)))) 
                                            << 8U)) 
                                 | (IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_7))),11);
        bufp->chgCData(oldp+24,(vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT__expMax),3);
    }
    bufp->chgCData(oldp+25,(vlSelf->io_vecA_0),4);
    bufp->chgCData(oldp+26,(vlSelf->io_vecA_1),4);
    bufp->chgCData(oldp+27,(vlSelf->io_vecA_2),4);
    bufp->chgCData(oldp+28,(vlSelf->io_vecA_3),4);
    bufp->chgCData(oldp+29,(vlSelf->io_vecA_4),4);
    bufp->chgCData(oldp+30,(vlSelf->io_vecA_5),4);
    bufp->chgCData(oldp+31,(vlSelf->io_vecA_6),4);
    bufp->chgCData(oldp+32,(vlSelf->io_vecA_7),4);
    bufp->chgCData(oldp+33,(vlSelf->io_vecB_0),4);
    bufp->chgCData(oldp+34,(vlSelf->io_vecB_1),4);
    bufp->chgCData(oldp+35,(vlSelf->io_vecB_2),4);
    bufp->chgCData(oldp+36,(vlSelf->io_vecB_3),4);
    bufp->chgCData(oldp+37,(vlSelf->io_vecB_4),4);
    bufp->chgCData(oldp+38,(vlSelf->io_vecB_5),4);
    bufp->chgCData(oldp+39,(vlSelf->io_vecB_6),4);
    bufp->chgCData(oldp+40,(vlSelf->io_vecB_7),4);
    bufp->chgCData(oldp+41,(vlSelf->io_scaleA),8);
    bufp->chgCData(oldp+42,(vlSelf->io_scaleB),8);
    bufp->chgSData(oldp+43,(vlSelf->io_dotProduct),11);
    bufp->chgSData(oldp+44,(vlSelf->io_combinedScale),9);
    bufp->chgBit(oldp+45,(vlSelf->clk));
    bufp->chgBit(oldp+46,(vlSelf->reset));
    bufp->chgBit(oldp+47,((1U & (((IData)(vlSelf->io_vecA_0) 
                                  ^ (IData)(vlSelf->io_vecB_0)) 
                                 >> 3U))));
    bufp->chgCData(oldp+48,((0xfU & (((IData)((0U == 
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
    bufp->chgBit(oldp+49,((1U & (((IData)(vlSelf->io_vecA_1) 
                                  ^ (IData)(vlSelf->io_vecB_1)) 
                                 >> 3U))));
    bufp->chgCData(oldp+50,((0xfU & (((IData)((0U == 
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
    bufp->chgBit(oldp+51,((1U & (((IData)(vlSelf->io_vecA_2) 
                                  ^ (IData)(vlSelf->io_vecB_2)) 
                                 >> 3U))));
    bufp->chgCData(oldp+52,((0xfU & (((IData)((0U == 
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
    bufp->chgBit(oldp+53,((1U & (((IData)(vlSelf->io_vecA_3) 
                                  ^ (IData)(vlSelf->io_vecB_3)) 
                                 >> 3U))));
    bufp->chgCData(oldp+54,((0xfU & (((IData)((0U == 
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
    bufp->chgBit(oldp+55,((1U & (((IData)(vlSelf->io_vecA_4) 
                                  ^ (IData)(vlSelf->io_vecB_4)) 
                                 >> 3U))));
    bufp->chgCData(oldp+56,((0xfU & (((IData)((0U == 
                                               (7U 
                                                & (IData)(vlSelf->io_vecA_4))))
                                       ? 0U : (2U | 
                                               (1U 
                                                & (IData)(vlSelf->io_vecA_4)))) 
                                     * ((IData)((0U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->io_vecB_4))))
                                         ? 0U : (2U 
                                                 | (1U 
                                                    & (IData)(vlSelf->io_vecB_4))))))),4);
    bufp->chgBit(oldp+57,((1U & (((IData)(vlSelf->io_vecA_5) 
                                  ^ (IData)(vlSelf->io_vecB_5)) 
                                 >> 3U))));
    bufp->chgCData(oldp+58,((0xfU & (((IData)((0U == 
                                               (7U 
                                                & (IData)(vlSelf->io_vecA_5))))
                                       ? 0U : (2U | 
                                               (1U 
                                                & (IData)(vlSelf->io_vecA_5)))) 
                                     * ((IData)((0U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->io_vecB_5))))
                                         ? 0U : (2U 
                                                 | (1U 
                                                    & (IData)(vlSelf->io_vecB_5))))))),4);
    bufp->chgBit(oldp+59,((1U & (((IData)(vlSelf->io_vecA_6) 
                                  ^ (IData)(vlSelf->io_vecB_6)) 
                                 >> 3U))));
    bufp->chgCData(oldp+60,((0xfU & (((IData)((0U == 
                                               (7U 
                                                & (IData)(vlSelf->io_vecA_6))))
                                       ? 0U : (2U | 
                                               (1U 
                                                & (IData)(vlSelf->io_vecA_6)))) 
                                     * ((IData)((0U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->io_vecB_6))))
                                         ? 0U : (2U 
                                                 | (1U 
                                                    & (IData)(vlSelf->io_vecB_6))))))),4);
}

void VMXFP4DotProductEngine___024root__trace_chg_0_sub_1(VMXFP4DotProductEngine___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root__trace_chg_0_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 62);
    // Body
    bufp->chgBit(oldp+0,((1U & (((IData)(vlSelf->io_vecA_7) 
                                 ^ (IData)(vlSelf->io_vecB_7)) 
                                >> 3U))));
    bufp->chgCData(oldp+1,((0xfU & (((IData)((0U == 
                                              (7U & (IData)(vlSelf->io_vecA_7))))
                                      ? 0U : (2U | 
                                              (1U & (IData)(vlSelf->io_vecA_7)))) 
                                    * ((IData)((0U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->io_vecB_7))))
                                        ? 0U : (2U 
                                                | (1U 
                                                   & (IData)(vlSelf->io_vecB_7))))))),4);
    bufp->chgBit(oldp+2,((1U & ((IData)(vlSelf->io_vecA_0) 
                                >> 3U))));
    bufp->chgCData(oldp+3,((3U & ((IData)(vlSelf->io_vecA_0) 
                                  >> 1U))),2);
    bufp->chgBit(oldp+4,((1U & (IData)(vlSelf->io_vecA_0))));
    bufp->chgBit(oldp+5,((1U & ((IData)(vlSelf->io_vecB_0) 
                                >> 3U))));
    bufp->chgCData(oldp+6,((3U & ((IData)(vlSelf->io_vecB_0) 
                                  >> 1U))),2);
    bufp->chgBit(oldp+7,((1U & (IData)(vlSelf->io_vecB_0))));
    bufp->chgBit(oldp+8,((IData)((0U == (7U & (IData)(vlSelf->io_vecA_0))))));
    bufp->chgBit(oldp+9,((IData)((0U == (7U & (IData)(vlSelf->io_vecB_0))))));
    bufp->chgCData(oldp+10,(((IData)((0U == (7U & (IData)(vlSelf->io_vecA_0))))
                              ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_0))))),2);
    bufp->chgCData(oldp+11,(((IData)((0U == (7U & (IData)(vlSelf->io_vecB_0))))
                              ? 0U : (2U | (1U & (IData)(vlSelf->io_vecB_0))))),2);
    bufp->chgBit(oldp+12,((1U & ((IData)(vlSelf->io_vecA_1) 
                                 >> 3U))));
    bufp->chgCData(oldp+13,((3U & ((IData)(vlSelf->io_vecA_1) 
                                   >> 1U))),2);
    bufp->chgBit(oldp+14,((1U & (IData)(vlSelf->io_vecA_1))));
    bufp->chgBit(oldp+15,((1U & ((IData)(vlSelf->io_vecB_1) 
                                 >> 3U))));
    bufp->chgCData(oldp+16,((3U & ((IData)(vlSelf->io_vecB_1) 
                                   >> 1U))),2);
    bufp->chgBit(oldp+17,((1U & (IData)(vlSelf->io_vecB_1))));
    bufp->chgBit(oldp+18,((IData)((0U == (7U & (IData)(vlSelf->io_vecA_1))))));
    bufp->chgBit(oldp+19,((IData)((0U == (7U & (IData)(vlSelf->io_vecB_1))))));
    bufp->chgCData(oldp+20,(((IData)((0U == (7U & (IData)(vlSelf->io_vecA_1))))
                              ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_1))))),2);
    bufp->chgCData(oldp+21,(((IData)((0U == (7U & (IData)(vlSelf->io_vecB_1))))
                              ? 0U : (2U | (1U & (IData)(vlSelf->io_vecB_1))))),2);
    bufp->chgBit(oldp+22,((1U & ((IData)(vlSelf->io_vecA_2) 
                                 >> 3U))));
    bufp->chgCData(oldp+23,((3U & ((IData)(vlSelf->io_vecA_2) 
                                   >> 1U))),2);
    bufp->chgBit(oldp+24,((1U & (IData)(vlSelf->io_vecA_2))));
    bufp->chgBit(oldp+25,((1U & ((IData)(vlSelf->io_vecB_2) 
                                 >> 3U))));
    bufp->chgCData(oldp+26,((3U & ((IData)(vlSelf->io_vecB_2) 
                                   >> 1U))),2);
    bufp->chgBit(oldp+27,((1U & (IData)(vlSelf->io_vecB_2))));
    bufp->chgBit(oldp+28,((IData)((0U == (7U & (IData)(vlSelf->io_vecA_2))))));
    bufp->chgBit(oldp+29,((IData)((0U == (7U & (IData)(vlSelf->io_vecB_2))))));
    bufp->chgCData(oldp+30,(((IData)((0U == (7U & (IData)(vlSelf->io_vecA_2))))
                              ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_2))))),2);
    bufp->chgCData(oldp+31,(((IData)((0U == (7U & (IData)(vlSelf->io_vecB_2))))
                              ? 0U : (2U | (1U & (IData)(vlSelf->io_vecB_2))))),2);
    bufp->chgBit(oldp+32,((1U & ((IData)(vlSelf->io_vecA_3) 
                                 >> 3U))));
    bufp->chgCData(oldp+33,((3U & ((IData)(vlSelf->io_vecA_3) 
                                   >> 1U))),2);
    bufp->chgBit(oldp+34,((1U & (IData)(vlSelf->io_vecA_3))));
    bufp->chgBit(oldp+35,((1U & ((IData)(vlSelf->io_vecB_3) 
                                 >> 3U))));
    bufp->chgCData(oldp+36,((3U & ((IData)(vlSelf->io_vecB_3) 
                                   >> 1U))),2);
    bufp->chgBit(oldp+37,((1U & (IData)(vlSelf->io_vecB_3))));
    bufp->chgBit(oldp+38,((IData)((0U == (7U & (IData)(vlSelf->io_vecA_3))))));
    bufp->chgBit(oldp+39,((IData)((0U == (7U & (IData)(vlSelf->io_vecB_3))))));
    bufp->chgCData(oldp+40,(((IData)((0U == (7U & (IData)(vlSelf->io_vecA_3))))
                              ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_3))))),2);
    bufp->chgCData(oldp+41,(((IData)((0U == (7U & (IData)(vlSelf->io_vecB_3))))
                              ? 0U : (2U | (1U & (IData)(vlSelf->io_vecB_3))))),2);
    bufp->chgBit(oldp+42,((1U & ((IData)(vlSelf->io_vecA_4) 
                                 >> 3U))));
    bufp->chgCData(oldp+43,((3U & ((IData)(vlSelf->io_vecA_4) 
                                   >> 1U))),2);
    bufp->chgBit(oldp+44,((1U & (IData)(vlSelf->io_vecA_4))));
    bufp->chgBit(oldp+45,((1U & ((IData)(vlSelf->io_vecB_4) 
                                 >> 3U))));
    bufp->chgCData(oldp+46,((3U & ((IData)(vlSelf->io_vecB_4) 
                                   >> 1U))),2);
    bufp->chgBit(oldp+47,((1U & (IData)(vlSelf->io_vecB_4))));
    bufp->chgBit(oldp+48,((IData)((0U == (7U & (IData)(vlSelf->io_vecA_4))))));
    bufp->chgBit(oldp+49,((IData)((0U == (7U & (IData)(vlSelf->io_vecB_4))))));
}

void VMXFP4DotProductEngine___024root__trace_chg_0_sub_2(VMXFP4DotProductEngine___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root__trace_chg_0_sub_2\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 112);
    // Body
    bufp->chgCData(oldp+0,(((IData)((0U == (7U & (IData)(vlSelf->io_vecA_4))))
                             ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_4))))),2);
    bufp->chgCData(oldp+1,(((IData)((0U == (7U & (IData)(vlSelf->io_vecB_4))))
                             ? 0U : (2U | (1U & (IData)(vlSelf->io_vecB_4))))),2);
    bufp->chgBit(oldp+2,((1U & ((IData)(vlSelf->io_vecA_5) 
                                >> 3U))));
    bufp->chgCData(oldp+3,((3U & ((IData)(vlSelf->io_vecA_5) 
                                  >> 1U))),2);
    bufp->chgBit(oldp+4,((1U & (IData)(vlSelf->io_vecA_5))));
    bufp->chgBit(oldp+5,((1U & ((IData)(vlSelf->io_vecB_5) 
                                >> 3U))));
    bufp->chgCData(oldp+6,((3U & ((IData)(vlSelf->io_vecB_5) 
                                  >> 1U))),2);
    bufp->chgBit(oldp+7,((1U & (IData)(vlSelf->io_vecB_5))));
    bufp->chgBit(oldp+8,((IData)((0U == (7U & (IData)(vlSelf->io_vecA_5))))));
    bufp->chgBit(oldp+9,((IData)((0U == (7U & (IData)(vlSelf->io_vecB_5))))));
    bufp->chgCData(oldp+10,(((IData)((0U == (7U & (IData)(vlSelf->io_vecA_5))))
                              ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_5))))),2);
    bufp->chgCData(oldp+11,(((IData)((0U == (7U & (IData)(vlSelf->io_vecB_5))))
                              ? 0U : (2U | (1U & (IData)(vlSelf->io_vecB_5))))),2);
    bufp->chgBit(oldp+12,((1U & ((IData)(vlSelf->io_vecA_6) 
                                 >> 3U))));
    bufp->chgCData(oldp+13,((3U & ((IData)(vlSelf->io_vecA_6) 
                                   >> 1U))),2);
    bufp->chgBit(oldp+14,((1U & (IData)(vlSelf->io_vecA_6))));
    bufp->chgBit(oldp+15,((1U & ((IData)(vlSelf->io_vecB_6) 
                                 >> 3U))));
    bufp->chgCData(oldp+16,((3U & ((IData)(vlSelf->io_vecB_6) 
                                   >> 1U))),2);
    bufp->chgBit(oldp+17,((1U & (IData)(vlSelf->io_vecB_6))));
    bufp->chgBit(oldp+18,((IData)((0U == (7U & (IData)(vlSelf->io_vecA_6))))));
    bufp->chgBit(oldp+19,((IData)((0U == (7U & (IData)(vlSelf->io_vecB_6))))));
    bufp->chgCData(oldp+20,(((IData)((0U == (7U & (IData)(vlSelf->io_vecA_6))))
                              ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_6))))),2);
    bufp->chgCData(oldp+21,(((IData)((0U == (7U & (IData)(vlSelf->io_vecB_6))))
                              ? 0U : (2U | (1U & (IData)(vlSelf->io_vecB_6))))),2);
    bufp->chgBit(oldp+22,((1U & ((IData)(vlSelf->io_vecA_7) 
                                 >> 3U))));
    bufp->chgCData(oldp+23,((3U & ((IData)(vlSelf->io_vecA_7) 
                                   >> 1U))),2);
    bufp->chgBit(oldp+24,((1U & (IData)(vlSelf->io_vecA_7))));
    bufp->chgBit(oldp+25,((1U & ((IData)(vlSelf->io_vecB_7) 
                                 >> 3U))));
    bufp->chgCData(oldp+26,((3U & ((IData)(vlSelf->io_vecB_7) 
                                   >> 1U))),2);
    bufp->chgBit(oldp+27,((1U & (IData)(vlSelf->io_vecB_7))));
    bufp->chgBit(oldp+28,((IData)((0U == (7U & (IData)(vlSelf->io_vecA_7))))));
    bufp->chgBit(oldp+29,((IData)((0U == (7U & (IData)(vlSelf->io_vecB_7))))));
    bufp->chgCData(oldp+30,(((IData)((0U == (7U & (IData)(vlSelf->io_vecA_7))))
                              ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_7))))),2);
    bufp->chgCData(oldp+31,(((IData)((0U == (7U & (IData)(vlSelf->io_vecB_7))))
                              ? 0U : (2U | (1U & (IData)(vlSelf->io_vecB_7))))),2);
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
