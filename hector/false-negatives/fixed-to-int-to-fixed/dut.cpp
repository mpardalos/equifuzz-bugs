#define SC_INCLUDE_FX
#include <systemc>

sc_dt::sc_fixed<43, 35> dut() {
  sc_dt::sc_fixed<2, 0> x2 = sc_dt::sc_fixed<2, 0>(0);      // .00
  sc_dt::sc_int<32> x3 = sc_dt::sc_int<32>(x2);             // 0..0
  sc_dt::sc_fixed<43, 35> x4 = sc_dt::sc_fixed<43, 35>(x3); // 0..0.00000000
  return x4;
}
