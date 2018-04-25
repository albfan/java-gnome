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
#include "org_gnome_gdk_GdkEventButton.h"

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventButton_gdk_1event_1button_1get_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkEventType result;
	jint _result;
	GdkEventButton* self;

	// convert parameter self
	self = (GdkEventButton*) _self;

	// get field value
	result = self->type;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkEventButton_gdk_1event_1button_1set_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _type
)
{
	GdkEventButton* self;
	GdkEventType type;

	// convert parameter self
	self = (GdkEventButton*) _self;

	// convert parameter type
	type = (GdkEventType) _type;

	// set field value
	self->type = type;

	// cleanup parameter self

	// cleanup parameter type
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkEventButton_gdk_1event_1button_1get_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* result;
	jlong _result;
	GdkEventButton* self;

	// convert parameter self
	self = (GdkEventButton*) _self;

	// get field value
	result = self->window;

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
Java_org_gnome_gdk_GdkEventButton_gdk_1event_1button_1set_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _window
)
{
	GdkEventButton* self;
	GdkWindow* window;

	// convert parameter self
	self = (GdkEventButton*) _self;

	// convert parameter window
	window = (GdkWindow*) _window;

	// set field value
	self->window = window;

	// cleanup parameter self

	// cleanup parameter window
}

JNIEXPORT jbyte JNICALL
Java_org_gnome_gdk_GdkEventButton_gdk_1event_1button_1get_1send_1event
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint8 result;
	jbyte _result;
	GdkEventButton* self;

	// convert parameter self
	self = (GdkEventButton*) _self;

	// get field value
	result = self->send_event;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jbyte) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkEventButton_gdk_1event_1button_1set_1send_1event
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jbyte _sendEvent
)
{
	GdkEventButton* self;
	gint8 sendEvent;

	// convert parameter self
	self = (GdkEventButton*) _self;

	// convert parameter sendEvent
	sendEvent = (gint8) _sendEvent;

	// set field value
	self->send_event = sendEvent;

	// cleanup parameter self

	// cleanup parameter sendEvent
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventButton_gdk_1event_1button_1get_1time
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint32 result;
	jint _result;
	GdkEventButton* self;

	// convert parameter self
	self = (GdkEventButton*) _self;

	// get field value
	result = self->time;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkEventButton_gdk_1event_1button_1set_1time
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _time
)
{
	GdkEventButton* self;
	guint32 time;

	// convert parameter self
	self = (GdkEventButton*) _self;

	// convert parameter time
	time = (guint32) _time;

	// set field value
	self->time = time;

	// cleanup parameter self

	// cleanup parameter time
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gdk_GdkEventButton_gdk_1event_1button_1get_1x
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GdkEventButton* self;

	// convert parameter self
	self = (GdkEventButton*) _self;

	// get field value
	result = self->x;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkEventButton_gdk_1event_1button_1set_1x
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _x
)
{
	GdkEventButton* self;
	gdouble x;

	// convert parameter self
	self = (GdkEventButton*) _self;

	// convert parameter x
	x = (gdouble) _x;

	// set field value
	self->x = x;

	// cleanup parameter self

	// cleanup parameter x
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gdk_GdkEventButton_gdk_1event_1button_1get_1y
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GdkEventButton* self;

	// convert parameter self
	self = (GdkEventButton*) _self;

	// get field value
	result = self->y;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkEventButton_gdk_1event_1button_1set_1y
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _y
)
{
	GdkEventButton* self;
	gdouble y;

	// convert parameter self
	self = (GdkEventButton*) _self;

	// convert parameter y
	y = (gdouble) _y;

	// set field value
	self->y = y;

	// cleanup parameter self

	// cleanup parameter y
}

JNIEXPORT jdoubleArray JNICALL
Java_org_gnome_gdk_GdkEventButton_gdk_1event_1button_1get_1axes
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble* result;
	jdoubleArray _result;
	GdkEventButton* self;

	// convert parameter self
	self = (GdkEventButton*) _self;

	// get field value
	result = self->axes;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdoubleArray) NULL;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkEventButton_gdk_1event_1button_1set_1axes
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdoubleArray _axes
)
{
	GdkEventButton* self;
	gdouble* axes;

	// convert parameter self
	self = (GdkEventButton*) _self;

	// convert parameter axes
	axes = (gdouble*) (*env)->GetDoubleArrayElements(env, _axes, NULL);
	if (axes == NULL) {
		return; // Java Exception already thrown
	}

	// set field value
	self->axes = axes;

	// cleanup parameter self

	// cleanup parameter axes
	(*env)->ReleaseDoubleArrayElements(env, _axes, (jdouble*)axes, 0);
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventButton_gdk_1event_1button_1get_1state
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkModifierType result;
	jint _result;
	GdkEventButton* self;

	// convert parameter self
	self = (GdkEventButton*) _self;

	// get field value
	result = self->state;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkEventButton_gdk_1event_1button_1set_1state
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _state
)
{
	GdkEventButton* self;
	GdkModifierType state;

	// convert parameter self
	self = (GdkEventButton*) _self;

	// convert parameter state
	state = (GdkModifierType) _state;

	// set field value
	self->state = state;

	// cleanup parameter self

	// cleanup parameter state
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventButton_gdk_1event_1button_1get_1button
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GdkEventButton* self;

	// convert parameter self
	self = (GdkEventButton*) _self;

	// get field value
	result = self->button;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkEventButton_gdk_1event_1button_1set_1button
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _button
)
{
	GdkEventButton* self;
	guint button;

	// convert parameter self
	self = (GdkEventButton*) _self;

	// convert parameter button
	button = (guint) _button;

	// set field value
	self->button = button;

	// cleanup parameter self

	// cleanup parameter button
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkEventButton_gdk_1event_1button_1get_1device
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkDevice* result;
	jlong _result;
	GdkEventButton* self;

	// convert parameter self
	self = (GdkEventButton*) _self;

	// get field value
	result = self->device;

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
Java_org_gnome_gdk_GdkEventButton_gdk_1event_1button_1set_1device
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _device
)
{
	GdkEventButton* self;
	GdkDevice* device;

	// convert parameter self
	self = (GdkEventButton*) _self;

	// convert parameter device
	device = (GdkDevice*) _device;

	// set field value
	self->device = device;

	// cleanup parameter self

	// cleanup parameter device
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gdk_GdkEventButton_gdk_1event_1button_1get_1x_1root
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GdkEventButton* self;

	// convert parameter self
	self = (GdkEventButton*) _self;

	// get field value
	result = self->x_root;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkEventButton_gdk_1event_1button_1set_1x_1root
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _xRoot
)
{
	GdkEventButton* self;
	gdouble xRoot;

	// convert parameter self
	self = (GdkEventButton*) _self;

	// convert parameter xRoot
	xRoot = (gdouble) _xRoot;

	// set field value
	self->x_root = xRoot;

	// cleanup parameter self

	// cleanup parameter xRoot
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gdk_GdkEventButton_gdk_1event_1button_1get_1y_1root
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GdkEventButton* self;

	// convert parameter self
	self = (GdkEventButton*) _self;

	// get field value
	result = self->y_root;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkEventButton_gdk_1event_1button_1set_1y_1root
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _yRoot
)
{
	GdkEventButton* self;
	gdouble yRoot;

	// convert parameter self
	self = (GdkEventButton*) _self;

	// convert parameter yRoot
	yRoot = (gdouble) _yRoot;

	// set field value
	self->y_root = yRoot;

	// cleanup parameter self

	// cleanup parameter yRoot
}
