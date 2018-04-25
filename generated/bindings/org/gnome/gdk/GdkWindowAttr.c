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
#include "org_gnome_gdk_GdkWindowAttr.h"

JNIEXPORT jstring JNICALL
Java_org_gnome_gdk_GdkWindowAttr_gdk_1window_1attr_1get_1title
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GdkWindowAttr* self;

	// convert parameter self
	self = (GdkWindowAttr*) _self;

	// get field value
	result = self->title;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindowAttr_gdk_1window_1attr_1set_1title
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _title
)
{
	GdkWindowAttr* self;
	gchar* title;

	// convert parameter self
	self = (GdkWindowAttr*) _self;

	// convert parameter title
	title = (gchar*) bindings_java_getString(env, _title);
	if (title == NULL) {
		return; // Java Exception already thrown
	}

	// set field value
	self->title = title;

	// cleanup parameter self

	// cleanup parameter title
	bindings_java_releaseString(title);
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkWindowAttr_gdk_1window_1attr_1get_1event_1mask
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GdkWindowAttr* self;

	// convert parameter self
	self = (GdkWindowAttr*) _self;

	// get field value
	result = self->event_mask;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindowAttr_gdk_1window_1attr_1set_1event_1mask
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _eventMask
)
{
	GdkWindowAttr* self;
	gint eventMask;

	// convert parameter self
	self = (GdkWindowAttr*) _self;

	// convert parameter eventMask
	eventMask = (gint) _eventMask;

	// set field value
	self->event_mask = eventMask;

	// cleanup parameter self

	// cleanup parameter eventMask
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkWindowAttr_gdk_1window_1attr_1get_1x
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GdkWindowAttr* self;

	// convert parameter self
	self = (GdkWindowAttr*) _self;

	// get field value
	result = self->x;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindowAttr_gdk_1window_1attr_1set_1x
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _x
)
{
	GdkWindowAttr* self;
	gint x;

	// convert parameter self
	self = (GdkWindowAttr*) _self;

	// convert parameter x
	x = (gint) _x;

	// set field value
	self->x = x;

	// cleanup parameter self

	// cleanup parameter x
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkWindowAttr_gdk_1window_1attr_1get_1y
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GdkWindowAttr* self;

	// convert parameter self
	self = (GdkWindowAttr*) _self;

	// get field value
	result = self->y;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindowAttr_gdk_1window_1attr_1set_1y
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _y
)
{
	GdkWindowAttr* self;
	gint y;

	// convert parameter self
	self = (GdkWindowAttr*) _self;

	// convert parameter y
	y = (gint) _y;

	// set field value
	self->y = y;

	// cleanup parameter self

	// cleanup parameter y
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkWindowAttr_gdk_1window_1attr_1get_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GdkWindowAttr* self;

	// convert parameter self
	self = (GdkWindowAttr*) _self;

	// get field value
	result = self->width;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindowAttr_gdk_1window_1attr_1set_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _width
)
{
	GdkWindowAttr* self;
	gint width;

	// convert parameter self
	self = (GdkWindowAttr*) _self;

	// convert parameter width
	width = (gint) _width;

	// set field value
	self->width = width;

	// cleanup parameter self

	// cleanup parameter width
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkWindowAttr_gdk_1window_1attr_1get_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GdkWindowAttr* self;

	// convert parameter self
	self = (GdkWindowAttr*) _self;

	// get field value
	result = self->height;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindowAttr_gdk_1window_1attr_1set_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _height
)
{
	GdkWindowAttr* self;
	gint height;

	// convert parameter self
	self = (GdkWindowAttr*) _self;

	// convert parameter height
	height = (gint) _height;

	// set field value
	self->height = height;

	// cleanup parameter self

	// cleanup parameter height
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkWindowAttr_gdk_1window_1attr_1get_1visual
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkVisual* result;
	jlong _result;
	GdkWindowAttr* self;

	// convert parameter self
	self = (GdkWindowAttr*) _self;

	// get field value
	result = self->visual;

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
Java_org_gnome_gdk_GdkWindowAttr_gdk_1window_1attr_1set_1visual
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _visual
)
{
	GdkWindowAttr* self;
	GdkVisual* visual;

	// convert parameter self
	self = (GdkWindowAttr*) _self;

	// convert parameter visual
	visual = (GdkVisual*) _visual;

	// set field value
	self->visual = visual;

	// cleanup parameter self

	// cleanup parameter visual
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkWindowAttr_gdk_1window_1attr_1get_1window_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindowType result;
	jint _result;
	GdkWindowAttr* self;

	// convert parameter self
	self = (GdkWindowAttr*) _self;

	// get field value
	result = self->window_type;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindowAttr_gdk_1window_1attr_1set_1window_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _windowType
)
{
	GdkWindowAttr* self;
	GdkWindowType windowType;

	// convert parameter self
	self = (GdkWindowAttr*) _self;

	// convert parameter windowType
	windowType = (GdkWindowType) _windowType;

	// set field value
	self->window_type = windowType;

	// cleanup parameter self

	// cleanup parameter windowType
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkWindowAttr_gdk_1window_1attr_1get_1cursor
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkCursor* result;
	jlong _result;
	GdkWindowAttr* self;

	// convert parameter self
	self = (GdkWindowAttr*) _self;

	// get field value
	result = self->cursor;

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
Java_org_gnome_gdk_GdkWindowAttr_gdk_1window_1attr_1set_1cursor
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _cursor
)
{
	GdkWindowAttr* self;
	GdkCursor* cursor;

	// convert parameter self
	self = (GdkWindowAttr*) _self;

	// convert parameter cursor
	cursor = (GdkCursor*) _cursor;

	// set field value
	self->cursor = cursor;

	// cleanup parameter self

	// cleanup parameter cursor
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gdk_GdkWindowAttr_gdk_1window_1attr_1get_1wmclass_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GdkWindowAttr* self;

	// convert parameter self
	self = (GdkWindowAttr*) _self;

	// get field value
	result = self->wmclass_name;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindowAttr_gdk_1window_1attr_1set_1wmclass_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _wmclassName
)
{
	GdkWindowAttr* self;
	gchar* wmclassName;

	// convert parameter self
	self = (GdkWindowAttr*) _self;

	// convert parameter wmclassName
	wmclassName = (gchar*) bindings_java_getString(env, _wmclassName);
	if (wmclassName == NULL) {
		return; // Java Exception already thrown
	}

	// set field value
	self->wmclass_name = wmclassName;

	// cleanup parameter self

	// cleanup parameter wmclassName
	bindings_java_releaseString(wmclassName);
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gdk_GdkWindowAttr_gdk_1window_1attr_1get_1wmclass_1class
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GdkWindowAttr* self;

	// convert parameter self
	self = (GdkWindowAttr*) _self;

	// get field value
	result = self->wmclass_class;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindowAttr_gdk_1window_1attr_1set_1wmclass_1class
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _wmclassClass
)
{
	GdkWindowAttr* self;
	gchar* wmclassClass;

	// convert parameter self
	self = (GdkWindowAttr*) _self;

	// convert parameter wmclassClass
	wmclassClass = (gchar*) bindings_java_getString(env, _wmclassClass);
	if (wmclassClass == NULL) {
		return; // Java Exception already thrown
	}

	// set field value
	self->wmclass_class = wmclassClass;

	// cleanup parameter self

	// cleanup parameter wmclassClass
	bindings_java_releaseString(wmclassClass);
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkWindowAttr_gdk_1window_1attr_1get_1override_1redirect
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GdkWindowAttr* self;

	// convert parameter self
	self = (GdkWindowAttr*) _self;

	// get field value
	result = self->override_redirect;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindowAttr_gdk_1window_1attr_1set_1override_1redirect
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _overrideRedirect
)
{
	GdkWindowAttr* self;
	gboolean overrideRedirect;

	// convert parameter self
	self = (GdkWindowAttr*) _self;

	// convert parameter overrideRedirect
	overrideRedirect = (gboolean) _overrideRedirect;

	// set field value
	self->override_redirect = overrideRedirect;

	// cleanup parameter self

	// cleanup parameter overrideRedirect
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkWindowAttr_gdk_1window_1attr_1get_1type_1hint
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindowTypeHint result;
	jint _result;
	GdkWindowAttr* self;

	// convert parameter self
	self = (GdkWindowAttr*) _self;

	// get field value
	result = self->type_hint;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkWindowAttr_gdk_1window_1attr_1set_1type_1hint
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _typeHint
)
{
	GdkWindowAttr* self;
	GdkWindowTypeHint typeHint;

	// convert parameter self
	self = (GdkWindowAttr*) _self;

	// convert parameter typeHint
	typeHint = (GdkWindowTypeHint) _typeHint;

	// set field value
	self->type_hint = typeHint;

	// cleanup parameter self

	// cleanup parameter typeHint
}
