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
#include "org_gnome_gtk_GtkMenuShell.h"

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenuShell_gtk_1menu_1shell_1activate_1item
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _menuItem,
	jboolean _forceDeactivate
)
{
	GtkMenuShell* self;
	GtkWidget* menuItem;
	gboolean forceDeactivate;

	// convert parameter self
	self = (GtkMenuShell*) _self;

	// convert parameter menuItem
	menuItem = (GtkWidget*) _menuItem;

	// convert parameter forceDeactivate
	forceDeactivate = (gboolean) _forceDeactivate;

	// call function
	gtk_menu_shell_activate_item(self, menuItem, forceDeactivate);

	// cleanup parameter self

	// cleanup parameter menuItem

	// cleanup parameter forceDeactivate
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenuShell_gtk_1menu_1shell_1append
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child
)
{
	GtkMenuShell* self;
	GtkWidget* child;

	// convert parameter self
	self = (GtkMenuShell*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// call function
	gtk_menu_shell_append(self, child);

	// cleanup parameter self

	// cleanup parameter child
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenuShell_gtk_1menu_1shell_1cancel
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkMenuShell* self;

	// convert parameter self
	self = (GtkMenuShell*) _self;

	// call function
	gtk_menu_shell_cancel(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenuShell_gtk_1menu_1shell_1deactivate
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkMenuShell* self;

	// convert parameter self
	self = (GtkMenuShell*) _self;

	// call function
	gtk_menu_shell_deactivate(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenuShell_gtk_1menu_1shell_1deselect
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkMenuShell* self;

	// convert parameter self
	self = (GtkMenuShell*) _self;

	// call function
	gtk_menu_shell_deselect(self);

	// cleanup parameter self
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkMenuShell_gtk_1menu_1shell_1get_1parent_1shell
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkMenuShell* self;

	// convert parameter self
	self = (GtkMenuShell*) _self;

	// call function
	result = gtk_menu_shell_get_parent_shell(self);

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

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkMenuShell_gtk_1menu_1shell_1get_1selected_1item
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkMenuShell* self;

	// convert parameter self
	self = (GtkMenuShell*) _self;

	// call function
	result = gtk_menu_shell_get_selected_item(self);

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
Java_org_gnome_gtk_GtkMenuShell_gtk_1menu_1shell_1get_1take_1focus
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkMenuShell* self;

	// convert parameter self
	self = (GtkMenuShell*) _self;

	// call function
	result = gtk_menu_shell_get_take_focus(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenuShell_gtk_1menu_1shell_1insert
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jint _position
)
{
	GtkMenuShell* self;
	GtkWidget* child;
	gint position;

	// convert parameter self
	self = (GtkMenuShell*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter position
	position = (gint) _position;

	// call function
	gtk_menu_shell_insert(self, child, position);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter position
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenuShell_gtk_1menu_1shell_1prepend
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child
)
{
	GtkMenuShell* self;
	GtkWidget* child;

	// convert parameter self
	self = (GtkMenuShell*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// call function
	gtk_menu_shell_prepend(self, child);

	// cleanup parameter self

	// cleanup parameter child
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenuShell_gtk_1menu_1shell_1select_1first
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _searchSensitive
)
{
	GtkMenuShell* self;
	gboolean searchSensitive;

	// convert parameter self
	self = (GtkMenuShell*) _self;

	// convert parameter searchSensitive
	searchSensitive = (gboolean) _searchSensitive;

	// call function
	gtk_menu_shell_select_first(self, searchSensitive);

	// cleanup parameter self

	// cleanup parameter searchSensitive
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenuShell_gtk_1menu_1shell_1select_1item
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _menuItem
)
{
	GtkMenuShell* self;
	GtkWidget* menuItem;

	// convert parameter self
	self = (GtkMenuShell*) _self;

	// convert parameter menuItem
	menuItem = (GtkWidget*) _menuItem;

	// call function
	gtk_menu_shell_select_item(self, menuItem);

	// cleanup parameter self

	// cleanup parameter menuItem
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenuShell_gtk_1menu_1shell_1set_1take_1focus
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _takeFocus
)
{
	GtkMenuShell* self;
	gboolean takeFocus;

	// convert parameter self
	self = (GtkMenuShell*) _self;

	// convert parameter takeFocus
	takeFocus = (gboolean) _takeFocus;

	// call function
	gtk_menu_shell_set_take_focus(self, takeFocus);

	// cleanup parameter self

	// cleanup parameter takeFocus
}
