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

//-----------------------------------------------------------------------------
// NOTE: These are not really useful for the C++ backend, so they are
//       currently just pass-throughs.
//-----------------------------------------------------------------------------

namespace Data_Function {
  using namespace PureScript;

  //---------------------------------------------------------------------------

  inline auto mkFn0(const any& fn) -> any {
    return fn;
  }

  inline auto mkFn1(const any& fn) -> any {
    return fn;
  }

  inline auto mkFn2(const any& fn) -> any {
    return fn;
  }

  inline auto mkFn3(const any& fn) -> any {
    return fn;
  }

  inline auto mkFn4(const any& fn) -> any {
    return fn;
  }

  inline auto mkFn5(const any& fn) -> any {
    return fn;
  }

  inline auto mkFn6(const any& fn) -> any {
    return fn;
  }

  inline auto mkFn7(const any& fn) -> any {
    return fn;
  }

  inline auto mkFn8(const any& fn) -> any {
    return fn;
  }

  inline auto mkFn9(const any& fn) -> any {
    return fn;
  }

  inline auto mkFn10(const any& fn) -> any {
    return fn;
  }

  //---------------------------------------------------------------------------

  inline auto runFn0(const any& fn) -> any {
    return fn();
  }

  inline auto runFn1(const any& fn) -> any {
    return [=](const any& a) -> any {
      return fn(a);
    };
  }

  inline auto runFn2(const any& fn) -> any {
    return [=](const any& a) -> any {
      return [=](const any& b) -> any {
        return fn(a)(b);
      };
    };
  }

  inline auto runFn3(const any& fn) -> any {
    return [=](const any& a) -> any {
      return [=](const any& b) -> any {
        return [=](const any& c) -> any {
          return fn(a)(b)(c);
        };
      };
    };
  }

  inline auto runFn4(const any& fn) -> any {
    return [=](const any& a) -> any {
      return [=](const any& b) -> any {
        return [=](const any& c) -> any {
          return [=](const any& d) -> any {
            return fn(a)(b)(c)(d);
          };
        };
      };
    };
  }

  inline auto runFn5(const any& fn) -> any {
    return [=](const any& a) -> any {
      return [=](const any& b) -> any {
        return [=](const any& c) -> any {
          return [=](const any& d) -> any {
            return [=](const any& e) -> any {
              return fn(a)(b)(c)(d)(e);
            };
          };
        };
      };
    };
  }

  inline auto runFn6(const any& fn) -> any {
    return [=](const any& a) -> any {
      return [=](const any& b) -> any {
        return [=](const any& c) -> any {
          return [=](const any& d) -> any {
            return [=](const any& e) -> any {
              return [=](const any& f) -> any {
                return fn(a)(b)(c)(d)(e)(f);
              };
            };
          };
        };
      };
    };
  }

  inline auto runFn7(const any& fn) -> any {
    return [=](const any& a) -> any {
      return [=](const any& b) -> any {
        return [=](const any& c) -> any {
          return [=](const any& d) -> any {
            return [=](const any& e) -> any {
              return [=](const any& f) -> any {
                return [=](const any& g) -> any {
                  return fn(a)(b)(c)(d)(e)(f)(g);
                };
              };
            };
          };
        };
      };
    };
  }

  inline auto runFn8(const any& fn) -> any {
    return [=](const any& a) -> any {
      return [=](const any& b) -> any {
        return [=](const any& c) -> any {
          return [=](const any& d) -> any {
            return [=](const any& e) -> any {
              return [=](const any& f) -> any {
                return [=](const any& g) -> any {
                  return [=](const any& h) -> any {
                    return fn(a)(b)(c)(d)(e)(f)(g)(h);
                  };
                };
              };
            };
          };
        };
      };
    };
  }

  inline auto runFn9(const any& fn) -> any {
    return [=](const any& a) -> any {
      return [=](const any& b) -> any {
        return [=](const any& c) -> any {
          return [=](const any& d) -> any {
            return [=](const any& e) -> any {
              return [=](const any& f) -> any {
                return [=](const any& g) -> any {
                  return [=](const any& h) -> any {
                    return [=](const any& i) -> any {
                      return fn(a)(b)(c)(d)(e)(f)(g)(h)(i);
                    };
                  };
                };
              };
            };
          };
        };
      };
    };
  }

  inline auto runFn10(const any& fn) -> any {
    return [=](const any& a) -> any {
      return [=](const any& b) -> any {
        return [=](const any& c) -> any {
          return [=](const any& d) -> any {
            return [=](const any& e) -> any {
              return [=](const any& f) -> any {
                return [=](const any& g) -> any {
                  return [=](const any& h) -> any {
                    return [=](const any& i) -> any {
                      return [=](const any& j) -> any {
                        return fn(a)(b)(c)(d)(e)(f)(g)(h)(i)(j);
                      };
                    };
                  };
                };
              };
            };
          };
        };
      };
    };
  }

} // namespace Data_Function

#endif // Data_Function_FFI_HH
