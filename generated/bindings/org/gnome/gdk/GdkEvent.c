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
#include "org_gnome_gdk_GdkEvent.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkEvent_gdk_1event_1new
(
	JNIEnv* env,
	jclass cls,
	jint _type
)
{
	GdkEvent* result;
	jlong _result;
	GdkEventType type;

	// convert parameter type
	type = (GdkEventType) _type;

	// call function
	result = gdk_event_new(type);

	// cleanup parameter type

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkEvent_gdk_1event_1copy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkEvent* result;
	jlong _result;
	GdkEvent* self;

	// convert parameter self
	self = (GdkEvent*) _self;

	// call function
	result = gdk_event_copy(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkEvent_gdk_1event_1free
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkEvent* self;

	// convert parameter self
	self = (GdkEvent*) _self;

	// call function
	gdk_event_free(self);

	// cleanup parameter self
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkEvent_gdk_1event_1get_1axis
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _axisUse,
	jdoubleArray _value
)
{
	gboolean result;
	jboolean _result;
	GdkEvent* self;
	GdkAxisUse axisUse;
	gdouble* value;

	// convert parameter self
	self = (GdkEvent*) _self;

	// convert parameter axisUse
	axisUse = (GdkAxisUse) _axisUse;

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
	result = gdk_event_get_axis(self, axisUse, value);

	// cleanup parameter self

	// cleanup parameter axisUse

	// cleanup parameter value
	if (value != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _value, (jdouble*)value, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkEvent_gdk_1event_1get_1button
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _button
)
{
	gboolean result;
	jboolean _result;
	GdkEvent* self;
	guint* button;

	// convert parameter self
	self = (GdkEvent*) _self;

	// convert parameter button
	if (_button == NULL) {
		button = NULL;
	} else {
		button = (guint*) (*env)->GetIntArrayElements(env, _button, NULL);
		if (button == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gdk_event_get_button(self, button);

	// cleanup parameter self

	// cleanup parameter button
	if (button != NULL) {
		(*env)->ReleaseIntArrayElements(env, _button, (jint*)button, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkEvent_gdk_1event_1get_1click_1count
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _clickCount
)
{
	gboolean result;
	jboolean _result;
	GdkEvent* self;
	guint* clickCount;

	// convert parameter self
	self = (GdkEvent*) _self;

	// convert parameter clickCount
	if (_clickCount == NULL) {
		clickCount = NULL;
	} else {
		clickCount = (guint*) (*env)->GetIntArrayElements(env, _clickCount, NULL);
		if (clickCount == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gdk_event_get_click_count(self, clickCount);

	// cleanup parameter self

	// cleanup parameter clickCount
	if (clickCount != NULL) {
		(*env)->ReleaseIntArrayElements(env, _clickCount, (jint*)clickCount, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkEvent_gdk_1event_1get_1coords
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdoubleArray _xWin,
	jdoubleArray _yWin
)
{
	gboolean result;
	jboolean _result;
	GdkEvent* self;
	gdouble* xWin;
	gdouble* yWin;

	// convert parameter self
	self = (GdkEvent*) _self;

	// convert parameter xWin
	if (_xWin == NULL) {
		xWin = NULL;
	} else {
		xWin = (gdouble*) (*env)->GetDoubleArrayElements(env, _xWin, NULL);
		if (xWin == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter yWin
	if (_yWin == NULL) {
		yWin = NULL;
	} else {
		yWin = (gdouble*) (*env)->GetDoubleArrayElements(env, _yWin, NULL);
		if (yWin == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gdk_event_get_coords(self, xWin, yWin);

	// cleanup parameter self

	// cleanup parameter xWin
	if (xWin != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _xWin, (jdouble*)xWin, 0);
	}

	// cleanup parameter yWin
	if (yWin != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _yWin, (jdouble*)yWin, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkEvent_gdk_1event_1get_1device
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkDevice* result;
	jlong _result;
	GdkEvent* self;

	// convert parameter self
	self = (GdkEvent*) _self;

	// call function
	result = gdk_event_get_device(self);

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
Java_org_gnome_gdk_GdkEvent_gdk_1event_1get_1event_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkEventType result;
	jint _result;
	GdkEvent* self;

	// convert parameter self
	self = (GdkEvent*) _self;

	// call function
	result = gdk_event_get_event_type(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkEvent_gdk_1event_1get_1keyval
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _keyval
)
{
	gboolean result;
	jboolean _result;
	GdkEvent* self;
	guint* keyval;

	// convert parameter self
	self = (GdkEvent*) _self;

	// convert parameter keyval
	if (_keyval == NULL) {
		keyval = NULL;
	} else {
		keyval = (guint*) (*env)->GetIntArrayElements(env, _keyval, NULL);
		if (keyval == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gdk_event_get_keyval(self, keyval);

	// cleanup parameter self

	// cleanup parameter keyval
	if (keyval != NULL) {
		(*env)->ReleaseIntArrayElements(env, _keyval, (jint*)keyval, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkEvent_gdk_1event_1get_1pointer_1emulated
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkEvent* self;

	// convert parameter self
	self = (GdkEvent*) _self;

	// call function
	result = gdk_event_get_pointer_emulated(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkEvent_gdk_1event_1get_1root_1coords
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdoubleArray _xRoot,
	jdoubleArray _yRoot
)
{
	gboolean result;
	jboolean _result;
	GdkEvent* self;
	gdouble* xRoot;
	gdouble* yRoot;

	// convert parameter self
	self = (GdkEvent*) _self;

	// convert parameter xRoot
	if (_xRoot == NULL) {
		xRoot = NULL;
	} else {
		xRoot = (gdouble*) (*env)->GetDoubleArrayElements(env, _xRoot, NULL);
		if (xRoot == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter yRoot
	if (_yRoot == NULL) {
		yRoot = NULL;
	} else {
		yRoot = (gdouble*) (*env)->GetDoubleArrayElements(env, _yRoot, NULL);
		if (yRoot == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gdk_event_get_root_coords(self, xRoot, yRoot);

	// cleanup parameter self

	// cleanup parameter xRoot
	if (xRoot != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _xRoot, (jdouble*)xRoot, 0);
	}

	// cleanup parameter yRoot
	if (yRoot != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _yRoot, (jdouble*)yRoot, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEvent_gdk_1event_1get_1scancode
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	GdkEvent* self;

	// convert parameter self
	self = (GdkEvent*) _self;

	// call function
	result = gdk_event_get_scancode(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkEvent_gdk_1event_1get_1screen
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkScreen* result;
	jlong _result;
	GdkEvent* self;

	// convert parameter self
	self = (GdkEvent*) _self;

	// call function
	result = gdk_event_get_screen(self);

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
Java_org_gnome_gdk_GdkEvent_gdk_1event_1get_1scroll_1deltas
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdoubleArray _deltaX,
	jdoubleArray _deltaY
)
{
	gboolean result;
	jboolean _result;
	GdkEvent* self;
	gdouble* deltaX;
	gdouble* deltaY;

	// convert parameter self
	self = (GdkEvent*) _self;

	// convert parameter deltaX
	if (_deltaX == NULL) {
		deltaX = NULL;
	} else {
		deltaX = (gdouble*) (*env)->GetDoubleArrayElements(env, _deltaX, NULL);
		if (deltaX == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter deltaY
	if (_deltaY == NULL) {
		deltaY = NULL;
	} else {
		deltaY = (gdouble*) (*env)->GetDoubleArrayElements(env, _deltaY, NULL);
		if (deltaY == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gdk_event_get_scroll_deltas(self, deltaX, deltaY);

	// cleanup parameter self

	// cleanup parameter deltaX
	if (deltaX != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _deltaX, (jdouble*)deltaX, 0);
	}

	// cleanup parameter deltaY
	if (deltaY != NULL) {
		(*env)->ReleaseDoubleArrayElements(env, _deltaY, (jdouble*)deltaY, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkEvent_gdk_1event_1get_1scroll_1direction
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _direction
)
{
	gboolean result;
	jboolean _result;
	GdkEvent* self;
	GdkScrollDirection* direction;

	// convert parameter self
	self = (GdkEvent*) _self;

	// convert parameter direction
	if (_direction == NULL) {
		direction = NULL;
	} else {
		direction = (GdkScrollDirection*) (*env)->GetIntArrayElements(env, _direction, NULL);
		if (direction == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gdk_event_get_scroll_direction(self, direction);

	// cleanup parameter self

	// cleanup parameter direction
	if (direction != NULL) {
		(*env)->ReleaseIntArrayElements(env, _direction, (jint*)direction, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkEvent_gdk_1event_1get_1source_1device
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkDevice* result;
	jlong _result;
	GdkEvent* self;

	// convert parameter self
	self = (GdkEvent*) _self;

	// call function
	result = gdk_event_get_source_device(self);

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
Java_org_gnome_gdk_GdkEvent_gdk_1event_1get_1state
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _state
)
{
	gboolean result;
	jboolean _result;
	GdkEvent* self;
	GdkModifierType* state;

	// convert parameter self
	self = (GdkEvent*) _self;

	// convert parameter state
	if (_state == NULL) {
		state = NULL;
	} else {
		state = (GdkModifierType*) (*env)->GetIntArrayElements(env, _state, NULL);
		if (state == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gdk_event_get_state(self, state);

	// cleanup parameter self

	// cleanup parameter state
	if (state != NULL) {
		(*env)->ReleaseIntArrayElements(env, _state, (jint*)state, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEvent_gdk_1event_1get_1time
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint32 result;
	jint _result;
	GdkEvent* self;

	// convert parameter self
	self = (GdkEvent*) _self;

	// call function
	result = gdk_event_get_time(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkEvent_gdk_1event_1get_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* result;
	jlong _result;
	GdkEvent* self;

	// convert parameter self
	self = (GdkEvent*) _self;

	// call function
	result = gdk_event_get_window(self);

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
Java_org_gnome_gdk_GdkEvent_gdk_1event_1is_1scroll_1stop_1event
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkEvent* self;

	// convert parameter self
	self = (GdkEvent*) _self;

	// call function
	result = gdk_event_is_scroll_stop_event(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkEvent_gdk_1event_1put
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkEvent* self;

	// convert parameter self
	self = (GdkEvent*) _self;

	// call function
	gdk_event_put(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkEvent_gdk_1event_1set_1device
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _device
)
{
	GdkEvent* self;
	GdkDevice* device;

	// convert parameter self
	self = (GdkEvent*) _self;

	// convert parameter device
	device = (GdkDevice*) _device;

	// call function
	gdk_event_set_device(self, device);

	// cleanup parameter self

	// cleanup parameter device
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkEvent_gdk_1event_1set_1screen
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _screen
)
{
	GdkEvent* self;
	GdkScreen* screen;

	// convert parameter self
	self = (GdkEvent*) _self;

	// convert parameter screen
	screen = (GdkScreen*) _screen;

	// call function
	gdk_event_set_screen(self, screen);

	// cleanup parameter self

	// cleanup parameter screen
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkEvent_gdk_1event_1set_1source_1device
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _device
)
{
	GdkEvent* self;
	GdkDevice* device;

	// convert parameter self
	self = (GdkEvent*) _self;

	// convert parameter device
	device = (GdkDevice*) _device;

	// call function
	gdk_event_set_source_device(self, device);

	// cleanup parameter self

	// cleanup parameter device
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkEvent_gdk_1event_1triggers_1context_1menu
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkEvent* self;

	// convert parameter self
	self = (GdkEvent*) _self;

	// call function
	result = gdk_event_triggers_context_menu(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}
