// Generated by gmmproc 2.50.0 -- DO NOT MODIFY!
#ifndef _GTKMM_MENUSHELL_P_H
#define _GTKMM_MENUSHELL_P_H


#include <gtkmm/private/container_p.h>
#include <gtkmm/menu.h>
#include <gtkmm/menubar.h>
#include <gtkmm/window.h>

#include <glibmm/class.h>

namespace Gtk
{

class MenuShell_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = MenuShell;
  using BaseObjectType = GtkMenuShell;
  using BaseClassType = GtkMenuShellClass;
  using CppClassParent = Gtk::Container_Class;
  using BaseClassParent = GtkContainerClass;

  friend class MenuShell;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static void deactivate_callback(GtkMenuShell* self);
  static void selection_done_callback(GtkMenuShell* self);
  static gboolean move_selected_callback(GtkMenuShell* self, gint p0);

  //Callbacks (virtual functions):
    static void insert_vfunc_callback(GtkMenuShell* self, GtkWidget* child, int position);
  };


} // namespace Gtk


#endif /* _GTKMM_MENUSHELL_P_H */

