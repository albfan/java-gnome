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
#include "org_gnome_pango_PangoLayoutLine.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoLayoutLine_pango_1layout_1line_1get_1layout
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoLayout* result;
	jlong _result;
	PangoLayoutLine* self;

	// convert parameter self
	self = (PangoLayoutLine*) _self;

	// get field value
	result = self->layout;

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
Java_org_gnome_pango_PangoLayoutLine_pango_1layout_1line_1set_1layout
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _layout
)
{
	PangoLayoutLine* self;
	PangoLayout* layout;

	// convert parameter self
	self = (PangoLayoutLine*) _self;

	// convert parameter layout
	layout = (PangoLayout*) _layout;

	// set field value
	self->layout = layout;

	// cleanup parameter self

	// cleanup parameter layout
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoLayoutLine_pango_1layout_1line_1get_1start_1index
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	PangoLayoutLine* self;

	// convert parameter self
	self = (PangoLayoutLine*) _self;

	// get field value
	result = self->start_index;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayoutLine_pango_1layout_1line_1set_1start_1index
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _startIndex
)
{
	PangoLayoutLine* self;
	gint startIndex;

	// convert parameter self
	self = (PangoLayoutLine*) _self;

	// convert parameter startIndex
	startIndex = (gint) _startIndex;

	// set field value
	self->start_index = startIndex;

	// cleanup parameter self

	// cleanup parameter startIndex
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoLayoutLine_pango_1layout_1line_1get_1length
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	PangoLayoutLine* self;

	// convert parameter self
	self = (PangoLayoutLine*) _self;

	// get field value
	result = self->length;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayoutLine_pango_1layout_1line_1set_1length
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _length
)
{
	PangoLayoutLine* self;
	gint length;

	// convert parameter self
	self = (PangoLayoutLine*) _self;

	// convert parameter length
	length = (gint) _length;

	// set field value
	self->length = length;

	// cleanup parameter self

	// cleanup parameter length
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoLayoutLine_pango_1layout_1line_1get_1is_1paragraph_1start
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	PangoLayoutLine* self;

	// convert parameter self
	self = (PangoLayoutLine*) _self;

	// get field value
	result = self->is_paragraph_start;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayoutLine_pango_1layout_1line_1set_1is_1paragraph_1start
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _isParagraphStart
)
{
	PangoLayoutLine* self;
	guint isParagraphStart;

	// convert parameter self
	self = (PangoLayoutLine*) _self;

	// convert parameter isParagraphStart
	isParagraphStart = (guint) _isParagraphStart;

	// set field value
	self->is_paragraph_start = isParagraphStart;

	// cleanup parameter self

	// cleanup parameter isParagraphStart
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoLayoutLine_pango_1layout_1line_1get_1resolved_1dir
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	PangoLayoutLine* self;

	// convert parameter self
	self = (PangoLayoutLine*) _self;

	// get field value
	result = self->resolved_dir;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayoutLine_pango_1layout_1line_1set_1resolved_1dir
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _resolvedDir
)
{
	PangoLayoutLine* self;
	guint resolvedDir;

	// convert parameter self
	self = (PangoLayoutLine*) _self;

	// convert parameter resolvedDir
	resolvedDir = (guint) _resolvedDir;

	// set field value
	self->resolved_dir = resolvedDir;

	// cleanup parameter self

	// cleanup parameter resolvedDir
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayoutLine_pango_1layout_1line_1get_1extents
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _inkRect,
	jlong _logicalRect
)
{
	PangoLayoutLine* self;
	PangoRectangle* inkRect;
	PangoRectangle* logicalRect;

	// convert parameter self
	self = (PangoLayoutLine*) _self;

	// convert parameter inkRect
	inkRect = (PangoRectangle*) _inkRect;

	// convert parameter logicalRect
	logicalRect = (PangoRectangle*) _logicalRect;

	// call function
	pango_layout_line_get_extents(self, inkRect, logicalRect);

	// cleanup parameter self

	// cleanup parameter inkRect

	// cleanup parameter logicalRect
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayoutLine_pango_1layout_1line_1get_1pixel_1extents
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _inkRect,
	jlong _logicalRect
)
{
	PangoLayoutLine* self;
	PangoRectangle* inkRect;
	PangoRectangle* logicalRect;

	// convert parameter self
	self = (PangoLayoutLine*) _self;

	// convert parameter inkRect
	inkRect = (PangoRectangle*) _inkRect;

	// convert parameter logicalRect
	logicalRect = (PangoRectangle*) _logicalRect;

	// call function
	pango_layout_line_get_pixel_extents(self, inkRect, logicalRect);

	// cleanup parameter self

	// cleanup parameter inkRect

	// cleanup parameter logicalRect
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayoutLine_pango_1layout_1line_1index_1to_1x
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _index,
	jboolean _trailing,
	jintArray _xPos
)
{
	PangoLayoutLine* self;
	int index;
	gboolean trailing;
	int* xPos;

	// convert parameter self
	self = (PangoLayoutLine*) _self;

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
	pango_layout_line_index_to_x(self, index, trailing, xPos);

	// cleanup parameter self

	// cleanup parameter index

	// cleanup parameter trailing

	// cleanup parameter xPos
	if (xPos != NULL) {
		(*env)->ReleaseIntArrayElements(env, _xPos, (jint*)xPos, 0);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayoutLine_pango_1layout_1line_1ref
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoLayoutLine* self;

	// convert parameter self
	self = (PangoLayoutLine*) _self;

	// call function
	pango_layout_line_ref(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayoutLine_pango_1layout_1line_1unref
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoLayoutLine* self;

	// convert parameter self
	self = (PangoLayoutLine*) _self;

	// call function
	pango_layout_line_unref(self);

	// cleanup parameter self
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_pango_PangoLayoutLine_pango_1layout_1line_1x_1to_1index
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _xPos,
	jintArray _index,
	jintArray _trailing
)
{
	gboolean result;
	jboolean _result;
	PangoLayoutLine* self;
	int xPos;
	int* index;
	int* trailing;

	// convert parameter self
	self = (PangoLayoutLine*) _self;

	// convert parameter xPos
	xPos = (int) _xPos;

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
	result = pango_layout_line_x_to_index(self, xPos, index, trailing);

	// cleanup parameter self

	// cleanup parameter xPos

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
