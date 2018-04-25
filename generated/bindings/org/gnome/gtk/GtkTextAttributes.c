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
#include <gtk/gtk-a11y.h>
#include <gtk/gtk.h>
#include <gtk/gtkx.h>
#include "bindings_java.h"
#include "org_gnome_gtk_GtkTextAttributes.h"

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1get_1refcount
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GtkTextAttributes* self;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// get field value
	result = self->refcount;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1get_1justification
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkJustification result;
	jint _result;
	GtkTextAttributes* self;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// get field value
	result = self->justification;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1set_1justification
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _justification
)
{
	GtkTextAttributes* self;
	GtkJustification justification;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// convert parameter justification
	justification = (GtkJustification) _justification;

	// set field value
	self->justification = justification;

	// cleanup parameter self

	// cleanup parameter justification
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1get_1direction
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTextDirection result;
	jint _result;
	GtkTextAttributes* self;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// get field value
	result = self->direction;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1set_1direction
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _direction
)
{
	GtkTextAttributes* self;
	GtkTextDirection direction;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// convert parameter direction
	direction = (GtkTextDirection) _direction;

	// set field value
	self->direction = direction;

	// cleanup parameter self

	// cleanup parameter direction
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1get_1font
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoFontDescription* result;
	jlong _result;
	GtkTextAttributes* self;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// get field value
	result = self->font;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1set_1font
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _font
)
{
	GtkTextAttributes* self;
	PangoFontDescription* font;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// convert parameter font
	font = (PangoFontDescription*) _font;

	// set field value
	self->font = font;

	// cleanup parameter self

	// cleanup parameter font
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1get_1font_1scale
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GtkTextAttributes* self;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// get field value
	result = self->font_scale;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1set_1font_1scale
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _fontScale
)
{
	GtkTextAttributes* self;
	gdouble fontScale;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// convert parameter fontScale
	fontScale = (gdouble) _fontScale;

	// set field value
	self->font_scale = fontScale;

	// cleanup parameter self

	// cleanup parameter fontScale
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1get_1left_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkTextAttributes* self;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// get field value
	result = self->left_margin;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1set_1left_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _leftMargin
)
{
	GtkTextAttributes* self;
	gint leftMargin;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// convert parameter leftMargin
	leftMargin = (gint) _leftMargin;

	// set field value
	self->left_margin = leftMargin;

	// cleanup parameter self

	// cleanup parameter leftMargin
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1get_1right_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkTextAttributes* self;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// get field value
	result = self->right_margin;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1set_1right_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _rightMargin
)
{
	GtkTextAttributes* self;
	gint rightMargin;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// convert parameter rightMargin
	rightMargin = (gint) _rightMargin;

	// set field value
	self->right_margin = rightMargin;

	// cleanup parameter self

	// cleanup parameter rightMargin
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1get_1indent
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkTextAttributes* self;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// get field value
	result = self->indent;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1set_1indent
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _indent
)
{
	GtkTextAttributes* self;
	gint indent;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// convert parameter indent
	indent = (gint) _indent;

	// set field value
	self->indent = indent;

	// cleanup parameter self

	// cleanup parameter indent
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1get_1pixels_1above_1lines
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkTextAttributes* self;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// get field value
	result = self->pixels_above_lines;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1set_1pixels_1above_1lines
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _pixelsAboveLines
)
{
	GtkTextAttributes* self;
	gint pixelsAboveLines;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// convert parameter pixelsAboveLines
	pixelsAboveLines = (gint) _pixelsAboveLines;

	// set field value
	self->pixels_above_lines = pixelsAboveLines;

	// cleanup parameter self

	// cleanup parameter pixelsAboveLines
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1get_1pixels_1below_1lines
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkTextAttributes* self;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// get field value
	result = self->pixels_below_lines;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1set_1pixels_1below_1lines
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _pixelsBelowLines
)
{
	GtkTextAttributes* self;
	gint pixelsBelowLines;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// convert parameter pixelsBelowLines
	pixelsBelowLines = (gint) _pixelsBelowLines;

	// set field value
	self->pixels_below_lines = pixelsBelowLines;

	// cleanup parameter self

	// cleanup parameter pixelsBelowLines
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1get_1pixels_1inside_1wrap
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkTextAttributes* self;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// get field value
	result = self->pixels_inside_wrap;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1set_1pixels_1inside_1wrap
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _pixelsInsideWrap
)
{
	GtkTextAttributes* self;
	gint pixelsInsideWrap;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// convert parameter pixelsInsideWrap
	pixelsInsideWrap = (gint) _pixelsInsideWrap;

	// set field value
	self->pixels_inside_wrap = pixelsInsideWrap;

	// cleanup parameter self

	// cleanup parameter pixelsInsideWrap
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1get_1tabs
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoTabArray* result;
	jlong _result;
	GtkTextAttributes* self;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// get field value
	result = self->tabs;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1set_1tabs
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _tabs
)
{
	GtkTextAttributes* self;
	PangoTabArray* tabs;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// convert parameter tabs
	tabs = (PangoTabArray*) _tabs;

	// set field value
	self->tabs = tabs;

	// cleanup parameter self

	// cleanup parameter tabs
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1get_1wrap_1mode
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWrapMode result;
	jint _result;
	GtkTextAttributes* self;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// get field value
	result = self->wrap_mode;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1set_1wrap_1mode
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _wrapMode
)
{
	GtkTextAttributes* self;
	GtkWrapMode wrapMode;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// convert parameter wrapMode
	wrapMode = (GtkWrapMode) _wrapMode;

	// set field value
	self->wrap_mode = wrapMode;

	// cleanup parameter self

	// cleanup parameter wrapMode
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1get_1language
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoLanguage* result;
	jlong _result;
	GtkTextAttributes* self;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// get field value
	result = self->language;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1set_1language
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _language
)
{
	GtkTextAttributes* self;
	PangoLanguage* language;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// convert parameter language
	language = (PangoLanguage*) _language;

	// set field value
	self->language = language;

	// cleanup parameter self

	// cleanup parameter language
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1get_1invisible
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GtkTextAttributes* self;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// get field value
	result = self->invisible;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1set_1invisible
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _invisible
)
{
	GtkTextAttributes* self;
	guint invisible;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// convert parameter invisible
	invisible = (guint) _invisible;

	// set field value
	self->invisible = invisible;

	// cleanup parameter self

	// cleanup parameter invisible
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1get_1bg_1full_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GtkTextAttributes* self;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// get field value
	result = self->bg_full_height;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1set_1bg_1full_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _bgFullHeight
)
{
	GtkTextAttributes* self;
	guint bgFullHeight;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// convert parameter bgFullHeight
	bgFullHeight = (guint) _bgFullHeight;

	// set field value
	self->bg_full_height = bgFullHeight;

	// cleanup parameter self

	// cleanup parameter bgFullHeight
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1get_1editable
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GtkTextAttributes* self;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// get field value
	result = self->editable;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1set_1editable
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _editable
)
{
	GtkTextAttributes* self;
	guint editable;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// convert parameter editable
	editable = (guint) _editable;

	// set field value
	self->editable = editable;

	// cleanup parameter self

	// cleanup parameter editable
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1get_1no_1fallback
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GtkTextAttributes* self;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// get field value
	result = self->no_fallback;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1set_1no_1fallback
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _noFallback
)
{
	GtkTextAttributes* self;
	guint noFallback;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// convert parameter noFallback
	noFallback = (guint) _noFallback;

	// set field value
	self->no_fallback = noFallback;

	// cleanup parameter self

	// cleanup parameter noFallback
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1get_1pg_1bg_1rgba
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkRGBA* result;
	jlong _result;
	GtkTextAttributes* self;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// get field value
	result = self->pg_bg_rgba;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1get_1letter_1spacing
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkTextAttributes* self;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// get field value
	result = self->letter_spacing;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1set_1letter_1spacing
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _letterSpacing
)
{
	GtkTextAttributes* self;
	gint letterSpacing;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// convert parameter letterSpacing
	letterSpacing = (gint) _letterSpacing;

	// set field value
	self->letter_spacing = letterSpacing;

	// cleanup parameter self

	// cleanup parameter letterSpacing
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkTextAttributes* result;
	jlong _result;

	// call function
	result = gtk_text_attributes_new();

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1copy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTextAttributes* result;
	jlong _result;
	GtkTextAttributes* self;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// call function
	result = gtk_text_attributes_copy(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1copy_1values
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _dest
)
{
	GtkTextAttributes* self;
	GtkTextAttributes* dest;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// convert parameter dest
	dest = (GtkTextAttributes*) _dest;

	// call function
	gtk_text_attributes_copy_values(self, dest);

	// cleanup parameter self

	// cleanup parameter dest
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1ref
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTextAttributes* result;
	jlong _result;
	GtkTextAttributes* self;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// call function
	result = gtk_text_attributes_ref(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextAttributes_gtk_1text_1attributes_1unref
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTextAttributes* self;

	// convert parameter self
	self = (GtkTextAttributes*) _self;

	// call function
	gtk_text_attributes_unref(self);

	// cleanup parameter self
}
