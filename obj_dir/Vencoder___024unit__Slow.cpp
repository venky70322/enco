// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencoder.h for the primary calling header

#include "Vencoder__pch.h"

void Vencoder___024unit___ctor_var_reset(Vencoder___024unit* vlSelf);

Vencoder___024unit::Vencoder___024unit() = default;
Vencoder___024unit::~Vencoder___024unit() = default;

void Vencoder___024unit::ctor(Vencoder__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vencoder___024unit___ctor_var_reset(this);
}

void Vencoder___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vencoder___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
