// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VFSM_TOP__SYMS_H_
#define VERILATED_VFSM_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VFSM_top.h"

// INCLUDE MODULE CLASSES
#include "VFSM_top___024root.h"

// SYMS CLASS (contains all model state)
class VFSM_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VFSM_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VFSM_top___024root             TOP;

    // CONSTRUCTORS
    VFSM_top__Syms(VerilatedContext* contextp, const char* namep, VFSM_top* modelp);
    ~VFSM_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
