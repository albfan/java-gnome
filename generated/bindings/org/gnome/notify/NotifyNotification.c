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
#include <libnotify/notify.h>
#include <libnotify/notification.h>
#include "bindings_java.h"
#include "org_gnome_notify_NotifyNotification.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_notify_NotifyNotification_notify_1notification_1new
(
	JNIEnv* env,
	jclass cls,
	jstring _summary,
	jstring _body,
	jstring _icon
)
{
	NotifyNotification* result;
	jlong _result;
	const char* summary;
	const char* body;
	const char* icon;

	// convert parameter summary
	summary = (const char*) bindings_java_getString(env, _summary);
	if (summary == NULL) {
		return 0L; // Java Exception already thrown
	}

	// convert parameter body
	if (_body == NULL) {
		body = NULL;
	} else {
		body = (const char*) bindings_java_getString(env, _body);
		if (body == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// convert parameter icon
	if (_icon == NULL) {
		icon = NULL;
	} else {
		icon = (const char*) bindings_java_getString(env, _icon);
		if (icon == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// call function
	result = notify_notification_new(summary, body, icon);

	// cleanup parameter summary
	bindings_java_releaseString(summary);

	// cleanup parameter body
	if (body != NULL) {
		bindings_java_releaseString(body);
	}

	// cleanup parameter icon
	if (icon != NULL) {
		bindings_java_releaseString(icon);
	}

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_notify_NotifyNotification_notify_1notification_1clear_1actions
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	NotifyNotification* self;

	// convert parameter self
	self = (NotifyNotification*) _self;

	// call function
	notify_notification_clear_actions(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_notify_NotifyNotification_notify_1notification_1clear_1hints
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	NotifyNotification* self;

	// convert parameter self
	self = (NotifyNotification*) _self;

	// call function
	notify_notification_clear_hints(self);

	// cleanup parameter self
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_notify_NotifyNotification_notify_1notification_1close
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	NotifyNotification* self;
	GError* error = NULL;

	// convert parameter self
	self = (NotifyNotification*) _self;

	// call function
	result = notify_notification_close(self, &error);

	// cleanup parameter self

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

JNIEXPORT jint JNICALL
Java_org_gnome_notify_NotifyNotification_notify_1notification_1get_1closed_1reason
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	NotifyNotification* self;

	// convert parameter self
	self = (NotifyNotification*) _self;

	// call function
	result = notify_notification_get_closed_reason(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_notify_NotifyNotification_notify_1notification_1set_1app_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _appName
)
{
	NotifyNotification* self;
	const char* appName;

	// convert parameter self
	self = (NotifyNotification*) _self;

	// convert parameter appName
	appName = (const char*) bindings_java_getString(env, _appName);
	if (appName == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	notify_notification_set_app_name(self, appName);

	// cleanup parameter self

	// cleanup parameter appName
	bindings_java_releaseString(appName);
}

JNIEXPORT void JNICALL
Java_org_gnome_notify_NotifyNotification_notify_1notification_1set_1category
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _category
)
{
	NotifyNotification* self;
	const char* category;

	// convert parameter self
	self = (NotifyNotification*) _self;

	// convert parameter category
	category = (const char*) bindings_java_getString(env, _category);
	if (category == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	notify_notification_set_category(self, category);

	// cleanup parameter self

	// cleanup parameter category
	bindings_java_releaseString(category);
}

JNIEXPORT void JNICALL
Java_org_gnome_notify_NotifyNotification_notify_1notification_1set_1hint_1byte
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _key,
	jchar _value
)
{
	NotifyNotification* self;
	const char* key;
	guchar value;

	// convert parameter self
	self = (NotifyNotification*) _self;

	// convert parameter key
	key = (const char*) bindings_java_getString(env, _key);
	if (key == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter value
	value = (guchar) _value;

	// call function
	notify_notification_set_hint_byte(self, key, value);

	// cleanup parameter self

	// cleanup parameter key
	bindings_java_releaseString(key);

	// cleanup parameter value
}

JNIEXPORT void JNICALL
Java_org_gnome_notify_NotifyNotification_notify_1notification_1set_1hint_1double
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _key,
	jdouble _value
)
{
	NotifyNotification* self;
	const char* key;
	gdouble value;

	// convert parameter self
	self = (NotifyNotification*) _self;

	// convert parameter key
	key = (const char*) bindings_java_getString(env, _key);
	if (key == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter value
	value = (gdouble) _value;

	// call function
	notify_notification_set_hint_double(self, key, value);

	// cleanup parameter self

	// cleanup parameter key
	bindings_java_releaseString(key);

	// cleanup parameter value
}

JNIEXPORT void JNICALL
Java_org_gnome_notify_NotifyNotification_notify_1notification_1set_1hint_1int32
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _key,
	jint _value
)
{
	NotifyNotification* self;
	const char* key;
	gint value;

	// convert parameter self
	self = (NotifyNotification*) _self;

	// convert parameter key
	key = (const char*) bindings_java_getString(env, _key);
	if (key == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter value
	value = (gint) _value;

	// call function
	notify_notification_set_hint_int32(self, key, value);

	// cleanup parameter self

	// cleanup parameter key
	bindings_java_releaseString(key);

	// cleanup parameter value
}

JNIEXPORT void JNICALL
Java_org_gnome_notify_NotifyNotification_notify_1notification_1set_1hint_1string
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _key,
	jstring _value
)
{
	NotifyNotification* self;
	const char* key;
	const char* value;

	// convert parameter self
	self = (NotifyNotification*) _self;

	// convert parameter key
	key = (const char*) bindings_java_getString(env, _key);
	if (key == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter value
	value = (const char*) bindings_java_getString(env, _value);
	if (value == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	notify_notification_set_hint_string(self, key, value);

	// cleanup parameter self

	// cleanup parameter key
	bindings_java_releaseString(key);

	// cleanup parameter value
	bindings_java_releaseString(value);
}

JNIEXPORT void JNICALL
Java_org_gnome_notify_NotifyNotification_notify_1notification_1set_1hint_1uint32
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _key,
	jint _value
)
{
	NotifyNotification* self;
	const char* key;
	guint value;

	// convert parameter self
	self = (NotifyNotification*) _self;

	// convert parameter key
	key = (const char*) bindings_java_getString(env, _key);
	if (key == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter value
	value = (guint) _value;

	// call function
	notify_notification_set_hint_uint32(self, key, value);

	// cleanup parameter self

	// cleanup parameter key
	bindings_java_releaseString(key);

	// cleanup parameter value
}

JNIEXPORT void JNICALL
Java_org_gnome_notify_NotifyNotification_notify_1notification_1set_1icon_1from_1pixbuf
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _icon
)
{
	NotifyNotification* self;
	GdkPixbuf* icon;

	// convert parameter self
	self = (NotifyNotification*) _self;

	// convert parameter icon
	icon = (GdkPixbuf*) _icon;

	// call function
	notify_notification_set_icon_from_pixbuf(self, icon);

	// cleanup parameter self

	// cleanup parameter icon
}

JNIEXPORT void JNICALL
Java_org_gnome_notify_NotifyNotification_notify_1notification_1set_1image_1from_1pixbuf
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _pixbuf
)
{
	NotifyNotification* self;
	GdkPixbuf* pixbuf;

	// convert parameter self
	self = (NotifyNotification*) _self;

	// convert parameter pixbuf
	pixbuf = (GdkPixbuf*) _pixbuf;

	// call function
	notify_notification_set_image_from_pixbuf(self, pixbuf);

	// cleanup parameter self

	// cleanup parameter pixbuf
}

JNIEXPORT void JNICALL
Java_org_gnome_notify_NotifyNotification_notify_1notification_1set_1timeout
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _timeout
)
{
	NotifyNotification* self;
	gint timeout;

	// convert parameter self
	self = (NotifyNotification*) _self;

	// convert parameter timeout
	timeout = (gint) _timeout;

	// call function
	notify_notification_set_timeout(self, timeout);

	// cleanup parameter self

	// cleanup parameter timeout
}

JNIEXPORT void JNICALL
Java_org_gnome_notify_NotifyNotification_notify_1notification_1set_1urgency
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _urgency
)
{
	NotifyNotification* self;
	NotifyUrgency urgency;

	// convert parameter self
	self = (NotifyNotification*) _self;

	// convert parameter urgency
	urgency = (NotifyUrgency) _urgency;

	// call function
	notify_notification_set_urgency(self, urgency);

	// cleanup parameter self

	// cleanup parameter urgency
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_notify_NotifyNotification_notify_1notification_1show
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	NotifyNotification* self;
	GError* error = NULL;

	// convert parameter self
	self = (NotifyNotification*) _self;

	// call function
	result = notify_notification_show(self, &error);

	// cleanup parameter self

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

JNIEXPORT jboolean JNICALL
Java_org_gnome_notify_NotifyNotification_notify_1notification_1update
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _summary,
	jstring _body,
	jstring _icon
)
{
	gboolean result;
	jboolean _result;
	NotifyNotification* self;
	const char* summary;
	const char* body;
	const char* icon;

	// convert parameter self
	self = (NotifyNotification*) _self;

	// convert parameter summary
	summary = (const char*) bindings_java_getString(env, _summary);
	if (summary == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// convert parameter body
	if (_body == NULL) {
		body = NULL;
	} else {
		body = (const char*) bindings_java_getString(env, _body);
		if (body == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter icon
	if (_icon == NULL) {
		icon = NULL;
	} else {
		icon = (const char*) bindings_java_getString(env, _icon);
		if (icon == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = notify_notification_update(self, summary, body, icon);

	// cleanup parameter self

	// cleanup parameter summary
	bindings_java_releaseString(summary);

	// cleanup parameter body
	if (body != NULL) {
		bindings_java_releaseString(body);
	}

	// cleanup parameter icon
	if (icon != NULL) {
		bindings_java_releaseString(icon);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}
