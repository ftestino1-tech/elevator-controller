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
    VL_IN8(current_floor_sensor,3,0);
    VL_IN8(door_sensor,0,0);
    VL_IN8(emergency,0,0);
    VL_IN8(overload,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(motor_up,0,0);
    VL_OUT8(motor_down,0,0);
    VL_OUT8(door_open,0,0);
    VL_OUT8(door_close,0,0);
    VL_OUT8(current_floor,1,0);
    VL_IN8(floor_request,3,0);
    CData/*0:0*/ top__DOT____0242;
    CData/*0:0*/ top__DOT____02427;
    CData/*3:0*/ top__DOT____02430;
    CData/*3:0*/ top__DOT____0244;
    CData/*1:0*/ top__DOT____02448;
    CData/*3:0*/ top__DOT____02449;
    CData/*2:0*/ top__DOT____02450;
    CData/*1:0*/ top__DOT____02451;
    CData/*2:0*/ top__DOT__current_state;
    CData/*2:0*/ top__DOT__fsm_state;
    CData/*3:0*/ top__DOT__request_queue;
    CData/*1:0*/ top__DOT__target_floor;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*23:0*/ top__DOT____02452;
    IData/*23:0*/ top__DOT__door_timer;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
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
