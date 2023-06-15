#define SC_INCLUDE_FX
#include <systemc>

sc_dt::sc_int<30> dut() {
    sc_dt::sc_int<43> x0 = sc_dt::sc_int<43>(( ( 74 - (-692) ) - 883 )); // ()
    sc_dt::sc_uint<61> x1 = sc_dt::sc_uint<61>(( x0 - 435 )); // ()
    sc_dt::sc_int<30> x2 = sc_dt::sc_int<30>(x1[39]); // ()
    return x2; // ()
}

#include<Hector.h>

void impl() {

    sc_dt::sc_int<30> out;


    Hector::registerOutput("out", out);

    Hector::beginCapture();
    out = dut();
    Hector::endCapture();
}
