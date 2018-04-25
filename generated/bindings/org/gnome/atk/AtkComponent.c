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
#include "org_gnome_atk_AtkComponent.h"

JNIEXPORT jboolean JNICALL
Java_org_gnome_atk_AtkComponent_atk_1component_1contains
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _x,
	jint _y,
	jint _coordType
)
{
	gboolean result;
	jboolean _result;
	AtkComponent* self;
	gint x;
	gint y;
	AtkCoordType coordType;

	// convert parameter self
	self = (AtkComponent*) _self;

	// convert parameter x
	x = (gint) _x;

	// convert parameter y
	y = (gint) _y;

	// convert parameter coordType
	coordType = (AtkCoordType) _coordType;

	// call function
	result = atk_component_contains(self, x, y, coordType);

	// cleanup parameter self

	// cleanup parameter x

	// cleanup parameter y

	// cleanup parameter coordType

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_atk_AtkComponent_atk_1component_1get_1alpha
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	AtkComponent* self;

	// convert parameter self
	self = (AtkComponent*) _self;

	// call function
	result = atk_component_get_alpha(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_atk_AtkComponent_atk_1component_1get_1extents
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _x,
	jintArray _y,
	jintArray _width,
	jintArray _height,
	jint _coordType
)
{
	AtkComponent* self;
	gint* x;
	gint* y;
	gint* width;
	gint* height;
	AtkCoordType coordType;

	// convert parameter self
	self = (AtkComponent*) _self;

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

	// convert parameter coordType
	coordType = (AtkCoordType) _coordType;

	// call function
	atk_component_get_extents(self, x, y, width, height, coordType);

	// cleanup parameter self

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

	// cleanup parameter coordType
}

JNIEXPORT jint JNICALL
Java_org_gnome_atk_AtkComponent_atk_1component_1get_1layer
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	AtkLayer result;
	jint _result;
	AtkComponent* self;

	// convert parameter self
	self = (AtkComponent*) _self;

	// call function
	result = atk_component_get_layer(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_atk_AtkComponent_atk_1component_1get_1mdi_1zorder
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	AtkComponent* self;

	// convert parameter self
	self = (AtkComponent*) _self;

	// call function
	result = atk_component_get_mdi_zorder(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_atk_AtkComponent_atk_1component_1get_1position
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _x,
	jintArray _y,
	jint _coordType
)
{
	AtkComponent* self;
	gint* x;
	gint* y;
	AtkCoordType coordType;

	// convert parameter self
	self = (AtkComponent*) _self;

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

	// convert parameter coordType
	coordType = (AtkCoordType) _coordType;

	// call function
	atk_component_get_position(self, x, y, coordType);

	// cleanup parameter self

	// cleanup parameter x
	if (x != NULL) {
		(*env)->ReleaseIntArrayElements(env, _x, (jint*)x, 0);
	}

	// cleanup parameter y
	if (y != NULL) {
		(*env)->ReleaseIntArrayElements(env, _y, (jint*)y, 0);
	}

	// cleanup parameter coordType
}

JNIEXPORT void JNICALL
Java_org_gnome_atk_AtkComponent_atk_1component_1get_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _width,
	jintArray _height
)
{
	AtkComponent* self;
	gint* width;
	gint* height;

	// convert parameter self
	self = (AtkComponent*) _self;

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

	// call function
	atk_component_get_size(self, width, height);

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

JNIEXPORT jboolean JNICALL
Java_org_gnome_atk_AtkComponent_atk_1component_1grab_1focus
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	AtkComponent* self;

	// convert parameter self
	self = (AtkComponent*) _self;

	// call function
	result = atk_component_grab_focus(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_atk_AtkComponent_atk_1component_1ref_1accessible_1at_1point
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _x,
	jint _y,
	jint _coordType
)
{
	AtkObject* result;
	jlong _result;
	AtkComponent* self;
	gint x;
	gint y;
	AtkCoordType coordType;

	// convert parameter self
	self = (AtkComponent*) _self;

	// convert parameter x
	x = (gint) _x;

	// convert parameter y
	y = (gint) _y;

	// convert parameter coordType
	coordType = (AtkCoordType) _coordType;

	// call function
	result = atk_component_ref_accessible_at_point(self, x, y, coordType);

	// cleanup parameter self

	// cleanup parameter x

	// cleanup parameter y

	// cleanup parameter coordType

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
Java_org_gnome_atk_AtkComponent_atk_1component_1remove_1focus_1handler
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _handlerId
)
{
	AtkComponent* self;
	guint handlerId;

	// convert parameter self
	self = (AtkComponent*) _self;

	// convert parameter handlerId
	handlerId = (guint) _handlerId;

	// call function
	atk_component_remove_focus_handler(self, handlerId);

	// cleanup parameter self

	// cleanup parameter handlerId
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_atk_AtkComponent_atk_1component_1set_1extents
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _x,
	jint _y,
	jint _width,
	jint _height,
	jint _coordType
)
{
	gboolean result;
	jboolean _result;
	AtkComponent* self;
	gint x;
	gint y;
	gint width;
	gint height;
	AtkCoordType coordType;

	// convert parameter self
	self = (AtkComponent*) _self;

	// convert parameter x
	x = (gint) _x;

	// convert parameter y
	y = (gint) _y;

	// convert parameter width
	width = (gint) _width;

	// convert parameter height
	height = (gint) _height;

	// convert parameter coordType
	coordType = (AtkCoordType) _coordType;

	// call function
	result = atk_component_set_extents(self, x, y, width, height, coordType);

	// cleanup parameter self

	// cleanup parameter x

	// cleanup parameter y

	// cleanup parameter width

	// cleanup parameter height

	// cleanup parameter coordType

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_atk_AtkComponent_atk_1component_1set_1position
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _x,
	jint _y,
	jint _coordType
)
{
	gboolean result;
	jboolean _result;
	AtkComponent* self;
	gint x;
	gint y;
	AtkCoordType coordType;

	// convert parameter self
	self = (AtkComponent*) _self;

	// convert parameter x
	x = (gint) _x;

	// convert parameter y
	y = (gint) _y;

	// convert parameter coordType
	coordType = (AtkCoordType) _coordType;

	// call function
	result = atk_component_set_position(self, x, y, coordType);

	// cleanup parameter self

	// cleanup parameter x

	// cleanup parameter y

	// cleanup parameter coordType

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_atk_AtkComponent_atk_1component_1set_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _width,
	jint _height
)
{
	gboolean result;
	jboolean _result;
	AtkComponent* self;
	gint width;
	gint height;

	// convert parameter self
	self = (AtkComponent*) _self;

	// convert parameter width
	width = (gint) _width;

	// convert parameter height
	height = (gint) _height;

	// call function
	result = atk_component_set_size(self, width, height);

	// cleanup parameter self

	// cleanup parameter width

	// cleanup parameter height

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}
