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
#include "org_gnome_gtk_GtkWidget.h"

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1activate
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_activate(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1add_1accelerator
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _accelSignal,
	jlong _accelGroup,
	jint _accelKey,
	jint _accelMods,
	jint _accelFlags
)
{
	GtkWidget* self;
	const gchar* accelSignal;
	GtkAccelGroup* accelGroup;
	guint accelKey;
	GdkModifierType accelMods;
	GtkAccelFlags accelFlags;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter accelSignal
	accelSignal = (const gchar*) bindings_java_getString(env, _accelSignal);
	if (accelSignal == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter accelGroup
	accelGroup = (GtkAccelGroup*) _accelGroup;

	// convert parameter accelKey
	accelKey = (guint) _accelKey;

	// convert parameter accelMods
	accelMods = (GdkModifierType) _accelMods;

	// convert parameter accelFlags
	accelFlags = (GtkAccelFlags) _accelFlags;

	// call function
	gtk_widget_add_accelerator(self, accelSignal, accelGroup, accelKey, accelMods, accelFlags);

	// cleanup parameter self

	// cleanup parameter accelSignal
	bindings_java_releaseString(accelSignal);

	// cleanup parameter accelGroup

	// cleanup parameter accelKey

	// cleanup parameter accelMods

	// cleanup parameter accelFlags
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1add_1device_1events
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _device,
	jint _events
)
{
	GtkWidget* self;
	GdkDevice* device;
	GdkEventMask events;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter device
	device = (GdkDevice*) _device;

	// convert parameter events
	events = (GdkEventMask) _events;

	// call function
	gtk_widget_add_device_events(self, device, events);

	// cleanup parameter self

	// cleanup parameter device

	// cleanup parameter events
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1add_1events
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _events
)
{
	GtkWidget* self;
	gint events;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter events
	events = (gint) _events;

	// call function
	gtk_widget_add_events(self, events);

	// cleanup parameter self

	// cleanup parameter events
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1add_1mnemonic_1label
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _label
)
{
	GtkWidget* self;
	GtkWidget* label;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter label
	label = (GtkWidget*) _label;

	// call function
	gtk_widget_add_mnemonic_label(self, label);

	// cleanup parameter self

	// cleanup parameter label
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1can_1activate_1accel
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _signalId
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;
	guint signalId;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter signalId
	signalId = (guint) _signalId;

	// call function
	result = gtk_widget_can_activate_accel(self, signalId);

	// cleanup parameter self

	// cleanup parameter signalId

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1child_1focus
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _direction
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;
	GtkDirectionType direction;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter direction
	direction = (GtkDirectionType) _direction;

	// call function
	result = gtk_widget_child_focus(self, direction);

	// cleanup parameter self

	// cleanup parameter direction

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1child_1notify
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _childProperty
)
{
	GtkWidget* self;
	const gchar* childProperty;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter childProperty
	childProperty = (const gchar*) bindings_java_getString(env, _childProperty);
	if (childProperty == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_widget_child_notify(self, childProperty);

	// cleanup parameter self

	// cleanup parameter childProperty
	bindings_java_releaseString(childProperty);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1class_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _pathLength,
	jobjectArray _path,
	jobjectArray _pathReversed
)
{
	GtkWidget* self;
	guint* pathLength;
	gchar** path;
	gchar** pathReversed;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter pathLength
	if (_pathLength == NULL) {
		pathLength = NULL;
	} else {
		pathLength = (guint*) (*env)->GetIntArrayElements(env, _pathLength, NULL);
		if (pathLength == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter path
	if (_path == NULL) {
		path = NULL;
	} else {
		path = (gchar**) bindings_java_convert_strarray_to_gchararray(env, _path);
		if (path == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter pathReversed
	if (_pathReversed == NULL) {
		pathReversed = NULL;
	} else {
		pathReversed = (gchar**) bindings_java_convert_strarray_to_gchararray(env, _pathReversed);
		if (pathReversed == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_widget_class_path(self, pathLength, path, pathReversed);

	// cleanup parameter self

	// cleanup parameter pathLength
	if (pathLength != NULL) {
		(*env)->ReleaseIntArrayElements(env, _pathLength, (jint*)pathLength, 0);
	}

	// cleanup parameter path
	if (path != NULL) {
		bindings_java_convert_gchararray_to_strarray(env, (gchar**)path, _path);
	}

	// cleanup parameter pathReversed
	if (pathReversed != NULL) {
		bindings_java_convert_gchararray_to_strarray(env, (gchar**)pathReversed, _pathReversed);
	}
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1compute_1expand
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _orientation
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;
	GtkOrientation orientation;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter orientation
	orientation = (GtkOrientation) _orientation;

	// call function
	result = gtk_widget_compute_expand(self, orientation);

	// cleanup parameter self

	// cleanup parameter orientation

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1create_1pango_1context
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoContext* result;
	jlong _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_create_pango_context(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1create_1pango_1layout
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _text
)
{
	PangoLayout* result;
	jlong _result;
	GtkWidget* self;
	const gchar* text;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter text
	if (_text == NULL) {
		text = NULL;
	} else {
		text = (const gchar*) bindings_java_getString(env, _text);
		if (text == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_widget_create_pango_layout(self, text);

	// cleanup parameter self

	// cleanup parameter text
	if (text != NULL) {
		bindings_java_releaseString(text);
	}

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
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1destroy
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_widget_destroy(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1destroyed
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlongArray _widgetPointer
)
{
	GtkWidget* self;
	GtkWidget** widgetPointer;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter widgetPointer
	widgetPointer = (GtkWidget**) bindings_java_convert_jarray_to_gpointer(env, _widgetPointer);
	if (widgetPointer == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_widget_destroyed(self, widgetPointer);

	// cleanup parameter self

	// cleanup parameter widgetPointer
	bindings_java_convert_gpointer_to_jarray(env, (gpointer*)widgetPointer, _widgetPointer);
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1device_1is_1shadowed
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _device
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;
	GdkDevice* device;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter device
	device = (GdkDevice*) _device;

	// call function
	result = gtk_widget_device_is_shadowed(self, device);

	// cleanup parameter self

	// cleanup parameter device

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1drag_1check_1threshold
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _startX,
	jint _startY,
	jint _currentX,
	jint _currentY
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;
	gint startX;
	gint startY;
	gint currentX;
	gint currentY;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter startX
	startX = (gint) _startX;

	// convert parameter startY
	startY = (gint) _startY;

	// convert parameter currentX
	currentX = (gint) _currentX;

	// convert parameter currentY
	currentY = (gint) _currentY;

	// call function
	result = gtk_drag_check_threshold(self, startX, startY, currentX, currentY);

	// cleanup parameter self

	// cleanup parameter startX

	// cleanup parameter startY

	// cleanup parameter currentX

	// cleanup parameter currentY

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1drag_1dest_1add_1image_1targets
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_drag_dest_add_image_targets(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1drag_1dest_1add_1text_1targets
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_drag_dest_add_text_targets(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1drag_1dest_1add_1uri_1targets
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_drag_dest_add_uri_targets(self);

	// cleanup parameter self
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1drag_1dest_1get_1track_1motion
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_drag_dest_get_track_motion(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1drag_1dest_1set_1proxy
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _proxyWindow,
	jint _protocol,
	jboolean _useCoordinates
)
{
	GtkWidget* self;
	GdkWindow* proxyWindow;
	GdkDragProtocol protocol;
	gboolean useCoordinates;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter proxyWindow
	proxyWindow = (GdkWindow*) _proxyWindow;

	// convert parameter protocol
	protocol = (GdkDragProtocol) _protocol;

	// convert parameter useCoordinates
	useCoordinates = (gboolean) _useCoordinates;

	// call function
	gtk_drag_dest_set_proxy(self, proxyWindow, protocol, useCoordinates);

	// cleanup parameter self

	// cleanup parameter proxyWindow

	// cleanup parameter protocol

	// cleanup parameter useCoordinates
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1drag_1dest_1set_1track_1motion
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _trackMotion
)
{
	GtkWidget* self;
	gboolean trackMotion;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter trackMotion
	trackMotion = (gboolean) _trackMotion;

	// call function
	gtk_drag_dest_set_track_motion(self, trackMotion);

	// cleanup parameter self

	// cleanup parameter trackMotion
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1drag_1dest_1unset
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_drag_dest_unset(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1drag_1highlight
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_drag_highlight(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1drag_1source_1add_1image_1targets
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_drag_source_add_image_targets(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1drag_1source_1add_1text_1targets
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_drag_source_add_text_targets(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1drag_1source_1add_1uri_1targets
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_drag_source_add_uri_targets(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1drag_1source_1set_1icon_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _iconName
)
{
	GtkWidget* self;
	const gchar* iconName;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter iconName
	iconName = (const gchar*) bindings_java_getString(env, _iconName);
	if (iconName == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_drag_source_set_icon_name(self, iconName);

	// cleanup parameter self

	// cleanup parameter iconName
	bindings_java_releaseString(iconName);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1drag_1source_1set_1icon_1pixbuf
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _pixbuf
)
{
	GtkWidget* self;
	GdkPixbuf* pixbuf;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter pixbuf
	pixbuf = (GdkPixbuf*) _pixbuf;

	// call function
	gtk_drag_source_set_icon_pixbuf(self, pixbuf);

	// cleanup parameter self

	// cleanup parameter pixbuf
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1drag_1source_1set_1icon_1stock
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _stockId
)
{
	GtkWidget* self;
	const gchar* stockId;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter stockId
	stockId = (const gchar*) bindings_java_getString(env, _stockId);
	if (stockId == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_drag_source_set_icon_stock(self, stockId);

	// cleanup parameter self

	// cleanup parameter stockId
	bindings_java_releaseString(stockId);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1drag_1source_1unset
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_drag_source_unset(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1drag_1unhighlight
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_drag_unhighlight(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1draw
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _cr
)
{
	GtkWidget* self;
	cairo_t* cr;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter cr
	cr = (cairo_t*) _cr;

	// call function
	gtk_widget_draw(self, cr);

	// cleanup parameter self

	// cleanup parameter cr
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1ensure_1style
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_widget_ensure_style(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1error_1bell
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_widget_error_bell(self);

	// cleanup parameter self
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1event
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _event
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;
	GdkEvent* event;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter event
	event = (GdkEvent*) _event;

	// call function
	result = gtk_widget_event(self, event);

	// cleanup parameter self

	// cleanup parameter event

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1freeze_1child_1notify
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_widget_freeze_child_notify(self);

	// cleanup parameter self
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1accessible
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	AtkObject* result;
	jlong _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_accessible(self);

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
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1allocated_1baseline
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_allocated_baseline(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1allocated_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_allocated_height(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1allocated_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _allocation,
	jintArray _baseline
)
{
	GtkWidget* self;
	GtkAllocation* allocation;
	int* baseline;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter allocation
	allocation = (GtkAllocation*) _allocation;

	// convert parameter baseline
	if (_baseline == NULL) {
		baseline = NULL;
	} else {
		baseline = (int*) (*env)->GetIntArrayElements(env, _baseline, NULL);
		if (baseline == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_widget_get_allocated_size(self, allocation, baseline);

	// cleanup parameter self

	// cleanup parameter allocation

	// cleanup parameter baseline
	if (baseline != NULL) {
		(*env)->ReleaseIntArrayElements(env, _baseline, (jint*)baseline, 0);
	}
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1allocated_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	int result;
	jint _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_allocated_width(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1allocation
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _allocation
)
{
	GtkWidget* self;
	GtkAllocation* allocation;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter allocation
	allocation = (GtkAllocation*) _allocation;

	// call function
	gtk_widget_get_allocation(self, allocation);

	// cleanup parameter self

	// cleanup parameter allocation
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1app_1paintable
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_app_paintable(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1can_1default
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_can_default(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1can_1focus
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_can_focus(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1child_1requisition
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _requisition
)
{
	GtkWidget* self;
	GtkRequisition* requisition;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter requisition
	requisition = (GtkRequisition*) _requisition;

	// call function
	gtk_widget_get_child_requisition(self, requisition);

	// cleanup parameter self

	// cleanup parameter requisition
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1child_1visible
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_child_visible(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1clip
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _clip
)
{
	GtkWidget* self;
	GtkAllocation* clip;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter clip
	clip = (GtkAllocation*) _clip;

	// call function
	gtk_widget_get_clip(self, clip);

	// cleanup parameter self

	// cleanup parameter clip
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1composite_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_composite_name(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// cleanup return value
	if (result != NULL) {
		g_free(result);
	}

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1device_1enabled
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _device
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;
	GdkDevice* device;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter device
	device = (GdkDevice*) _device;

	// call function
	result = gtk_widget_get_device_enabled(self, device);

	// cleanup parameter self

	// cleanup parameter device

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1device_1events
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _device
)
{
	GdkEventMask result;
	jint _result;
	GtkWidget* self;
	GdkDevice* device;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter device
	device = (GdkDevice*) _device;

	// call function
	result = gtk_widget_get_device_events(self, device);

	// cleanup parameter self

	// cleanup parameter device

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1direction
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTextDirection result;
	jint _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_direction(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1display
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkDisplay* result;
	jlong _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_display(self);

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
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1double_1buffered
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_double_buffered(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1events
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_events(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1focus_1on_1click
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_focus_on_click(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1font_1map
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoFontMap* result;
	jlong _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_font_map(self);

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
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1font_1options
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const cairo_font_options_t* result;
	jlong _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_font_options(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1halign
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAlign result;
	jint _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_halign(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1has_1tooltip
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_has_tooltip(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1has_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_has_window(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1hexpand
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_hexpand(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1hexpand_1set
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_hexpand_set(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1mapped
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_mapped(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1margin_1bottom
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_margin_bottom(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1margin_1end
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_margin_end(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1margin_1left
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_margin_left(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1margin_1right
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_margin_right(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1margin_1start
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_margin_start(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1margin_1top
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_margin_top(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_name(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1no_1show_1all
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_no_show_all(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1opacity
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	double result;
	jdouble _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_opacity(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1pango_1context
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoContext* result;
	jlong _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_pango_context(self);

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
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1parent
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_parent(self);

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
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1parent_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* result;
	jlong _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_parent_window(self);

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
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1pointer
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _x,
	jintArray _y
)
{
	GtkWidget* self;
	gint* x;
	gint* y;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter x
	if (_x == NULL) {
		x = NULL;
	} else {
		x = (gint*) (*env)->GetIntArrayElements(env, _x, NULL);
		if (x == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter y
	if (_y == NULL) {
		y = NULL;
	} else {
		y = (gint*) (*env)->GetIntArrayElements(env, _y, NULL);
		if (y == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_widget_get_pointer(self, x, y);

	// cleanup parameter self

	// cleanup parameter x
	if (x != NULL) {
		(*env)->ReleaseIntArrayElements(env, _x, (jint*)x, 0);
	}

	// cleanup parameter y
	if (y != NULL) {
		(*env)->ReleaseIntArrayElements(env, _y, (jint*)y, 0);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1preferred_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _minimumHeight,
	jintArray _naturalHeight
)
{
	GtkWidget* self;
	gint* minimumHeight;
	gint* naturalHeight;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter minimumHeight
	if (_minimumHeight == NULL) {
		minimumHeight = NULL;
	} else {
		minimumHeight = (gint*) (*env)->GetIntArrayElements(env, _minimumHeight, NULL);
		if (minimumHeight == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter naturalHeight
	if (_naturalHeight == NULL) {
		naturalHeight = NULL;
	} else {
		naturalHeight = (gint*) (*env)->GetIntArrayElements(env, _naturalHeight, NULL);
		if (naturalHeight == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_widget_get_preferred_height(self, minimumHeight, naturalHeight);

	// cleanup parameter self

	// cleanup parameter minimumHeight
	if (minimumHeight != NULL) {
		(*env)->ReleaseIntArrayElements(env, _minimumHeight, (jint*)minimumHeight, 0);
	}

	// cleanup parameter naturalHeight
	if (naturalHeight != NULL) {
		(*env)->ReleaseIntArrayElements(env, _naturalHeight, (jint*)naturalHeight, 0);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1preferred_1height_1and_1baseline_1for_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _width,
	jintArray _minimumHeight,
	jintArray _naturalHeight,
	jintArray _minimumBaseline,
	jintArray _naturalBaseline
)
{
	GtkWidget* self;
	gint width;
	gint* minimumHeight;
	gint* naturalHeight;
	gint* minimumBaseline;
	gint* naturalBaseline;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter width
	width = (gint) _width;

	// convert parameter minimumHeight
	if (_minimumHeight == NULL) {
		minimumHeight = NULL;
	} else {
		minimumHeight = (gint*) (*env)->GetIntArrayElements(env, _minimumHeight, NULL);
		if (minimumHeight == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter naturalHeight
	if (_naturalHeight == NULL) {
		naturalHeight = NULL;
	} else {
		naturalHeight = (gint*) (*env)->GetIntArrayElements(env, _naturalHeight, NULL);
		if (naturalHeight == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter minimumBaseline
	if (_minimumBaseline == NULL) {
		minimumBaseline = NULL;
	} else {
		minimumBaseline = (gint*) (*env)->GetIntArrayElements(env, _minimumBaseline, NULL);
		if (minimumBaseline == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter naturalBaseline
	if (_naturalBaseline == NULL) {
		naturalBaseline = NULL;
	} else {
		naturalBaseline = (gint*) (*env)->GetIntArrayElements(env, _naturalBaseline, NULL);
		if (naturalBaseline == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_widget_get_preferred_height_and_baseline_for_width(self, width, minimumHeight, naturalHeight, minimumBaseline, naturalBaseline);

	// cleanup parameter self

	// cleanup parameter width

	// cleanup parameter minimumHeight
	if (minimumHeight != NULL) {
		(*env)->ReleaseIntArrayElements(env, _minimumHeight, (jint*)minimumHeight, 0);
	}

	// cleanup parameter naturalHeight
	if (naturalHeight != NULL) {
		(*env)->ReleaseIntArrayElements(env, _naturalHeight, (jint*)naturalHeight, 0);
	}

	// cleanup parameter minimumBaseline
	if (minimumBaseline != NULL) {
		(*env)->ReleaseIntArrayElements(env, _minimumBaseline, (jint*)minimumBaseline, 0);
	}

	// cleanup parameter naturalBaseline
	if (naturalBaseline != NULL) {
		(*env)->ReleaseIntArrayElements(env, _naturalBaseline, (jint*)naturalBaseline, 0);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1preferred_1height_1for_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _width,
	jintArray _minimumHeight,
	jintArray _naturalHeight
)
{
	GtkWidget* self;
	gint width;
	gint* minimumHeight;
	gint* naturalHeight;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter width
	width = (gint) _width;

	// convert parameter minimumHeight
	if (_minimumHeight == NULL) {
		minimumHeight = NULL;
	} else {
		minimumHeight = (gint*) (*env)->GetIntArrayElements(env, _minimumHeight, NULL);
		if (minimumHeight == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter naturalHeight
	if (_naturalHeight == NULL) {
		naturalHeight = NULL;
	} else {
		naturalHeight = (gint*) (*env)->GetIntArrayElements(env, _naturalHeight, NULL);
		if (naturalHeight == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_widget_get_preferred_height_for_width(self, width, minimumHeight, naturalHeight);

	// cleanup parameter self

	// cleanup parameter width

	// cleanup parameter minimumHeight
	if (minimumHeight != NULL) {
		(*env)->ReleaseIntArrayElements(env, _minimumHeight, (jint*)minimumHeight, 0);
	}

	// cleanup parameter naturalHeight
	if (naturalHeight != NULL) {
		(*env)->ReleaseIntArrayElements(env, _naturalHeight, (jint*)naturalHeight, 0);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1preferred_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _minimumSize,
	jlong _naturalSize
)
{
	GtkWidget* self;
	GtkRequisition* minimumSize;
	GtkRequisition* naturalSize;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter minimumSize
	minimumSize = (GtkRequisition*) _minimumSize;

	// convert parameter naturalSize
	naturalSize = (GtkRequisition*) _naturalSize;

	// call function
	gtk_widget_get_preferred_size(self, minimumSize, naturalSize);

	// cleanup parameter self

	// cleanup parameter minimumSize

	// cleanup parameter naturalSize
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1preferred_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _minimumWidth,
	jintArray _naturalWidth
)
{
	GtkWidget* self;
	gint* minimumWidth;
	gint* naturalWidth;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter minimumWidth
	if (_minimumWidth == NULL) {
		minimumWidth = NULL;
	} else {
		minimumWidth = (gint*) (*env)->GetIntArrayElements(env, _minimumWidth, NULL);
		if (minimumWidth == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter naturalWidth
	if (_naturalWidth == NULL) {
		naturalWidth = NULL;
	} else {
		naturalWidth = (gint*) (*env)->GetIntArrayElements(env, _naturalWidth, NULL);
		if (naturalWidth == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_widget_get_preferred_width(self, minimumWidth, naturalWidth);

	// cleanup parameter self

	// cleanup parameter minimumWidth
	if (minimumWidth != NULL) {
		(*env)->ReleaseIntArrayElements(env, _minimumWidth, (jint*)minimumWidth, 0);
	}

	// cleanup parameter naturalWidth
	if (naturalWidth != NULL) {
		(*env)->ReleaseIntArrayElements(env, _naturalWidth, (jint*)naturalWidth, 0);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1preferred_1width_1for_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _height,
	jintArray _minimumWidth,
	jintArray _naturalWidth
)
{
	GtkWidget* self;
	gint height;
	gint* minimumWidth;
	gint* naturalWidth;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter height
	height = (gint) _height;

	// convert parameter minimumWidth
	if (_minimumWidth == NULL) {
		minimumWidth = NULL;
	} else {
		minimumWidth = (gint*) (*env)->GetIntArrayElements(env, _minimumWidth, NULL);
		if (minimumWidth == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter naturalWidth
	if (_naturalWidth == NULL) {
		naturalWidth = NULL;
	} else {
		naturalWidth = (gint*) (*env)->GetIntArrayElements(env, _naturalWidth, NULL);
		if (naturalWidth == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_widget_get_preferred_width_for_height(self, height, minimumWidth, naturalWidth);

	// cleanup parameter self

	// cleanup parameter height

	// cleanup parameter minimumWidth
	if (minimumWidth != NULL) {
		(*env)->ReleaseIntArrayElements(env, _minimumWidth, (jint*)minimumWidth, 0);
	}

	// cleanup parameter naturalWidth
	if (naturalWidth != NULL) {
		(*env)->ReleaseIntArrayElements(env, _naturalWidth, (jint*)naturalWidth, 0);
	}
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1realized
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_realized(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1receives_1default
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_receives_default(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1request_1mode
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkSizeRequestMode result;
	jint _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_request_mode(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1requisition
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _requisition
)
{
	GtkWidget* self;
	GtkRequisition* requisition;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter requisition
	requisition = (GtkRequisition*) _requisition;

	// call function
	gtk_widget_get_requisition(self, requisition);

	// cleanup parameter self

	// cleanup parameter requisition
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1root_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* result;
	jlong _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_root_window(self);

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
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1scale_1factor
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_scale_factor(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1screen
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkScreen* result;
	jlong _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_screen(self);

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
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1sensitive
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_sensitive(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1settings
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkSettings* result;
	jlong _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_settings(self);

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
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1size_1request
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _width,
	jintArray _height
)
{
	GtkWidget* self;
	gint* width;
	gint* height;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter width
	if (_width == NULL) {
		width = NULL;
	} else {
		width = (gint*) (*env)->GetIntArrayElements(env, _width, NULL);
		if (width == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter height
	if (_height == NULL) {
		height = NULL;
	} else {
		height = (gint*) (*env)->GetIntArrayElements(env, _height, NULL);
		if (height == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_widget_get_size_request(self, width, height);

	// cleanup parameter self

	// cleanup parameter width
	if (width != NULL) {
		(*env)->ReleaseIntArrayElements(env, _width, (jint*)width, 0);
	}

	// cleanup parameter height
	if (height != NULL) {
		(*env)->ReleaseIntArrayElements(env, _height, (jint*)height, 0);
	}
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1state_1flags
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkStateFlags result;
	jint _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_state_flags(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1style_1context
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkStyleContext* result;
	jlong _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_style_context(self);

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
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1support_1multidevice
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_support_multidevice(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1tooltip_1markup
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_tooltip_markup(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// cleanup return value
	if (result != NULL) {
		g_free(result);
	}

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1tooltip_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_tooltip_text(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// cleanup return value
	if (result != NULL) {
		g_free(result);
	}

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1tooltip_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWindow* result;
	jlong _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_tooltip_window(self);

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
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1toplevel
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_toplevel(self);

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
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1valign
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAlign result;
	jint _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_valign(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1valign_1with_1baseline
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAlign result;
	jint _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_valign_with_baseline(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1vexpand
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_vexpand(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1vexpand_1set
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_vexpand_set(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1visible
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_visible(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1visual
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkVisual* result;
	jlong _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_visual(self);

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
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* result;
	jlong _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_get_window(self);

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
Java_org_gnome_gtk_GtkWidget_gtk_1grab_1add
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_grab_add(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1grab_1default
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_widget_grab_default(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1grab_1focus
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_widget_grab_focus(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1grab_1remove
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_grab_remove(self);

	// cleanup parameter self
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1has_1default
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_has_default(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1has_1focus
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_has_focus(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1has_1grab
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_has_grab(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1has_1rc_1style
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_has_rc_style(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1has_1screen
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_has_screen(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1has_1visible_1focus
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_has_visible_focus(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1hide
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_widget_hide(self);

	// cleanup parameter self
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1hide_1on_1delete
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_hide_on_delete(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1in_1destruction
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_in_destruction(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1init_1template
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_widget_init_template(self);

	// cleanup parameter self
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1intersect
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _area,
	jlong _intersection
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;
	const GdkRectangle* area;
	GdkRectangle* intersection;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter area
	area = (const GdkRectangle*) _area;

	// convert parameter intersection
	intersection = (GdkRectangle*) _intersection;

	// call function
	result = gtk_widget_intersect(self, area, intersection);

	// cleanup parameter self

	// cleanup parameter area

	// cleanup parameter intersection

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1is_1ancestor
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _ancestor
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;
	GtkWidget* ancestor;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter ancestor
	ancestor = (GtkWidget*) _ancestor;

	// call function
	result = gtk_widget_is_ancestor(self, ancestor);

	// cleanup parameter self

	// cleanup parameter ancestor

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1is_1composited
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_is_composited(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1is_1drawable
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_is_drawable(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1is_1focus
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_is_focus(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1is_1sensitive
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_is_sensitive(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1is_1toplevel
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_is_toplevel(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1is_1visible
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_is_visible(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1keynav_1failed
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _direction
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;
	GtkDirectionType direction;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter direction
	direction = (GtkDirectionType) _direction;

	// call function
	result = gtk_widget_keynav_failed(self, direction);

	// cleanup parameter self

	// cleanup parameter direction

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jobjectArray JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1list_1action_1prefixes
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar** result;
	jobjectArray _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_list_action_prefixes(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jobjectArray) bindings_java_convert_gchararray_to_jarray(env, (const gchar**)result);

	// and finally
	return _result;
}

JNIEXPORT jlongArray JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1list_1mnemonic_1labels
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GList* result;
	jlongArray _result;
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	result = gtk_widget_list_mnemonic_labels(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlongArray) bindings_java_convert_glist_to_jarray(env, result);

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1map
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_widget_map(self);

	// cleanup parameter self
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1mnemonic_1activate
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _groupCycling
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;
	gboolean groupCycling;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter groupCycling
	groupCycling = (gboolean) _groupCycling;

	// call function
	result = gtk_widget_mnemonic_activate(self, groupCycling);

	// cleanup parameter self

	// cleanup parameter groupCycling

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1modify_1font
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _fontDesc
)
{
	GtkWidget* self;
	PangoFontDescription* fontDesc;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter fontDesc
	fontDesc = (PangoFontDescription*) _fontDesc;

	// call function
	gtk_widget_modify_font(self, fontDesc);

	// cleanup parameter self

	// cleanup parameter fontDesc
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1override_1background_1color
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _state,
	jlong _color
)
{
	GtkWidget* self;
	GtkStateFlags state;
	const GdkRGBA* color;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter state
	state = (GtkStateFlags) _state;

	// convert parameter color
	color = (const GdkRGBA*) _color;

	// call function
	gtk_widget_override_background_color(self, state, color);

	// cleanup parameter self

	// cleanup parameter state

	// cleanup parameter color
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1override_1color
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _state,
	jlong _color
)
{
	GtkWidget* self;
	GtkStateFlags state;
	const GdkRGBA* color;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter state
	state = (GtkStateFlags) _state;

	// convert parameter color
	color = (const GdkRGBA*) _color;

	// call function
	gtk_widget_override_color(self, state, color);

	// cleanup parameter self

	// cleanup parameter state

	// cleanup parameter color
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1override_1cursor
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _cursor,
	jlong _secondaryCursor
)
{
	GtkWidget* self;
	const GdkRGBA* cursor;
	const GdkRGBA* secondaryCursor;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter cursor
	cursor = (const GdkRGBA*) _cursor;

	// convert parameter secondaryCursor
	secondaryCursor = (const GdkRGBA*) _secondaryCursor;

	// call function
	gtk_widget_override_cursor(self, cursor, secondaryCursor);

	// cleanup parameter self

	// cleanup parameter cursor

	// cleanup parameter secondaryCursor
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1override_1font
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _fontDesc
)
{
	GtkWidget* self;
	const PangoFontDescription* fontDesc;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter fontDesc
	fontDesc = (const PangoFontDescription*) _fontDesc;

	// call function
	gtk_widget_override_font(self, fontDesc);

	// cleanup parameter self

	// cleanup parameter fontDesc
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1override_1symbolic_1color
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _name,
	jlong _color
)
{
	GtkWidget* self;
	const gchar* name;
	const GdkRGBA* color;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter name
	name = (const gchar*) bindings_java_getString(env, _name);
	if (name == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter color
	color = (const GdkRGBA*) _color;

	// call function
	gtk_widget_override_symbolic_color(self, name, color);

	// cleanup parameter self

	// cleanup parameter name
	bindings_java_releaseString(name);

	// cleanup parameter color
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _pathLength,
	jobjectArray _path,
	jobjectArray _pathReversed
)
{
	GtkWidget* self;
	guint* pathLength;
	gchar** path;
	gchar** pathReversed;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter pathLength
	if (_pathLength == NULL) {
		pathLength = NULL;
	} else {
		pathLength = (guint*) (*env)->GetIntArrayElements(env, _pathLength, NULL);
		if (pathLength == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter path
	if (_path == NULL) {
		path = NULL;
	} else {
		path = (gchar**) bindings_java_convert_strarray_to_gchararray(env, _path);
		if (path == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter pathReversed
	if (_pathReversed == NULL) {
		pathReversed = NULL;
	} else {
		pathReversed = (gchar**) bindings_java_convert_strarray_to_gchararray(env, _pathReversed);
		if (pathReversed == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_widget_path(self, pathLength, path, pathReversed);

	// cleanup parameter self

	// cleanup parameter pathLength
	if (pathLength != NULL) {
		(*env)->ReleaseIntArrayElements(env, _pathLength, (jint*)pathLength, 0);
	}

	// cleanup parameter path
	if (path != NULL) {
		bindings_java_convert_gchararray_to_strarray(env, (gchar**)path, _path);
	}

	// cleanup parameter pathReversed
	if (pathReversed != NULL) {
		bindings_java_convert_gchararray_to_strarray(env, (gchar**)pathReversed, _pathReversed);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1queue_1allocate
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_widget_queue_allocate(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1queue_1compute_1expand
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_widget_queue_compute_expand(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1queue_1draw
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_widget_queue_draw(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1queue_1draw_1area
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _x,
	jint _y,
	jint _width,
	jint _height
)
{
	GtkWidget* self;
	gint x;
	gint y;
	gint width;
	gint height;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter x
	x = (gint) _x;

	// convert parameter y
	y = (gint) _y;

	// convert parameter width
	width = (gint) _width;

	// convert parameter height
	height = (gint) _height;

	// call function
	gtk_widget_queue_draw_area(self, x, y, width, height);

	// cleanup parameter self

	// cleanup parameter x

	// cleanup parameter y

	// cleanup parameter width

	// cleanup parameter height
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1queue_1resize
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_widget_queue_resize(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1queue_1resize_1no_1redraw
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_widget_queue_resize_no_redraw(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1realize
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_widget_realize(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1register_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _window
)
{
	GtkWidget* self;
	GdkWindow* window;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter window
	window = (GdkWindow*) _window;

	// call function
	gtk_widget_register_window(self, window);

	// cleanup parameter self

	// cleanup parameter window
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1remove_1accelerator
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _accelGroup,
	jint _accelKey,
	jint _accelMods
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;
	GtkAccelGroup* accelGroup;
	guint accelKey;
	GdkModifierType accelMods;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter accelGroup
	accelGroup = (GtkAccelGroup*) _accelGroup;

	// convert parameter accelKey
	accelKey = (guint) _accelKey;

	// convert parameter accelMods
	accelMods = (GdkModifierType) _accelMods;

	// call function
	result = gtk_widget_remove_accelerator(self, accelGroup, accelKey, accelMods);

	// cleanup parameter self

	// cleanup parameter accelGroup

	// cleanup parameter accelKey

	// cleanup parameter accelMods

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1remove_1mnemonic_1label
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _label
)
{
	GtkWidget* self;
	GtkWidget* label;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter label
	label = (GtkWidget*) _label;

	// call function
	gtk_widget_remove_mnemonic_label(self, label);

	// cleanup parameter self

	// cleanup parameter label
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1remove_1tick_1callback
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _id
)
{
	GtkWidget* self;
	guint id;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter id
	id = (guint) _id;

	// call function
	gtk_widget_remove_tick_callback(self, id);

	// cleanup parameter self

	// cleanup parameter id
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1render_1icon
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _stockId,
	jint _size,
	jstring _detail
)
{
	GdkPixbuf* result;
	jlong _result;
	GtkWidget* self;
	const gchar* stockId;
	GtkIconSize size;
	const gchar* detail;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter stockId
	stockId = (const gchar*) bindings_java_getString(env, _stockId);
	if (stockId == NULL) {
		return 0L; // Java Exception already thrown
	}

	// convert parameter size
	size = (GtkIconSize) _size;

	// convert parameter detail
	if (_detail == NULL) {
		detail = NULL;
	} else {
		detail = (const gchar*) bindings_java_getString(env, _detail);
		if (detail == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_widget_render_icon(self, stockId, size, detail);

	// cleanup parameter self

	// cleanup parameter stockId
	bindings_java_releaseString(stockId);

	// cleanup parameter size

	// cleanup parameter detail
	if (detail != NULL) {
		bindings_java_releaseString(detail);
	}

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1render_1icon_1pixbuf
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _stockId,
	jint _size
)
{
	GdkPixbuf* result;
	jlong _result;
	GtkWidget* self;
	const gchar* stockId;
	GtkIconSize size;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter stockId
	stockId = (const gchar*) bindings_java_getString(env, _stockId);
	if (stockId == NULL) {
		return 0L; // Java Exception already thrown
	}

	// convert parameter size
	size = (GtkIconSize) _size;

	// call function
	result = gtk_widget_render_icon_pixbuf(self, stockId, size);

	// cleanup parameter self

	// cleanup parameter stockId
	bindings_java_releaseString(stockId);

	// cleanup parameter size

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
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1reparent
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _newParent
)
{
	GtkWidget* self;
	GtkWidget* newParent;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter newParent
	newParent = (GtkWidget*) _newParent;

	// call function
	gtk_widget_reparent(self, newParent);

	// cleanup parameter self

	// cleanup parameter newParent
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1reset_1rc_1styles
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_widget_reset_rc_styles(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1reset_1style
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_widget_reset_style(self);

	// cleanup parameter self
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1send_1expose
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _event
)
{
	gint result;
	jint _result;
	GtkWidget* self;
	GdkEvent* event;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter event
	event = (GdkEvent*) _event;

	// call function
	result = gtk_widget_send_expose(self, event);

	// cleanup parameter self

	// cleanup parameter event

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1send_1focus_1change
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _event
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;
	GdkEvent* event;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter event
	event = (GdkEvent*) _event;

	// call function
	result = gtk_widget_send_focus_change(self, event);

	// cleanup parameter self

	// cleanup parameter event

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1accel_1path
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _accelPath,
	jlong _accelGroup
)
{
	GtkWidget* self;
	const gchar* accelPath;
	GtkAccelGroup* accelGroup;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter accelPath
	if (_accelPath == NULL) {
		accelPath = NULL;
	} else {
		accelPath = (const gchar*) bindings_java_getString(env, _accelPath);
		if (accelPath == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter accelGroup
	accelGroup = (GtkAccelGroup*) _accelGroup;

	// call function
	gtk_widget_set_accel_path(self, accelPath, accelGroup);

	// cleanup parameter self

	// cleanup parameter accelPath
	if (accelPath != NULL) {
		bindings_java_releaseString(accelPath);
	}

	// cleanup parameter accelGroup
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1allocation
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _allocation
)
{
	GtkWidget* self;
	const GtkAllocation* allocation;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter allocation
	allocation = (const GtkAllocation*) _allocation;

	// call function
	gtk_widget_set_allocation(self, allocation);

	// cleanup parameter self

	// cleanup parameter allocation
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1app_1paintable
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _appPaintable
)
{
	GtkWidget* self;
	gboolean appPaintable;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter appPaintable
	appPaintable = (gboolean) _appPaintable;

	// call function
	gtk_widget_set_app_paintable(self, appPaintable);

	// cleanup parameter self

	// cleanup parameter appPaintable
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1can_1default
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _canDefault
)
{
	GtkWidget* self;
	gboolean canDefault;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter canDefault
	canDefault = (gboolean) _canDefault;

	// call function
	gtk_widget_set_can_default(self, canDefault);

	// cleanup parameter self

	// cleanup parameter canDefault
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1can_1focus
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _canFocus
)
{
	GtkWidget* self;
	gboolean canFocus;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter canFocus
	canFocus = (gboolean) _canFocus;

	// call function
	gtk_widget_set_can_focus(self, canFocus);

	// cleanup parameter self

	// cleanup parameter canFocus
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1child_1visible
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _isVisible
)
{
	GtkWidget* self;
	gboolean isVisible;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter isVisible
	isVisible = (gboolean) _isVisible;

	// call function
	gtk_widget_set_child_visible(self, isVisible);

	// cleanup parameter self

	// cleanup parameter isVisible
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1clip
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _clip
)
{
	GtkWidget* self;
	const GtkAllocation* clip;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter clip
	clip = (const GtkAllocation*) _clip;

	// call function
	gtk_widget_set_clip(self, clip);

	// cleanup parameter self

	// cleanup parameter clip
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1composite_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _name
)
{
	GtkWidget* self;
	const gchar* name;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter name
	name = (const gchar*) bindings_java_getString(env, _name);
	if (name == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_widget_set_composite_name(self, name);

	// cleanup parameter self

	// cleanup parameter name
	bindings_java_releaseString(name);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1device_1enabled
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _device,
	jboolean _enabled
)
{
	GtkWidget* self;
	GdkDevice* device;
	gboolean enabled;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter device
	device = (GdkDevice*) _device;

	// convert parameter enabled
	enabled = (gboolean) _enabled;

	// call function
	gtk_widget_set_device_enabled(self, device, enabled);

	// cleanup parameter self

	// cleanup parameter device

	// cleanup parameter enabled
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1device_1events
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _device,
	jint _events
)
{
	GtkWidget* self;
	GdkDevice* device;
	GdkEventMask events;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter device
	device = (GdkDevice*) _device;

	// convert parameter events
	events = (GdkEventMask) _events;

	// call function
	gtk_widget_set_device_events(self, device, events);

	// cleanup parameter self

	// cleanup parameter device

	// cleanup parameter events
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1direction
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _dir
)
{
	GtkWidget* self;
	GtkTextDirection dir;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter dir
	dir = (GtkTextDirection) _dir;

	// call function
	gtk_widget_set_direction(self, dir);

	// cleanup parameter self

	// cleanup parameter dir
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1double_1buffered
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _doubleBuffered
)
{
	GtkWidget* self;
	gboolean doubleBuffered;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter doubleBuffered
	doubleBuffered = (gboolean) _doubleBuffered;

	// call function
	gtk_widget_set_double_buffered(self, doubleBuffered);

	// cleanup parameter self

	// cleanup parameter doubleBuffered
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1events
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _events
)
{
	GtkWidget* self;
	gint events;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter events
	events = (gint) _events;

	// call function
	gtk_widget_set_events(self, events);

	// cleanup parameter self

	// cleanup parameter events
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1focus_1on_1click
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _focusOnClick
)
{
	GtkWidget* self;
	gboolean focusOnClick;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter focusOnClick
	focusOnClick = (gboolean) _focusOnClick;

	// call function
	gtk_widget_set_focus_on_click(self, focusOnClick);

	// cleanup parameter self

	// cleanup parameter focusOnClick
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1font_1map
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _fontMap
)
{
	GtkWidget* self;
	PangoFontMap* fontMap;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter fontMap
	fontMap = (PangoFontMap*) _fontMap;

	// call function
	gtk_widget_set_font_map(self, fontMap);

	// cleanup parameter self

	// cleanup parameter fontMap
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1font_1options
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _options
)
{
	GtkWidget* self;
	const cairo_font_options_t* options;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter options
	options = (const cairo_font_options_t*) _options;

	// call function
	gtk_widget_set_font_options(self, options);

	// cleanup parameter self

	// cleanup parameter options
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1halign
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _align
)
{
	GtkWidget* self;
	GtkAlign align;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter align
	align = (GtkAlign) _align;

	// call function
	gtk_widget_set_halign(self, align);

	// cleanup parameter self

	// cleanup parameter align
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1has_1tooltip
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _hasTooltip
)
{
	GtkWidget* self;
	gboolean hasTooltip;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter hasTooltip
	hasTooltip = (gboolean) _hasTooltip;

	// call function
	gtk_widget_set_has_tooltip(self, hasTooltip);

	// cleanup parameter self

	// cleanup parameter hasTooltip
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1has_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _hasWindow
)
{
	GtkWidget* self;
	gboolean hasWindow;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter hasWindow
	hasWindow = (gboolean) _hasWindow;

	// call function
	gtk_widget_set_has_window(self, hasWindow);

	// cleanup parameter self

	// cleanup parameter hasWindow
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1hexpand
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _expand
)
{
	GtkWidget* self;
	gboolean expand;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter expand
	expand = (gboolean) _expand;

	// call function
	gtk_widget_set_hexpand(self, expand);

	// cleanup parameter self

	// cleanup parameter expand
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1hexpand_1set
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _set
)
{
	GtkWidget* self;
	gboolean set;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter set
	set = (gboolean) _set;

	// call function
	gtk_widget_set_hexpand_set(self, set);

	// cleanup parameter self

	// cleanup parameter set
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1mapped
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _mapped
)
{
	GtkWidget* self;
	gboolean mapped;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter mapped
	mapped = (gboolean) _mapped;

	// call function
	gtk_widget_set_mapped(self, mapped);

	// cleanup parameter self

	// cleanup parameter mapped
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1margin_1bottom
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _margin
)
{
	GtkWidget* self;
	gint margin;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter margin
	margin = (gint) _margin;

	// call function
	gtk_widget_set_margin_bottom(self, margin);

	// cleanup parameter self

	// cleanup parameter margin
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1margin_1end
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _margin
)
{
	GtkWidget* self;
	gint margin;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter margin
	margin = (gint) _margin;

	// call function
	gtk_widget_set_margin_end(self, margin);

	// cleanup parameter self

	// cleanup parameter margin
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1margin_1left
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _margin
)
{
	GtkWidget* self;
	gint margin;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter margin
	margin = (gint) _margin;

	// call function
	gtk_widget_set_margin_left(self, margin);

	// cleanup parameter self

	// cleanup parameter margin
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1margin_1right
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _margin
)
{
	GtkWidget* self;
	gint margin;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter margin
	margin = (gint) _margin;

	// call function
	gtk_widget_set_margin_right(self, margin);

	// cleanup parameter self

	// cleanup parameter margin
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1margin_1start
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _margin
)
{
	GtkWidget* self;
	gint margin;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter margin
	margin = (gint) _margin;

	// call function
	gtk_widget_set_margin_start(self, margin);

	// cleanup parameter self

	// cleanup parameter margin
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1margin_1top
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _margin
)
{
	GtkWidget* self;
	gint margin;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter margin
	margin = (gint) _margin;

	// call function
	gtk_widget_set_margin_top(self, margin);

	// cleanup parameter self

	// cleanup parameter margin
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _name
)
{
	GtkWidget* self;
	const gchar* name;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter name
	name = (const gchar*) bindings_java_getString(env, _name);
	if (name == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_widget_set_name(self, name);

	// cleanup parameter self

	// cleanup parameter name
	bindings_java_releaseString(name);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1no_1show_1all
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _noShowAll
)
{
	GtkWidget* self;
	gboolean noShowAll;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter noShowAll
	noShowAll = (gboolean) _noShowAll;

	// call function
	gtk_widget_set_no_show_all(self, noShowAll);

	// cleanup parameter self

	// cleanup parameter noShowAll
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1opacity
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _opacity
)
{
	GtkWidget* self;
	double opacity;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter opacity
	opacity = (double) _opacity;

	// call function
	gtk_widget_set_opacity(self, opacity);

	// cleanup parameter self

	// cleanup parameter opacity
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1parent
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _parent
)
{
	GtkWidget* self;
	GtkWidget* parent;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter parent
	parent = (GtkWidget*) _parent;

	// call function
	gtk_widget_set_parent(self, parent);

	// cleanup parameter self

	// cleanup parameter parent
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1parent_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _parentWindow
)
{
	GtkWidget* self;
	GdkWindow* parentWindow;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter parentWindow
	parentWindow = (GdkWindow*) _parentWindow;

	// call function
	gtk_widget_set_parent_window(self, parentWindow);

	// cleanup parameter self

	// cleanup parameter parentWindow
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1realized
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _realized
)
{
	GtkWidget* self;
	gboolean realized;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter realized
	realized = (gboolean) _realized;

	// call function
	gtk_widget_set_realized(self, realized);

	// cleanup parameter self

	// cleanup parameter realized
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1receives_1default
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _receivesDefault
)
{
	GtkWidget* self;
	gboolean receivesDefault;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter receivesDefault
	receivesDefault = (gboolean) _receivesDefault;

	// call function
	gtk_widget_set_receives_default(self, receivesDefault);

	// cleanup parameter self

	// cleanup parameter receivesDefault
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1redraw_1on_1allocate
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _redrawOnAllocate
)
{
	GtkWidget* self;
	gboolean redrawOnAllocate;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter redrawOnAllocate
	redrawOnAllocate = (gboolean) _redrawOnAllocate;

	// call function
	gtk_widget_set_redraw_on_allocate(self, redrawOnAllocate);

	// cleanup parameter self

	// cleanup parameter redrawOnAllocate
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1sensitive
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _sensitive
)
{
	GtkWidget* self;
	gboolean sensitive;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter sensitive
	sensitive = (gboolean) _sensitive;

	// call function
	gtk_widget_set_sensitive(self, sensitive);

	// cleanup parameter self

	// cleanup parameter sensitive
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1size_1request
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _width,
	jint _height
)
{
	GtkWidget* self;
	gint width;
	gint height;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter width
	width = (gint) _width;

	// convert parameter height
	height = (gint) _height;

	// call function
	gtk_widget_set_size_request(self, width, height);

	// cleanup parameter self

	// cleanup parameter width

	// cleanup parameter height
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1state_1flags
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _flags,
	jboolean _clear
)
{
	GtkWidget* self;
	GtkStateFlags flags;
	gboolean clear;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter flags
	flags = (GtkStateFlags) _flags;

	// convert parameter clear
	clear = (gboolean) _clear;

	// call function
	gtk_widget_set_state_flags(self, flags, clear);

	// cleanup parameter self

	// cleanup parameter flags

	// cleanup parameter clear
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1support_1multidevice
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _supportMultidevice
)
{
	GtkWidget* self;
	gboolean supportMultidevice;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter supportMultidevice
	supportMultidevice = (gboolean) _supportMultidevice;

	// call function
	gtk_widget_set_support_multidevice(self, supportMultidevice);

	// cleanup parameter self

	// cleanup parameter supportMultidevice
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1tooltip_1markup
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _markup
)
{
	GtkWidget* self;
	const gchar* markup;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter markup
	if (_markup == NULL) {
		markup = NULL;
	} else {
		markup = (const gchar*) bindings_java_getString(env, _markup);
		if (markup == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_widget_set_tooltip_markup(self, markup);

	// cleanup parameter self

	// cleanup parameter markup
	if (markup != NULL) {
		bindings_java_releaseString(markup);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1tooltip_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _text
)
{
	GtkWidget* self;
	const gchar* text;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter text
	if (_text == NULL) {
		text = NULL;
	} else {
		text = (const gchar*) bindings_java_getString(env, _text);
		if (text == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_widget_set_tooltip_text(self, text);

	// cleanup parameter self

	// cleanup parameter text
	if (text != NULL) {
		bindings_java_releaseString(text);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1tooltip_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _customWindow
)
{
	GtkWidget* self;
	GtkWindow* customWindow;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter customWindow
	customWindow = (GtkWindow*) _customWindow;

	// call function
	gtk_widget_set_tooltip_window(self, customWindow);

	// cleanup parameter self

	// cleanup parameter customWindow
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1valign
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _align
)
{
	GtkWidget* self;
	GtkAlign align;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter align
	align = (GtkAlign) _align;

	// call function
	gtk_widget_set_valign(self, align);

	// cleanup parameter self

	// cleanup parameter align
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1vexpand
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _expand
)
{
	GtkWidget* self;
	gboolean expand;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter expand
	expand = (gboolean) _expand;

	// call function
	gtk_widget_set_vexpand(self, expand);

	// cleanup parameter self

	// cleanup parameter expand
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1vexpand_1set
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _set
)
{
	GtkWidget* self;
	gboolean set;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter set
	set = (gboolean) _set;

	// call function
	gtk_widget_set_vexpand_set(self, set);

	// cleanup parameter self

	// cleanup parameter set
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1visible
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _visible
)
{
	GtkWidget* self;
	gboolean visible;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter visible
	visible = (gboolean) _visible;

	// call function
	gtk_widget_set_visible(self, visible);

	// cleanup parameter self

	// cleanup parameter visible
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1visual
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _visual
)
{
	GtkWidget* self;
	GdkVisual* visual;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter visual
	visual = (GdkVisual*) _visual;

	// call function
	gtk_widget_set_visual(self, visual);

	// cleanup parameter self

	// cleanup parameter visual
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _window
)
{
	GtkWidget* self;
	GdkWindow* window;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter window
	window = (GdkWindow*) _window;

	// call function
	gtk_widget_set_window(self, window);

	// cleanup parameter self

	// cleanup parameter window
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1show
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_widget_show(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1show_1all
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_widget_show_all(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1show_1now
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_widget_show_now(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1size_1allocate
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _allocation
)
{
	GtkWidget* self;
	GtkAllocation* allocation;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter allocation
	allocation = (GtkAllocation*) _allocation;

	// call function
	gtk_widget_size_allocate(self, allocation);

	// cleanup parameter self

	// cleanup parameter allocation
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1size_1allocate_1with_1baseline
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _allocation,
	jint _baseline
)
{
	GtkWidget* self;
	GtkAllocation* allocation;
	gint baseline;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter allocation
	allocation = (GtkAllocation*) _allocation;

	// convert parameter baseline
	baseline = (gint) _baseline;

	// call function
	gtk_widget_size_allocate_with_baseline(self, allocation, baseline);

	// cleanup parameter self

	// cleanup parameter allocation

	// cleanup parameter baseline
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1size_1request
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _requisition
)
{
	GtkWidget* self;
	GtkRequisition* requisition;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter requisition
	requisition = (GtkRequisition*) _requisition;

	// call function
	gtk_widget_size_request(self, requisition);

	// cleanup parameter self

	// cleanup parameter requisition
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1style_1attach
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_widget_style_attach(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1style_1get
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _firstPropertyName
)
{
	GtkWidget* self;
	const gchar* firstPropertyName;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter firstPropertyName
	firstPropertyName = (const gchar*) bindings_java_getString(env, _firstPropertyName);
	if (firstPropertyName == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_widget_style_get(self, firstPropertyName, NULL);

	// cleanup parameter self

	// cleanup parameter firstPropertyName
	bindings_java_releaseString(firstPropertyName);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1style_1get_1property
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _propertyName,
	jlong _value
)
{
	GtkWidget* self;
	const gchar* propertyName;
	GValue* value;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter propertyName
	propertyName = (const gchar*) bindings_java_getString(env, _propertyName);
	if (propertyName == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter value
	value = (GValue*) _value;

	// call function
	gtk_widget_style_get_property(self, propertyName, value);

	// cleanup parameter self

	// cleanup parameter propertyName
	bindings_java_releaseString(propertyName);

	// cleanup parameter value
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1thaw_1child_1notify
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_widget_thaw_child_notify(self);

	// cleanup parameter self
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1translate_1coordinates
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _destWidget,
	jint _srcX,
	jint _srcY,
	jintArray _destX,
	jintArray _destY
)
{
	gboolean result;
	jboolean _result;
	GtkWidget* self;
	GtkWidget* destWidget;
	gint srcX;
	gint srcY;
	gint* destX;
	gint* destY;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter destWidget
	destWidget = (GtkWidget*) _destWidget;

	// convert parameter srcX
	srcX = (gint) _srcX;

	// convert parameter srcY
	srcY = (gint) _srcY;

	// convert parameter destX
	if (_destX == NULL) {
		destX = NULL;
	} else {
		destX = (gint*) (*env)->GetIntArrayElements(env, _destX, NULL);
		if (destX == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter destY
	if (_destY == NULL) {
		destY = NULL;
	} else {
		destY = (gint*) (*env)->GetIntArrayElements(env, _destY, NULL);
		if (destY == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_widget_translate_coordinates(self, destWidget, srcX, srcY, destX, destY);

	// cleanup parameter self

	// cleanup parameter destWidget

	// cleanup parameter srcX

	// cleanup parameter srcY

	// cleanup parameter destX
	if (destX != NULL) {
		(*env)->ReleaseIntArrayElements(env, _destX, (jint*)destX, 0);
	}

	// cleanup parameter destY
	if (destY != NULL) {
		(*env)->ReleaseIntArrayElements(env, _destY, (jint*)destY, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1trigger_1tooltip_1query
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_widget_trigger_tooltip_query(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1unmap
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_widget_unmap(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1unparent
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_widget_unparent(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1unrealize
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* self;

	// convert parameter self
	self = (GtkWidget*) _self;

	// call function
	gtk_widget_unrealize(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1unregister_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _window
)
{
	GtkWidget* self;
	GdkWindow* window;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter window
	window = (GdkWindow*) _window;

	// call function
	gtk_widget_unregister_window(self, window);

	// cleanup parameter self

	// cleanup parameter window
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1unset_1state_1flags
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _flags
)
{
	GtkWidget* self;
	GtkStateFlags flags;

	// convert parameter self
	self = (GtkWidget*) _self;

	// convert parameter flags
	flags = (GtkStateFlags) _flags;

	// call function
	gtk_widget_unset_state_flags(self, flags);

	// cleanup parameter self

	// cleanup parameter flags
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1get_1default_1direction
(
	JNIEnv* env,
	jclass cls
)
{
	GtkTextDirection result;
	jint _result;

	// call function
	result = gtk_widget_get_default_direction();

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1pop_1composite_1child
(
	JNIEnv* env,
	jclass cls
)
{

	// call function
	gtk_widget_pop_composite_child();
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1push_1composite_1child
(
	JNIEnv* env,
	jclass cls
)
{

	// call function
	gtk_widget_push_composite_child();
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkWidget_gtk_1widget_1set_1default_1direction
(
	JNIEnv* env,
	jclass cls,
	jint _dir
)
{
	GtkTextDirection dir;

	// convert parameter dir
	dir = (GtkTextDirection) _dir;

	// call function
	gtk_widget_set_default_direction(dir);

	// cleanup parameter dir
}
