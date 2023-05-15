#define SC_INCLUDE_FX
#include <systemc>

sc_dt::sc_fixed<16,8> mod1() {
    sc_dt::sc_int<1> x0 = sc_dt::sc_int<1>(-1);
    sc_dt::sc_fixed<16,8> x1 = sc_dt::sc_fixed<16,8>(x0.range(0, 0));
    return x1;
}

#include<Hector.h>

void hector_wrapper() {
    sc_dt::sc_fixed<16,8> out;

    Hector::registerOutput("out", out);

    Hector::beginCapture();
    out = mod1();
    Hector::endCapture();
}
