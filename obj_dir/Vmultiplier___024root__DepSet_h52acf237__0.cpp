// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmultiplier.h for the primary calling header

#include "Vmultiplier__pch.h"
#include "Vmultiplier___024root.h"

void Vmultiplier___024root___eval_act(Vmultiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval_act\n"); );
}

void Vmultiplier___024root___nba_sequent__TOP__0(Vmultiplier___024root* vlSelf);

void Vmultiplier___024root___eval_nba(Vmultiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmultiplier___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vmultiplier___024root___nba_sequent__TOP__0(Vmultiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vdly__multiplier__DOT__c;
    __Vdly__multiplier__DOT__c = 0;
    IData/*31:0*/ __Vdly__multiplier__DOT__pp;
    __Vdly__multiplier__DOT__pp = 0;
    CData/*0:0*/ __Vdly__multiplier__DOT__flag;
    __Vdly__multiplier__DOT__flag = 0;
    IData/*31:0*/ __Vdly__multiplier__DOT__spp;
    __Vdly__multiplier__DOT__spp = 0;
    SData/*15:0*/ __Vdly__multiplier__DOT__i;
    __Vdly__multiplier__DOT__i = 0;
    SData/*15:0*/ __Vdly__multiplier__DOT__j;
    __Vdly__multiplier__DOT__j = 0;
    IData/*31:0*/ __Vdly__multiplier__DOT__prod;
    __Vdly__multiplier__DOT__prod = 0;
    CData/*0:0*/ __Vdly__multiplier__DOT__temp;
    __Vdly__multiplier__DOT__temp = 0;
    // Body
    __Vdly__multiplier__DOT__temp = vlSelf->multiplier__DOT__temp;
    __Vdly__multiplier__DOT__prod = vlSelf->multiplier__DOT__prod;
    __Vdly__multiplier__DOT__j = vlSelf->multiplier__DOT__j;
    __Vdly__multiplier__DOT__i = vlSelf->multiplier__DOT__i;
    __Vdly__multiplier__DOT__spp = vlSelf->multiplier__DOT__spp;
    __Vdly__multiplier__DOT__flag = vlSelf->multiplier__DOT__flag;
    __Vdly__multiplier__DOT__pp = vlSelf->multiplier__DOT__pp;
    __Vdly__multiplier__DOT__c = vlSelf->multiplier__DOT__c;
    if (vlSelf->reset) {
        __Vdly__multiplier__DOT__c = 0U;
        __Vdly__multiplier__DOT__pp = 0U;
        __Vdly__multiplier__DOT__flag = 0U;
        __Vdly__multiplier__DOT__spp = 0U;
        __Vdly__multiplier__DOT__i = 0U;
        __Vdly__multiplier__DOT__j = 0U;
        __Vdly__multiplier__DOT__prod = 0U;
        vlSelf->out = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->multiplier__DOT__flag)))) {
            __Vdly__multiplier__DOT__c = (6U & ((IData)(vlSelf->y) 
                                                << 1U));
            __Vdly__multiplier__DOT__flag = 1U;
        }
        if ((4U & (IData)(vlSelf->multiplier__DOT__c))) {
            if ((2U & (IData)(vlSelf->multiplier__DOT__c))) {
                if ((1U & (IData)(vlSelf->multiplier__DOT__c))) {
                    if ((8U > (IData)(vlSelf->multiplier__DOT__i))) {
                        __Vdly__multiplier__DOT__i 
                            = (0xffffU & ((IData)(1U) 
                                          + (IData)(vlSelf->multiplier__DOT__i)));
                        __Vdly__multiplier__DOT__c 
                            = ((4U & (((IData)(vlSelf->y) 
                                       >> (0xfU & ((IData)(1U) 
                                                   + 
                                                   VL_SHIFTL_III(4,32,32, (IData)(vlSelf->multiplier__DOT__i), 1U)))) 
                                      << 2U)) | ((2U 
                                                  & (((IData)(vlSelf->y) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,32,32, (IData)(vlSelf->multiplier__DOT__i), 1U))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((IData)(vlSelf->y) 
                                                       >> 
                                                       (0xfU 
                                                        & (VL_SHIFTL_III(4,32,32, (IData)(vlSelf->multiplier__DOT__i), 1U) 
                                                           - (IData)(1U)))))));
                    } else {
                        __Vdly__multiplier__DOT__c = 0U;
                    }
                } else if ((8U > (IData)(vlSelf->multiplier__DOT__i))) {
                    __Vdly__multiplier__DOT__i = (0xffffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->multiplier__DOT__i)));
                    __Vdly__multiplier__DOT__c = ((4U 
                                                   & (((IData)(vlSelf->y) 
                                                       >> 
                                                       (0xfU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_SHIFTL_III(4,32,32, (IData)(vlSelf->multiplier__DOT__i), 1U)))) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & (((IData)(vlSelf->y) 
                                                          >> 
                                                          (0xfU 
                                                           & VL_SHIFTL_III(4,32,32, (IData)(vlSelf->multiplier__DOT__i), 1U))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelf->y) 
                                                           >> 
                                                           (0xfU 
                                                            & (VL_SHIFTL_III(4,32,32, (IData)(vlSelf->multiplier__DOT__i), 1U) 
                                                               - (IData)(1U)))))));
                    if ((1U == (IData)(vlSelf->multiplier__DOT__i))) {
                        __Vdly__multiplier__DOT__prod 
                            = vlSelf->multiplier__DOT__pp;
                    } else {
                        __Vdly__multiplier__DOT__temp 
                            = (vlSelf->multiplier__DOT__pp 
                               >> 0x1fU);
                        __Vdly__multiplier__DOT__j 
                            = (0xffffU & ((IData)(vlSelf->multiplier__DOT__i) 
                                          - (IData)(1U)));
                        __Vdly__multiplier__DOT__j 
                            = (0xffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelf->multiplier__DOT__j), 1U));
                        __Vdly__multiplier__DOT__spp 
                            = VL_SHIFTL_III(32,32,16, vlSelf->multiplier__DOT__pp, (IData)(vlSelf->multiplier__DOT__j));
                        __Vdly__multiplier__DOT__spp 
                            = (((IData)(vlSelf->multiplier__DOT__temp) 
                                << 0x1fU) | (0x7fffffffU 
                                             & vlSelf->multiplier__DOT__spp));
                        __Vdly__multiplier__DOT__prod 
                            = (vlSelf->multiplier__DOT__prod 
                               + vlSelf->multiplier__DOT__spp);
                    }
                    __Vdly__multiplier__DOT__pp = (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (((IData)(1U) 
                                                                    + 
                                                                    (~ (IData)(vlSelf->x))) 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(vlSelf->x)))));
                } else {
                    __Vdly__multiplier__DOT__c = 0U;
                }
            } else if ((1U & (IData)(vlSelf->multiplier__DOT__c))) {
                if ((8U > (IData)(vlSelf->multiplier__DOT__i))) {
                    __Vdly__multiplier__DOT__i = (0xffffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->multiplier__DOT__i)));
                    __Vdly__multiplier__DOT__c = ((4U 
                                                   & (((IData)(vlSelf->y) 
                                                       >> 
                                                       (0xfU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_SHIFTL_III(4,32,32, (IData)(vlSelf->multiplier__DOT__i), 1U)))) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & (((IData)(vlSelf->y) 
                                                          >> 
                                                          (0xfU 
                                                           & VL_SHIFTL_III(4,32,32, (IData)(vlSelf->multiplier__DOT__i), 1U))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelf->y) 
                                                           >> 
                                                           (0xfU 
                                                            & (VL_SHIFTL_III(4,32,32, (IData)(vlSelf->multiplier__DOT__i), 1U) 
                                                               - (IData)(1U)))))));
                    if ((1U == (IData)(vlSelf->multiplier__DOT__i))) {
                        __Vdly__multiplier__DOT__prod 
                            = vlSelf->multiplier__DOT__pp;
                    } else {
                        __Vdly__multiplier__DOT__temp 
                            = (vlSelf->multiplier__DOT__pp 
                               >> 0x1fU);
                        __Vdly__multiplier__DOT__j 
                            = (0xffffU & ((IData)(vlSelf->multiplier__DOT__i) 
                                          - (IData)(1U)));
                        __Vdly__multiplier__DOT__j 
                            = (0xffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelf->multiplier__DOT__j), 1U));
                        __Vdly__multiplier__DOT__spp 
                            = VL_SHIFTL_III(32,32,16, vlSelf->multiplier__DOT__pp, (IData)(vlSelf->multiplier__DOT__j));
                        __Vdly__multiplier__DOT__spp 
                            = (((IData)(vlSelf->multiplier__DOT__temp) 
                                << 0x1fU) | (0x7fffffffU 
                                             & vlSelf->multiplier__DOT__spp));
                        __Vdly__multiplier__DOT__prod 
                            = (vlSelf->multiplier__DOT__prod 
                               + vlSelf->multiplier__DOT__spp);
                    }
                    __Vdly__multiplier__DOT__pp = (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (((IData)(1U) 
                                                                    + 
                                                                    (~ (IData)(vlSelf->x))) 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ (IData)(vlSelf->x)))));
                } else {
                    __Vdly__multiplier__DOT__c = 0U;
                }
            } else if ((8U > (IData)(vlSelf->multiplier__DOT__i))) {
                __Vdly__multiplier__DOT__i = (0xffffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->multiplier__DOT__i)));
                __Vdly__multiplier__DOT__c = ((4U & 
                                               (((IData)(vlSelf->y) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     VL_SHIFTL_III(4,32,32, (IData)(vlSelf->multiplier__DOT__i), 1U)))) 
                                                << 2U)) 
                                              | ((2U 
                                                  & (((IData)(vlSelf->y) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,32,32, (IData)(vlSelf->multiplier__DOT__i), 1U))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((IData)(vlSelf->y) 
                                                       >> 
                                                       (0xfU 
                                                        & (VL_SHIFTL_III(4,32,32, (IData)(vlSelf->multiplier__DOT__i), 1U) 
                                                           - (IData)(1U)))))));
                if ((1U == (IData)(vlSelf->multiplier__DOT__i))) {
                    __Vdly__multiplier__DOT__prod = vlSelf->multiplier__DOT__pp;
                } else {
                    __Vdly__multiplier__DOT__temp = 
                        (vlSelf->multiplier__DOT__pp 
                         >> 0x1fU);
                    __Vdly__multiplier__DOT__j = (0xffffU 
                                                  & ((IData)(vlSelf->multiplier__DOT__i) 
                                                     - (IData)(1U)));
                    __Vdly__multiplier__DOT__j = (0xffffU 
                                                  & VL_SHIFTL_III(16,16,32, (IData)(vlSelf->multiplier__DOT__j), 1U));
                    __Vdly__multiplier__DOT__spp = 
                        VL_SHIFTL_III(32,32,16, vlSelf->multiplier__DOT__pp, (IData)(vlSelf->multiplier__DOT__j));
                    __Vdly__multiplier__DOT__spp = 
                        (((IData)(vlSelf->multiplier__DOT__temp) 
                          << 0x1fU) | (0x7fffffffU 
                                       & vlSelf->multiplier__DOT__spp));
                    __Vdly__multiplier__DOT__prod = 
                        (vlSelf->multiplier__DOT__prod 
                         + vlSelf->multiplier__DOT__spp);
                }
                __Vdly__multiplier__DOT__pp = (((- (IData)(
                                                           (1U 
                                                            & (((IData)(1U) 
                                                                + 
                                                                (~ (IData)(vlSelf->x))) 
                                                               >> 0xfU)))) 
                                                << 0x11U) 
                                               | (0x1fffeU 
                                                  & (((IData)(1U) 
                                                      + 
                                                      (~ (IData)(vlSelf->x))) 
                                                     << 1U)));
            } else {
                __Vdly__multiplier__DOT__c = 0U;
            }
        } else if ((2U & (IData)(vlSelf->multiplier__DOT__c))) {
            if ((1U & (IData)(vlSelf->multiplier__DOT__c))) {
                if ((8U > (IData)(vlSelf->multiplier__DOT__i))) {
                    __Vdly__multiplier__DOT__i = (0xffffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->multiplier__DOT__i)));
                    __Vdly__multiplier__DOT__c = ((4U 
                                                   & (((IData)(vlSelf->y) 
                                                       >> 
                                                       (0xfU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_SHIFTL_III(4,32,32, (IData)(vlSelf->multiplier__DOT__i), 1U)))) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & (((IData)(vlSelf->y) 
                                                          >> 
                                                          (0xfU 
                                                           & VL_SHIFTL_III(4,32,32, (IData)(vlSelf->multiplier__DOT__i), 1U))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelf->y) 
                                                           >> 
                                                           (0xfU 
                                                            & (VL_SHIFTL_III(4,32,32, (IData)(vlSelf->multiplier__DOT__i), 1U) 
                                                               - (IData)(1U)))))));
                    if ((1U == (IData)(vlSelf->multiplier__DOT__i))) {
                        __Vdly__multiplier__DOT__prod 
                            = vlSelf->multiplier__DOT__pp;
                    } else {
                        __Vdly__multiplier__DOT__temp 
                            = (vlSelf->multiplier__DOT__pp 
                               >> 0x1fU);
                        __Vdly__multiplier__DOT__j 
                            = (0xffffU & ((IData)(vlSelf->multiplier__DOT__i) 
                                          - (IData)(1U)));
                        __Vdly__multiplier__DOT__j 
                            = (0xffffU & VL_SHIFTL_III(16,16,32, (IData)(vlSelf->multiplier__DOT__j), 1U));
                        __Vdly__multiplier__DOT__spp 
                            = VL_SHIFTL_III(32,32,16, vlSelf->multiplier__DOT__pp, (IData)(vlSelf->multiplier__DOT__j));
                        __Vdly__multiplier__DOT__spp 
                            = (((IData)(vlSelf->multiplier__DOT__temp) 
                                << 0x1fU) | (0x7fffffffU 
                                             & vlSelf->multiplier__DOT__spp));
                        __Vdly__multiplier__DOT__prod 
                            = (vlSelf->multiplier__DOT__prod 
                               + vlSelf->multiplier__DOT__spp);
                    }
                    __Vdly__multiplier__DOT__pp = (
                                                   ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->x) 
                                                                   >> 0xfU)))) 
                                                    << 0x11U) 
                                                   | ((IData)(vlSelf->x) 
                                                      << 1U));
                } else {
                    __Vdly__multiplier__DOT__c = 0U;
                }
            } else if ((8U > (IData)(vlSelf->multiplier__DOT__i))) {
                __Vdly__multiplier__DOT__i = (0xffffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->multiplier__DOT__i)));
                __Vdly__multiplier__DOT__c = ((4U & 
                                               (((IData)(vlSelf->y) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     VL_SHIFTL_III(4,32,32, (IData)(vlSelf->multiplier__DOT__i), 1U)))) 
                                                << 2U)) 
                                              | ((2U 
                                                  & (((IData)(vlSelf->y) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,32,32, (IData)(vlSelf->multiplier__DOT__i), 1U))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((IData)(vlSelf->y) 
                                                       >> 
                                                       (0xfU 
                                                        & (VL_SHIFTL_III(4,32,32, (IData)(vlSelf->multiplier__DOT__i), 1U) 
                                                           - (IData)(1U)))))));
                if ((1U == (IData)(vlSelf->multiplier__DOT__i))) {
                    __Vdly__multiplier__DOT__prod = vlSelf->multiplier__DOT__pp;
                } else {
                    __Vdly__multiplier__DOT__temp = 
                        (vlSelf->multiplier__DOT__pp 
                         >> 0x1fU);
                    __Vdly__multiplier__DOT__j = (0xffffU 
                                                  & ((IData)(vlSelf->multiplier__DOT__i) 
                                                     - (IData)(1U)));
                    __Vdly__multiplier__DOT__j = (0xffffU 
                                                  & VL_SHIFTL_III(16,16,32, (IData)(vlSelf->multiplier__DOT__j), 1U));
                    __Vdly__multiplier__DOT__spp = 
                        VL_SHIFTL_III(32,32,16, vlSelf->multiplier__DOT__pp, (IData)(vlSelf->multiplier__DOT__j));
                    __Vdly__multiplier__DOT__spp = 
                        (((IData)(vlSelf->multiplier__DOT__temp) 
                          << 0x1fU) | (0x7fffffffU 
                                       & vlSelf->multiplier__DOT__spp));
                    __Vdly__multiplier__DOT__prod = 
                        (vlSelf->multiplier__DOT__prod 
                         + vlSelf->multiplier__DOT__spp);
                }
                __Vdly__multiplier__DOT__pp = (((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->x) 
                                                               >> 0xfU)))) 
                                                << 0x10U) 
                                               | (IData)(vlSelf->x));
            } else {
                __Vdly__multiplier__DOT__c = 0U;
            }
        } else if ((1U & (IData)(vlSelf->multiplier__DOT__c))) {
            if ((8U > (IData)(vlSelf->multiplier__DOT__i))) {
                __Vdly__multiplier__DOT__i = (0xffffU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->multiplier__DOT__i)));
                __Vdly__multiplier__DOT__c = ((4U & 
                                               (((IData)(vlSelf->y) 
                                                 >> 
                                                 (0xfU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     VL_SHIFTL_III(4,32,32, (IData)(vlSelf->multiplier__DOT__i), 1U)))) 
                                                << 2U)) 
                                              | ((2U 
                                                  & (((IData)(vlSelf->y) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,32,32, (IData)(vlSelf->multiplier__DOT__i), 1U))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((IData)(vlSelf->y) 
                                                       >> 
                                                       (0xfU 
                                                        & (VL_SHIFTL_III(4,32,32, (IData)(vlSelf->multiplier__DOT__i), 1U) 
                                                           - (IData)(1U)))))));
                if ((1U == (IData)(vlSelf->multiplier__DOT__i))) {
                    __Vdly__multiplier__DOT__prod = vlSelf->multiplier__DOT__pp;
                } else {
                    __Vdly__multiplier__DOT__temp = 
                        (vlSelf->multiplier__DOT__pp 
                         >> 0x1fU);
                    __Vdly__multiplier__DOT__j = (0xffffU 
                                                  & ((IData)(vlSelf->multiplier__DOT__i) 
                                                     - (IData)(1U)));
                    __Vdly__multiplier__DOT__j = (0xffffU 
                                                  & VL_SHIFTL_III(16,16,32, (IData)(vlSelf->multiplier__DOT__j), 1U));
                    __Vdly__multiplier__DOT__spp = 
                        VL_SHIFTL_III(32,32,16, vlSelf->multiplier__DOT__pp, (IData)(vlSelf->multiplier__DOT__j));
                    __Vdly__multiplier__DOT__spp = 
                        (((IData)(vlSelf->multiplier__DOT__temp) 
                          << 0x1fU) | (0x7fffffffU 
                                       & vlSelf->multiplier__DOT__spp));
                    __Vdly__multiplier__DOT__prod = 
                        (vlSelf->multiplier__DOT__prod 
                         + vlSelf->multiplier__DOT__spp);
                }
                __Vdly__multiplier__DOT__pp = (((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->x) 
                                                               >> 0xfU)))) 
                                                << 0x10U) 
                                               | (IData)(vlSelf->x));
            } else {
                __Vdly__multiplier__DOT__c = 0U;
            }
        } else if ((8U > (IData)(vlSelf->multiplier__DOT__i))) {
            __Vdly__multiplier__DOT__i = (0xffffU & 
                                          ((IData)(1U) 
                                           + (IData)(vlSelf->multiplier__DOT__i)));
            __Vdly__multiplier__DOT__c = ((4U & (((IData)(vlSelf->y) 
                                                  >> 
                                                  (0xfU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      VL_SHIFTL_III(4,32,32, (IData)(vlSelf->multiplier__DOT__i), 1U)))) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (((IData)(vlSelf->y) 
                                                >> 
                                                (0xfU 
                                                 & VL_SHIFTL_III(4,32,32, (IData)(vlSelf->multiplier__DOT__i), 1U))) 
                                               << 1U)) 
                                             | (1U 
                                                & ((IData)(vlSelf->y) 
                                                   >> 
                                                   (0xfU 
                                                    & (VL_SHIFTL_III(4,32,32, (IData)(vlSelf->multiplier__DOT__i), 1U) 
                                                       - (IData)(1U)))))));
        } else {
            __Vdly__multiplier__DOT__c = 0U;
        }
    }
    vlSelf->multiplier__DOT__c = __Vdly__multiplier__DOT__c;
    vlSelf->multiplier__DOT__pp = __Vdly__multiplier__DOT__pp;
    vlSelf->multiplier__DOT__flag = __Vdly__multiplier__DOT__flag;
    vlSelf->multiplier__DOT__spp = __Vdly__multiplier__DOT__spp;
    vlSelf->multiplier__DOT__i = __Vdly__multiplier__DOT__i;
    vlSelf->multiplier__DOT__j = __Vdly__multiplier__DOT__j;
    vlSelf->multiplier__DOT__prod = __Vdly__multiplier__DOT__prod;
    vlSelf->multiplier__DOT__temp = __Vdly__multiplier__DOT__temp;
}

void Vmultiplier___024root___eval_triggers__act(Vmultiplier___024root* vlSelf);

bool Vmultiplier___024root___eval_phase__act(Vmultiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmultiplier___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vmultiplier___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmultiplier___024root___eval_phase__nba(Vmultiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmultiplier___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier___024root___dump_triggers__nba(Vmultiplier___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmultiplier___024root___dump_triggers__act(Vmultiplier___024root* vlSelf);
#endif  // VL_DEBUG

void Vmultiplier___024root___eval(Vmultiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vmultiplier___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("C:/Users/g_sie/CLionProjects/OiAK_Projekt_Cpp_Verilog/verilog\\BoothRadix4.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vmultiplier___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("C:/Users/g_sie/CLionProjects/OiAK_Projekt_Cpp_Verilog/verilog\\BoothRadix4.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vmultiplier___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vmultiplier___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmultiplier___024root___eval_debug_assertions(Vmultiplier___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmultiplier___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
