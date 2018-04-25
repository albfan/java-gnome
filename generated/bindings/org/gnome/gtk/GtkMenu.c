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
#include "org_gnome_gtk_GtkMenu.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkMenu_gtk_1menu_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkWidget* result;
	jlong _result;

	// call function
	result = gtk_menu_new();

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
Java_org_gnome_gtk_GtkMenu_gtk_1menu_1attach
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jint _leftAttach,
	jint _rightAttach,
	jint _topAttach,
	jint _bottomAttach
)
{
	GtkMenu* self;
	GtkWidget* child;
	guint leftAttach;
	guint rightAttach;
	guint topAttach;
	guint bottomAttach;

	// convert parameter self
	self = (GtkMenu*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter leftAttach
	leftAttach = (guint) _leftAttach;

	// convert parameter rightAttach
	rightAttach = (guint) _rightAttach;

	// convert parameter topAttach
	topAttach = (guint) _topAttach;

	// convert parameter bottomAttach
	bottomAttach = (guint) _bottomAttach;

	// call function
	gtk_menu_attach(self, child, leftAttach, rightAttach, topAttach, bottomAttach);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter leftAttach

	// cleanup parameter rightAttach

	// cleanup parameter topAttach

	// cleanup parameter bottomAttach
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenu_gtk_1menu_1detach
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkMenu* self;

	// convert parameter self
	self = (GtkMenu*) _self;

	// call function
	gtk_menu_detach(self);

	// cleanup parameter self
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkMenu_gtk_1menu_1get_1accel_1group
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAccelGroup* result;
	jlong _result;
	GtkMenu* self;

	// convert parameter self
	self = (GtkMenu*) _self;

	// call function
	result = gtk_menu_get_accel_group(self);

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

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkMenu_gtk_1menu_1get_1accel_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkMenu* self;

	// convert parameter self
	self = (GtkMenu*) _self;

	// call function
	result = gtk_menu_get_accel_path(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkMenu_gtk_1menu_1get_1active
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkMenu* self;

	// convert parameter self
	self = (GtkMenu*) _self;

	// call function
	result = gtk_menu_get_active(self);

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
Java_org_gnome_gtk_GtkMenu_gtk_1menu_1get_1attach_1widget
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkMenu* self;

	// convert parameter self
	self = (GtkMenu*) _self;

	// call function
	result = gtk_menu_get_attach_widget(self);

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
Java_org_gnome_gtk_GtkMenu_gtk_1menu_1get_1monitor
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkMenu* self;

	// convert parameter self
	self = (GtkMenu*) _self;

	// call function
	result = gtk_menu_get_monitor(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkMenu_gtk_1menu_1get_1reserve_1toggle_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkMenu* self;

	// convert parameter self
	self = (GtkMenu*) _self;

	// call function
	result = gtk_menu_get_reserve_toggle_size(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkMenu_gtk_1menu_1get_1tearoff_1state
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkMenu* self;

	// convert parameter self
	self = (GtkMenu*) _self;

	// call function
	result = gtk_menu_get_tearoff_state(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkMenu_gtk_1menu_1get_1title
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkMenu* self;

	// convert parameter self
	self = (GtkMenu*) _self;

	// call function
	result = gtk_menu_get_title(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenu_gtk_1menu_1popdown
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkMenu* self;

	// convert parameter self
	self = (GtkMenu*) _self;

	// call function
	gtk_menu_popdown(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenu_gtk_1menu_1popup_1at_1pointer
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _triggerEvent
)
{
	GtkMenu* self;
	const GdkEvent* triggerEvent;

	// convert parameter self
	self = (GtkMenu*) _self;

	// convert parameter triggerEvent
	triggerEvent = (const GdkEvent*) _triggerEvent;

	// call function
	gtk_menu_popup_at_pointer(self, triggerEvent);

	// cleanup parameter self

	// cleanup parameter triggerEvent
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenu_gtk_1menu_1popup_1at_1rect
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _rectWindow,
	jlong _rect,
	jint _rectAnchor,
	jint _menuAnchor,
	jlong _triggerEvent
)
{
	GtkMenu* self;
	GdkWindow* rectWindow;
	const GdkRectangle* rect;
	GdkGravity rectAnchor;
	GdkGravity menuAnchor;
	const GdkEvent* triggerEvent;

	// convert parameter self
	self = (GtkMenu*) _self;

	// convert parameter rectWindow
	rectWindow = (GdkWindow*) _rectWindow;

	// convert parameter rect
	rect = (const GdkRectangle*) _rect;

	// convert parameter rectAnchor
	rectAnchor = (GdkGravity) _rectAnchor;

	// convert parameter menuAnchor
	menuAnchor = (GdkGravity) _menuAnchor;

	// convert parameter triggerEvent
	triggerEvent = (const GdkEvent*) _triggerEvent;

	// call function
	gtk_menu_popup_at_rect(self, rectWindow, rect, rectAnchor, menuAnchor, triggerEvent);

	// cleanup parameter self

	// cleanup parameter rectWindow

	// cleanup parameter rect

	// cleanup parameter rectAnchor

	// cleanup parameter menuAnchor

	// cleanup parameter triggerEvent
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenu_gtk_1menu_1popup_1at_1widget
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _widget,
	jint _widgetAnchor,
	jint _menuAnchor,
	jlong _triggerEvent
)
{
	GtkMenu* self;
	GtkWidget* widget;
	GdkGravity widgetAnchor;
	GdkGravity menuAnchor;
	const GdkEvent* triggerEvent;

	// convert parameter self
	self = (GtkMenu*) _self;

	// convert parameter widget
	widget = (GtkWidget*) _widget;

	// convert parameter widgetAnchor
	widgetAnchor = (GdkGravity) _widgetAnchor;

	// convert parameter menuAnchor
	menuAnchor = (GdkGravity) _menuAnchor;

	// convert parameter triggerEvent
	triggerEvent = (const GdkEvent*) _triggerEvent;

	// call function
	gtk_menu_popup_at_widget(self, widget, widgetAnchor, menuAnchor, triggerEvent);

	// cleanup parameter self

	// cleanup parameter widget

	// cleanup parameter widgetAnchor

	// cleanup parameter menuAnchor

	// cleanup parameter triggerEvent
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenu_gtk_1menu_1reorder_1child
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jint _position
)
{
	GtkMenu* self;
	GtkWidget* child;
	gint position;

	// convert parameter self
	self = (GtkMenu*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter position
	position = (gint) _position;

	// call function
	gtk_menu_reorder_child(self, child, position);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter position
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenu_gtk_1menu_1reposition
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkMenu* self;

	// convert parameter self
	self = (GtkMenu*) _self;

	// call function
	gtk_menu_reposition(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenu_gtk_1menu_1set_1accel_1group
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _accelGroup
)
{
	GtkMenu* self;
	GtkAccelGroup* accelGroup;

	// convert parameter self
	self = (GtkMenu*) _self;

	// convert parameter accelGroup
	accelGroup = (GtkAccelGroup*) _accelGroup;

	// call function
	gtk_menu_set_accel_group(self, accelGroup);

	// cleanup parameter self

	// cleanup parameter accelGroup
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenu_gtk_1menu_1set_1accel_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _accelPath
)
{
	GtkMenu* self;
	const gchar* accelPath;

	// convert parameter self
	self = (GtkMenu*) _self;

	// convert parameter accelPath
	if (_accelPath == NULL) {
		accelPath = NULL;
	} else {
		accelPath = (const gchar*) bindings_java_getString(env, _accelPath);
		if (accelPath == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_menu_set_accel_path(self, accelPath);

	// cleanup parameter self

	// cleanup parameter accelPath
	if (accelPath != NULL) {
		bindings_java_releaseString(accelPath);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenu_gtk_1menu_1set_1active
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _index
)
{
	GtkMenu* self;
	guint index;

	// convert parameter self
	self = (GtkMenu*) _self;

	// convert parameter index
	index = (guint) _index;

	// call function
	gtk_menu_set_active(self, index);

	// cleanup parameter self

	// cleanup parameter index
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenu_gtk_1menu_1set_1monitor
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _monitorNum
)
{
	GtkMenu* self;
	gint monitorNum;

	// convert parameter self
	self = (GtkMenu*) _self;

	// convert parameter monitorNum
	monitorNum = (gint) _monitorNum;

	// call function
	gtk_menu_set_monitor(self, monitorNum);

	// cleanup parameter self

	// cleanup parameter monitorNum
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenu_gtk_1menu_1set_1reserve_1toggle_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _reserveToggleSize
)
{
	GtkMenu* self;
	gboolean reserveToggleSize;

	// convert parameter self
	self = (GtkMenu*) _self;

	// convert parameter reserveToggleSize
	reserveToggleSize = (gboolean) _reserveToggleSize;

	// call function
	gtk_menu_set_reserve_toggle_size(self, reserveToggleSize);

	// cleanup parameter self

	// cleanup parameter reserveToggleSize
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenu_gtk_1menu_1set_1screen
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _screen
)
{
	GtkMenu* self;
	GdkScreen* screen;

	// convert parameter self
	self = (GtkMenu*) _self;

	// convert parameter screen
	screen = (GdkScreen*) _screen;

	// call function
	gtk_menu_set_screen(self, screen);

	// cleanup parameter self

	// cleanup parameter screen
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenu_gtk_1menu_1set_1tearoff_1state
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _tornOff
)
{
	GtkMenu* self;
	gboolean tornOff;

	// convert parameter self
	self = (GtkMenu*) _self;

	// convert parameter tornOff
	tornOff = (gboolean) _tornOff;

	// call function
	gtk_menu_set_tearoff_state(self, tornOff);

	// cleanup parameter self

	// cleanup parameter tornOff
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenu_gtk_1menu_1set_1title
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _title
)
{
	GtkMenu* self;
	const gchar* title;

	// convert parameter self
	self = (GtkMenu*) _self;

	// convert parameter title
	title = (const gchar*) bindings_java_getString(env, _title);
	if (title == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_menu_set_title(self, title);

	// cleanup parameter self

	// cleanup parameter title
	bindings_java_releaseString(title);
}

JNIEXPORT jlongArray JNICALL
Java_org_gnome_gtk_GtkMenu_gtk_1menu_1get_1for_1attach_1widget
(
	JNIEnv* env,
	jclass cls,
	jlong _widget
)
{
	GList* result;
	jlongArray _result;
	GtkWidget* widget;

	// convert parameter widget
	widget = (GtkWidget*) _widget;

	// call function
	result = gtk_menu_get_for_attach_widget(widget);

	// cleanup parameter widget

	// translate return value to JNI type
	_result = (jlongArray) bindings_java_convert_glist_to_jarray(env, result);

	// and finally
	return _result;
}
