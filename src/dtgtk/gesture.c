/*
    This file is part of darktable,
    Copyright (C) 2010-2024 darktable developers.

    darktable is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    darktable is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with darktable.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "gesture.h"


// Key for storing the gesture multi press object.
const char *MULTI_PRESS_GESTURE_KEY = "multi-press-gesture";


GtkGesture *dtgtk_gesture_multi_press_new(
    GtkWidget *widget)
{
  // check for existing gesture object
  GtkGesture *gesture = g_object_get_data(G_OBJECT(widget), MULTI_PRESS_GESTURE_KEY);
  if (!gesture)
  {
    // create the new object and set it to object data
    gesture = gtk_gesture_multi_press_new(widget);
    g_object_set_data(G_OBJECT(gesture), MULTI_PRESS_GESTURE_KEY, gesture);
  }

  return gesture;
}

// clang-format off
// modelines: These editor modelines have been set for all relevant files by tools/update_modelines.py
// vim: shiftwidth=2 expandtab tabstop=2 cindent
// kate: tab-indents: off; indent-width 2; replace-tabs on; indent-mode cstyle; remove-trailing-spaces modified;
// clang-format on
