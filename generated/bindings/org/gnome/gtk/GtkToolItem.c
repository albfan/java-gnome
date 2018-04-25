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
#include "org_gnome_gtk_GtkToolItem.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkToolItem_gtk_1tool_1item_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkToolItem* result;
	jlong _result;

	// call function
	result = gtk_tool_item_new();

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
Java_org_gnome_gtk_GtkToolItem_gtk_1tool_1item_1get_1ellipsize_1mode
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoEllipsizeMode result;
	jint _result;
	GtkToolItem* self;

	// convert parameter self
	self = (GtkToolItem*) _self;

	// call function
	result = gtk_tool_item_get_ellipsize_mode(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkToolItem_gtk_1tool_1item_1get_1expand
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkToolItem* self;

	// convert parameter self
	self = (GtkToolItem*) _self;

	// call function
	result = gtk_tool_item_get_expand(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkToolItem_gtk_1tool_1item_1get_1homogeneous
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkToolItem* self;

	// convert parameter self
	self = (GtkToolItem*) _self;

	// call function
	result = gtk_tool_item_get_homogeneous(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkToolItem_gtk_1tool_1item_1get_1icon_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkIconSize result;
	jint _result;
	GtkToolItem* self;

	// convert parameter self
	self = (GtkToolItem*) _self;

	// call function
	result = gtk_tool_item_get_icon_size(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkToolItem_gtk_1tool_1item_1get_1is_1important
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkToolItem* self;

	// convert parameter self
	self = (GtkToolItem*) _self;

	// call function
	result = gtk_tool_item_get_is_important(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkToolItem_gtk_1tool_1item_1get_1orientation
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkOrientation result;
	jint _result;
	GtkToolItem* self;

	// convert parameter self
	self = (GtkToolItem*) _self;

	// call function
	result = gtk_tool_item_get_orientation(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkToolItem_gtk_1tool_1item_1get_1proxy_1menu_1item
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _menuItemId
)
{
	GtkWidget* result;
	jlong _result;
	GtkToolItem* self;
	const gchar* menuItemId;

	// convert parameter self
	self = (GtkToolItem*) _self;

	// convert parameter menuItemId
	menuItemId = (const gchar*) bindings_java_getString(env, _menuItemId);
	if (menuItemId == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_tool_item_get_proxy_menu_item(self, menuItemId);

	// cleanup parameter self

	// cleanup parameter menuItemId
	bindings_java_releaseString(menuItemId);

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
Java_org_gnome_gtk_GtkToolItem_gtk_1tool_1item_1get_1relief_1style
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkReliefStyle result;
	jint _result;
	GtkToolItem* self;

	// convert parameter self
	self = (GtkToolItem*) _self;

	// call function
	result = gtk_tool_item_get_relief_style(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jfloat JNICALL
Java_org_gnome_gtk_GtkToolItem_gtk_1tool_1item_1get_1text_1alignment
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gfloat result;
	jfloat _result;
	GtkToolItem* self;

	// convert parameter self
	self = (GtkToolItem*) _self;

	// call function
	result = gtk_tool_item_get_text_alignment(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jfloat) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkToolItem_gtk_1tool_1item_1get_1text_1orientation
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkOrientation result;
	jint _result;
	GtkToolItem* self;

	// convert parameter self
	self = (GtkToolItem*) _self;

	// call function
	result = gtk_tool_item_get_text_orientation(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkToolItem_gtk_1tool_1item_1get_1text_1size_1group
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkSizeGroup* result;
	jlong _result;
	GtkToolItem* self;

	// convert parameter self
	self = (GtkToolItem*) _self;

	// call function
	result = gtk_tool_item_get_text_size_group(self);

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
Java_org_gnome_gtk_GtkToolItem_gtk_1tool_1item_1get_1toolbar_1style
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkToolbarStyle result;
	jint _result;
	GtkToolItem* self;

	// convert parameter self
	self = (GtkToolItem*) _self;

	// call function
	result = gtk_tool_item_get_toolbar_style(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkToolItem_gtk_1tool_1item_1get_1use_1drag_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkToolItem* self;

	// convert parameter self
	self = (GtkToolItem*) _self;

	// call function
	result = gtk_tool_item_get_use_drag_window(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkToolItem_gtk_1tool_1item_1get_1visible_1horizontal
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkToolItem* self;

	// convert parameter self
	self = (GtkToolItem*) _self;

	// call function
	result = gtk_tool_item_get_visible_horizontal(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkToolItem_gtk_1tool_1item_1get_1visible_1vertical
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkToolItem* self;

	// convert parameter self
	self = (GtkToolItem*) _self;

	// call function
	result = gtk_tool_item_get_visible_vertical(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkToolItem_gtk_1tool_1item_1rebuild_1menu
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkToolItem* self;

	// convert parameter self
	self = (GtkToolItem*) _self;

	// call function
	gtk_tool_item_rebuild_menu(self);

	// cleanup parameter self
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkToolItem_gtk_1tool_1item_1retrieve_1proxy_1menu_1item
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkToolItem* self;

	// convert parameter self
	self = (GtkToolItem*) _self;

	// call function
	result = gtk_tool_item_retrieve_proxy_menu_item(self);

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
Java_org_gnome_gtk_GtkToolItem_gtk_1tool_1item_1set_1expand
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _expand
)
{
	GtkToolItem* self;
	gboolean expand;

	// convert parameter self
	self = (GtkToolItem*) _self;

	// convert parameter expand
	expand = (gboolean) _expand;

	// call function
	gtk_tool_item_set_expand(self, expand);

	// cleanup parameter self

	// cleanup parameter expand
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkToolItem_gtk_1tool_1item_1set_1homogeneous
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _homogeneous
)
{
	GtkToolItem* self;
	gboolean homogeneous;

	// convert parameter self
	self = (GtkToolItem*) _self;

	// convert parameter homogeneous
	homogeneous = (gboolean) _homogeneous;

	// call function
	gtk_tool_item_set_homogeneous(self, homogeneous);

	// cleanup parameter self

	// cleanup parameter homogeneous
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkToolItem_gtk_1tool_1item_1set_1is_1important
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _isImportant
)
{
	GtkToolItem* self;
	gboolean isImportant;

	// convert parameter self
	self = (GtkToolItem*) _self;

	// convert parameter isImportant
	isImportant = (gboolean) _isImportant;

	// call function
	gtk_tool_item_set_is_important(self, isImportant);

	// cleanup parameter self

	// cleanup parameter isImportant
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkToolItem_gtk_1tool_1item_1set_1proxy_1menu_1item
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _menuItemId,
	jlong _menuItem
)
{
	GtkToolItem* self;
	const gchar* menuItemId;
	GtkWidget* menuItem;

	// convert parameter self
	self = (GtkToolItem*) _self;

	// convert parameter menuItemId
	menuItemId = (const gchar*) bindings_java_getString(env, _menuItemId);
	if (menuItemId == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter menuItem
	menuItem = (GtkWidget*) _menuItem;

	// call function
	gtk_tool_item_set_proxy_menu_item(self, menuItemId, menuItem);

	// cleanup parameter self

	// cleanup parameter menuItemId
	bindings_java_releaseString(menuItemId);

	// cleanup parameter menuItem
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkToolItem_gtk_1tool_1item_1set_1tooltip_1markup
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _markup
)
{
	GtkToolItem* self;
	const gchar* markup;

	// convert parameter self
	self = (GtkToolItem*) _self;

	// convert parameter markup
	markup = (const gchar*) bindings_java_getString(env, _markup);
	if (markup == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_tool_item_set_tooltip_markup(self, markup);

	// cleanup parameter self

	// cleanup parameter markup
	bindings_java_releaseString(markup);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkToolItem_gtk_1tool_1item_1set_1tooltip_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _text
)
{
	GtkToolItem* self;
	const gchar* text;

	// convert parameter self
	self = (GtkToolItem*) _self;

	// convert parameter text
	text = (const gchar*) bindings_java_getString(env, _text);
	if (text == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_tool_item_set_tooltip_text(self, text);

	// cleanup parameter self

	// cleanup parameter text
	bindings_java_releaseString(text);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkToolItem_gtk_1tool_1item_1set_1use_1drag_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _useDragWindow
)
{
	GtkToolItem* self;
	gboolean useDragWindow;

	// convert parameter self
	self = (GtkToolItem*) _self;

	// convert parameter useDragWindow
	useDragWindow = (gboolean) _useDragWindow;

	// call function
	gtk_tool_item_set_use_drag_window(self, useDragWindow);

	// cleanup parameter self

	// cleanup parameter useDragWindow
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkToolItem_gtk_1tool_1item_1set_1visible_1horizontal
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _visibleHorizontal
)
{
	GtkToolItem* self;
	gboolean visibleHorizontal;

	// convert parameter self
	self = (GtkToolItem*) _self;

	// convert parameter visibleHorizontal
	visibleHorizontal = (gboolean) _visibleHorizontal;

	// call function
	gtk_tool_item_set_visible_horizontal(self, visibleHorizontal);

	// cleanup parameter self

	// cleanup parameter visibleHorizontal
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkToolItem_gtk_1tool_1item_1set_1visible_1vertical
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _visibleVertical
)
{
	GtkToolItem* self;
	gboolean visibleVertical;

	// convert parameter self
	self = (GtkToolItem*) _self;

	// convert parameter visibleVertical
	visibleVertical = (gboolean) _visibleVertical;

	// call function
	gtk_tool_item_set_visible_vertical(self, visibleVertical);

	// cleanup parameter self

	// cleanup parameter visibleVertical
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkToolItem_gtk_1tool_1item_1toolbar_1reconfigured
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkToolItem* self;

	// convert parameter self
	self = (GtkToolItem*) _self;

	// call function
	gtk_tool_item_toolbar_reconfigured(self);

	// cleanup parameter self
}
