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
#include "org_gnome_atk_AtkText.h"

JNIEXPORT jboolean JNICALL
Java_org_gnome_atk_AtkText_atk_1text_1add_1selection
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _startOffset,
	jint _endOffset
)
{
	gboolean result;
	jboolean _result;
	AtkText* self;
	gint startOffset;
	gint endOffset;

	// convert parameter self
	self = (AtkText*) _self;

	// convert parameter startOffset
	startOffset = (gint) _startOffset;

	// convert parameter endOffset
	endOffset = (gint) _endOffset;

	// call function
	result = atk_text_add_selection(self, startOffset, endOffset);

	// cleanup parameter self

	// cleanup parameter startOffset

	// cleanup parameter endOffset

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlongArray JNICALL
Java_org_gnome_atk_AtkText_atk_1text_1get_1bounded_1ranges
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _rect,
	jint _coordType,
	jint _xClipType,
	jint _yClipType
)
{
	AtkTextRange** result;
	jlongArray _result;
	AtkText* self;
	AtkTextRectangle* rect;
	AtkCoordType coordType;
	AtkTextClipType xClipType;
	AtkTextClipType yClipType;

	// convert parameter self
	self = (AtkText*) _self;

	// convert parameter rect
	rect = (AtkTextRectangle*) _rect;

	// convert parameter coordType
	coordType = (AtkCoordType) _coordType;

	// convert parameter xClipType
	xClipType = (AtkTextClipType) _xClipType;

	// convert parameter yClipType
	yClipType = (AtkTextClipType) _yClipType;

	// call function
	result = atk_text_get_bounded_ranges(self, rect, coordType, xClipType, yClipType);

	// cleanup parameter self

	// cleanup parameter rect

	// cleanup parameter coordType

	// cleanup parameter xClipType

	// cleanup parameter yClipType

	// translate return value to JNI type
	_result = (jlongArray) NULL;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_atk_AtkText_atk_1text_1get_1caret_1offset
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	AtkText* self;

	// convert parameter self
	self = (AtkText*) _self;

	// call function
	result = atk_text_get_caret_offset(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_atk_AtkText_atk_1text_1get_1character_1at_1offset
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _offset
)
{
	gunichar result;
	jint _result;
	AtkText* self;
	gint offset;

	// convert parameter self
	self = (AtkText*) _self;

	// convert parameter offset
	offset = (gint) _offset;

	// call function
	result = atk_text_get_character_at_offset(self, offset);

	// cleanup parameter self

	// cleanup parameter offset

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_atk_AtkText_atk_1text_1get_1character_1count
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	AtkText* self;

	// convert parameter self
	self = (AtkText*) _self;

	// call function
	result = atk_text_get_character_count(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_atk_AtkText_atk_1text_1get_1character_1extents
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _offset,
	jintArray _x,
	jintArray _y,
	jintArray _width,
	jintArray _height,
	jint _coords
)
{
	AtkText* self;
	gint offset;
	gint* x;
	gint* y;
	gint* width;
	gint* height;
	AtkCoordType coords;

	// convert parameter self
	self = (AtkText*) _self;

	// convert parameter offset
	offset = (gint) _offset;

	// convert parameter x
	if (_x == NULL) {
		x = NULL;
	} else {
		x = (gint*) (*env)->GetIntArrayElements(env, _x, NULL);
		if (x == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter y
	if (_y == NULL) {
		y = NULL;
	} else {
		y = (gint*) (*env)->GetIntArrayElements(env, _y, NULL);
		if (y == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter width
	if (_width == NULL) {
		width = NULL;
	} else {
		width = (gint*) (*env)->GetIntArrayElements(env, _width, NULL);
		if (width == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter height
	if (_height == NULL) {
		height = NULL;
	} else {
		height = (gint*) (*env)->GetIntArrayElements(env, _height, NULL);
		if (height == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter coords
	coords = (AtkCoordType) _coords;

	// call function
	atk_text_get_character_extents(self, offset, x, y, width, height, coords);

	// cleanup parameter self

	// cleanup parameter offset

	// cleanup parameter x
	if (x != NULL) {
		(*env)->ReleaseIntArrayElements(env, _x, (jint*)x, 0);
	}

	// cleanup parameter y
	if (y != NULL) {
		(*env)->ReleaseIntArrayElements(env, _y, (jint*)y, 0);
	}

	// cleanup parameter width
	if (width != NULL) {
		(*env)->ReleaseIntArrayElements(env, _width, (jint*)width, 0);
	}

	// cleanup parameter height
	if (height != NULL) {
		(*env)->ReleaseIntArrayElements(env, _height, (jint*)height, 0);
	}

	// cleanup parameter coords
}

JNIEXPORT jint JNICALL
Java_org_gnome_atk_AtkText_atk_1text_1get_1n_1selections
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	AtkText* self;

	// convert parameter self
	self = (AtkText*) _self;

	// call function
	result = atk_text_get_n_selections(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_atk_AtkText_atk_1text_1get_1offset_1at_1point
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _x,
	jint _y,
	jint _coords
)
{
	gint result;
	jint _result;
	AtkText* self;
	gint x;
	gint y;
	AtkCoordType coords;

	// convert parameter self
	self = (AtkText*) _self;

	// convert parameter x
	x = (gint) _x;

	// convert parameter y
	y = (gint) _y;

	// convert parameter coords
	coords = (AtkCoordType) _coords;

	// call function
	result = atk_text_get_offset_at_point(self, x, y, coords);

	// cleanup parameter self

	// cleanup parameter x

	// cleanup parameter y

	// cleanup parameter coords

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_atk_AtkText_atk_1text_1get_1range_1extents
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _startOffset,
	jint _endOffset,
	jint _coordType,
	jlong _rect
)
{
	AtkText* self;
	gint startOffset;
	gint endOffset;
	AtkCoordType coordType;
	AtkTextRectangle* rect;

	// convert parameter self
	self = (AtkText*) _self;

	// convert parameter startOffset
	startOffset = (gint) _startOffset;

	// convert parameter endOffset
	endOffset = (gint) _endOffset;

	// convert parameter coordType
	coordType = (AtkCoordType) _coordType;

	// convert parameter rect
	rect = (AtkTextRectangle*) _rect;

	// call function
	atk_text_get_range_extents(self, startOffset, endOffset, coordType, rect);

	// cleanup parameter self

	// cleanup parameter startOffset

	// cleanup parameter endOffset

	// cleanup parameter coordType

	// cleanup parameter rect
}

JNIEXPORT jstring JNICALL
Java_org_gnome_atk_AtkText_atk_1text_1get_1selection
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _selectionNum,
	jintArray _startOffset,
	jintArray _endOffset
)
{
	gchar* result;
	jstring _result;
	AtkText* self;
	gint selectionNum;
	gint* startOffset;
	gint* endOffset;

	// convert parameter self
	self = (AtkText*) _self;

	// convert parameter selectionNum
	selectionNum = (gint) _selectionNum;

	// convert parameter startOffset
	if (_startOffset == NULL) {
		startOffset = NULL;
	} else {
		startOffset = (gint*) (*env)->GetIntArrayElements(env, _startOffset, NULL);
		if (startOffset == NULL) {
			return NULL; // Java Exception already thrown
		}
	}

	// convert parameter endOffset
	if (_endOffset == NULL) {
		endOffset = NULL;
	} else {
		endOffset = (gint*) (*env)->GetIntArrayElements(env, _endOffset, NULL);
		if (endOffset == NULL) {
			return NULL; // Java Exception already thrown
		}
	}

	// call function
	result = atk_text_get_selection(self, selectionNum, startOffset, endOffset);

	// cleanup parameter self

	// cleanup parameter selectionNum

	// cleanup parameter startOffset
	if (startOffset != NULL) {
		(*env)->ReleaseIntArrayElements(env, _startOffset, (jint*)startOffset, 0);
	}

	// cleanup parameter endOffset
	if (endOffset != NULL) {
		(*env)->ReleaseIntArrayElements(env, _endOffset, (jint*)endOffset, 0);
	}

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
Java_org_gnome_atk_AtkText_atk_1text_1get_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _startOffset,
	jint _endOffset
)
{
	gchar* result;
	jstring _result;
	AtkText* self;
	gint startOffset;
	gint endOffset;

	// convert parameter self
	self = (AtkText*) _self;

	// convert parameter startOffset
	startOffset = (gint) _startOffset;

	// convert parameter endOffset
	endOffset = (gint) _endOffset;

	// call function
	result = atk_text_get_text(self, startOffset, endOffset);

	// cleanup parameter self

	// cleanup parameter startOffset

	// cleanup parameter endOffset

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
Java_org_gnome_atk_AtkText_atk_1text_1get_1text_1after_1offset
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _offset,
	jint _boundaryType,
	jintArray _startOffset,
	jintArray _endOffset
)
{
	gchar* result;
	jstring _result;
	AtkText* self;
	gint offset;
	AtkTextBoundary boundaryType;
	gint* startOffset;
	gint* endOffset;

	// convert parameter self
	self = (AtkText*) _self;

	// convert parameter offset
	offset = (gint) _offset;

	// convert parameter boundaryType
	boundaryType = (AtkTextBoundary) _boundaryType;

	// convert parameter startOffset
	if (_startOffset == NULL) {
		startOffset = NULL;
	} else {
		startOffset = (gint*) (*env)->GetIntArrayElements(env, _startOffset, NULL);
		if (startOffset == NULL) {
			return NULL; // Java Exception already thrown
		}
	}

	// convert parameter endOffset
	if (_endOffset == NULL) {
		endOffset = NULL;
	} else {
		endOffset = (gint*) (*env)->GetIntArrayElements(env, _endOffset, NULL);
		if (endOffset == NULL) {
			return NULL; // Java Exception already thrown
		}
	}

	// call function
	result = atk_text_get_text_after_offset(self, offset, boundaryType, startOffset, endOffset);

	// cleanup parameter self

	// cleanup parameter offset

	// cleanup parameter boundaryType

	// cleanup parameter startOffset
	if (startOffset != NULL) {
		(*env)->ReleaseIntArrayElements(env, _startOffset, (jint*)startOffset, 0);
	}

	// cleanup parameter endOffset
	if (endOffset != NULL) {
		(*env)->ReleaseIntArrayElements(env, _endOffset, (jint*)endOffset, 0);
	}

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
Java_org_gnome_atk_AtkText_atk_1text_1get_1text_1at_1offset
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _offset,
	jint _boundaryType,
	jintArray _startOffset,
	jintArray _endOffset
)
{
	gchar* result;
	jstring _result;
	AtkText* self;
	gint offset;
	AtkTextBoundary boundaryType;
	gint* startOffset;
	gint* endOffset;

	// convert parameter self
	self = (AtkText*) _self;

	// convert parameter offset
	offset = (gint) _offset;

	// convert parameter boundaryType
	boundaryType = (AtkTextBoundary) _boundaryType;

	// convert parameter startOffset
	if (_startOffset == NULL) {
		startOffset = NULL;
	} else {
		startOffset = (gint*) (*env)->GetIntArrayElements(env, _startOffset, NULL);
		if (startOffset == NULL) {
			return NULL; // Java Exception already thrown
		}
	}

	// convert parameter endOffset
	if (_endOffset == NULL) {
		endOffset = NULL;
	} else {
		endOffset = (gint*) (*env)->GetIntArrayElements(env, _endOffset, NULL);
		if (endOffset == NULL) {
			return NULL; // Java Exception already thrown
		}
	}

	// call function
	result = atk_text_get_text_at_offset(self, offset, boundaryType, startOffset, endOffset);

	// cleanup parameter self

	// cleanup parameter offset

	// cleanup parameter boundaryType

	// cleanup parameter startOffset
	if (startOffset != NULL) {
		(*env)->ReleaseIntArrayElements(env, _startOffset, (jint*)startOffset, 0);
	}

	// cleanup parameter endOffset
	if (endOffset != NULL) {
		(*env)->ReleaseIntArrayElements(env, _endOffset, (jint*)endOffset, 0);
	}

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
Java_org_gnome_atk_AtkText_atk_1text_1get_1text_1before_1offset
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _offset,
	jint _boundaryType,
	jintArray _startOffset,
	jintArray _endOffset
)
{
	gchar* result;
	jstring _result;
	AtkText* self;
	gint offset;
	AtkTextBoundary boundaryType;
	gint* startOffset;
	gint* endOffset;

	// convert parameter self
	self = (AtkText*) _self;

	// convert parameter offset
	offset = (gint) _offset;

	// convert parameter boundaryType
	boundaryType = (AtkTextBoundary) _boundaryType;

	// convert parameter startOffset
	if (_startOffset == NULL) {
		startOffset = NULL;
	} else {
		startOffset = (gint*) (*env)->GetIntArrayElements(env, _startOffset, NULL);
		if (startOffset == NULL) {
			return NULL; // Java Exception already thrown
		}
	}

	// convert parameter endOffset
	if (_endOffset == NULL) {
		endOffset = NULL;
	} else {
		endOffset = (gint*) (*env)->GetIntArrayElements(env, _endOffset, NULL);
		if (endOffset == NULL) {
			return NULL; // Java Exception already thrown
		}
	}

	// call function
	result = atk_text_get_text_before_offset(self, offset, boundaryType, startOffset, endOffset);

	// cleanup parameter self

	// cleanup parameter offset

	// cleanup parameter boundaryType

	// cleanup parameter startOffset
	if (startOffset != NULL) {
		(*env)->ReleaseIntArrayElements(env, _startOffset, (jint*)startOffset, 0);
	}

	// cleanup parameter endOffset
	if (endOffset != NULL) {
		(*env)->ReleaseIntArrayElements(env, _endOffset, (jint*)endOffset, 0);
	}

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
Java_org_gnome_atk_AtkText_atk_1text_1remove_1selection
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _selectionNum
)
{
	gboolean result;
	jboolean _result;
	AtkText* self;
	gint selectionNum;

	// convert parameter self
	self = (AtkText*) _self;

	// convert parameter selectionNum
	selectionNum = (gint) _selectionNum;

	// call function
	result = atk_text_remove_selection(self, selectionNum);

	// cleanup parameter self

	// cleanup parameter selectionNum

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_atk_AtkText_atk_1text_1set_1caret_1offset
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _offset
)
{
	gboolean result;
	jboolean _result;
	AtkText* self;
	gint offset;

	// convert parameter self
	self = (AtkText*) _self;

	// convert parameter offset
	offset = (gint) _offset;

	// call function
	result = atk_text_set_caret_offset(self, offset);

	// cleanup parameter self

	// cleanup parameter offset

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_atk_AtkText_atk_1text_1set_1selection
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _selectionNum,
	jint _startOffset,
	jint _endOffset
)
{
	gboolean result;
	jboolean _result;
	AtkText* self;
	gint selectionNum;
	gint startOffset;
	gint endOffset;

	// convert parameter self
	self = (AtkText*) _self;

	// convert parameter selectionNum
	selectionNum = (gint) _selectionNum;

	// convert parameter startOffset
	startOffset = (gint) _startOffset;

	// convert parameter endOffset
	endOffset = (gint) _endOffset;

	// call function
	result = atk_text_set_selection(self, selectionNum, startOffset, endOffset);

	// cleanup parameter self

	// cleanup parameter selectionNum

	// cleanup parameter startOffset

	// cleanup parameter endOffset

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_atk_AtkText_atk_1text_1free_1ranges
(
	JNIEnv* env,
	jclass cls,
	jlongArray _ranges
)
{
	AtkTextRange** ranges;

	// convert parameter ranges
	ranges = (AtkTextRange**) bindings_java_convert_jarray_to_gpointer(env, _ranges);
	if (ranges == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	atk_text_free_ranges(ranges);

	// cleanup parameter ranges
	bindings_java_convert_gpointer_to_jarray(env, (gpointer*)ranges, _ranges);
}
