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
#include "org_gnome_gdk_GdkRGBA.h"

JNIEXPORT jdouble JNICALL
Java_org_gnome_gdk_GdkRGBA_gdk_1r_1g_1b_1a_1get_1red
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GdkRGBA* self;

	// convert parameter self
	self = (GdkRGBA*) _self;

	// get field value
	result = self->red;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkRGBA_gdk_1r_1g_1b_1a_1set_1red
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _red
)
{
	GdkRGBA* self;
	gdouble red;

	// convert parameter self
	self = (GdkRGBA*) _self;

	// convert parameter red
	red = (gdouble) _red;

	// set field value
	self->red = red;

	// cleanup parameter self

	// cleanup parameter red
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gdk_GdkRGBA_gdk_1r_1g_1b_1a_1get_1green
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GdkRGBA* self;

	// convert parameter self
	self = (GdkRGBA*) _self;

	// get field value
	result = self->green;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkRGBA_gdk_1r_1g_1b_1a_1set_1green
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _green
)
{
	GdkRGBA* self;
	gdouble green;

	// convert parameter self
	self = (GdkRGBA*) _self;

	// convert parameter green
	green = (gdouble) _green;

	// set field value
	self->green = green;

	// cleanup parameter self

	// cleanup parameter green
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gdk_GdkRGBA_gdk_1r_1g_1b_1a_1get_1blue
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GdkRGBA* self;

	// convert parameter self
	self = (GdkRGBA*) _self;

	// get field value
	result = self->blue;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkRGBA_gdk_1r_1g_1b_1a_1set_1blue
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _blue
)
{
	GdkRGBA* self;
	gdouble blue;

	// convert parameter self
	self = (GdkRGBA*) _self;

	// convert parameter blue
	blue = (gdouble) _blue;

	// set field value
	self->blue = blue;

	// cleanup parameter self

	// cleanup parameter blue
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gdk_GdkRGBA_gdk_1r_1g_1b_1a_1get_1alpha
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GdkRGBA* self;

	// convert parameter self
	self = (GdkRGBA*) _self;

	// get field value
	result = self->alpha;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkRGBA_gdk_1r_1g_1b_1a_1set_1alpha
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _alpha
)
{
	GdkRGBA* self;
	gdouble alpha;

	// convert parameter self
	self = (GdkRGBA*) _self;

	// convert parameter alpha
	alpha = (gdouble) _alpha;

	// set field value
	self->alpha = alpha;

	// cleanup parameter self

	// cleanup parameter alpha
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkRGBA_gdk_1rgba_1copy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkRGBA* result;
	jlong _result;
	GdkRGBA* self;

	// convert parameter self
	self = (GdkRGBA*) _self;

	// call function
	result = gdk_rgba_copy(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkRGBA_gdk_1rgba_1equal
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _p2
)
{
	gboolean result;
	jboolean _result;
	GdkRGBA* self;
	GdkRGBA* p2;

	// convert parameter self
	self = (GdkRGBA*) _self;

	// convert parameter p2
	p2 = (GdkRGBA*) _p2;

	// call function
	result = gdk_rgba_equal(self, p2);

	// cleanup parameter self

	// cleanup parameter p2

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkRGBA_gdk_1rgba_1free
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkRGBA* self;

	// convert parameter self
	self = (GdkRGBA*) _self;

	// call function
	gdk_rgba_free(self);

	// cleanup parameter self
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkRGBA_gdk_1rgba_1hash
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GdkRGBA* self;

	// convert parameter self
	self = (GdkRGBA*) _self;

	// call function
	result = gdk_rgba_hash(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkRGBA_gdk_1rgba_1parse
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _spec
)
{
	gboolean result;
	jboolean _result;
	GdkRGBA* self;
	const gchar* spec;

	// convert parameter self
	self = (GdkRGBA*) _self;

	// convert parameter spec
	spec = (const gchar*) bindings_java_getString(env, _spec);
	if (spec == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gdk_rgba_parse(self, spec);

	// cleanup parameter self

	// cleanup parameter spec
	bindings_java_releaseString(spec);

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gdk_GdkRGBA_gdk_1rgba_1to_1string
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GdkRGBA* self;

	// convert parameter self
	self = (GdkRGBA*) _self;

	// call function
	result = gdk_rgba_to_string(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// cleanup return value
	if (result != NULL) {
		g_free(result);
	}

	// and finally
	return _result;
}
