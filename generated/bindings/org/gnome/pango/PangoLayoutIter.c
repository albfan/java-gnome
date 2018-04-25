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
#include "org_gnome_pango_PangoLayoutIter.h"

JNIEXPORT jboolean JNICALL
Java_org_gnome_pango_PangoLayoutIter_pango_1layout_1iter_1at_1last_1line
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	PangoLayoutIter* self;

	// convert parameter self
	self = (PangoLayoutIter*) _self;

	// call function
	result = pango_layout_iter_at_last_line(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoLayoutIter_pango_1layout_1iter_1copy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoLayoutIter* result;
	jlong _result;
	PangoLayoutIter* self;

	// convert parameter self
	self = (PangoLayoutIter*) _self;

	// call function
	result = pango_layout_iter_copy(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayoutIter_pango_1layout_1iter_1free
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoLayoutIter* self;

	// convert parameter self
	self = (PangoLayoutIter*) _self;

	// call function
	pango_layout_iter_free(self);

	// cleanup parameter self
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoLayoutIter_pango_1layout_1iter_1get_1baseline
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	PangoLayoutIter* self;

	// convert parameter self
	self = (PangoLayoutIter*) _self;

	// call function
	result = pango_layout_iter_get_baseline(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayoutIter_pango_1layout_1iter_1get_1char_1extents
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _logicalRect
)
{
	PangoLayoutIter* self;
	PangoRectangle* logicalRect;

	// convert parameter self
	self = (PangoLayoutIter*) _self;

	// convert parameter logicalRect
	logicalRect = (PangoRectangle*) _logicalRect;

	// call function
	pango_layout_iter_get_char_extents(self, logicalRect);

	// cleanup parameter self

	// cleanup parameter logicalRect
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayoutIter_pango_1layout_1iter_1get_1cluster_1extents
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _inkRect,
	jlong _logicalRect
)
{
	PangoLayoutIter* self;
	PangoRectangle* inkRect;
	PangoRectangle* logicalRect;

	// convert parameter self
	self = (PangoLayoutIter*) _self;

	// convert parameter inkRect
	inkRect = (PangoRectangle*) _inkRect;

	// convert parameter logicalRect
	logicalRect = (PangoRectangle*) _logicalRect;

	// call function
	pango_layout_iter_get_cluster_extents(self, inkRect, logicalRect);

	// cleanup parameter self

	// cleanup parameter inkRect

	// cleanup parameter logicalRect
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoLayoutIter_pango_1layout_1iter_1get_1index
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	PangoLayoutIter* self;

	// convert parameter self
	self = (PangoLayoutIter*) _self;

	// call function
	result = pango_layout_iter_get_index(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoLayoutIter_pango_1layout_1iter_1get_1layout
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoLayout* result;
	jlong _result;
	PangoLayoutIter* self;

	// convert parameter self
	self = (PangoLayoutIter*) _self;

	// call function
	result = pango_layout_iter_get_layout(self);

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
Java_org_gnome_pango_PangoLayoutIter_pango_1layout_1iter_1get_1layout_1extents
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _inkRect,
	jlong _logicalRect
)
{
	PangoLayoutIter* self;
	PangoRectangle* inkRect;
	PangoRectangle* logicalRect;

	// convert parameter self
	self = (PangoLayoutIter*) _self;

	// convert parameter inkRect
	inkRect = (PangoRectangle*) _inkRect;

	// convert parameter logicalRect
	logicalRect = (PangoRectangle*) _logicalRect;

	// call function
	pango_layout_iter_get_layout_extents(self, inkRect, logicalRect);

	// cleanup parameter self

	// cleanup parameter inkRect

	// cleanup parameter logicalRect
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoLayoutIter_pango_1layout_1iter_1get_1line
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoLayoutLine* result;
	jlong _result;
	PangoLayoutIter* self;

	// convert parameter self
	self = (PangoLayoutIter*) _self;

	// call function
	result = pango_layout_iter_get_line(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayoutIter_pango_1layout_1iter_1get_1line_1extents
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _inkRect,
	jlong _logicalRect
)
{
	PangoLayoutIter* self;
	PangoRectangle* inkRect;
	PangoRectangle* logicalRect;

	// convert parameter self
	self = (PangoLayoutIter*) _self;

	// convert parameter inkRect
	inkRect = (PangoRectangle*) _inkRect;

	// convert parameter logicalRect
	logicalRect = (PangoRectangle*) _logicalRect;

	// call function
	pango_layout_iter_get_line_extents(self, inkRect, logicalRect);

	// cleanup parameter self

	// cleanup parameter inkRect

	// cleanup parameter logicalRect
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoLayoutIter_pango_1layout_1iter_1get_1line_1readonly
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoLayoutLine* result;
	jlong _result;
	PangoLayoutIter* self;

	// convert parameter self
	self = (PangoLayoutIter*) _self;

	// call function
	result = pango_layout_iter_get_line_readonly(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayoutIter_pango_1layout_1iter_1get_1line_1yrange
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _y0,
	jintArray _y1
)
{
	PangoLayoutIter* self;
	int* y0;
	int* y1;

	// convert parameter self
	self = (PangoLayoutIter*) _self;

	// convert parameter y0
	if (_y0 == NULL) {
		y0 = NULL;
	} else {
		y0 = (int*) (*env)->GetIntArrayElements(env, _y0, NULL);
		if (y0 == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter y1
	if (_y1 == NULL) {
		y1 = NULL;
	} else {
		y1 = (int*) (*env)->GetIntArrayElements(env, _y1, NULL);
		if (y1 == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	pango_layout_iter_get_line_yrange(self, y0, y1);

	// cleanup parameter self

	// cleanup parameter y0
	if (y0 != NULL) {
		(*env)->ReleaseIntArrayElements(env, _y0, (jint*)y0, 0);
	}

	// cleanup parameter y1
	if (y1 != NULL) {
		(*env)->ReleaseIntArrayElements(env, _y1, (jint*)y1, 0);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoLayoutIter_pango_1layout_1iter_1get_1run_1extents
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _inkRect,
	jlong _logicalRect
)
{
	PangoLayoutIter* self;
	PangoRectangle* inkRect;
	PangoRectangle* logicalRect;

	// convert parameter self
	self = (PangoLayoutIter*) _self;

	// convert parameter inkRect
	inkRect = (PangoRectangle*) _inkRect;

	// convert parameter logicalRect
	logicalRect = (PangoRectangle*) _logicalRect;

	// call function
	pango_layout_iter_get_run_extents(self, inkRect, logicalRect);

	// cleanup parameter self

	// cleanup parameter inkRect

	// cleanup parameter logicalRect
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_pango_PangoLayoutIter_pango_1layout_1iter_1next_1char
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	PangoLayoutIter* self;

	// convert parameter self
	self = (PangoLayoutIter*) _self;

	// call function
	result = pango_layout_iter_next_char(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_pango_PangoLayoutIter_pango_1layout_1iter_1next_1cluster
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	PangoLayoutIter* self;

	// convert parameter self
	self = (PangoLayoutIter*) _self;

	// call function
	result = pango_layout_iter_next_cluster(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_pango_PangoLayoutIter_pango_1layout_1iter_1next_1line
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	PangoLayoutIter* self;

	// convert parameter self
	self = (PangoLayoutIter*) _self;

	// call function
	result = pango_layout_iter_next_line(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_pango_PangoLayoutIter_pango_1layout_1iter_1next_1run
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	PangoLayoutIter* self;

	// convert parameter self
	self = (PangoLayoutIter*) _self;

	// call function
	result = pango_layout_iter_next_run(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}
