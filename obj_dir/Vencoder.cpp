// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vencoder__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vencoder::Vencoder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vencoder__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vencoder::Vencoder(const char* _vcname__)
    : Vencoder(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vencoder::~Vencoder() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vencoder___024root___eval_debug_assertions(Vencoder___024root* vlSelf);
#endif  // VL_DEBUG
void Vencoder___024root___eval_static(Vencoder___024root* vlSelf);
void Vencoder___024root___eval_initial(Vencoder___024root* vlSelf);
void Vencoder___024root___eval_settle(Vencoder___024root* vlSelf);
void Vencoder___024root___eval(Vencoder___024root* vlSelf);

void Vencoder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vencoder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vencoder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vencoder___024root___eval_static(&(vlSymsp->TOP));
        Vencoder___024root___eval_initial(&(vlSymsp->TOP));
        Vencoder___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vencoder___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vencoder::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vencoder::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vencoder::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vencoder::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vencoder::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vencoder___024root___eval_final(Vencoder___024root* vlSelf);

VL_ATTR_COLD void Vencoder::final() {
    Vencoder___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vencoder::hierName() const { return vlSymsp->name(); }
const char* Vencoder::modelName() const { return "Vencoder"; }
unsigned Vencoder::threads() const { return 1; }
void Vencoder::prepareClone() const { contextp()->prepareClone(); }
void Vencoder::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vencoder::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vencoder___024root__trace_decl_types(VerilatedVcd* tracep);

void Vencoder___024root__trace_init_top(Vencoder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vencoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vencoder___024root*>(voidSelf);
    Vencoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vencoder___024root__trace_decl_types(tracep);
    Vencoder___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vencoder___024root__trace_register(Vencoder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vencoder::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vencoder::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 2);
    Vencoder___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
