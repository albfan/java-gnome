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
#include "org_gnome_gtk_GtkCellLayout.h"

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCellLayout_gtk_1cell_1layout_1add_1attribute
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _cell,
	jstring _attribute,
	jint _column
)
{
	GtkCellLayout* self;
	GtkCellRenderer* cell;
	const gchar* attribute;
	gint column;

	// convert parameter self
	self = (GtkCellLayout*) _self;

	// convert parameter cell
	cell = (GtkCellRenderer*) _cell;

	// convert parameter attribute
	attribute = (const gchar*) bindings_java_getString(env, _attribute);
	if (attribute == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter column
	column = (gint) _column;

	// call function
	gtk_cell_layout_add_attribute(self, cell, attribute, column);

	// cleanup parameter self

	// cleanup parameter cell

	// cleanup parameter attribute
	bindings_java_releaseString(attribute);

	// cleanup parameter column
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCellLayout_gtk_1cell_1layout_1clear
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkCellLayout* self;

	// convert parameter self
	self = (GtkCellLayout*) _self;

	// call function
	gtk_cell_layout_clear(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCellLayout_gtk_1cell_1layout_1clear_1attributes
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _cell
)
{
	GtkCellLayout* self;
	GtkCellRenderer* cell;

	// convert parameter self
	self = (GtkCellLayout*) _self;

	// convert parameter cell
	cell = (GtkCellRenderer*) _cell;

	// call function
	gtk_cell_layout_clear_attributes(self, cell);

	// cleanup parameter self

	// cleanup parameter cell
}

JNIEXPORT jlongArray JNICALL
Java_org_gnome_gtk_GtkCellLayout_gtk_1cell_1layout_1get_1cells
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GList* result;
	jlongArray _result;
	GtkCellLayout* self;

	// convert parameter self
	self = (GtkCellLayout*) _self;

	// call function
	result = gtk_cell_layout_get_cells(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlongArray) bindings_java_convert_glist_to_jarray(env, result);

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCellLayout_gtk_1cell_1layout_1pack_1end
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _cell,
	jboolean _expand
)
{
	GtkCellLayout* self;
	GtkCellRenderer* cell;
	gboolean expand;

	// convert parameter self
	self = (GtkCellLayout*) _self;

	// convert parameter cell
	cell = (GtkCellRenderer*) _cell;

	// convert parameter expand
	expand = (gboolean) _expand;

	// call function
	gtk_cell_layout_pack_end(self, cell, expand);

	// cleanup parameter self

	// cleanup parameter cell

	// cleanup parameter expand
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCellLayout_gtk_1cell_1layout_1pack_1start
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _cell,
	jboolean _expand
)
{
	GtkCellLayout* self;
	GtkCellRenderer* cell;
	gboolean expand;

	// convert parameter self
	self = (GtkCellLayout*) _self;

	// convert parameter cell
	cell = (GtkCellRenderer*) _cell;

	// convert parameter expand
	expand = (gboolean) _expand;

	// call function
	gtk_cell_layout_pack_start(self, cell, expand);

	// cleanup parameter self

	// cleanup parameter cell

	// cleanup parameter expand
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCellLayout_gtk_1cell_1layout_1reorder
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _cell,
	jint _position
)
{
	GtkCellLayout* self;
	GtkCellRenderer* cell;
	gint position;

	// convert parameter self
	self = (GtkCellLayout*) _self;

	// convert parameter cell
	cell = (GtkCellRenderer*) _cell;

	// convert parameter position
	position = (gint) _position;

	// call function
	gtk_cell_layout_reorder(self, cell, position);

	// cleanup parameter self

	// cleanup parameter cell

	// cleanup parameter position
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCellLayout_gtk_1cell_1layout_1set_1attributes
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _cell
)
{
	GtkCellLayout* self;
	GtkCellRenderer* cell;

	// convert parameter self
	self = (GtkCellLayout*) _self;

	// convert parameter cell
	cell = (GtkCellRenderer*) _cell;

	// call function
	gtk_cell_layout_set_attributes(self, cell, NULL);

	// cleanup parameter self

	// cleanup parameter cell
}
