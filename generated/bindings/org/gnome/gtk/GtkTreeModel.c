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
#include "bindings_java.h"
#include "org_gnome_gtk_GtkTreeModel.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTreeModel_gtk_1tree_1model_1filter_1new
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _root
)
{
	GtkTreeModel* result;
	jlong _result;
	GtkTreeModel* self;
	GtkTreePath* root;

	// convert parameter self
	self = (GtkTreeModel*) _self;

	// convert parameter root
	root = (GtkTreePath*) _root;

	// call function
	result = gtk_tree_model_filter_new(self, root);

	// cleanup parameter self

	// cleanup parameter root

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
Java_org_gnome_gtk_GtkTreeModel_gtk_1tree_1model_1get
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter
)
{
	GtkTreeModel* self;
	GtkTreeIter* iter;

	// convert parameter self
	self = (GtkTreeModel*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// call function
	gtk_tree_model_get(self, iter, NULL);

	// cleanup parameter self

	// cleanup parameter iter
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTreeModel_gtk_1tree_1model_1get_1flags
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreeModelFlags result;
	jint _result;
	GtkTreeModel* self;

	// convert parameter self
	self = (GtkTreeModel*) _self;

	// call function
	result = gtk_tree_model_get_flags(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeModel_gtk_1tree_1model_1get_1iter
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jlong _path
)
{
	gboolean result;
	jboolean _result;
	GtkTreeModel* self;
	GtkTreeIter* iter;
	GtkTreePath* path;

	// convert parameter self
	self = (GtkTreeModel*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// call function
	result = gtk_tree_model_get_iter(self, iter, path);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter path

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeModel_gtk_1tree_1model_1get_1iter_1first
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter
)
{
	gboolean result;
	jboolean _result;
	GtkTreeModel* self;
	GtkTreeIter* iter;

	// convert parameter self
	self = (GtkTreeModel*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// call function
	result = gtk_tree_model_get_iter_first(self, iter);

	// cleanup parameter self

	// cleanup parameter iter

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeModel_gtk_1tree_1model_1get_1iter_1from_1string
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jstring _pathString
)
{
	gboolean result;
	jboolean _result;
	GtkTreeModel* self;
	GtkTreeIter* iter;
	const gchar* pathString;

	// convert parameter self
	self = (GtkTreeModel*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// convert parameter pathString
	pathString = (const gchar*) bindings_java_getString(env, _pathString);
	if (pathString == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gtk_tree_model_get_iter_from_string(self, iter, pathString);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter pathString
	bindings_java_releaseString(pathString);

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTreeModel_gtk_1tree_1model_1get_1n_1columns
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkTreeModel* self;

	// convert parameter self
	self = (GtkTreeModel*) _self;

	// call function
	result = gtk_tree_model_get_n_columns(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTreeModel_gtk_1tree_1model_1get_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter
)
{
	GtkTreePath* result;
	jlong _result;
	GtkTreeModel* self;
	GtkTreeIter* iter;

	// convert parameter self
	self = (GtkTreeModel*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// call function
	result = gtk_tree_model_get_path(self, iter);

	// cleanup parameter self

	// cleanup parameter iter

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkTreeModel_gtk_1tree_1model_1get_1string_1from_1iter
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter
)
{
	gchar* result;
	jstring _result;
	GtkTreeModel* self;
	GtkTreeIter* iter;

	// convert parameter self
	self = (GtkTreeModel*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// call function
	result = gtk_tree_model_get_string_from_iter(self, iter);

	// cleanup parameter self

	// cleanup parameter iter

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// cleanup return value
	if (result != NULL) {
		g_free(result);
	}

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeModel_gtk_1tree_1model_1get_1value
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jint _column,
	jlong _value
)
{
	GtkTreeModel* self;
	GtkTreeIter* iter;
	gint column;
	GValue* value;

	// convert parameter self
	self = (GtkTreeModel*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// convert parameter column
	column = (gint) _column;

	// convert parameter value
	value = (GValue*) _value;

	// call function
	gtk_tree_model_get_value(self, iter, column, value);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter column

	// cleanup parameter value
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeModel_gtk_1tree_1model_1iter_1children
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jlong _parent
)
{
	gboolean result;
	jboolean _result;
	GtkTreeModel* self;
	GtkTreeIter* iter;
	GtkTreeIter* parent;

	// convert parameter self
	self = (GtkTreeModel*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// convert parameter parent
	parent = (GtkTreeIter*) _parent;

	// call function
	result = gtk_tree_model_iter_children(self, iter, parent);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter parent

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeModel_gtk_1tree_1model_1iter_1has_1child
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter
)
{
	gboolean result;
	jboolean _result;
	GtkTreeModel* self;
	GtkTreeIter* iter;

	// convert parameter self
	self = (GtkTreeModel*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// call function
	result = gtk_tree_model_iter_has_child(self, iter);

	// cleanup parameter self

	// cleanup parameter iter

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTreeModel_gtk_1tree_1model_1iter_1n_1children
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter
)
{
	gint result;
	jint _result;
	GtkTreeModel* self;
	GtkTreeIter* iter;

	// convert parameter self
	self = (GtkTreeModel*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// call function
	result = gtk_tree_model_iter_n_children(self, iter);

	// cleanup parameter self

	// cleanup parameter iter

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeModel_gtk_1tree_1model_1iter_1next
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter
)
{
	gboolean result;
	jboolean _result;
	GtkTreeModel* self;
	GtkTreeIter* iter;

	// convert parameter self
	self = (GtkTreeModel*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// call function
	result = gtk_tree_model_iter_next(self, iter);

	// cleanup parameter self

	// cleanup parameter iter

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeModel_gtk_1tree_1model_1iter_1nth_1child
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jlong _parent,
	jint _n
)
{
	gboolean result;
	jboolean _result;
	GtkTreeModel* self;
	GtkTreeIter* iter;
	GtkTreeIter* parent;
	gint n;

	// convert parameter self
	self = (GtkTreeModel*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// convert parameter parent
	parent = (GtkTreeIter*) _parent;

	// convert parameter n
	n = (gint) _n;

	// call function
	result = gtk_tree_model_iter_nth_child(self, iter, parent, n);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter parent

	// cleanup parameter n

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeModel_gtk_1tree_1model_1iter_1parent
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jlong _child
)
{
	gboolean result;
	jboolean _result;
	GtkTreeModel* self;
	GtkTreeIter* iter;
	GtkTreeIter* child;

	// convert parameter self
	self = (GtkTreeModel*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// convert parameter child
	child = (GtkTreeIter*) _child;

	// call function
	result = gtk_tree_model_iter_parent(self, iter, child);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter child

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeModel_gtk_1tree_1model_1iter_1previous
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter
)
{
	gboolean result;
	jboolean _result;
	GtkTreeModel* self;
	GtkTreeIter* iter;

	// convert parameter self
	self = (GtkTreeModel*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// call function
	result = gtk_tree_model_iter_previous(self, iter);

	// cleanup parameter self

	// cleanup parameter iter

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeModel_gtk_1tree_1model_1ref_1node
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter
)
{
	GtkTreeModel* self;
	GtkTreeIter* iter;

	// convert parameter self
	self = (GtkTreeModel*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// call function
	gtk_tree_model_ref_node(self, iter);

	// cleanup parameter self

	// cleanup parameter iter
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeModel_gtk_1tree_1model_1row_1changed
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path,
	jlong _iter
)
{
	GtkTreeModel* self;
	GtkTreePath* path;
	GtkTreeIter* iter;

	// convert parameter self
	self = (GtkTreeModel*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// call function
	gtk_tree_model_row_changed(self, path, iter);

	// cleanup parameter self

	// cleanup parameter path

	// cleanup parameter iter
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeModel_gtk_1tree_1model_1row_1deleted
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path
)
{
	GtkTreeModel* self;
	GtkTreePath* path;

	// convert parameter self
	self = (GtkTreeModel*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// call function
	gtk_tree_model_row_deleted(self, path);

	// cleanup parameter self

	// cleanup parameter path
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeModel_gtk_1tree_1model_1row_1has_1child_1toggled
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path,
	jlong _iter
)
{
	GtkTreeModel* self;
	GtkTreePath* path;
	GtkTreeIter* iter;

	// convert parameter self
	self = (GtkTreeModel*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// call function
	gtk_tree_model_row_has_child_toggled(self, path, iter);

	// cleanup parameter self

	// cleanup parameter path

	// cleanup parameter iter
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeModel_gtk_1tree_1model_1row_1inserted
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path,
	jlong _iter
)
{
	GtkTreeModel* self;
	GtkTreePath* path;
	GtkTreeIter* iter;

	// convert parameter self
	self = (GtkTreeModel*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// call function
	gtk_tree_model_row_inserted(self, path, iter);

	// cleanup parameter self

	// cleanup parameter path

	// cleanup parameter iter
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeModel_gtk_1tree_1model_1rows_1reordered
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path,
	jlong _iter,
	jintArray _newOrder
)
{
	GtkTreeModel* self;
	GtkTreePath* path;
	GtkTreeIter* iter;
	gint* newOrder;

	// convert parameter self
	self = (GtkTreeModel*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// convert parameter newOrder
	newOrder = (gint*) (*env)->GetIntArrayElements(env, _newOrder, NULL);
	if (newOrder == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_tree_model_rows_reordered(self, path, iter, newOrder);

	// cleanup parameter self

	// cleanup parameter path

	// cleanup parameter iter

	// cleanup parameter newOrder
	(*env)->ReleaseIntArrayElements(env, _newOrder, (jint*)newOrder, 0);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeModel_gtk_1tree_1model_1rows_1reordered_1with_1length
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path,
	jlong _iter,
	jintArray _newOrder,
	jint _length
)
{
	GtkTreeModel* self;
	GtkTreePath* path;
	GtkTreeIter* iter;
	gint* newOrder;
	gint length;

	// convert parameter self
	self = (GtkTreeModel*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// convert parameter newOrder
	newOrder = (gint*) (*env)->GetIntArrayElements(env, _newOrder, NULL);
	if (newOrder == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter length
	length = (gint) _length;

	// call function
	gtk_tree_model_rows_reordered_with_length(self, path, iter, newOrder, length);

	// cleanup parameter self

	// cleanup parameter path

	// cleanup parameter iter

	// cleanup parameter newOrder
	(*env)->ReleaseIntArrayElements(env, _newOrder, (jint*)newOrder, 0);

	// cleanup parameter length
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTreeModel_gtk_1tree_1model_1sort_1new_1with_1model
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreeModel* result;
	jlong _result;
	GtkTreeModel* self;

	// convert parameter self
	self = (GtkTreeModel*) _self;

	// call function
	result = gtk_tree_model_sort_new_with_model(self);

	// cleanup parameter self

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
Java_org_gnome_gtk_GtkTreeModel_gtk_1tree_1model_1unref_1node
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter
)
{
	GtkTreeModel* self;
	GtkTreeIter* iter;

	// convert parameter self
	self = (GtkTreeModel*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// call function
	gtk_tree_model_unref_node(self, iter);

	// cleanup parameter self

	// cleanup parameter iter
}
