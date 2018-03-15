// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!
#ifndef _GTKMM_CELLRENDERERCOMBO_H
#define _GTKMM_CELLRENDERERCOMBO_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
 * Copyright (C) 2004 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <gtkmm/cellrenderertext.h>
#include <gtkmm/treemodel.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkCellRendererCombo = struct _GtkCellRendererCombo;
using GtkCellRendererComboClass = struct _GtkCellRendererComboClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class CellRendererCombo_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{

/**  Renders a combobox in a cell.
 * CellRendererCombo renders text in a cell like CellRendererText, from which it is derived. But while
 * CellRendererText offers a simple entry to edit the text, CellRendererCombo offers a ComboBox or
 * ComboBoxEntry widget to edit the text. The values to display in the combo box are taken from the
 * tree model specified in the model property.
 *
 * The combo cell renderer takes care of adding a text cell renderer to the combo box and sets it to
 * display the column specified by its text_column property. Further cell renderers can be added in a
 * handler for the editing_started signal.
 *
 * @ingroup TreeView
 */

class CellRendererCombo : public CellRendererText
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef CellRendererCombo CppObjectType;
  typedef CellRendererCombo_Class CppClassType;
  typedef GtkCellRendererCombo BaseObjectType;
  typedef GtkCellRendererComboClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  CellRendererCombo(CellRendererCombo&& src) noexcept;
  CellRendererCombo& operator=(CellRendererCombo&& src) noexcept;

  // noncopyable
  CellRendererCombo(const CellRendererCombo&) = delete;
  CellRendererCombo& operator=(const CellRendererCombo&) = delete;

  ~CellRendererCombo() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class CellRendererCombo_Class;
  static CppClassType cellrenderercombo_class_;

protected:
  explicit CellRendererCombo(const Glib::ConstructParams& construct_params);
  explicit CellRendererCombo(GtkCellRendererCombo* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkCellRendererCombo*       gobj()       { return reinterpret_cast<GtkCellRendererCombo*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkCellRendererCombo* gobj() const { return reinterpret_cast<GtkCellRendererCombo*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

public:

  CellRendererCombo();


  /**
   * @par Slot Prototype:
   * <tt>void on_my_%changed(const Glib::ustring& path, const TreeModel::iterator& iter)</tt>
   *
   * This signal is emitted each time after the user selected an item in
   * the combo box, either by using the mouse or the arrow keys.  Contrary
   * to GtkComboBox, GtkCellRendererCombo::changed is not emitted for
   * changes made to a selected item in the entry.  The argument @a iter
   * corresponds to the newly selected item in the combo box and it is relative
   * to the GtkTreeModel set via the model property on GtkCellRendererCombo.
   * 
   * Note that as soon as you change the model displayed in the tree view,
   * the tree view will immediately cease the editing operating.  This
   * means that you most probably want to refrain from changing the model
   * until the combo cell renderer emits the edited or editing_canceled signal.
   * 
   * @newin{2,14}
   * 
   * @param path A string of the path identifying the edited cell
   * (relative to the tree view model).
   * @param iter The new iter selected in the combo box
   * (relative to the combo box model).
   */

  Glib::SignalProxy< void,const Glib::ustring&,const TreeModel::iterator& > signal_changed();


  /** Holds a tree model containing the possible values for the combo box. 
   * Use the text_column property to specify the column holding the values.
   * 
   * @newin{2,6}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Gtk::TreeModel> > property_model() ;

/** Holds a tree model containing the possible values for the combo box. 
   * Use the text_column property to specify the column holding the values.
   * 
   * @newin{2,6}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gtk::TreeModel> > property_model() const;

  /** Specifies the model column which holds the possible values for the 
   * combo box. 
   * 
   * Note that this refers to the model specified in the model property, 
   * not the model backing the tree view to which 
   * this cell renderer is attached.
   * 
   * Gtk::CellRendererCombo automatically adds a text cell renderer for 
   * this column to its combo box.
   * 
   * @newin{2,6}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_text_column() ;

/** Specifies the model column which holds the possible values for the 
   * combo box. 
   * 
   * Note that this refers to the model specified in the model property, 
   * not the model backing the tree view to which 
   * this cell renderer is attached.
   * 
   * Gtk::CellRendererCombo automatically adds a text cell renderer for 
   * this column to its combo box.
   * 
   * @newin{2,6}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_text_column() const;

  /** If <tt>true</tt>, the cell renderer will include an entry and allow to enter 
   * values other than the ones in the popup list. 
   * 
   * @newin{2,6}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_has_entry() ;

/** If <tt>true</tt>, the cell renderer will include an entry and allow to enter 
   * values other than the ones in the popup list. 
   * 
   * @newin{2,6}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_has_entry() const;


  Glib::PropertyProxy_Base _property_renderable() override;


};

} //namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::CellRendererCombo
   */
  Gtk::CellRendererCombo* wrap(GtkCellRendererCombo* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_CELLRENDERERCOMBO_H */

