// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMXFP4DOTPRODUCTENGINE__SYMS_H_
#define VERILATED_VMXFP4DOTPRODUCTENGINE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VMXFP4DotProductEngine.h"

// INCLUDE MODULE CLASSES
#include "VMXFP4DotProductEngine___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VMXFP4DotProductEngine__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VMXFP4DotProductEngine* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VMXFP4DotProductEngine___024root TOP;

    // CONSTRUCTORS
    VMXFP4DotProductEngine__Syms(VerilatedContext* contextp, const char* namep, VMXFP4DotProductEngine* modelp);
    ~VMXFP4DotProductEngine__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
