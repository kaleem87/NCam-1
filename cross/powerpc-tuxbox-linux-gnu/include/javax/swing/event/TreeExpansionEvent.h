// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_event_TreeExpansionEvent__
#define __javax_swing_event_TreeExpansionEvent__

#pragma interface

#include <java/util/EventObject.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace event
      {
        class TreeExpansionEvent;
      }
      namespace tree
      {
        class TreePath;
      }
    }
  }
}

class javax::swing::event::TreeExpansionEvent : public ::java::util::EventObject
{
public:
  TreeExpansionEvent (::java::lang::Object *, ::javax::swing::tree::TreePath *);
  virtual ::javax::swing::tree::TreePath *getPath () { return path; }
public:  // actually protected
  ::javax::swing::tree::TreePath * __attribute__((aligned(__alignof__( ::java::util::EventObject )))) path;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_event_TreeExpansionEvent__ */
