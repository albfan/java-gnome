/*
 * java-gnome, a UI library for writing GTK and GNOME programs from Java!
 *
 * Copyright © 2006-2012 Operational Dynamics Consulting, Pty Ltd and Others
 *
 * The code in this file, and the program it is a part of, is made available
 * to you by its authors as open source software: you can redistribute it
 * and/or modify it under the terms of the GNU General Public License version
 * 2 ("GPL") as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GPL for more details.
 *
 * You should have received a copy of the GPL along with this program. If not,
 * see http://www.gnu.org/licenses/. The authors of this program may be
 * contacted through http://java-gnome.sourceforge.net/.
 *
 * Linking this library statically or dynamically with other modules is making
 * a combined work based on this library. Thus, the terms and conditions of
 * the GPL cover the whole combination. As a special exception (the
 * "Classpath Exception"), the copyright holders of this library give you
 * permission to link this library with independent modules to produce an
 * executable, regardless of the license terms of these independent modules,
 * and to copy and distribute the resulting executable under terms of your
 * choice, provided that you also meet, for each linked independent module,
 * the terms and conditions of the license of that module. An independent
 * module is a module which is not derived from or based on this library. If
 * you modify this library, you may extend the Classpath Exception to your
 * version of the library, but you are not obligated to do so. If you do not
 * wish to do so, delete this exception statement from your version.
 */
package org.gnome.gdk;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.gnome.gdk.Plumbing;

final class GdkEventMask extends Plumbing
{
    private GdkEventMask() {}

    static final int EXPOSURE_MASK = get_ordinal_exposure_mask();

    private static native final int get_ordinal_exposure_mask();

    static final int POINTER_MOTION_MASK = get_ordinal_pointer_motion_mask();

    private static native final int get_ordinal_pointer_motion_mask();

    static final int POINTER_MOTION_HINT_MASK = get_ordinal_pointer_motion_hint_mask();

    private static native final int get_ordinal_pointer_motion_hint_mask();

    static final int BUTTON_MOTION_MASK = get_ordinal_button_motion_mask();

    private static native final int get_ordinal_button_motion_mask();

    static final int BUTTON1_MOTION_MASK = get_ordinal_button1_motion_mask();

    private static native final int get_ordinal_button1_motion_mask();

    static final int BUTTON2_MOTION_MASK = get_ordinal_button2_motion_mask();

    private static native final int get_ordinal_button2_motion_mask();

    static final int BUTTON3_MOTION_MASK = get_ordinal_button3_motion_mask();

    private static native final int get_ordinal_button3_motion_mask();

    static final int BUTTON_PRESS_MASK = get_ordinal_button_press_mask();

    private static native final int get_ordinal_button_press_mask();

    static final int BUTTON_RELEASE_MASK = get_ordinal_button_release_mask();

    private static native final int get_ordinal_button_release_mask();

    static final int KEY_PRESS_MASK = get_ordinal_key_press_mask();

    private static native final int get_ordinal_key_press_mask();

    static final int KEY_RELEASE_MASK = get_ordinal_key_release_mask();

    private static native final int get_ordinal_key_release_mask();

    static final int ENTER_NOTIFY_MASK = get_ordinal_enter_notify_mask();

    private static native final int get_ordinal_enter_notify_mask();

    static final int LEAVE_NOTIFY_MASK = get_ordinal_leave_notify_mask();

    private static native final int get_ordinal_leave_notify_mask();

    static final int FOCUS_CHANGE_MASK = get_ordinal_focus_change_mask();

    private static native final int get_ordinal_focus_change_mask();

    static final int STRUCTURE_MASK = get_ordinal_structure_mask();

    private static native final int get_ordinal_structure_mask();

    static final int PROPERTY_CHANGE_MASK = get_ordinal_property_change_mask();

    private static native final int get_ordinal_property_change_mask();

    static final int VISIBILITY_NOTIFY_MASK = get_ordinal_visibility_notify_mask();

    private static native final int get_ordinal_visibility_notify_mask();

    static final int PROXIMITY_IN_MASK = get_ordinal_proximity_in_mask();

    private static native final int get_ordinal_proximity_in_mask();

    static final int PROXIMITY_OUT_MASK = get_ordinal_proximity_out_mask();

    private static native final int get_ordinal_proximity_out_mask();

    static final int SUBSTRUCTURE_MASK = get_ordinal_substructure_mask();

    private static native final int get_ordinal_substructure_mask();

    static final int SCROLL_MASK = get_ordinal_scroll_mask();

    private static native final int get_ordinal_scroll_mask();

    static final int TOUCH_MASK = get_ordinal_touch_mask();

    private static native final int get_ordinal_touch_mask();

    static final int SMOOTH_SCROLL_MASK = get_ordinal_smooth_scroll_mask();

    private static native final int get_ordinal_smooth_scroll_mask();

    static final int TOUCHPAD_GESTURE_MASK = get_ordinal_touchpad_gesture_mask();

    private static native final int get_ordinal_touchpad_gesture_mask();

    static final int TABLET_PAD_MASK = get_ordinal_tablet_pad_mask();

    private static native final int get_ordinal_tablet_pad_mask();

    static final int ALL_EVENTS_MASK = get_ordinal_all_events_mask();

    private static native final int get_ordinal_all_events_mask();
}

