// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbooth_radix4_multiplier.h for the primary calling header

#include "Vbooth_radix4_multiplier__pch.h"
#include "Vbooth_radix4_multiplier___024root.h"

void Vbooth_radix4_multiplier___024root___act_sequent__TOP__0(Vbooth_radix4_multiplier___024root* vlSelf);

void Vbooth_radix4_multiplier___024root___eval_act(Vbooth_radix4_multiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbooth_radix4_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_radix4_multiplier___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vbooth_radix4_multiplier___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vbooth_radix4_multiplier___024root___act_sequent__TOP__0(Vbooth_radix4_multiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbooth_radix4_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_radix4_multiplier___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->testbench__DOT__clk = (1U & (~ (IData)(vlSelf->testbench__DOT__clk)));
}

void Vbooth_radix4_multiplier___024root___nba_sequent__TOP__0(Vbooth_radix4_multiplier___024root* vlSelf);

void Vbooth_radix4_multiplier___024root___eval_nba(Vbooth_radix4_multiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbooth_radix4_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_radix4_multiplier___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vbooth_radix4_multiplier___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vbooth_radix4_multiplier___024root___nba_sequent__TOP__0(Vbooth_radix4_multiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbooth_radix4_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_radix4_multiplier___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vdly__testbench__DOT__uut__DOT__A;
    __Vdly__testbench__DOT__uut__DOT__A = 0;
    CData/*4:0*/ __Vdly__testbench__DOT__uut__DOT__Q;
    __Vdly__testbench__DOT__uut__DOT__Q = 0;
    CData/*0:0*/ __Vdly__testbench__DOT__uut__DOT__Q_1;
    __Vdly__testbench__DOT__uut__DOT__Q_1 = 0;
    IData/*31:0*/ __Vdly__testbench__DOT__uut__DOT__count;
    __Vdly__testbench__DOT__uut__DOT__count = 0;
    // Body
    __Vdly__testbench__DOT__uut__DOT__count = vlSelf->testbench__DOT__uut__DOT__count;
    __Vdly__testbench__DOT__uut__DOT__Q_1 = vlSelf->testbench__DOT__uut__DOT__Q_1;
    __Vdly__testbench__DOT__uut__DOT__Q = vlSelf->testbench__DOT__uut__DOT__Q;
    __Vdly__testbench__DOT__uut__DOT__A = vlSelf->testbench__DOT__uut__DOT__A;
    if (vlSelf->testbench__DOT__reset) {
        __Vdly__testbench__DOT__uut__DOT__A = 0U;
        __Vdly__testbench__DOT__uut__DOT__Q = vlSelf->testbench__DOT__x;
        __Vdly__testbench__DOT__uut__DOT__Q_1 = 0U;
        __Vdly__testbench__DOT__uut__DOT__count = 2U;
        vlSelf->testbench__DOT__product = 0U;
        vlSelf->testbench__DOT__uut__DOT__M = vlSelf->testbench__DOT__y;
    } else if (VL_LTS_III(32, 0U, vlSelf->testbench__DOT__uut__DOT__count)) {
        __Vdly__testbench__DOT__uut__DOT__count = (vlSelf->testbench__DOT__uut__DOT__count 
                                                   - (IData)(1U));
        if ((2U & (IData)(vlSelf->testbench__DOT__uut__DOT__Q))) {
            if ((1U & (IData)(vlSelf->testbench__DOT__uut__DOT__Q))) {
                if ((1U & (~ (IData)(vlSelf->testbench__DOT__uut__DOT__Q_1)))) {
                    __Vdly__testbench__DOT__uut__DOT__A 
                        = (0x1ffU & ((IData)(vlSelf->testbench__DOT__uut__DOT__A) 
                                     - (IData)(vlSelf->testbench__DOT__uut__DOT__M)));
                }
            } else if (vlSelf->testbench__DOT__uut__DOT__Q_1) {
                __Vdly__testbench__DOT__uut__DOT__A 
                    = (0x1ffU & ((IData)(vlSelf->testbench__DOT__uut__DOT__A) 
                                 - (IData)(vlSelf->testbench__DOT__uut__DOT__M)));
            }
        } else if ((1U & (IData)(vlSelf->testbench__DOT__uut__DOT__Q))) {
            if ((1U & (~ (IData)(vlSelf->testbench__DOT__uut__DOT__Q_1)))) {
                __Vdly__testbench__DOT__uut__DOT__A 
                    = (0x1ffU & ((IData)(vlSelf->testbench__DOT__uut__DOT__A) 
                                 + (IData)(vlSelf->testbench__DOT__uut__DOT__M)));
            }
        } else if (vlSelf->testbench__DOT__uut__DOT__Q_1) {
            __Vdly__testbench__DOT__uut__DOT__A = (0x1ffU 
                                                   & ((IData)(vlSelf->testbench__DOT__uut__DOT__A) 
                                                      + (IData)(vlSelf->testbench__DOT__uut__DOT__M)));
        }
        __Vdly__testbench__DOT__uut__DOT__A = (0x1ffU 
                                               & ((0x80U 
                                                   & ((IData)(vlSelf->testbench__DOT__uut__DOT__A) 
                                                      >> 1U)) 
                                                  | ((0x7fU 
                                                      & ((IData)(vlSelf->testbench__DOT__uut__DOT__A) 
                                                         >> 2U)) 
                                                     | ((IData)(vlSelf->testbench__DOT__uut__DOT__Q) 
                                                        >> 6U))));
        __Vdly__testbench__DOT__uut__DOT__Q = (0x1fU 
                                               & ((0x1000U 
                                                   & ((IData)(vlSelf->testbench__DOT__uut__DOT__A) 
                                                      << 4U)) 
                                                  | ((0xff0U 
                                                      & ((IData)(vlSelf->testbench__DOT__uut__DOT__A) 
                                                         << 3U)) 
                                                     | ((IData)(vlSelf->testbench__DOT__uut__DOT__Q) 
                                                        >> 1U))));
        __Vdly__testbench__DOT__uut__DOT__Q_1 = (1U 
                                                 & ((0x2000U 
                                                     & ((IData)(vlSelf->testbench__DOT__uut__DOT__A) 
                                                        << 5U)) 
                                                    | ((0x1fe0U 
                                                        & ((IData)(vlSelf->testbench__DOT__uut__DOT__A) 
                                                           << 4U)) 
                                                       | (IData)(vlSelf->testbench__DOT__uut__DOT__Q))));
    } else {
        vlSelf->testbench__DOT__product = (0xffU & (IData)(vlSelf->testbench__DOT__uut__DOT__A));
    }
    vlSelf->testbench__DOT__uut__DOT__A = __Vdly__testbench__DOT__uut__DOT__A;
    vlSelf->testbench__DOT__uut__DOT__Q = __Vdly__testbench__DOT__uut__DOT__Q;
    vlSelf->testbench__DOT__uut__DOT__Q_1 = __Vdly__testbench__DOT__uut__DOT__Q_1;
    vlSelf->testbench__DOT__uut__DOT__count = __Vdly__testbench__DOT__uut__DOT__count;
}

void Vbooth_radix4_multiplier___024root___eval_triggers__act(Vbooth_radix4_multiplier___024root* vlSelf);

bool Vbooth_radix4_multiplier___024root___eval_phase__act(Vbooth_radix4_multiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbooth_radix4_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_radix4_multiplier___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vbooth_radix4_multiplier___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vbooth_radix4_multiplier___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vbooth_radix4_multiplier___024root___eval_phase__nba(Vbooth_radix4_multiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbooth_radix4_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_radix4_multiplier___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vbooth_radix4_multiplier___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vbooth_radix4_multiplier___024root___dump_triggers__nba(Vbooth_radix4_multiplier___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vbooth_radix4_multiplier___024root___dump_triggers__act(Vbooth_radix4_multiplier___024root* vlSelf);
#endif  // VL_DEBUG

void Vbooth_radix4_multiplier___024root___eval(Vbooth_radix4_multiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbooth_radix4_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_radix4_multiplier___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vbooth_radix4_multiplier___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("testbench.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vbooth_radix4_multiplier___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("testbench.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vbooth_radix4_multiplier___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vbooth_radix4_multiplier___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vbooth_radix4_multiplier___024root___eval_debug_assertions(Vbooth_radix4_multiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbooth_radix4_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_radix4_multiplier___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
