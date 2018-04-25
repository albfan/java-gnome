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
#include "org_gnome_gtk_GtkTreeViewColumn.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkTreeViewColumn* result;
	jlong _result;

	// call function
	result = gtk_tree_view_column_new();

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
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1new_1with_1attributes
(
	JNIEnv* env,
	jclass cls,
	jstring _title,
	jlong _cell
)
{
	GtkTreeViewColumn* result;
	jlong _result;
	const gchar* title;
	GtkCellRenderer* cell;

	// convert parameter title
	title = (const gchar*) bindings_java_getString(env, _title);
	if (title == NULL) {
		return 0L; // Java Exception already thrown
	}

	// convert parameter cell
	cell = (GtkCellRenderer*) _cell;

	// call function
	result = gtk_tree_view_column_new_with_attributes(title, cell, NULL);

	// cleanup parameter title
	bindings_java_releaseString(title);

	// cleanup parameter cell

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
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1add_1attribute
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _cellRenderer,
	jstring _attribute,
	jint _column
)
{
	GtkTreeViewColumn* self;
	GtkCellRenderer* cellRenderer;
	const gchar* attribute;
	gint column;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// convert parameter cellRenderer
	cellRenderer = (GtkCellRenderer*) _cellRenderer;

	// convert parameter attribute
	attribute = (const gchar*) bindings_java_getString(env, _attribute);
	if (attribute == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter column
	column = (gint) _column;

	// call function
	gtk_tree_view_column_add_attribute(self, cellRenderer, attribute, column);

	// cleanup parameter self

	// cleanup parameter cellRenderer

	// cleanup parameter attribute
	bindings_java_releaseString(attribute);

	// cleanup parameter column
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1cell_1get_1position
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _cellRenderer,
	jintArray _xOffset,
	jintArray _width
)
{
	gboolean result;
	jboolean _result;
	GtkTreeViewColumn* self;
	GtkCellRenderer* cellRenderer;
	gint* xOffset;
	gint* width;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// convert parameter cellRenderer
	cellRenderer = (GtkCellRenderer*) _cellRenderer;

	// convert parameter xOffset
	if (_xOffset == NULL) {
		xOffset = NULL;
	} else {
		xOffset = (gint*) (*env)->GetIntArrayElements(env, _xOffset, NULL);
		if (xOffset == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter width
	if (_width == NULL) {
		width = NULL;
	} else {
		width = (gint*) (*env)->GetIntArrayElements(env, _width, NULL);
		if (width == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_tree_view_column_cell_get_position(self, cellRenderer, xOffset, width);

	// cleanup parameter self

	// cleanup parameter cellRenderer

	// cleanup parameter xOffset
	if (xOffset != NULL) {
		(*env)->ReleaseIntArrayElements(env, _xOffset, (jint*)xOffset, 0);
	}

	// cleanup parameter width
	if (width != NULL) {
		(*env)->ReleaseIntArrayElements(env, _width, (jint*)width, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1cell_1get_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _cellArea,
	jintArray _xOffset,
	jintArray _yOffset,
	jintArray _width,
	jintArray _height
)
{
	GtkTreeViewColumn* self;
	const GdkRectangle* cellArea;
	gint* xOffset;
	gint* yOffset;
	gint* width;
	gint* height;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// convert parameter cellArea
	cellArea = (const GdkRectangle*) _cellArea;

	// convert parameter xOffset
	if (_xOffset == NULL) {
		xOffset = NULL;
	} else {
		xOffset = (gint*) (*env)->GetIntArrayElements(env, _xOffset, NULL);
		if (xOffset == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter yOffset
	if (_yOffset == NULL) {
		yOffset = NULL;
	} else {
		yOffset = (gint*) (*env)->GetIntArrayElements(env, _yOffset, NULL);
		if (yOffset == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter width
	if (_width == NULL) {
		width = NULL;
	} else {
		width = (gint*) (*env)->GetIntArrayElements(env, _width, NULL);
		if (width == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter height
	if (_height == NULL) {
		height = NULL;
	} else {
		height = (gint*) (*env)->GetIntArrayElements(env, _height, NULL);
		if (height == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_tree_view_column_cell_get_size(self, cellArea, xOffset, yOffset, width, height);

	// cleanup parameter self

	// cleanup parameter cellArea

	// cleanup parameter xOffset
	if (xOffset != NULL) {
		(*env)->ReleaseIntArrayElements(env, _xOffset, (jint*)xOffset, 0);
	}

	// cleanup parameter yOffset
	if (yOffset != NULL) {
		(*env)->ReleaseIntArrayElements(env, _yOffset, (jint*)yOffset, 0);
	}

	// cleanup parameter width
	if (width != NULL) {
		(*env)->ReleaseIntArrayElements(env, _width, (jint*)width, 0);
	}

	// cleanup parameter height
	if (height != NULL) {
		(*env)->ReleaseIntArrayElements(env, _height, (jint*)height, 0);
	}
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1cell_1is_1visible
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkTreeViewColumn* self;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// call function
	result = gtk_tree_view_column_cell_is_visible(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1cell_1set_1cell_1data
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _treeModel,
	jlong _iter,
	jboolean _isExpander,
	jboolean _isExpanded
)
{
	GtkTreeViewColumn* self;
	GtkTreeModel* treeModel;
	GtkTreeIter* iter;
	gboolean isExpander;
	gboolean isExpanded;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// convert parameter treeModel
	treeModel = (GtkTreeModel*) _treeModel;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// convert parameter isExpander
	isExpander = (gboolean) _isExpander;

	// convert parameter isExpanded
	isExpanded = (gboolean) _isExpanded;

	// call function
	gtk_tree_view_column_cell_set_cell_data(self, treeModel, iter, isExpander, isExpanded);

	// cleanup parameter self

	// cleanup parameter treeModel

	// cleanup parameter iter

	// cleanup parameter isExpander

	// cleanup parameter isExpanded
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1clear
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreeViewColumn* self;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// call function
	gtk_tree_view_column_clear(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1clear_1attributes
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _cellRenderer
)
{
	GtkTreeViewColumn* self;
	GtkCellRenderer* cellRenderer;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// convert parameter cellRenderer
	cellRenderer = (GtkCellRenderer*) _cellRenderer;

	// call function
	gtk_tree_view_column_clear_attributes(self, cellRenderer);

	// cleanup parameter self

	// cleanup parameter cellRenderer
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1clicked
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreeViewColumn* self;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// call function
	gtk_tree_view_column_clicked(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1focus_1cell
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _cell
)
{
	GtkTreeViewColumn* self;
	GtkCellRenderer* cell;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// convert parameter cell
	cell = (GtkCellRenderer*) _cell;

	// call function
	gtk_tree_view_column_focus_cell(self, cell);

	// cleanup parameter self

	// cleanup parameter cell
}

JNIEXPORT jfloat JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1get_1alignment
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gfloat result;
	jfloat _result;
	GtkTreeViewColumn* self;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// call function
	result = gtk_tree_view_column_get_alignment(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jfloat) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1get_1button
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkTreeViewColumn* self;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// call function
	result = gtk_tree_view_column_get_button(self);

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
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1get_1clickable
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkTreeViewColumn* self;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// call function
	result = gtk_tree_view_column_get_clickable(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1get_1expand
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkTreeViewColumn* self;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// call function
	result = gtk_tree_view_column_get_expand(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1get_1fixed_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkTreeViewColumn* self;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// call function
	result = gtk_tree_view_column_get_fixed_width(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1get_1max_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkTreeViewColumn* self;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// call function
	result = gtk_tree_view_column_get_max_width(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1get_1min_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkTreeViewColumn* self;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// call function
	result = gtk_tree_view_column_get_min_width(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1get_1reorderable
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkTreeViewColumn* self;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// call function
	result = gtk_tree_view_column_get_reorderable(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1get_1resizable
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkTreeViewColumn* self;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// call function
	result = gtk_tree_view_column_get_resizable(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1get_1sizing
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreeViewColumnSizing result;
	jint _result;
	GtkTreeViewColumn* self;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// call function
	result = gtk_tree_view_column_get_sizing(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1get_1sort_1column_1id
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkTreeViewColumn* self;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// call function
	result = gtk_tree_view_column_get_sort_column_id(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1get_1sort_1indicator
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkTreeViewColumn* self;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// call function
	result = gtk_tree_view_column_get_sort_indicator(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1get_1sort_1order
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkSortType result;
	jint _result;
	GtkTreeViewColumn* self;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// call function
	result = gtk_tree_view_column_get_sort_order(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1get_1spacing
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkTreeViewColumn* self;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// call function
	result = gtk_tree_view_column_get_spacing(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1get_1title
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkTreeViewColumn* self;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// call function
	result = gtk_tree_view_column_get_title(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1get_1tree_1view
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkTreeViewColumn* self;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// call function
	result = gtk_tree_view_column_get_tree_view(self);

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
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1get_1visible
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkTreeViewColumn* self;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// call function
	result = gtk_tree_view_column_get_visible(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1get_1widget
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkTreeViewColumn* self;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// call function
	result = gtk_tree_view_column_get_widget(self);

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
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1get_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkTreeViewColumn* self;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// call function
	result = gtk_tree_view_column_get_width(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1get_1x_1offset
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkTreeViewColumn* self;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// call function
	result = gtk_tree_view_column_get_x_offset(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1pack_1end
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _cell,
	jboolean _expand
)
{
	GtkTreeViewColumn* self;
	GtkCellRenderer* cell;
	gboolean expand;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// convert parameter cell
	cell = (GtkCellRenderer*) _cell;

	// convert parameter expand
	expand = (gboolean) _expand;

	// call function
	gtk_tree_view_column_pack_end(self, cell, expand);

	// cleanup parameter self

	// cleanup parameter cell

	// cleanup parameter expand
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1pack_1start
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _cell,
	jboolean _expand
)
{
	GtkTreeViewColumn* self;
	GtkCellRenderer* cell;
	gboolean expand;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// convert parameter cell
	cell = (GtkCellRenderer*) _cell;

	// convert parameter expand
	expand = (gboolean) _expand;

	// call function
	gtk_tree_view_column_pack_start(self, cell, expand);

	// cleanup parameter self

	// cleanup parameter cell

	// cleanup parameter expand
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1queue_1resize
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreeViewColumn* self;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// call function
	gtk_tree_view_column_queue_resize(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1set_1alignment
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jfloat _xalign
)
{
	GtkTreeViewColumn* self;
	gfloat xalign;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// convert parameter xalign
	xalign = (gfloat) _xalign;

	// call function
	gtk_tree_view_column_set_alignment(self, xalign);

	// cleanup parameter self

	// cleanup parameter xalign
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1set_1attributes
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _cellRenderer
)
{
	GtkTreeViewColumn* self;
	GtkCellRenderer* cellRenderer;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// convert parameter cellRenderer
	cellRenderer = (GtkCellRenderer*) _cellRenderer;

	// call function
	gtk_tree_view_column_set_attributes(self, cellRenderer, NULL);

	// cleanup parameter self

	// cleanup parameter cellRenderer
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1set_1clickable
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _clickable
)
{
	GtkTreeViewColumn* self;
	gboolean clickable;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// convert parameter clickable
	clickable = (gboolean) _clickable;

	// call function
	gtk_tree_view_column_set_clickable(self, clickable);

	// cleanup parameter self

	// cleanup parameter clickable
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1set_1expand
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _expand
)
{
	GtkTreeViewColumn* self;
	gboolean expand;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// convert parameter expand
	expand = (gboolean) _expand;

	// call function
	gtk_tree_view_column_set_expand(self, expand);

	// cleanup parameter self

	// cleanup parameter expand
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1set_1fixed_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _fixedWidth
)
{
	GtkTreeViewColumn* self;
	gint fixedWidth;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// convert parameter fixedWidth
	fixedWidth = (gint) _fixedWidth;

	// call function
	gtk_tree_view_column_set_fixed_width(self, fixedWidth);

	// cleanup parameter self

	// cleanup parameter fixedWidth
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1set_1max_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _maxWidth
)
{
	GtkTreeViewColumn* self;
	gint maxWidth;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// convert parameter maxWidth
	maxWidth = (gint) _maxWidth;

	// call function
	gtk_tree_view_column_set_max_width(self, maxWidth);

	// cleanup parameter self

	// cleanup parameter maxWidth
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1set_1min_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _minWidth
)
{
	GtkTreeViewColumn* self;
	gint minWidth;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// convert parameter minWidth
	minWidth = (gint) _minWidth;

	// call function
	gtk_tree_view_column_set_min_width(self, minWidth);

	// cleanup parameter self

	// cleanup parameter minWidth
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1set_1reorderable
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _reorderable
)
{
	GtkTreeViewColumn* self;
	gboolean reorderable;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// convert parameter reorderable
	reorderable = (gboolean) _reorderable;

	// call function
	gtk_tree_view_column_set_reorderable(self, reorderable);

	// cleanup parameter self

	// cleanup parameter reorderable
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1set_1resizable
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _resizable
)
{
	GtkTreeViewColumn* self;
	gboolean resizable;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// convert parameter resizable
	resizable = (gboolean) _resizable;

	// call function
	gtk_tree_view_column_set_resizable(self, resizable);

	// cleanup parameter self

	// cleanup parameter resizable
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1set_1sizing
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _type
)
{
	GtkTreeViewColumn* self;
	GtkTreeViewColumnSizing type;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// convert parameter type
	type = (GtkTreeViewColumnSizing) _type;

	// call function
	gtk_tree_view_column_set_sizing(self, type);

	// cleanup parameter self

	// cleanup parameter type
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1set_1sort_1column_1id
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _sortColumnId
)
{
	GtkTreeViewColumn* self;
	gint sortColumnId;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// convert parameter sortColumnId
	sortColumnId = (gint) _sortColumnId;

	// call function
	gtk_tree_view_column_set_sort_column_id(self, sortColumnId);

	// cleanup parameter self

	// cleanup parameter sortColumnId
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1set_1sort_1indicator
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	GtkTreeViewColumn* self;
	gboolean setting;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gtk_tree_view_column_set_sort_indicator(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1set_1sort_1order
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _order
)
{
	GtkTreeViewColumn* self;
	GtkSortType order;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// convert parameter order
	order = (GtkSortType) _order;

	// call function
	gtk_tree_view_column_set_sort_order(self, order);

	// cleanup parameter self

	// cleanup parameter order
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1set_1spacing
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _spacing
)
{
	GtkTreeViewColumn* self;
	gint spacing;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// convert parameter spacing
	spacing = (gint) _spacing;

	// call function
	gtk_tree_view_column_set_spacing(self, spacing);

	// cleanup parameter self

	// cleanup parameter spacing
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1set_1title
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _title
)
{
	GtkTreeViewColumn* self;
	const gchar* title;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// convert parameter title
	title = (const gchar*) bindings_java_getString(env, _title);
	if (title == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_tree_view_column_set_title(self, title);

	// cleanup parameter self

	// cleanup parameter title
	bindings_java_releaseString(title);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1set_1visible
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _visible
)
{
	GtkTreeViewColumn* self;
	gboolean visible;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// convert parameter visible
	visible = (gboolean) _visible;

	// call function
	gtk_tree_view_column_set_visible(self, visible);

	// cleanup parameter self

	// cleanup parameter visible
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeViewColumn_gtk_1tree_1view_1column_1set_1widget
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _widget
)
{
	GtkTreeViewColumn* self;
	GtkWidget* widget;

	// convert parameter self
	self = (GtkTreeViewColumn*) _self;

	// convert parameter widget
	widget = (GtkWidget*) _widget;

	// call function
	gtk_tree_view_column_set_widget(self, widget);

	// cleanup parameter self

	// cleanup parameter widget
}
