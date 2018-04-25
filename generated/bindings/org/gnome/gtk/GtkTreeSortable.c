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
#include "org_gnome_gtk_GtkTreeSortable.h"

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeSortable_gtk_1tree_1sortable_1get_1sort_1column_1id
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _sortColumnId,
	jintArray _order
)
{
	gboolean result;
	jboolean _result;
	GtkTreeSortable* self;
	gint* sortColumnId;
	GtkSortType* order;

	// convert parameter self
	self = (GtkTreeSortable*) _self;

	// convert parameter sortColumnId
	if (_sortColumnId == NULL) {
		sortColumnId = NULL;
	} else {
		sortColumnId = (gint*) (*env)->GetIntArrayElements(env, _sortColumnId, NULL);
		if (sortColumnId == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter order
	if (_order == NULL) {
		order = NULL;
	} else {
		order = (GtkSortType*) (*env)->GetIntArrayElements(env, _order, NULL);
		if (order == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_tree_sortable_get_sort_column_id(self, sortColumnId, order);

	// cleanup parameter self

	// cleanup parameter sortColumnId
	if (sortColumnId != NULL) {
		(*env)->ReleaseIntArrayElements(env, _sortColumnId, (jint*)sortColumnId, 0);
	}

	// cleanup parameter order
	if (order != NULL) {
		(*env)->ReleaseIntArrayElements(env, _order, (jint*)order, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTreeSortable_gtk_1tree_1sortable_1has_1default_1sort_1func
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkTreeSortable* self;

	// convert parameter self
	self = (GtkTreeSortable*) _self;

	// call function
	result = gtk_tree_sortable_has_default_sort_func(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeSortable_gtk_1tree_1sortable_1set_1sort_1column_1id
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _sortColumnId,
	jint _order
)
{
	GtkTreeSortable* self;
	gint sortColumnId;
	GtkSortType order;

	// convert parameter self
	self = (GtkTreeSortable*) _self;

	// convert parameter sortColumnId
	sortColumnId = (gint) _sortColumnId;

	// convert parameter order
	order = (GtkSortType) _order;

	// call function
	gtk_tree_sortable_set_sort_column_id(self, sortColumnId, order);

	// cleanup parameter self

	// cleanup parameter sortColumnId

	// cleanup parameter order
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTreeSortable_gtk_1tree_1sortable_1sort_1column_1changed
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreeSortable* self;

	// convert parameter self
	self = (GtkTreeSortable*) _self;

	// call function
	gtk_tree_sortable_sort_column_changed(self);

	// cleanup parameter self
}
