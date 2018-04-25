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
#include "org_gnome_pango_PangoRectangle.h"

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoRectangle_pango_1rectangle_1get_1x
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	PangoRectangle* self;

	// convert parameter self
	self = (PangoRectangle*) _self;

	// get field value
	result = self->x;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoRectangle_pango_1rectangle_1set_1x
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _x
)
{
	PangoRectangle* self;
	int x;

	// convert parameter self
	self = (PangoRectangle*) _self;

	// convert parameter x
	x = (int) _x;

	// set field value
	self->x = x;

	// cleanup parameter self

	// cleanup parameter x
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoRectangle_pango_1rectangle_1get_1y
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	PangoRectangle* self;

	// convert parameter self
	self = (PangoRectangle*) _self;

	// get field value
	result = self->y;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoRectangle_pango_1rectangle_1set_1y
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _y
)
{
	PangoRectangle* self;
	int y;

	// convert parameter self
	self = (PangoRectangle*) _self;

	// convert parameter y
	y = (int) _y;

	// set field value
	self->y = y;

	// cleanup parameter self

	// cleanup parameter y
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoRectangle_pango_1rectangle_1get_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	PangoRectangle* self;

	// convert parameter self
	self = (PangoRectangle*) _self;

	// get field value
	result = self->width;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoRectangle_pango_1rectangle_1set_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _width
)
{
	PangoRectangle* self;
	int width;

	// convert parameter self
	self = (PangoRectangle*) _self;

	// convert parameter width
	width = (int) _width;

	// set field value
	self->width = width;

	// cleanup parameter self

	// cleanup parameter width
}

JNIEXPORT jint JNICALL
Java_org_gnome_pango_PangoRectangle_pango_1rectangle_1get_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	PangoRectangle* self;

	// convert parameter self
	self = (PangoRectangle*) _self;

	// get field value
	result = self->height;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_pango_PangoRectangle_pango_1rectangle_1set_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _height
)
{
	PangoRectangle* self;
	int height;

	// convert parameter self
	self = (PangoRectangle*) _self;

	// convert parameter height
	height = (int) _height;

	// set field value
	self->height = height;

	// cleanup parameter self

	// cleanup parameter height
}
