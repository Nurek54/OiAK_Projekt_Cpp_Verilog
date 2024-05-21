// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vbooth_radix4_multiplier__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vbooth_radix4_multiplier::Vbooth_radix4_multiplier(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vbooth_radix4_multiplier__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vbooth_radix4_multiplier::Vbooth_radix4_multiplier(const char* _vcname__)
    : Vbooth_radix4_multiplier(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vbooth_radix4_multiplier::~Vbooth_radix4_multiplier() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vbooth_radix4_multiplier___024root___eval_debug_assertions(Vbooth_radix4_multiplier___024root* vlSelf);
#endif  // VL_DEBUG
void Vbooth_radix4_multiplier___024root___eval_static(Vbooth_radix4_multiplier___024root* vlSelf);
void Vbooth_radix4_multiplier___024root___eval_initial(Vbooth_radix4_multiplier___024root* vlSelf);
void Vbooth_radix4_multiplier___024root___eval_settle(Vbooth_radix4_multiplier___024root* vlSelf);
void Vbooth_radix4_multiplier___024root___eval(Vbooth_radix4_multiplier___024root* vlSelf);

void Vbooth_radix4_multiplier::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbooth_radix4_multiplier::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vbooth_radix4_multiplier___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vbooth_radix4_multiplier___024root___eval_static(&(vlSymsp->TOP));
        Vbooth_radix4_multiplier___024root___eval_initial(&(vlSymsp->TOP));
        Vbooth_radix4_multiplier___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vbooth_radix4_multiplier___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vbooth_radix4_multiplier::eventsPending() { return false; }

uint64_t Vbooth_radix4_multiplier::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vbooth_radix4_multiplier::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vbooth_radix4_multiplier___024root___eval_final(Vbooth_radix4_multiplier___024root* vlSelf);

VL_ATTR_COLD void Vbooth_radix4_multiplier::final() {
    Vbooth_radix4_multiplier___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vbooth_radix4_multiplier::hierName() const { return vlSymsp->name(); }
const char* Vbooth_radix4_multiplier::modelName() const { return "Vbooth_radix4_multiplier"; }
unsigned Vbooth_radix4_multiplier::threads() const { return 1; }
void Vbooth_radix4_multiplier::prepareClone() const { contextp()->prepareClone(); }
void Vbooth_radix4_multiplier::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vbooth_radix4_multiplier::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vbooth_radix4_multiplier___024root__trace_decl_types(VerilatedVcd* tracep);

void Vbooth_radix4_multiplier___024root__trace_init_top(Vbooth_radix4_multiplier___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vbooth_radix4_multiplier___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbooth_radix4_multiplier___024root*>(voidSelf);
    Vbooth_radix4_multiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vbooth_radix4_multiplier___024root__trace_decl_types(tracep);
    Vbooth_radix4_multiplier___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vbooth_radix4_multiplier___024root__trace_register(Vbooth_radix4_multiplier___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vbooth_radix4_multiplier::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vbooth_radix4_multiplier::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vbooth_radix4_multiplier___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
