// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMXFP4DotProductEngine.h for the primary calling header

#include "VMXFP4DotProductEngine__pch.h"
#include "VMXFP4DotProductEngine__Syms.h"
#include "VMXFP4DotProductEngine___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VMXFP4DotProductEngine___024root___dump_triggers__ico(VMXFP4DotProductEngine___024root* vlSelf);
#endif  // VL_DEBUG

void VMXFP4DotProductEngine___024root___eval_triggers__ico(VMXFP4DotProductEngine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMXFP4DotProductEngine___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMXFP4DotProductEngine___024root___dump_triggers__act(VMXFP4DotProductEngine___024root* vlSelf);
#endif  // VL_DEBUG

void VMXFP4DotProductEngine___024root___eval_triggers__act(VMXFP4DotProductEngine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VMXFP4DotProductEngine___024root___dump_triggers__act(vlSelf);
    }
#endif
}
