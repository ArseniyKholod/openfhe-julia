#include "jlcxx/jlcxx.hpp"
#include "openfhe.h"

void wrap_BigVector(jlcxx::Module& mod) {
  mod.add_type<lbcrypto::BigVector>("BigVector");
}

