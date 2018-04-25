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
#include "org_gnome_pango_PangoTabArray.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoTabArray_pango_1tab_1array_1new
(
	JNIEnv* env,
	jclass cls,
	jint _initialSize,
	jboolean _positionsInPixels
)
{
	PangoTabArray* result;
	jlong _result;
	gint initialSize;
	gboolean positionsInPixels;

	// convert parameter initialSize
	initialSize = (gint) _initialSize;

	// convert parameter positionsInPixels
	positionsInPixels = (gboolean) _positionsInPixels;

	// call function
	result = pango_tab_array_new(initialSize, positionsInPixels);

	// cleanup parameter initialSize

	// cleanup parameter positionsInPixels

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoTabArray_pango_1tab_1array_1new_1with_1positions
(
	JNIEnv* env,
	jclass cls,
	jint _size,
	jboolean _positionsInPixels,
	jint _firstAlignment,
	jint _firstPosition
)
{
	PangoTabArray* result;
	jlong _result;
	gint size;
	gboolean positionsInPixels;
	PangoTabAlign firstAlignment;
	gint firstPosition;

	// convert parameter size
	size = (gint) _size;

	// convert parameter positionsInPixels
	positionsInPixels = (gboolean) _positionsInPixels;

	// convert parameter firstAlignment
	firstAlignment = (PangoTabAlign) _firstAlignment;

	// convert parameter firstPosition
	firstPosition = (gint) _firstPosition;

	// call function
	result = pango_tab_array_new_with_positions(size, positionsInPixels, firstAlignment, firstPosition, NULL);

	// cleanup parameter size

	// cleanup parameter positionsInPixels

	// cleanup parameter firstAlignment

	// cleanup parameter firstPosition

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_pango_PangoTabArray_pango_1tab_1array_1copy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoTabArray* result;
	jlong _result;
	PangoTabArray* self;

	// convert parameter self
	self = (PangoTabArray*) _self;

	// call function
	result = pango_tab_array_copy(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoTabArray_pango_1tab_1array_1free
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoTabArray* self;

	// convert parameter self
	self = (PangoTabArray*) _self;

	// call function
	pango_tab_array_free(self);

	// cleanup parameter self
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_pango_PangoTabArray_pango_1tab_1array_1get_1positions_1in_1pixels
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	PangoTabArray* self;

	// convert parameter self
	self = (PangoTabArray*) _self;

	// call function
	result = pango_tab_array_get_positions_in_pixels(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoTabArray_pango_1tab_1array_1get_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	PangoTabArray* self;

	// convert parameter self
	self = (PangoTabArray*) _self;

	// call function
	result = pango_tab_array_get_size(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoTabArray_pango_1tab_1array_1get_1tab
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _tabIndex,
	jintArray _alignment,
	jintArray _location
)
{
	PangoTabArray* self;
	gint tabIndex;
	PangoTabAlign* alignment;
	gint* location;

	// convert parameter self
	self = (PangoTabArray*) _self;

	// convert parameter tabIndex
	tabIndex = (gint) _tabIndex;

	// convert parameter alignment
	if (_alignment == NULL) {
		alignment = NULL;
	} else {
		alignment = (PangoTabAlign*) (*env)->GetIntArrayElements(env, _alignment, NULL);
		if (alignment == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter location
	if (_location == NULL) {
		location = NULL;
	} else {
		location = (gint*) (*env)->GetIntArrayElements(env, _location, NULL);
		if (location == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	pango_tab_array_get_tab(self, tabIndex, alignment, location);

	// cleanup parameter self

	// cleanup parameter tabIndex

	// cleanup parameter alignment
	if (alignment != NULL) {
		(*env)->ReleaseIntArrayElements(env, _alignment, (jint*)alignment, 0);
	}

	// cleanup parameter location
	if (location != NULL) {
		(*env)->ReleaseIntArrayElements(env, _location, (jint*)location, 0);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoTabArray_pango_1tab_1array_1resize
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _newSize
)
{
	PangoTabArray* self;
	gint newSize;

	// convert parameter self
	self = (PangoTabArray*) _self;

	// convert parameter newSize
	newSize = (gint) _newSize;

	// call function
	pango_tab_array_resize(self, newSize);

	// cleanup parameter self

	// cleanup parameter newSize
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoTabArray_pango_1tab_1array_1set_1tab
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _tabIndex,
	jint _alignment,
	jint _location
)
{
	PangoTabArray* self;
	gint tabIndex;
	PangoTabAlign alignment;
	gint location;

	// convert parameter self
	self = (PangoTabArray*) _self;

	// convert parameter tabIndex
	tabIndex = (gint) _tabIndex;

	// convert parameter alignment
	alignment = (PangoTabAlign) _alignment;

	// convert parameter location
	location = (gint) _location;

	// call function
	pango_tab_array_set_tab(self, tabIndex, alignment, location);

	// cleanup parameter self

	// cleanup parameter tabIndex

	// cleanup parameter alignment

	// cleanup parameter location
}
