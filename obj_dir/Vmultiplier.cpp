// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmultiplier__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmultiplier::Vmultiplier(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmultiplier__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , x{vlSymsp->TOP.x}
    , y{vlSymsp->TOP.y}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vmultiplier::Vmultiplier(const char* _vcname__)
    : Vmultiplier(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmultiplier::~Vmultiplier() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmultiplier___024root___eval_debug_assertions(Vmultiplier___024root* vlSelf);
#endif  // VL_DEBUG
void Vmultiplier___024root___eval_static(Vmultiplier___024root* vlSelf);
void Vmultiplier___024root___eval_initial(Vmultiplier___024root* vlSelf);
void Vmultiplier___024root___eval_settle(Vmultiplier___024root* vlSelf);
void Vmultiplier___024root___eval(Vmultiplier___024root* vlSelf);

void Vmultiplier::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmultiplier::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmultiplier___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmultiplier___024root___eval_static(&(vlSymsp->TOP));
        Vmultiplier___024root___eval_initial(&(vlSymsp->TOP));
        Vmultiplier___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmultiplier___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmultiplier::eventsPending() { return false; }

uint64_t Vmultiplier::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmultiplier::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmultiplier___024root___eval_final(Vmultiplier___024root* vlSelf);

VL_ATTR_COLD void Vmultiplier::final() {
    Vmultiplier___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmultiplier::hierName() const { return vlSymsp->name(); }
const char* Vmultiplier::modelName() const { return "Vmultiplier"; }
unsigned Vmultiplier::threads() const { return 1; }
void Vmultiplier::prepareClone() const { contextp()->prepareClone(); }
void Vmultiplier::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vmultiplier::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmultiplier___024root__trace_decl_types(VerilatedVcd* tracep);

void Vmultiplier___024root__trace_init_top(Vmultiplier___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmultiplier___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmultiplier___024root*>(voidSelf);
    Vmultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vmultiplier___024root__trace_decl_types(tracep);
    Vmultiplier___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmultiplier___024root__trace_register(Vmultiplier___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmultiplier::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmultiplier::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmultiplier___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
