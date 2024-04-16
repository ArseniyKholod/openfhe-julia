#include "jlcxx/jlcxx.hpp"
#include "openfhe.h"

void wrap_VectorNativeInteger(jlcxx::Module& mod) {
  mod.add_type<std::vector<lbcrypto::NativeInteger>>("std::vector<lbcrypto::NativeInteger>");
}