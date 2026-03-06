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
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_floorRequest,3,0);
    VL_IN8(io_currentFloorSensor,3,0);
    VL_IN8(io_doorSensor,0,0);
    VL_IN8(io_emergency,0,0);
    VL_IN8(io_overload,0,0);
    VL_OUT8(io_motorUp,0,0);
    VL_OUT8(io_motorDown,0,0);
    VL_OUT8(io_doorOpen,0,0);
    VL_OUT8(io_doorClose,0,0);
    VL_OUT8(io_currentState,2,0);
    VL_OUT8(io_currentFloor,1,0);
    CData/*2:0*/ ElevatorController__DOT__state;
    CData/*1:0*/ ElevatorController__DOT__currentFloor;
    CData/*1:0*/ ElevatorController__DOT__targetFloor;
    CData/*0:0*/ ElevatorController__DOT__requestQueue_0;
    CData/*0:0*/ ElevatorController__DOT__requestQueue_1;
    CData/*0:0*/ ElevatorController__DOT__requestQueue_2;
    CData/*0:0*/ ElevatorController__DOT__requestQueue_3;
    CData/*0:0*/ ElevatorController__DOT__unnamedblk1__DOT___GEN;
    CData/*0:0*/ ElevatorController__DOT__unnamedblk1__DOT___GEN_0;
    CData/*0:0*/ ElevatorController__DOT__unnamedblk1__DOT___GEN_1;
    CData/*0:0*/ ElevatorController__DOT__unnamedblk1__DOT___GEN_2;
    CData/*0:0*/ ElevatorController__DOT__unnamedblk1__DOT___GEN_3;
    CData/*3:0*/ ElevatorController__DOT__unnamedblk1__DOT___GEN_4;
    CData/*0:0*/ ElevatorController__DOT__unnamedblk1__DOT___hasUpperRequest_T_2;
    CData/*0:0*/ ElevatorController__DOT__unnamedblk1__DOT___hasUpperRequest_T_6;
    CData/*0:0*/ ElevatorController__DOT__unnamedblk1__DOT__hasUpperRequest;
    CData/*0:0*/ ElevatorController__DOT__unnamedblk1__DOT__hasLowerRequest;
    CData/*3:0*/ ElevatorController__DOT__unnamedblk1__DOT___GEN_5;
    CData/*0:0*/ ElevatorController__DOT__unnamedblk1__DOT___GEN_6;
    CData/*0:0*/ ElevatorController__DOT__unnamedblk1__DOT___GEN_7;
    CData/*0:0*/ ElevatorController__DOT__unnamedblk1__DOT___GEN_8;
    CData/*0:0*/ ElevatorController__DOT__unnamedblk1__DOT___GEN_9;
    CData/*0:0*/ ElevatorController__DOT__unnamedblk1__DOT___GEN_10;
    CData/*0:0*/ ElevatorController__DOT__unnamedblk1__DOT___GEN_11;
    CData/*0:0*/ ElevatorController__DOT__unnamedblk1__DOT___GEN_12;
    CData/*0:0*/ ElevatorController__DOT__unnamedblk1__DOT___GEN_13;
    CData/*0:0*/ ElevatorController__DOT__unnamedblk1__DOT___GEN_14;
    CData/*0:0*/ ElevatorController__DOT__unnamedblk1__DOT___GEN_15;
    CData/*2:0*/ ElevatorController__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_16;
    CData/*2:0*/ ElevatorController__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_17;
    IData/*23:0*/ ElevatorController__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_18;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
    CData/*0:0*/ __VactContinue;
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
