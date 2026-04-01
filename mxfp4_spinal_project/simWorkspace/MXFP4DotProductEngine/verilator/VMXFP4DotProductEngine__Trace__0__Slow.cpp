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
    tracep->declBus(c+14,0,"io_vecA_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+15,0,"io_vecA_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+16,0,"io_vecA_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17,0,"io_vecA_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+18,0,"io_vecB_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+19,0,"io_vecB_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+20,0,"io_vecB_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+21,0,"io_vecB_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+22,0,"io_scaleA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+23,0,"io_scaleB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"io_dotProduct",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+25,0,"io_combinedScale",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+26,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("MXFP4DotProductEngine", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+14,0,"io_vecA_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+15,0,"io_vecA_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+16,0,"io_vecA_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+17,0,"io_vecA_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+18,0,"io_vecB_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+19,0,"io_vecB_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+20,0,"io_vecB_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+21,0,"io_vecB_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+22,0,"io_scaleA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+23,0,"io_scaleB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"io_dotProduct",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+25,0,"io_combinedScale",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+26,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"multipliers_0_io_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1,0,"multipliers_0_io_expOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+29,0,"multipliers_0_io_mantOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+30,0,"multipliers_1_io_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2,0,"multipliers_1_io_expOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+31,0,"multipliers_1_io_mantOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+32,0,"multipliers_2_io_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+3,0,"multipliers_2_io_expOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+33,0,"multipliers_2_io_mantOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+34,0,"multipliers_3_io_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+4,0,"multipliers_3_io_expOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+35,0,"multipliers_3_io_mantOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+5,0,"aligner_io_aligned_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"aligner_io_aligned_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"aligner_io_aligned_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"aligner_io_aligned_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"adderTree_1_io_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+24,0,"scaleIntegrator_io_dotProduct",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+25,0,"scaleIntegrator_io_combinedScale",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("adderTree_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"io_inputs_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"io_inputs_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"io_inputs_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"io_inputs_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"io_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+9,0,"extInputs_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+10,0,"extInputs_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+11,0,"extInputs_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+12,0,"extInputs_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->pushPrefix("aligner", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+28,0,"io_signs_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+30,0,"io_signs_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+32,0,"io_signs_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+34,0,"io_signs_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1,0,"io_exps_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2,0,"io_exps_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+3,0,"io_exps_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+4,0,"io_exps_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+29,0,"io_mants_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+31,0,"io_mants_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+33,0,"io_mants_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+35,0,"io_mants_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+5,0,"io_aligned_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"io_aligned_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"io_aligned_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"io_aligned_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+13,0,"expMax",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("multipliers_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+14,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+18,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+28,0,"io_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1,0,"io_expOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+29,0,"io_mantOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+36,0,"signA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"expA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+38,0,"mantA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"signB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"expB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+41,0,"mantB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"isZeroA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"isZeroB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"mantEffA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+45,0,"mantEffB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("multipliers_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+15,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+19,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+30,0,"io_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2,0,"io_expOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+31,0,"io_mantOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+46,0,"signA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"expA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+48,0,"mantA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"signB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"expB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+51,0,"mantB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"isZeroA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"isZeroB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"mantEffA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+55,0,"mantEffB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("multipliers_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+16,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+20,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+32,0,"io_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+3,0,"io_expOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+33,0,"io_mantOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+56,0,"signA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"expA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+58,0,"mantA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"signB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"expB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+61,0,"mantB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"isZeroA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"isZeroB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"mantEffA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+65,0,"mantEffB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("multipliers_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+17,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+21,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+34,0,"io_sign",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+4,0,"io_expOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+35,0,"io_mantOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+66,0,"signA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"expA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+68,0,"mantA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"signB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"expB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+71,0,"mantB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"isZeroA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"isZeroB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"mantEffA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+75,0,"mantEffB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("scaleIntegrator", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+24,0,"io_treeSum",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+22,0,"io_scaleA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+23,0,"io_scaleB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"io_dotProduct",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+25,0,"io_combinedScale",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
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
VL_ATTR_COLD void VMXFP4DotProductEngine___024root__trace_full_0_sub_1(VMXFP4DotProductEngine___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VMXFP4DotProductEngine___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root__trace_full_0\n"); );
    // Init
    VMXFP4DotProductEngine___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMXFP4DotProductEngine___024root*>(voidSelf);
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VMXFP4DotProductEngine___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
    VMXFP4DotProductEngine___024root__trace_full_0_sub_1((&vlSymsp->TOP), bufp);
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
    bufp->fullCData(oldp+5,(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_0),8);
    bufp->fullCData(oldp+6,(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_1),8);
    bufp->fullCData(oldp+7,(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_2),8);
    bufp->fullCData(oldp+8,(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_3),8);
    bufp->fullSData(oldp+9,(((0x300U & ((- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_0) 
                                                       >> 7U)))) 
                                        << 8U)) | (IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_0))),10);
    bufp->fullSData(oldp+10,(((0x300U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_1) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_1))),10);
    bufp->fullSData(oldp+11,(((0x300U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_2) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_2))),10);
    bufp->fullSData(oldp+12,(((0x300U & ((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_3) 
                                                        >> 7U)))) 
                                         << 8U)) | (IData)(vlSelf->MXFP4DotProductEngine__DOT__aligner_io_aligned_3))),10);
    bufp->fullCData(oldp+13,(vlSelf->MXFP4DotProductEngine__DOT__aligner__DOT__expMax),3);
    bufp->fullCData(oldp+14,(vlSelf->io_vecA_0),4);
    bufp->fullCData(oldp+15,(vlSelf->io_vecA_1),4);
    bufp->fullCData(oldp+16,(vlSelf->io_vecA_2),4);
    bufp->fullCData(oldp+17,(vlSelf->io_vecA_3),4);
    bufp->fullCData(oldp+18,(vlSelf->io_vecB_0),4);
    bufp->fullCData(oldp+19,(vlSelf->io_vecB_1),4);
    bufp->fullCData(oldp+20,(vlSelf->io_vecB_2),4);
    bufp->fullCData(oldp+21,(vlSelf->io_vecB_3),4);
    bufp->fullCData(oldp+22,(vlSelf->io_scaleA),8);
    bufp->fullCData(oldp+23,(vlSelf->io_scaleB),8);
    bufp->fullSData(oldp+24,(vlSelf->io_dotProduct),10);
    bufp->fullSData(oldp+25,(vlSelf->io_combinedScale),9);
    bufp->fullBit(oldp+26,(vlSelf->clk));
    bufp->fullBit(oldp+27,(vlSelf->reset));
    bufp->fullBit(oldp+28,((1U & (((IData)(vlSelf->io_vecA_0) 
                                   ^ (IData)(vlSelf->io_vecB_0)) 
                                  >> 3U))));
    bufp->fullCData(oldp+29,((0xfU & (((IData)((0U 
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
    bufp->fullBit(oldp+30,((1U & (((IData)(vlSelf->io_vecA_1) 
                                   ^ (IData)(vlSelf->io_vecB_1)) 
                                  >> 3U))));
    bufp->fullCData(oldp+31,((0xfU & (((IData)((0U 
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
    bufp->fullBit(oldp+32,((1U & (((IData)(vlSelf->io_vecA_2) 
                                   ^ (IData)(vlSelf->io_vecB_2)) 
                                  >> 3U))));
    bufp->fullCData(oldp+33,((0xfU & (((IData)((0U 
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
    bufp->fullBit(oldp+34,((1U & (((IData)(vlSelf->io_vecA_3) 
                                   ^ (IData)(vlSelf->io_vecB_3)) 
                                  >> 3U))));
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
    bufp->fullBit(oldp+36,((1U & ((IData)(vlSelf->io_vecA_0) 
                                  >> 3U))));
    bufp->fullCData(oldp+37,((3U & ((IData)(vlSelf->io_vecA_0) 
                                    >> 1U))),2);
    bufp->fullBit(oldp+38,((1U & (IData)(vlSelf->io_vecA_0))));
    bufp->fullBit(oldp+39,((1U & ((IData)(vlSelf->io_vecB_0) 
                                  >> 3U))));
    bufp->fullCData(oldp+40,((3U & ((IData)(vlSelf->io_vecB_0) 
                                    >> 1U))),2);
    bufp->fullBit(oldp+41,((1U & (IData)(vlSelf->io_vecB_0))));
    bufp->fullBit(oldp+42,((IData)((0U == (7U & (IData)(vlSelf->io_vecA_0))))));
    bufp->fullBit(oldp+43,((IData)((0U == (7U & (IData)(vlSelf->io_vecB_0))))));
    bufp->fullCData(oldp+44,(((IData)((0U == (7U & (IData)(vlSelf->io_vecA_0))))
                               ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_0))))),2);
    bufp->fullCData(oldp+45,(((IData)((0U == (7U & (IData)(vlSelf->io_vecB_0))))
                               ? 0U : (2U | (1U & (IData)(vlSelf->io_vecB_0))))),2);
    bufp->fullBit(oldp+46,((1U & ((IData)(vlSelf->io_vecA_1) 
                                  >> 3U))));
    bufp->fullCData(oldp+47,((3U & ((IData)(vlSelf->io_vecA_1) 
                                    >> 1U))),2);
    bufp->fullBit(oldp+48,((1U & (IData)(vlSelf->io_vecA_1))));
    bufp->fullBit(oldp+49,((1U & ((IData)(vlSelf->io_vecB_1) 
                                  >> 3U))));
    bufp->fullCData(oldp+50,((3U & ((IData)(vlSelf->io_vecB_1) 
                                    >> 1U))),2);
    bufp->fullBit(oldp+51,((1U & (IData)(vlSelf->io_vecB_1))));
    bufp->fullBit(oldp+52,((IData)((0U == (7U & (IData)(vlSelf->io_vecA_1))))));
    bufp->fullBit(oldp+53,((IData)((0U == (7U & (IData)(vlSelf->io_vecB_1))))));
    bufp->fullCData(oldp+54,(((IData)((0U == (7U & (IData)(vlSelf->io_vecA_1))))
                               ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_1))))),2);
    bufp->fullCData(oldp+55,(((IData)((0U == (7U & (IData)(vlSelf->io_vecB_1))))
                               ? 0U : (2U | (1U & (IData)(vlSelf->io_vecB_1))))),2);
    bufp->fullBit(oldp+56,((1U & ((IData)(vlSelf->io_vecA_2) 
                                  >> 3U))));
}

VL_ATTR_COLD void VMXFP4DotProductEngine___024root__trace_full_0_sub_1(VMXFP4DotProductEngine___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMXFP4DotProductEngine___024root__trace_full_0_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+57,((3U & ((IData)(vlSelf->io_vecA_2) 
                                    >> 1U))),2);
    bufp->fullBit(oldp+58,((1U & (IData)(vlSelf->io_vecA_2))));
    bufp->fullBit(oldp+59,((1U & ((IData)(vlSelf->io_vecB_2) 
                                  >> 3U))));
    bufp->fullCData(oldp+60,((3U & ((IData)(vlSelf->io_vecB_2) 
                                    >> 1U))),2);
    bufp->fullBit(oldp+61,((1U & (IData)(vlSelf->io_vecB_2))));
    bufp->fullBit(oldp+62,((IData)((0U == (7U & (IData)(vlSelf->io_vecA_2))))));
    bufp->fullBit(oldp+63,((IData)((0U == (7U & (IData)(vlSelf->io_vecB_2))))));
    bufp->fullCData(oldp+64,(((IData)((0U == (7U & (IData)(vlSelf->io_vecA_2))))
                               ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_2))))),2);
    bufp->fullCData(oldp+65,(((IData)((0U == (7U & (IData)(vlSelf->io_vecB_2))))
                               ? 0U : (2U | (1U & (IData)(vlSelf->io_vecB_2))))),2);
    bufp->fullBit(oldp+66,((1U & ((IData)(vlSelf->io_vecA_3) 
                                  >> 3U))));
    bufp->fullCData(oldp+67,((3U & ((IData)(vlSelf->io_vecA_3) 
                                    >> 1U))),2);
    bufp->fullBit(oldp+68,((1U & (IData)(vlSelf->io_vecA_3))));
    bufp->fullBit(oldp+69,((1U & ((IData)(vlSelf->io_vecB_3) 
                                  >> 3U))));
    bufp->fullCData(oldp+70,((3U & ((IData)(vlSelf->io_vecB_3) 
                                    >> 1U))),2);
    bufp->fullBit(oldp+71,((1U & (IData)(vlSelf->io_vecB_3))));
    bufp->fullBit(oldp+72,((IData)((0U == (7U & (IData)(vlSelf->io_vecA_3))))));
    bufp->fullBit(oldp+73,((IData)((0U == (7U & (IData)(vlSelf->io_vecB_3))))));
    bufp->fullCData(oldp+74,(((IData)((0U == (7U & (IData)(vlSelf->io_vecA_3))))
                               ? 0U : (2U | (1U & (IData)(vlSelf->io_vecA_3))))),2);
    bufp->fullCData(oldp+75,(((IData)((0U == (7U & (IData)(vlSelf->io_vecB_3))))
                               ? 0U : (2U | (1U & (IData)(vlSelf->io_vecB_3))))),2);
}
