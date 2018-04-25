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
#include "org_gnome_gtk_GtkTreeSelection.h"

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTreeSelection_gtk_1tree_1selection_1count_1selected_1rows
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkTreeSelection* self;

	// convert parameter self
	self = (GtkTreeSelection*) _self;

	// call function
	result = gtk_tree_selection_count_selected_rows(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTreeSelection_gtk_1tree_1selection_1get_1mode
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkSelectionMode result;
	jint _result;
	GtkTreeSelection* self;

	// convert parameter self
	self = (GtkTreeSelection*) _self;

	// call function
	result = gtk_tree_selection_get_mode(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeSelection_gtk_1tree_1selection_1get_1selected
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlongArray _model,
	jlong _iter
)
{
	gboolean result;
	jboolean _result;
	GtkTreeSelection* self;
	GtkTreeModel** model;
	GtkTreeIter* iter;

	// convert parameter self
	self = (GtkTreeSelection*) _self;

	// convert parameter model
	if (_model == NULL) {
		model = NULL;
	} else {
		model = (GtkTreeModel**) bindings_java_convert_jarray_to_gpointer(env, _model);
		if (model == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// call function
	result = gtk_tree_selection_get_selected(self, model, iter);

	// cleanup parameter self

	// cleanup parameter model
	if (model != NULL) {
		bindings_java_convert_gpointer_to_jarray(env, (gpointer*)model, _model);
	}

	// cleanup parameter iter

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlongArray JNICALL
Java_org_gnome_gtk_GtkTreeSelection_gtk_1tree_1selection_1get_1selected_1rows
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlongArray _model
)
{
	GList* result;
	jlongArray _result;
	GtkTreeSelection* self;
	GtkTreeModel** model;

	// convert parameter self
	self = (GtkTreeSelection*) _self;

	// convert parameter model
	if (_model == NULL) {
		model = NULL;
	} else {
		model = (GtkTreeModel**) bindings_java_convert_jarray_to_gpointer(env, _model);
		if (model == NULL) {
			return NULL; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_tree_selection_get_selected_rows(self, model);

	// cleanup parameter self

	// cleanup parameter model
	if (model != NULL) {
		bindings_java_convert_gpointer_to_jarray(env, (gpointer*)model, _model);
	}

	// translate return value to JNI type
	_result = (jlongArray) bindings_java_convert_glist_to_jarray(env, result);

	// cleanup return value
	if (result != NULL) {
		g_list_free(result);
	}

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTreeSelection_gtk_1tree_1selection_1get_1tree_1view
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreeView* result;
	jlong _result;
	GtkTreeSelection* self;

	// convert parameter self
	self = (GtkTreeSelection*) _self;

	// call function
	result = gtk_tree_selection_get_tree_view(self);

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
Java_org_gnome_gtk_GtkTreeSelection_gtk_1tree_1selection_1iter_1is_1selected
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter
)
{
	gboolean result;
	jboolean _result;
	GtkTreeSelection* self;
	GtkTreeIter* iter;

	// convert parameter self
	self = (GtkTreeSelection*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// call function
	result = gtk_tree_selection_iter_is_selected(self, iter);

	// cleanup parameter self

	// cleanup parameter iter

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeSelection_gtk_1tree_1selection_1path_1is_1selected
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path
)
{
	gboolean result;
	jboolean _result;
	GtkTreeSelection* self;
	GtkTreePath* path;

	// convert parameter self
	self = (GtkTreeSelection*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// call function
	result = gtk_tree_selection_path_is_selected(self, path);

	// cleanup parameter self

	// cleanup parameter path

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeSelection_gtk_1tree_1selection_1select_1all
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreeSelection* self;

	// convert parameter self
	self = (GtkTreeSelection*) _self;

	// call function
	gtk_tree_selection_select_all(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeSelection_gtk_1tree_1selection_1select_1iter
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter
)
{
	GtkTreeSelection* self;
	GtkTreeIter* iter;

	// convert parameter self
	self = (GtkTreeSelection*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// call function
	gtk_tree_selection_select_iter(self, iter);

	// cleanup parameter self

	// cleanup parameter iter
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeSelection_gtk_1tree_1selection_1select_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path
)
{
	GtkTreeSelection* self;
	GtkTreePath* path;

	// convert parameter self
	self = (GtkTreeSelection*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// call function
	gtk_tree_selection_select_path(self, path);

	// cleanup parameter self

	// cleanup parameter path
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeSelection_gtk_1tree_1selection_1select_1range
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _startPath,
	jlong _endPath
)
{
	GtkTreeSelection* self;
	GtkTreePath* startPath;
	GtkTreePath* endPath;

	// convert parameter self
	self = (GtkTreeSelection*) _self;

	// convert parameter startPath
	startPath = (GtkTreePath*) _startPath;

	// convert parameter endPath
	endPath = (GtkTreePath*) _endPath;

	// call function
	gtk_tree_selection_select_range(self, startPath, endPath);

	// cleanup parameter self

	// cleanup parameter startPath

	// cleanup parameter endPath
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeSelection_gtk_1tree_1selection_1set_1mode
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _type
)
{
	GtkTreeSelection* self;
	GtkSelectionMode type;

	// convert parameter self
	self = (GtkTreeSelection*) _self;

	// convert parameter type
	type = (GtkSelectionMode) _type;

	// call function
	gtk_tree_selection_set_mode(self, type);

	// cleanup parameter self

	// cleanup parameter type
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeSelection_gtk_1tree_1selection_1unselect_1all
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreeSelection* self;

	// convert parameter self
	self = (GtkTreeSelection*) _self;

	// call function
	gtk_tree_selection_unselect_all(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeSelection_gtk_1tree_1selection_1unselect_1iter
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter
)
{
	GtkTreeSelection* self;
	GtkTreeIter* iter;

	// convert parameter self
	self = (GtkTreeSelection*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// call function
	gtk_tree_selection_unselect_iter(self, iter);

	// cleanup parameter self

	// cleanup parameter iter
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeSelection_gtk_1tree_1selection_1unselect_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path
)
{
	GtkTreeSelection* self;
	GtkTreePath* path;

	// convert parameter self
	self = (GtkTreeSelection*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// call function
	gtk_tree_selection_unselect_path(self, path);

	// cleanup parameter self

	// cleanup parameter path
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeSelection_gtk_1tree_1selection_1unselect_1range
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _startPath,
	jlong _endPath
)
{
	GtkTreeSelection* self;
	GtkTreePath* startPath;
	GtkTreePath* endPath;

	// convert parameter self
	self = (GtkTreeSelection*) _self;

	// convert parameter startPath
	startPath = (GtkTreePath*) _startPath;

	// convert parameter endPath
	endPath = (GtkTreePath*) _endPath;

	// call function
	gtk_tree_selection_unselect_range(self, startPath, endPath);

	// cleanup parameter self

	// cleanup parameter startPath

	// cleanup parameter endPath
}
