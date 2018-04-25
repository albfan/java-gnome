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
#include "org_gnome_pango_PangoAttribute.h"

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoAttribute_pango_1attribute_1get_1start_1index
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	PangoAttribute* self;

	// convert parameter self
	self = (PangoAttribute*) _self;

	// get field value
	result = self->start_index;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoAttribute_pango_1attribute_1set_1start_1index
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _startIndex
)
{
	PangoAttribute* self;
	guint startIndex;

	// convert parameter self
	self = (PangoAttribute*) _self;

	// convert parameter startIndex
	startIndex = (guint) _startIndex;

	// set field value
	self->start_index = startIndex;

	// cleanup parameter self

	// cleanup parameter startIndex
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoAttribute_pango_1attribute_1get_1end_1index
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	PangoAttribute* self;

	// convert parameter self
	self = (PangoAttribute*) _self;

	// get field value
	result = self->end_index;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoAttribute_pango_1attribute_1set_1end_1index
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _endIndex
)
{
	PangoAttribute* self;
	guint endIndex;

	// convert parameter self
	self = (PangoAttribute*) _self;

	// convert parameter endIndex
	endIndex = (guint) _endIndex;

	// set field value
	self->end_index = endIndex;

	// cleanup parameter self

	// cleanup parameter endIndex
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoAttribute_pango_1attribute_1copy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoAttribute* result;
	jlong _result;
	PangoAttribute* self;

	// convert parameter self
	self = (PangoAttribute*) _self;

	// call function
	result = pango_attribute_copy(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoAttribute_pango_1attribute_1destroy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoAttribute* self;

	// convert parameter self
	self = (PangoAttribute*) _self;

	// call function
	pango_attribute_destroy(self);

	// cleanup parameter self
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_pango_PangoAttribute_pango_1attribute_1equal
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _attr2
)
{
	gboolean result;
	jboolean _result;
	PangoAttribute* self;
	const PangoAttribute* attr2;

	// convert parameter self
	self = (PangoAttribute*) _self;

	// convert parameter attr2
	attr2 = (const PangoAttribute*) _attr2;

	// call function
	result = pango_attribute_equal(self, attr2);

	// cleanup parameter self

	// cleanup parameter attr2

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoAttribute_pango_1attr_1language_1new
(
	JNIEnv* env,
	jclass cls,
	jlong _language
)
{
	PangoAttribute* result;
	jlong _result;
	PangoLanguage* language;

	// convert parameter language
	language = (PangoLanguage*) _language;

	// call function
	result = pango_attr_language_new(language);

	// cleanup parameter language

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoAttribute_pango_1attr_1foreground_1new
(
	JNIEnv* env,
	jclass cls,
	jchar _red,
	jchar _green,
	jchar _blue
)
{
	PangoAttribute* result;
	jlong _result;
	guint16 red;
	guint16 green;
	guint16 blue;

	// convert parameter red
	red = (guint16) _red;

	// convert parameter green
	green = (guint16) _green;

	// convert parameter blue
	blue = (guint16) _blue;

	// call function
	result = pango_attr_foreground_new(red, green, blue);

	// cleanup parameter red

	// cleanup parameter green

	// cleanup parameter blue

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoAttribute_pango_1attr_1background_1new
(
	JNIEnv* env,
	jclass cls,
	jchar _red,
	jchar _green,
	jchar _blue
)
{
	PangoAttribute* result;
	jlong _result;
	guint16 red;
	guint16 green;
	guint16 blue;

	// convert parameter red
	red = (guint16) _red;

	// convert parameter green
	green = (guint16) _green;

	// convert parameter blue
	blue = (guint16) _blue;

	// call function
	result = pango_attr_background_new(red, green, blue);

	// cleanup parameter red

	// cleanup parameter green

	// cleanup parameter blue

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoAttribute_pango_1attr_1size_1new
(
	JNIEnv* env,
	jclass cls,
	jint _size
)
{
	PangoAttribute* result;
	jlong _result;
	int size;

	// convert parameter size
	size = (int) _size;

	// call function
	result = pango_attr_size_new(size);

	// cleanup parameter size

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoAttribute_pango_1attr_1style_1new
(
	JNIEnv* env,
	jclass cls,
	jint _style
)
{
	PangoAttribute* result;
	jlong _result;
	PangoStyle style;

	// convert parameter style
	style = (PangoStyle) _style;

	// call function
	result = pango_attr_style_new(style);

	// cleanup parameter style

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoAttribute_pango_1attr_1weight_1new
(
	JNIEnv* env,
	jclass cls,
	jint _weight
)
{
	PangoAttribute* result;
	jlong _result;
	PangoWeight weight;

	// convert parameter weight
	weight = (PangoWeight) _weight;

	// call function
	result = pango_attr_weight_new(weight);

	// cleanup parameter weight

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoAttribute_pango_1attr_1variant_1new
(
	JNIEnv* env,
	jclass cls,
	jint _variant
)
{
	PangoAttribute* result;
	jlong _result;
	PangoVariant variant;

	// convert parameter variant
	variant = (PangoVariant) _variant;

	// call function
	result = pango_attr_variant_new(variant);

	// cleanup parameter variant

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoAttribute_pango_1attr_1font_1desc_1new
(
	JNIEnv* env,
	jclass cls,
	jlong _desc
)
{
	PangoAttribute* result;
	jlong _result;
	const PangoFontDescription* desc;

	// convert parameter desc
	desc = (const PangoFontDescription*) _desc;

	// call function
	result = pango_attr_font_desc_new(desc);

	// cleanup parameter desc

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoAttribute_pango_1attr_1underline_1new
(
	JNIEnv* env,
	jclass cls,
	jint _underline
)
{
	PangoAttribute* result;
	jlong _result;
	PangoUnderline underline;

	// convert parameter underline
	underline = (PangoUnderline) _underline;

	// call function
	result = pango_attr_underline_new(underline);

	// cleanup parameter underline

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoAttribute_pango_1attr_1underline_1color_1new
(
	JNIEnv* env,
	jclass cls,
	jchar _red,
	jchar _green,
	jchar _blue
)
{
	PangoAttribute* result;
	jlong _result;
	guint16 red;
	guint16 green;
	guint16 blue;

	// convert parameter red
	red = (guint16) _red;

	// convert parameter green
	green = (guint16) _green;

	// convert parameter blue
	blue = (guint16) _blue;

	// call function
	result = pango_attr_underline_color_new(red, green, blue);

	// cleanup parameter red

	// cleanup parameter green

	// cleanup parameter blue

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoAttribute_pango_1attr_1rise_1new
(
	JNIEnv* env,
	jclass cls,
	jint _rise
)
{
	PangoAttribute* result;
	jlong _result;
	int rise;

	// convert parameter rise
	rise = (int) _rise;

	// call function
	result = pango_attr_rise_new(rise);

	// cleanup parameter rise

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoAttribute_pango_1attr_1fallback_1new
(
	JNIEnv* env,
	jclass cls,
	jboolean _fallback
)
{
	PangoAttribute* result;
	jlong _result;
	gboolean fallback;

	// convert parameter fallback
	fallback = (gboolean) _fallback;

	// call function
	result = pango_attr_fallback_new(fallback);

	// cleanup parameter fallback

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoAttribute_pango_1attr_1gravity_1new
(
	JNIEnv* env,
	jclass cls,
	jint _gravity
)
{
	PangoAttribute* result;
	jlong _result;
	PangoGravity gravity;

	// convert parameter gravity
	gravity = (PangoGravity) _gravity;

	// call function
	result = pango_attr_gravity_new(gravity);

	// cleanup parameter gravity

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoAttribute_pango_1attr_1gravity_1hint_1new
(
	JNIEnv* env,
	jclass cls,
	jint _hint
)
{
	PangoAttribute* result;
	jlong _result;
	PangoGravityHint hint;

	// convert parameter hint
	hint = (PangoGravityHint) _hint;

	// call function
	result = pango_attr_gravity_hint_new(hint);

	// cleanup parameter hint

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}
