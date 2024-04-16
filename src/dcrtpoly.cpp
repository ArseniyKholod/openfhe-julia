#include "jlcxx/jlcxx.hpp"
#include "openfhe.h"

void wrap_DCRTPolyImpl(jlcxx::Module& mod) {
  mod.add_type<jlcxx::Parametric<jlcxx::TypeVar<1>>>("DCRTPolyImpl",
      jlcxx::julia_base_type<lbcrypto::BigVector>())
    .apply<lbcrypto::DCRTPolyImpl<lbcrypto::BigVector>>([](auto wrapped) {
        typedef typename decltype(wrapped)::type WrappedT;
        wrapped.method("DropLastElementAndScale", &WrappedT::DropLastElementAndScale);
    });
}
