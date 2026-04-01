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
    tracep->declBus(c+26,0,"io_vecA_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+27,0,"io_vecA_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+28,0,"io_vecA_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+29,0,"io_vecA_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+30,0,"io_vecA_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+31,0,"io_vecA_5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+32,0,"io_vecA_6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+33,0,"io_vecA_7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+34,0,"io_vecB_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+35,0,"io_vecB_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+36,0,"io_vecB_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+37,0,"io_vecB_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+38,0,"io_vecB_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+39,0,"io_vecB_5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+40,0,"io_vecB_6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+41,0,"io_vecB_7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+42,0,"io_scaleA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+43,0,"io_scaleB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+44,0,"io_dotProduct",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+45,0,"io_combinedScale",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+46,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("MXFP4DotProductEngine", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+26,0,"io_vecA_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+27,0,"io_vecA_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+28,0,"io_vecA_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+29,0,"io_vecA_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+30,0,"io_vecA_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+31,0,"io_vecA_5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+32,0,"io_vecA_6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+33,0,"io_vecA_7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+34,0,"io_vecB_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+35,0,"io_vecB_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+36,0,"io_vecB_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+37,0,"io_vecB_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+38,0,"io_vecB_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+39,0,"io_vecB_5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+40,0,"io_vecB_6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+41,0,"io_vecB_7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+42,0,"io_scaleA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+43,0,"io_scaleB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+44,0,"io_dotProduct",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+45,0,"io_combinedScale",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+46,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"multipliers_0_io_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1,0,"multipliers_0_io_expOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+49,0,"multipliers_0_io_mantOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+50,0,"multipliers_1_io_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2,0,"multipliers_1_io_expOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+51,0,"multipliers_1_io_mantOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+52,0,"multipliers_2_io_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+3,0,"multipliers_2_io_expOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+53,0,"multipliers_2_io_mantOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+54,0,"multipliers_3_io_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+4,0,"multipliers_3_io_expOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+55,0,"multipliers_3_io_mantOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+56,0,"multipliers_4_io_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+5,0,"multipliers_4_io_expOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+57,0,"multipliers_4_io_mantOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+58,0,"multipliers_5_io_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+6,0,"multipliers_5_io_expOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+59,0,"multipliers_5_io_mantOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+60,0,"multipliers_6_io_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+7,0,"multipliers_6_io_expOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+61,0,"multipliers_6_io_mantOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+62,0,"multipliers_7_io_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+8,0,"multipliers_7_io_expOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+63,0,"multipliers_7_io_mantOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+9,0,"aligner_io_aligned_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+10,0,"aligner_io_aligned_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"aligner_io_aligned_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,0,"aligner_io_aligned_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+13,0,"aligner_io_aligned_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"aligner_io_aligned_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"aligner_io_aligned_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"aligner_io_aligned_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+44,0,"adderTree_1_io_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+44,0,"scaleIntegrator_io_dotProduct",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+45,0,"scaleIntegrator_io_combinedScale",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("adderTree_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+9,0,"io_inputs_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+10,0,"io_inputs_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"io_inputs_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,0,"io_inputs_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+13,0,"io_inputs_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"io_inputs_5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"io_inputs_6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"io_inputs_7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+44,0,"io_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+46,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"extInputs_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+18,0,"extInputs_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+19,0,"extInputs_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+20,0,"extInputs_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+21,0,"extInputs_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+22,0,"extInputs_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+23,0,"extInputs_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+24,0,"extInputs_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("aligner", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+48,0,"io_signs_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+50,0,"io_signs_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+52,0,"io_signs_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+54,0,"io_signs_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+56,0,"io_signs_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+58,0,"io_signs_5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+60,0,"io_signs_6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+62,0,"io_signs_7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1,0,"io_exps_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2,0,"io_exps_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+3,0,"io_exps_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+4,0,"io_exps_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+5,0,"io_exps_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+6,0,"io_exps_5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+7,0,"io_exps_6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+8,0,"io_exps_7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+49,0,"io_mants_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+51,0,"io_mants_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+53,0,"io_mants_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+55,0,"io_mants_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+57,0,"io_mants_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+59,0,"io_mants_5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+61,0,"io_mants_6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+63,0,"io_mants_7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+9,0,"io_aligned_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+10,0,"io_aligned_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"io_aligned_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,0,"io_aligned_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+13,0,"io_aligned_4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"io_aligned_5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"io_aligned_6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"io_aligned_7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"expMax",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("multipliers_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+26,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+34,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+48,0,"io_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1,0,"io_expOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+49,0,"io_mantOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+64,0,"signA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"expA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+66,0,"mantA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"signB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"expB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+69,0,"mantB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"isZeroA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"isZeroB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"mantEffA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+73,0,"mantEffB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("multipliers_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+27,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+35,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+50,0,"io_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2,0,"io_expOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+51,0,"io_mantOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+74,0,"signA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"expA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+76,0,"mantA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"signB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"expB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+79,0,"mantB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"isZeroA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"isZeroB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+82,0,"mantEffA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+83,0,"mantEffB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("multipliers_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+28,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+36,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+52,0,"io_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+3,0,"io_expOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+53,0,"io_mantOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+84,0,"signA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"expA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+86,0,"mantA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"signB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"expB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+89,0,"mantB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"isZeroA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"isZeroB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"mantEffA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+93,0,"mantEffB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("multipliers_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+29,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+37,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+54,0,"io_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+4,0,"io_expOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+55,0,"io_mantOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+94,0,"signA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"expA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+96,0,"mantA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"signB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"expB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+99,0,"mantB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"isZeroA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"isZeroB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+102,0,"mantEffA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+103,0,"mantEffB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("multipliers_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+30,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+38,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+56,0,"io_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+5,0,"io_expOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+57,0,"io_mantOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+104,0,"signA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"expA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+106,0,"mantA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"signB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"expB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+109,0,"mantB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"isZeroA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"isZeroB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+112,0,"mantEffA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+113,0,"mantEffB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("multipliers_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+31,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+39,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+58,0,"io_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+6,0,"io_expOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+59,0,"io_mantOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+114,0,"signA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"expA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+116,0,"mantA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"signB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"expB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+119,0,"mantB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"isZeroA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"isZeroB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"mantEffA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+123,0,"mantEffB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("multipliers_6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+32,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+40,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+60,0,"io_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+7,0,"io_expOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+61,0,"io_mantOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+124,0,"signA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+125,0,"expA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+126,0,"mantA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"signB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"expB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+129,0,"mantB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"isZeroA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"isZeroB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+132,0,"mantEffA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+133,0,"mantEffB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("multipliers_7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+33,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+41,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+62,0,"io_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+8,0,"io_expOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+63,0,"io_mantOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void VMXFP4DotProductEngine___024root__trace_init_sub__TOP__1(VMXFP4DotProductEngine___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root__trace_init_sub__TOP__1\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+134,0,"signA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+135,0,"expA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+136,0,"mantA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"signB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+138,0,"expB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+139,0,"mantB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"isZeroA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"isZeroB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+142,0,"mantEffA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+143,0,"mantEffB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("scaleIntegrator", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+44,0,"io_treeSum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+42,0,"io_scaleA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+43,0,"io_scaleB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+44,0,"io_dotProduct",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+45,0,"io_combinedScale",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VMXFP4DotProductEngine___024root__trace_init_top(VMXFP4DotProductEngine___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root__trace_init_top\n"); );
    // Body
    VMXFP4DotProductEngine___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    VMXFP4DotProductEngine___024root__trace_init_sub__TOP__1(vlSelf, tracep);
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
VL_ATTR_COLD void VMXFP4DotProductEngine___024root__trace_full_0_sub_1(VMXFP4DotProductEngine___024root* vlSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VMXFP4DotProductEngine___024root__trace_full_0_sub_2(VMXFP4DotProductEngine___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VMXFP4DotProductEngine___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root__trace_full_0\n"); );
    // Init
    VMXFP4DotProductEngine___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMXFP4DotProductEngine___024root*>(voidSelf);
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VMXFP4DotProductEngine___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
    VMXFP4DotProductEngine___024root__trace_full_0_sub_1((&vlSymsp->TOP), bufp);
    VMXFP4DotProductEngine___024root__trace_full_0_sub_2((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VMXFP4DotProductEngine___024root__trace_full_0_sub_0(VMXFP4DotProductEngine___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->MXFP4DotProductEngine__DOT__multipliers_0_io_expOut),3);
    bufp->fullCData(oldp+2,(vlSelf->MXFP4DotProductEngine__DOT__multipliers_1_io_expOut),3);
    bufp->fullCData(oldp+3,(vlSelf->MXFP4DotProductEngine__DOT__multipliers_2_io_expOut),3);
    bufp->fullCData(oldp+4,(vlSelf->MXFP4DotProductEngine__DOT__multipliers_3_io_expOut),3);
    bufp->fullCData(oldp+5,(vlSelf->MXFP4DotProductEngine__DOT__multipliers_4_io_expOut),3);
    bufp->fullCData(oldp+6,(vlSelf->MXFP4DotProductEngine__DOT__multipliers_5_io_expOut),3);
    bufp->fullCData(oldp+7,(vlSelf->MXFP4DotProductEngine__DOT__multipliers_6_io_expOut),3);
    bufp->fullCData(oldp+8,(vlSelf->MXFP4DotProductEngine__DOT__multipliers_7_io_expOut),3);
    bufp->fullCData(oldp+9,(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_0),8);
    bufp->fullCData(oldp+10,(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_1),8);
    bufp->fullCData(oldp+11,(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_2),8);
    bufp->fullCData(oldp+12,(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_3),8);
    bufp->fullCData(oldp+13,(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_4),8);
    bufp->fullCData(oldp+14,(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_5),8);
    bufp->fullCData(oldp+15,(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_6),8);
    bufp->fullCData(oldp+16,(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_7),8);
    bufp->fullSData(oldp+17,(((0x700U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_0) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_0))),11);
    bufp->fullSData(oldp+18,(((0x700U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_1) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_1))),11);
    bufp->fullSData(oldp+19,(((0x700U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_2) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_2))),11);
    bufp->fullSData(oldp+20,(((0x700U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_3) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_3))),11);
    bufp->fullSData(oldp+21,(((0x700U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_4) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_4))),11);
    bufp->fullSData(oldp+22,(((0x700U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_5) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_5))),11);
    bufp->fullSData(oldp+23,(((0x700U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_6) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_6))),11);
    bufp->fullSData(oldp+24,(((0x700U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_7) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_7))),11);
    bufp->fullCData(oldp+25,(vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT__expMax),3);
    bufp->fullCData(oldp+26,(vlSelf->io_vecA_0),4);
    bufp->fullCData(oldp+27,(vlSelf->io_vecA_1),4);
    bufp->fullCData(oldp+28,(vlSelf->io_vecA_2),4);
    bufp->fullCData(oldp+29,(vlSelf->io_vecA_3),4);
    bufp->fullCData(oldp+30,(vlSelf->io_vecA_4),4);
    bufp->fullCData(oldp+31,(vlSelf->io_vecA_5),4);
    bufp->fullCData(oldp+32,(vlSelf->io_vecA_6),4);
    bufp->fullCData(oldp+33,(vlSelf->io_vecA_7),4);
    bufp->fullCData(oldp+34,(vlSelf->io_vecB_0),4);
    bufp->fullCData(oldp+35,(vlSelf->io_vecB_1),4);
    bufp->fullCData(oldp+36,(vlSelf->io_vecB_2),4);
    bufp->fullCData(oldp+37,(vlSelf->io_vecB_3),4);
    bufp->fullCData(oldp+38,(vlSelf->io_vecB_4),4);
    bufp->fullCData(oldp+39,(vlSelf->io_vecB_5),4);
    bufp->fullCData(oldp+40,(vlSelf->io_vecB_6),4);
    bufp->fullCData(oldp+41,(vlSelf->io_vecB_7),4);
    bufp->fullCData(oldp+42,(vlSelf->io_scaleA),8);
    bufp->fullCData(oldp+43,(vlSelf->io_scaleB),8);
    bufp->fullSData(oldp+44,(vlSelf->io_dotProduct),11);
    bufp->fullSData(oldp+45,(vlSelf->io_combinedScale),9);
    bufp->fullBit(oldp+46,(vlSelf->clk));
    bufp->fullBit(oldp+47,(vlSelf->reset));
    bufp->fullBit(oldp+48,((1U & (((IData)(vlSelf->io_vecA_0) 
                                   ^ (IData)(vlSelf->io_vecB_0)) 
                                  >> 3U))));
    bufp->fullCData(oldp+49,((0xfU & (((IData)((0U 
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
    bufp->fullBit(oldp+50,((1U & (((IData)(vlSelf->io_vecA_1) 
                                   ^ (IData)(vlSelf->io_vecB_1)) 
                                  >> 3U))));
    bufp->fullCData(oldp+51,((0xfU & (((IData)((0U 
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
    bufp->fullBit(oldp+52,((1U & (((IData)(vlSelf->io_vecA_2) 
                                   ^ (IData)(vlSelf->io_vecB_2)) 
                                  >> 3U))));
    bufp->fullCData(oldp+53,((0xfU & (((IData)((0U 
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
    bufp->fullBit(oldp+54,((1U & (((IData)(vlSelf->io_vecA_3) 
                                   ^ (IData)(vlSelf->io_vecB_3)) 
                                  >> 3U))));
    bufp->fullCData(oldp+55,((0xfU & (((IData)((0U 
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
    bufp->fullBit(oldp+56,((1U & (((IData)(vlSelf->io_vecA_4) 
                                   ^ (IData)(vlSelf->io_vecB_4)) 
                                  >> 3U))));
    bufp->fullCData(oldp+57,((0xfU & (((IData)((0U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->io_vecA_4))))
                                        ? 0U : (2U 
                                                | (1U 
                                                   & (IData)(vlSelf->io_vecA_4)))) 
                                      * ((IData)((0U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->io_vecB_4))))
                                          ? 0U : (2U 
                                                  | (1U 
                                                     & (IData)(vlSelf->io_vecB_4))))))),4);
    bufp->fullBit(oldp+58,((1U & (((IData)(vlSelf->io_vecA_5) 
                                   ^ (IData)(vlSelf->io_vecB_5)) 
                                  >> 3U))));
    bufp->fullCData(oldp+59,((0xfU & (((IData)((0U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->io_vecA_5))))
                                        ? 0U : (2U 
                                                | (1U 
                                                   & (IData)(vlSelf->io_vecA_5)))) 
                                      * ((IData)((0U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->io_vecB_5))))
                                          ? 0U : (2U 
                                                  | (1U 
                                                     & (IData)(vlSelf->io_vecB_5))))))),4);
    bufp->fullBit(oldp+60,((1U & (((IData)(vlSelf->io_vecA_6) 
                                   ^ (IData)(vlSelf->io_vecB_6)) 
                                  >> 3U))));
    bufp->fullCData(oldp+61,((0xfU & (((IData)((0U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->io_vecA_6))))
                                        ? 0U : (2U 
                                                | (1U 
                                                   & (IData)(vlSelf->io_vecA_6)))) 
                                      * ((IData)((0U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->io_vecB_6))))
                                          ? 0U : (2U 
                                                  | (1U 
                                                     & (IData)(vlSelf->io_vecB_6))))))),4);
}

VL_ATTR_COLD void VMXFP4DotProductEngine___024root__trace_full_0_sub_1(VMXFP4DotProductEngine___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root__trace_full_0_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+62,((1U & (((IData)(vlSelf->io_vecA_7) 
                                   ^ (IData)(vlSelf->io_vecB_7)) 
                                  >> 3U))));
    bufp->fullCData(oldp+63,((0xfU & (((IData)((0U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->io_vecA_7))))
                                        ? 0U : (2U 
                                                | (1U 
                                                   & (IData)(vlSelf->io_vecA_7)))) 
                                      * ((IData)((0U 
                                                  == 
                                                  (7U 
                                                   & (IData)(vlSelf->io_vecB_7))))
                                          ? 0U : (2U 
                                                  | (1U 
                                                     & (IData)(vlSelf->io_vecB_7))))))),4);
    bufp->fullBit(oldp+64,((1U & ((IData)(vlSelf->io_vecA_0) 
                                  >> 3U))));
    bufp->fullCData(oldp+65,((3U & ((IData)(vlSelf->io_vecA_0) 
                                    >> 1U))),2);
    bufp->fullBit(oldp+66,((1U & (IData)(vlSelf->io_vecA_0))));
    bufp->fullBit(oldp+67,((1U & ((IData)(vlSelf->io_vecB_0) 
                                  >> 3U))));
    bufp->fullCData(oldp+68,((3U & ((IData)(vlSelf->io_vecB_0) 
                                    >> 1U))),2);
    bufp->fullBit(oldp+69,((1U & (IData)(vlSelf->io_vecB_0))));
    bufp->fullBit(oldp+70,((IData)((0U == (7U & (IData)(vlSelf->io_vecA_0))))));
    bufp->fullBit(oldp+71,((IData)((0U == (7U & (IData)(vlSelf->io_vecB_0))))));
    bufp->fullCData(oldp+72,(((IData)((0U == (7U & (IData)(vlSelf->io_vecA_0))))
                               ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_0))))),2);
    bufp->fullCData(oldp+73,(((IData)((0U == (7U & (IData)(vlSelf->io_vecB_0))))
                               ? 0U : (2U | (1U & (IData)(vlSelf->io_vecB_0))))),2);
    bufp->fullBit(oldp+74,((1U & ((IData)(vlSelf->io_vecA_1) 
                                  >> 3U))));
    bufp->fullCData(oldp+75,((3U & ((IData)(vlSelf->io_vecA_1) 
                                    >> 1U))),2);
    bufp->fullBit(oldp+76,((1U & (IData)(vlSelf->io_vecA_1))));
    bufp->fullBit(oldp+77,((1U & ((IData)(vlSelf->io_vecB_1) 
                                  >> 3U))));
    bufp->fullCData(oldp+78,((3U & ((IData)(vlSelf->io_vecB_1) 
                                    >> 1U))),2);
    bufp->fullBit(oldp+79,((1U & (IData)(vlSelf->io_vecB_1))));
    bufp->fullBit(oldp+80,((IData)((0U == (7U & (IData)(vlSelf->io_vecA_1))))));
    bufp->fullBit(oldp+81,((IData)((0U == (7U & (IData)(vlSelf->io_vecB_1))))));
    bufp->fullCData(oldp+82,(((IData)((0U == (7U & (IData)(vlSelf->io_vecA_1))))
                               ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_1))))),2);
    bufp->fullCData(oldp+83,(((IData)((0U == (7U & (IData)(vlSelf->io_vecB_1))))
                               ? 0U : (2U | (1U & (IData)(vlSelf->io_vecB_1))))),2);
    bufp->fullBit(oldp+84,((1U & ((IData)(vlSelf->io_vecA_2) 
                                  >> 3U))));
    bufp->fullCData(oldp+85,((3U & ((IData)(vlSelf->io_vecA_2) 
                                    >> 1U))),2);
    bufp->fullBit(oldp+86,((1U & (IData)(vlSelf->io_vecA_2))));
    bufp->fullBit(oldp+87,((1U & ((IData)(vlSelf->io_vecB_2) 
                                  >> 3U))));
    bufp->fullCData(oldp+88,((3U & ((IData)(vlSelf->io_vecB_2) 
                                    >> 1U))),2);
    bufp->fullBit(oldp+89,((1U & (IData)(vlSelf->io_vecB_2))));
    bufp->fullBit(oldp+90,((IData)((0U == (7U & (IData)(vlSelf->io_vecA_2))))));
    bufp->fullBit(oldp+91,((IData)((0U == (7U & (IData)(vlSelf->io_vecB_2))))));
    bufp->fullCData(oldp+92,(((IData)((0U == (7U & (IData)(vlSelf->io_vecA_2))))
                               ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_2))))),2);
    bufp->fullCData(oldp+93,(((IData)((0U == (7U & (IData)(vlSelf->io_vecB_2))))
                               ? 0U : (2U | (1U & (IData)(vlSelf->io_vecB_2))))),2);
    bufp->fullBit(oldp+94,((1U & ((IData)(vlSelf->io_vecA_3) 
                                  >> 3U))));
    bufp->fullCData(oldp+95,((3U & ((IData)(vlSelf->io_vecA_3) 
                                    >> 1U))),2);
    bufp->fullBit(oldp+96,((1U & (IData)(vlSelf->io_vecA_3))));
    bufp->fullBit(oldp+97,((1U & ((IData)(vlSelf->io_vecB_3) 
                                  >> 3U))));
    bufp->fullCData(oldp+98,((3U & ((IData)(vlSelf->io_vecB_3) 
                                    >> 1U))),2);
    bufp->fullBit(oldp+99,((1U & (IData)(vlSelf->io_vecB_3))));
    bufp->fullBit(oldp+100,((IData)((0U == (7U & (IData)(vlSelf->io_vecA_3))))));
    bufp->fullBit(oldp+101,((IData)((0U == (7U & (IData)(vlSelf->io_vecB_3))))));
    bufp->fullCData(oldp+102,(((IData)((0U == (7U & (IData)(vlSelf->io_vecA_3))))
                                ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_3))))),2);
    bufp->fullCData(oldp+103,(((IData)((0U == (7U & (IData)(vlSelf->io_vecB_3))))
                                ? 0U : (2U | (1U & (IData)(vlSelf->io_vecB_3))))),2);
    bufp->fullBit(oldp+104,((1U & ((IData)(vlSelf->io_vecA_4) 
                                   >> 3U))));
    bufp->fullCData(oldp+105,((3U & ((IData)(vlSelf->io_vecA_4) 
                                     >> 1U))),2);
    bufp->fullBit(oldp+106,((1U & (IData)(vlSelf->io_vecA_4))));
    bufp->fullBit(oldp+107,((1U & ((IData)(vlSelf->io_vecB_4) 
                                   >> 3U))));
    bufp->fullCData(oldp+108,((3U & ((IData)(vlSelf->io_vecB_4) 
                                     >> 1U))),2);
    bufp->fullBit(oldp+109,((1U & (IData)(vlSelf->io_vecB_4))));
    bufp->fullBit(oldp+110,((IData)((0U == (7U & (IData)(vlSelf->io_vecA_4))))));
    bufp->fullBit(oldp+111,((IData)((0U == (7U & (IData)(vlSelf->io_vecB_4))))));
}

