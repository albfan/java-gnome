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
#include "org_gnome_gdk_GdkEventKey.h"

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventKey_gdk_1event_1key_1get_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkEventType result;
	jint _result;
	GdkEventKey* self;

	// convert parameter self
	self = (GdkEventKey*) _self;

	// get field value
	result = self->type;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkEventKey_gdk_1event_1key_1set_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _type
)
{
	GdkEventKey* self;
	GdkEventType type;

	// convert parameter self
	self = (GdkEventKey*) _self;

	// convert parameter type
	type = (GdkEventType) _type;

	// set field value
	self->type = type;

	// cleanup parameter self

	// cleanup parameter type
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkEventKey_gdk_1event_1key_1get_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* result;
	jlong _result;
	GdkEventKey* self;

	// convert parameter self
	self = (GdkEventKey*) _self;

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
Java_org_gnome_gdk_GdkEventKey_gdk_1event_1key_1set_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _window
)
{
	GdkEventKey* self;
	GdkWindow* window;

	// convert parameter self
	self = (GdkEventKey*) _self;

	// convert parameter window
	window = (GdkWindow*) _window;

	// set field value
	self->window = window;

	// cleanup parameter self

	// cleanup parameter window
}

JNIEXPORT jbyte JNICALL
Java_org_gnome_gdk_GdkEventKey_gdk_1event_1key_1get_1send_1event
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint8 result;
	jbyte _result;
	GdkEventKey* self;

	// convert parameter self
	self = (GdkEventKey*) _self;

	// get field value
	result = self->send_event;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jbyte) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkEventKey_gdk_1event_1key_1set_1send_1event
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jbyte _sendEvent
)
{
	GdkEventKey* self;
	gint8 sendEvent;

	// convert parameter self
	self = (GdkEventKey*) _self;

	// convert parameter sendEvent
	sendEvent = (gint8) _sendEvent;

	// set field value
	self->send_event = sendEvent;

	// cleanup parameter self

	// cleanup parameter sendEvent
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventKey_gdk_1event_1key_1get_1time
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint32 result;
	jint _result;
	GdkEventKey* self;

	// convert parameter self
	self = (GdkEventKey*) _self;

	// get field value
	result = self->time;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkEventKey_gdk_1event_1key_1set_1time
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _time
)
{
	GdkEventKey* self;
	guint32 time;

	// convert parameter self
	self = (GdkEventKey*) _self;

	// convert parameter time
	time = (guint32) _time;

	// set field value
	self->time = time;

	// cleanup parameter self

	// cleanup parameter time
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventKey_gdk_1event_1key_1get_1state
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkModifierType result;
	jint _result;
	GdkEventKey* self;

	// convert parameter self
	self = (GdkEventKey*) _self;

	// get field value
	result = self->state;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkEventKey_gdk_1event_1key_1set_1state
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _state
)
{
	GdkEventKey* self;
	GdkModifierType state;

	// convert parameter self
	self = (GdkEventKey*) _self;

	// convert parameter state
	state = (GdkModifierType) _state;

	// set field value
	self->state = state;

	// cleanup parameter self

	// cleanup parameter state
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventKey_gdk_1event_1key_1get_1keyval
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GdkEventKey* self;

	// convert parameter self
	self = (GdkEventKey*) _self;

	// get field value
	result = self->keyval;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkEventKey_gdk_1event_1key_1set_1keyval
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _keyval
)
{
	GdkEventKey* self;
	guint keyval;

	// convert parameter self
	self = (GdkEventKey*) _self;

	// convert parameter keyval
	keyval = (guint) _keyval;

	// set field value
	self->keyval = keyval;

	// cleanup parameter self

	// cleanup parameter keyval
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventKey_gdk_1event_1key_1get_1length
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GdkEventKey* self;

	// convert parameter self
	self = (GdkEventKey*) _self;

	// get field value
	result = self->length;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkEventKey_gdk_1event_1key_1set_1length
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _length
)
{
	GdkEventKey* self;
	gint length;

	// convert parameter self
	self = (GdkEventKey*) _self;

	// convert parameter length
	length = (gint) _length;

	// set field value
	self->length = length;

	// cleanup parameter self

	// cleanup parameter length
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gdk_GdkEventKey_gdk_1event_1key_1get_1string
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GdkEventKey* self;

	// convert parameter self
	self = (GdkEventKey*) _self;

	// get field value
	result = self->string;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkEventKey_gdk_1event_1key_1set_1string
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _string
)
{
	GdkEventKey* self;
	gchar* string;

	// convert parameter self
	self = (GdkEventKey*) _self;

	// convert parameter string
	string = (gchar*) bindings_java_getString(env, _string);
	if (string == NULL) {
		return; // Java Exception already thrown
	}

	// set field value
	self->string = string;

	// cleanup parameter self

	// cleanup parameter string
	bindings_java_releaseString(string);
}

JNIEXPORT jchar JNICALL
Java_org_gnome_gdk_GdkEventKey_gdk_1event_1key_1get_1hardware_1keycode
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint16 result;
	jchar _result;
	GdkEventKey* self;

	// convert parameter self
	self = (GdkEventKey*) _self;

	// get field value
	result = self->hardware_keycode;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jchar) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkEventKey_gdk_1event_1key_1set_1hardware_1keycode
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jchar _hardwareKeycode
)
{
	GdkEventKey* self;
	guint16 hardwareKeycode;

	// convert parameter self
	self = (GdkEventKey*) _self;

	// convert parameter hardwareKeycode
	hardwareKeycode = (guint16) _hardwareKeycode;

	// set field value
	self->hardware_keycode = hardwareKeycode;

	// cleanup parameter self

	// cleanup parameter hardwareKeycode
}

JNIEXPORT jbyte JNICALL
Java_org_gnome_gdk_GdkEventKey_gdk_1event_1key_1get_1group
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint8 result;
	jbyte _result;
	GdkEventKey* self;

	// convert parameter self
	self = (GdkEventKey*) _self;

	// get field value
	result = self->group;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jbyte) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkEventKey_gdk_1event_1key_1set_1group
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jbyte _group
)
{
	GdkEventKey* self;
	guint8 group;

	// convert parameter self
	self = (GdkEventKey*) _self;

	// convert parameter group
	group = (guint8) _group;

	// set field value
	self->group = group;

	// cleanup parameter self

	// cleanup parameter group
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkEventKey_gdk_1event_1key_1get_1is_1modifier
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GdkEventKey* self;

	// convert parameter self
	self = (GdkEventKey*) _self;

	// get field value
	result = self->is_modifier;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkEventKey_gdk_1event_1key_1set_1is_1modifier
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _isModifier
)
{
	GdkEventKey* self;
	guint isModifier;

	// convert parameter self
	self = (GdkEventKey*) _self;

	// convert parameter isModifier
	isModifier = (guint) _isModifier;

	// set field value
	self->is_modifier = isModifier;

	// cleanup parameter self

	// cleanup parameter isModifier
}
