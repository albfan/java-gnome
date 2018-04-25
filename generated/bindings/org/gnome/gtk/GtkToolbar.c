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
#include "org_gnome_gtk_GtkToolbar.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkToolbar_gtk_1toolbar_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkWidget* result;
	jlong _result;

	// call function
	result = gtk_toolbar_new();

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkToolbar_gtk_1toolbar_1get_1drop_1index
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _x,
	jint _y
)
{
	gint result;
	jint _result;
	GtkToolbar* self;
	gint x;
	gint y;

	// convert parameter self
	self = (GtkToolbar*) _self;

	// convert parameter x
	x = (gint) _x;

	// convert parameter y
	y = (gint) _y;

	// call function
	result = gtk_toolbar_get_drop_index(self, x, y);

	// cleanup parameter self

	// cleanup parameter x

	// cleanup parameter y

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkToolbar_gtk_1toolbar_1get_1icon_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkIconSize result;
	jint _result;
	GtkToolbar* self;

	// convert parameter self
	self = (GtkToolbar*) _self;

	// call function
	result = gtk_toolbar_get_icon_size(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkToolbar_gtk_1toolbar_1get_1item_1index
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _item
)
{
	gint result;
	jint _result;
	GtkToolbar* self;
	GtkToolItem* item;

	// convert parameter self
	self = (GtkToolbar*) _self;

	// convert parameter item
	item = (GtkToolItem*) _item;

	// call function
	result = gtk_toolbar_get_item_index(self, item);

	// cleanup parameter self

	// cleanup parameter item

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkToolbar_gtk_1toolbar_1get_1n_1items
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkToolbar* self;

	// convert parameter self
	self = (GtkToolbar*) _self;

	// call function
	result = gtk_toolbar_get_n_items(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkToolbar_gtk_1toolbar_1get_1nth_1item
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _n
)
{
	GtkToolItem* result;
	jlong _result;
	GtkToolbar* self;
	gint n;

	// convert parameter self
	self = (GtkToolbar*) _self;

	// convert parameter n
	n = (gint) _n;

	// call function
	result = gtk_toolbar_get_nth_item(self, n);

	// cleanup parameter self

	// cleanup parameter n

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
Java_org_gnome_gtk_GtkToolbar_gtk_1toolbar_1get_1relief_1style
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkReliefStyle result;
	jint _result;
	GtkToolbar* self;

	// convert parameter self
	self = (GtkToolbar*) _self;

	// call function
	result = gtk_toolbar_get_relief_style(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkToolbar_gtk_1toolbar_1get_1show_1arrow
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkToolbar* self;

	// convert parameter self
	self = (GtkToolbar*) _self;

	// call function
	result = gtk_toolbar_get_show_arrow(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkToolbar_gtk_1toolbar_1get_1style
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkToolbarStyle result;
	jint _result;
	GtkToolbar* self;

	// convert parameter self
	self = (GtkToolbar*) _self;

	// call function
	result = gtk_toolbar_get_style(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkToolbar_gtk_1toolbar_1insert
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _item,
	jint _pos
)
{
	GtkToolbar* self;
	GtkToolItem* item;
	gint pos;

	// convert parameter self
	self = (GtkToolbar*) _self;

	// convert parameter item
	item = (GtkToolItem*) _item;

	// convert parameter pos
	pos = (gint) _pos;

	// call function
	gtk_toolbar_insert(self, item, pos);

	// cleanup parameter self

	// cleanup parameter item

	// cleanup parameter pos
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkToolbar_gtk_1toolbar_1set_1drop_1highlight_1item
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _toolItem,
	jint _index
)
{
	GtkToolbar* self;
	GtkToolItem* toolItem;
	gint index;

	// convert parameter self
	self = (GtkToolbar*) _self;

	// convert parameter toolItem
	toolItem = (GtkToolItem*) _toolItem;

	// convert parameter index
	index = (gint) _index;

	// call function
	gtk_toolbar_set_drop_highlight_item(self, toolItem, index);

	// cleanup parameter self

	// cleanup parameter toolItem

	// cleanup parameter index
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkToolbar_gtk_1toolbar_1set_1icon_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _iconSize
)
{
	GtkToolbar* self;
	GtkIconSize iconSize;

	// convert parameter self
	self = (GtkToolbar*) _self;

	// convert parameter iconSize
	iconSize = (GtkIconSize) _iconSize;

	// call function
	gtk_toolbar_set_icon_size(self, iconSize);

	// cleanup parameter self

	// cleanup parameter iconSize
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkToolbar_gtk_1toolbar_1set_1show_1arrow
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _showArrow
)
{
	GtkToolbar* self;
	gboolean showArrow;

	// convert parameter self
	self = (GtkToolbar*) _self;

	// convert parameter showArrow
	showArrow = (gboolean) _showArrow;

	// call function
	gtk_toolbar_set_show_arrow(self, showArrow);

	// cleanup parameter self

	// cleanup parameter showArrow
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkToolbar_gtk_1toolbar_1set_1style
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _style
)
{
	GtkToolbar* self;
	GtkToolbarStyle style;

	// convert parameter self
	self = (GtkToolbar*) _self;

	// convert parameter style
	style = (GtkToolbarStyle) _style;

	// call function
	gtk_toolbar_set_style(self, style);

	// cleanup parameter self

	// cleanup parameter style
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkToolbar_gtk_1toolbar_1unset_1icon_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkToolbar* self;

	// convert parameter self
	self = (GtkToolbar*) _self;

	// call function
	gtk_toolbar_unset_icon_size(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkToolbar_gtk_1toolbar_1unset_1style
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkToolbar* self;

	// convert parameter self
	self = (GtkToolbar*) _self;

	// call function
	gtk_toolbar_unset_style(self);

	// cleanup parameter self
}
