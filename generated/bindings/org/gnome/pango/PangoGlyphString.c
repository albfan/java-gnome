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
#include "org_gnome_pango_PangoGlyphString.h"

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoGlyphString_pango_1glyph_1string_1get_1num_1glyphs
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	PangoGlyphString* self;

	// convert parameter self
	self = (PangoGlyphString*) _self;

	// get field value
	result = self->num_glyphs;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoGlyphString_pango_1glyph_1string_1set_1num_1glyphs
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _numGlyphs
)
{
	PangoGlyphString* self;
	gint numGlyphs;

	// convert parameter self
	self = (PangoGlyphString*) _self;

	// convert parameter numGlyphs
	numGlyphs = (gint) _numGlyphs;

	// set field value
	self->num_glyphs = numGlyphs;

	// cleanup parameter self

	// cleanup parameter numGlyphs
}

JNIEXPORT jintArray JNICALL
Java_org_gnome_pango_PangoGlyphString_pango_1glyph_1string_1get_1log_1clusters
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint* result;
	jintArray _result;
	PangoGlyphString* self;

	// convert parameter self
	self = (PangoGlyphString*) _self;

	// get field value
	result = self->log_clusters;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jintArray) NULL;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoGlyphString_pango_1glyph_1string_1set_1log_1clusters
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _logClusters
)
{
	PangoGlyphString* self;
	gint* logClusters;

	// convert parameter self
	self = (PangoGlyphString*) _self;

	// convert parameter logClusters
	logClusters = (gint*) (*env)->GetIntArrayElements(env, _logClusters, NULL);
	if (logClusters == NULL) {
		return; // Java Exception already thrown
	}

	// set field value
	self->log_clusters = logClusters;

	// cleanup parameter self

	// cleanup parameter logClusters
	(*env)->ReleaseIntArrayElements(env, _logClusters, (jint*)logClusters, 0);
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoGlyphString_pango_1glyph_1string_1get_1space
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	PangoGlyphString* self;

	// convert parameter self
	self = (PangoGlyphString*) _self;

	// get field value
	result = self->space;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoGlyphString_pango_1glyph_1string_1new
(
	JNIEnv* env,
	jclass cls
)
{
	PangoGlyphString* result;
	jlong _result;

	// call function
	result = pango_glyph_string_new();

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoGlyphString_pango_1glyph_1string_1copy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoGlyphString* result;
	jlong _result;
	PangoGlyphString* self;

	// convert parameter self
	self = (PangoGlyphString*) _self;

	// call function
	result = pango_glyph_string_copy(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoGlyphString_pango_1glyph_1string_1extents
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _font,
	jlong _inkRect,
	jlong _logicalRect
)
{
	PangoGlyphString* self;
	PangoFont* font;
	PangoRectangle* inkRect;
	PangoRectangle* logicalRect;

	// convert parameter self
	self = (PangoGlyphString*) _self;

	// convert parameter font
	font = (PangoFont*) _font;

	// convert parameter inkRect
	inkRect = (PangoRectangle*) _inkRect;

	// convert parameter logicalRect
	logicalRect = (PangoRectangle*) _logicalRect;

	// call function
	pango_glyph_string_extents(self, font, inkRect, logicalRect);

	// cleanup parameter self

	// cleanup parameter font

	// cleanup parameter inkRect

	// cleanup parameter logicalRect
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoGlyphString_pango_1glyph_1string_1extents_1range
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _start,
	jint _end,
	jlong _font,
	jlong _inkRect,
	jlong _logicalRect
)
{
	PangoGlyphString* self;
	int start;
	int end;
	PangoFont* font;
	PangoRectangle* inkRect;
	PangoRectangle* logicalRect;

	// convert parameter self
	self = (PangoGlyphString*) _self;

	// convert parameter start
	start = (int) _start;

	// convert parameter end
	end = (int) _end;

	// convert parameter font
	font = (PangoFont*) _font;

	// convert parameter inkRect
	inkRect = (PangoRectangle*) _inkRect;

	// convert parameter logicalRect
	logicalRect = (PangoRectangle*) _logicalRect;

	// call function
	pango_glyph_string_extents_range(self, start, end, font, inkRect, logicalRect);

	// cleanup parameter self

	// cleanup parameter start

	// cleanup parameter end

	// cleanup parameter font

	// cleanup parameter inkRect

	// cleanup parameter logicalRect
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoGlyphString_pango_1glyph_1string_1free
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoGlyphString* self;

	// convert parameter self
	self = (PangoGlyphString*) _self;

	// call function
	pango_glyph_string_free(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoGlyphString_pango_1glyph_1string_1get_1logical_1widths
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _text,
	jint _length,
	jint _embeddingLevel,
	jintArray _logicalWidths
)
{
	PangoGlyphString* self;
	const char* text;
	int length;
	int embeddingLevel;
	int* logicalWidths;

	// convert parameter self
	self = (PangoGlyphString*) _self;

	// convert parameter text
	text = (const char*) bindings_java_getString(env, _text);
	if (text == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter length
	length = (int) _length;

	// convert parameter embeddingLevel
	embeddingLevel = (int) _embeddingLevel;

	// convert parameter logicalWidths
	logicalWidths = (int*) (*env)->GetIntArrayElements(env, _logicalWidths, NULL);
	if (logicalWidths == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	pango_glyph_string_get_logical_widths(self, text, length, embeddingLevel, logicalWidths);

	// cleanup parameter self

	// cleanup parameter text
	bindings_java_releaseString(text);

	// cleanup parameter length

	// cleanup parameter embeddingLevel

	// cleanup parameter logicalWidths
	(*env)->ReleaseIntArrayElements(env, _logicalWidths, (jint*)logicalWidths, 0);
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoGlyphString_pango_1glyph_1string_1get_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	PangoGlyphString* self;

	// convert parameter self
	self = (PangoGlyphString*) _self;

	// call function
	result = pango_glyph_string_get_width(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoGlyphString_pango_1glyph_1string_1index_1to_1x
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _text,
	jint _length,
	jlong _analysis,
	jint _index,
	jboolean _trailing,
	jintArray _xPos
)
{
	PangoGlyphString* self;
	char* text;
	int length;
	PangoAnalysis* analysis;
	int index;
	gboolean trailing;
	int* xPos;

	// convert parameter self
	self = (PangoGlyphString*) _self;

	// convert parameter text
	text = (char*) bindings_java_getString(env, _text);
	if (text == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter length
	length = (int) _length;

	// convert parameter analysis
	analysis = (PangoAnalysis*) _analysis;

	// convert parameter index
	index = (int) _index;

	// convert parameter trailing
	trailing = (gboolean) _trailing;

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
	pango_glyph_string_index_to_x(self, text, length, analysis, index, trailing, xPos);

	// cleanup parameter self

	// cleanup parameter text
	bindings_java_releaseString(text);

	// cleanup parameter length

	// cleanup parameter analysis

	// cleanup parameter index

	// cleanup parameter trailing

	// cleanup parameter xPos
	if (xPos != NULL) {
		(*env)->ReleaseIntArrayElements(env, _xPos, (jint*)xPos, 0);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoGlyphString_pango_1glyph_1string_1set_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _newLen
)
{
	PangoGlyphString* self;
	gint newLen;

	// convert parameter self
	self = (PangoGlyphString*) _self;

	// convert parameter newLen
	newLen = (gint) _newLen;

	// call function
	pango_glyph_string_set_size(self, newLen);

	// cleanup parameter self

	// cleanup parameter newLen
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoGlyphString_pango_1glyph_1string_1x_1to_1index
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _text,
	jint _length,
	jlong _analysis,
	jint _xPos,
	jintArray _index,
	jintArray _trailing
)
{
	PangoGlyphString* self;
	char* text;
	int length;
	PangoAnalysis* analysis;
	int xPos;
	int* index;
	int* trailing;

	// convert parameter self
	self = (PangoGlyphString*) _self;

	// convert parameter text
	text = (char*) bindings_java_getString(env, _text);
	if (text == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter length
	length = (int) _length;

	// convert parameter analysis
	analysis = (PangoAnalysis*) _analysis;

	// convert parameter xPos
	xPos = (int) _xPos;

	// convert parameter index
	if (_index == NULL) {
		index = NULL;
	} else {
		index = (int*) (*env)->GetIntArrayElements(env, _index, NULL);
		if (index == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter trailing
	if (_trailing == NULL) {
		trailing = NULL;
	} else {
		trailing = (int*) (*env)->GetIntArrayElements(env, _trailing, NULL);
		if (trailing == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	pango_glyph_string_x_to_index(self, text, length, analysis, xPos, index, trailing);

	// cleanup parameter self

	// cleanup parameter text
	bindings_java_releaseString(text);

	// cleanup parameter length

	// cleanup parameter analysis

	// cleanup parameter xPos

	// cleanup parameter index
	if (index != NULL) {
		(*env)->ReleaseIntArrayElements(env, _index, (jint*)index, 0);
	}

	// cleanup parameter trailing
	if (trailing != NULL) {
		(*env)->ReleaseIntArrayElements(env, _trailing, (jint*)trailing, 0);
	}
}
