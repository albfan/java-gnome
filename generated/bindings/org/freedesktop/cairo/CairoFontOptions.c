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
#include "bindings_java.h"
#include "org_freedesktop_cairo_CairoFontOptions.h"

JNIEXPORT jlong JNICALL
Java_org_freedesktop_cairo_CairoFontOptions_cairo_1font_1options_1create
(
	JNIEnv* env,
	jclass cls
)
{
	cairo_font_options_t* result;
	jlong _result;

	// call function
	result = cairo_font_options_create();

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoFontOptions_cairo_1font_1options_1destroy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	cairo_font_options_t* self;

	// convert parameter self
	self = (cairo_font_options_t*) _self;

	// call function
	cairo_font_options_destroy(self);

	// cleanup parameter self
}

JNIEXPORT jint JNICALL
Java_org_freedesktop_cairo_CairoFontOptions_cairo_1font_1options_1status
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	cairo_status_t result;
	jint _result;
	cairo_font_options_t* self;

	// convert parameter self
	self = (cairo_font_options_t*) _self;

	// call function
	result = cairo_font_options_status(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoFontOptions_cairo_1font_1options_1set_1hint_1metrics
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _hintMetrics
)
{
	cairo_font_options_t* self;
	cairo_hint_metrics_t hintMetrics;

	// convert parameter self
	self = (cairo_font_options_t*) _self;

	// convert parameter hintMetrics
	hintMetrics = (cairo_hint_metrics_t) _hintMetrics;

	// call function
	cairo_font_options_set_hint_metrics(self, hintMetrics);

	// cleanup parameter self

	// cleanup parameter hintMetrics
}

JNIEXPORT void JNICALL
Java_org_freedesktop_cairo_CairoFontOptions_cairo_1font_1options_1set_1hint_1style
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _hintStyle
)
{
	cairo_font_options_t* self;
	cairo_hint_style_t hintStyle;

	// convert parameter self
	self = (cairo_font_options_t*) _self;

	// convert parameter hintStyle
	hintStyle = (cairo_hint_style_t) _hintStyle;

	// call function
	cairo_font_options_set_hint_style(self, hintStyle);

	// cleanup parameter self

	// cleanup parameter hintStyle
}
