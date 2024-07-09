// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmux21.h"
#include "Vmux21__Syms.h"

//============================================================
// Constructors

Vmux21::Vmux21(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmux21__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , s{vlSymsp->TOP.s}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmux21::Vmux21(const char* _vcname__)
    : Vmux21(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmux21::~Vmux21() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmux21___024root___eval_debug_assertions(Vmux21___024root* vlSelf);
#endif  // VL_DEBUG
void Vmux21___024root___eval_static(Vmux21___024root* vlSelf);
void Vmux21___024root___eval_initial(Vmux21___024root* vlSelf);
void Vmux21___024root___eval_settle(Vmux21___024root* vlSelf);
void Vmux21___024root___eval(Vmux21___024root* vlSelf);

void Vmux21::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmux21::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmux21___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmux21___024root___eval_static(&(vlSymsp->TOP));
        Vmux21___024root___eval_initial(&(vlSymsp->TOP));
        Vmux21___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmux21___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmux21::eventsPending() { return false; }

uint64_t Vmux21::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmux21::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmux21___024root___eval_final(Vmux21___024root* vlSelf);

VL_ATTR_COLD void Vmux21::final() {
    Vmux21___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmux21::hierName() const { return vlSymsp->name(); }
const char* Vmux21::modelName() const { return "Vmux21"; }
unsigned Vmux21::threads() const { return 1; }
