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
#include "org_gnome_gtk_GtkToolItemGroup.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkToolItemGroup_gtk_1tool_1item_1group_1new
(
	JNIEnv* env,
	jclass cls,
	jstring _label
)
{
	GtkWidget* result;
	jlong _result;
	const gchar* label;

	// convert parameter label
	label = (const gchar*) bindings_java_getString(env, _label);
	if (label == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_tool_item_group_new(label);

	// cleanup parameter label
	bindings_java_releaseString(label);

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkToolItemGroup_gtk_1tool_1item_1group_1get_1collapsed
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkToolItemGroup* self;

	// convert parameter self
	self = (GtkToolItemGroup*) _self;

	// call function
	result = gtk_tool_item_group_get_collapsed(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkToolItemGroup_gtk_1tool_1item_1group_1get_1drop_1item
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _x,
	jint _y
)
{
	GtkToolItem* result;
	jlong _result;
	GtkToolItemGroup* self;
	gint x;
	gint y;

	// convert parameter self
	self = (GtkToolItemGroup*) _self;

	// convert parameter x
	x = (gint) _x;

	// convert parameter y
	y = (gint) _y;

	// call function
	result = gtk_tool_item_group_get_drop_item(self, x, y);

	// cleanup parameter self

	// cleanup parameter x

	// cleanup parameter y

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
Java_org_gnome_gtk_GtkToolItemGroup_gtk_1tool_1item_1group_1get_1ellipsize
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoEllipsizeMode result;
	jint _result;
	GtkToolItemGroup* self;

	// convert parameter self
	self = (GtkToolItemGroup*) _self;

	// call function
	result = gtk_tool_item_group_get_ellipsize(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkToolItemGroup_gtk_1tool_1item_1group_1get_1header_1relief
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkReliefStyle result;
	jint _result;
	GtkToolItemGroup* self;

	// convert parameter self
	self = (GtkToolItemGroup*) _self;

	// call function
	result = gtk_tool_item_group_get_header_relief(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkToolItemGroup_gtk_1tool_1item_1group_1get_1item_1position
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _item
)
{
	gint result;
	jint _result;
	GtkToolItemGroup* self;
	GtkToolItem* item;

	// convert parameter self
	self = (GtkToolItemGroup*) _self;

	// convert parameter item
	item = (GtkToolItem*) _item;

	// call function
	result = gtk_tool_item_group_get_item_position(self, item);

	// cleanup parameter self

	// cleanup parameter item

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkToolItemGroup_gtk_1tool_1item_1group_1get_1label
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkToolItemGroup* self;

	// convert parameter self
	self = (GtkToolItemGroup*) _self;

	// call function
	result = gtk_tool_item_group_get_label(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkToolItemGroup_gtk_1tool_1item_1group_1get_1label_1widget
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkToolItemGroup* self;

	// convert parameter self
	self = (GtkToolItemGroup*) _self;

	// call function
	result = gtk_tool_item_group_get_label_widget(self);

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
Java_org_gnome_gtk_GtkToolItemGroup_gtk_1tool_1item_1group_1get_1n_1items
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GtkToolItemGroup* self;

	// convert parameter self
	self = (GtkToolItemGroup*) _self;

	// call function
	result = gtk_tool_item_group_get_n_items(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkToolItemGroup_gtk_1tool_1item_1group_1get_1nth_1item
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _index
)
{
	GtkToolItem* result;
	jlong _result;
	GtkToolItemGroup* self;
	guint index;

	// convert parameter self
	self = (GtkToolItemGroup*) _self;

	// convert parameter index
	index = (guint) _index;

	// call function
	result = gtk_tool_item_group_get_nth_item(self, index);

	// cleanup parameter self

	// cleanup parameter index

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
Java_org_gnome_gtk_GtkToolItemGroup_gtk_1tool_1item_1group_1insert
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _item,
	jint _position
)
{
	GtkToolItemGroup* self;
	GtkToolItem* item;
	gint position;

	// convert parameter self
	self = (GtkToolItemGroup*) _self;

	// convert parameter item
	item = (GtkToolItem*) _item;

	// convert parameter position
	position = (gint) _position;

	// call function
	gtk_tool_item_group_insert(self, item, position);

	// cleanup parameter self

	// cleanup parameter item

	// cleanup parameter position
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkToolItemGroup_gtk_1tool_1item_1group_1set_1collapsed
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _collapsed
)
{
	GtkToolItemGroup* self;
	gboolean collapsed;

	// convert parameter self
	self = (GtkToolItemGroup*) _self;

	// convert parameter collapsed
	collapsed = (gboolean) _collapsed;

	// call function
	gtk_tool_item_group_set_collapsed(self, collapsed);

	// cleanup parameter self

	// cleanup parameter collapsed
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkToolItemGroup_gtk_1tool_1item_1group_1set_1ellipsize
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _ellipsize
)
{
	GtkToolItemGroup* self;
	PangoEllipsizeMode ellipsize;

	// convert parameter self
	self = (GtkToolItemGroup*) _self;

	// convert parameter ellipsize
	ellipsize = (PangoEllipsizeMode) _ellipsize;

	// call function
	gtk_tool_item_group_set_ellipsize(self, ellipsize);

	// cleanup parameter self

	// cleanup parameter ellipsize
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkToolItemGroup_gtk_1tool_1item_1group_1set_1header_1relief
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _style
)
{
	GtkToolItemGroup* self;
	GtkReliefStyle style;

	// convert parameter self
	self = (GtkToolItemGroup*) _self;

	// convert parameter style
	style = (GtkReliefStyle) _style;

	// call function
	gtk_tool_item_group_set_header_relief(self, style);

	// cleanup parameter self

	// cleanup parameter style
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkToolItemGroup_gtk_1tool_1item_1group_1set_1item_1position
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _item,
	jint _position
)
{
	GtkToolItemGroup* self;
	GtkToolItem* item;
	gint position;

	// convert parameter self
	self = (GtkToolItemGroup*) _self;

	// convert parameter item
	item = (GtkToolItem*) _item;

	// convert parameter position
	position = (gint) _position;

	// call function
	gtk_tool_item_group_set_item_position(self, item, position);

	// cleanup parameter self

	// cleanup parameter item

	// cleanup parameter position
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkToolItemGroup_gtk_1tool_1item_1group_1set_1label
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _label
)
{
	GtkToolItemGroup* self;
	const gchar* label;

	// convert parameter self
	self = (GtkToolItemGroup*) _self;

	// convert parameter label
	label = (const gchar*) bindings_java_getString(env, _label);
	if (label == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_tool_item_group_set_label(self, label);

	// cleanup parameter self

	// cleanup parameter label
	bindings_java_releaseString(label);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkToolItemGroup_gtk_1tool_1item_1group_1set_1label_1widget
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _labelWidget
)
{
	GtkToolItemGroup* self;
	GtkWidget* labelWidget;

	// convert parameter self
	self = (GtkToolItemGroup*) _self;

	// convert parameter labelWidget
	labelWidget = (GtkWidget*) _labelWidget;

	// call function
	gtk_tool_item_group_set_label_widget(self, labelWidget);

	// cleanup parameter self

	// cleanup parameter labelWidget
}
