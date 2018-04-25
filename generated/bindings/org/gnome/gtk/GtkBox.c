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
#include "org_gnome_gtk_GtkBox.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkBox_gtk_1box_1new
(
	JNIEnv* env,
	jclass cls,
	jint _orientation,
	jint _spacing
)
{
	GtkWidget* result;
	jlong _result;
	GtkOrientation orientation;
	gint spacing;

	// convert parameter orientation
	orientation = (GtkOrientation) _orientation;

	// convert parameter spacing
	spacing = (gint) _spacing;

	// call function
	result = gtk_box_new(orientation, spacing);

	// cleanup parameter orientation

	// cleanup parameter spacing

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkBox_gtk_1box_1get_1center_1widget
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkBox* self;

	// convert parameter self
	self = (GtkBox*) _self;

	// call function
	result = gtk_box_get_center_widget(self);

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

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkBox_gtk_1box_1get_1homogeneous
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkBox* self;

	// convert parameter self
	self = (GtkBox*) _self;

	// call function
	result = gtk_box_get_homogeneous(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkBox_gtk_1box_1get_1spacing
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkBox* self;

	// convert parameter self
	self = (GtkBox*) _self;

	// call function
	result = gtk_box_get_spacing(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkBox_gtk_1box_1pack_1end
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jboolean _expand,
	jboolean _fill,
	jint _padding
)
{
	GtkBox* self;
	GtkWidget* child;
	gboolean expand;
	gboolean fill;
	guint padding;

	// convert parameter self
	self = (GtkBox*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter expand
	expand = (gboolean) _expand;

	// convert parameter fill
	fill = (gboolean) _fill;

	// convert parameter padding
	padding = (guint) _padding;

	// call function
	gtk_box_pack_end(self, child, expand, fill, padding);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter expand

	// cleanup parameter fill

	// cleanup parameter padding
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkBox_gtk_1box_1pack_1start
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jboolean _expand,
	jboolean _fill,
	jint _padding
)
{
	GtkBox* self;
	GtkWidget* child;
	gboolean expand;
	gboolean fill;
	guint padding;

	// convert parameter self
	self = (GtkBox*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter expand
	expand = (gboolean) _expand;

	// convert parameter fill
	fill = (gboolean) _fill;

	// convert parameter padding
	padding = (guint) _padding;

	// call function
	gtk_box_pack_start(self, child, expand, fill, padding);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter expand

	// cleanup parameter fill

	// cleanup parameter padding
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkBox_gtk_1box_1query_1child_1packing
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jbooleanArray _expand,
	jbooleanArray _fill,
	jintArray _padding,
	jintArray _packType
)
{
	GtkBox* self;
	GtkWidget* child;
	gboolean* expand;
	gboolean* fill;
	guint* padding;
	GtkPackType* packType;

	// convert parameter self
	self = (GtkBox*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter expand
	if (_expand == NULL) {
		expand = NULL;
	} else {
		expand = (gboolean*) (*env)->GetBooleanArrayElements(env, _expand, NULL);
		if (expand == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter fill
	if (_fill == NULL) {
		fill = NULL;
	} else {
		fill = (gboolean*) (*env)->GetBooleanArrayElements(env, _fill, NULL);
		if (fill == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter padding
	if (_padding == NULL) {
		padding = NULL;
	} else {
		padding = (guint*) (*env)->GetIntArrayElements(env, _padding, NULL);
		if (padding == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter packType
	if (_packType == NULL) {
		packType = NULL;
	} else {
		packType = (GtkPackType*) (*env)->GetIntArrayElements(env, _packType, NULL);
		if (packType == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_box_query_child_packing(self, child, expand, fill, padding, packType);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter expand
	if (expand != NULL) {
		(*env)->ReleaseBooleanArrayElements(env, _expand, (jboolean*)expand, 0);
	}

	// cleanup parameter fill
	if (fill != NULL) {
		(*env)->ReleaseBooleanArrayElements(env, _fill, (jboolean*)fill, 0);
	}

	// cleanup parameter padding
	if (padding != NULL) {
		(*env)->ReleaseIntArrayElements(env, _padding, (jint*)padding, 0);
	}

	// cleanup parameter packType
	if (packType != NULL) {
		(*env)->ReleaseIntArrayElements(env, _packType, (jint*)packType, 0);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkBox_gtk_1box_1reorder_1child
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jint _position
)
{
	GtkBox* self;
	GtkWidget* child;
	gint position;

	// convert parameter self
	self = (GtkBox*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter position
	position = (gint) _position;

	// call function
	gtk_box_reorder_child(self, child, position);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter position
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkBox_gtk_1box_1set_1center_1widget
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _widget
)
{
	GtkBox* self;
	GtkWidget* widget;

	// convert parameter self
	self = (GtkBox*) _self;

	// convert parameter widget
	widget = (GtkWidget*) _widget;

	// call function
	gtk_box_set_center_widget(self, widget);

	// cleanup parameter self

	// cleanup parameter widget
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkBox_gtk_1box_1set_1child_1packing
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jboolean _expand,
	jboolean _fill,
	jint _padding,
	jint _packType
)
{
	GtkBox* self;
	GtkWidget* child;
	gboolean expand;
	gboolean fill;
	guint padding;
	GtkPackType packType;

	// convert parameter self
	self = (GtkBox*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter expand
	expand = (gboolean) _expand;

	// convert parameter fill
	fill = (gboolean) _fill;

	// convert parameter padding
	padding = (guint) _padding;

	// convert parameter packType
	packType = (GtkPackType) _packType;

	// call function
	gtk_box_set_child_packing(self, child, expand, fill, padding, packType);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter expand

	// cleanup parameter fill

	// cleanup parameter padding

	// cleanup parameter packType
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkBox_gtk_1box_1set_1homogeneous
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _homogeneous
)
{
	GtkBox* self;
	gboolean homogeneous;

	// convert parameter self
	self = (GtkBox*) _self;

	// convert parameter homogeneous
	homogeneous = (gboolean) _homogeneous;

	// call function
	gtk_box_set_homogeneous(self, homogeneous);

	// cleanup parameter self

	// cleanup parameter homogeneous
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkBox_gtk_1box_1set_1spacing
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _spacing
)
{
	GtkBox* self;
	gint spacing;

	// convert parameter self
	self = (GtkBox*) _self;

	// convert parameter spacing
	spacing = (gint) _spacing;

	// call function
	gtk_box_set_spacing(self, spacing);

	// cleanup parameter self

	// cleanup parameter spacing
}
