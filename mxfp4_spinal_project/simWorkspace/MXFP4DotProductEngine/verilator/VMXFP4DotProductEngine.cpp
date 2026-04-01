// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMXFP4DotProductEngine__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VMXFP4DotProductEngine::VMXFP4DotProductEngine(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VMXFP4DotProductEngine__Syms(contextp(), _vcname__, this)}
    , io_vecA_0{vlSymsp->TOP.io_vecA_0}
    , io_vecA_1{vlSymsp->TOP.io_vecA_1}
    , io_vecA_2{vlSymsp->TOP.io_vecA_2}
    , io_vecA_3{vlSymsp->TOP.io_vecA_3}
    , io_vecB_0{vlSymsp->TOP.io_vecB_0}
    , io_vecB_1{vlSymsp->TOP.io_vecB_1}
    , io_vecB_2{vlSymsp->TOP.io_vecB_2}
    , io_vecB_3{vlSymsp->TOP.io_vecB_3}
    , io_scaleA{vlSymsp->TOP.io_scaleA}
    , io_scaleB{vlSymsp->TOP.io_scaleB}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , io_dotProduct{vlSymsp->TOP.io_dotProduct}
    , io_combinedScale{vlSymsp->TOP.io_combinedScale}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VMXFP4DotProductEngine::VMXFP4DotProductEngine(const char* _vcname__)
    : VMXFP4DotProductEngine(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VMXFP4DotProductEngine::~VMXFP4DotProductEngine() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VMXFP4DotProductEngine___024root___eval_debug_assertions(VMXFP4DotProductEngine___024root* vlSelf);
#endif  // VL_DEBUG
void VMXFP4DotProductEngine___024root___eval_static(VMXFP4DotProductEngine___024root* vlSelf);
void VMXFP4DotProductEngine___024root___eval_initial(VMXFP4DotProductEngine___024root* vlSelf);
void VMXFP4DotProductEngine___024root___eval_settle(VMXFP4DotProductEngine___024root* vlSelf);
void VMXFP4DotProductEngine___024root___eval(VMXFP4DotProductEngine___024root* vlSelf);

void VMXFP4DotProductEngine::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMXFP4DotProductEngine::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMXFP4DotProductEngine___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VMXFP4DotProductEngine___024root___eval_static(&(vlSymsp->TOP));
        VMXFP4DotProductEngine___024root___eval_initial(&(vlSymsp->TOP));
        VMXFP4DotProductEngine___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VMXFP4DotProductEngine___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VMXFP4DotProductEngine::eventsPending() { return false; }

uint64_t VMXFP4DotProductEngine::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VMXFP4DotProductEngine::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VMXFP4DotProductEngine___024root___eval_final(VMXFP4DotProductEngine___024root* vlSelf);

VL_ATTR_COLD void VMXFP4DotProductEngine::final() {
    VMXFP4DotProductEngine___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VMXFP4DotProductEngine::hierName() const { return vlSymsp->name(); }
const char* VMXFP4DotProductEngine::modelName() const { return "VMXFP4DotProductEngine"; }
unsigned VMXFP4DotProductEngine::threads() const { return 1; }
void VMXFP4DotProductEngine::prepareClone() const { contextp()->prepareClone(); }
void VMXFP4DotProductEngine::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VMXFP4DotProductEngine::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VMXFP4DotProductEngine___024root__trace_decl_types(VerilatedVcd* tracep);

void VMXFP4DotProductEngine___024root__trace_init_top(VMXFP4DotProductEngine___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VMXFP4DotProductEngine___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMXFP4DotProductEngine___024root*>(voidSelf);
    VMXFP4DotProductEngine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VMXFP4DotProductEngine___024root__trace_decl_types(tracep);
    VMXFP4DotProductEngine___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VMXFP4DotProductEngine___024root__trace_register(VMXFP4DotProductEngine___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VMXFP4DotProductEngine::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VMXFP4DotProductEngine::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VMXFP4DotProductEngine___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
