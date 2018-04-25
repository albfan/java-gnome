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
#include "org_gnome_gtk_GtkTreeModelFilter.h"

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeModelFilter_gtk_1tree_1model_1filter_1clear_1cache
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreeModelFilter* self;

	// convert parameter self
	self = (GtkTreeModelFilter*) _self;

	// call function
	gtk_tree_model_filter_clear_cache(self);

	// cleanup parameter self
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeModelFilter_gtk_1tree_1model_1filter_1convert_1child_1iter_1to_1iter
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _filterIter,
	jlong _childIter
)
{
	gboolean result;
	jboolean _result;
	GtkTreeModelFilter* self;
	GtkTreeIter* filterIter;
	GtkTreeIter* childIter;

	// convert parameter self
	self = (GtkTreeModelFilter*) _self;

	// convert parameter filterIter
	filterIter = (GtkTreeIter*) _filterIter;

	// convert parameter childIter
	childIter = (GtkTreeIter*) _childIter;

	// call function
	result = gtk_tree_model_filter_convert_child_iter_to_iter(self, filterIter, childIter);

	// cleanup parameter self

	// cleanup parameter filterIter

	// cleanup parameter childIter

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTreeModelFilter_gtk_1tree_1model_1filter_1convert_1child_1path_1to_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _childPath
)
{
	GtkTreePath* result;
	jlong _result;
	GtkTreeModelFilter* self;
	GtkTreePath* childPath;

	// convert parameter self
	self = (GtkTreeModelFilter*) _self;

	// convert parameter childPath
	childPath = (GtkTreePath*) _childPath;

	// call function
	result = gtk_tree_model_filter_convert_child_path_to_path(self, childPath);

	// cleanup parameter self

	// cleanup parameter childPath

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeModelFilter_gtk_1tree_1model_1filter_1convert_1iter_1to_1child_1iter
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _childIter,
	jlong _filterIter
)
{
	GtkTreeModelFilter* self;
	GtkTreeIter* childIter;
	GtkTreeIter* filterIter;

	// convert parameter self
	self = (GtkTreeModelFilter*) _self;

	// convert parameter childIter
	childIter = (GtkTreeIter*) _childIter;

	// convert parameter filterIter
	filterIter = (GtkTreeIter*) _filterIter;

	// call function
	gtk_tree_model_filter_convert_iter_to_child_iter(self, childIter, filterIter);

	// cleanup parameter self

	// cleanup parameter childIter

	// cleanup parameter filterIter
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTreeModelFilter_gtk_1tree_1model_1filter_1convert_1path_1to_1child_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _filterPath
)
{
	GtkTreePath* result;
	jlong _result;
	GtkTreeModelFilter* self;
	GtkTreePath* filterPath;

	// convert parameter self
	self = (GtkTreeModelFilter*) _self;

	// convert parameter filterPath
	filterPath = (GtkTreePath*) _filterPath;

	// call function
	result = gtk_tree_model_filter_convert_path_to_child_path(self, filterPath);

	// cleanup parameter self

	// cleanup parameter filterPath

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTreeModelFilter_gtk_1tree_1model_1filter_1get_1model
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreeModel* result;
	jlong _result;
	GtkTreeModelFilter* self;

	// convert parameter self
	self = (GtkTreeModelFilter*) _self;

	// call function
	result = gtk_tree_model_filter_get_model(self);

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
Java_org_gnome_gtk_GtkTreeModelFilter_gtk_1tree_1model_1filter_1refilter
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreeModelFilter* self;

	// convert parameter self
	self = (GtkTreeModelFilter*) _self;

	// call function
	gtk_tree_model_filter_refilter(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeModelFilter_gtk_1tree_1model_1filter_1set_1visible_1column
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _column
)
{
	GtkTreeModelFilter* self;
	gint column;

	// convert parameter self
	self = (GtkTreeModelFilter*) _self;

	// convert parameter column
	column = (gint) _column;

	// call function
	gtk_tree_model_filter_set_visible_column(self, column);

	// cleanup parameter self

	// cleanup parameter column
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTreeModelFilter_gtk_1tree_1model_1filter_1new
(
	JNIEnv* env,
	jclass cls,
	jlong _childModel,
	jlong _root
)
{
	GtkTreeModel* result;
	jlong _result;
	GtkTreeModel* childModel;
	GtkTreePath* root;

	// convert parameter childModel
	childModel = (GtkTreeModel*) _childModel;

	// convert parameter root
	root = (GtkTreePath*) _root;

	// call function
	result = gtk_tree_model_filter_new(childModel, root);

	// cleanup parameter childModel

	// cleanup parameter root

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, FALSE);
	}

	// and finally
	return _result;
}
