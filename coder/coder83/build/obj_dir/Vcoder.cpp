// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcoder.h"
#include "Vcoder__Syms.h"

//============================================================
// Constructors

Vcoder::Vcoder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcoder__Syms(contextp(), _vcname__, this)}
    , en{vlSymsp->TOP.en}
    , x{vlSymsp->TOP.x}
    , out{vlSymsp->TOP.out}
    , seg{vlSymsp->TOP.seg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcoder::Vcoder(const char* _vcname__)
    : Vcoder(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcoder::~Vcoder() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcoder___024root___eval_debug_assertions(Vcoder___024root* vlSelf);
#endif  // VL_DEBUG
void Vcoder___024root___eval_static(Vcoder___024root* vlSelf);
void Vcoder___024root___eval_initial(Vcoder___024root* vlSelf);
void Vcoder___024root___eval_settle(Vcoder___024root* vlSelf);
void Vcoder___024root___eval(Vcoder___024root* vlSelf);

void Vcoder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcoder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcoder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcoder___024root___eval_static(&(vlSymsp->TOP));
        Vcoder___024root___eval_initial(&(vlSymsp->TOP));
        Vcoder___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcoder___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcoder::eventsPending() { return false; }

uint64_t Vcoder::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcoder::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcoder___024root___eval_final(Vcoder___024root* vlSelf);

VL_ATTR_COLD void Vcoder::final() {
    Vcoder___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcoder::hierName() const { return vlSymsp->name(); }
const char* Vcoder::modelName() const { return "Vcoder"; }
unsigned Vcoder::threads() const { return 1; }
