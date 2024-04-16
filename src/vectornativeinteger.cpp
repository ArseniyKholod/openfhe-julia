#include "jlcxx/jlcxx.hpp"
#include "jlcxx/stl.hpp"
#include "openfhe.h"

void wrap_VectorNativeInteger(jlcxx::Module& mod) {
  jlcxx::stl::apply_stl<lbcrypto::NativeInteger>(mod);
}