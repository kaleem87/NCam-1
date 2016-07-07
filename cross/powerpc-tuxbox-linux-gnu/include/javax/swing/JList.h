// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_JList__
#define __javax_swing_JList__

#pragma interface

#include <javax/swing/JComponent.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace accessibility
    {
      class AccessibleContext;
    }
    namespace swing
    {
      class JList;
      namespace plaf
      {
        class ListUI;
      }
      namespace event
      {
        class ListSelectionListener;
      }
      class ListSelectionModel;
      class ListModel;
      class ListCellRenderer;
    }
  }
  namespace java
  {
    namespace awt
    {
      class Rectangle;
      class Dimension;
      class Color;
    }
  }
}

class javax::swing::JList : public ::javax::swing::JComponent
{
public:
  JList ();
  JList (JArray< ::java::lang::Object *> *);
  JList (::java::util::Vector *);
  JList (::javax::swing::ListModel *);
public: // actually package-private
  virtual void init ();
public:
  virtual jint getVisibleRowCount () { return visibles; }
  virtual void setVisibleRowCount (jint);
public: // actually package-private
  virtual void addListSelectionListener (::javax::swing::event::ListSelectionListener *);
  virtual void removeListSelectionListener (::javax::swing::event::ListSelectionListener *);
  virtual void setSelectionMode (jint);
  virtual void setSelectedIndex (jint);
  virtual jint getSelectedIndex ();
  virtual ::java::lang::Object *getSelectedValue ();
  virtual ::java::awt::Color *getSelectionBackground () { return select_back; }
  virtual ::java::awt::Color *getSelectionForeground () { return select_fore; }
public:
  virtual void setListData (JArray< ::java::lang::Object *> *);
  virtual void setListData (::java::util::Vector *);
  virtual ::javax::swing::ListCellRenderer *getCellRenderer () { return render; }
  virtual void setCellRenderer (::javax::swing::ListCellRenderer *);
  virtual void setModel (::javax::swing::ListModel *);
  virtual ::javax::swing::ListModel *getModel () { return model; }
  virtual ::javax::swing::plaf::ListUI *getUI ();
  virtual void setUI (::javax::swing::plaf::ListUI *);
  virtual void updateUI ();
  virtual ::java::lang::String *getUIClassID ();
  virtual ::javax::accessibility::AccessibleContext *getAccessibleContext () { return 0; }
  virtual ::java::awt::Dimension *getPreferredScrollableViewportSize () { return 0; }
  virtual jint getScrollableUnitIncrement (::java::awt::Rectangle *, jint, jint);
  virtual jint getScrollableBlockIncrement (::java::awt::Rectangle *, jint, jint);
  virtual jboolean getScrollableTracksViewportWidth ();
  virtual jboolean getScrollableTracksViewportHeight ();
public: // actually package-private
  ::java::awt::Color * __attribute__((aligned(__alignof__( ::javax::swing::JComponent )))) select_back;
  ::java::awt::Color *select_fore;
  ::javax::swing::ListCellRenderer *render;
  jint visibles;
  ::javax::swing::ListModel *model;
  ::javax::swing::ListSelectionModel *sel_model;

  friend class javax_swing_JList$3;
  friend class javax_swing_JList$2$AL;
  friend class javax_swing_JList$1$AL;
public:

  static ::java::lang::Class class$;
};

#endif /* __javax_swing_JList__ */
