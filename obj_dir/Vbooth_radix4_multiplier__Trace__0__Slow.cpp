// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbooth_radix4_multiplier__Syms.h"


VL_ATTR_COLD void Vbooth_radix4_multiplier___024root__trace_init_sub__TOP__0(Vbooth_radix4_multiplier___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbooth_radix4_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_radix4_multiplier___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("testbench", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+10,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+10,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"x",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"y",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,0,"product",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+6,0,"Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"M",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+8,0,"Q_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vbooth_radix4_multiplier___024root__trace_init_top(Vbooth_radix4_multiplier___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbooth_radix4_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_radix4_multiplier___024root__trace_init_top\n"); );
    // Body
    Vbooth_radix4_multiplier___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vbooth_radix4_multiplier___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vbooth_radix4_multiplier___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbooth_radix4_multiplier___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbooth_radix4_multiplier___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vbooth_radix4_multiplier___024root__trace_register(Vbooth_radix4_multiplier___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbooth_radix4_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_radix4_multiplier___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vbooth_radix4_multiplier___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vbooth_radix4_multiplier___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vbooth_radix4_multiplier___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vbooth_radix4_multiplier___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vbooth_radix4_multiplier___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_radix4_multiplier___024root__trace_const_0\n"); );
    // Init
    Vbooth_radix4_multiplier___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbooth_radix4_multiplier___024root*>(voidSelf);
    Vbooth_radix4_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vbooth_radix4_multiplier___024root__trace_full_0_sub_0(Vbooth_radix4_multiplier___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vbooth_radix4_multiplier___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_radix4_multiplier___024root__trace_full_0\n"); );
    // Init
    Vbooth_radix4_multiplier___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbooth_radix4_multiplier___024root*>(voidSelf);
    Vbooth_radix4_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vbooth_radix4_multiplier___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vbooth_radix4_multiplier___024root__trace_full_0_sub_0(Vbooth_radix4_multiplier___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vbooth_radix4_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbooth_radix4_multiplier___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->testbench__DOT__reset));
    bufp->fullCData(oldp+2,(vlSelf->testbench__DOT__x),4);
    bufp->fullCData(oldp+3,(vlSelf->testbench__DOT__y),4);
    bufp->fullCData(oldp+4,(vlSelf->testbench__DOT__product),8);
    bufp->fullSData(oldp+5,(vlSelf->testbench__DOT__uut__DOT__A),9);
    bufp->fullCData(oldp+6,(vlSelf->testbench__DOT__uut__DOT__Q),5);
    bufp->fullCData(oldp+7,(vlSelf->testbench__DOT__uut__DOT__M),5);
    bufp->fullBit(oldp+8,(vlSelf->testbench__DOT__uut__DOT__Q_1));
    bufp->fullIData(oldp+9,(vlSelf->testbench__DOT__uut__DOT__count),32);
    bufp->fullBit(oldp+10,(vlSelf->testbench__DOT__clk));
}
