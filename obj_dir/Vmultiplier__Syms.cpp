// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vmultiplier__pch.h"
#include "Vmultiplier.h"
#include "Vmultiplier___024root.h"

// FUNCTIONS
Vmultiplier__Syms::~Vmultiplier__Syms()
{
}

Vmultiplier__Syms::Vmultiplier__Syms(VerilatedContext* contextp, const char* namep, Vmultiplier* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(49);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
