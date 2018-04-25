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
#include "org_gnome_gtk_GtkTreePath.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTreePath_gtk_1tree_1path_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkTreePath* result;
	jlong _result;

	// call function
	result = gtk_tree_path_new();

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTreePath_gtk_1tree_1path_1new_1first
(
	JNIEnv* env,
	jclass cls
)
{
	GtkTreePath* result;
	jlong _result;

	// call function
	result = gtk_tree_path_new_first();

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTreePath_gtk_1tree_1path_1new_1from_1indices
(
	JNIEnv* env,
	jclass cls,
	jint _firstIndex
)
{
	GtkTreePath* result;
	jlong _result;
	gint firstIndex;

	// convert parameter firstIndex
	firstIndex = (gint) _firstIndex;

	// call function
	result = gtk_tree_path_new_from_indices(firstIndex, NULL);

	// cleanup parameter firstIndex

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTreePath_gtk_1tree_1path_1new_1from_1indicesv
(
	JNIEnv* env,
	jclass cls,
	jintArray _indices,
	jlong _length
)
{
	GtkTreePath* result;
	jlong _result;
	gint* indices;
	gsize length;

	// convert parameter indices
	indices = (gint*) (*env)->GetIntArrayElements(env, _indices, NULL);
	if (indices == NULL) {
		return 0L; // Java Exception already thrown
	}

	// convert parameter length
	length = (gsize) _length;

	// call function
	result = gtk_tree_path_new_from_indicesv(indices, length);

	// cleanup parameter indices
	(*env)->ReleaseIntArrayElements(env, _indices, (jint*)indices, 0);

	// cleanup parameter length

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTreePath_gtk_1tree_1path_1new_1from_1string
(
	JNIEnv* env,
	jclass cls,
	jstring _path
)
{
	GtkTreePath* result;
	jlong _result;
	const gchar* path;

	// convert parameter path
	path = (const gchar*) bindings_java_getString(env, _path);
	if (path == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_tree_path_new_from_string(path);

	// cleanup parameter path
	bindings_java_releaseString(path);

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreePath_gtk_1tree_1path_1append_1index
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _index
)
{
	GtkTreePath* self;
	gint index;

	// convert parameter self
	self = (GtkTreePath*) _self;

	// convert parameter index
	index = (gint) _index;

	// call function
	gtk_tree_path_append_index(self, index);

	// cleanup parameter self

	// cleanup parameter index
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTreePath_gtk_1tree_1path_1compare
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _b
)
{
	gint result;
	jint _result;
	GtkTreePath* self;
	const GtkTreePath* b;

	// convert parameter self
	self = (GtkTreePath*) _self;

	// convert parameter b
	b = (const GtkTreePath*) _b;

	// call function
	result = gtk_tree_path_compare(self, b);

	// cleanup parameter self

	// cleanup parameter b

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTreePath_gtk_1tree_1path_1copy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreePath* result;
	jlong _result;
	GtkTreePath* self;

	// convert parameter self
	self = (GtkTreePath*) _self;

	// call function
	result = gtk_tree_path_copy(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreePath_gtk_1tree_1path_1down
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreePath* self;

	// convert parameter self
	self = (GtkTreePath*) _self;

	// call function
	gtk_tree_path_down(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreePath_gtk_1tree_1path_1free
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreePath* self;

	// convert parameter self
	self = (GtkTreePath*) _self;

	// call function
	gtk_tree_path_free(self);

	// cleanup parameter self
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTreePath_gtk_1tree_1path_1get_1depth
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkTreePath* self;

	// convert parameter self
	self = (GtkTreePath*) _self;

	// call function
	result = gtk_tree_path_get_depth(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jintArray JNICALL
Java_org_gnome_gtk_GtkTreePath_gtk_1tree_1path_1get_1indices
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint* result;
	jintArray _result;
	GtkTreePath* self;

	// convert parameter self
	self = (GtkTreePath*) _self;

	// call function
	result = gtk_tree_path_get_indices(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jintArray) NULL;

	// and finally
	return _result;
}

JNIEXPORT jintArray JNICALL
Java_org_gnome_gtk_GtkTreePath_gtk_1tree_1path_1get_1indices_1with_1depth
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _depth
)
{
	gint* result;
	jintArray _result;
	GtkTreePath* self;
	gint* depth;

	// convert parameter self
	self = (GtkTreePath*) _self;

	// convert parameter depth
	if (_depth == NULL) {
		depth = NULL;
	} else {
		depth = (gint*) (*env)->GetIntArrayElements(env, _depth, NULL);
		if (depth == NULL) {
			return NULL; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_tree_path_get_indices_with_depth(self, depth);

	// cleanup parameter self

	// cleanup parameter depth
	if (depth != NULL) {
		(*env)->ReleaseIntArrayElements(env, _depth, (jint*)depth, 0);
	}

	// translate return value to JNI type
	_result = (jintArray) NULL;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreePath_gtk_1tree_1path_1is_1ancestor
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _descendant
)
{
	gboolean result;
	jboolean _result;
	GtkTreePath* self;
	GtkTreePath* descendant;

	// convert parameter self
	self = (GtkTreePath*) _self;

	// convert parameter descendant
	descendant = (GtkTreePath*) _descendant;

	// call function
	result = gtk_tree_path_is_ancestor(self, descendant);

	// cleanup parameter self

	// cleanup parameter descendant

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreePath_gtk_1tree_1path_1is_1descendant
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _ancestor
)
{
	gboolean result;
	jboolean _result;
	GtkTreePath* self;
	GtkTreePath* ancestor;

	// convert parameter self
	self = (GtkTreePath*) _self;

	// convert parameter ancestor
	ancestor = (GtkTreePath*) _ancestor;

	// call function
	result = gtk_tree_path_is_descendant(self, ancestor);

	// cleanup parameter self

	// cleanup parameter ancestor

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreePath_gtk_1tree_1path_1next
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreePath* self;

	// convert parameter self
	self = (GtkTreePath*) _self;

	// call function
	gtk_tree_path_next(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreePath_gtk_1tree_1path_1prepend_1index
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _index
)
{
	GtkTreePath* self;
	gint index;

	// convert parameter self
	self = (GtkTreePath*) _self;

	// convert parameter index
	index = (gint) _index;

	// call function
	gtk_tree_path_prepend_index(self, index);

	// cleanup parameter self

	// cleanup parameter index
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreePath_gtk_1tree_1path_1prev
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkTreePath* self;

	// convert parameter self
	self = (GtkTreePath*) _self;

	// call function
	result = gtk_tree_path_prev(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkTreePath_gtk_1tree_1path_1to_1string
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GtkTreePath* self;

	// convert parameter self
	self = (GtkTreePath*) _self;

	// call function
	result = gtk_tree_path_to_string(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// cleanup return value
	if (result != NULL) {
		g_free(result);
	}

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreePath_gtk_1tree_1path_1up
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkTreePath* self;

	// convert parameter self
	self = (GtkTreePath*) _self;

	// call function
	result = gtk_tree_path_up(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}
