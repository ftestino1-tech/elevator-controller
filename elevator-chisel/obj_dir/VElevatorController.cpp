// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VElevatorController__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VElevatorController::VElevatorController(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VElevatorController__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_floorRequest{vlSymsp->TOP.io_floorRequest}
    , io_currentFloorSensor{vlSymsp->TOP.io_currentFloorSensor}
    , io_doorSensor{vlSymsp->TOP.io_doorSensor}
    , io_emergency{vlSymsp->TOP.io_emergency}
    , io_overload{vlSymsp->TOP.io_overload}
    , io_motorUp{vlSymsp->TOP.io_motorUp}
    , io_motorDown{vlSymsp->TOP.io_motorDown}
    , io_doorOpen{vlSymsp->TOP.io_doorOpen}
    , io_doorClose{vlSymsp->TOP.io_doorClose}
    , io_currentState{vlSymsp->TOP.io_currentState}
    , io_currentFloor{vlSymsp->TOP.io_currentFloor}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VElevatorController::VElevatorController(const char* _vcname__)
    : VElevatorController(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VElevatorController::~VElevatorController() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VElevatorController___024root___eval_debug_assertions(VElevatorController___024root* vlSelf);
#endif  // VL_DEBUG
void VElevatorController___024root___eval_static(VElevatorController___024root* vlSelf);
void VElevatorController___024root___eval_initial(VElevatorController___024root* vlSelf);
void VElevatorController___024root___eval_settle(VElevatorController___024root* vlSelf);
void VElevatorController___024root___eval(VElevatorController___024root* vlSelf);

void VElevatorController::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VElevatorController::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VElevatorController___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VElevatorController___024root___eval_static(&(vlSymsp->TOP));
        VElevatorController___024root___eval_initial(&(vlSymsp->TOP));
        VElevatorController___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VElevatorController___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VElevatorController::eventsPending() { return false; }

uint64_t VElevatorController::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VElevatorController::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VElevatorController___024root___eval_final(VElevatorController___024root* vlSelf);

VL_ATTR_COLD void VElevatorController::final() {
    VElevatorController___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VElevatorController::hierName() const { return vlSymsp->name(); }
const char* VElevatorController::modelName() const { return "VElevatorController"; }
unsigned VElevatorController::threads() const { return 1; }
void VElevatorController::prepareClone() const { contextp()->prepareClone(); }
void VElevatorController::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VElevatorController::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VElevatorController___024root__trace_decl_types(VerilatedVcd* tracep);

void VElevatorController___024root__trace_init_top(VElevatorController___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VElevatorController___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VElevatorController___024root*>(voidSelf);
    VElevatorController__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VElevatorController___024root__trace_decl_types(tracep);
    VElevatorController___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VElevatorController___024root__trace_register(VElevatorController___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VElevatorController::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VElevatorController::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VElevatorController___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
