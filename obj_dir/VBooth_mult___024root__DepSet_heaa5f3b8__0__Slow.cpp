// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBooth_mult.h for the primary calling header

#include "VBooth_mult__pch.h"
#include "VBooth_mult__Syms.h"
#include "VBooth_mult___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VBooth_mult___024root___dump_triggers__stl(VBooth_mult___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VBooth_mult___024root___eval_triggers__stl(VBooth_mult___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VBooth_mult__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBooth_mult___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VBooth_mult___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
