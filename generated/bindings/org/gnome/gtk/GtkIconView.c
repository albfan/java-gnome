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
#include "org_gnome_gtk_GtkIconView.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkWidget* result;
	jlong _result;

	// call function
	result = gtk_icon_view_new();

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
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1new_1with_1model
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
	result = gtk_icon_view_new_with_model(model);

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

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1convert_1widget_1to_1bin_1window_1coords
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
	GtkIconView* self;
	gint wx;
	gint wy;
	gint* bx;
	gint* by;

	// convert parameter self
	self = (GtkIconView*) _self;

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
	gtk_icon_view_convert_widget_to_bin_window_coords(self, wx, wy, bx, by);

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

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1create_1drag_1icon
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path
)
{
	cairo_surface_t* result;
	jlong _result;
	GtkIconView* self;
	GtkTreePath* path;

	// convert parameter self
	self = (GtkIconView*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// call function
	result = gtk_icon_view_create_drag_icon(self, path);

	// cleanup parameter self

	// cleanup parameter path

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1get_1activate_1on_1single_1click
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkIconView* self;

	// convert parameter self
	self = (GtkIconView*) _self;

	// call function
	result = gtk_icon_view_get_activate_on_single_click(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1get_1cell_1rect
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path,
	jlong _cell,
	jlong _rect
)
{
	gboolean result;
	jboolean _result;
	GtkIconView* self;
	GtkTreePath* path;
	GtkCellRenderer* cell;
	GdkRectangle* rect;

	// convert parameter self
	self = (GtkIconView*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// convert parameter cell
	cell = (GtkCellRenderer*) _cell;

	// convert parameter rect
	rect = (GdkRectangle*) _rect;

	// call function
	result = gtk_icon_view_get_cell_rect(self, path, cell, rect);

	// cleanup parameter self

	// cleanup parameter path

	// cleanup parameter cell

	// cleanup parameter rect

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1get_1column_1spacing
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkIconView* self;

	// convert parameter self
	self = (GtkIconView*) _self;

	// call function
	result = gtk_icon_view_get_column_spacing(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1get_1columns
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkIconView* self;

	// convert parameter self
	self = (GtkIconView*) _self;

	// call function
	result = gtk_icon_view_get_columns(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1get_1cursor
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlongArray _path,
	jlongArray _cell
)
{
	gboolean result;
	jboolean _result;
	GtkIconView* self;
	GtkTreePath** path;
	GtkCellRenderer** cell;

	// convert parameter self
	self = (GtkIconView*) _self;

	// convert parameter path
	if (_path == NULL) {
		path = NULL;
	} else {
		path = (GtkTreePath**) bindings_java_convert_jarray_to_gpointer(env, _path);
		if (path == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter cell
	if (_cell == NULL) {
		cell = NULL;
	} else {
		cell = (GtkCellRenderer**) bindings_java_convert_jarray_to_gpointer(env, _cell);
		if (cell == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_icon_view_get_cursor(self, path, cell);

	// cleanup parameter self

	// cleanup parameter path
	if (path != NULL) {
		bindings_java_convert_gpointer_to_jarray(env, (gpointer*)path, _path);
	}

	// cleanup parameter cell
	if (cell != NULL) {
		bindings_java_convert_gpointer_to_jarray(env, (gpointer*)cell, _cell);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1get_1dest_1item_1at_1pos
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
	GtkIconView* self;
	gint dragX;
	gint dragY;
	GtkTreePath** path;
	GtkIconViewDropPosition* pos;

	// convert parameter self
	self = (GtkIconView*) _self;

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
		pos = (GtkIconViewDropPosition*) (*env)->GetIntArrayElements(env, _pos, NULL);
		if (pos == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_icon_view_get_dest_item_at_pos(self, dragX, dragY, path, pos);

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
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1get_1drag_1dest_1item
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlongArray _path,
	jintArray _pos
)
{
	GtkIconView* self;
	GtkTreePath** path;
	GtkIconViewDropPosition* pos;

	// convert parameter self
	self = (GtkIconView*) _self;

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
		pos = (GtkIconViewDropPosition*) (*env)->GetIntArrayElements(env, _pos, NULL);
		if (pos == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_icon_view_get_drag_dest_item(self, path, pos);

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
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1get_1item_1at_1pos
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _x,
	jint _y,
	jlongArray _path,
	jlongArray _cell
)
{
	gboolean result;
	jboolean _result;
	GtkIconView* self;
	gint x;
	gint y;
	GtkTreePath** path;
	GtkCellRenderer** cell;

	// convert parameter self
	self = (GtkIconView*) _self;

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

	// convert parameter cell
	if (_cell == NULL) {
		cell = NULL;
	} else {
		cell = (GtkCellRenderer**) bindings_java_convert_jarray_to_gpointer(env, _cell);
		if (cell == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_icon_view_get_item_at_pos(self, x, y, path, cell);

	// cleanup parameter self

	// cleanup parameter x

	// cleanup parameter y

	// cleanup parameter path
	if (path != NULL) {
		bindings_java_convert_gpointer_to_jarray(env, (gpointer*)path, _path);
	}

	// cleanup parameter cell
	if (cell != NULL) {
		bindings_java_convert_gpointer_to_jarray(env, (gpointer*)cell, _cell);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1get_1item_1column
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path
)
{
	gint result;
	jint _result;
	GtkIconView* self;
	GtkTreePath* path;

	// convert parameter self
	self = (GtkIconView*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// call function
	result = gtk_icon_view_get_item_column(self, path);

	// cleanup parameter self

	// cleanup parameter path

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1get_1item_1orientation
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkOrientation result;
	jint _result;
	GtkIconView* self;

	// convert parameter self
	self = (GtkIconView*) _self;

	// call function
	result = gtk_icon_view_get_item_orientation(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1get_1item_1padding
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkIconView* self;

	// convert parameter self
	self = (GtkIconView*) _self;

	// call function
	result = gtk_icon_view_get_item_padding(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1get_1item_1row
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path
)
{
	gint result;
	jint _result;
	GtkIconView* self;
	GtkTreePath* path;

	// convert parameter self
	self = (GtkIconView*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// call function
	result = gtk_icon_view_get_item_row(self, path);

	// cleanup parameter self

	// cleanup parameter path

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1get_1item_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkIconView* self;

	// convert parameter self
	self = (GtkIconView*) _self;

	// call function
	result = gtk_icon_view_get_item_width(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1get_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkIconView* self;

	// convert parameter self
	self = (GtkIconView*) _self;

	// call function
	result = gtk_icon_view_get_margin(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1get_1markup_1column
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkIconView* self;

	// convert parameter self
	self = (GtkIconView*) _self;

	// call function
	result = gtk_icon_view_get_markup_column(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1get_1model
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreeModel* result;
	jlong _result;
	GtkIconView* self;

	// convert parameter self
	self = (GtkIconView*) _self;

	// call function
	result = gtk_icon_view_get_model(self);

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
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1get_1path_1at_1pos
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _x,
	jint _y
)
{
	GtkTreePath* result;
	jlong _result;
	GtkIconView* self;
	gint x;
	gint y;

	// convert parameter self
	self = (GtkIconView*) _self;

	// convert parameter x
	x = (gint) _x;

	// convert parameter y
	y = (gint) _y;

	// call function
	result = gtk_icon_view_get_path_at_pos(self, x, y);

	// cleanup parameter self

	// cleanup parameter x

	// cleanup parameter y

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1get_1pixbuf_1column
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkIconView* self;

	// convert parameter self
	self = (GtkIconView*) _self;

	// call function
	result = gtk_icon_view_get_pixbuf_column(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1get_1reorderable
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkIconView* self;

	// convert parameter self
	self = (GtkIconView*) _self;

	// call function
	result = gtk_icon_view_get_reorderable(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1get_1row_1spacing
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkIconView* self;

	// convert parameter self
	self = (GtkIconView*) _self;

	// call function
	result = gtk_icon_view_get_row_spacing(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlongArray JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1get_1selected_1items
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GList* result;
	jlongArray _result;
	GtkIconView* self;

	// convert parameter self
	self = (GtkIconView*) _self;

	// call function
	result = gtk_icon_view_get_selected_items(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlongArray) bindings_java_convert_glist_to_jarray(env, result);

	// cleanup return value
	if (result != NULL) {
		g_list_free(result);
	}

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1get_1selection_1mode
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkSelectionMode result;
	jint _result;
	GtkIconView* self;

	// convert parameter self
	self = (GtkIconView*) _self;

	// call function
	result = gtk_icon_view_get_selection_mode(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1get_1spacing
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkIconView* self;

	// convert parameter self
	self = (GtkIconView*) _self;

	// call function
	result = gtk_icon_view_get_spacing(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1get_1text_1column
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkIconView* self;

	// convert parameter self
	self = (GtkIconView*) _self;

	// call function
	result = gtk_icon_view_get_text_column(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1get_1tooltip_1column
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkIconView* self;

	// convert parameter self
	self = (GtkIconView*) _self;

	// call function
	result = gtk_icon_view_get_tooltip_column(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1get_1tooltip_1context
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
	GtkIconView* self;
	gint* x;
	gint* y;
	gboolean keyboardTip;
	GtkTreeModel** model;
	GtkTreePath** path;
	GtkTreeIter* iter;

	// convert parameter self
	self = (GtkIconView*) _self;

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
	result = gtk_icon_view_get_tooltip_context(self, x, y, keyboardTip, model, path, iter);

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

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1get_1visible_1range
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
	GtkIconView* self;
	GtkTreePath** startPath;
	GtkTreePath** endPath;

	// convert parameter self
	self = (GtkIconView*) _self;

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
	result = gtk_icon_view_get_visible_range(self, startPath, endPath);

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
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1item_1activated
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path
)
{
	GtkIconView* self;
	GtkTreePath* path;

	// convert parameter self
	self = (GtkIconView*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// call function
	gtk_icon_view_item_activated(self, path);

	// cleanup parameter self

	// cleanup parameter path
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1path_1is_1selected
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path
)
{
	gboolean result;
	jboolean _result;
	GtkIconView* self;
	GtkTreePath* path;

	// convert parameter self
	self = (GtkIconView*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// call function
	result = gtk_icon_view_path_is_selected(self, path);

	// cleanup parameter self

	// cleanup parameter path

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1scroll_1to_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path,
	jboolean _useAlign,
	jfloat _rowAlign,
	jfloat _colAlign
)
{
	GtkIconView* self;
	GtkTreePath* path;
	gboolean useAlign;
	gfloat rowAlign;
	gfloat colAlign;

	// convert parameter self
	self = (GtkIconView*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// convert parameter useAlign
	useAlign = (gboolean) _useAlign;

	// convert parameter rowAlign
	rowAlign = (gfloat) _rowAlign;

	// convert parameter colAlign
	colAlign = (gfloat) _colAlign;

	// call function
	gtk_icon_view_scroll_to_path(self, path, useAlign, rowAlign, colAlign);

	// cleanup parameter self

	// cleanup parameter path

	// cleanup parameter useAlign

	// cleanup parameter rowAlign

	// cleanup parameter colAlign
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1select_1all
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkIconView* self;

	// convert parameter self
	self = (GtkIconView*) _self;

	// call function
	gtk_icon_view_select_all(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1select_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path
)
{
	GtkIconView* self;
	GtkTreePath* path;

	// convert parameter self
	self = (GtkIconView*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// call function
	gtk_icon_view_select_path(self, path);

	// cleanup parameter self

	// cleanup parameter path
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1set_1activate_1on_1single_1click
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _single
)
{
	GtkIconView* self;
	gboolean single;

	// convert parameter self
	self = (GtkIconView*) _self;

	// convert parameter single
	single = (gboolean) _single;

	// call function
	gtk_icon_view_set_activate_on_single_click(self, single);

	// cleanup parameter self

	// cleanup parameter single
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1set_1column_1spacing
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _columnSpacing
)
{
	GtkIconView* self;
	gint columnSpacing;

	// convert parameter self
	self = (GtkIconView*) _self;

	// convert parameter columnSpacing
	columnSpacing = (gint) _columnSpacing;

	// call function
	gtk_icon_view_set_column_spacing(self, columnSpacing);

	// cleanup parameter self

	// cleanup parameter columnSpacing
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1set_1columns
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _columns
)
{
	GtkIconView* self;
	gint columns;

	// convert parameter self
	self = (GtkIconView*) _self;

	// convert parameter columns
	columns = (gint) _columns;

	// call function
	gtk_icon_view_set_columns(self, columns);

	// cleanup parameter self

	// cleanup parameter columns
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1set_1cursor
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path,
	jlong _cell,
	jboolean _startEditing
)
{
	GtkIconView* self;
	GtkTreePath* path;
	GtkCellRenderer* cell;
	gboolean startEditing;

	// convert parameter self
	self = (GtkIconView*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// convert parameter cell
	cell = (GtkCellRenderer*) _cell;

	// convert parameter startEditing
	startEditing = (gboolean) _startEditing;

	// call function
	gtk_icon_view_set_cursor(self, path, cell, startEditing);

	// cleanup parameter self

	// cleanup parameter path

	// cleanup parameter cell

	// cleanup parameter startEditing
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1set_1drag_1dest_1item
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path,
	jint _pos
)
{
	GtkIconView* self;
	GtkTreePath* path;
	GtkIconViewDropPosition pos;

	// convert parameter self
	self = (GtkIconView*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// convert parameter pos
	pos = (GtkIconViewDropPosition) _pos;

	// call function
	gtk_icon_view_set_drag_dest_item(self, path, pos);

	// cleanup parameter self

	// cleanup parameter path

	// cleanup parameter pos
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1set_1item_1orientation
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _orientation
)
{
	GtkIconView* self;
	GtkOrientation orientation;

	// convert parameter self
	self = (GtkIconView*) _self;

	// convert parameter orientation
	orientation = (GtkOrientation) _orientation;

	// call function
	gtk_icon_view_set_item_orientation(self, orientation);

	// cleanup parameter self

	// cleanup parameter orientation
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1set_1item_1padding
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _itemPadding
)
{
	GtkIconView* self;
	gint itemPadding;

	// convert parameter self
	self = (GtkIconView*) _self;

	// convert parameter itemPadding
	itemPadding = (gint) _itemPadding;

	// call function
	gtk_icon_view_set_item_padding(self, itemPadding);

	// cleanup parameter self

	// cleanup parameter itemPadding
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1set_1item_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _itemWidth
)
{
	GtkIconView* self;
	gint itemWidth;

	// convert parameter self
	self = (GtkIconView*) _self;

	// convert parameter itemWidth
	itemWidth = (gint) _itemWidth;

	// call function
	gtk_icon_view_set_item_width(self, itemWidth);

	// cleanup parameter self

	// cleanup parameter itemWidth
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1set_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _margin
)
{
	GtkIconView* self;
	gint margin;

	// convert parameter self
	self = (GtkIconView*) _self;

	// convert parameter margin
	margin = (gint) _margin;

	// call function
	gtk_icon_view_set_margin(self, margin);

	// cleanup parameter self

	// cleanup parameter margin
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1set_1markup_1column
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _column
)
{
	GtkIconView* self;
	gint column;

	// convert parameter self
	self = (GtkIconView*) _self;

	// convert parameter column
	column = (gint) _column;

	// call function
	gtk_icon_view_set_markup_column(self, column);

	// cleanup parameter self

	// cleanup parameter column
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1set_1model
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _model
)
{
	GtkIconView* self;
	GtkTreeModel* model;

	// convert parameter self
	self = (GtkIconView*) _self;

	// convert parameter model
	model = (GtkTreeModel*) _model;

	// call function
	gtk_icon_view_set_model(self, model);

	// cleanup parameter self

	// cleanup parameter model
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1set_1pixbuf_1column
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _column
)
{
	GtkIconView* self;
	gint column;

	// convert parameter self
	self = (GtkIconView*) _self;

	// convert parameter column
	column = (gint) _column;

	// call function
	gtk_icon_view_set_pixbuf_column(self, column);

	// cleanup parameter self

	// cleanup parameter column
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1set_1reorderable
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _reorderable
)
{
	GtkIconView* self;
	gboolean reorderable;

	// convert parameter self
	self = (GtkIconView*) _self;

	// convert parameter reorderable
	reorderable = (gboolean) _reorderable;

	// call function
	gtk_icon_view_set_reorderable(self, reorderable);

	// cleanup parameter self

	// cleanup parameter reorderable
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1set_1row_1spacing
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _rowSpacing
)
{
	GtkIconView* self;
	gint rowSpacing;

	// convert parameter self
	self = (GtkIconView*) _self;

	// convert parameter rowSpacing
	rowSpacing = (gint) _rowSpacing;

	// call function
	gtk_icon_view_set_row_spacing(self, rowSpacing);

	// cleanup parameter self

	// cleanup parameter rowSpacing
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1set_1selection_1mode
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _mode
)
{
	GtkIconView* self;
	GtkSelectionMode mode;

	// convert parameter self
	self = (GtkIconView*) _self;

	// convert parameter mode
	mode = (GtkSelectionMode) _mode;

	// call function
	gtk_icon_view_set_selection_mode(self, mode);

	// cleanup parameter self

	// cleanup parameter mode
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1set_1spacing
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _spacing
)
{
	GtkIconView* self;
	gint spacing;

	// convert parameter self
	self = (GtkIconView*) _self;

	// convert parameter spacing
	spacing = (gint) _spacing;

	// call function
	gtk_icon_view_set_spacing(self, spacing);

	// cleanup parameter self

	// cleanup parameter spacing
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1set_1text_1column
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _column
)
{
	GtkIconView* self;
	gint column;

	// convert parameter self
	self = (GtkIconView*) _self;

	// convert parameter column
	column = (gint) _column;

	// call function
	gtk_icon_view_set_text_column(self, column);

	// cleanup parameter self

	// cleanup parameter column
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1set_1tooltip_1cell
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _tooltip,
	jlong _path,
	jlong _cell
)
{
	GtkIconView* self;
	GtkTooltip* tooltip;
	GtkTreePath* path;
	GtkCellRenderer* cell;

	// convert parameter self
	self = (GtkIconView*) _self;

	// convert parameter tooltip
	tooltip = (GtkTooltip*) _tooltip;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// convert parameter cell
	cell = (GtkCellRenderer*) _cell;

	// call function
	gtk_icon_view_set_tooltip_cell(self, tooltip, path, cell);

	// cleanup parameter self

	// cleanup parameter tooltip

	// cleanup parameter path

	// cleanup parameter cell
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1set_1tooltip_1column
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _column
)
{
	GtkIconView* self;
	gint column;

	// convert parameter self
	self = (GtkIconView*) _self;

	// convert parameter column
	column = (gint) _column;

	// call function
	gtk_icon_view_set_tooltip_column(self, column);

	// cleanup parameter self

	// cleanup parameter column
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1set_1tooltip_1item
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _tooltip,
	jlong _path
)
{
	GtkIconView* self;
	GtkTooltip* tooltip;
	GtkTreePath* path;

	// convert parameter self
	self = (GtkIconView*) _self;

	// convert parameter tooltip
	tooltip = (GtkTooltip*) _tooltip;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// call function
	gtk_icon_view_set_tooltip_item(self, tooltip, path);

	// cleanup parameter self

	// cleanup parameter tooltip

	// cleanup parameter path
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1unselect_1all
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkIconView* self;

	// convert parameter self
	self = (GtkIconView*) _self;

	// call function
	gtk_icon_view_unselect_all(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1unselect_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path
)
{
	GtkIconView* self;
	GtkTreePath* path;

	// convert parameter self
	self = (GtkIconView*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// call function
	gtk_icon_view_unselect_path(self, path);

	// cleanup parameter self

	// cleanup parameter path
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1unset_1model_1drag_1dest
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkIconView* self;

	// convert parameter self
	self = (GtkIconView*) _self;

	// call function
	gtk_icon_view_unset_model_drag_dest(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkIconView_gtk_1icon_1view_1unset_1model_1drag_1source
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkIconView* self;

	// convert parameter self
	self = (GtkIconView*) _self;

	// call function
	gtk_icon_view_unset_model_drag_source(self);

	// cleanup parameter self
}
