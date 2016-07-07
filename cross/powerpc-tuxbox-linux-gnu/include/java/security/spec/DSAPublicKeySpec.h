// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_spec_DSAPublicKeySpec__
#define __java_security_spec_DSAPublicKeySpec__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      namespace spec
      {
        class DSAPublicKeySpec;
      }
    }
    namespace math
    {
      class BigInteger;
    }
  }
}

class java::security::spec::DSAPublicKeySpec : public ::java::lang::Object
{
public:
  DSAPublicKeySpec (::java::math::BigInteger *, ::java::math::BigInteger *, ::java::math::BigInteger *, ::java::math::BigInteger *);
  virtual ::java::math::BigInteger *getY () { return y; }
  virtual ::java::math::BigInteger *getP () { return p; }
  virtual ::java::math::BigInteger *getQ () { return q; }
  virtual ::java::math::BigInteger *getG () { return g; }
private:
  ::java::math::BigInteger * __attribute__((aligned(__alignof__( ::java::lang::Object )))) y;
  ::java::math::BigInteger *p;
  ::java::math::BigInteger *q;
  ::java::math::BigInteger *g;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_security_spec_DSAPublicKeySpec__ */
