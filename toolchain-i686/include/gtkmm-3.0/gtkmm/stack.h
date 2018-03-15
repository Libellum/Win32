// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!
#ifndef _GTKMM_STACK_H
#define _GTKMM_STACK_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/*
 * Copyright (C) 2013 The gtkmm Development Team
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

#include <gtkmm/container.h>
#include <gtkmm/enums.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkStack = struct _GtkStack;
using GtkStackClass = struct _GtkStackClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class Stack_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{


/** A container that shows only one child at a time.
 *
 * Gtk::Stack does not provide a means for users to change the visible
 * child. Instead, the Gtk::StackSwitcher or Gtk::StackSidebar widget can be used with
 * Gtk::Stack to provide this functionality.
 *
 * @ingroup Widgets
 * @ingroup Containers
 * @newin{3,10}
 */

class Stack
  : public Container
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Stack CppObjectType;
  typedef Stack_Class CppClassType;
  typedef GtkStack BaseObjectType;
  typedef GtkStackClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  Stack(Stack&& src) noexcept;
  Stack& operator=(Stack&& src) noexcept;

  // noncopyable
  Stack(const Stack&) = delete;
  Stack& operator=(const Stack&) = delete;

  ~Stack() noexcept override;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class Stack_Class;
  static CppClassType stack_class_;

protected:
  explicit Stack(const Glib::ConstructParams& construct_params);
  explicit Stack(GtkStack* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkStack*       gobj()       { return reinterpret_cast<GtkStack*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkStack* gobj() const { return reinterpret_cast<GtkStack*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

public:
  Stack();

  
  /** Adds a child to @a stack.
   * The child is identified by the @a name.
   * 
   * @newin{3,10}
   * 
   * @param child The widget to add.
   * @param name The name for @a child.
   */
  void add(Widget& child, const Glib::ustring& name);

  
  /** Adds a child to @a stack.
   * The child is identified by the @a name. The @a title
   * will be used by Gtk::StackSwitcher to represent
   *  @a child in a tab bar, so it should be short.
   * 
   * @newin{3,10}
   * 
   * @param child The widget to add.
   * @param name The name for @a child.
   * @param title A human-readable title for @a child.
   */
  void add(Widget& child, const Glib::ustring& name, const Glib::ustring& title);

  //TODO: Remove this method overload when we can break ABI and API, and Container::add()
  //has been made non-virtual. It's not very useful in Stack. It's needed only to
  //avoid a compilation error when compiling with -Woverloaded-virtual -Werror.
  //See https://bugzilla.gnome.org/show_bug.cgi?id=724732
  /** Adds a child.
   *
   * @newin{3,14}
   *
   * @deprecated Use one of the other add() methods instead. This method was added only to avoid a compilation error.
   */
  void add(Widget& child) override;

  
  /** Makes @a child the visible child of @a stack.
   * 
   * If @a child is different from the currently
   * visible child, the transition between the
   * two will be animated with the current
   * transition type of @a stack.
   * 
   * Note that the @a child widget has to be visible itself
   * (see Gtk::Widget::show()) in order to become the visible
   * child of @a stack.
   * 
   * @newin{3,10}
   * 
   * @param child A child of @a stack.
   */
  void set_visible_child(Widget& child);

  
  /** Gets the currently visible child of @a stack, or <tt>nullptr</tt> if
   * there are no visible children.
   * 
   * @newin{3,10}
   * 
   * @return The visible child of the Gtk::Stack.
   */
  Widget* get_visible_child();
  
  /** Gets the currently visible child of @a stack, or <tt>nullptr</tt> if
   * there are no visible children.
   * 
   * @newin{3,10}
   * 
   * @return The visible child of the Gtk::Stack.
   */
  const Widget* get_visible_child() const;

  
  /** Makes the child with the given name visible.
   * 
   * If @a child is different from the currently
   * visible child, the transition between the
   * two will be animated with the current
   * transition type of @a stack.
   * 
   * Note that the child widget has to be visible itself
   * (see Gtk::Widget::show()) in order to become the visible
   * child of @a stack.
   * 
   * @newin{3,10}
   * 
   * @param name The name of the child to make visible.
   */
  void set_visible_child(const Glib::ustring& name);
  
  /** Makes the child with the given name visible.
   * 
   * Note that the child widget has to be visible itself
   * (see Gtk::Widget::show()) in order to become the visible
   * child of @a stack.
   * 
   * @newin{3,10}
   * 
   * @param name The name of the child to make visible.
   * @param transition The transition type to use.
   */
  void set_visible_child(const Glib::ustring& name, StackTransitionType transition);
  
  /** Returns the name of the currently visible child of @a stack, or
   * <tt>nullptr</tt> if there is no visible child.
   * 
   * @newin{3,10}
   * 
   * @return The name of the visible child of the Gtk::Stack.
   */
  Glib::ustring get_visible_child_name() const;

  
  /** Sets the Gtk::Stack to be homogeneous or not. If it
   * is homogeneous, the Gtk::Stack will request the same
   * size for all its children. If it isn't, the stack
   * may change size when a different child becomes visible.
   * 
   * Since 3.16, homogeneity can be controlled separately
   * for horizontal and vertical size, with the
   * Gtk::Stack::property_hhomogeneous() and Gtk::Stack::property_vhomogeneous().
   * 
   * @newin{3,10}
   * 
   * @param homogeneous <tt>true</tt> to make @a stack homogeneous.
   */
  void set_homogeneous(bool homogeneous =  true);
  
  /** Gets whether @a stack is homogeneous.
   * See set_homogeneous().
   * 
   * @newin{3,10}
   * 
   * @return Whether @a stack is homogeneous.
   */
  bool get_homogeneous() const;

  
  /** Sets the Gtk::Stack to be horizontally homogeneous or not.
   * If it is homogeneous, the Gtk::Stack will request the same
   * width for all its children. If it isn't, the stack
   * may change width when a different child becomes visible.
   * 
   * @newin{3,16}
   * 
   * @param hhomogeneous <tt>true</tt> to make @a stack horizontally homogeneous.
   */
  void set_hhomogeneous(bool hhomogeneous =  true);
  
  /** Gets whether @a stack is horizontally homogeneous.
   * See set_hhomogeneous().
   * 
   * @newin{3,16}
   * 
   * @return Whether @a stack is horizontally homogeneous.
   */
  bool get_hhomogeneous() const;

  
  /** Sets the Gtk::Stack to be vertically homogeneous or not.
   * If it is homogeneous, the Gtk::Stack will request the same
   * height for all its children. If it isn't, the stack
   * may change height when a different child becomes visible.
   * 
   * @newin{3,16}
   * 
   * @param vhomogeneous <tt>true</tt> to make @a stack vertically homogeneous.
   */
  void set_vhomogeneous(bool vhomogeneous =  true);
  
  /** Gets whether @a stack is vertically homogeneous.
   * See set_vhomogeneous().
   * 
   * @newin{3,16}
   * 
   * @return Whether @a stack is vertically homogeneous.
   */
  bool get_vhomogeneous() const;

  
  /** Sets the duration that transitions between pages in @a stack
   * will take.
   * 
   * @newin{3,10}
   * 
   * @param duration The new duration, in milliseconds.
   */
  void set_transition_duration(guint duration);
  
  /** Returns the amount of time (in milliseconds) that
   * transitions between pages in @a stack will take.
   * 
   * @newin{3,10}
   * 
   * @return The transition duration.
   */
  guint get_transition_duration() const;

  
  /** Sets the type of animation that will be used for
   * transitions between pages in @a stack. Available
   * types include various kinds of fades and slides.
   * 
   * The transition type can be changed without problems
   * at runtime, so it is possible to change the animation
   * based on the page that is about to become current.
   * 
   * @newin{3,10}
   * 
   * @param transition The new transition type.
   */
  void set_transition_type(StackTransitionType transition);
  
#ifndef GTKMM_DISABLE_DEPRECATED

  /** Gets the type of animation that will be used
   * for transitions between pages in @a stack.
   * 
   * @newin{3,10}
   * 
   * @deprecated Use the const method instead.
   * 
   * @return The current transition type of @a stack.
   */
  StackTransitionType get_transition_type();
#endif // GTKMM_DISABLE_DEPRECATED


  /** Gets the type of animation that will be used
   * for transitions between pages in @a stack.
   * 
   * @newin{3,10}
   * 
   * @return The current transition type of @a stack.
   */
  StackTransitionType get_transition_type() const;

  
  /** Returns whether the @a stack is currently in a transition from one page to
   * another.
   * 
   * @newin{3,12}
   * 
   * @return <tt>true</tt> if the transition is currently running, <tt>false</tt> otherwise.
   */
  bool get_transition_running() const;

  
  /** Finds the child of the Gtk::Stack with the name given as
   * the argument. Returns <tt>nullptr</tt> if there is no child with this
   * name.
   * 
   * @newin{3,12}
   * 
   * @param name The name of the child to find.
   * @return The requested child of the Gtk::Stack.
   */
  Widget* get_child_by_name(const Glib::ustring& name);
  
  /** Finds the child of the Gtk::Stack with the name given as
   * the argument. Returns <tt>nullptr</tt> if there is no child with this
   * name.
   * 
   * @newin{3,12}
   * 
   * @param name The name of the child to find.
   * @return The requested child of the Gtk::Stack.
   */
  const Widget* get_child_by_name(const Glib::ustring& name) const;

  
  /** Sets whether or not @a stack will interpolate its size when
   * changing the visible child. If the Gtk::Stack::property_interpolate_size()
   * property is set to <tt>true</tt>, @a stack will interpolate its size between
   * the current one and the one it'll take after changing the
   * visible child, according to the set transition duration.
   * 
   * @newin{3,20}
   * 
   * @param interpolate_size The new value.
   */
  void set_interpolate_size(bool interpolate_size);
  
  /** Returns wether the Gtk::Stack is set up to interpolate between
   * the sizes of children on page switch.
   * 
   * @newin{3,20}
   * 
   * @return <tt>true</tt> if child sizes are interpolated.
   */
  bool get_interpolate_size() const;

  /** Homogeneous sizing.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_homogeneous() ;

/** Homogeneous sizing.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_homogeneous() const;

  /** <tt>true</tt> if the stack allocates the same width for all children.
   * 
   * @newin{3,16}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_hhomogeneous() ;

/** <tt>true</tt> if the stack allocates the same width for all children.
   * 
   * @newin{3,16}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_hhomogeneous() const;

  /** The animation duration, in milliseconds.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< unsigned int > property_transition_duration() ;

/** The animation duration, in milliseconds.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< unsigned int > property_transition_duration() const;

  /** Whether or not the transition is currently running.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_transition_running() const;


  /** The type of animation used to transition.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< StackTransitionType > property_transition_type() ;

/** The type of animation used to transition.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< StackTransitionType > property_transition_type() const;

  /** <tt>true</tt> if the stack allocates the same height for all children.
   * 
   * @newin{3,16}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_vhomogeneous() ;

/** <tt>true</tt> if the stack allocates the same height for all children.
   * 
   * @newin{3,16}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_vhomogeneous() const;

  /** The widget currently visible in the stack.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Widget* > property_visible_child() ;

/** The widget currently visible in the stack.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Widget* > property_visible_child() const;

  /** The name of the widget currently visible in the stack.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_visible_child_name() ;

/** The name of the widget currently visible in the stack.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_visible_child_name() const;

  /** Whether or not the size should smoothly change when changing between differently sized children.
   *
   * @newin{3,20}
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_interpolate_size() ;

/** Whether or not the size should smoothly change when changing between differently sized children.
   *
   * @newin{3,20}
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_interpolate_size() const;


  /** The name of the child page.
   *
   * @return A ChildPropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Gtk::ChildPropertyProxy< Glib::ustring > child_property_name(Gtk::Widget& child) ;

/** The name of the child page.
   *
   * @return A ChildPropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Gtk::ChildPropertyProxy_ReadOnly< Glib::ustring > child_property_name(const Gtk::Widget& child) const;

  /** The title of the child page.
   *
   * @return A ChildPropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Gtk::ChildPropertyProxy< Glib::ustring > child_property_title(Gtk::Widget& child) ;

/** The title of the child page.
   *
   * @return A ChildPropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Gtk::ChildPropertyProxy_ReadOnly< Glib::ustring > child_property_title(const Gtk::Widget& child) const;

  /** The icon name of the child page.
   *
   * @return A ChildPropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Gtk::ChildPropertyProxy< Glib::ustring > child_property_icon_name(Gtk::Widget& child) ;

/** The icon name of the child page.
   *
   * @return A ChildPropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Gtk::ChildPropertyProxy_ReadOnly< Glib::ustring > child_property_icon_name(const Gtk::Widget& child) const;

  /** The index of the child in the parent.
   *
   * @return A ChildPropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Gtk::ChildPropertyProxy< int > child_property_position(Gtk::Widget& child) ;

/** The index of the child in the parent.
   *
   * @return A ChildPropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Gtk::ChildPropertyProxy_ReadOnly< int > child_property_position(const Gtk::Widget& child) const;

  /** Sets a flag specifying whether the child requires the user attention.
   * This is used by the Gtk::StackSwitcher to change the appearance of the
   * corresponding button when a page needs attention and it is not the
   * current one.
   * 
   * @newin{3,12}
   *
   * @return A ChildPropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Gtk::ChildPropertyProxy< bool > child_property_needs_attention(Gtk::Widget& child) ;

/** Sets a flag specifying whether the child requires the user attention.
   * This is used by the Gtk::StackSwitcher to change the appearance of the
   * corresponding button when a page needs attention and it is not the
   * current one.
   * 
   * @newin{3,12}
   *
   * @return A ChildPropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Gtk::ChildPropertyProxy_ReadOnly< bool > child_property_needs_attention(const Gtk::Widget& child) const;


  // There are no signals or vfuncs.


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
   * @relates Gtk::Stack
   */
  Gtk::Stack* wrap(GtkStack* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_STACK_H */

