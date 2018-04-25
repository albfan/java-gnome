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
#include <gdk/gdk.h>
#include "bindings_java.h"
#include "org_gnome_gdk_GdkDragContext.h"

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkDragContext_gdk_1drag_1context_1get_1actions
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkDragAction result;
	jint _result;
	GdkDragContext* self;

	// convert parameter self
	self = (GdkDragContext*) _self;

	// call function
	result = gdk_drag_context_get_actions(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkDragContext_gdk_1drag_1context_1get_1dest_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* result;
	jlong _result;
	GdkDragContext* self;

	// convert parameter self
	self = (GdkDragContext*) _self;

	// call function
	result = gdk_drag_context_get_dest_window(self);

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
Java_org_gnome_gdk_GdkDragContext_gdk_1drag_1context_1get_1device
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkDevice* result;
	jlong _result;
	GdkDragContext* self;

	// convert parameter self
	self = (GdkDragContext*) _self;

	// call function
	result = gdk_drag_context_get_device(self);

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
Java_org_gnome_gdk_GdkDragContext_gdk_1drag_1context_1get_1drag_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* result;
	jlong _result;
	GdkDragContext* self;

	// convert parameter self
	self = (GdkDragContext*) _self;

	// call function
	result = gdk_drag_context_get_drag_window(self);

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
Java_org_gnome_gdk_GdkDragContext_gdk_1drag_1context_1get_1protocol
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkDragProtocol result;
	jint _result;
	GdkDragContext* self;

	// convert parameter self
	self = (GdkDragContext*) _self;

	// call function
	result = gdk_drag_context_get_protocol(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gdk_GdkDragContext_gdk_1drag_1context_1get_1selected_1action
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkDragAction result;
	jint _result;
	GdkDragContext* self;

	// convert parameter self
	self = (GdkDragContext*) _self;

	// call function
	result = gdk_drag_context_get_selected_action(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gdk_GdkDragContext_gdk_1drag_1context_1get_1source_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* result;
	jlong _result;
	GdkDragContext* self;

	// convert parameter self
	self = (GdkDragContext*) _self;

	// call function
	result = gdk_drag_context_get_source_window(self);

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
Java_org_gnome_gdk_GdkDragContext_gdk_1drag_1context_1get_1suggested_1action
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkDragAction result;
	jint _result;
	GdkDragContext* self;

	// convert parameter self
	self = (GdkDragContext*) _self;

	// call function
	result = gdk_drag_context_get_suggested_action(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gdk_GdkDragContext_gdk_1drag_1context_1manage_1dnd
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _ipcWindow,
	jint _actions
)
{
	gboolean result;
	jboolean _result;
	GdkDragContext* self;
	GdkWindow* ipcWindow;
	GdkDragAction actions;

	// convert parameter self
	self = (GdkDragContext*) _self;

	// convert parameter ipcWindow
	ipcWindow = (GdkWindow*) _ipcWindow;

	// convert parameter actions
	actions = (GdkDragAction) _actions;

	// call function
	result = gdk_drag_context_manage_dnd(self, ipcWindow, actions);

	// cleanup parameter self

	// cleanup parameter ipcWindow

	// cleanup parameter actions

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkDragContext_gdk_1drag_1context_1set_1device
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _device
)
{
	GdkDragContext* self;
	GdkDevice* device;

	// convert parameter self
	self = (GdkDragContext*) _self;

	// convert parameter device
	device = (GdkDevice*) _device;

	// call function
	gdk_drag_context_set_device(self, device);

	// cleanup parameter self

	// cleanup parameter device
}

JNIEXPORT void JNICALL
Java_org_gnome_gdk_GdkDragContext_gdk_1drag_1context_1set_1hotspot
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _hotX,
	jint _hotY
)
{
	GdkDragContext* self;
	gint hotX;
	gint hotY;

	// convert parameter self
	self = (GdkDragContext*) _self;

	// convert parameter hotX
	hotX = (gint) _hotX;

	// convert parameter hotY
	hotY = (gint) _hotY;

	// call function
	gdk_drag_context_set_hotspot(self, hotX, hotY);

	// cleanup parameter self

	// cleanup parameter hotX

	// cleanup parameter hotY
}
