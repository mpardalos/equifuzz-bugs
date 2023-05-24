#include "dut.cpp"
#include <Hector.h>

void impl() {

  sc_dt::sc_fixed<43, 35> out;

  Hector::registerOutput("out", out);

  Hector::beginCapture();
  out = dut();
  Hector::endCapture();
}
