// Generated by gmmproc 2.54.0 -- DO NOT MODIFY!
#ifndef _GLIBMM_OPTIONENTRY_H
#define _GLIBMM_OPTIONENTRY_H


/* Copyright (C) 2004 The glibmm Development Team
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
 * License along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */


#include <glibmm/ustring.h>

#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C" { typedef struct _GOptionEntry GOptionEntry; }
#endif


namespace Glib
{

/** An OptionEntry defines a single option. To have an effect, it must be added to an OptionGroup with
 * OptionGroup::add_entry().
 *
 * The long name of an option can be used to specify it in a commandline as --long_name.
 * Every option must have a long name. To resolve conflicts if multiple option groups contain the same long name, it is also
 * possible to specify the option as --groupname-long_name.
 *
 * If an option has a short name, it can be specified as -short_name in a commandline.
 *
 * The description for the option is shown in the --help  output.
 *
 * The arg_descripton is the placeholder to use for the extra argument parsed by the option in --help  output.
 */
class OptionEntry
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = OptionEntry;
  using BaseObjectType = GOptionEntry;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

private:

public:

  //Copied from goption.h, instead of generated, so that we can put it inside the class.
  enum Flags
  {
    FLAG_HIDDEN = 1 << 0,
    FLAG_IN_MAIN = 1 << 1,
    FLAG_REVERSE = 1 << 2,
    FLAG_NO_ARG = 1 << 3,
    FLAG_FILENAME = 1 << 4,
    FLAG_OPTIONAL_ARG = 1 << 5,
    FLAG_NOALIAS = 1 << 6
  } GOptionFlags;

  OptionEntry();
  OptionEntry(const OptionEntry& src);

  OptionEntry(OptionEntry&& other) noexcept;
  OptionEntry& operator=(OptionEntry&& other) noexcept;

  virtual ~OptionEntry();

  OptionEntry& operator=(const OptionEntry& src);

  //#m4 __CONVERSION(`Glib::ustring',`const gchar*',`($3).empty() ? nullptr : g_strdup(($3).c_str())')

  Glib::ustring get_long_name() const;

  void set_long_name(const Glib::ustring& value);

  gchar get_short_name() const;
  void set_short_name(const gchar& value);

  int get_flags() const;

  /** Set one or more OptionEntry::Flags.
   * Do not set FLAG_FILENAME. Character encoding is chosen when the OptionEntry
   * is added to an OptionGroup.
   */
  void set_flags(const int& value);

  Glib::ustring get_description() const;

  void set_description(const Glib::ustring& value);

  Glib::ustring get_arg_description() const;

  void set_arg_description(const Glib::ustring& value);

  GOptionEntry*       gobj()       { return gobject_; }
  const GOptionEntry* gobj() const { return gobject_; }

private:
  void release_gobject() noexcept;

protected:

  GOptionEntry* gobject_;


};

} // namespace Glib


#endif /* _GLIBMM_OPTIONENTRY_H */