VL_ATTR_COLD void VMXFP4DotProductEngine___024root__trace_full_0_sub_2(VMXFP4DotProductEngine___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root__trace_full_0_sub_2\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+112,(((IData)((0U == (7U & (IData)(vlSelf->io_vecA_4))))
                                ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_4))))),2);
    bufp->fullCData(oldp+113,(((IData)((0U == (7U & (IData)(vlSelf->io_vecB_4))))
                                ? 0U : (2U | (1U & (IData)(vlSelf->io_vecB_4))))),2);
    bufp->fullBit(oldp+114,((1U & ((IData)(vlSelf->io_vecA_5) 
                                   >> 3U))));
    bufp->fullCData(oldp+115,((3U & ((IData)(vlSelf->io_vecA_5) 
                                     >> 1U))),2);
    bufp->fullBit(oldp+116,((1U & (IData)(vlSelf->io_vecA_5))));
    bufp->fullBit(oldp+117,((1U & ((IData)(vlSelf->io_vecB_5) 
                                   >> 3U))));
    bufp->fullCData(oldp+118,((3U & ((IData)(vlSelf->io_vecB_5) 
                                     >> 1U))),2);
    bufp->fullBit(oldp+119,((1U & (IData)(vlSelf->io_vecB_5))));
    bufp->fullBit(oldp+120,((IData)((0U == (7U & (IData)(vlSelf->io_vecA_5))))));
    bufp->fullBit(oldp+121,((IData)((0U == (7U & (IData)(vlSelf->io_vecB_5))))));
    bufp->fullCData(oldp+122,(((IData)((0U == (7U & (IData)(vlSelf->io_vecA_5))))
                                ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_5))))),2);
    bufp->fullCData(oldp+123,(((IData)((0U == (7U & (IData)(vlSelf->io_vecB_5))))
                                ? 0U : (2U | (1U & (IData)(vlSelf->io_vecB_5))))),2);
    bufp->fullBit(oldp+124,((1U & ((IData)(vlSelf->io_vecA_6) 
                                   >> 3U))));
    bufp->fullCData(oldp+125,((3U & ((IData)(vlSelf->io_vecA_6) 
                                     >> 1U))),2);
    bufp->fullBit(oldp+126,((1U & (IData)(vlSelf->io_vecA_6))));
    bufp->fullBit(oldp+127,((1U & ((IData)(vlSelf->io_vecB_6) 
                                   >> 3U))));
    bufp->fullCData(oldp+128,((3U & ((IData)(vlSelf->io_vecB_6) 
                                     >> 1U))),2);
    bufp->fullBit(oldp+129,((1U & (IData)(vlSelf->io_vecB_6))));
    bufp->fullBit(oldp+130,((IData)((0U == (7U & (IData)(vlSelf->io_vecA_6))))));
    bufp->fullBit(oldp+131,((IData)((0U == (7U & (IData)(vlSelf->io_vecB_6))))));
    bufp->fullCData(oldp+132,(((IData)((0U == (7U & (IData)(vlSelf->io_vecA_6))))
                                ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_6))))),2);
    bufp->fullCData(oldp+133,(((IData)((0U == (7U & (IData)(vlSelf->io_vecB_6))))
                                ? 0U : (2U | (1U & (IData)(vlSelf->io_vecB_6))))),2);
    bufp->fullBit(oldp+134,((1U & ((IData)(vlSelf->io_vecA_7) 
                                   >> 3U))));
    bufp->fullCData(oldp+135,((3U & ((IData)(vlSelf->io_vecA_7) 
                                     >> 1U))),2);
    bufp->fullBit(oldp+136,((1U & (IData)(vlSelf->io_vecA_7))));
    bufp->fullBit(oldp+137,((1U & ((IData)(vlSelf->io_vecB_7) 
                                   >> 3U))));
    bufp->fullCData(oldp+138,((3U & ((IData)(vlSelf->io_vecB_7) 
                                     >> 1U))),2);
    bufp->fullBit(oldp+139,((1U & (IData)(vlSelf->io_vecB_7))));
    bufp->fullBit(oldp+140,((IData)((0U == (7U & (IData)(vlSelf->io_vecA_7))))));
    bufp->fullBit(oldp+141,((IData)((0U == (7U & (IData)(vlSelf->io_vecB_7))))));
    bufp->fullCData(oldp+142,(((IData)((0U == (7U & (IData)(vlSelf->io_vecA_7))))
                                ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_7))))),2);
    bufp->fullCData(oldp+143,(((IData)((0U == (7U & (IData)(vlSelf->io_vecB_7))))
                                ? 0U : (2U | (1U & (IData)(vlSelf->io_vecB_7))))),2);
}
