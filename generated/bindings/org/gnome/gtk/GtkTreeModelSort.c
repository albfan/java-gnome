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
#include "org_gnome_gtk_GtkTreeModelSort.h"

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeModelSort_gtk_1tree_1model_1sort_1clear_1cache
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreeModelSort* self;

	// convert parameter self
	self = (GtkTreeModelSort*) _self;

	// call function
	gtk_tree_model_sort_clear_cache(self);

	// cleanup parameter self
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeModelSort_gtk_1tree_1model_1sort_1convert_1child_1iter_1to_1iter
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _sortIter,
	jlong _childIter
)
{
	gboolean result;
	jboolean _result;
	GtkTreeModelSort* self;
	GtkTreeIter* sortIter;
	GtkTreeIter* childIter;

	// convert parameter self
	self = (GtkTreeModelSort*) _self;

	// convert parameter sortIter
	sortIter = (GtkTreeIter*) _sortIter;

	// convert parameter childIter
	childIter = (GtkTreeIter*) _childIter;

	// call function
	result = gtk_tree_model_sort_convert_child_iter_to_iter(self, sortIter, childIter);

	// cleanup parameter self

	// cleanup parameter sortIter

	// cleanup parameter childIter

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTreeModelSort_gtk_1tree_1model_1sort_1convert_1child_1path_1to_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _childPath
)
{
	GtkTreePath* result;
	jlong _result;
	GtkTreeModelSort* self;
	GtkTreePath* childPath;

	// convert parameter self
	self = (GtkTreeModelSort*) _self;

	// convert parameter childPath
	childPath = (GtkTreePath*) _childPath;

	// call function
	result = gtk_tree_model_sort_convert_child_path_to_path(self, childPath);

	// cleanup parameter self

	// cleanup parameter childPath

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeModelSort_gtk_1tree_1model_1sort_1convert_1iter_1to_1child_1iter
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _childIter,
	jlong _sortedIter
)
{
	GtkTreeModelSort* self;
	GtkTreeIter* childIter;
	GtkTreeIter* sortedIter;

	// convert parameter self
	self = (GtkTreeModelSort*) _self;

	// convert parameter childIter
	childIter = (GtkTreeIter*) _childIter;

	// convert parameter sortedIter
	sortedIter = (GtkTreeIter*) _sortedIter;

	// call function
	gtk_tree_model_sort_convert_iter_to_child_iter(self, childIter, sortedIter);

	// cleanup parameter self

	// cleanup parameter childIter

	// cleanup parameter sortedIter
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTreeModelSort_gtk_1tree_1model_1sort_1convert_1path_1to_1child_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _sortedPath
)
{
	GtkTreePath* result;
	jlong _result;
	GtkTreeModelSort* self;
	GtkTreePath* sortedPath;

	// convert parameter self
	self = (GtkTreeModelSort*) _self;

	// convert parameter sortedPath
	sortedPath = (GtkTreePath*) _sortedPath;

	// call function
	result = gtk_tree_model_sort_convert_path_to_child_path(self, sortedPath);

	// cleanup parameter self

	// cleanup parameter sortedPath

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTreeModelSort_gtk_1tree_1model_1sort_1get_1model
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreeModel* result;
	jlong _result;
	GtkTreeModelSort* self;

	// convert parameter self
	self = (GtkTreeModelSort*) _self;

	// call function
	result = gtk_tree_model_sort_get_model(self);

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
Java_org_gnome_gtk_GtkTreeModelSort_gtk_1tree_1model_1sort_1iter_1is_1valid
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter
)
{
	gboolean result;
	jboolean _result;
	GtkTreeModelSort* self;
	GtkTreeIter* iter;

	// convert parameter self
	self = (GtkTreeModelSort*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// call function
	result = gtk_tree_model_sort_iter_is_valid(self, iter);

	// cleanup parameter self

	// cleanup parameter iter

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeModelSort_gtk_1tree_1model_1sort_1reset_1default_1sort_1func
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreeModelSort* self;

	// convert parameter self
	self = (GtkTreeModelSort*) _self;

	// call function
	gtk_tree_model_sort_reset_default_sort_func(self);

	// cleanup parameter self
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTreeModelSort_gtk_1tree_1model_1sort_1new_1with_1model
(
	JNIEnv* env,
	jclass cls,
	jlong _model
)
{
	GtkTreeModel* result;
	jlong _result;
	GtkTreeModel* model;

	// convert parameter model
	model = (GtkTreeModel*) _model;

	// call function
	result = gtk_tree_model_sort_new_with_model(model);

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
