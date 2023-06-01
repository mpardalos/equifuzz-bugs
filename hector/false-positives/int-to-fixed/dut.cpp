#define SC_INCLUDE_FX
#include <systemc>

sc_dt::sc_fixed<16,8> dut() {
    sc_dt::sc_int<1> x0 = sc_dt::sc_int<1>(-1);
    sc_dt::sc_fixed<16,8> x1 = sc_dt::sc_fixed<16,8>(x0.range(0, 0));
    return x1;
}
