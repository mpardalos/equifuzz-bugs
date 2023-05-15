#define SC_INCLUDE_FX
#include <systemc>

sc_dt::sc_fixed<43, 35> mod1() {

  // sc_dt::sc_fixed<2, 0> x2 = sc_dt::sc_fixed<2, 0>(0); // 00
  // Hector::show("x2", x2);
  sc_dt::sc_int<32> x3 = sc_dt::sc_int<32>(0);        // xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx00
  sc_dt::sc_fixed<43, 35> x4 = sc_dt::sc_fixed<43, 35>(x3);
  return x4;
}

#include <Hector.h>

void impl() {

  sc_dt::sc_fixed<43, 35> out;

  // Hector::show("x*");
  Hector::registerOutput("out", out);

  Hector::beginCapture();
  out = mod1();
  Hector::endCapture();
}
