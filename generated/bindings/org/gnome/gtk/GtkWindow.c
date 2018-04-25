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
#include <gtk/gtk-a11y.h>
#include <gtk/gtk.h>
#include <gtk/gtkx.h>
#include "bindings_java.h"
#include "org_gnome_gtk_GtkWindow.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1new
(
	JNIEnv* env,
	jclass cls,
	jint _type
)
{
	GtkWidget* result;
	jlong _result;
	GtkWindowType type;

	// convert parameter type
	type = (GtkWindowType) _type;

	// call function
	result = gtk_window_new(type);

	// cleanup parameter type

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, FALSE);
	}

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1activate_1default
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_activate_default(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1activate_1focus
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_activate_focus(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1activate_1key
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _event
)
{
	gboolean result;
	jboolean _result;
	GtkWindow* self;
	GdkEventKey* event;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter event
	event = (GdkEventKey*) _event;

	// call function
	result = gtk_window_activate_key(self, event);

	// cleanup parameter self

	// cleanup parameter event

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1add_1accel_1group
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _accelGroup
)
{
	GtkWindow* self;
	GtkAccelGroup* accelGroup;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter accelGroup
	accelGroup = (GtkAccelGroup*) _accelGroup;

	// call function
	gtk_window_add_accel_group(self, accelGroup);

	// cleanup parameter self

	// cleanup parameter accelGroup
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1add_1mnemonic
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _keyval,
	jlong _target
)
{
	GtkWindow* self;
	guint keyval;
	GtkWidget* target;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter keyval
	keyval = (guint) _keyval;

	// convert parameter target
	target = (GtkWidget*) _target;

	// call function
	gtk_window_add_mnemonic(self, keyval, target);

	// cleanup parameter self

	// cleanup parameter keyval

	// cleanup parameter target
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1begin_1move_1drag
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _button,
	jint _rootX,
	jint _rootY,
	jint _timestamp
)
{
	GtkWindow* self;
	gint button;
	gint rootX;
	gint rootY;
	guint32 timestamp;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter button
	button = (gint) _button;

	// convert parameter rootX
	rootX = (gint) _rootX;

	// convert parameter rootY
	rootY = (gint) _rootY;

	// convert parameter timestamp
	timestamp = (guint32) _timestamp;

	// call function
	gtk_window_begin_move_drag(self, button, rootX, rootY, timestamp);

	// cleanup parameter self

	// cleanup parameter button

	// cleanup parameter rootX

	// cleanup parameter rootY

	// cleanup parameter timestamp
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1begin_1resize_1drag
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _edge,
	jint _button,
	jint _rootX,
	jint _rootY,
	jint _timestamp
)
{
	GtkWindow* self;
	GdkWindowEdge edge;
	gint button;
	gint rootX;
	gint rootY;
	guint32 timestamp;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter edge
	edge = (GdkWindowEdge) _edge;

	// convert parameter button
	button = (gint) _button;

	// convert parameter rootX
	rootX = (gint) _rootX;

	// convert parameter rootY
	rootY = (gint) _rootY;

	// convert parameter timestamp
	timestamp = (guint32) _timestamp;

	// call function
	gtk_window_begin_resize_drag(self, edge, button, rootX, rootY, timestamp);

	// cleanup parameter self

	// cleanup parameter edge

	// cleanup parameter button

	// cleanup parameter rootX

	// cleanup parameter rootY

	// cleanup parameter timestamp
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1close
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	gtk_window_close(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1deiconify
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	gtk_window_deiconify(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1fullscreen
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	gtk_window_fullscreen(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1fullscreen_1on_1monitor
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _screen,
	jint _monitor
)
{
	GtkWindow* self;
	GdkScreen* screen;
	gint monitor;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter screen
	screen = (GdkScreen*) _screen;

	// convert parameter monitor
	monitor = (gint) _monitor;

	// call function
	gtk_window_fullscreen_on_monitor(self, screen, monitor);

	// cleanup parameter self

	// cleanup parameter screen

	// cleanup parameter monitor
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1accept_1focus
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_get_accept_focus(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1application
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkApplication* result;
	jlong _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_get_application(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, FALSE);
	}

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1attached_1to
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_get_attached_to(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, FALSE);
	}

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1decorated
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_get_decorated(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1default_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _width,
	jintArray _height
)
{
	GtkWindow* self;
	gint* width;
	gint* height;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter width
	if (_width == NULL) {
		width = NULL;
	} else {
		width = (gint*) (*env)->GetIntArrayElements(env, _width, NULL);
		if (width == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter height
	if (_height == NULL) {
		height = NULL;
	} else {
		height = (gint*) (*env)->GetIntArrayElements(env, _height, NULL);
		if (height == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_window_get_default_size(self, width, height);

	// cleanup parameter self

	// cleanup parameter width
	if (width != NULL) {
		(*env)->ReleaseIntArrayElements(env, _width, (jint*)width, 0);
	}

	// cleanup parameter height
	if (height != NULL) {
		(*env)->ReleaseIntArrayElements(env, _height, (jint*)height, 0);
	}
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1default_1widget
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_get_default_widget(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, FALSE);
	}

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1deletable
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_get_deletable(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1destroy_1with_1parent
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_get_destroy_with_parent(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1focus
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_get_focus(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, FALSE);
	}

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1focus_1on_1map
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_get_focus_on_map(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1focus_1visible
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_get_focus_visible(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1gravity
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkGravity result;
	jint _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_get_gravity(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1group
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWindowGroup* result;
	jlong _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_get_group(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, FALSE);
	}

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1has_1resize_1grip
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_get_has_resize_grip(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1hide_1titlebar_1when_1maximized
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_get_hide_titlebar_when_maximized(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1icon
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkPixbuf* result;
	jlong _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_get_icon(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, FALSE);
	}

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1icon_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_get_icon_name(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1mnemonic_1modifier
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkModifierType result;
	jint _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_get_mnemonic_modifier(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1mnemonics_1visible
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_get_mnemonics_visible(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1modal
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_get_modal(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1opacity
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_get_opacity(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1position
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _rootX,
	jintArray _rootY
)
{
	GtkWindow* self;
	gint* rootX;
	gint* rootY;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter rootX
	if (_rootX == NULL) {
		rootX = NULL;
	} else {
		rootX = (gint*) (*env)->GetIntArrayElements(env, _rootX, NULL);
		if (rootX == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter rootY
	if (_rootY == NULL) {
		rootY = NULL;
	} else {
		rootY = (gint*) (*env)->GetIntArrayElements(env, _rootY, NULL);
		if (rootY == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_window_get_position(self, rootX, rootY);

	// cleanup parameter self

	// cleanup parameter rootX
	if (rootX != NULL) {
		(*env)->ReleaseIntArrayElements(env, _rootX, (jint*)rootX, 0);
	}

	// cleanup parameter rootY
	if (rootY != NULL) {
		(*env)->ReleaseIntArrayElements(env, _rootY, (jint*)rootY, 0);
	}
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1resizable
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_get_resizable(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1resize_1grip_1area
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _rect
)
{
	gboolean result;
	jboolean _result;
	GtkWindow* self;
	GdkRectangle* rect;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter rect
	rect = (GdkRectangle*) _rect;

	// call function
	result = gtk_window_get_resize_grip_area(self, rect);

	// cleanup parameter self

	// cleanup parameter rect

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1role
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_get_role(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1screen
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkScreen* result;
	jlong _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_get_screen(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, FALSE);
	}

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _width,
	jintArray _height
)
{
	GtkWindow* self;
	gint* width;
	gint* height;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter width
	if (_width == NULL) {
		width = NULL;
	} else {
		width = (gint*) (*env)->GetIntArrayElements(env, _width, NULL);
		if (width == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter height
	if (_height == NULL) {
		height = NULL;
	} else {
		height = (gint*) (*env)->GetIntArrayElements(env, _height, NULL);
		if (height == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_window_get_size(self, width, height);

	// cleanup parameter self

	// cleanup parameter width
	if (width != NULL) {
		(*env)->ReleaseIntArrayElements(env, _width, (jint*)width, 0);
	}

	// cleanup parameter height
	if (height != NULL) {
		(*env)->ReleaseIntArrayElements(env, _height, (jint*)height, 0);
	}
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1skip_1pager_1hint
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_get_skip_pager_hint(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1skip_1taskbar_1hint
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_get_skip_taskbar_hint(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1title
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_get_title(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1titlebar
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_get_titlebar(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, FALSE);
	}

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1transient_1for
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWindow* result;
	jlong _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_get_transient_for(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, FALSE);
	}

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1type_1hint
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindowTypeHint result;
	jint _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_get_type_hint(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1urgency_1hint
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_get_urgency_hint(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1window_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWindowType result;
	jint _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_get_window_type(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1has_1group
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_has_group(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1has_1toplevel_1focus
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_has_toplevel_focus(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1iconify
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	gtk_window_iconify(self);

	// cleanup parameter self
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1is_1active
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_is_active(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1is_1maximized
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_is_maximized(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1maximize
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	gtk_window_maximize(self);

	// cleanup parameter self
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1mnemonic_1activate
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _keyval,
	jint _modifier
)
{
	gboolean result;
	jboolean _result;
	GtkWindow* self;
	guint keyval;
	GdkModifierType modifier;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter keyval
	keyval = (guint) _keyval;

	// convert parameter modifier
	modifier = (GdkModifierType) _modifier;

	// call function
	result = gtk_window_mnemonic_activate(self, keyval, modifier);

	// cleanup parameter self

	// cleanup parameter keyval

	// cleanup parameter modifier

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1move
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _x,
	jint _y
)
{
	GtkWindow* self;
	gint x;
	gint y;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter x
	x = (gint) _x;

	// convert parameter y
	y = (gint) _y;

	// call function
	gtk_window_move(self, x, y);

	// cleanup parameter self

	// cleanup parameter x

	// cleanup parameter y
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1parse_1geometry
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _geometry
)
{
	gboolean result;
	jboolean _result;
	GtkWindow* self;
	const gchar* geometry;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter geometry
	geometry = (const gchar*) bindings_java_getString(env, _geometry);
	if (geometry == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gtk_window_parse_geometry(self, geometry);

	// cleanup parameter self

	// cleanup parameter geometry
	bindings_java_releaseString(geometry);

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1present
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	gtk_window_present(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1present_1with_1time
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _timestamp
)
{
	GtkWindow* self;
	guint32 timestamp;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter timestamp
	timestamp = (guint32) _timestamp;

	// call function
	gtk_window_present_with_time(self, timestamp);

	// cleanup parameter self

	// cleanup parameter timestamp
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1propagate_1key_1event
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _event
)
{
	gboolean result;
	jboolean _result;
	GtkWindow* self;
	GdkEventKey* event;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter event
	event = (GdkEventKey*) _event;

	// call function
	result = gtk_window_propagate_key_event(self, event);

	// cleanup parameter self

	// cleanup parameter event

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1remove_1accel_1group
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _accelGroup
)
{
	GtkWindow* self;
	GtkAccelGroup* accelGroup;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter accelGroup
	accelGroup = (GtkAccelGroup*) _accelGroup;

	// call function
	gtk_window_remove_accel_group(self, accelGroup);

	// cleanup parameter self

	// cleanup parameter accelGroup
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1remove_1mnemonic
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _keyval,
	jlong _target
)
{
	GtkWindow* self;
	guint keyval;
	GtkWidget* target;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter keyval
	keyval = (guint) _keyval;

	// convert parameter target
	target = (GtkWidget*) _target;

	// call function
	gtk_window_remove_mnemonic(self, keyval, target);

	// cleanup parameter self

	// cleanup parameter keyval

	// cleanup parameter target
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1reshow_1with_1initial_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	gtk_window_reshow_with_initial_size(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1resize
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _width,
	jint _height
)
{
	GtkWindow* self;
	gint width;
	gint height;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter width
	width = (gint) _width;

	// convert parameter height
	height = (gint) _height;

	// call function
	gtk_window_resize(self, width, height);

	// cleanup parameter self

	// cleanup parameter width

	// cleanup parameter height
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1resize_1grip_1is_1visible
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	result = gtk_window_resize_grip_is_visible(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1resize_1to_1geometry
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _width,
	jint _height
)
{
	GtkWindow* self;
	gint width;
	gint height;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter width
	width = (gint) _width;

	// convert parameter height
	height = (gint) _height;

	// call function
	gtk_window_resize_to_geometry(self, width, height);

	// cleanup parameter self

	// cleanup parameter width

	// cleanup parameter height
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1accept_1focus
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	GtkWindow* self;
	gboolean setting;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gtk_window_set_accept_focus(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1application
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _application
)
{
	GtkWindow* self;
	GtkApplication* application;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter application
	application = (GtkApplication*) _application;

	// call function
	gtk_window_set_application(self, application);

	// cleanup parameter self

	// cleanup parameter application
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1attached_1to
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _attachWidget
)
{
	GtkWindow* self;
	GtkWidget* attachWidget;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter attachWidget
	attachWidget = (GtkWidget*) _attachWidget;

	// call function
	gtk_window_set_attached_to(self, attachWidget);

	// cleanup parameter self

	// cleanup parameter attachWidget
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1decorated
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	GtkWindow* self;
	gboolean setting;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gtk_window_set_decorated(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1default
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _defaultWidget
)
{
	GtkWindow* self;
	GtkWidget* defaultWidget;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter defaultWidget
	defaultWidget = (GtkWidget*) _defaultWidget;

	// call function
	gtk_window_set_default(self, defaultWidget);

	// cleanup parameter self

	// cleanup parameter defaultWidget
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1default_1geometry
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _width,
	jint _height
)
{
	GtkWindow* self;
	gint width;
	gint height;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter width
	width = (gint) _width;

	// convert parameter height
	height = (gint) _height;

	// call function
	gtk_window_set_default_geometry(self, width, height);

	// cleanup parameter self

	// cleanup parameter width

	// cleanup parameter height
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1default_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _width,
	jint _height
)
{
	GtkWindow* self;
	gint width;
	gint height;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter width
	width = (gint) _width;

	// convert parameter height
	height = (gint) _height;

	// call function
	gtk_window_set_default_size(self, width, height);

	// cleanup parameter self

	// cleanup parameter width

	// cleanup parameter height
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1deletable
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	GtkWindow* self;
	gboolean setting;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gtk_window_set_deletable(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1destroy_1with_1parent
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	GtkWindow* self;
	gboolean setting;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gtk_window_set_destroy_with_parent(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1focus
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _focus
)
{
	GtkWindow* self;
	GtkWidget* focus;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter focus
	focus = (GtkWidget*) _focus;

	// call function
	gtk_window_set_focus(self, focus);

	// cleanup parameter self

	// cleanup parameter focus
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1focus_1on_1map
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	GtkWindow* self;
	gboolean setting;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gtk_window_set_focus_on_map(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1focus_1visible
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	GtkWindow* self;
	gboolean setting;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gtk_window_set_focus_visible(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1geometry_1hints
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _geometryWidget,
	jlong _geometry,
	jint _geomMask
)
{
	GtkWindow* self;
	GtkWidget* geometryWidget;
	GdkGeometry* geometry;
	GdkWindowHints geomMask;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter geometryWidget
	geometryWidget = (GtkWidget*) _geometryWidget;

	// convert parameter geometry
	geometry = (GdkGeometry*) _geometry;

	// convert parameter geomMask
	geomMask = (GdkWindowHints) _geomMask;

	// call function
	gtk_window_set_geometry_hints(self, geometryWidget, geometry, geomMask);

	// cleanup parameter self

	// cleanup parameter geometryWidget

	// cleanup parameter geometry

	// cleanup parameter geomMask
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1gravity
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _gravity
)
{
	GtkWindow* self;
	GdkGravity gravity;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter gravity
	gravity = (GdkGravity) _gravity;

	// call function
	gtk_window_set_gravity(self, gravity);

	// cleanup parameter self

	// cleanup parameter gravity
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1has_1resize_1grip
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _value
)
{
	GtkWindow* self;
	gboolean value;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter value
	value = (gboolean) _value;

	// call function
	gtk_window_set_has_resize_grip(self, value);

	// cleanup parameter self

	// cleanup parameter value
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1has_1user_1ref_1count
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	GtkWindow* self;
	gboolean setting;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gtk_window_set_has_user_ref_count(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1hide_1titlebar_1when_1maximized
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	GtkWindow* self;
	gboolean setting;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gtk_window_set_hide_titlebar_when_maximized(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1icon
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _icon
)
{
	GtkWindow* self;
	GdkPixbuf* icon;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter icon
	icon = (GdkPixbuf*) _icon;

	// call function
	gtk_window_set_icon(self, icon);

	// cleanup parameter self

	// cleanup parameter icon
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1icon_1from_1file
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _filename
)
{
	gboolean result;
	jboolean _result;
	GtkWindow* self;
	const gchar* filename;
	GError* error = NULL;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter filename
	filename = (const gchar*) bindings_java_getString(env, _filename);
	if (filename == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gtk_window_set_icon_from_file(self, filename, &error);

	// cleanup parameter self

	// cleanup parameter filename
	bindings_java_releaseString(filename);

	// check for error
	if (error) {
		bindings_java_throwGlibException(env, error);
		return  JNI_FALSE;
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1icon_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _name
)
{
	GtkWindow* self;
	const gchar* name;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter name
	if (_name == NULL) {
		name = NULL;
	} else {
		name = (const gchar*) bindings_java_getString(env, _name);
		if (name == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_window_set_icon_name(self, name);

	// cleanup parameter self

	// cleanup parameter name
	if (name != NULL) {
		bindings_java_releaseString(name);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1keep_1above
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	GtkWindow* self;
	gboolean setting;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gtk_window_set_keep_above(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1keep_1below
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	GtkWindow* self;
	gboolean setting;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gtk_window_set_keep_below(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1mnemonic_1modifier
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _modifier
)
{
	GtkWindow* self;
	GdkModifierType modifier;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter modifier
	modifier = (GdkModifierType) _modifier;

	// call function
	gtk_window_set_mnemonic_modifier(self, modifier);

	// cleanup parameter self

	// cleanup parameter modifier
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1mnemonics_1visible
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	GtkWindow* self;
	gboolean setting;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gtk_window_set_mnemonics_visible(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1modal
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _modal
)
{
	GtkWindow* self;
	gboolean modal;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter modal
	modal = (gboolean) _modal;

	// call function
	gtk_window_set_modal(self, modal);

	// cleanup parameter self

	// cleanup parameter modal
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1opacity
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _opacity
)
{
	GtkWindow* self;
	gdouble opacity;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter opacity
	opacity = (gdouble) _opacity;

	// call function
	gtk_window_set_opacity(self, opacity);

	// cleanup parameter self

	// cleanup parameter opacity
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1position
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _position
)
{
	GtkWindow* self;
	GtkWindowPosition position;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter position
	position = (GtkWindowPosition) _position;

	// call function
	gtk_window_set_position(self, position);

	// cleanup parameter self

	// cleanup parameter position
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1resizable
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _resizable
)
{
	GtkWindow* self;
	gboolean resizable;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter resizable
	resizable = (gboolean) _resizable;

	// call function
	gtk_window_set_resizable(self, resizable);

	// cleanup parameter self

	// cleanup parameter resizable
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1role
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _role
)
{
	GtkWindow* self;
	const gchar* role;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter role
	role = (const gchar*) bindings_java_getString(env, _role);
	if (role == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_window_set_role(self, role);

	// cleanup parameter self

	// cleanup parameter role
	bindings_java_releaseString(role);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1screen
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _screen
)
{
	GtkWindow* self;
	GdkScreen* screen;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter screen
	screen = (GdkScreen*) _screen;

	// call function
	gtk_window_set_screen(self, screen);

	// cleanup parameter self

	// cleanup parameter screen
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1skip_1pager_1hint
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	GtkWindow* self;
	gboolean setting;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gtk_window_set_skip_pager_hint(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1skip_1taskbar_1hint
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	GtkWindow* self;
	gboolean setting;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gtk_window_set_skip_taskbar_hint(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1startup_1id
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _startupId
)
{
	GtkWindow* self;
	const gchar* startupId;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter startupId
	startupId = (const gchar*) bindings_java_getString(env, _startupId);
	if (startupId == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_window_set_startup_id(self, startupId);

	// cleanup parameter self

	// cleanup parameter startupId
	bindings_java_releaseString(startupId);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1title
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _title
)
{
	GtkWindow* self;
	const gchar* title;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter title
	title = (const gchar*) bindings_java_getString(env, _title);
	if (title == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_window_set_title(self, title);

	// cleanup parameter self

	// cleanup parameter title
	bindings_java_releaseString(title);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1titlebar
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _titlebar
)
{
	GtkWindow* self;
	GtkWidget* titlebar;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter titlebar
	titlebar = (GtkWidget*) _titlebar;

	// call function
	gtk_window_set_titlebar(self, titlebar);

	// cleanup parameter self

	// cleanup parameter titlebar
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1transient_1for
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _parent
)
{
	GtkWindow* self;
	GtkWindow* parent;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter parent
	parent = (GtkWindow*) _parent;

	// call function
	gtk_window_set_transient_for(self, parent);

	// cleanup parameter self

	// cleanup parameter parent
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1type_1hint
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _hint
)
{
	GtkWindow* self;
	GdkWindowTypeHint hint;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter hint
	hint = (GdkWindowTypeHint) _hint;

	// call function
	gtk_window_set_type_hint(self, hint);

	// cleanup parameter self

	// cleanup parameter hint
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1urgency_1hint
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	GtkWindow* self;
	gboolean setting;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gtk_window_set_urgency_hint(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1wmclass
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _wmclassName,
	jstring _wmclassClass
)
{
	GtkWindow* self;
	const gchar* wmclassName;
	const gchar* wmclassClass;

	// convert parameter self
	self = (GtkWindow*) _self;

	// convert parameter wmclassName
	wmclassName = (const gchar*) bindings_java_getString(env, _wmclassName);
	if (wmclassName == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter wmclassClass
	wmclassClass = (const gchar*) bindings_java_getString(env, _wmclassClass);
	if (wmclassClass == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_window_set_wmclass(self, wmclassName, wmclassClass);

	// cleanup parameter self

	// cleanup parameter wmclassName
	bindings_java_releaseString(wmclassName);

	// cleanup parameter wmclassClass
	bindings_java_releaseString(wmclassClass);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1stick
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	gtk_window_stick(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1unfullscreen
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	gtk_window_unfullscreen(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1unmaximize
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	gtk_window_unmaximize(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1unstick
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWindow* self;

	// convert parameter self
	self = (GtkWindow*) _self;

	// call function
	gtk_window_unstick(self);

	// cleanup parameter self
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1get_1default_1icon_1name
(
	JNIEnv* env,
	jclass cls
)
{
	const gchar* result;
	jstring _result;

	// call function
	result = gtk_window_get_default_icon_name();

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jlongArray JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1list_1toplevels
(
	JNIEnv* env,
	jclass cls
)
{
	GList* result;
	jlongArray _result;

	// call function
	result = gtk_window_list_toplevels();

	// translate return value to JNI type
	_result = (jlongArray) bindings_java_convert_glist_to_jarray(env, result);

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1auto_1startup_1notification
(
	JNIEnv* env,
	jclass cls,
	jboolean _setting
)
{
	gboolean setting;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gtk_window_set_auto_startup_notification(setting);

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1default_1icon
(
	JNIEnv* env,
	jclass cls,
	jlong _icon
)
{
	GdkPixbuf* icon;

	// convert parameter icon
	icon = (GdkPixbuf*) _icon;

	// call function
	gtk_window_set_default_icon(icon);

	// cleanup parameter icon
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1default_1icon_1from_1file
(
	JNIEnv* env,
	jclass cls,
	jstring _filename
)
{
	gboolean result;
	jboolean _result;
	const gchar* filename;
	GError* error = NULL;

	// convert parameter filename
	filename = (const gchar*) bindings_java_getString(env, _filename);
	if (filename == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gtk_window_set_default_icon_from_file(filename, &error);

	// cleanup parameter filename
	bindings_java_releaseString(filename);

	// check for error
	if (error) {
		bindings_java_throwGlibException(env, error);
		return  JNI_FALSE;
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1default_1icon_1name
(
	JNIEnv* env,
	jclass cls,
	jstring _name
)
{
	const gchar* name;

	// convert parameter name
	name = (const gchar*) bindings_java_getString(env, _name);
	if (name == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_window_set_default_icon_name(name);

	// cleanup parameter name
	bindings_java_releaseString(name);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWindow_gtk_1window_1set_1interactive_1debugging
(
	JNIEnv* env,
	jclass cls,
	jboolean _enable
)
{
	gboolean enable;

	// convert parameter enable
	enable = (gboolean) _enable;

	// call function
	gtk_window_set_interactive_debugging(enable);

	// cleanup parameter enable
}
