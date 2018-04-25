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
#include "org_gnome_gtk_GtkTreeIter.h"

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTreeIter_gtk_1tree_1iter_1get_1stamp
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkTreeIter* self;

	// convert parameter self
	self = (GtkTreeIter*) _self;

	// get field value
	result = self->stamp;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeIter_gtk_1tree_1iter_1set_1stamp
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _stamp
)
{
	GtkTreeIter* self;
	gint stamp;

	// convert parameter self
	self = (GtkTreeIter*) _self;

	// convert parameter stamp
	stamp = (gint) _stamp;

	// set field value
	self->stamp = stamp;

	// cleanup parameter self

	// cleanup parameter stamp
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTreeIter_gtk_1tree_1iter_1copy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreeIter* result;
	jlong _result;
	GtkTreeIter* self;

	// convert parameter self
	self = (GtkTreeIter*) _self;

	// call function
	result = gtk_tree_iter_copy(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeIter_gtk_1tree_1iter_1free
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreeIter* self;

	// convert parameter self
	self = (GtkTreeIter*) _self;

	// call function
	gtk_tree_iter_free(self);

	// cleanup parameter self
}
