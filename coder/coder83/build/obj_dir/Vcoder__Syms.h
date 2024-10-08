// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCODER__SYMS_H_
#define VERILATED_VCODER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcoder.h"

// INCLUDE MODULE CLASSES
#include "Vcoder___024root.h"

// SYMS CLASS (contains all model state)
class Vcoder__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcoder* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcoder___024root               TOP;

    // CONSTRUCTORS
    Vcoder__Syms(VerilatedContext* contextp, const char* namep, Vcoder* modelp);
    ~Vcoder__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
