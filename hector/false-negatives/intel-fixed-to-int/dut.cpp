#define SC_INCLUDE_FX
#include <systemc>

sc_dt::sc_int<8> dut() {
    sc_dt::sc_fixed<8, 3, sc_dt::SC_TRN, sc_dt::SC_WRAP> a=1.5;
    sc_dt::sc_int<8> c = sc_dt::sc_int<8>(a);
    return c;
}
