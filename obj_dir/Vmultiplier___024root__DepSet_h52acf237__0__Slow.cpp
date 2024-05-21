// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmultiplier.h for the primary calling header

#include "Vmultiplier__pch.h"
#include "Vmultiplier___024root.h"

VL_ATTR_COLD void Vmultiplier___024root___eval_static__TOP(Vmultiplier___024root* vlSelf);

VL_ATTR_COLD void Vmultiplier___024root___eval_static(Vmultiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval_static\n"); );
    // Body
    Vmultiplier___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vmultiplier___024root___eval_static__TOP(Vmultiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->multiplier__DOT__c = 0U;
    vlSelf->multiplier__DOT__pp = 0U;
    vlSelf->multiplier__DOT__spp = 0U;
    vlSelf->multiplier__DOT__prod = 0U;
    vlSelf->multiplier__DOT__i = 0U;
    vlSelf->multiplier__DOT__j = 0U;
    vlSelf->multiplier__DOT__flag = 0U;
    vlSelf->multiplier__DOT__temp = 0U;
}

VL_ATTR_COLD void Vmultiplier___024root___eval_initial(Vmultiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
}

VL_ATTR_COLD void Vmultiplier___024root___eval_final(Vmultiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vmultiplier___024root___eval_settle(Vmultiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier___024root___dump_triggers__act(Vmultiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier___024root___dump_triggers__nba(Vmultiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmultiplier___024root___ctor_var_reset(Vmultiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->x = VL_RAND_RESET_I(16);
    vlSelf->y = VL_RAND_RESET_I(16);
    vlSelf->out = VL_RAND_RESET_I(32);
    vlSelf->multiplier__DOT__c = VL_RAND_RESET_I(3);
    vlSelf->multiplier__DOT__pp = VL_RAND_RESET_I(32);
    vlSelf->multiplier__DOT__spp = VL_RAND_RESET_I(32);
    vlSelf->multiplier__DOT__prod = VL_RAND_RESET_I(32);
    vlSelf->multiplier__DOT__i = VL_RAND_RESET_I(16);
    vlSelf->multiplier__DOT__j = VL_RAND_RESET_I(16);
    vlSelf->multiplier__DOT__flag = VL_RAND_RESET_I(1);
    vlSelf->multiplier__DOT__temp = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
