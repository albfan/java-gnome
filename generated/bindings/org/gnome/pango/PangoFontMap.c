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
#include "org_gnome_pango_PangoFontMap.h"

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoFontMap_pango_1font_1map_1changed
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoFontMap* self;

	// convert parameter self
	self = (PangoFontMap*) _self;

	// call function
	pango_font_map_changed(self);

	// cleanup parameter self
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoFontMap_pango_1font_1map_1create_1context
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoContext* result;
	jlong _result;
	PangoFontMap* self;

	// convert parameter self
	self = (PangoFontMap*) _self;

	// call function
	result = pango_font_map_create_context(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoFontMap_pango_1font_1map_1get_1serial
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	PangoFontMap* self;

	// convert parameter self
	self = (PangoFontMap*) _self;

	// call function
	result = pango_font_map_get_serial(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_pango_PangoFontMap_pango_1font_1map_1get_1shape_1engine_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const char* result;
	jstring _result;
	PangoFontMap* self;

	// convert parameter self
	self = (PangoFontMap*) _self;

	// call function
	result = pango_font_map_get_shape_engine_type(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoFontMap_pango_1font_1map_1load_1font
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _context,
	jlong _desc
)
{
	PangoFont* result;
	jlong _result;
	PangoFontMap* self;
	PangoContext* context;
	const PangoFontDescription* desc;

	// convert parameter self
	self = (PangoFontMap*) _self;

	// convert parameter context
	context = (PangoContext*) _context;

	// convert parameter desc
	desc = (const PangoFontDescription*) _desc;

	// call function
	result = pango_font_map_load_font(self, context, desc);

	// cleanup parameter self

	// cleanup parameter context

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
Java_org_gnome_pango_PangoFontMap_pango_1font_1map_1load_1fontset
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _context,
	jlong _desc,
	jlong _language
)
{
	PangoFontset* result;
	jlong _result;
	PangoFontMap* self;
	PangoContext* context;
	const PangoFontDescription* desc;
	PangoLanguage* language;

	// convert parameter self
	self = (PangoFontMap*) _self;

	// convert parameter context
	context = (PangoContext*) _context;

	// convert parameter desc
	desc = (const PangoFontDescription*) _desc;

	// convert parameter language
	language = (PangoLanguage*) _language;

	// call function
	result = pango_font_map_load_fontset(self, context, desc, language);

	// cleanup parameter self

	// cleanup parameter context

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
