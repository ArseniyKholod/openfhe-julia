#include "jlcxx/jlcxx.hpp"
#include "openfhe.h"

void wrap_DCRTPolyImpl(jlcxx::Module& mod) {
  mod.add_type<lbcrypto::DCRTPoly>("DCRTPolyImpl");
}
