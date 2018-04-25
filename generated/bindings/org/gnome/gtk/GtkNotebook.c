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
#include "org_gnome_gtk_GtkNotebook.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkWidget* result;
	jlong _result;

	// call function
	result = gtk_notebook_new();

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
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1append_1page
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jlong _tabLabel
)
{
	gint result;
	jint _result;
	GtkNotebook* self;
	GtkWidget* child;
	GtkWidget* tabLabel;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter tabLabel
	tabLabel = (GtkWidget*) _tabLabel;

	// call function
	result = gtk_notebook_append_page(self, child, tabLabel);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter tabLabel

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1append_1page_1menu
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jlong _tabLabel,
	jlong _menuLabel
)
{
	gint result;
	jint _result;
	GtkNotebook* self;
	GtkWidget* child;
	GtkWidget* tabLabel;
	GtkWidget* menuLabel;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter tabLabel
	tabLabel = (GtkWidget*) _tabLabel;

	// convert parameter menuLabel
	menuLabel = (GtkWidget*) _menuLabel;

	// call function
	result = gtk_notebook_append_page_menu(self, child, tabLabel, menuLabel);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter tabLabel

	// cleanup parameter menuLabel

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1detach_1tab
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child
)
{
	GtkNotebook* self;
	GtkWidget* child;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// call function
	gtk_notebook_detach_tab(self, child);

	// cleanup parameter self

	// cleanup parameter child
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1get_1action_1widget
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _packType
)
{
	GtkWidget* result;
	jlong _result;
	GtkNotebook* self;
	GtkPackType packType;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// convert parameter packType
	packType = (GtkPackType) _packType;

	// call function
	result = gtk_notebook_get_action_widget(self, packType);

	// cleanup parameter self

	// cleanup parameter packType

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
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1get_1current_1page
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkNotebook* self;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// call function
	result = gtk_notebook_get_current_page(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1get_1group_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkNotebook* self;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// call function
	result = gtk_notebook_get_group_name(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1get_1menu_1label
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child
)
{
	GtkWidget* result;
	jlong _result;
	GtkNotebook* self;
	GtkWidget* child;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// call function
	result = gtk_notebook_get_menu_label(self, child);

	// cleanup parameter self

	// cleanup parameter child

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, FALSE);
	}

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1get_1menu_1label_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child
)
{
	const gchar* result;
	jstring _result;
	GtkNotebook* self;
	GtkWidget* child;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// call function
	result = gtk_notebook_get_menu_label_text(self, child);

	// cleanup parameter self

	// cleanup parameter child

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1get_1n_1pages
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkNotebook* self;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// call function
	result = gtk_notebook_get_n_pages(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1get_1nth_1page
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _pageNum
)
{
	GtkWidget* result;
	jlong _result;
	GtkNotebook* self;
	gint pageNum;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// convert parameter pageNum
	pageNum = (gint) _pageNum;

	// call function
	result = gtk_notebook_get_nth_page(self, pageNum);

	// cleanup parameter self

	// cleanup parameter pageNum

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
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1get_1scrollable
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkNotebook* self;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// call function
	result = gtk_notebook_get_scrollable(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1get_1show_1border
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkNotebook* self;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// call function
	result = gtk_notebook_get_show_border(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1get_1show_1tabs
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkNotebook* self;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// call function
	result = gtk_notebook_get_show_tabs(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1get_1tab_1detachable
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child
)
{
	gboolean result;
	jboolean _result;
	GtkNotebook* self;
	GtkWidget* child;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// call function
	result = gtk_notebook_get_tab_detachable(self, child);

	// cleanup parameter self

	// cleanup parameter child

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jchar JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1get_1tab_1hborder
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint16 result;
	jchar _result;
	GtkNotebook* self;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// call function
	result = gtk_notebook_get_tab_hborder(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jchar) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1get_1tab_1label
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child
)
{
	GtkWidget* result;
	jlong _result;
	GtkNotebook* self;
	GtkWidget* child;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// call function
	result = gtk_notebook_get_tab_label(self, child);

	// cleanup parameter self

	// cleanup parameter child

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, FALSE);
	}

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1get_1tab_1label_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child
)
{
	const gchar* result;
	jstring _result;
	GtkNotebook* self;
	GtkWidget* child;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// call function
	result = gtk_notebook_get_tab_label_text(self, child);

	// cleanup parameter self

	// cleanup parameter child

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1get_1tab_1pos
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkPositionType result;
	jint _result;
	GtkNotebook* self;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// call function
	result = gtk_notebook_get_tab_pos(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1get_1tab_1reorderable
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child
)
{
	gboolean result;
	jboolean _result;
	GtkNotebook* self;
	GtkWidget* child;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// call function
	result = gtk_notebook_get_tab_reorderable(self, child);

	// cleanup parameter self

	// cleanup parameter child

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jchar JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1get_1tab_1vborder
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint16 result;
	jchar _result;
	GtkNotebook* self;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// call function
	result = gtk_notebook_get_tab_vborder(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jchar) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1insert_1page
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jlong _tabLabel,
	jint _position
)
{
	gint result;
	jint _result;
	GtkNotebook* self;
	GtkWidget* child;
	GtkWidget* tabLabel;
	gint position;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter tabLabel
	tabLabel = (GtkWidget*) _tabLabel;

	// convert parameter position
	position = (gint) _position;

	// call function
	result = gtk_notebook_insert_page(self, child, tabLabel, position);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter tabLabel

	// cleanup parameter position

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1insert_1page_1menu
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jlong _tabLabel,
	jlong _menuLabel,
	jint _position
)
{
	gint result;
	jint _result;
	GtkNotebook* self;
	GtkWidget* child;
	GtkWidget* tabLabel;
	GtkWidget* menuLabel;
	gint position;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter tabLabel
	tabLabel = (GtkWidget*) _tabLabel;

	// convert parameter menuLabel
	menuLabel = (GtkWidget*) _menuLabel;

	// convert parameter position
	position = (gint) _position;

	// call function
	result = gtk_notebook_insert_page_menu(self, child, tabLabel, menuLabel, position);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter tabLabel

	// cleanup parameter menuLabel

	// cleanup parameter position

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1next_1page
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkNotebook* self;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// call function
	gtk_notebook_next_page(self);

	// cleanup parameter self
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1page_1num
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child
)
{
	gint result;
	jint _result;
	GtkNotebook* self;
	GtkWidget* child;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// call function
	result = gtk_notebook_page_num(self, child);

	// cleanup parameter self

	// cleanup parameter child

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1popup_1disable
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkNotebook* self;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// call function
	gtk_notebook_popup_disable(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1popup_1enable
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkNotebook* self;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// call function
	gtk_notebook_popup_enable(self);

	// cleanup parameter self
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1prepend_1page
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jlong _tabLabel
)
{
	gint result;
	jint _result;
	GtkNotebook* self;
	GtkWidget* child;
	GtkWidget* tabLabel;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter tabLabel
	tabLabel = (GtkWidget*) _tabLabel;

	// call function
	result = gtk_notebook_prepend_page(self, child, tabLabel);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter tabLabel

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1prepend_1page_1menu
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jlong _tabLabel,
	jlong _menuLabel
)
{
	gint result;
	jint _result;
	GtkNotebook* self;
	GtkWidget* child;
	GtkWidget* tabLabel;
	GtkWidget* menuLabel;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter tabLabel
	tabLabel = (GtkWidget*) _tabLabel;

	// convert parameter menuLabel
	menuLabel = (GtkWidget*) _menuLabel;

	// call function
	result = gtk_notebook_prepend_page_menu(self, child, tabLabel, menuLabel);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter tabLabel

	// cleanup parameter menuLabel

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1prev_1page
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkNotebook* self;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// call function
	gtk_notebook_prev_page(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1remove_1page
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _pageNum
)
{
	GtkNotebook* self;
	gint pageNum;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// convert parameter pageNum
	pageNum = (gint) _pageNum;

	// call function
	gtk_notebook_remove_page(self, pageNum);

	// cleanup parameter self

	// cleanup parameter pageNum
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1reorder_1child
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jint _position
)
{
	GtkNotebook* self;
	GtkWidget* child;
	gint position;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter position
	position = (gint) _position;

	// call function
	gtk_notebook_reorder_child(self, child, position);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter position
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1set_1action_1widget
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _widget,
	jint _packType
)
{
	GtkNotebook* self;
	GtkWidget* widget;
	GtkPackType packType;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// convert parameter widget
	widget = (GtkWidget*) _widget;

	// convert parameter packType
	packType = (GtkPackType) _packType;

	// call function
	gtk_notebook_set_action_widget(self, widget, packType);

	// cleanup parameter self

	// cleanup parameter widget

	// cleanup parameter packType
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1set_1current_1page
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _pageNum
)
{
	GtkNotebook* self;
	gint pageNum;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// convert parameter pageNum
	pageNum = (gint) _pageNum;

	// call function
	gtk_notebook_set_current_page(self, pageNum);

	// cleanup parameter self

	// cleanup parameter pageNum
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1set_1group_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _groupName
)
{
	GtkNotebook* self;
	const gchar* groupName;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// convert parameter groupName
	if (_groupName == NULL) {
		groupName = NULL;
	} else {
		groupName = (const gchar*) bindings_java_getString(env, _groupName);
		if (groupName == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_notebook_set_group_name(self, groupName);

	// cleanup parameter self

	// cleanup parameter groupName
	if (groupName != NULL) {
		bindings_java_releaseString(groupName);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1set_1menu_1label
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jlong _menuLabel
)
{
	GtkNotebook* self;
	GtkWidget* child;
	GtkWidget* menuLabel;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter menuLabel
	menuLabel = (GtkWidget*) _menuLabel;

	// call function
	gtk_notebook_set_menu_label(self, child, menuLabel);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter menuLabel
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1set_1menu_1label_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jstring _menuText
)
{
	GtkNotebook* self;
	GtkWidget* child;
	const gchar* menuText;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter menuText
	menuText = (const gchar*) bindings_java_getString(env, _menuText);
	if (menuText == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_notebook_set_menu_label_text(self, child, menuText);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter menuText
	bindings_java_releaseString(menuText);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1set_1scrollable
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _scrollable
)
{
	GtkNotebook* self;
	gboolean scrollable;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// convert parameter scrollable
	scrollable = (gboolean) _scrollable;

	// call function
	gtk_notebook_set_scrollable(self, scrollable);

	// cleanup parameter self

	// cleanup parameter scrollable
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1set_1show_1border
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _showBorder
)
{
	GtkNotebook* self;
	gboolean showBorder;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// convert parameter showBorder
	showBorder = (gboolean) _showBorder;

	// call function
	gtk_notebook_set_show_border(self, showBorder);

	// cleanup parameter self

	// cleanup parameter showBorder
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1set_1show_1tabs
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _showTabs
)
{
	GtkNotebook* self;
	gboolean showTabs;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// convert parameter showTabs
	showTabs = (gboolean) _showTabs;

	// call function
	gtk_notebook_set_show_tabs(self, showTabs);

	// cleanup parameter self

	// cleanup parameter showTabs
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1set_1tab_1detachable
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jboolean _detachable
)
{
	GtkNotebook* self;
	GtkWidget* child;
	gboolean detachable;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter detachable
	detachable = (gboolean) _detachable;

	// call function
	gtk_notebook_set_tab_detachable(self, child, detachable);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter detachable
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1set_1tab_1label
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jlong _tabLabel
)
{
	GtkNotebook* self;
	GtkWidget* child;
	GtkWidget* tabLabel;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter tabLabel
	tabLabel = (GtkWidget*) _tabLabel;

	// call function
	gtk_notebook_set_tab_label(self, child, tabLabel);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter tabLabel
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1set_1tab_1label_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jstring _tabText
)
{
	GtkNotebook* self;
	GtkWidget* child;
	const gchar* tabText;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter tabText
	tabText = (const gchar*) bindings_java_getString(env, _tabText);
	if (tabText == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_notebook_set_tab_label_text(self, child, tabText);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter tabText
	bindings_java_releaseString(tabText);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1set_1tab_1pos
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _pos
)
{
	GtkNotebook* self;
	GtkPositionType pos;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// convert parameter pos
	pos = (GtkPositionType) _pos;

	// call function
	gtk_notebook_set_tab_pos(self, pos);

	// cleanup parameter self

	// cleanup parameter pos
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkNotebook_gtk_1notebook_1set_1tab_1reorderable
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jboolean _reorderable
)
{
	GtkNotebook* self;
	GtkWidget* child;
	gboolean reorderable;

	// convert parameter self
	self = (GtkNotebook*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter reorderable
	reorderable = (gboolean) _reorderable;

	// call function
	gtk_notebook_set_tab_reorderable(self, child, reorderable);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter reorderable
}
