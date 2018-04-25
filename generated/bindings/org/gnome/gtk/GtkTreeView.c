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
#include "org_gnome_gtk_GtkTreeView.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkWidget* result;
	jlong _result;

	// call function
	result = gtk_tree_view_new();

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
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1new_1with_1model
(
	JNIEnv* env,
	jclass cls,
	jlong _model
)
{
	GtkWidget* result;
	jlong _result;
	GtkTreeModel* model;

	// convert parameter model
	model = (GtkTreeModel*) _model;

	// call function
	result = gtk_tree_view_new_with_model(model);

	// cleanup parameter model

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1append_1column
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _column
)
{
	gint result;
	jint _result;
	GtkTreeView* self;
	GtkTreeViewColumn* column;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter column
	column = (GtkTreeViewColumn*) _column;

	// call function
	result = gtk_tree_view_append_column(self, column);

	// cleanup parameter self

	// cleanup parameter column

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1collapse_1all
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreeView* self;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// call function
	gtk_tree_view_collapse_all(self);

	// cleanup parameter self
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1collapse_1row
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path
)
{
	gboolean result;
	jboolean _result;
	GtkTreeView* self;
	GtkTreePath* path;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// call function
	result = gtk_tree_view_collapse_row(self, path);

	// cleanup parameter self

	// cleanup parameter path

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1columns_1autosize
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreeView* self;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// call function
	gtk_tree_view_columns_autosize(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1convert_1bin_1window_1to_1tree_1coords
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _bx,
	jint _by,
	jintArray _tx,
	jintArray _ty
)
{
	GtkTreeView* self;
	gint bx;
	gint by;
	gint* tx;
	gint* ty;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter bx
	bx = (gint) _bx;

	// convert parameter by
	by = (gint) _by;

	// convert parameter tx
	if (_tx == NULL) {
		tx = NULL;
	} else {
		tx = (gint*) (*env)->GetIntArrayElements(env, _tx, NULL);
		if (tx == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter ty
	if (_ty == NULL) {
		ty = NULL;
	} else {
		ty = (gint*) (*env)->GetIntArrayElements(env, _ty, NULL);
		if (ty == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_tree_view_convert_bin_window_to_tree_coords(self, bx, by, tx, ty);

	// cleanup parameter self

	// cleanup parameter bx

	// cleanup parameter by

	// cleanup parameter tx
	if (tx != NULL) {
		(*env)->ReleaseIntArrayElements(env, _tx, (jint*)tx, 0);
	}

	// cleanup parameter ty
	if (ty != NULL) {
		(*env)->ReleaseIntArrayElements(env, _ty, (jint*)ty, 0);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1convert_1bin_1window_1to_1widget_1coords
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _bx,
	jint _by,
	jintArray _wx,
	jintArray _wy
)
{
	GtkTreeView* self;
	gint bx;
	gint by;
	gint* wx;
	gint* wy;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter bx
	bx = (gint) _bx;

	// convert parameter by
	by = (gint) _by;

	// convert parameter wx
	if (_wx == NULL) {
		wx = NULL;
	} else {
		wx = (gint*) (*env)->GetIntArrayElements(env, _wx, NULL);
		if (wx == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter wy
	if (_wy == NULL) {
		wy = NULL;
	} else {
		wy = (gint*) (*env)->GetIntArrayElements(env, _wy, NULL);
		if (wy == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_tree_view_convert_bin_window_to_widget_coords(self, bx, by, wx, wy);

	// cleanup parameter self

	// cleanup parameter bx

	// cleanup parameter by

	// cleanup parameter wx
	if (wx != NULL) {
		(*env)->ReleaseIntArrayElements(env, _wx, (jint*)wx, 0);
	}

	// cleanup parameter wy
	if (wy != NULL) {
		(*env)->ReleaseIntArrayElements(env, _wy, (jint*)wy, 0);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1convert_1tree_1to_1bin_1window_1coords
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _tx,
	jint _ty,
	jintArray _bx,
	jintArray _by
)
{
	GtkTreeView* self;
	gint tx;
	gint ty;
	gint* bx;
	gint* by;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter tx
	tx = (gint) _tx;

	// convert parameter ty
	ty = (gint) _ty;

	// convert parameter bx
	if (_bx == NULL) {
		bx = NULL;
	} else {
		bx = (gint*) (*env)->GetIntArrayElements(env, _bx, NULL);
		if (bx == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter by
	if (_by == NULL) {
		by = NULL;
	} else {
		by = (gint*) (*env)->GetIntArrayElements(env, _by, NULL);
		if (by == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_tree_view_convert_tree_to_bin_window_coords(self, tx, ty, bx, by);

	// cleanup parameter self

	// cleanup parameter tx

	// cleanup parameter ty

	// cleanup parameter bx
	if (bx != NULL) {
		(*env)->ReleaseIntArrayElements(env, _bx, (jint*)bx, 0);
	}

	// cleanup parameter by
	if (by != NULL) {
		(*env)->ReleaseIntArrayElements(env, _by, (jint*)by, 0);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1convert_1tree_1to_1widget_1coords
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _tx,
	jint _ty,
	jintArray _wx,
	jintArray _wy
)
{
	GtkTreeView* self;
	gint tx;
	gint ty;
	gint* wx;
	gint* wy;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter tx
	tx = (gint) _tx;

	// convert parameter ty
	ty = (gint) _ty;

	// convert parameter wx
	if (_wx == NULL) {
		wx = NULL;
	} else {
		wx = (gint*) (*env)->GetIntArrayElements(env, _wx, NULL);
		if (wx == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter wy
	if (_wy == NULL) {
		wy = NULL;
	} else {
		wy = (gint*) (*env)->GetIntArrayElements(env, _wy, NULL);
		if (wy == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_tree_view_convert_tree_to_widget_coords(self, tx, ty, wx, wy);

	// cleanup parameter self

	// cleanup parameter tx

	// cleanup parameter ty

	// cleanup parameter wx
	if (wx != NULL) {
		(*env)->ReleaseIntArrayElements(env, _wx, (jint*)wx, 0);
	}

	// cleanup parameter wy
	if (wy != NULL) {
		(*env)->ReleaseIntArrayElements(env, _wy, (jint*)wy, 0);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1convert_1widget_1to_1bin_1window_1coords
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _wx,
	jint _wy,
	jintArray _bx,
	jintArray _by
)
{
	GtkTreeView* self;
	gint wx;
	gint wy;
	gint* bx;
	gint* by;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter wx
	wx = (gint) _wx;

	// convert parameter wy
	wy = (gint) _wy;

	// convert parameter bx
	if (_bx == NULL) {
		bx = NULL;
	} else {
		bx = (gint*) (*env)->GetIntArrayElements(env, _bx, NULL);
		if (bx == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter by
	if (_by == NULL) {
		by = NULL;
	} else {
		by = (gint*) (*env)->GetIntArrayElements(env, _by, NULL);
		if (by == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_tree_view_convert_widget_to_bin_window_coords(self, wx, wy, bx, by);

	// cleanup parameter self

	// cleanup parameter wx

	// cleanup parameter wy

	// cleanup parameter bx
	if (bx != NULL) {
		(*env)->ReleaseIntArrayElements(env, _bx, (jint*)bx, 0);
	}

	// cleanup parameter by
	if (by != NULL) {
		(*env)->ReleaseIntArrayElements(env, _by, (jint*)by, 0);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1convert_1widget_1to_1tree_1coords
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _wx,
	jint _wy,
	jintArray _tx,
	jintArray _ty
)
{
	GtkTreeView* self;
	gint wx;
	gint wy;
	gint* tx;
	gint* ty;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter wx
	wx = (gint) _wx;

	// convert parameter wy
	wy = (gint) _wy;

	// convert parameter tx
	if (_tx == NULL) {
		tx = NULL;
	} else {
		tx = (gint*) (*env)->GetIntArrayElements(env, _tx, NULL);
		if (tx == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter ty
	if (_ty == NULL) {
		ty = NULL;
	} else {
		ty = (gint*) (*env)->GetIntArrayElements(env, _ty, NULL);
		if (ty == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_tree_view_convert_widget_to_tree_coords(self, wx, wy, tx, ty);

	// cleanup parameter self

	// cleanup parameter wx

	// cleanup parameter wy

	// cleanup parameter tx
	if (tx != NULL) {
		(*env)->ReleaseIntArrayElements(env, _tx, (jint*)tx, 0);
	}

	// cleanup parameter ty
	if (ty != NULL) {
		(*env)->ReleaseIntArrayElements(env, _ty, (jint*)ty, 0);
	}
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1create_1row_1drag_1icon
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path
)
{
	cairo_surface_t* result;
	jlong _result;
	GtkTreeView* self;
	GtkTreePath* path;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// call function
	result = gtk_tree_view_create_row_drag_icon(self, path);

	// cleanup parameter self

	// cleanup parameter path

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1expand_1all
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreeView* self;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// call function
	gtk_tree_view_expand_all(self);

	// cleanup parameter self
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1expand_1row
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path,
	jboolean _openAll
)
{
	gboolean result;
	jboolean _result;
	GtkTreeView* self;
	GtkTreePath* path;
	gboolean openAll;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// convert parameter openAll
	openAll = (gboolean) _openAll;

	// call function
	result = gtk_tree_view_expand_row(self, path, openAll);

	// cleanup parameter self

	// cleanup parameter path

	// cleanup parameter openAll

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1expand_1to_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path
)
{
	GtkTreeView* self;
	GtkTreePath* path;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// call function
	gtk_tree_view_expand_to_path(self, path);

	// cleanup parameter self

	// cleanup parameter path
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1activate_1on_1single_1click
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkTreeView* self;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// call function
	result = gtk_tree_view_get_activate_on_single_click(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1background_1area
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path,
	jlong _column,
	jlong _rect
)
{
	GtkTreeView* self;
	GtkTreePath* path;
	GtkTreeViewColumn* column;
	GdkRectangle* rect;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// convert parameter column
	column = (GtkTreeViewColumn*) _column;

	// convert parameter rect
	rect = (GdkRectangle*) _rect;

	// call function
	gtk_tree_view_get_background_area(self, path, column, rect);

	// cleanup parameter self

	// cleanup parameter path

	// cleanup parameter column

	// cleanup parameter rect
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1bin_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* result;
	jlong _result;
	GtkTreeView* self;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// call function
	result = gtk_tree_view_get_bin_window(self);

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

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1cell_1area
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path,
	jlong _column,
	jlong _rect
)
{
	GtkTreeView* self;
	GtkTreePath* path;
	GtkTreeViewColumn* column;
	GdkRectangle* rect;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// convert parameter column
	column = (GtkTreeViewColumn*) _column;

	// convert parameter rect
	rect = (GdkRectangle*) _rect;

	// call function
	gtk_tree_view_get_cell_area(self, path, column, rect);

	// cleanup parameter self

	// cleanup parameter path

	// cleanup parameter column

	// cleanup parameter rect
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1column
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _n
)
{
	GtkTreeViewColumn* result;
	jlong _result;
	GtkTreeView* self;
	gint n;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter n
	n = (gint) _n;

	// call function
	result = gtk_tree_view_get_column(self, n);

	// cleanup parameter self

	// cleanup parameter n

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, FALSE);
	}

	// and finally
	return _result;
}

JNIEXPORT jlongArray JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1columns
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GList* result;
	jlongArray _result;
	GtkTreeView* self;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// call function
	result = gtk_tree_view_get_columns(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlongArray) bindings_java_convert_glist_to_jarray(env, result);

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1cursor
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlongArray _path,
	jlongArray _focusColumn
)
{
	GtkTreeView* self;
	GtkTreePath** path;
	GtkTreeViewColumn** focusColumn;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter path
	if (_path == NULL) {
		path = NULL;
	} else {
		path = (GtkTreePath**) bindings_java_convert_jarray_to_gpointer(env, _path);
		if (path == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter focusColumn
	if (_focusColumn == NULL) {
		focusColumn = NULL;
	} else {
		focusColumn = (GtkTreeViewColumn**) bindings_java_convert_jarray_to_gpointer(env, _focusColumn);
		if (focusColumn == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_tree_view_get_cursor(self, path, focusColumn);

	// cleanup parameter self

	// cleanup parameter path
	if (path != NULL) {
		bindings_java_convert_gpointer_to_jarray(env, (gpointer*)path, _path);
	}

	// cleanup parameter focusColumn
	if (focusColumn != NULL) {
		bindings_java_convert_gpointer_to_jarray(env, (gpointer*)focusColumn, _focusColumn);
	}
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1dest_1row_1at_1pos
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _dragX,
	jint _dragY,
	jlongArray _path,
	jintArray _pos
)
{
	gboolean result;
	jboolean _result;
	GtkTreeView* self;
	gint dragX;
	gint dragY;
	GtkTreePath** path;
	GtkTreeViewDropPosition* pos;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter dragX
	dragX = (gint) _dragX;

	// convert parameter dragY
	dragY = (gint) _dragY;

	// convert parameter path
	if (_path == NULL) {
		path = NULL;
	} else {
		path = (GtkTreePath**) bindings_java_convert_jarray_to_gpointer(env, _path);
		if (path == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter pos
	if (_pos == NULL) {
		pos = NULL;
	} else {
		pos = (GtkTreeViewDropPosition*) (*env)->GetIntArrayElements(env, _pos, NULL);
		if (pos == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_tree_view_get_dest_row_at_pos(self, dragX, dragY, path, pos);

	// cleanup parameter self

	// cleanup parameter dragX

	// cleanup parameter dragY

	// cleanup parameter path
	if (path != NULL) {
		bindings_java_convert_gpointer_to_jarray(env, (gpointer*)path, _path);
	}

	// cleanup parameter pos
	if (pos != NULL) {
		(*env)->ReleaseIntArrayElements(env, _pos, (jint*)pos, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1drag_1dest_1row
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlongArray _path,
	jintArray _pos
)
{
	GtkTreeView* self;
	GtkTreePath** path;
	GtkTreeViewDropPosition* pos;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter path
	if (_path == NULL) {
		path = NULL;
	} else {
		path = (GtkTreePath**) bindings_java_convert_jarray_to_gpointer(env, _path);
		if (path == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter pos
	if (_pos == NULL) {
		pos = NULL;
	} else {
		pos = (GtkTreeViewDropPosition*) (*env)->GetIntArrayElements(env, _pos, NULL);
		if (pos == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_tree_view_get_drag_dest_row(self, path, pos);

	// cleanup parameter self

	// cleanup parameter path
	if (path != NULL) {
		bindings_java_convert_gpointer_to_jarray(env, (gpointer*)path, _path);
	}

	// cleanup parameter pos
	if (pos != NULL) {
		(*env)->ReleaseIntArrayElements(env, _pos, (jint*)pos, 0);
	}
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1enable_1search
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkTreeView* self;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// call function
	result = gtk_tree_view_get_enable_search(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1enable_1tree_1lines
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkTreeView* self;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// call function
	result = gtk_tree_view_get_enable_tree_lines(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1expander_1column
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreeViewColumn* result;
	jlong _result;
	GtkTreeView* self;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// call function
	result = gtk_tree_view_get_expander_column(self);

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
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1fixed_1height_1mode
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkTreeView* self;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// call function
	result = gtk_tree_view_get_fixed_height_mode(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1grid_1lines
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreeViewGridLines result;
	jint _result;
	GtkTreeView* self;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// call function
	result = gtk_tree_view_get_grid_lines(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1hadjustment
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAdjustment* result;
	jlong _result;
	GtkTreeView* self;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// call function
	result = gtk_tree_view_get_hadjustment(self);

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
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1headers_1clickable
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkTreeView* self;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// call function
	result = gtk_tree_view_get_headers_clickable(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1headers_1visible
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkTreeView* self;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// call function
	result = gtk_tree_view_get_headers_visible(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1hover_1expand
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkTreeView* self;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// call function
	result = gtk_tree_view_get_hover_expand(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1hover_1selection
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkTreeView* self;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// call function
	result = gtk_tree_view_get_hover_selection(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1level_1indentation
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkTreeView* self;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// call function
	result = gtk_tree_view_get_level_indentation(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1model
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreeModel* result;
	jlong _result;
	GtkTreeView* self;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// call function
	result = gtk_tree_view_get_model(self);

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
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1n_1columns
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GtkTreeView* self;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// call function
	result = gtk_tree_view_get_n_columns(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1path_1at_1pos
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _x,
	jint _y,
	jlongArray _path,
	jlongArray _column,
	jintArray _cellX,
	jintArray _cellY
)
{
	gboolean result;
	jboolean _result;
	GtkTreeView* self;
	gint x;
	gint y;
	GtkTreePath** path;
	GtkTreeViewColumn** column;
	gint* cellX;
	gint* cellY;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter x
	x = (gint) _x;

	// convert parameter y
	y = (gint) _y;

	// convert parameter path
	if (_path == NULL) {
		path = NULL;
	} else {
		path = (GtkTreePath**) bindings_java_convert_jarray_to_gpointer(env, _path);
		if (path == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter column
	if (_column == NULL) {
		column = NULL;
	} else {
		column = (GtkTreeViewColumn**) bindings_java_convert_jarray_to_gpointer(env, _column);
		if (column == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter cellX
	if (_cellX == NULL) {
		cellX = NULL;
	} else {
		cellX = (gint*) (*env)->GetIntArrayElements(env, _cellX, NULL);
		if (cellX == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter cellY
	if (_cellY == NULL) {
		cellY = NULL;
	} else {
		cellY = (gint*) (*env)->GetIntArrayElements(env, _cellY, NULL);
		if (cellY == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_tree_view_get_path_at_pos(self, x, y, path, column, cellX, cellY);

	// cleanup parameter self

	// cleanup parameter x

	// cleanup parameter y

	// cleanup parameter path
	if (path != NULL) {
		bindings_java_convert_gpointer_to_jarray(env, (gpointer*)path, _path);
	}

	// cleanup parameter column
	if (column != NULL) {
		bindings_java_convert_gpointer_to_jarray(env, (gpointer*)column, _column);
	}

	// cleanup parameter cellX
	if (cellX != NULL) {
		(*env)->ReleaseIntArrayElements(env, _cellX, (jint*)cellX, 0);
	}

	// cleanup parameter cellY
	if (cellY != NULL) {
		(*env)->ReleaseIntArrayElements(env, _cellY, (jint*)cellY, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1reorderable
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkTreeView* self;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// call function
	result = gtk_tree_view_get_reorderable(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1rubber_1banding
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkTreeView* self;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// call function
	result = gtk_tree_view_get_rubber_banding(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1rules_1hint
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkTreeView* self;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// call function
	result = gtk_tree_view_get_rules_hint(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1search_1column
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkTreeView* self;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// call function
	result = gtk_tree_view_get_search_column(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1search_1entry
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkEntry* result;
	jlong _result;
	GtkTreeView* self;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// call function
	result = gtk_tree_view_get_search_entry(self);

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
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1selection
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreeSelection* result;
	jlong _result;
	GtkTreeView* self;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// call function
	result = gtk_tree_view_get_selection(self);

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
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1show_1expanders
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkTreeView* self;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// call function
	result = gtk_tree_view_get_show_expanders(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1tooltip_1column
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkTreeView* self;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// call function
	result = gtk_tree_view_get_tooltip_column(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1tooltip_1context
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _x,
	jintArray _y,
	jboolean _keyboardTip,
	jlongArray _model,
	jlongArray _path,
	jlong _iter
)
{
	gboolean result;
	jboolean _result;
	GtkTreeView* self;
	gint* x;
	gint* y;
	gboolean keyboardTip;
	GtkTreeModel** model;
	GtkTreePath** path;
	GtkTreeIter* iter;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter x
	x = (gint*) (*env)->GetIntArrayElements(env, _x, NULL);
	if (x == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// convert parameter y
	y = (gint*) (*env)->GetIntArrayElements(env, _y, NULL);
	if (y == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// convert parameter keyboardTip
	keyboardTip = (gboolean) _keyboardTip;

	// convert parameter model
	if (_model == NULL) {
		model = NULL;
	} else {
		model = (GtkTreeModel**) bindings_java_convert_jarray_to_gpointer(env, _model);
		if (model == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter path
	if (_path == NULL) {
		path = NULL;
	} else {
		path = (GtkTreePath**) bindings_java_convert_jarray_to_gpointer(env, _path);
		if (path == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// call function
	result = gtk_tree_view_get_tooltip_context(self, x, y, keyboardTip, model, path, iter);

	// cleanup parameter self

	// cleanup parameter x
	(*env)->ReleaseIntArrayElements(env, _x, (jint*)x, 0);

	// cleanup parameter y
	(*env)->ReleaseIntArrayElements(env, _y, (jint*)y, 0);

	// cleanup parameter keyboardTip

	// cleanup parameter model
	if (model != NULL) {
		bindings_java_convert_gpointer_to_jarray(env, (gpointer*)model, _model);
	}

	// cleanup parameter path
	if (path != NULL) {
		bindings_java_convert_gpointer_to_jarray(env, (gpointer*)path, _path);
	}

	// cleanup parameter iter

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1vadjustment
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAdjustment* result;
	jlong _result;
	GtkTreeView* self;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// call function
	result = gtk_tree_view_get_vadjustment(self);

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
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1visible_1range
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlongArray _startPath,
	jlongArray _endPath
)
{
	gboolean result;
	jboolean _result;
	GtkTreeView* self;
	GtkTreePath** startPath;
	GtkTreePath** endPath;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter startPath
	if (_startPath == NULL) {
		startPath = NULL;
	} else {
		startPath = (GtkTreePath**) bindings_java_convert_jarray_to_gpointer(env, _startPath);
		if (startPath == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter endPath
	if (_endPath == NULL) {
		endPath = NULL;
	} else {
		endPath = (GtkTreePath**) bindings_java_convert_jarray_to_gpointer(env, _endPath);
		if (endPath == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_tree_view_get_visible_range(self, startPath, endPath);

	// cleanup parameter self

	// cleanup parameter startPath
	if (startPath != NULL) {
		bindings_java_convert_gpointer_to_jarray(env, (gpointer*)startPath, _startPath);
	}

	// cleanup parameter endPath
	if (endPath != NULL) {
		bindings_java_convert_gpointer_to_jarray(env, (gpointer*)endPath, _endPath);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1get_1visible_1rect
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _visibleRect
)
{
	GtkTreeView* self;
	GdkRectangle* visibleRect;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter visibleRect
	visibleRect = (GdkRectangle*) _visibleRect;

	// call function
	gtk_tree_view_get_visible_rect(self, visibleRect);

	// cleanup parameter self

	// cleanup parameter visibleRect
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1insert_1column
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _column,
	jint _position
)
{
	gint result;
	jint _result;
	GtkTreeView* self;
	GtkTreeViewColumn* column;
	gint position;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter column
	column = (GtkTreeViewColumn*) _column;

	// convert parameter position
	position = (gint) _position;

	// call function
	result = gtk_tree_view_insert_column(self, column, position);

	// cleanup parameter self

	// cleanup parameter column

	// cleanup parameter position

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1insert_1column_1with_1attributes
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _position,
	jstring _title,
	jlong _cell
)
{
	gint result;
	jint _result;
	GtkTreeView* self;
	gint position;
	const gchar* title;
	GtkCellRenderer* cell;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter position
	position = (gint) _position;

	// convert parameter title
	title = (const gchar*) bindings_java_getString(env, _title);
	if (title == NULL) {
		return  0; // Java Exception already thrown
	}

	// convert parameter cell
	cell = (GtkCellRenderer*) _cell;

	// call function
	result = gtk_tree_view_insert_column_with_attributes(self, position, title, cell, NULL);

	// cleanup parameter self

	// cleanup parameter position

	// cleanup parameter title
	bindings_java_releaseString(title);

	// cleanup parameter cell

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1is_1blank_1at_1pos
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _x,
	jint _y,
	jlongArray _path,
	jlongArray _column,
	jintArray _cellX,
	jintArray _cellY
)
{
	gboolean result;
	jboolean _result;
	GtkTreeView* self;
	gint x;
	gint y;
	GtkTreePath** path;
	GtkTreeViewColumn** column;
	gint* cellX;
	gint* cellY;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter x
	x = (gint) _x;

	// convert parameter y
	y = (gint) _y;

	// convert parameter path
	if (_path == NULL) {
		path = NULL;
	} else {
		path = (GtkTreePath**) bindings_java_convert_jarray_to_gpointer(env, _path);
		if (path == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter column
	if (_column == NULL) {
		column = NULL;
	} else {
		column = (GtkTreeViewColumn**) bindings_java_convert_jarray_to_gpointer(env, _column);
		if (column == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter cellX
	if (_cellX == NULL) {
		cellX = NULL;
	} else {
		cellX = (gint*) (*env)->GetIntArrayElements(env, _cellX, NULL);
		if (cellX == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter cellY
	if (_cellY == NULL) {
		cellY = NULL;
	} else {
		cellY = (gint*) (*env)->GetIntArrayElements(env, _cellY, NULL);
		if (cellY == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_tree_view_is_blank_at_pos(self, x, y, path, column, cellX, cellY);

	// cleanup parameter self

	// cleanup parameter x

	// cleanup parameter y

	// cleanup parameter path
	if (path != NULL) {
		bindings_java_convert_gpointer_to_jarray(env, (gpointer*)path, _path);
	}

	// cleanup parameter column
	if (column != NULL) {
		bindings_java_convert_gpointer_to_jarray(env, (gpointer*)column, _column);
	}

	// cleanup parameter cellX
	if (cellX != NULL) {
		(*env)->ReleaseIntArrayElements(env, _cellX, (jint*)cellX, 0);
	}

	// cleanup parameter cellY
	if (cellY != NULL) {
		(*env)->ReleaseIntArrayElements(env, _cellY, (jint*)cellY, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1is_1rubber_1banding_1active
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkTreeView* self;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// call function
	result = gtk_tree_view_is_rubber_banding_active(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1move_1column_1after
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _column,
	jlong _baseColumn
)
{
	GtkTreeView* self;
	GtkTreeViewColumn* column;
	GtkTreeViewColumn* baseColumn;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter column
	column = (GtkTreeViewColumn*) _column;

	// convert parameter baseColumn
	baseColumn = (GtkTreeViewColumn*) _baseColumn;

	// call function
	gtk_tree_view_move_column_after(self, column, baseColumn);

	// cleanup parameter self

	// cleanup parameter column

	// cleanup parameter baseColumn
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1remove_1column
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _column
)
{
	gint result;
	jint _result;
	GtkTreeView* self;
	GtkTreeViewColumn* column;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter column
	column = (GtkTreeViewColumn*) _column;

	// call function
	result = gtk_tree_view_remove_column(self, column);

	// cleanup parameter self

	// cleanup parameter column

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1row_1activated
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path,
	jlong _column
)
{
	GtkTreeView* self;
	GtkTreePath* path;
	GtkTreeViewColumn* column;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// convert parameter column
	column = (GtkTreeViewColumn*) _column;

	// call function
	gtk_tree_view_row_activated(self, path, column);

	// cleanup parameter self

	// cleanup parameter path

	// cleanup parameter column
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1row_1expanded
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path
)
{
	gboolean result;
	jboolean _result;
	GtkTreeView* self;
	GtkTreePath* path;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// call function
	result = gtk_tree_view_row_expanded(self, path);

	// cleanup parameter self

	// cleanup parameter path

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1scroll_1to_1cell
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path,
	jlong _column,
	jboolean _useAlign,
	jfloat _rowAlign,
	jfloat _colAlign
)
{
	GtkTreeView* self;
	GtkTreePath* path;
	GtkTreeViewColumn* column;
	gboolean useAlign;
	gfloat rowAlign;
	gfloat colAlign;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// convert parameter column
	column = (GtkTreeViewColumn*) _column;

	// convert parameter useAlign
	useAlign = (gboolean) _useAlign;

	// convert parameter rowAlign
	rowAlign = (gfloat) _rowAlign;

	// convert parameter colAlign
	colAlign = (gfloat) _colAlign;

	// call function
	gtk_tree_view_scroll_to_cell(self, path, column, useAlign, rowAlign, colAlign);

	// cleanup parameter self

	// cleanup parameter path

	// cleanup parameter column

	// cleanup parameter useAlign

	// cleanup parameter rowAlign

	// cleanup parameter colAlign
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1scroll_1to_1point
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _treeX,
	jint _treeY
)
{
	GtkTreeView* self;
	gint treeX;
	gint treeY;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter treeX
	treeX = (gint) _treeX;

	// convert parameter treeY
	treeY = (gint) _treeY;

	// call function
	gtk_tree_view_scroll_to_point(self, treeX, treeY);

	// cleanup parameter self

	// cleanup parameter treeX

	// cleanup parameter treeY
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1set_1activate_1on_1single_1click
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _single
)
{
	GtkTreeView* self;
	gboolean single;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter single
	single = (gboolean) _single;

	// call function
	gtk_tree_view_set_activate_on_single_click(self, single);

	// cleanup parameter self

	// cleanup parameter single
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1set_1cursor
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path,
	jlong _focusColumn,
	jboolean _startEditing
)
{
	GtkTreeView* self;
	GtkTreePath* path;
	GtkTreeViewColumn* focusColumn;
	gboolean startEditing;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// convert parameter focusColumn
	focusColumn = (GtkTreeViewColumn*) _focusColumn;

	// convert parameter startEditing
	startEditing = (gboolean) _startEditing;

	// call function
	gtk_tree_view_set_cursor(self, path, focusColumn, startEditing);

	// cleanup parameter self

	// cleanup parameter path

	// cleanup parameter focusColumn

	// cleanup parameter startEditing
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1set_1cursor_1on_1cell
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path,
	jlong _focusColumn,
	jlong _focusCell,
	jboolean _startEditing
)
{
	GtkTreeView* self;
	GtkTreePath* path;
	GtkTreeViewColumn* focusColumn;
	GtkCellRenderer* focusCell;
	gboolean startEditing;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// convert parameter focusColumn
	focusColumn = (GtkTreeViewColumn*) _focusColumn;

	// convert parameter focusCell
	focusCell = (GtkCellRenderer*) _focusCell;

	// convert parameter startEditing
	startEditing = (gboolean) _startEditing;

	// call function
	gtk_tree_view_set_cursor_on_cell(self, path, focusColumn, focusCell, startEditing);

	// cleanup parameter self

	// cleanup parameter path

	// cleanup parameter focusColumn

	// cleanup parameter focusCell

	// cleanup parameter startEditing
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1set_1drag_1dest_1row
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path,
	jint _pos
)
{
	GtkTreeView* self;
	GtkTreePath* path;
	GtkTreeViewDropPosition pos;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// convert parameter pos
	pos = (GtkTreeViewDropPosition) _pos;

	// call function
	gtk_tree_view_set_drag_dest_row(self, path, pos);

	// cleanup parameter self

	// cleanup parameter path

	// cleanup parameter pos
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1set_1enable_1search
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _enableSearch
)
{
	GtkTreeView* self;
	gboolean enableSearch;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter enableSearch
	enableSearch = (gboolean) _enableSearch;

	// call function
	gtk_tree_view_set_enable_search(self, enableSearch);

	// cleanup parameter self

	// cleanup parameter enableSearch
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1set_1enable_1tree_1lines
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _enabled
)
{
	GtkTreeView* self;
	gboolean enabled;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter enabled
	enabled = (gboolean) _enabled;

	// call function
	gtk_tree_view_set_enable_tree_lines(self, enabled);

	// cleanup parameter self

	// cleanup parameter enabled
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1set_1expander_1column
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _column
)
{
	GtkTreeView* self;
	GtkTreeViewColumn* column;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter column
	column = (GtkTreeViewColumn*) _column;

	// call function
	gtk_tree_view_set_expander_column(self, column);

	// cleanup parameter self

	// cleanup parameter column
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1set_1fixed_1height_1mode
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _enable
)
{
	GtkTreeView* self;
	gboolean enable;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter enable
	enable = (gboolean) _enable;

	// call function
	gtk_tree_view_set_fixed_height_mode(self, enable);

	// cleanup parameter self

	// cleanup parameter enable
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1set_1grid_1lines
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _gridLines
)
{
	GtkTreeView* self;
	GtkTreeViewGridLines gridLines;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter gridLines
	gridLines = (GtkTreeViewGridLines) _gridLines;

	// call function
	gtk_tree_view_set_grid_lines(self, gridLines);

	// cleanup parameter self

	// cleanup parameter gridLines
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1set_1hadjustment
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _adjustment
)
{
	GtkTreeView* self;
	GtkAdjustment* adjustment;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter adjustment
	adjustment = (GtkAdjustment*) _adjustment;

	// call function
	gtk_tree_view_set_hadjustment(self, adjustment);

	// cleanup parameter self

	// cleanup parameter adjustment
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1set_1headers_1clickable
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	GtkTreeView* self;
	gboolean setting;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gtk_tree_view_set_headers_clickable(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1set_1headers_1visible
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _headersVisible
)
{
	GtkTreeView* self;
	gboolean headersVisible;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter headersVisible
	headersVisible = (gboolean) _headersVisible;

	// call function
	gtk_tree_view_set_headers_visible(self, headersVisible);

	// cleanup parameter self

	// cleanup parameter headersVisible
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1set_1hover_1expand
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _expand
)
{
	GtkTreeView* self;
	gboolean expand;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter expand
	expand = (gboolean) _expand;

	// call function
	gtk_tree_view_set_hover_expand(self, expand);

	// cleanup parameter self

	// cleanup parameter expand
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1set_1hover_1selection
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _hover
)
{
	GtkTreeView* self;
	gboolean hover;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter hover
	hover = (gboolean) _hover;

	// call function
	gtk_tree_view_set_hover_selection(self, hover);

	// cleanup parameter self

	// cleanup parameter hover
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1set_1level_1indentation
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _indentation
)
{
	GtkTreeView* self;
	gint indentation;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter indentation
	indentation = (gint) _indentation;

	// call function
	gtk_tree_view_set_level_indentation(self, indentation);

	// cleanup parameter self

	// cleanup parameter indentation
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1set_1model
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _model
)
{
	GtkTreeView* self;
	GtkTreeModel* model;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter model
	model = (GtkTreeModel*) _model;

	// call function
	gtk_tree_view_set_model(self, model);

	// cleanup parameter self

	// cleanup parameter model
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1set_1reorderable
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _reorderable
)
{
	GtkTreeView* self;
	gboolean reorderable;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter reorderable
	reorderable = (gboolean) _reorderable;

	// call function
	gtk_tree_view_set_reorderable(self, reorderable);

	// cleanup parameter self

	// cleanup parameter reorderable
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1set_1rubber_1banding
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _enable
)
{
	GtkTreeView* self;
	gboolean enable;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter enable
	enable = (gboolean) _enable;

	// call function
	gtk_tree_view_set_rubber_banding(self, enable);

	// cleanup parameter self

	// cleanup parameter enable
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1set_1rules_1hint
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	GtkTreeView* self;
	gboolean setting;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gtk_tree_view_set_rules_hint(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1set_1search_1column
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _column
)
{
	GtkTreeView* self;
	gint column;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter column
	column = (gint) _column;

	// call function
	gtk_tree_view_set_search_column(self, column);

	// cleanup parameter self

	// cleanup parameter column
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1set_1search_1entry
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _entry
)
{
	GtkTreeView* self;
	GtkEntry* entry;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter entry
	entry = (GtkEntry*) _entry;

	// call function
	gtk_tree_view_set_search_entry(self, entry);

	// cleanup parameter self

	// cleanup parameter entry
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1set_1show_1expanders
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _enabled
)
{
	GtkTreeView* self;
	gboolean enabled;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter enabled
	enabled = (gboolean) _enabled;

	// call function
	gtk_tree_view_set_show_expanders(self, enabled);

	// cleanup parameter self

	// cleanup parameter enabled
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1set_1tooltip_1cell
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _tooltip,
	jlong _path,
	jlong _column,
	jlong _cell
)
{
	GtkTreeView* self;
	GtkTooltip* tooltip;
	GtkTreePath* path;
	GtkTreeViewColumn* column;
	GtkCellRenderer* cell;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter tooltip
	tooltip = (GtkTooltip*) _tooltip;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// convert parameter column
	column = (GtkTreeViewColumn*) _column;

	// convert parameter cell
	cell = (GtkCellRenderer*) _cell;

	// call function
	gtk_tree_view_set_tooltip_cell(self, tooltip, path, column, cell);

	// cleanup parameter self

	// cleanup parameter tooltip

	// cleanup parameter path

	// cleanup parameter column

	// cleanup parameter cell
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1set_1tooltip_1column
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _column
)
{
	GtkTreeView* self;
	gint column;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter column
	column = (gint) _column;

	// call function
	gtk_tree_view_set_tooltip_column(self, column);

	// cleanup parameter self

	// cleanup parameter column
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1set_1tooltip_1row
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _tooltip,
	jlong _path
)
{
	GtkTreeView* self;
	GtkTooltip* tooltip;
	GtkTreePath* path;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter tooltip
	tooltip = (GtkTooltip*) _tooltip;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// call function
	gtk_tree_view_set_tooltip_row(self, tooltip, path);

	// cleanup parameter self

	// cleanup parameter tooltip

	// cleanup parameter path
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1set_1vadjustment
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _adjustment
)
{
	GtkTreeView* self;
	GtkAdjustment* adjustment;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// convert parameter adjustment
	adjustment = (GtkAdjustment*) _adjustment;

	// call function
	gtk_tree_view_set_vadjustment(self, adjustment);

	// cleanup parameter self

	// cleanup parameter adjustment
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1unset_1rows_1drag_1dest
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreeView* self;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// call function
	gtk_tree_view_unset_rows_drag_dest(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeView_gtk_1tree_1view_1unset_1rows_1drag_1source
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreeView* self;

	// convert parameter self
	self = (GtkTreeView*) _self;

	// call function
	gtk_tree_view_unset_rows_drag_source(self);

	// cleanup parameter self
}
