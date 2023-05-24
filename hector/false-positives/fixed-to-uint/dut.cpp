#define SC_INCLUDE_FX
#include <systemc>

sc_dt::sc_uint<8> dut() {
      sc_dt::sc_fixed<10,8> x0 = sc_dt::sc_fixed<10,8>(-1);
      sc_dt::sc_uint<8> x1 = sc_dt::sc_uint<8>(x0);
      return x1;
}
