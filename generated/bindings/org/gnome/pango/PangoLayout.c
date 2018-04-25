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
#include "org_gnome_pango_PangoLayout.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1new
(
	JNIEnv* env,
	jclass cls,
	jlong _context
)
{
	PangoLayout* result;
	jlong _result;
	PangoContext* context;

	// convert parameter context
	context = (PangoContext*) _context;

	// call function
	result = pango_layout_new(context);

	// cleanup parameter context

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
Java_org_gnome_pango_PangoLayout_pango_1layout_1context_1changed
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoLayout* self;

	// convert parameter self
	self = (PangoLayout*) _self;

	// call function
	pango_layout_context_changed(self);

	// cleanup parameter self
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1copy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoLayout* result;
	jlong _result;
	PangoLayout* self;

	// convert parameter self
	self = (PangoLayout*) _self;

	// call function
	result = pango_layout_copy(self);

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
Java_org_gnome_pango_PangoLayout_pango_1layout_1get_1alignment
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoAlignment result;
	jint _result;
	PangoLayout* self;

	// convert parameter self
	self = (PangoLayout*) _self;

	// call function
	result = pango_layout_get_alignment(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1get_1attributes
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoAttrList* result;
	jlong _result;
	PangoLayout* self;

	// convert parameter self
	self = (PangoLayout*) _self;

	// call function
	result = pango_layout_get_attributes(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1get_1auto_1dir
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	PangoLayout* self;

	// convert parameter self
	self = (PangoLayout*) _self;

	// call function
	result = pango_layout_get_auto_dir(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1get_1baseline
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	PangoLayout* self;

	// convert parameter self
	self = (PangoLayout*) _self;

	// call function
	result = pango_layout_get_baseline(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1get_1character_1count
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	PangoLayout* self;

	// convert parameter self
	self = (PangoLayout*) _self;

	// call function
	result = pango_layout_get_character_count(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1get_1context
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoContext* result;
	jlong _result;
	PangoLayout* self;

	// convert parameter self
	self = (PangoLayout*) _self;

	// call function
	result = pango_layout_get_context(self);

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
Java_org_gnome_pango_PangoLayout_pango_1layout_1get_1cursor_1pos
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _index,
	jlong _strongPos,
	jlong _weakPos
)
{
	PangoLayout* self;
	int index;
	PangoRectangle* strongPos;
	PangoRectangle* weakPos;

	// convert parameter self
	self = (PangoLayout*) _self;

	// convert parameter index
	index = (int) _index;

	// convert parameter strongPos
	strongPos = (PangoRectangle*) _strongPos;

	// convert parameter weakPos
	weakPos = (PangoRectangle*) _weakPos;

	// call function
	pango_layout_get_cursor_pos(self, index, strongPos, weakPos);

	// cleanup parameter self

	// cleanup parameter index

	// cleanup parameter strongPos

	// cleanup parameter weakPos
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1get_1ellipsize
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoEllipsizeMode result;
	jint _result;
	PangoLayout* self;

	// convert parameter self
	self = (PangoLayout*) _self;

	// call function
	result = pango_layout_get_ellipsize(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1get_1extents
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _inkRect,
	jlong _logicalRect
)
{
	PangoLayout* self;
	PangoRectangle* inkRect;
	PangoRectangle* logicalRect;

	// convert parameter self
	self = (PangoLayout*) _self;

	// convert parameter inkRect
	inkRect = (PangoRectangle*) _inkRect;

	// convert parameter logicalRect
	logicalRect = (PangoRectangle*) _logicalRect;

	// call function
	pango_layout_get_extents(self, inkRect, logicalRect);

	// cleanup parameter self

	// cleanup parameter inkRect

	// cleanup parameter logicalRect
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1get_1font_1description
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const PangoFontDescription* result;
	jlong _result;
	PangoLayout* self;

	// convert parameter self
	self = (PangoLayout*) _self;

	// call function
	result = pango_layout_get_font_description(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1get_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	PangoLayout* self;

	// convert parameter self
	self = (PangoLayout*) _self;

	// call function
	result = pango_layout_get_height(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1get_1indent
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	PangoLayout* self;

	// convert parameter self
	self = (PangoLayout*) _self;

	// call function
	result = pango_layout_get_indent(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1get_1iter
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoLayoutIter* result;
	jlong _result;
	PangoLayout* self;

	// convert parameter self
	self = (PangoLayout*) _self;

	// call function
	result = pango_layout_get_iter(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1get_1justify
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	PangoLayout* self;

	// convert parameter self
	self = (PangoLayout*) _self;

	// call function
	result = pango_layout_get_justify(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1get_1line
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _line
)
{
	PangoLayoutLine* result;
	jlong _result;
	PangoLayout* self;
	int line;

	// convert parameter self
	self = (PangoLayout*) _self;

	// convert parameter line
	line = (int) _line;

	// call function
	result = pango_layout_get_line(self, line);

	// cleanup parameter self

	// cleanup parameter line

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1get_1line_1count
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	PangoLayout* self;

	// convert parameter self
	self = (PangoLayout*) _self;

	// call function
	result = pango_layout_get_line_count(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1get_1line_1readonly
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _line
)
{
	PangoLayoutLine* result;
	jlong _result;
	PangoLayout* self;
	int line;

	// convert parameter self
	self = (PangoLayout*) _self;

	// convert parameter line
	line = (int) _line;

	// call function
	result = pango_layout_get_line_readonly(self, line);

	// cleanup parameter self

	// cleanup parameter line

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlongArray JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1get_1lines
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GSList* result;
	jlongArray _result;
	PangoLayout* self;

	// convert parameter self
	self = (PangoLayout*) _self;

	// call function
	result = pango_layout_get_lines(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlongArray) bindings_java_convert_gslist_to_jarray(env, result);

	// and finally
	return _result;
}

JNIEXPORT jlongArray JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1get_1lines_1readonly
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GSList* result;
	jlongArray _result;
	PangoLayout* self;

	// convert parameter self
	self = (PangoLayout*) _self;

	// call function
	result = pango_layout_get_lines_readonly(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlongArray) bindings_java_convert_gslist_to_jarray(env, result);

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1get_1pixel_1extents
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _inkRect,
	jlong _logicalRect
)
{
	PangoLayout* self;
	PangoRectangle* inkRect;
	PangoRectangle* logicalRect;

	// convert parameter self
	self = (PangoLayout*) _self;

	// convert parameter inkRect
	inkRect = (PangoRectangle*) _inkRect;

	// convert parameter logicalRect
	logicalRect = (PangoRectangle*) _logicalRect;

	// call function
	pango_layout_get_pixel_extents(self, inkRect, logicalRect);

	// cleanup parameter self

	// cleanup parameter inkRect

	// cleanup parameter logicalRect
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1get_1pixel_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _width,
	jintArray _height
)
{
	PangoLayout* self;
	int* width;
	int* height;

	// convert parameter self
	self = (PangoLayout*) _self;

	// convert parameter width
	if (_width == NULL) {
		width = NULL;
	} else {
		width = (int*) (*env)->GetIntArrayElements(env, _width, NULL);
		if (width == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter height
	if (_height == NULL) {
		height = NULL;
	} else {
		height = (int*) (*env)->GetIntArrayElements(env, _height, NULL);
		if (height == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	pango_layout_get_pixel_size(self, width, height);

	// cleanup parameter self

	// cleanup parameter width
	if (width != NULL) {
		(*env)->ReleaseIntArrayElements(env, _width, (jint*)width, 0);
	}

	// cleanup parameter height
	if (height != NULL) {
		(*env)->ReleaseIntArrayElements(env, _height, (jint*)height, 0);
	}
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1get_1serial
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	PangoLayout* self;

	// convert parameter self
	self = (PangoLayout*) _self;

	// call function
	result = pango_layout_get_serial(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1get_1single_1paragraph_1mode
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	PangoLayout* self;

	// convert parameter self
	self = (PangoLayout*) _self;

	// call function
	result = pango_layout_get_single_paragraph_mode(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1get_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _width,
	jintArray _height
)
{
	PangoLayout* self;
	int* width;
	int* height;

	// convert parameter self
	self = (PangoLayout*) _self;

	// convert parameter width
	if (_width == NULL) {
		width = NULL;
	} else {
		width = (int*) (*env)->GetIntArrayElements(env, _width, NULL);
		if (width == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter height
	if (_height == NULL) {
		height = NULL;
	} else {
		height = (int*) (*env)->GetIntArrayElements(env, _height, NULL);
		if (height == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	pango_layout_get_size(self, width, height);

	// cleanup parameter self

	// cleanup parameter width
	if (width != NULL) {
		(*env)->ReleaseIntArrayElements(env, _width, (jint*)width, 0);
	}

	// cleanup parameter height
	if (height != NULL) {
		(*env)->ReleaseIntArrayElements(env, _height, (jint*)height, 0);
	}
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1get_1spacing
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	PangoLayout* self;

	// convert parameter self
	self = (PangoLayout*) _self;

	// call function
	result = pango_layout_get_spacing(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1get_1tabs
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoTabArray* result;
	jlong _result;
	PangoLayout* self;

	// convert parameter self
	self = (PangoLayout*) _self;

	// call function
	result = pango_layout_get_tabs(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1get_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const char* result;
	jstring _result;
	PangoLayout* self;

	// convert parameter self
	self = (PangoLayout*) _self;

	// call function
	result = pango_layout_get_text(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1get_1unknown_1glyphs_1count
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	PangoLayout* self;

	// convert parameter self
	self = (PangoLayout*) _self;

	// call function
	result = pango_layout_get_unknown_glyphs_count(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1get_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	PangoLayout* self;

	// convert parameter self
	self = (PangoLayout*) _self;

	// call function
	result = pango_layout_get_width(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1get_1wrap
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoWrapMode result;
	jint _result;
	PangoLayout* self;

	// convert parameter self
	self = (PangoLayout*) _self;

	// call function
	result = pango_layout_get_wrap(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1index_1to_1line_1x
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _index,
	jboolean _trailing,
	jintArray _line,
	jintArray _xPos
)
{
	PangoLayout* self;
	int index;
	gboolean trailing;
	int* line;
	int* xPos;

	// convert parameter self
	self = (PangoLayout*) _self;

	// convert parameter index
	index = (int) _index;

	// convert parameter trailing
	trailing = (gboolean) _trailing;

	// convert parameter line
	if (_line == NULL) {
		line = NULL;
	} else {
		line = (int*) (*env)->GetIntArrayElements(env, _line, NULL);
		if (line == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter xPos
	if (_xPos == NULL) {
		xPos = NULL;
	} else {
		xPos = (int*) (*env)->GetIntArrayElements(env, _xPos, NULL);
		if (xPos == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	pango_layout_index_to_line_x(self, index, trailing, line, xPos);

	// cleanup parameter self

	// cleanup parameter index

	// cleanup parameter trailing

	// cleanup parameter line
	if (line != NULL) {
		(*env)->ReleaseIntArrayElements(env, _line, (jint*)line, 0);
	}

	// cleanup parameter xPos
	if (xPos != NULL) {
		(*env)->ReleaseIntArrayElements(env, _xPos, (jint*)xPos, 0);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1index_1to_1pos
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _index,
	jlong _pos
)
{
	PangoLayout* self;
	int index;
	PangoRectangle* pos;

	// convert parameter self
	self = (PangoLayout*) _self;

	// convert parameter index
	index = (int) _index;

	// convert parameter pos
	pos = (PangoRectangle*) _pos;

	// call function
	pango_layout_index_to_pos(self, index, pos);

	// cleanup parameter self

	// cleanup parameter index

	// cleanup parameter pos
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1is_1ellipsized
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	PangoLayout* self;

	// convert parameter self
	self = (PangoLayout*) _self;

	// call function
	result = pango_layout_is_ellipsized(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1is_1wrapped
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	PangoLayout* self;

	// convert parameter self
	self = (PangoLayout*) _self;

	// call function
	result = pango_layout_is_wrapped(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1move_1cursor_1visually
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _strong,
	jint _oldIndex,
	jint _oldTrailing,
	jint _direction,
	jintArray _newIndex,
	jintArray _newTrailing
)
{
	PangoLayout* self;
	gboolean strong;
	int oldIndex;
	int oldTrailing;
	int direction;
	int* newIndex;
	int* newTrailing;

	// convert parameter self
	self = (PangoLayout*) _self;

	// convert parameter strong
	strong = (gboolean) _strong;

	// convert parameter oldIndex
	oldIndex = (int) _oldIndex;

	// convert parameter oldTrailing
	oldTrailing = (int) _oldTrailing;

	// convert parameter direction
	direction = (int) _direction;

	// convert parameter newIndex
	if (_newIndex == NULL) {
		newIndex = NULL;
	} else {
		newIndex = (int*) (*env)->GetIntArrayElements(env, _newIndex, NULL);
		if (newIndex == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter newTrailing
	if (_newTrailing == NULL) {
		newTrailing = NULL;
	} else {
		newTrailing = (int*) (*env)->GetIntArrayElements(env, _newTrailing, NULL);
		if (newTrailing == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	pango_layout_move_cursor_visually(self, strong, oldIndex, oldTrailing, direction, newIndex, newTrailing);

	// cleanup parameter self

	// cleanup parameter strong

	// cleanup parameter oldIndex

	// cleanup parameter oldTrailing

	// cleanup parameter direction

	// cleanup parameter newIndex
	if (newIndex != NULL) {
		(*env)->ReleaseIntArrayElements(env, _newIndex, (jint*)newIndex, 0);
	}

	// cleanup parameter newTrailing
	if (newTrailing != NULL) {
		(*env)->ReleaseIntArrayElements(env, _newTrailing, (jint*)newTrailing, 0);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1set_1alignment
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _alignment
)
{
	PangoLayout* self;
	PangoAlignment alignment;

	// convert parameter self
	self = (PangoLayout*) _self;

	// convert parameter alignment
	alignment = (PangoAlignment) _alignment;

	// call function
	pango_layout_set_alignment(self, alignment);

	// cleanup parameter self

	// cleanup parameter alignment
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1set_1attributes
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _attrs
)
{
	PangoLayout* self;
	PangoAttrList* attrs;

	// convert parameter self
	self = (PangoLayout*) _self;

	// convert parameter attrs
	attrs = (PangoAttrList*) _attrs;

	// call function
	pango_layout_set_attributes(self, attrs);

	// cleanup parameter self

	// cleanup parameter attrs
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1set_1auto_1dir
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _autoDir
)
{
	PangoLayout* self;
	gboolean autoDir;

	// convert parameter self
	self = (PangoLayout*) _self;

	// convert parameter autoDir
	autoDir = (gboolean) _autoDir;

	// call function
	pango_layout_set_auto_dir(self, autoDir);

	// cleanup parameter self

	// cleanup parameter autoDir
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1set_1ellipsize
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _ellipsize
)
{
	PangoLayout* self;
	PangoEllipsizeMode ellipsize;

	// convert parameter self
	self = (PangoLayout*) _self;

	// convert parameter ellipsize
	ellipsize = (PangoEllipsizeMode) _ellipsize;

	// call function
	pango_layout_set_ellipsize(self, ellipsize);

	// cleanup parameter self

	// cleanup parameter ellipsize
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1set_1font_1description
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _desc
)
{
	PangoLayout* self;
	const PangoFontDescription* desc;

	// convert parameter self
	self = (PangoLayout*) _self;

	// convert parameter desc
	desc = (const PangoFontDescription*) _desc;

	// call function
	pango_layout_set_font_description(self, desc);

	// cleanup parameter self

	// cleanup parameter desc
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1set_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _height
)
{
	PangoLayout* self;
	int height;

	// convert parameter self
	self = (PangoLayout*) _self;

	// convert parameter height
	height = (int) _height;

	// call function
	pango_layout_set_height(self, height);

	// cleanup parameter self

	// cleanup parameter height
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1set_1indent
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _indent
)
{
	PangoLayout* self;
	int indent;

	// convert parameter self
	self = (PangoLayout*) _self;

	// convert parameter indent
	indent = (int) _indent;

	// call function
	pango_layout_set_indent(self, indent);

	// cleanup parameter self

	// cleanup parameter indent
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1set_1justify
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _justify
)
{
	PangoLayout* self;
	gboolean justify;

	// convert parameter self
	self = (PangoLayout*) _self;

	// convert parameter justify
	justify = (gboolean) _justify;

	// call function
	pango_layout_set_justify(self, justify);

	// cleanup parameter self

	// cleanup parameter justify
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1set_1markup
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _markup,
	jint _length
)
{
	PangoLayout* self;
	const char* markup;
	int length;

	// convert parameter self
	self = (PangoLayout*) _self;

	// convert parameter markup
	markup = (const char*) bindings_java_getString(env, _markup);
	if (markup == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter length
	length = (int) _length;

	// call function
	pango_layout_set_markup(self, markup, length);

	// cleanup parameter self

	// cleanup parameter markup
	bindings_java_releaseString(markup);

	// cleanup parameter length
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1set_1single_1paragraph_1mode
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	PangoLayout* self;
	gboolean setting;

	// convert parameter self
	self = (PangoLayout*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	pango_layout_set_single_paragraph_mode(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1set_1spacing
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _spacing
)
{
	PangoLayout* self;
	int spacing;

	// convert parameter self
	self = (PangoLayout*) _self;

	// convert parameter spacing
	spacing = (int) _spacing;

	// call function
	pango_layout_set_spacing(self, spacing);

	// cleanup parameter self

	// cleanup parameter spacing
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1set_1tabs
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _tabs
)
{
	PangoLayout* self;
	PangoTabArray* tabs;

	// convert parameter self
	self = (PangoLayout*) _self;

	// convert parameter tabs
	tabs = (PangoTabArray*) _tabs;

	// call function
	pango_layout_set_tabs(self, tabs);

	// cleanup parameter self

	// cleanup parameter tabs
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1set_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _text,
	jint _length
)
{
	PangoLayout* self;
	const char* text;
	int length;

	// convert parameter self
	self = (PangoLayout*) _self;

	// convert parameter text
	text = (const char*) bindings_java_getString(env, _text);
	if (text == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter length
	length = (int) _length;

	// call function
	pango_layout_set_text(self, text, length);

	// cleanup parameter self

	// cleanup parameter text
	bindings_java_releaseString(text);

	// cleanup parameter length
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1set_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _width
)
{
	PangoLayout* self;
	int width;

	// convert parameter self
	self = (PangoLayout*) _self;

	// convert parameter width
	width = (int) _width;

	// call function
	pango_layout_set_width(self, width);

	// cleanup parameter self

	// cleanup parameter width
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1set_1wrap
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _wrap
)
{
	PangoLayout* self;
	PangoWrapMode wrap;

	// convert parameter self
	self = (PangoLayout*) _self;

	// convert parameter wrap
	wrap = (PangoWrapMode) _wrap;

	// call function
	pango_layout_set_wrap(self, wrap);

	// cleanup parameter self

	// cleanup parameter wrap
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_pango_PangoLayout_pango_1layout_1xy_1to_1index
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _x,
	jint _y,
	jintArray _index,
	jintArray _trailing
)
{
	gboolean result;
	jboolean _result;
	PangoLayout* self;
	int x;
	int y;
	int* index;
	int* trailing;

	// convert parameter self
	self = (PangoLayout*) _self;

	// convert parameter x
	x = (int) _x;

	// convert parameter y
	y = (int) _y;

	// convert parameter index
	if (_index == NULL) {
		index = NULL;
	} else {
		index = (int*) (*env)->GetIntArrayElements(env, _index, NULL);
		if (index == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter trailing
	if (_trailing == NULL) {
		trailing = NULL;
	} else {
		trailing = (int*) (*env)->GetIntArrayElements(env, _trailing, NULL);
		if (trailing == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = pango_layout_xy_to_index(self, x, y, index, trailing);

	// cleanup parameter self

	// cleanup parameter x

	// cleanup parameter y

	// cleanup parameter index
	if (index != NULL) {
		(*env)->ReleaseIntArrayElements(env, _index, (jint*)index, 0);
	}

	// cleanup parameter trailing
	if (trailing != NULL) {
		(*env)->ReleaseIntArrayElements(env, _trailing, (jint*)trailing, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoLayout_pango_1cairo_1create_1layout
(
	JNIEnv* env,
	jclass cls,
	jlong _context
)
{
	PangoLayout* result;
	jlong _result;
	cairo_t* context;

	// convert parameter context
	context = (cairo_t*) _context;

	// call function
	result = pango_cairo_create_layout(context);

	// cleanup parameter context

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}
