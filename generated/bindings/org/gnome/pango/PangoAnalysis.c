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
#include "org_gnome_pango_PangoAnalysis.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoAnalysis_pango_1analysis_1get_1shape_1engine
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoEngineShape* result;
	jlong _result;
	PangoAnalysis* self;

	// convert parameter self
	self = (PangoAnalysis*) _self;

	// get field value
	result = self->shape_engine;

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
Java_org_gnome_pango_PangoAnalysis_pango_1analysis_1set_1shape_1engine
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _shapeEngine
)
{
	PangoAnalysis* self;
	PangoEngineShape* shapeEngine;

	// convert parameter self
	self = (PangoAnalysis*) _self;

	// convert parameter shapeEngine
	shapeEngine = (PangoEngineShape*) _shapeEngine;

	// set field value
	self->shape_engine = shapeEngine;

	// cleanup parameter self

	// cleanup parameter shapeEngine
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoAnalysis_pango_1analysis_1get_1lang_1engine
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoEngineLang* result;
	jlong _result;
	PangoAnalysis* self;

	// convert parameter self
	self = (PangoAnalysis*) _self;

	// get field value
	result = self->lang_engine;

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
Java_org_gnome_pango_PangoAnalysis_pango_1analysis_1set_1lang_1engine
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _langEngine
)
{
	PangoAnalysis* self;
	PangoEngineLang* langEngine;

	// convert parameter self
	self = (PangoAnalysis*) _self;

	// convert parameter langEngine
	langEngine = (PangoEngineLang*) _langEngine;

	// set field value
	self->lang_engine = langEngine;

	// cleanup parameter self

	// cleanup parameter langEngine
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoAnalysis_pango_1analysis_1get_1font
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoFont* result;
	jlong _result;
	PangoAnalysis* self;

	// convert parameter self
	self = (PangoAnalysis*) _self;

	// get field value
	result = self->font;

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
Java_org_gnome_pango_PangoAnalysis_pango_1analysis_1set_1font
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _font
)
{
	PangoAnalysis* self;
	PangoFont* font;

	// convert parameter self
	self = (PangoAnalysis*) _self;

	// convert parameter font
	font = (PangoFont*) _font;

	// set field value
	self->font = font;

	// cleanup parameter self

	// cleanup parameter font
}

JNIEXPORT jbyte JNICALL
Java_org_gnome_pango_PangoAnalysis_pango_1analysis_1get_1level
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint8 result;
	jbyte _result;
	PangoAnalysis* self;

	// convert parameter self
	self = (PangoAnalysis*) _self;

	// get field value
	result = self->level;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jbyte) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoAnalysis_pango_1analysis_1set_1level
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jbyte _level
)
{
	PangoAnalysis* self;
	guint8 level;

	// convert parameter self
	self = (PangoAnalysis*) _self;

	// convert parameter level
	level = (guint8) _level;

	// set field value
	self->level = level;

	// cleanup parameter self

	// cleanup parameter level
}

JNIEXPORT jbyte JNICALL
Java_org_gnome_pango_PangoAnalysis_pango_1analysis_1get_1gravity
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint8 result;
	jbyte _result;
	PangoAnalysis* self;

	// convert parameter self
	self = (PangoAnalysis*) _self;

	// get field value
	result = self->gravity;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jbyte) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoAnalysis_pango_1analysis_1set_1gravity
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jbyte _gravity
)
{
	PangoAnalysis* self;
	guint8 gravity;

	// convert parameter self
	self = (PangoAnalysis*) _self;

	// convert parameter gravity
	gravity = (guint8) _gravity;

	// set field value
	self->gravity = gravity;

	// cleanup parameter self

	// cleanup parameter gravity
}

JNIEXPORT jbyte JNICALL
Java_org_gnome_pango_PangoAnalysis_pango_1analysis_1get_1flags
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint8 result;
	jbyte _result;
	PangoAnalysis* self;

	// convert parameter self
	self = (PangoAnalysis*) _self;

	// get field value
	result = self->flags;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jbyte) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoAnalysis_pango_1analysis_1set_1flags
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jbyte _flags
)
{
	PangoAnalysis* self;
	guint8 flags;

	// convert parameter self
	self = (PangoAnalysis*) _self;

	// convert parameter flags
	flags = (guint8) _flags;

	// set field value
	self->flags = flags;

	// cleanup parameter self

	// cleanup parameter flags
}

JNIEXPORT jbyte JNICALL
Java_org_gnome_pango_PangoAnalysis_pango_1analysis_1get_1script
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint8 result;
	jbyte _result;
	PangoAnalysis* self;

	// convert parameter self
	self = (PangoAnalysis*) _self;

	// get field value
	result = self->script;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jbyte) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoAnalysis_pango_1analysis_1set_1script
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jbyte _script
)
{
	PangoAnalysis* self;
	guint8 script;

	// convert parameter self
	self = (PangoAnalysis*) _self;

	// convert parameter script
	script = (guint8) _script;

	// set field value
	self->script = script;

	// cleanup parameter self

	// cleanup parameter script
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoAnalysis_pango_1analysis_1get_1language
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoLanguage* result;
	jlong _result;
	PangoAnalysis* self;

	// convert parameter self
	self = (PangoAnalysis*) _self;

	// get field value
	result = self->language;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoAnalysis_pango_1analysis_1set_1language
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _language
)
{
	PangoAnalysis* self;
	PangoLanguage* language;

	// convert parameter self
	self = (PangoAnalysis*) _self;

	// convert parameter language
	language = (PangoLanguage*) _language;

	// set field value
	self->language = language;

	// cleanup parameter self

	// cleanup parameter language
}
