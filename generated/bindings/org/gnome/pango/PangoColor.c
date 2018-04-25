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
#include <pango/pango.h>
#include "bindings_java.h"
#include "org_gnome_pango_PangoColor.h"

JNIEXPORT jchar JNICALL
Java_org_gnome_pango_PangoColor_pango_1color_1get_1red
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint16 result;
	jchar _result;
	PangoColor* self;

	// convert parameter self
	self = (PangoColor*) _self;

	// get field value
	result = self->red;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jchar) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoColor_pango_1color_1set_1red
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jchar _red
)
{
	PangoColor* self;
	guint16 red;

	// convert parameter self
	self = (PangoColor*) _self;

	// convert parameter red
	red = (guint16) _red;

	// set field value
	self->red = red;

	// cleanup parameter self

	// cleanup parameter red
}

JNIEXPORT jchar JNICALL
Java_org_gnome_pango_PangoColor_pango_1color_1get_1green
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint16 result;
	jchar _result;
	PangoColor* self;

	// convert parameter self
	self = (PangoColor*) _self;

	// get field value
	result = self->green;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jchar) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoColor_pango_1color_1set_1green
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jchar _green
)
{
	PangoColor* self;
	guint16 green;

	// convert parameter self
	self = (PangoColor*) _self;

	// convert parameter green
	green = (guint16) _green;

	// set field value
	self->green = green;

	// cleanup parameter self

	// cleanup parameter green
}

JNIEXPORT jchar JNICALL
Java_org_gnome_pango_PangoColor_pango_1color_1get_1blue
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint16 result;
	jchar _result;
	PangoColor* self;

	// convert parameter self
	self = (PangoColor*) _self;

	// get field value
	result = self->blue;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jchar) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoColor_pango_1color_1set_1blue
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jchar _blue
)
{
	PangoColor* self;
	guint16 blue;

	// convert parameter self
	self = (PangoColor*) _self;

	// convert parameter blue
	blue = (guint16) _blue;

	// set field value
	self->blue = blue;

	// cleanup parameter self

	// cleanup parameter blue
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoColor_pango_1color_1copy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoColor* result;
	jlong _result;
	PangoColor* self;

	// convert parameter self
	self = (PangoColor*) _self;

	// call function
	result = pango_color_copy(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoColor_pango_1color_1free
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoColor* self;

	// convert parameter self
	self = (PangoColor*) _self;

	// call function
	pango_color_free(self);

	// cleanup parameter self
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_pango_PangoColor_pango_1color_1parse
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _spec
)
{
	gboolean result;
	jboolean _result;
	PangoColor* self;
	const char* spec;

	// convert parameter self
	self = (PangoColor*) _self;

	// convert parameter spec
	spec = (const char*) bindings_java_getString(env, _spec);
	if (spec == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = pango_color_parse(self, spec);

	// cleanup parameter self

	// cleanup parameter spec
	bindings_java_releaseString(spec);

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_pango_PangoColor_pango_1color_1to_1string
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	PangoColor* self;

	// convert parameter self
	self = (PangoColor*) _self;

	// call function
	result = pango_color_to_string(self);

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
