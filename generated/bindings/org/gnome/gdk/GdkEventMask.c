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

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

#include <jni.h>
#include <gtk/gtk.h>
#include <gdk/gdk.h>
#include "bindings_java.h"
#include "org_gnome_gdk_GdkEventMask.h"

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventMask_get_1ordinal_1exposure_1mask
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GDK_EXPOSURE_MASK;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventMask_get_1ordinal_1pointer_1motion_1mask
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GDK_POINTER_MOTION_MASK;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventMask_get_1ordinal_1pointer_1motion_1hint_1mask
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GDK_POINTER_MOTION_HINT_MASK;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventMask_get_1ordinal_1button_1motion_1mask
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GDK_BUTTON_MOTION_MASK;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventMask_get_1ordinal_1button1_1motion_1mask
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GDK_BUTTON1_MOTION_MASK;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventMask_get_1ordinal_1button2_1motion_1mask
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GDK_BUTTON2_MOTION_MASK;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventMask_get_1ordinal_1button3_1motion_1mask
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GDK_BUTTON3_MOTION_MASK;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventMask_get_1ordinal_1button_1press_1mask
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GDK_BUTTON_PRESS_MASK;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventMask_get_1ordinal_1button_1release_1mask
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GDK_BUTTON_RELEASE_MASK;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventMask_get_1ordinal_1key_1press_1mask
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GDK_KEY_PRESS_MASK;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventMask_get_1ordinal_1key_1release_1mask
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GDK_KEY_RELEASE_MASK;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventMask_get_1ordinal_1enter_1notify_1mask
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GDK_ENTER_NOTIFY_MASK;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventMask_get_1ordinal_1leave_1notify_1mask
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GDK_LEAVE_NOTIFY_MASK;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventMask_get_1ordinal_1focus_1change_1mask
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GDK_FOCUS_CHANGE_MASK;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventMask_get_1ordinal_1structure_1mask
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GDK_STRUCTURE_MASK;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventMask_get_1ordinal_1property_1change_1mask
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GDK_PROPERTY_CHANGE_MASK;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventMask_get_1ordinal_1visibility_1notify_1mask
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GDK_VISIBILITY_NOTIFY_MASK;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventMask_get_1ordinal_1proximity_1in_1mask
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GDK_PROXIMITY_IN_MASK;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventMask_get_1ordinal_1proximity_1out_1mask
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GDK_PROXIMITY_OUT_MASK;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventMask_get_1ordinal_1substructure_1mask
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GDK_SUBSTRUCTURE_MASK;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventMask_get_1ordinal_1scroll_1mask
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GDK_SCROLL_MASK;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventMask_get_1ordinal_1touch_1mask
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GDK_TOUCH_MASK;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventMask_get_1ordinal_1smooth_1scroll_1mask
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GDK_SMOOTH_SCROLL_MASK;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventMask_get_1ordinal_1touchpad_1gesture_1mask
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GDK_TOUCHPAD_GESTURE_MASK;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventMask_get_1ordinal_1tablet_1pad_1mask
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GDK_TABLET_PAD_MASK;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventMask_get_1ordinal_1all_1events_1mask
(
	JNIEnv* env,
	jclass cls
)
{
	return (jint) GDK_ALL_EVENTS_MASK;
}
