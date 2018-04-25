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
#include "org_gnome_pango_PangoRenderer.h"

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoRenderer_pango_1renderer_1activate
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoRenderer* self;

	// convert parameter self
	self = (PangoRenderer*) _self;

	// call function
	pango_renderer_activate(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoRenderer_pango_1renderer_1deactivate
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoRenderer* self;

	// convert parameter self
	self = (PangoRenderer*) _self;

	// call function
	pango_renderer_deactivate(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoRenderer_pango_1renderer_1draw_1error_1underline
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _x,
	jint _y,
	jint _width,
	jint _height
)
{
	PangoRenderer* self;
	int x;
	int y;
	int width;
	int height;

	// convert parameter self
	self = (PangoRenderer*) _self;

	// convert parameter x
	x = (int) _x;

	// convert parameter y
	y = (int) _y;

	// convert parameter width
	width = (int) _width;

	// convert parameter height
	height = (int) _height;

	// call function
	pango_renderer_draw_error_underline(self, x, y, width, height);

	// cleanup parameter self

	// cleanup parameter x

	// cleanup parameter y

	// cleanup parameter width

	// cleanup parameter height
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoRenderer_pango_1renderer_1draw_1glyphs
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _font,
	jlong _glyphs,
	jint _x,
	jint _y
)
{
	PangoRenderer* self;
	PangoFont* font;
	PangoGlyphString* glyphs;
	int x;
	int y;

	// convert parameter self
	self = (PangoRenderer*) _self;

	// convert parameter font
	font = (PangoFont*) _font;

	// convert parameter glyphs
	glyphs = (PangoGlyphString*) _glyphs;

	// convert parameter x
	x = (int) _x;

	// convert parameter y
	y = (int) _y;

	// call function
	pango_renderer_draw_glyphs(self, font, glyphs, x, y);

	// cleanup parameter self

	// cleanup parameter font

	// cleanup parameter glyphs

	// cleanup parameter x

	// cleanup parameter y
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoRenderer_pango_1renderer_1draw_1layout
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _layout,
	jint _x,
	jint _y
)
{
	PangoRenderer* self;
	PangoLayout* layout;
	int x;
	int y;

	// convert parameter self
	self = (PangoRenderer*) _self;

	// convert parameter layout
	layout = (PangoLayout*) _layout;

	// convert parameter x
	x = (int) _x;

	// convert parameter y
	y = (int) _y;

	// call function
	pango_renderer_draw_layout(self, layout, x, y);

	// cleanup parameter self

	// cleanup parameter layout

	// cleanup parameter x

	// cleanup parameter y
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoRenderer_pango_1renderer_1draw_1layout_1line
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _line,
	jint _x,
	jint _y
)
{
	PangoRenderer* self;
	PangoLayoutLine* line;
	int x;
	int y;

	// convert parameter self
	self = (PangoRenderer*) _self;

	// convert parameter line
	line = (PangoLayoutLine*) _line;

	// convert parameter x
	x = (int) _x;

	// convert parameter y
	y = (int) _y;

	// call function
	pango_renderer_draw_layout_line(self, line, x, y);

	// cleanup parameter self

	// cleanup parameter line

	// cleanup parameter x

	// cleanup parameter y
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoRenderer_pango_1renderer_1draw_1rectangle
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _part,
	jint _x,
	jint _y,
	jint _width,
	jint _height
)
{
	PangoRenderer* self;
	PangoRenderPart part;
	int x;
	int y;
	int width;
	int height;

	// convert parameter self
	self = (PangoRenderer*) _self;

	// convert parameter part
	part = (PangoRenderPart) _part;

	// convert parameter x
	x = (int) _x;

	// convert parameter y
	y = (int) _y;

	// convert parameter width
	width = (int) _width;

	// convert parameter height
	height = (int) _height;

	// call function
	pango_renderer_draw_rectangle(self, part, x, y, width, height);

	// cleanup parameter self

	// cleanup parameter part

	// cleanup parameter x

	// cleanup parameter y

	// cleanup parameter width

	// cleanup parameter height
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoRenderer_pango_1renderer_1draw_1trapezoid
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _part,
	jdouble _y1,
	jdouble _x11,
	jdouble _x21,
	jdouble _y2,
	jdouble _x12,
	jdouble _x22
)
{
	PangoRenderer* self;
	PangoRenderPart part;
	double y1;
	double x11;
	double x21;
	double y2;
	double x12;
	double x22;

	// convert parameter self
	self = (PangoRenderer*) _self;

	// convert parameter part
	part = (PangoRenderPart) _part;

	// convert parameter y1
	y1 = (double) _y1;

	// convert parameter x11
	x11 = (double) _x11;

	// convert parameter x21
	x21 = (double) _x21;

	// convert parameter y2
	y2 = (double) _y2;

	// convert parameter x12
	x12 = (double) _x12;

	// convert parameter x22
	x22 = (double) _x22;

	// call function
	pango_renderer_draw_trapezoid(self, part, y1, x11, x21, y2, x12, x22);

	// cleanup parameter self

	// cleanup parameter part

	// cleanup parameter y1

	// cleanup parameter x11

	// cleanup parameter x21

	// cleanup parameter y2

	// cleanup parameter x12

	// cleanup parameter x22
}

JNIEXPORT jchar JNICALL
Java_org_gnome_pango_PangoRenderer_pango_1renderer_1get_1alpha
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _part
)
{
	guint16 result;
	jchar _result;
	PangoRenderer* self;
	PangoRenderPart part;

	// convert parameter self
	self = (PangoRenderer*) _self;

	// convert parameter part
	part = (PangoRenderPart) _part;

	// call function
	result = pango_renderer_get_alpha(self, part);

	// cleanup parameter self

	// cleanup parameter part

	// translate return value to JNI type
	_result = (jchar) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoRenderer_pango_1renderer_1get_1color
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _part
)
{
	PangoColor* result;
	jlong _result;
	PangoRenderer* self;
	PangoRenderPart part;

	// convert parameter self
	self = (PangoRenderer*) _self;

	// convert parameter part
	part = (PangoRenderPart) _part;

	// call function
	result = pango_renderer_get_color(self, part);

	// cleanup parameter self

	// cleanup parameter part

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoRenderer_pango_1renderer_1get_1layout
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoLayout* result;
	jlong _result;
	PangoRenderer* self;

	// convert parameter self
	self = (PangoRenderer*) _self;

	// call function
	result = pango_renderer_get_layout(self);

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

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoRenderer_pango_1renderer_1get_1layout_1line
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoLayoutLine* result;
	jlong _result;
	PangoRenderer* self;

	// convert parameter self
	self = (PangoRenderer*) _self;

	// call function
	result = pango_renderer_get_layout_line(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoRenderer_pango_1renderer_1get_1matrix
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const PangoMatrix* result;
	jlong _result;
	PangoRenderer* self;

	// convert parameter self
	self = (PangoRenderer*) _self;

	// call function
	result = pango_renderer_get_matrix(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoRenderer_pango_1renderer_1part_1changed
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _part
)
{
	PangoRenderer* self;
	PangoRenderPart part;

	// convert parameter self
	self = (PangoRenderer*) _self;

	// convert parameter part
	part = (PangoRenderPart) _part;

	// call function
	pango_renderer_part_changed(self, part);

	// cleanup parameter self

	// cleanup parameter part
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoRenderer_pango_1renderer_1set_1alpha
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _part,
	jchar _alpha
)
{
	PangoRenderer* self;
	PangoRenderPart part;
	guint16 alpha;

	// convert parameter self
	self = (PangoRenderer*) _self;

	// convert parameter part
	part = (PangoRenderPart) _part;

	// convert parameter alpha
	alpha = (guint16) _alpha;

	// call function
	pango_renderer_set_alpha(self, part, alpha);

	// cleanup parameter self

	// cleanup parameter part

	// cleanup parameter alpha
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoRenderer_pango_1renderer_1set_1color
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _part,
	jlong _color
)
{
	PangoRenderer* self;
	PangoRenderPart part;
	const PangoColor* color;

	// convert parameter self
	self = (PangoRenderer*) _self;

	// convert parameter part
	part = (PangoRenderPart) _part;

	// convert parameter color
	color = (const PangoColor*) _color;

	// call function
	pango_renderer_set_color(self, part, color);

	// cleanup parameter self

	// cleanup parameter part

	// cleanup parameter color
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoRenderer_pango_1renderer_1set_1matrix
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _matrix
)
{
	PangoRenderer* self;
	const PangoMatrix* matrix;

	// convert parameter self
	self = (PangoRenderer*) _self;

	// convert parameter matrix
	matrix = (const PangoMatrix*) _matrix;

	// call function
	pango_renderer_set_matrix(self, matrix);

	// cleanup parameter self

	// cleanup parameter matrix
}
