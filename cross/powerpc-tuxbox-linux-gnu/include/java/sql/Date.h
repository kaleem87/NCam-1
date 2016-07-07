// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_sql_Date__
#define __java_sql_Date__

#pragma interface

#include <java/util/Date.h>

extern "Java"
{
  namespace java
  {
    namespace sql
    {
      class Date;
    }
    namespace text
    {
      class SimpleDateFormat;
    }
  }
}

class java::sql::Date : public ::java::util::Date
{
public:
  Date (jint, jint, jint);
  Date (jlong);
  virtual jint getHours ();
  virtual jint getMinutes ();
  virtual jint getSeconds ();
  virtual void setHours (jint);
  virtual void setMinutes (jint);
  virtual void setSeconds (jint);
  static ::java::sql::Date *valueOf (::java::lang::String *);
  virtual ::java::lang::String *toString ();
public: // actually package-private
  static const jlong serialVersionUID = 1511598038487230103LL;
private:
  static ::java::text::SimpleDateFormat *sdf;
public:

  static ::java::lang::Class class$;
};

#endif /* __java_sql_Date__ */
