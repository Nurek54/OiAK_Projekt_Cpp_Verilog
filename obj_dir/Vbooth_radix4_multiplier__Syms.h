// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBOOTH_RADIX4_MULTIPLIER__SYMS_H_
#define VERILATED_VBOOTH_RADIX4_MULTIPLIER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vbooth_radix4_multiplier.h"

// INCLUDE MODULE CLASSES
#include "Vbooth_radix4_multiplier___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vbooth_radix4_multiplier__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vbooth_radix4_multiplier* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vbooth_radix4_multiplier___024root TOP;

    // CONSTRUCTORS
    Vbooth_radix4_multiplier__Syms(VerilatedContext* contextp, const char* namep, Vbooth_radix4_multiplier* modelp);
    ~Vbooth_radix4_multiplier__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
