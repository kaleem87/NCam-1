// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_naming_event_EventContext__
#define __javax_naming_event_EventContext__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace javax
  {
    namespace naming
    {
      namespace event
      {
        class EventContext;
        class NamingListener;
      }
      class Name;
    }
  }
}

class javax::naming::event::EventContext : public ::java::lang::Object
{
public:
  virtual void addNamingListener (::javax::naming::Name *, jint, ::javax::naming::event::NamingListener *) = 0;
  virtual void addNamingListener (::java::lang::String *, jint, ::javax::naming::event::NamingListener *) = 0;
  virtual void removeNamingListener (::javax::naming::event::NamingListener *) = 0;
  virtual jboolean targetMustExist () = 0;
  static const jint OBJECT_SCOPE = 0L;
  static const jint ONELEVEL_SCOPE = 1L;
  static const jint SUBTREE_SCOPE = 2L;

  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif /* __javax_naming_event_EventContext__ */
