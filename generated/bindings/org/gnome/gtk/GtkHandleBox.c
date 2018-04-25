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
#include "org_gnome_gtk_GtkHandleBox.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkHandleBox_gtk_1handle_1box_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkWidget* result;
	jlong _result;

	// call function
	result = gtk_handle_box_new();

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkHandleBox_gtk_1handle_1box_1get_1child_1detached
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkHandleBox* self;

	// convert parameter self
	self = (GtkHandleBox*) _self;

	// call function
	result = gtk_handle_box_get_child_detached(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkHandleBox_gtk_1handle_1box_1get_1handle_1position
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkPositionType result;
	jint _result;
	GtkHandleBox* self;

	// convert parameter self
	self = (GtkHandleBox*) _self;

	// call function
	result = gtk_handle_box_get_handle_position(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkHandleBox_gtk_1handle_1box_1get_1shadow_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkShadowType result;
	jint _result;
	GtkHandleBox* self;

	// convert parameter self
	self = (GtkHandleBox*) _self;

	// call function
	result = gtk_handle_box_get_shadow_type(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkHandleBox_gtk_1handle_1box_1get_1snap_1edge
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkPositionType result;
	jint _result;
	GtkHandleBox* self;

	// convert parameter self
	self = (GtkHandleBox*) _self;

	// call function
	result = gtk_handle_box_get_snap_edge(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkHandleBox_gtk_1handle_1box_1set_1handle_1position
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _position
)
{
	GtkHandleBox* self;
	GtkPositionType position;

	// convert parameter self
	self = (GtkHandleBox*) _self;

	// convert parameter position
	position = (GtkPositionType) _position;

	// call function
	gtk_handle_box_set_handle_position(self, position);

	// cleanup parameter self

	// cleanup parameter position
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkHandleBox_gtk_1handle_1box_1set_1shadow_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _type
)
{
	GtkHandleBox* self;
	GtkShadowType type;

	// convert parameter self
	self = (GtkHandleBox*) _self;

	// convert parameter type
	type = (GtkShadowType) _type;

	// call function
	gtk_handle_box_set_shadow_type(self, type);

	// cleanup parameter self

	// cleanup parameter type
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkHandleBox_gtk_1handle_1box_1set_1snap_1edge
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _edge
)
{
	GtkHandleBox* self;
	GtkPositionType edge;

	// convert parameter self
	self = (GtkHandleBox*) _self;

	// convert parameter edge
	edge = (GtkPositionType) _edge;

	// call function
	gtk_handle_box_set_snap_edge(self, edge);

	// cleanup parameter self

	// cleanup parameter edge
}
