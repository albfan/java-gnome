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
#include <gtksourceview/gtksource.h>
#include "bindings_java.h"
#include "org_gnome_sourceview_GtkSourcePrintCompositor.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1new
(
	JNIEnv* env,
	jclass cls,
	jlong _buffer
)
{
	GtkSourcePrintCompositor* result;
	jlong _result;
	GtkSourceBuffer* buffer;

	// convert parameter buffer
	buffer = (GtkSourceBuffer*) _buffer;

	// call function
	result = gtk_source_print_compositor_new(buffer);

	// cleanup parameter buffer

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
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1new_1from_1view
(
	JNIEnv* env,
	jclass cls,
	jlong _view
)
{
	GtkSourcePrintCompositor* result;
	jlong _result;
	GtkSourceView* view;

	// convert parameter view
	view = (GtkSourceView*) _view;

	// call function
	result = gtk_source_print_compositor_new_from_view(view);

	// cleanup parameter view

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
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1draw_1page
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _context,
	jint _pageNr
)
{
	GtkSourcePrintCompositor* self;
	GtkPrintContext* context;
	gint pageNr;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// convert parameter context
	context = (GtkPrintContext*) _context;

	// convert parameter pageNr
	pageNr = (gint) _pageNr;

	// call function
	gtk_source_print_compositor_draw_page(self, context, pageNr);

	// cleanup parameter self

	// cleanup parameter context

	// cleanup parameter pageNr
}

JNIEXPORT jstring JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1get_1body_1font_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GtkSourcePrintCompositor* self;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// call function
	result = gtk_source_print_compositor_get_body_font_name(self);

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

JNIEXPORT jdouble JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1get_1bottom_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit
)
{
	gdouble result;
	jdouble _result;
	GtkSourcePrintCompositor* self;
	GtkUnit unit;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	result = gtk_source_print_compositor_get_bottom_margin(self, unit);

	// cleanup parameter self

	// cleanup parameter unit

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1get_1buffer
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkSourceBuffer* result;
	jlong _result;
	GtkSourcePrintCompositor* self;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// call function
	result = gtk_source_print_compositor_get_buffer(self);

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

JNIEXPORT jstring JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1get_1footer_1font_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GtkSourcePrintCompositor* self;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// call function
	result = gtk_source_print_compositor_get_footer_font_name(self);

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
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1get_1header_1font_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GtkSourcePrintCompositor* self;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// call function
	result = gtk_source_print_compositor_get_header_font_name(self);

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

JNIEXPORT jboolean JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1get_1highlight_1syntax
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkSourcePrintCompositor* self;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// call function
	result = gtk_source_print_compositor_get_highlight_syntax(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1get_1left_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit
)
{
	gdouble result;
	jdouble _result;
	GtkSourcePrintCompositor* self;
	GtkUnit unit;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	result = gtk_source_print_compositor_get_left_margin(self, unit);

	// cleanup parameter self

	// cleanup parameter unit

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1get_1line_1numbers_1font_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GtkSourcePrintCompositor* self;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// call function
	result = gtk_source_print_compositor_get_line_numbers_font_name(self);

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

JNIEXPORT jint JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1get_1n_1pages
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkSourcePrintCompositor* self;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// call function
	result = gtk_source_print_compositor_get_n_pages(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1get_1pagination_1progress
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GtkSourcePrintCompositor* self;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// call function
	result = gtk_source_print_compositor_get_pagination_progress(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1get_1print_1footer
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkSourcePrintCompositor* self;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// call function
	result = gtk_source_print_compositor_get_print_footer(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1get_1print_1header
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkSourcePrintCompositor* self;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// call function
	result = gtk_source_print_compositor_get_print_header(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1get_1print_1line_1numbers
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GtkSourcePrintCompositor* self;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// call function
	result = gtk_source_print_compositor_get_print_line_numbers(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1get_1right_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit
)
{
	gdouble result;
	jdouble _result;
	GtkSourcePrintCompositor* self;
	GtkUnit unit;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	result = gtk_source_print_compositor_get_right_margin(self, unit);

	// cleanup parameter self

	// cleanup parameter unit

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1get_1tab_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GtkSourcePrintCompositor* self;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// call function
	result = gtk_source_print_compositor_get_tab_width(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1get_1top_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit
)
{
	gdouble result;
	jdouble _result;
	GtkSourcePrintCompositor* self;
	GtkUnit unit;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	result = gtk_source_print_compositor_get_top_margin(self, unit);

	// cleanup parameter self

	// cleanup parameter unit

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1get_1wrap_1mode
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWrapMode result;
	jint _result;
	GtkSourcePrintCompositor* self;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// call function
	result = gtk_source_print_compositor_get_wrap_mode(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1paginate
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _context
)
{
	gboolean result;
	jboolean _result;
	GtkSourcePrintCompositor* self;
	GtkPrintContext* context;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// convert parameter context
	context = (GtkPrintContext*) _context;

	// call function
	result = gtk_source_print_compositor_paginate(self, context);

	// cleanup parameter self

	// cleanup parameter context

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1set_1body_1font_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _fontName
)
{
	GtkSourcePrintCompositor* self;
	const gchar* fontName;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// convert parameter fontName
	fontName = (const gchar*) bindings_java_getString(env, _fontName);
	if (fontName == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_source_print_compositor_set_body_font_name(self, fontName);

	// cleanup parameter self

	// cleanup parameter fontName
	bindings_java_releaseString(fontName);
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1set_1bottom_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _margin,
	jint _unit
)
{
	GtkSourcePrintCompositor* self;
	gdouble margin;
	GtkUnit unit;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// convert parameter margin
	margin = (gdouble) _margin;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	gtk_source_print_compositor_set_bottom_margin(self, margin, unit);

	// cleanup parameter self

	// cleanup parameter margin

	// cleanup parameter unit
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1set_1footer_1font_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _fontName
)
{
	GtkSourcePrintCompositor* self;
	const gchar* fontName;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// convert parameter fontName
	if (_fontName == NULL) {
		fontName = NULL;
	} else {
		fontName = (const gchar*) bindings_java_getString(env, _fontName);
		if (fontName == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_source_print_compositor_set_footer_font_name(self, fontName);

	// cleanup parameter self

	// cleanup parameter fontName
	if (fontName != NULL) {
		bindings_java_releaseString(fontName);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1set_1footer_1format
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _separator,
	jstring _left,
	jstring _center,
	jstring _right
)
{
	GtkSourcePrintCompositor* self;
	gboolean separator;
	const gchar* left;
	const gchar* center;
	const gchar* right;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// convert parameter separator
	separator = (gboolean) _separator;

	// convert parameter left
	if (_left == NULL) {
		left = NULL;
	} else {
		left = (const gchar*) bindings_java_getString(env, _left);
		if (left == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter center
	if (_center == NULL) {
		center = NULL;
	} else {
		center = (const gchar*) bindings_java_getString(env, _center);
		if (center == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter right
	if (_right == NULL) {
		right = NULL;
	} else {
		right = (const gchar*) bindings_java_getString(env, _right);
		if (right == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_source_print_compositor_set_footer_format(self, separator, left, center, right);

	// cleanup parameter self

	// cleanup parameter separator

	// cleanup parameter left
	if (left != NULL) {
		bindings_java_releaseString(left);
	}

	// cleanup parameter center
	if (center != NULL) {
		bindings_java_releaseString(center);
	}

	// cleanup parameter right
	if (right != NULL) {
		bindings_java_releaseString(right);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1set_1header_1font_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _fontName
)
{
	GtkSourcePrintCompositor* self;
	const gchar* fontName;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// convert parameter fontName
	if (_fontName == NULL) {
		fontName = NULL;
	} else {
		fontName = (const gchar*) bindings_java_getString(env, _fontName);
		if (fontName == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_source_print_compositor_set_header_font_name(self, fontName);

	// cleanup parameter self

	// cleanup parameter fontName
	if (fontName != NULL) {
		bindings_java_releaseString(fontName);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1set_1header_1format
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _separator,
	jstring _left,
	jstring _center,
	jstring _right
)
{
	GtkSourcePrintCompositor* self;
	gboolean separator;
	const gchar* left;
	const gchar* center;
	const gchar* right;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// convert parameter separator
	separator = (gboolean) _separator;

	// convert parameter left
	if (_left == NULL) {
		left = NULL;
	} else {
		left = (const gchar*) bindings_java_getString(env, _left);
		if (left == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter center
	if (_center == NULL) {
		center = NULL;
	} else {
		center = (const gchar*) bindings_java_getString(env, _center);
		if (center == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter right
	if (_right == NULL) {
		right = NULL;
	} else {
		right = (const gchar*) bindings_java_getString(env, _right);
		if (right == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_source_print_compositor_set_header_format(self, separator, left, center, right);

	// cleanup parameter self

	// cleanup parameter separator

	// cleanup parameter left
	if (left != NULL) {
		bindings_java_releaseString(left);
	}

	// cleanup parameter center
	if (center != NULL) {
		bindings_java_releaseString(center);
	}

	// cleanup parameter right
	if (right != NULL) {
		bindings_java_releaseString(right);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1set_1highlight_1syntax
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _highlight
)
{
	GtkSourcePrintCompositor* self;
	gboolean highlight;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// convert parameter highlight
	highlight = (gboolean) _highlight;

	// call function
	gtk_source_print_compositor_set_highlight_syntax(self, highlight);

	// cleanup parameter self

	// cleanup parameter highlight
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1set_1left_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _margin,
	jint _unit
)
{
	GtkSourcePrintCompositor* self;
	gdouble margin;
	GtkUnit unit;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// convert parameter margin
	margin = (gdouble) _margin;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	gtk_source_print_compositor_set_left_margin(self, margin, unit);

	// cleanup parameter self

	// cleanup parameter margin

	// cleanup parameter unit
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1set_1line_1numbers_1font_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _fontName
)
{
	GtkSourcePrintCompositor* self;
	const gchar* fontName;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// convert parameter fontName
	if (_fontName == NULL) {
		fontName = NULL;
	} else {
		fontName = (const gchar*) bindings_java_getString(env, _fontName);
		if (fontName == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_source_print_compositor_set_line_numbers_font_name(self, fontName);

	// cleanup parameter self

	// cleanup parameter fontName
	if (fontName != NULL) {
		bindings_java_releaseString(fontName);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1set_1print_1footer
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _print
)
{
	GtkSourcePrintCompositor* self;
	gboolean print;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// convert parameter print
	print = (gboolean) _print;

	// call function
	gtk_source_print_compositor_set_print_footer(self, print);

	// cleanup parameter self

	// cleanup parameter print
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1set_1print_1header
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _print
)
{
	GtkSourcePrintCompositor* self;
	gboolean print;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// convert parameter print
	print = (gboolean) _print;

	// call function
	gtk_source_print_compositor_set_print_header(self, print);

	// cleanup parameter self

	// cleanup parameter print
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1set_1print_1line_1numbers
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _interval
)
{
	GtkSourcePrintCompositor* self;
	guint interval;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// convert parameter interval
	interval = (guint) _interval;

	// call function
	gtk_source_print_compositor_set_print_line_numbers(self, interval);

	// cleanup parameter self

	// cleanup parameter interval
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1set_1right_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _margin,
	jint _unit
)
{
	GtkSourcePrintCompositor* self;
	gdouble margin;
	GtkUnit unit;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// convert parameter margin
	margin = (gdouble) _margin;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	gtk_source_print_compositor_set_right_margin(self, margin, unit);

	// cleanup parameter self

	// cleanup parameter margin

	// cleanup parameter unit
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1set_1tab_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _width
)
{
	GtkSourcePrintCompositor* self;
	guint width;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// convert parameter width
	width = (guint) _width;

	// call function
	gtk_source_print_compositor_set_tab_width(self, width);

	// cleanup parameter self

	// cleanup parameter width
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1set_1top_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _margin,
	jint _unit
)
{
	GtkSourcePrintCompositor* self;
	gdouble margin;
	GtkUnit unit;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// convert parameter margin
	margin = (gdouble) _margin;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	gtk_source_print_compositor_set_top_margin(self, margin, unit);

	// cleanup parameter self

	// cleanup parameter margin

	// cleanup parameter unit
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourcePrintCompositor_gtk_1source_1print_1compositor_1set_1wrap_1mode
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _wrapMode
)
{
	GtkSourcePrintCompositor* self;
	GtkWrapMode wrapMode;

	// convert parameter self
	self = (GtkSourcePrintCompositor*) _self;

	// convert parameter wrapMode
	wrapMode = (GtkWrapMode) _wrapMode;

	// call function
	gtk_source_print_compositor_set_wrap_mode(self, wrapMode);

	// cleanup parameter self

	// cleanup parameter wrapMode
}
