#include "jlcxx/jlcxx.hpp"
#include "openfhe.h"

void wrap_DCRTPolyImpl(jlcxx::Module& mod) {
  mod.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>>>("DCRTPolyImpl",
      jlcxx::julia_base_type<lbcrypto::BigVector>())<lbcrypto::DCRTPolyImpl>;
    .apply<lbcrypto::DCRTPolyImpl<lbcrypto::BigVector>>([](auto wrapped) {});
}
