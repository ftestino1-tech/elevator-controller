// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VElevatorController.h for the primary calling header

#ifndef VERILATED_VELEVATORCONTROLLER___024ROOT_H_
#define VERILATED_VELEVATORCONTROLLER___024ROOT_H_  // guard

#include "verilated.h"


class VElevatorController__Syms;

class alignas(VL_CACHE_LINE_BYTES) VElevatorController___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(_zz_when_ElevatorController_l44,3,0);
    VL_IN8(_zz_when_ElevatorController_l51,3,0);
    VL_IN8(when_ElevatorController_l102,0,0);
    VL_IN8(when_ElevatorController_l57,0,0);
    VL_IN8(_zz_1,0,0);
    VL_OUT8(_zz_2,0,0);
    VL_OUT8(_zz_3,0,0);
    VL_OUT8(_zz_4,0,0);
    VL_OUT8(_zz_5,0,0);
    VL_OUT8(_zz_6,1,0);
    CData/*0:0*/ ElevatorController__DOT___zz_when_ElevatorController_l65_5;
    CData/*2:0*/ ElevatorController__DOT__switch_ElevatorController_l61;
    CData/*1:0*/ ElevatorController__DOT___zz_when_ElevatorController_l65;
    CData/*1:0*/ ElevatorController__DOT___zz_when_ElevatorController_l88;
    CData/*0:0*/ ElevatorController__DOT___zz_when_ElevatorController_l65_1;
    CData/*0:0*/ ElevatorController__DOT___zz_when_ElevatorController_l65_2;
    CData/*0:0*/ ElevatorController__DOT___zz_when_ElevatorController_l65_3;
    CData/*0:0*/ ElevatorController__DOT___zz_when_ElevatorController_l65_4;
    CData/*0:0*/ ElevatorController__DOT__when_ElevatorController_l64;
    CData/*0:0*/ ElevatorController__DOT__when_ElevatorController_l71;
    CData/*0:0*/ ElevatorController__DOT__when_ElevatorController_l71_1;
    CData/*0:0*/ ElevatorController__DOT__when_ElevatorController_l71_2;
    CData/*0:0*/ ElevatorController__DOT__when_ElevatorController_l78;
    CData/*0:0*/ ElevatorController__DOT__when_ElevatorController_l78_1;
    CData/*0:0*/ ElevatorController__DOT__when_ElevatorController_l78_2;
    CData/*0:0*/ ElevatorController__DOT__when_ElevatorController_l88;
    CData/*0:0*/ ElevatorController__DOT__when_ElevatorController_l110;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*23:0*/ ElevatorController__DOT___zz_when_ElevatorController_l110;
    VlWide<3>/*95:0*/ ElevatorController__DOT__switch_ElevatorController_l61_string;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VElevatorController__Syms* const vlSymsp;

    // CONSTRUCTORS
    VElevatorController___024root(VElevatorController__Syms* symsp, const char* v__name);
    ~VElevatorController___024root();
    VL_UNCOPYABLE(VElevatorController___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
