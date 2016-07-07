// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_ScrollPaneLayout__
#define __javax_swing_ScrollPaneLayout__

#pragma interface

#include <java/lang/Object.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      class Rectangle;
      class Dimension;
      class Container;
      class Component;
    }
  }
  namespace javax
  {
    namespace swing
    {
      class ScrollPaneLayout;
      class JScrollPane;
      class JScrollBar;
      class JViewport;
    }
  }
}

class javax::swing::ScrollPaneLayout : public ::java::lang::Object
{
public:
  ScrollPaneLayout ();
  virtual void syncWithScrollPane (::javax::swing::JScrollPane *) { }
public:  // actually protected
  virtual ::java::awt::Component *addSingletonComponent (::java::awt::Component *, ::java::awt::Component *) { return 0; }
public:
  virtual void addLayoutComponent (::java::lang::String *, ::java::awt::Component *) { }
  virtual void removeLayoutComponent (::java::awt::Component *) { }
  virtual jint getVerticalScrollBarPolicy ();
  virtual void setVerticalScrollBarPolicy (jint) { }
  virtual jint getHorizontalScrollBarPolicy ();
  virtual void setHorizontalScrollBarPolicy (jint) { }
  virtual ::javax::swing::JViewport *getViewport () { return 0; }
  virtual ::javax::swing::JScrollBar *getHorizontalScrollBar () { return 0; }
  virtual ::javax::swing::JScrollBar *getVerticalScrollBar () { return 0; }
  virtual ::javax::swing::JViewport *getRowHeader () { return 0; }
  virtual ::javax::swing::JViewport *getColumnHeader () { return 0; }
  virtual ::java::awt::Component *getCorner (::java::lang::String *) { return 0; }
  virtual ::java::awt::Dimension *preferredLayoutSize (::java::awt::Container *) { return 0; }
  virtual ::java::awt::Dimension *minimumLayoutSize (::java::awt::Container *) { return 0; }
  virtual void layoutContainer (::java::awt::Container *) { }
  virtual ::java::awt::Rectangle *getViewportBorderBounds (::javax::swing::JScrollPane *) { return 0; }
public: // actually package-private
  static const jlong serialVersionUID = -4480022884523193743LL;
public:  // actually protected
  ::javax::swing::JViewport * __attribute__((aligned(__alignof__( ::java::lang::Object )))) viewport;
  ::javax::swing::JScrollBar *vsb;
  ::javax::swing::JScrollBar *hsb;
  ::javax::swing::JViewport *rowHead;
  ::javax::swing::JViewport *colHead;
  ::java::awt::Component *lowerLeft;
  ::java::awt::Component *lowerRight;
  ::java::awt::Component *upperLeft;
  ::java::awt::Component *upperRight;
  jint vsbPolicy;
  jint hsbPolicy;

  friend class javax_swing_ScrollPaneLayout$UIResource;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_ScrollPaneLayout__ */
