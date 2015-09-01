///////////////////////////////////////////////////////////////////////////////
//
// Module      :  Function.hh
// Copyright   :  (c) Andy Arvanitis 2015
// License     :  MIT
//
// Maintainer  :  Andy Arvanitis <andy.arvanitis@gmail.com>
// Stability   :  experimental
// Portability :
//
// Function FFI functions
//
///////////////////////////////////////////////////////////////////////////////
//
#ifndef Data_Function_FFI_HH
#define Data_Function_FFI_HH

#include "PureScript/PureScript.hh"

namespace Data_Function {
  using namespace PureScript;

  template <typename A>
  using Fn0 = std::function<A(Prelude::Unit)>;

  template <typename A, typename B>
  using Fn1 = std::function<B(A)>;

  template <typename A, typename B, typename C>
  using Fn2 = std::function<C(A,B)>;


  //  foreign import mkFn0 :: forall a. (Unit -> a) -> Fn0 a
  template <typename A>
  inline auto mkFn0(const fn<Prelude::Unit, A>& f) {
    return [=](Prelude::Unit) -> A {
      return f(Prelude::unit);
    };
  }

  // foreign import mkFn1 :: forall a b. (a -> b) -> Fn1 a b
  template <typename A, typename B>
  inline auto mkFn1(const fn<A,B>& f) {
    return [=](A a) -> B {
      return f(a);
    };
  }

  template <typename A, typename B, typename C>
  inline auto mkFn2(const fn<A,fn<B,C>>& f) {
    return [=](A a, B b) -> C {
      return f(a)(b);
    };
  }


  // foreign import runFn0 :: forall a. Fn0 a -> a
  template <typename A>
  inline auto runFn0(const Fn0<A>& f) {
    return f(Prelude::unit);
  }

  // foreign import runFn1 :: forall a b. Fn1 a b -> a -> b
  template <typename A, typename B>
  inline auto runFn1(const Fn1<A,B>& f) {
    return [=](A a) {
      return f(a);
    };
  }

  // foreign import runFn2 :: forall a b c. Fn2 a b c -> a -> b -> c
  template <typename A, typename B, typename C>
  inline auto runFn2(const Fn2<A,B,C>& f) {
    return [=](A a) {
      return [=](B b) {
        return f(a, b);
      };
    };
  }

}

#endif // Data_Function_FFI_HH
