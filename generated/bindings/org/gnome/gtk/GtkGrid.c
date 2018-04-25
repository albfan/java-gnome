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
#include "org_gnome_gtk_GtkGrid.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkGrid_gtk_1grid_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkWidget* result;
	jlong _result;

	// call function
	result = gtk_grid_new();

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
Java_org_gnome_gtk_GtkGrid_gtk_1grid_1attach
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jint _left,
	jint _top,
	jint _width,
	jint _height
)
{
	GtkGrid* self;
	GtkWidget* child;
	gint left;
	gint top;
	gint width;
	gint height;

	// convert parameter self
	self = (GtkGrid*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter left
	left = (gint) _left;

	// convert parameter top
	top = (gint) _top;

	// convert parameter width
	width = (gint) _width;

	// convert parameter height
	height = (gint) _height;

	// call function
	gtk_grid_attach(self, child, left, top, width, height);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter left

	// cleanup parameter top

	// cleanup parameter width

	// cleanup parameter height
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkGrid_gtk_1grid_1attach_1next_1to
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jlong _sibling,
	jint _side,
	jint _width,
	jint _height
)
{
	GtkGrid* self;
	GtkWidget* child;
	GtkWidget* sibling;
	GtkPositionType side;
	gint width;
	gint height;

	// convert parameter self
	self = (GtkGrid*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter sibling
	sibling = (GtkWidget*) _sibling;

	// convert parameter side
	side = (GtkPositionType) _side;

	// convert parameter width
	width = (gint) _width;

	// convert parameter height
	height = (gint) _height;

	// call function
	gtk_grid_attach_next_to(self, child, sibling, side, width, height);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter sibling

	// cleanup parameter side

	// cleanup parameter width

	// cleanup parameter height
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkGrid_gtk_1grid_1get_1baseline_1row
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkGrid* self;

	// convert parameter self
	self = (GtkGrid*) _self;

	// call function
	result = gtk_grid_get_baseline_row(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkGrid_gtk_1grid_1get_1child_1at
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _left,
	jint _top
)
{
	GtkWidget* result;
	jlong _result;
	GtkGrid* self;
	gint left;
	gint top;

	// convert parameter self
	self = (GtkGrid*) _self;

	// convert parameter left
	left = (gint) _left;

	// convert parameter top
	top = (gint) _top;

	// call function
	result = gtk_grid_get_child_at(self, left, top);

	// cleanup parameter self

	// cleanup parameter left

	// cleanup parameter top

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
Java_org_gnome_gtk_GtkGrid_gtk_1grid_1get_1column_1homogeneous
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkGrid* self;

	// convert parameter self
	self = (GtkGrid*) _self;

	// call function
	result = gtk_grid_get_column_homogeneous(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkGrid_gtk_1grid_1get_1column_1spacing
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GtkGrid* self;

	// convert parameter self
	self = (GtkGrid*) _self;

	// call function
	result = gtk_grid_get_column_spacing(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkGrid_gtk_1grid_1get_1row_1homogeneous
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkGrid* self;

	// convert parameter self
	self = (GtkGrid*) _self;

	// call function
	result = gtk_grid_get_row_homogeneous(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkGrid_gtk_1grid_1get_1row_1spacing
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GtkGrid* self;

	// convert parameter self
	self = (GtkGrid*) _self;

	// call function
	result = gtk_grid_get_row_spacing(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkGrid_gtk_1grid_1insert_1column
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _position
)
{
	GtkGrid* self;
	gint position;

	// convert parameter self
	self = (GtkGrid*) _self;

	// convert parameter position
	position = (gint) _position;

	// call function
	gtk_grid_insert_column(self, position);

	// cleanup parameter self

	// cleanup parameter position
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkGrid_gtk_1grid_1insert_1next_1to
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _sibling,
	jint _side
)
{
	GtkGrid* self;
	GtkWidget* sibling;
	GtkPositionType side;

	// convert parameter self
	self = (GtkGrid*) _self;

	// convert parameter sibling
	sibling = (GtkWidget*) _sibling;

	// convert parameter side
	side = (GtkPositionType) _side;

	// call function
	gtk_grid_insert_next_to(self, sibling, side);

	// cleanup parameter self

	// cleanup parameter sibling

	// cleanup parameter side
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkGrid_gtk_1grid_1insert_1row
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _position
)
{
	GtkGrid* self;
	gint position;

	// convert parameter self
	self = (GtkGrid*) _self;

	// convert parameter position
	position = (gint) _position;

	// call function
	gtk_grid_insert_row(self, position);

	// cleanup parameter self

	// cleanup parameter position
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkGrid_gtk_1grid_1remove_1column
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _position
)
{
	GtkGrid* self;
	gint position;

	// convert parameter self
	self = (GtkGrid*) _self;

	// convert parameter position
	position = (gint) _position;

	// call function
	gtk_grid_remove_column(self, position);

	// cleanup parameter self

	// cleanup parameter position
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkGrid_gtk_1grid_1remove_1row
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _position
)
{
	GtkGrid* self;
	gint position;

	// convert parameter self
	self = (GtkGrid*) _self;

	// convert parameter position
	position = (gint) _position;

	// call function
	gtk_grid_remove_row(self, position);

	// cleanup parameter self

	// cleanup parameter position
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkGrid_gtk_1grid_1set_1baseline_1row
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _row
)
{
	GtkGrid* self;
	gint row;

	// convert parameter self
	self = (GtkGrid*) _self;

	// convert parameter row
	row = (gint) _row;

	// call function
	gtk_grid_set_baseline_row(self, row);

	// cleanup parameter self

	// cleanup parameter row
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkGrid_gtk_1grid_1set_1column_1homogeneous
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _homogeneous
)
{
	GtkGrid* self;
	gboolean homogeneous;

	// convert parameter self
	self = (GtkGrid*) _self;

	// convert parameter homogeneous
	homogeneous = (gboolean) _homogeneous;

	// call function
	gtk_grid_set_column_homogeneous(self, homogeneous);

	// cleanup parameter self

	// cleanup parameter homogeneous
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkGrid_gtk_1grid_1set_1column_1spacing
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _spacing
)
{
	GtkGrid* self;
	guint spacing;

	// convert parameter self
	self = (GtkGrid*) _self;

	// convert parameter spacing
	spacing = (guint) _spacing;

	// call function
	gtk_grid_set_column_spacing(self, spacing);

	// cleanup parameter self

	// cleanup parameter spacing
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkGrid_gtk_1grid_1set_1row_1homogeneous
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _homogeneous
)
{
	GtkGrid* self;
	gboolean homogeneous;

	// convert parameter self
	self = (GtkGrid*) _self;

	// convert parameter homogeneous
	homogeneous = (gboolean) _homogeneous;

	// call function
	gtk_grid_set_row_homogeneous(self, homogeneous);

	// cleanup parameter self

	// cleanup parameter homogeneous
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkGrid_gtk_1grid_1set_1row_1spacing
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _spacing
)
{
	GtkGrid* self;
	guint spacing;

	// convert parameter self
	self = (GtkGrid*) _self;

	// convert parameter spacing
	spacing = (guint) _spacing;

	// call function
	gtk_grid_set_row_spacing(self, spacing);

	// cleanup parameter self

	// cleanup parameter spacing
}
