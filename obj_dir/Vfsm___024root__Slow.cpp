// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfsm.h for the primary calling header

#include "Vfsm__pch.h"
#include "Vfsm__Syms.h"
#include "Vfsm___024root.h"

void Vfsm___024root___ctor_var_reset(Vfsm___024root* vlSelf);

Vfsm___024root::Vfsm___024root(Vfsm__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vfsm___024root___ctor_var_reset(this);
}

void Vfsm___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vfsm___024root::~Vfsm___024root() {
}
