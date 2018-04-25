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
#include <pango/pango-font.h>
#include <pango/pango-fontset.h>
#include "bindings_java.h"
#include "org_gnome_pango_PangoFontMetrics.h"

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoFontMetrics_pango_1font_1metrics_1get_1ref_1count
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	PangoFontMetrics* self;

	// convert parameter self
	self = (PangoFontMetrics*) _self;

	// get field value
	result = self->ref_count;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoFontMetrics_pango_1font_1metrics_1get_1ascent
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	PangoFontMetrics* self;

	// convert parameter self
	self = (PangoFontMetrics*) _self;

	// get field value
	result = self->ascent;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoFontMetrics_pango_1font_1metrics_1get_1descent
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	PangoFontMetrics* self;

	// convert parameter self
	self = (PangoFontMetrics*) _self;

	// get field value
	result = self->descent;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoFontMetrics_pango_1font_1metrics_1get_1approximate_1char_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	PangoFontMetrics* self;

	// convert parameter self
	self = (PangoFontMetrics*) _self;

	// get field value
	result = self->approximate_char_width;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoFontMetrics_pango_1font_1metrics_1get_1underline_1position
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	PangoFontMetrics* self;

	// convert parameter self
	self = (PangoFontMetrics*) _self;

	// get field value
	result = self->underline_position;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoFontMetrics_pango_1font_1metrics_1get_1underline_1thickness
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	PangoFontMetrics* self;

	// convert parameter self
	self = (PangoFontMetrics*) _self;

	// get field value
	result = self->underline_thickness;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoFontMetrics_pango_1font_1metrics_1get_1strikethrough_1position
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	PangoFontMetrics* self;

	// convert parameter self
	self = (PangoFontMetrics*) _self;

	// get field value
	result = self->strikethrough_position;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoFontMetrics_pango_1font_1metrics_1get_1strikethrough_1thickness
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	PangoFontMetrics* self;

	// convert parameter self
	self = (PangoFontMetrics*) _self;

	// get field value
	result = self->strikethrough_thickness;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoFontMetrics_pango_1font_1metrics_1new
(
	JNIEnv* env,
	jclass cls
)
{
	PangoFontMetrics* result;
	jlong _result;

	// call function
	result = pango_font_metrics_new();

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoFontMetrics_pango_1font_1metrics_1get_1approximate_1digit_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	PangoFontMetrics* self;

	// convert parameter self
	self = (PangoFontMetrics*) _self;

	// call function
	result = pango_font_metrics_get_approximate_digit_width(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoFontMetrics_pango_1font_1metrics_1ref
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoFontMetrics* result;
	jlong _result;
	PangoFontMetrics* self;

	// convert parameter self
	self = (PangoFontMetrics*) _self;

	// call function
	result = pango_font_metrics_ref(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoFontMetrics_pango_1font_1metrics_1unref
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoFontMetrics* self;

	// convert parameter self
	self = (PangoFontMetrics*) _self;

	// call function
	pango_font_metrics_unref(self);

	// cleanup parameter self
}
