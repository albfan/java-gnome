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
#include "org_gnome_gtk_GtkTable.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTable_gtk_1table_1new
(
	JNIEnv* env,
	jclass cls,
	jint _rows,
	jint _columns,
	jboolean _homogeneous
)
{
	GtkWidget* result;
	jlong _result;
	guint rows;
	guint columns;
	gboolean homogeneous;

	// convert parameter rows
	rows = (guint) _rows;

	// convert parameter columns
	columns = (guint) _columns;

	// convert parameter homogeneous
	homogeneous = (gboolean) _homogeneous;

	// call function
	result = gtk_table_new(rows, columns, homogeneous);

	// cleanup parameter rows

	// cleanup parameter columns

	// cleanup parameter homogeneous

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
Java_org_gnome_gtk_GtkTable_gtk_1table_1attach
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jint _leftAttach,
	jint _rightAttach,
	jint _topAttach,
	jint _bottomAttach,
	jint _xoptions,
	jint _yoptions,
	jint _xpadding,
	jint _ypadding
)
{
	GtkTable* self;
	GtkWidget* child;
	guint leftAttach;
	guint rightAttach;
	guint topAttach;
	guint bottomAttach;
	GtkAttachOptions xoptions;
	GtkAttachOptions yoptions;
	guint xpadding;
	guint ypadding;

	// convert parameter self
	self = (GtkTable*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter leftAttach
	leftAttach = (guint) _leftAttach;

	// convert parameter rightAttach
	rightAttach = (guint) _rightAttach;

	// convert parameter topAttach
	topAttach = (guint) _topAttach;

	// convert parameter bottomAttach
	bottomAttach = (guint) _bottomAttach;

	// convert parameter xoptions
	xoptions = (GtkAttachOptions) _xoptions;

	// convert parameter yoptions
	yoptions = (GtkAttachOptions) _yoptions;

	// convert parameter xpadding
	xpadding = (guint) _xpadding;

	// convert parameter ypadding
	ypadding = (guint) _ypadding;

	// call function
	gtk_table_attach(self, child, leftAttach, rightAttach, topAttach, bottomAttach, xoptions, yoptions, xpadding, ypadding);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter leftAttach

	// cleanup parameter rightAttach

	// cleanup parameter topAttach

	// cleanup parameter bottomAttach

	// cleanup parameter xoptions

	// cleanup parameter yoptions

	// cleanup parameter xpadding

	// cleanup parameter ypadding
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTable_gtk_1table_1attach_1defaults
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _widget,
	jint _leftAttach,
	jint _rightAttach,
	jint _topAttach,
	jint _bottomAttach
)
{
	GtkTable* self;
	GtkWidget* widget;
	guint leftAttach;
	guint rightAttach;
	guint topAttach;
	guint bottomAttach;

	// convert parameter self
	self = (GtkTable*) _self;

	// convert parameter widget
	widget = (GtkWidget*) _widget;

	// convert parameter leftAttach
	leftAttach = (guint) _leftAttach;

	// convert parameter rightAttach
	rightAttach = (guint) _rightAttach;

	// convert parameter topAttach
	topAttach = (guint) _topAttach;

	// convert parameter bottomAttach
	bottomAttach = (guint) _bottomAttach;

	// call function
	gtk_table_attach_defaults(self, widget, leftAttach, rightAttach, topAttach, bottomAttach);

	// cleanup parameter self

	// cleanup parameter widget

	// cleanup parameter leftAttach

	// cleanup parameter rightAttach

	// cleanup parameter topAttach

	// cleanup parameter bottomAttach
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTable_gtk_1table_1get_1col_1spacing
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _column
)
{
	guint result;
	jint _result;
	GtkTable* self;
	guint column;

	// convert parameter self
	self = (GtkTable*) _self;

	// convert parameter column
	column = (guint) _column;

	// call function
	result = gtk_table_get_col_spacing(self, column);

	// cleanup parameter self

	// cleanup parameter column

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTable_gtk_1table_1get_1default_1col_1spacing
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GtkTable* self;

	// convert parameter self
	self = (GtkTable*) _self;

	// call function
	result = gtk_table_get_default_col_spacing(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTable_gtk_1table_1get_1default_1row_1spacing
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GtkTable* self;

	// convert parameter self
	self = (GtkTable*) _self;

	// call function
	result = gtk_table_get_default_row_spacing(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTable_gtk_1table_1get_1homogeneous
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkTable* self;

	// convert parameter self
	self = (GtkTable*) _self;

	// call function
	result = gtk_table_get_homogeneous(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTable_gtk_1table_1get_1row_1spacing
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _row
)
{
	guint result;
	jint _result;
	GtkTable* self;
	guint row;

	// convert parameter self
	self = (GtkTable*) _self;

	// convert parameter row
	row = (guint) _row;

	// call function
	result = gtk_table_get_row_spacing(self, row);

	// cleanup parameter self

	// cleanup parameter row

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTable_gtk_1table_1get_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _rows,
	jintArray _columns
)
{
	GtkTable* self;
	guint* rows;
	guint* columns;

	// convert parameter self
	self = (GtkTable*) _self;

	// convert parameter rows
	if (_rows == NULL) {
		rows = NULL;
	} else {
		rows = (guint*) (*env)->GetIntArrayElements(env, _rows, NULL);
		if (rows == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter columns
	if (_columns == NULL) {
		columns = NULL;
	} else {
		columns = (guint*) (*env)->GetIntArrayElements(env, _columns, NULL);
		if (columns == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_table_get_size(self, rows, columns);

	// cleanup parameter self

	// cleanup parameter rows
	if (rows != NULL) {
		(*env)->ReleaseIntArrayElements(env, _rows, (jint*)rows, 0);
	}

	// cleanup parameter columns
	if (columns != NULL) {
		(*env)->ReleaseIntArrayElements(env, _columns, (jint*)columns, 0);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTable_gtk_1table_1resize
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _rows,
	jint _columns
)
{
	GtkTable* self;
	guint rows;
	guint columns;

	// convert parameter self
	self = (GtkTable*) _self;

	// convert parameter rows
	rows = (guint) _rows;

	// convert parameter columns
	columns = (guint) _columns;

	// call function
	gtk_table_resize(self, rows, columns);

	// cleanup parameter self

	// cleanup parameter rows

	// cleanup parameter columns
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTable_gtk_1table_1set_1col_1spacing
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _column,
	jint _spacing
)
{
	GtkTable* self;
	guint column;
	guint spacing;

	// convert parameter self
	self = (GtkTable*) _self;

	// convert parameter column
	column = (guint) _column;

	// convert parameter spacing
	spacing = (guint) _spacing;

	// call function
	gtk_table_set_col_spacing(self, column, spacing);

	// cleanup parameter self

	// cleanup parameter column

	// cleanup parameter spacing
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTable_gtk_1table_1set_1col_1spacings
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _spacing
)
{
	GtkTable* self;
	guint spacing;

	// convert parameter self
	self = (GtkTable*) _self;

	// convert parameter spacing
	spacing = (guint) _spacing;

	// call function
	gtk_table_set_col_spacings(self, spacing);

	// cleanup parameter self

	// cleanup parameter spacing
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTable_gtk_1table_1set_1homogeneous
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _homogeneous
)
{
	GtkTable* self;
	gboolean homogeneous;

	// convert parameter self
	self = (GtkTable*) _self;

	// convert parameter homogeneous
	homogeneous = (gboolean) _homogeneous;

	// call function
	gtk_table_set_homogeneous(self, homogeneous);

	// cleanup parameter self

	// cleanup parameter homogeneous
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTable_gtk_1table_1set_1row_1spacing
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _row,
	jint _spacing
)
{
	GtkTable* self;
	guint row;
	guint spacing;

	// convert parameter self
	self = (GtkTable*) _self;

	// convert parameter row
	row = (guint) _row;

	// convert parameter spacing
	spacing = (guint) _spacing;

	// call function
	gtk_table_set_row_spacing(self, row, spacing);

	// cleanup parameter self

	// cleanup parameter row

	// cleanup parameter spacing
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTable_gtk_1table_1set_1row_1spacings
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _spacing
)
{
	GtkTable* self;
	guint spacing;

	// convert parameter self
	self = (GtkTable*) _self;

	// convert parameter spacing
	spacing = (guint) _spacing;

	// call function
	gtk_table_set_row_spacings(self, spacing);

	// cleanup parameter self

	// cleanup parameter spacing
}
