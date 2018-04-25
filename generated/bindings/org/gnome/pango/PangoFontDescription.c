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
#include "org_gnome_pango_PangoFontDescription.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1new
(
	JNIEnv* env,
	jclass cls
)
{
	PangoFontDescription* result;
	jlong _result;

	// call function
	result = pango_font_description_new();

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1better_1match
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _oldMatch,
	jlong _newMatch
)
{
	gboolean result;
	jboolean _result;
	PangoFontDescription* self;
	const PangoFontDescription* oldMatch;
	const PangoFontDescription* newMatch;

	// convert parameter self
	self = (PangoFontDescription*) _self;

	// convert parameter oldMatch
	oldMatch = (const PangoFontDescription*) _oldMatch;

	// convert parameter newMatch
	newMatch = (const PangoFontDescription*) _newMatch;

	// call function
	result = pango_font_description_better_match(self, oldMatch, newMatch);

	// cleanup parameter self

	// cleanup parameter oldMatch

	// cleanup parameter newMatch

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1copy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoFontDescription* result;
	jlong _result;
	PangoFontDescription* self;

	// convert parameter self
	self = (PangoFontDescription*) _self;

	// call function
	result = pango_font_description_copy(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1copy_1static
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoFontDescription* result;
	jlong _result;
	PangoFontDescription* self;

	// convert parameter self
	self = (PangoFontDescription*) _self;

	// call function
	result = pango_font_description_copy_static(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1equal
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _desc2
)
{
	gboolean result;
	jboolean _result;
	PangoFontDescription* self;
	const PangoFontDescription* desc2;

	// convert parameter self
	self = (PangoFontDescription*) _self;

	// convert parameter desc2
	desc2 = (const PangoFontDescription*) _desc2;

	// call function
	result = pango_font_description_equal(self, desc2);

	// cleanup parameter self

	// cleanup parameter desc2

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1free
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoFontDescription* self;

	// convert parameter self
	self = (PangoFontDescription*) _self;

	// call function
	pango_font_description_free(self);

	// cleanup parameter self
}

JNIEXPORT jstring JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1get_1family
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const char* result;
	jstring _result;
	PangoFontDescription* self;

	// convert parameter self
	self = (PangoFontDescription*) _self;

	// call function
	result = pango_font_description_get_family(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1get_1gravity
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoGravity result;
	jint _result;
	PangoFontDescription* self;

	// convert parameter self
	self = (PangoFontDescription*) _self;

	// call function
	result = pango_font_description_get_gravity(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1get_1set_1fields
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoFontMask result;
	jint _result;
	PangoFontDescription* self;

	// convert parameter self
	self = (PangoFontDescription*) _self;

	// call function
	result = pango_font_description_get_set_fields(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1get_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	PangoFontDescription* self;

	// convert parameter self
	self = (PangoFontDescription*) _self;

	// call function
	result = pango_font_description_get_size(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1get_1size_1is_1absolute
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	PangoFontDescription* self;

	// convert parameter self
	self = (PangoFontDescription*) _self;

	// call function
	result = pango_font_description_get_size_is_absolute(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1get_1stretch
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoStretch result;
	jint _result;
	PangoFontDescription* self;

	// convert parameter self
	self = (PangoFontDescription*) _self;

	// call function
	result = pango_font_description_get_stretch(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1get_1style
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoStyle result;
	jint _result;
	PangoFontDescription* self;

	// convert parameter self
	self = (PangoFontDescription*) _self;

	// call function
	result = pango_font_description_get_style(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1get_1variant
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoVariant result;
	jint _result;
	PangoFontDescription* self;

	// convert parameter self
	self = (PangoFontDescription*) _self;

	// call function
	result = pango_font_description_get_variant(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1get_1variations
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const char* result;
	jstring _result;
	PangoFontDescription* self;

	// convert parameter self
	self = (PangoFontDescription*) _self;

	// call function
	result = pango_font_description_get_variations(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1get_1weight
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoWeight result;
	jint _result;
	PangoFontDescription* self;

	// convert parameter self
	self = (PangoFontDescription*) _self;

	// call function
	result = pango_font_description_get_weight(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1hash
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	PangoFontDescription* self;

	// convert parameter self
	self = (PangoFontDescription*) _self;

	// call function
	result = pango_font_description_hash(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1merge
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _descToMerge,
	jboolean _replaceExisting
)
{
	PangoFontDescription* self;
	const PangoFontDescription* descToMerge;
	gboolean replaceExisting;

	// convert parameter self
	self = (PangoFontDescription*) _self;

	// convert parameter descToMerge
	descToMerge = (const PangoFontDescription*) _descToMerge;

	// convert parameter replaceExisting
	replaceExisting = (gboolean) _replaceExisting;

	// call function
	pango_font_description_merge(self, descToMerge, replaceExisting);

	// cleanup parameter self

	// cleanup parameter descToMerge

	// cleanup parameter replaceExisting
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1merge_1static
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _descToMerge,
	jboolean _replaceExisting
)
{
	PangoFontDescription* self;
	const PangoFontDescription* descToMerge;
	gboolean replaceExisting;

	// convert parameter self
	self = (PangoFontDescription*) _self;

	// convert parameter descToMerge
	descToMerge = (const PangoFontDescription*) _descToMerge;

	// convert parameter replaceExisting
	replaceExisting = (gboolean) _replaceExisting;

	// call function
	pango_font_description_merge_static(self, descToMerge, replaceExisting);

	// cleanup parameter self

	// cleanup parameter descToMerge

	// cleanup parameter replaceExisting
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1set_1absolute_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _size
)
{
	PangoFontDescription* self;
	double size;

	// convert parameter self
	self = (PangoFontDescription*) _self;

	// convert parameter size
	size = (double) _size;

	// call function
	pango_font_description_set_absolute_size(self, size);

	// cleanup parameter self

	// cleanup parameter size
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1set_1family
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _family
)
{
	PangoFontDescription* self;
	const char* family;

	// convert parameter self
	self = (PangoFontDescription*) _self;

	// convert parameter family
	family = (const char*) bindings_java_getString(env, _family);
	if (family == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	pango_font_description_set_family(self, family);

	// cleanup parameter self

	// cleanup parameter family
	bindings_java_releaseString(family);
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1set_1family_1static
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _family
)
{
	PangoFontDescription* self;
	const char* family;

	// convert parameter self
	self = (PangoFontDescription*) _self;

	// convert parameter family
	family = (const char*) bindings_java_getString(env, _family);
	if (family == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	pango_font_description_set_family_static(self, family);

	// cleanup parameter self

	// cleanup parameter family
	bindings_java_releaseString(family);
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1set_1gravity
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _gravity
)
{
	PangoFontDescription* self;
	PangoGravity gravity;

	// convert parameter self
	self = (PangoFontDescription*) _self;

	// convert parameter gravity
	gravity = (PangoGravity) _gravity;

	// call function
	pango_font_description_set_gravity(self, gravity);

	// cleanup parameter self

	// cleanup parameter gravity
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1set_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _size
)
{
	PangoFontDescription* self;
	gint size;

	// convert parameter self
	self = (PangoFontDescription*) _self;

	// convert parameter size
	size = (gint) _size;

	// call function
	pango_font_description_set_size(self, size);

	// cleanup parameter self

	// cleanup parameter size
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1set_1stretch
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _stretch
)
{
	PangoFontDescription* self;
	PangoStretch stretch;

	// convert parameter self
	self = (PangoFontDescription*) _self;

	// convert parameter stretch
	stretch = (PangoStretch) _stretch;

	// call function
	pango_font_description_set_stretch(self, stretch);

	// cleanup parameter self

	// cleanup parameter stretch
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1set_1style
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _style
)
{
	PangoFontDescription* self;
	PangoStyle style;

	// convert parameter self
	self = (PangoFontDescription*) _self;

	// convert parameter style
	style = (PangoStyle) _style;

	// call function
	pango_font_description_set_style(self, style);

	// cleanup parameter self

	// cleanup parameter style
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1set_1variant
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _variant
)
{
	PangoFontDescription* self;
	PangoVariant variant;

	// convert parameter self
	self = (PangoFontDescription*) _self;

	// convert parameter variant
	variant = (PangoVariant) _variant;

	// call function
	pango_font_description_set_variant(self, variant);

	// cleanup parameter self

	// cleanup parameter variant
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1set_1variations
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _settings
)
{
	PangoFontDescription* self;
	const char* settings;

	// convert parameter self
	self = (PangoFontDescription*) _self;

	// convert parameter settings
	settings = (const char*) bindings_java_getString(env, _settings);
	if (settings == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	pango_font_description_set_variations(self, settings);

	// cleanup parameter self

	// cleanup parameter settings
	bindings_java_releaseString(settings);
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1set_1variations_1static
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _settings
)
{
	PangoFontDescription* self;
	const char* settings;

	// convert parameter self
	self = (PangoFontDescription*) _self;

	// convert parameter settings
	settings = (const char*) bindings_java_getString(env, _settings);
	if (settings == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	pango_font_description_set_variations_static(self, settings);

	// cleanup parameter self

	// cleanup parameter settings
	bindings_java_releaseString(settings);
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1set_1weight
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _weight
)
{
	PangoFontDescription* self;
	PangoWeight weight;

	// convert parameter self
	self = (PangoFontDescription*) _self;

	// convert parameter weight
	weight = (PangoWeight) _weight;

	// call function
	pango_font_description_set_weight(self, weight);

	// cleanup parameter self

	// cleanup parameter weight
}

JNIEXPORT jstring JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1to_1filename
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	char* result;
	jstring _result;
	PangoFontDescription* self;

	// convert parameter self
	self = (PangoFontDescription*) _self;

	// call function
	result = pango_font_description_to_filename(self);

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

JNIEXPORT jstring JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1to_1string
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	char* result;
	jstring _result;
	PangoFontDescription* self;

	// convert parameter self
	self = (PangoFontDescription*) _self;

	// call function
	result = pango_font_description_to_string(self);

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

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1unset_1fields
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _toUnset
)
{
	PangoFontDescription* self;
	PangoFontMask toUnset;

	// convert parameter self
	self = (PangoFontDescription*) _self;

	// convert parameter toUnset
	toUnset = (PangoFontMask) _toUnset;

	// call function
	pango_font_description_unset_fields(self, toUnset);

	// cleanup parameter self

	// cleanup parameter toUnset
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoFontDescription_pango_1font_1description_1from_1string
(
	JNIEnv* env,
	jclass cls,
	jstring _str
)
{
	PangoFontDescription* result;
	jlong _result;
	const char* str;

	// convert parameter str
	str = (const char*) bindings_java_getString(env, _str);
	if (str == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = pango_font_description_from_string(str);

	// cleanup parameter str
	bindings_java_releaseString(str);

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}
