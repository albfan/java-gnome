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
#include "org_gnome_gtk_GtkPaned.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkPaned_gtk_1paned_1new
(
	JNIEnv* env,
	jclass cls,
	jint _orientation
)
{
	GtkWidget* result;
	jlong _result;
	GtkOrientation orientation;

	// convert parameter orientation
	orientation = (GtkOrientation) _orientation;

	// call function
	result = gtk_paned_new(orientation);

	// cleanup parameter orientation

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
Java_org_gnome_gtk_GtkPaned_gtk_1paned_1add1
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child
)
{
	GtkPaned* self;
	GtkWidget* child;

	// convert parameter self
	self = (GtkPaned*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// call function
	gtk_paned_add1(self, child);

	// cleanup parameter self

	// cleanup parameter child
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPaned_gtk_1paned_1add2
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child
)
{
	GtkPaned* self;
	GtkWidget* child;

	// convert parameter self
	self = (GtkPaned*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// call function
	gtk_paned_add2(self, child);

	// cleanup parameter self

	// cleanup parameter child
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkPaned_gtk_1paned_1get_1child1
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkPaned* self;

	// convert parameter self
	self = (GtkPaned*) _self;

	// call function
	result = gtk_paned_get_child1(self);

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

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkPaned_gtk_1paned_1get_1child2
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkPaned* self;

	// convert parameter self
	self = (GtkPaned*) _self;

	// call function
	result = gtk_paned_get_child2(self);

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

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkPaned_gtk_1paned_1get_1handle_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* result;
	jlong _result;
	GtkPaned* self;

	// convert parameter self
	self = (GtkPaned*) _self;

	// call function
	result = gtk_paned_get_handle_window(self);

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

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkPaned_gtk_1paned_1get_1position
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkPaned* self;

	// convert parameter self
	self = (GtkPaned*) _self;

	// call function
	result = gtk_paned_get_position(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkPaned_gtk_1paned_1get_1wide_1handle
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkPaned* self;

	// convert parameter self
	self = (GtkPaned*) _self;

	// call function
	result = gtk_paned_get_wide_handle(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPaned_gtk_1paned_1pack1
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jboolean _resize,
	jboolean _shrink
)
{
	GtkPaned* self;
	GtkWidget* child;
	gboolean resize;
	gboolean shrink;

	// convert parameter self
	self = (GtkPaned*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter resize
	resize = (gboolean) _resize;

	// convert parameter shrink
	shrink = (gboolean) _shrink;

	// call function
	gtk_paned_pack1(self, child, resize, shrink);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter resize

	// cleanup parameter shrink
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPaned_gtk_1paned_1pack2
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jboolean _resize,
	jboolean _shrink
)
{
	GtkPaned* self;
	GtkWidget* child;
	gboolean resize;
	gboolean shrink;

	// convert parameter self
	self = (GtkPaned*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter resize
	resize = (gboolean) _resize;

	// convert parameter shrink
	shrink = (gboolean) _shrink;

	// call function
	gtk_paned_pack2(self, child, resize, shrink);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter resize

	// cleanup parameter shrink
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPaned_gtk_1paned_1set_1position
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _position
)
{
	GtkPaned* self;
	gint position;

	// convert parameter self
	self = (GtkPaned*) _self;

	// convert parameter position
	position = (gint) _position;

	// call function
	gtk_paned_set_position(self, position);

	// cleanup parameter self

	// cleanup parameter position
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPaned_gtk_1paned_1set_1wide_1handle
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _wide
)
{
	GtkPaned* self;
	gboolean wide;

	// convert parameter self
	self = (GtkPaned*) _self;

	// convert parameter wide
	wide = (gboolean) _wide;

	// call function
	gtk_paned_set_wide_handle(self, wide);

	// cleanup parameter self

	// cleanup parameter wide
}
