#include "dut.cpp"

int sc_main(int, char**) {
  std::cout << dut().to_string(sc_dt::SC_BIN) << std::endl;
  std::cout << dut().to_string(sc_dt::SC_HEX) << std::endl;
  return 0;
}
