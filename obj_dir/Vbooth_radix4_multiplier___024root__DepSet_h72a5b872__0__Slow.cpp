// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbooth_radix4_multiplier.h for the primary calling header

#include "Vbooth_radix4_multiplier__pch.h"
#include "Vbooth_radix4_multiplier___024root.h"

VL_ATTR_COLD void Vbooth_radix4_multiplier___024root___eval_static(Vbooth_radix4_multiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbooth_radix4_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_radix4_multiplier___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vbooth_radix4_multiplier___024root___eval_initial__TOP(Vbooth_radix4_multiplier___024root* vlSelf);

VL_ATTR_COLD void Vbooth_radix4_multiplier___024root___eval_initial(Vbooth_radix4_multiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbooth_radix4_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_radix4_multiplier___024root___eval_initial\n"); );
    // Body
    Vbooth_radix4_multiplier___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clk__0 = 0U;
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clk__1 = 0U;
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__reset__0 = 1U;
}

VL_ATTR_COLD void Vbooth_radix4_multiplier___024root___eval_initial__TOP(Vbooth_radix4_multiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbooth_radix4_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_radix4_multiplier___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->testbench__DOT__clk = 0U;
    vlSelf->testbench__DOT__reset = 1U;
    vlSelf->testbench__DOT__x = 3U;
    vlSelf->testbench__DOT__y = 5U;
    VL_WRITEF_NX("Mno\305\274nik:  3, Mno\305\274na:  5, Produkt: %3#\n",0,
                 8,vlSelf->testbench__DOT__product);
    VL_FINISH_MT("testbench.v", 39, "");
}

VL_ATTR_COLD void Vbooth_radix4_multiplier___024root___eval_final(Vbooth_radix4_multiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbooth_radix4_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_radix4_multiplier___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbooth_radix4_multiplier___024root___dump_triggers__stl(Vbooth_radix4_multiplier___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vbooth_radix4_multiplier___024root___eval_phase__stl(Vbooth_radix4_multiplier___024root* vlSelf);

VL_ATTR_COLD void Vbooth_radix4_multiplier___024root___eval_settle(Vbooth_radix4_multiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbooth_radix4_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_radix4_multiplier___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vbooth_radix4_multiplier___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("testbench.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vbooth_radix4_multiplier___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbooth_radix4_multiplier___024root___dump_triggers__stl(Vbooth_radix4_multiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbooth_radix4_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_radix4_multiplier___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] testbench.clk)\n");
    }
}
#endif  // VL_DEBUG

void Vbooth_radix4_multiplier___024root___act_sequent__TOP__0(Vbooth_radix4_multiplier___024root* vlSelf);

VL_ATTR_COLD void Vbooth_radix4_multiplier___024root___eval_stl(Vbooth_radix4_multiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbooth_radix4_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_radix4_multiplier___024root___eval_stl\n"); );
    // Body
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vbooth_radix4_multiplier___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vbooth_radix4_multiplier___024root___eval_triggers__stl(Vbooth_radix4_multiplier___024root* vlSelf);

VL_ATTR_COLD bool Vbooth_radix4_multiplier___024root___eval_phase__stl(Vbooth_radix4_multiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbooth_radix4_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_radix4_multiplier___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vbooth_radix4_multiplier___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vbooth_radix4_multiplier___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbooth_radix4_multiplier___024root___dump_triggers__act(Vbooth_radix4_multiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbooth_radix4_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_radix4_multiplier___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] testbench.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge testbench.clk or posedge testbench.reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbooth_radix4_multiplier___024root___dump_triggers__nba(Vbooth_radix4_multiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbooth_radix4_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_radix4_multiplier___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] testbench.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge testbench.clk or posedge testbench.reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vbooth_radix4_multiplier___024root___ctor_var_reset(Vbooth_radix4_multiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbooth_radix4_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_radix4_multiplier___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->testbench__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__x = VL_RAND_RESET_I(4);
    vlSelf->testbench__DOT__y = VL_RAND_RESET_I(4);
    vlSelf->testbench__DOT__product = VL_RAND_RESET_I(8);
    vlSelf->testbench__DOT__uut__DOT__A = VL_RAND_RESET_I(9);
    vlSelf->testbench__DOT__uut__DOT__Q = VL_RAND_RESET_I(5);
    vlSelf->testbench__DOT__uut__DOT__M = VL_RAND_RESET_I(5);
    vlSelf->testbench__DOT__uut__DOT__Q_1 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__uut__DOT__count = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clk__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__reset__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
