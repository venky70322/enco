// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencoder.h for the primary calling header

#include "Vencoder__pch.h"

void Vencoder___024root___ctor_var_reset(Vencoder___024root* vlSelf);

Vencoder___024root::Vencoder___024root(Vencoder__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vencoder___024root___ctor_var_reset(this);
}

void Vencoder___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vencoder___024root::~Vencoder___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
