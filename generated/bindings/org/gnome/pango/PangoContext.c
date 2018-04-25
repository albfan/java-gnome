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
#include "org_gnome_pango_PangoContext.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoContext_pango_1context_1new
(
	JNIEnv* env,
	jclass cls
)
{
	PangoContext* result;
	jlong _result;

	// call function
	result = pango_context_new();

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
Java_org_gnome_pango_PangoContext_pango_1context_1changed
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoContext* self;

	// convert parameter self
	self = (PangoContext*) _self;

	// call function
	pango_context_changed(self);

	// cleanup parameter self
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoContext_pango_1context_1get_1base_1dir
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoDirection result;
	jint _result;
	PangoContext* self;

	// convert parameter self
	self = (PangoContext*) _self;

	// call function
	result = pango_context_get_base_dir(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoContext_pango_1context_1get_1base_1gravity
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoGravity result;
	jint _result;
	PangoContext* self;

	// convert parameter self
	self = (PangoContext*) _self;

	// call function
	result = pango_context_get_base_gravity(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoContext_pango_1context_1get_1font_1description
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoFontDescription* result;
	jlong _result;
	PangoContext* self;

	// convert parameter self
	self = (PangoContext*) _self;

	// call function
	result = pango_context_get_font_description(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoContext_pango_1context_1get_1font_1map
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoFontMap* result;
	jlong _result;
	PangoContext* self;

	// convert parameter self
	self = (PangoContext*) _self;

	// call function
	result = pango_context_get_font_map(self);

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
Java_org_gnome_pango_PangoContext_pango_1context_1get_1gravity
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoGravity result;
	jint _result;
	PangoContext* self;

	// convert parameter self
	self = (PangoContext*) _self;

	// call function
	result = pango_context_get_gravity(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoContext_pango_1context_1get_1gravity_1hint
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoGravityHint result;
	jint _result;
	PangoContext* self;

	// convert parameter self
	self = (PangoContext*) _self;

	// call function
	result = pango_context_get_gravity_hint(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoContext_pango_1context_1get_1language
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoLanguage* result;
	jlong _result;
	PangoContext* self;

	// convert parameter self
	self = (PangoContext*) _self;

	// call function
	result = pango_context_get_language(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoContext_pango_1context_1get_1matrix
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const PangoMatrix* result;
	jlong _result;
	PangoContext* self;

	// convert parameter self
	self = (PangoContext*) _self;

	// call function
	result = pango_context_get_matrix(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoContext_pango_1context_1get_1metrics
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _desc,
	jlong _language
)
{
	PangoFontMetrics* result;
	jlong _result;
	PangoContext* self;
	const PangoFontDescription* desc;
	PangoLanguage* language;

	// convert parameter self
	self = (PangoContext*) _self;

	// convert parameter desc
	desc = (const PangoFontDescription*) _desc;

	// convert parameter language
	language = (PangoLanguage*) _language;

	// call function
	result = pango_context_get_metrics(self, desc, language);

	// cleanup parameter self

	// cleanup parameter desc

	// cleanup parameter language

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoContext_pango_1context_1get_1serial
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	PangoContext* self;

	// convert parameter self
	self = (PangoContext*) _self;

	// call function
	result = pango_context_get_serial(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoContext_pango_1context_1load_1font
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _desc
)
{
	PangoFont* result;
	jlong _result;
	PangoContext* self;
	const PangoFontDescription* desc;

	// convert parameter self
	self = (PangoContext*) _self;

	// convert parameter desc
	desc = (const PangoFontDescription*) _desc;

	// call function
	result = pango_context_load_font(self, desc);

	// cleanup parameter self

	// cleanup parameter desc

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoContext_pango_1context_1load_1fontset
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _desc,
	jlong _language
)
{
	PangoFontset* result;
	jlong _result;
	PangoContext* self;
	const PangoFontDescription* desc;
	PangoLanguage* language;

	// convert parameter self
	self = (PangoContext*) _self;

	// convert parameter desc
	desc = (const PangoFontDescription*) _desc;

	// convert parameter language
	language = (PangoLanguage*) _language;

	// call function
	result = pango_context_load_fontset(self, desc, language);

	// cleanup parameter self

	// cleanup parameter desc

	// cleanup parameter language

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
Java_org_gnome_pango_PangoContext_pango_1context_1set_1base_1dir
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _direction
)
{
	PangoContext* self;
	PangoDirection direction;

	// convert parameter self
	self = (PangoContext*) _self;

	// convert parameter direction
	direction = (PangoDirection) _direction;

	// call function
	pango_context_set_base_dir(self, direction);

	// cleanup parameter self

	// cleanup parameter direction
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoContext_pango_1context_1set_1base_1gravity
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _gravity
)
{
	PangoContext* self;
	PangoGravity gravity;

	// convert parameter self
	self = (PangoContext*) _self;

	// convert parameter gravity
	gravity = (PangoGravity) _gravity;

	// call function
	pango_context_set_base_gravity(self, gravity);

	// cleanup parameter self

	// cleanup parameter gravity
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoContext_pango_1context_1set_1font_1description
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _desc
)
{
	PangoContext* self;
	const PangoFontDescription* desc;

	// convert parameter self
	self = (PangoContext*) _self;

	// convert parameter desc
	desc = (const PangoFontDescription*) _desc;

	// call function
	pango_context_set_font_description(self, desc);

	// cleanup parameter self

	// cleanup parameter desc
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoContext_pango_1context_1set_1font_1map
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _fontMap
)
{
	PangoContext* self;
	PangoFontMap* fontMap;

	// convert parameter self
	self = (PangoContext*) _self;

	// convert parameter fontMap
	fontMap = (PangoFontMap*) _fontMap;

	// call function
	pango_context_set_font_map(self, fontMap);

	// cleanup parameter self

	// cleanup parameter fontMap
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoContext_pango_1context_1set_1gravity_1hint
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _hint
)
{
	PangoContext* self;
	PangoGravityHint hint;

	// convert parameter self
	self = (PangoContext*) _self;

	// convert parameter hint
	hint = (PangoGravityHint) _hint;

	// call function
	pango_context_set_gravity_hint(self, hint);

	// cleanup parameter self

	// cleanup parameter hint
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoContext_pango_1context_1set_1language
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _language
)
{
	PangoContext* self;
	PangoLanguage* language;

	// convert parameter self
	self = (PangoContext*) _self;

	// convert parameter language
	language = (PangoLanguage*) _language;

	// call function
	pango_context_set_language(self, language);

	// cleanup parameter self

	// cleanup parameter language
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoContext_pango_1context_1set_1matrix
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _matrix
)
{
	PangoContext* self;
	const PangoMatrix* matrix;

	// convert parameter self
	self = (PangoContext*) _self;

	// convert parameter matrix
	matrix = (const PangoMatrix*) _matrix;

	// call function
	pango_context_set_matrix(self, matrix);

	// cleanup parameter self

	// cleanup parameter matrix
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoContext_pango_1cairo_1context_1set_1font_1options
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _options
)
{
	PangoContext* self;
	cairo_font_options_t* options;

	// convert parameter self
	self = (PangoContext*) _self;

	// convert parameter options
	options = (cairo_font_options_t*) _options;

	// call function
	pango_cairo_context_set_font_options(self, options);

	// cleanup parameter self

	// cleanup parameter options
}
