// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbooth_radix4_multiplier__Syms.h"


void Vbooth_radix4_multiplier___024root__trace_chg_0_sub_0(Vbooth_radix4_multiplier___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vbooth_radix4_multiplier___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_radix4_multiplier___024root__trace_chg_0\n"); );
    // Init
    Vbooth_radix4_multiplier___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbooth_radix4_multiplier___024root*>(voidSelf);
    Vbooth_radix4_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vbooth_radix4_multiplier___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vbooth_radix4_multiplier___024root__trace_chg_0_sub_0(Vbooth_radix4_multiplier___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbooth_radix4_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_radix4_multiplier___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSelf->testbench__DOT__reset));
        bufp->chgCData(oldp+1,(vlSelf->testbench__DOT__x),4);
        bufp->chgCData(oldp+2,(vlSelf->testbench__DOT__y),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+3,(vlSelf->testbench__DOT__product),8);
        bufp->chgSData(oldp+4,(vlSelf->testbench__DOT__uut__DOT__A),9);
        bufp->chgCData(oldp+5,(vlSelf->testbench__DOT__uut__DOT__Q),5);
        bufp->chgCData(oldp+6,(vlSelf->testbench__DOT__uut__DOT__M),5);
        bufp->chgBit(oldp+7,(vlSelf->testbench__DOT__uut__DOT__Q_1));
        bufp->chgIData(oldp+8,(vlSelf->testbench__DOT__uut__DOT__count),32);
    }
    bufp->chgBit(oldp+9,(vlSelf->testbench__DOT__clk));
}

void Vbooth_radix4_multiplier___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_radix4_multiplier___024root__trace_cleanup\n"); );
    // Init
    Vbooth_radix4_multiplier___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbooth_radix4_multiplier___024root*>(voidSelf);
    Vbooth_radix4_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
