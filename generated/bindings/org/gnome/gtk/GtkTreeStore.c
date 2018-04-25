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
#include "org_gnome_gtk_GtkTreeStore.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTreeStore_gtk_1tree_1store_1new
(
	JNIEnv* env,
	jclass cls,
	jint _nColumns
)
{
	GtkTreeStore* result;
	jlong _result;
	gint nColumns;

	// convert parameter nColumns
	nColumns = (gint) _nColumns;

	// call function
	result = gtk_tree_store_new(nColumns, NULL);

	// cleanup parameter nColumns

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
Java_org_gnome_gtk_GtkTreeStore_gtk_1tree_1store_1append
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jlong _parent
)
{
	GtkTreeStore* self;
	GtkTreeIter* iter;
	GtkTreeIter* parent;

	// convert parameter self
	self = (GtkTreeStore*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// convert parameter parent
	parent = (GtkTreeIter*) _parent;

	// call function
	gtk_tree_store_append(self, iter, parent);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter parent
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeStore_gtk_1tree_1store_1clear
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreeStore* self;

	// convert parameter self
	self = (GtkTreeStore*) _self;

	// call function
	gtk_tree_store_clear(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeStore_gtk_1tree_1store_1insert
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jlong _parent,
	jint _position
)
{
	GtkTreeStore* self;
	GtkTreeIter* iter;
	GtkTreeIter* parent;
	gint position;

	// convert parameter self
	self = (GtkTreeStore*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// convert parameter parent
	parent = (GtkTreeIter*) _parent;

	// convert parameter position
	position = (gint) _position;

	// call function
	gtk_tree_store_insert(self, iter, parent, position);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter parent

	// cleanup parameter position
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeStore_gtk_1tree_1store_1insert_1after
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jlong _parent,
	jlong _sibling
)
{
	GtkTreeStore* self;
	GtkTreeIter* iter;
	GtkTreeIter* parent;
	GtkTreeIter* sibling;

	// convert parameter self
	self = (GtkTreeStore*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// convert parameter parent
	parent = (GtkTreeIter*) _parent;

	// convert parameter sibling
	sibling = (GtkTreeIter*) _sibling;

	// call function
	gtk_tree_store_insert_after(self, iter, parent, sibling);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter parent

	// cleanup parameter sibling
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeStore_gtk_1tree_1store_1insert_1before
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jlong _parent,
	jlong _sibling
)
{
	GtkTreeStore* self;
	GtkTreeIter* iter;
	GtkTreeIter* parent;
	GtkTreeIter* sibling;

	// convert parameter self
	self = (GtkTreeStore*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// convert parameter parent
	parent = (GtkTreeIter*) _parent;

	// convert parameter sibling
	sibling = (GtkTreeIter*) _sibling;

	// call function
	gtk_tree_store_insert_before(self, iter, parent, sibling);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter parent

	// cleanup parameter sibling
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeStore_gtk_1tree_1store_1is_1ancestor
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jlong _descendant
)
{
	gboolean result;
	jboolean _result;
	GtkTreeStore* self;
	GtkTreeIter* iter;
	GtkTreeIter* descendant;

	// convert parameter self
	self = (GtkTreeStore*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// convert parameter descendant
	descendant = (GtkTreeIter*) _descendant;

	// call function
	result = gtk_tree_store_is_ancestor(self, iter, descendant);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter descendant

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTreeStore_gtk_1tree_1store_1iter_1depth
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter
)
{
	gint result;
	jint _result;
	GtkTreeStore* self;
	GtkTreeIter* iter;

	// convert parameter self
	self = (GtkTreeStore*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// call function
	result = gtk_tree_store_iter_depth(self, iter);

	// cleanup parameter self

	// cleanup parameter iter

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeStore_gtk_1tree_1store_1iter_1is_1valid
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter
)
{
	gboolean result;
	jboolean _result;
	GtkTreeStore* self;
	GtkTreeIter* iter;

	// convert parameter self
	self = (GtkTreeStore*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// call function
	result = gtk_tree_store_iter_is_valid(self, iter);

	// cleanup parameter self

	// cleanup parameter iter

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeStore_gtk_1tree_1store_1move_1after
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jlong _position
)
{
	GtkTreeStore* self;
	GtkTreeIter* iter;
	GtkTreeIter* position;

	// convert parameter self
	self = (GtkTreeStore*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// convert parameter position
	position = (GtkTreeIter*) _position;

	// call function
	gtk_tree_store_move_after(self, iter, position);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter position
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeStore_gtk_1tree_1store_1move_1before
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jlong _position
)
{
	GtkTreeStore* self;
	GtkTreeIter* iter;
	GtkTreeIter* position;

	// convert parameter self
	self = (GtkTreeStore*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// convert parameter position
	position = (GtkTreeIter*) _position;

	// call function
	gtk_tree_store_move_before(self, iter, position);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter position
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeStore_gtk_1tree_1store_1prepend
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jlong _parent
)
{
	GtkTreeStore* self;
	GtkTreeIter* iter;
	GtkTreeIter* parent;

	// convert parameter self
	self = (GtkTreeStore*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// convert parameter parent
	parent = (GtkTreeIter*) _parent;

	// call function
	gtk_tree_store_prepend(self, iter, parent);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter parent
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeStore_gtk_1tree_1store_1remove
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter
)
{
	gboolean result;
	jboolean _result;
	GtkTreeStore* self;
	GtkTreeIter* iter;

	// convert parameter self
	self = (GtkTreeStore*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// call function
	result = gtk_tree_store_remove(self, iter);

	// cleanup parameter self

	// cleanup parameter iter

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeStore_gtk_1tree_1store_1reorder
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _parent,
	jintArray _newOrder
)
{
	GtkTreeStore* self;
	GtkTreeIter* parent;
	gint* newOrder;

	// convert parameter self
	self = (GtkTreeStore*) _self;

	// convert parameter parent
	parent = (GtkTreeIter*) _parent;

	// convert parameter newOrder
	newOrder = (gint*) (*env)->GetIntArrayElements(env, _newOrder, NULL);
	if (newOrder == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_tree_store_reorder(self, parent, newOrder);

	// cleanup parameter self

	// cleanup parameter parent

	// cleanup parameter newOrder
	(*env)->ReleaseIntArrayElements(env, _newOrder, (jint*)newOrder, 0);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeStore_gtk_1tree_1store_1set
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter
)
{
	GtkTreeStore* self;
	GtkTreeIter* iter;

	// convert parameter self
	self = (GtkTreeStore*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// call function
	gtk_tree_store_set(self, iter, NULL);

	// cleanup parameter self

	// cleanup parameter iter
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeStore_gtk_1tree_1store_1set_1value
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jint _column,
	jlong _value
)
{
	GtkTreeStore* self;
	GtkTreeIter* iter;
	gint column;
	GValue* value;

	// convert parameter self
	self = (GtkTreeStore*) _self;

	// convert parameter iter
	iter = (GtkTreeIter*) _iter;

	// convert parameter column
	column = (gint) _column;

	// convert parameter value
	value = (GValue*) _value;

	// call function
	gtk_tree_store_set_value(self, iter, column, value);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter column

	// cleanup parameter value
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeStore_gtk_1tree_1store_1swap
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _a,
	jlong _b
)
{
	GtkTreeStore* self;
	GtkTreeIter* a;
	GtkTreeIter* b;

	// convert parameter self
	self = (GtkTreeStore*) _self;

	// convert parameter a
	a = (GtkTreeIter*) _a;

	// convert parameter b
	b = (GtkTreeIter*) _b;

	// call function
	gtk_tree_store_swap(self, a, b);

	// cleanup parameter self

	// cleanup parameter a

	// cleanup parameter b
}
