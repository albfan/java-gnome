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
#include "org_gnome_gtk_GtkBorder.h"

JNIEXPORT jshort JNICALL
Java_org_gnome_gtk_GtkBorder_gtk_1border_1get_1left
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint16 result;
	jshort _result;
	GtkBorder* self;

	// convert parameter self
	self = (GtkBorder*) _self;

	// get field value
	result = self->left;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jshort) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkBorder_gtk_1border_1set_1left
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jshort _left
)
{
	GtkBorder* self;
	gint16 left;

	// convert parameter self
	self = (GtkBorder*) _self;

	// convert parameter left
	left = (gint16) _left;

	// set field value
	self->left = left;

	// cleanup parameter self

	// cleanup parameter left
}

JNIEXPORT jshort JNICALL
Java_org_gnome_gtk_GtkBorder_gtk_1border_1get_1right
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint16 result;
	jshort _result;
	GtkBorder* self;

	// convert parameter self
	self = (GtkBorder*) _self;

	// get field value
	result = self->right;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jshort) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkBorder_gtk_1border_1set_1right
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jshort _right
)
{
	GtkBorder* self;
	gint16 right;

	// convert parameter self
	self = (GtkBorder*) _self;

	// convert parameter right
	right = (gint16) _right;

	// set field value
	self->right = right;

	// cleanup parameter self

	// cleanup parameter right
}

JNIEXPORT jshort JNICALL
Java_org_gnome_gtk_GtkBorder_gtk_1border_1get_1top
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint16 result;
	jshort _result;
	GtkBorder* self;

	// convert parameter self
	self = (GtkBorder*) _self;

	// get field value
	result = self->top;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jshort) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkBorder_gtk_1border_1set_1top
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jshort _top
)
{
	GtkBorder* self;
	gint16 top;

	// convert parameter self
	self = (GtkBorder*) _self;

	// convert parameter top
	top = (gint16) _top;

	// set field value
	self->top = top;

	// cleanup parameter self

	// cleanup parameter top
}

JNIEXPORT jshort JNICALL
Java_org_gnome_gtk_GtkBorder_gtk_1border_1get_1bottom
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint16 result;
	jshort _result;
	GtkBorder* self;

	// convert parameter self
	self = (GtkBorder*) _self;

	// get field value
	result = self->bottom;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jshort) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkBorder_gtk_1border_1set_1bottom
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jshort _bottom
)
{
	GtkBorder* self;
	gint16 bottom;

	// convert parameter self
	self = (GtkBorder*) _self;

	// convert parameter bottom
	bottom = (gint16) _bottom;

	// set field value
	self->bottom = bottom;

	// cleanup parameter self

	// cleanup parameter bottom
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkBorder_gtk_1border_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkBorder* result;
	jlong _result;

	// call function
	result = gtk_border_new();

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkBorder_gtk_1border_1copy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkBorder* result;
	jlong _result;
	GtkBorder* self;

	// convert parameter self
	self = (GtkBorder*) _self;

	// call function
	result = gtk_border_copy(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkBorder_gtk_1border_1free
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkBorder* self;

	// convert parameter self
	self = (GtkBorder*) _self;

	// call function
	gtk_border_free(self);

	// cleanup parameter self
}
