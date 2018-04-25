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
#include "org_gnome_gdk_GdkDisplay.h"

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1beep
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkDisplay* self;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// call function
	gdk_display_beep(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1close
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkDisplay* self;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// call function
	gdk_display_close(self);

	// cleanup parameter self
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1device_1is_1grabbed
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _device
)
{
	gboolean result;
	jboolean _result;
	GdkDisplay* self;
	GdkDevice* device;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// convert parameter device
	device = (GdkDevice*) _device;

	// call function
	result = gdk_display_device_is_grabbed(self, device);

	// cleanup parameter self

	// cleanup parameter device

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1flush
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkDisplay* self;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// call function
	gdk_display_flush(self);

	// cleanup parameter self
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1get_1default_1cursor_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GdkDisplay* self;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// call function
	result = gdk_display_get_default_cursor_size(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1get_1default_1group
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* result;
	jlong _result;
	GdkDisplay* self;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// call function
	result = gdk_display_get_default_group(self);

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
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1get_1default_1screen
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkScreen* result;
	jlong _result;
	GdkDisplay* self;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// call function
	result = gdk_display_get_default_screen(self);

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
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1get_1event
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkEvent* result;
	jlong _result;
	GdkDisplay* self;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// call function
	result = gdk_display_get_event(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1get_1maximal_1cursor_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _width,
	jintArray _height
)
{
	GdkDisplay* self;
	guint* width;
	guint* height;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// convert parameter width
	if (_width == NULL) {
		width = NULL;
	} else {
		width = (guint*) (*env)->GetIntArrayElements(env, _width, NULL);
		if (width == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter height
	if (_height == NULL) {
		height = NULL;
	} else {
		height = (guint*) (*env)->GetIntArrayElements(env, _height, NULL);
		if (height == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gdk_display_get_maximal_cursor_size(self, width, height);

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

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1get_1n_1monitors
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	GdkDisplay* self;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// call function
	result = gdk_display_get_n_monitors(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1get_1n_1screens
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GdkDisplay* self;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// call function
	result = gdk_display_get_n_screens(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1get_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GdkDisplay* self;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// call function
	result = gdk_display_get_name(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1get_1pointer
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlongArray _screen,
	jintArray _x,
	jintArray _y,
	jintArray _mask
)
{
	GdkDisplay* self;
	GdkScreen** screen;
	gint* x;
	gint* y;
	GdkModifierType* mask;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// convert parameter screen
	if (_screen == NULL) {
		screen = NULL;
	} else {
		screen = (GdkScreen**) bindings_java_convert_jarray_to_gpointer(env, _screen);
		if (screen == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter x
	if (_x == NULL) {
		x = NULL;
	} else {
		x = (gint*) (*env)->GetIntArrayElements(env, _x, NULL);
		if (x == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter y
	if (_y == NULL) {
		y = NULL;
	} else {
		y = (gint*) (*env)->GetIntArrayElements(env, _y, NULL);
		if (y == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter mask
	if (_mask == NULL) {
		mask = NULL;
	} else {
		mask = (GdkModifierType*) (*env)->GetIntArrayElements(env, _mask, NULL);
		if (mask == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gdk_display_get_pointer(self, screen, x, y, mask);

	// cleanup parameter self

	// cleanup parameter screen
	if (screen != NULL) {
		bindings_java_convert_gpointer_to_jarray(env, (gpointer*)screen, _screen);
	}

	// cleanup parameter x
	if (x != NULL) {
		(*env)->ReleaseIntArrayElements(env, _x, (jint*)x, 0);
	}

	// cleanup parameter y
	if (y != NULL) {
		(*env)->ReleaseIntArrayElements(env, _y, (jint*)y, 0);
	}

	// cleanup parameter mask
	if (mask != NULL) {
		(*env)->ReleaseIntArrayElements(env, _mask, (jint*)mask, 0);
	}
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1get_1screen
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _screenNum
)
{
	GdkScreen* result;
	jlong _result;
	GdkDisplay* self;
	gint screenNum;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// convert parameter screenNum
	screenNum = (gint) _screenNum;

	// call function
	result = gdk_display_get_screen(self, screenNum);

	// cleanup parameter self

	// cleanup parameter screenNum

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
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1get_1window_1at_1pointer
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _winX,
	jintArray _winY
)
{
	GdkWindow* result;
	jlong _result;
	GdkDisplay* self;
	gint* winX;
	gint* winY;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// convert parameter winX
	if (_winX == NULL) {
		winX = NULL;
	} else {
		winX = (gint*) (*env)->GetIntArrayElements(env, _winX, NULL);
		if (winX == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// convert parameter winY
	if (_winY == NULL) {
		winY = NULL;
	} else {
		winY = (gint*) (*env)->GetIntArrayElements(env, _winY, NULL);
		if (winY == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// call function
	result = gdk_display_get_window_at_pointer(self, winX, winY);

	// cleanup parameter self

	// cleanup parameter winX
	if (winX != NULL) {
		(*env)->ReleaseIntArrayElements(env, _winX, (jint*)winX, 0);
	}

	// cleanup parameter winY
	if (winY != NULL) {
		(*env)->ReleaseIntArrayElements(env, _winY, (jint*)winY, 0);
	}

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
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1has_1pending
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkDisplay* self;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// call function
	result = gdk_display_has_pending(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1is_1closed
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkDisplay* self;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// call function
	result = gdk_display_is_closed(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1keyboard_1ungrab
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _time
)
{
	GdkDisplay* self;
	guint32 time;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// convert parameter time
	time = (guint32) _time;

	// call function
	gdk_display_keyboard_ungrab(self, time);

	// cleanup parameter self

	// cleanup parameter time
}

JNIEXPORT jlongArray JNICALL
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1list_1devices
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GList* result;
	jlongArray _result;
	GdkDisplay* self;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// call function
	result = gdk_display_list_devices(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlongArray) bindings_java_convert_glist_to_jarray(env, result);

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1notify_1startup_1complete
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _startupId
)
{
	GdkDisplay* self;
	const gchar* startupId;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// convert parameter startupId
	startupId = (const gchar*) bindings_java_getString(env, _startupId);
	if (startupId == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gdk_display_notify_startup_complete(self, startupId);

	// cleanup parameter self

	// cleanup parameter startupId
	bindings_java_releaseString(startupId);
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1peek_1event
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkEvent* result;
	jlong _result;
	GdkDisplay* self;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// call function
	result = gdk_display_peek_event(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1pointer_1is_1grabbed
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkDisplay* self;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// call function
	result = gdk_display_pointer_is_grabbed(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1pointer_1ungrab
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _time
)
{
	GdkDisplay* self;
	guint32 time;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// convert parameter time
	time = (guint32) _time;

	// call function
	gdk_display_pointer_ungrab(self, time);

	// cleanup parameter self

	// cleanup parameter time
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1put_1event
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _event
)
{
	GdkDisplay* self;
	const GdkEvent* event;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// convert parameter event
	event = (const GdkEvent*) _event;

	// call function
	gdk_display_put_event(self, event);

	// cleanup parameter self

	// cleanup parameter event
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1set_1double_1click_1distance
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _distance
)
{
	GdkDisplay* self;
	guint distance;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// convert parameter distance
	distance = (guint) _distance;

	// call function
	gdk_display_set_double_click_distance(self, distance);

	// cleanup parameter self

	// cleanup parameter distance
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1set_1double_1click_1time
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _msec
)
{
	GdkDisplay* self;
	guint msec;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// convert parameter msec
	msec = (guint) _msec;

	// call function
	gdk_display_set_double_click_time(self, msec);

	// cleanup parameter self

	// cleanup parameter msec
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1supports_1clipboard_1persistence
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkDisplay* self;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// call function
	result = gdk_display_supports_clipboard_persistence(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1supports_1composite
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkDisplay* self;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// call function
	result = gdk_display_supports_composite(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1supports_1cursor_1alpha
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkDisplay* self;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// call function
	result = gdk_display_supports_cursor_alpha(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1supports_1cursor_1color
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkDisplay* self;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// call function
	result = gdk_display_supports_cursor_color(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1supports_1input_1shapes
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkDisplay* self;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// call function
	result = gdk_display_supports_input_shapes(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1supports_1selection_1notification
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkDisplay* self;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// call function
	result = gdk_display_supports_selection_notification(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1supports_1shapes
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkDisplay* self;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// call function
	result = gdk_display_supports_shapes(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1sync
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkDisplay* self;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// call function
	gdk_display_sync(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1warp_1pointer
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _screen,
	jint _x,
	jint _y
)
{
	GdkDisplay* self;
	GdkScreen* screen;
	gint x;
	gint y;

	// convert parameter self
	self = (GdkDisplay*) _self;

	// convert parameter screen
	screen = (GdkScreen*) _screen;

	// convert parameter x
	x = (gint) _x;

	// convert parameter y
	y = (gint) _y;

	// call function
	gdk_display_warp_pointer(self, screen, x, y);

	// cleanup parameter self

	// cleanup parameter screen

	// cleanup parameter x

	// cleanup parameter y
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1get_1default
(
	JNIEnv* env,
	jclass cls
)
{
	GdkDisplay* result;
	jlong _result;

	// call function
	result = gdk_display_get_default();

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
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1open
(
	JNIEnv* env,
	jclass cls,
	jstring _displayName
)
{
	GdkDisplay* result;
	jlong _result;
	const gchar* displayName;

	// convert parameter displayName
	displayName = (const gchar*) bindings_java_getString(env, _displayName);
	if (displayName == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gdk_display_open(displayName);

	// cleanup parameter displayName
	bindings_java_releaseString(displayName);

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
Java_org_gnome_gdk_GdkDisplay_gdk_1display_1open_1default_1libgtk_1only
(
	JNIEnv* env,
	jclass cls
)
{
	GdkDisplay* result;
	jlong _result;

	// call function
	result = gdk_display_open_default_libgtk_only();

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, FALSE);
	}

	// and finally
	return _result;
}
