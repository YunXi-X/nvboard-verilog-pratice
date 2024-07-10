// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcla.h"
#include "Vcla__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcla::Vcla(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcla__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , cin{vlSymsp->TOP.cin}
    , sum{vlSymsp->TOP.sum}
    , cout{vlSymsp->TOP.cout}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcla::Vcla(const char* _vcname__)
    : Vcla(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcla::~Vcla() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcla___024root___eval_debug_assertions(Vcla___024root* vlSelf);
#endif  // VL_DEBUG
void Vcla___024root___eval_static(Vcla___024root* vlSelf);
void Vcla___024root___eval_initial(Vcla___024root* vlSelf);
void Vcla___024root___eval_settle(Vcla___024root* vlSelf);
void Vcla___024root___eval(Vcla___024root* vlSelf);

void Vcla::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcla::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcla___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcla___024root___eval_static(&(vlSymsp->TOP));
        Vcla___024root___eval_initial(&(vlSymsp->TOP));
        Vcla___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcla___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcla::eventsPending() { return false; }

uint64_t Vcla::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcla::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcla___024root___eval_final(Vcla___024root* vlSelf);

VL_ATTR_COLD void Vcla::final() {
    Vcla___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcla::hierName() const { return vlSymsp->name(); }
const char* Vcla::modelName() const { return "Vcla"; }
unsigned Vcla::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vcla::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcla___024root__trace_init_top(Vcla___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcla___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcla___024root*>(voidSelf);
    Vcla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vcla___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vcla___024root__trace_register(Vcla___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcla::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcla::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcla___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
