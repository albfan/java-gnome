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
#include "org_gnome_gdk_GdkDevice.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkDevice_gdk_1device_1get_1associated_1device
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkDevice* result;
	jlong _result;
	GdkDevice* self;

	// convert parameter self
	self = (GdkDevice*) _self;

	// call function
	result = gdk_device_get_associated_device(self);

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
Java_org_gnome_gdk_GdkDevice_gdk_1device_1get_1axis
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdoubleArray _axes,
	jint _use,
	jdoubleArray _value
)
{
	gboolean result;
	jboolean _result;
	GdkDevice* self;
	gdouble* axes;
	GdkAxisUse use;
	gdouble* value;

	// convert parameter self
	self = (GdkDevice*) _self;

	// convert parameter axes
	axes = (gdouble*) (*env)->GetDoubleArrayElements(env, _axes, NULL);
	if (axes == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// convert parameter use
	use = (GdkAxisUse) _use;

	// convert parameter value
	if (_value == NULL) {
		value = NULL;
	} else {
		value = (gdouble*) (*env)->GetDoubleArrayElements(env, _value, NULL);
		if (value == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gdk_device_get_axis(self, axes, use, value);

	// cleanup parameter self

	// cleanup parameter axes
	(*env)->ReleaseDoubleArrayElements(env, _axes, (jdouble*)axes, 0);

	// cleanup parameter use

	// cleanup parameter value
	if (value != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _value, (jdouble*)value, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkDevice_gdk_1device_1get_1axis_1use
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _index
)
{
	GdkAxisUse result;
	jint _result;
	GdkDevice* self;
	guint index;

	// convert parameter self
	self = (GdkDevice*) _self;

	// convert parameter index
	index = (guint) _index;

	// call function
	result = gdk_device_get_axis_use(self, index);

	// cleanup parameter self

	// cleanup parameter index

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkDevice_gdk_1device_1get_1display
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkDisplay* result;
	jlong _result;
	GdkDevice* self;

	// convert parameter self
	self = (GdkDevice*) _self;

	// call function
	result = gdk_device_get_display(self);

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
Java_org_gnome_gdk_GdkDevice_gdk_1device_1get_1has_1cursor
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkDevice* self;

	// convert parameter self
	self = (GdkDevice*) _self;

	// call function
	result = gdk_device_get_has_cursor(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkDevice_gdk_1device_1get_1key
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _index,
	jintArray _keyval,
	jintArray _modifiers
)
{
	gboolean result;
	jboolean _result;
	GdkDevice* self;
	guint index;
	guint* keyval;
	GdkModifierType* modifiers;

	// convert parameter self
	self = (GdkDevice*) _self;

	// convert parameter index
	index = (guint) _index;

	// convert parameter keyval
	if (_keyval == NULL) {
		keyval = NULL;
	} else {
		keyval = (guint*) (*env)->GetIntArrayElements(env, _keyval, NULL);
		if (keyval == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter modifiers
	if (_modifiers == NULL) {
		modifiers = NULL;
	} else {
		modifiers = (GdkModifierType*) (*env)->GetIntArrayElements(env, _modifiers, NULL);
		if (modifiers == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gdk_device_get_key(self, index, keyval, modifiers);

	// cleanup parameter self

	// cleanup parameter index

	// cleanup parameter keyval
	if (keyval != NULL) {
		(*env)->ReleaseIntArrayElements(env, _keyval, (jint*)keyval, 0);
	}

	// cleanup parameter modifiers
	if (modifiers != NULL) {
		(*env)->ReleaseIntArrayElements(env, _modifiers, (jint*)modifiers, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkDevice_gdk_1device_1get_1last_1event_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* result;
	jlong _result;
	GdkDevice* self;

	// convert parameter self
	self = (GdkDevice*) _self;

	// call function
	result = gdk_device_get_last_event_window(self);

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
Java_org_gnome_gdk_GdkDevice_gdk_1device_1get_1mode
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkInputMode result;
	jint _result;
	GdkDevice* self;

	// convert parameter self
	self = (GdkDevice*) _self;

	// call function
	result = gdk_device_get_mode(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkDevice_gdk_1device_1get_1n_1axes
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GdkDevice* self;

	// convert parameter self
	self = (GdkDevice*) _self;

	// call function
	result = gdk_device_get_n_axes(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkDevice_gdk_1device_1get_1n_1keys
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GdkDevice* self;

	// convert parameter self
	self = (GdkDevice*) _self;

	// call function
	result = gdk_device_get_n_keys(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gdk_GdkDevice_gdk_1device_1get_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GdkDevice* self;

	// convert parameter self
	self = (GdkDevice*) _self;

	// call function
	result = gdk_device_get_name(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkDevice_gdk_1device_1get_1position
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlongArray _screen,
	jintArray _x,
	jintArray _y
)
{
	GdkDevice* self;
	GdkScreen** screen;
	gint* x;
	gint* y;

	// convert parameter self
	self = (GdkDevice*) _self;

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

	// call function
	gdk_device_get_position(self, screen, x, y);

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
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkDevice_gdk_1device_1get_1position_1double
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlongArray _screen,
	jdoubleArray _x,
	jdoubleArray _y
)
{
	GdkDevice* self;
	GdkScreen** screen;
	gdouble* x;
	gdouble* y;

	// convert parameter self
	self = (GdkDevice*) _self;

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
		x = (gdouble*) (*env)->GetDoubleArrayElements(env, _x, NULL);
		if (x == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter y
	if (_y == NULL) {
		y = NULL;
	} else {
		y = (gdouble*) (*env)->GetDoubleArrayElements(env, _y, NULL);
		if (y == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gdk_device_get_position_double(self, screen, x, y);

	// cleanup parameter self

	// cleanup parameter screen
	if (screen != NULL) {
		bindings_java_convert_gpointer_to_jarray(env, (gpointer*)screen, _screen);
	}

	// cleanup parameter x
	if (x != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _x, (jdouble*)x, 0);
	}

	// cleanup parameter y
	if (y != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _y, (jdouble*)y, 0);
	}
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gdk_GdkDevice_gdk_1device_1get_1product_1id
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GdkDevice* self;

	// convert parameter self
	self = (GdkDevice*) _self;

	// call function
	result = gdk_device_get_product_id(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkDevice_gdk_1device_1get_1source
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkInputSource result;
	jint _result;
	GdkDevice* self;

	// convert parameter self
	self = (GdkDevice*) _self;

	// call function
	result = gdk_device_get_source(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkDevice_gdk_1device_1get_1state
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _window,
	jdoubleArray _axes,
	jintArray _mask
)
{
	GdkDevice* self;
	GdkWindow* window;
	gdouble* axes;
	GdkModifierType* mask;

	// convert parameter self
	self = (GdkDevice*) _self;

	// convert parameter window
	window = (GdkWindow*) _window;

	// convert parameter axes
	if (_axes == NULL) {
		axes = NULL;
	} else {
		axes = (gdouble*) (*env)->GetDoubleArrayElements(env, _axes, NULL);
		if (axes == NULL) {
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
	gdk_device_get_state(self, window, axes, mask);

	// cleanup parameter self

	// cleanup parameter window

	// cleanup parameter axes
	if (axes != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _axes, (jdouble*)axes, 0);
	}

	// cleanup parameter mask
	if (mask != NULL) {
		(*env)->ReleaseIntArrayElements(env, _mask, (jint*)mask, 0);
	}
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gdk_GdkDevice_gdk_1device_1get_1vendor_1id
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GdkDevice* self;

	// convert parameter self
	self = (GdkDevice*) _self;

	// call function
	result = gdk_device_get_vendor_id(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkDevice_gdk_1device_1get_1window_1at_1position
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
	GdkDevice* self;
	gint* winX;
	gint* winY;

	// convert parameter self
	self = (GdkDevice*) _self;

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
	result = gdk_device_get_window_at_position(self, winX, winY);

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

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkDevice_gdk_1device_1get_1window_1at_1position_1double
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdoubleArray _winX,
	jdoubleArray _winY
)
{
	GdkWindow* result;
	jlong _result;
	GdkDevice* self;
	gdouble* winX;
	gdouble* winY;

	// convert parameter self
	self = (GdkDevice*) _self;

	// convert parameter winX
	if (_winX == NULL) {
		winX = NULL;
	} else {
		winX = (gdouble*) (*env)->GetDoubleArrayElements(env, _winX, NULL);
		if (winX == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// convert parameter winY
	if (_winY == NULL) {
		winY = NULL;
	} else {
		winY = (gdouble*) (*env)->GetDoubleArrayElements(env, _winY, NULL);
		if (winY == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// call function
	result = gdk_device_get_window_at_position_double(self, winX, winY);

	// cleanup parameter self

	// cleanup parameter winX
	if (winX != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _winX, (jdouble*)winX, 0);
	}

	// cleanup parameter winY
	if (winY != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _winY, (jdouble*)winY, 0);
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

JNIEXPORT jlongArray JNICALL
Java_org_gnome_gdk_GdkDevice_gdk_1device_1list_1slave_1devices
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GList* result;
	jlongArray _result;
	GdkDevice* self;

	// convert parameter self
	self = (GdkDevice*) _self;

	// call function
	result = gdk_device_list_slave_devices(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlongArray) bindings_java_convert_glist_to_jarray(env, result);

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkDevice_gdk_1device_1set_1axis_1use
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _index,
	jint _use
)
{
	GdkDevice* self;
	guint index;
	GdkAxisUse use;

	// convert parameter self
	self = (GdkDevice*) _self;

	// convert parameter index
	index = (guint) _index;

	// convert parameter use
	use = (GdkAxisUse) _use;

	// call function
	gdk_device_set_axis_use(self, index, use);

	// cleanup parameter self

	// cleanup parameter index

	// cleanup parameter use
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkDevice_gdk_1device_1set_1key
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _index,
	jint _keyval,
	jint _modifiers
)
{
	GdkDevice* self;
	guint index;
	guint keyval;
	GdkModifierType modifiers;

	// convert parameter self
	self = (GdkDevice*) _self;

	// convert parameter index
	index = (guint) _index;

	// convert parameter keyval
	keyval = (guint) _keyval;

	// convert parameter modifiers
	modifiers = (GdkModifierType) _modifiers;

	// call function
	gdk_device_set_key(self, index, keyval, modifiers);

	// cleanup parameter self

	// cleanup parameter index

	// cleanup parameter keyval

	// cleanup parameter modifiers
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkDevice_gdk_1device_1set_1mode
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _mode
)
{
	gboolean result;
	jboolean _result;
	GdkDevice* self;
	GdkInputMode mode;

	// convert parameter self
	self = (GdkDevice*) _self;

	// convert parameter mode
	mode = (GdkInputMode) _mode;

	// call function
	result = gdk_device_set_mode(self, mode);

	// cleanup parameter self

	// cleanup parameter mode

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkDevice_gdk_1device_1ungrab
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _time
)
{
	GdkDevice* self;
	guint32 time;

	// convert parameter self
	self = (GdkDevice*) _self;

	// convert parameter time
	time = (guint32) _time;

	// call function
	gdk_device_ungrab(self, time);

	// cleanup parameter self

	// cleanup parameter time
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkDevice_gdk_1device_1warp
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _screen,
	jint _x,
	jint _y
)
{
	GdkDevice* self;
	GdkScreen* screen;
	gint x;
	gint y;

	// convert parameter self
	self = (GdkDevice*) _self;

	// convert parameter screen
	screen = (GdkScreen*) _screen;

	// convert parameter x
	x = (gint) _x;

	// convert parameter y
	y = (gint) _y;

	// call function
	gdk_device_warp(self, screen, x, y);

	// cleanup parameter self

	// cleanup parameter screen

	// cleanup parameter x

	// cleanup parameter y
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkDevice_gdk_1device_1grab_1info_1libgtk_1only
(
	JNIEnv* env,
	jclass cls,
	jlong _display,
	jlong _device,
	jlongArray _grabWindow,
	jbooleanArray _ownerEvents
)
{
	gboolean result;
	jboolean _result;
	GdkDisplay* display;
	GdkDevice* device;
	GdkWindow** grabWindow;
	gboolean* ownerEvents;

	// convert parameter display
	display = (GdkDisplay*) _display;

	// convert parameter device
	device = (GdkDevice*) _device;

	// convert parameter grabWindow
	if (_grabWindow == NULL) {
		grabWindow = NULL;
	} else {
		grabWindow = (GdkWindow**) bindings_java_convert_jarray_to_gpointer(env, _grabWindow);
		if (grabWindow == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter ownerEvents
	if (_ownerEvents == NULL) {
		ownerEvents = NULL;
	} else {
		ownerEvents = (gboolean*) (*env)->GetBooleanArrayElements(env, _ownerEvents, NULL);
		if (ownerEvents == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gdk_device_grab_info_libgtk_only(display, device, grabWindow, ownerEvents);

	// cleanup parameter display

	// cleanup parameter device

	// cleanup parameter grabWindow
	if (grabWindow != NULL) {
		bindings_java_convert_gpointer_to_jarray(env, (gpointer*)grabWindow, _grabWindow);
	}

	// cleanup parameter ownerEvents
	if (ownerEvents != NULL) {
		(*env)->ReleaseBooleanArrayElements(env, _ownerEvents, (jboolean*)ownerEvents, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}
