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
#include "org_gnome_gtk_GtkScrolledWindow.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkScrolledWindow_gtk_1scrolled_1window_1new
(
	JNIEnv* env,
	jclass cls,
	jlong _hadjustment,
	jlong _vadjustment
)
{
	GtkWidget* result;
	jlong _result;
	GtkAdjustment* hadjustment;
	GtkAdjustment* vadjustment;

	// convert parameter hadjustment
	hadjustment = (GtkAdjustment*) _hadjustment;

	// convert parameter vadjustment
	vadjustment = (GtkAdjustment*) _vadjustment;

	// call function
	result = gtk_scrolled_window_new(hadjustment, vadjustment);

	// cleanup parameter hadjustment

	// cleanup parameter vadjustment

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
Java_org_gnome_gtk_GtkScrolledWindow_gtk_1scrolled_1window_1add_1with_1viewport
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child
)
{
	GtkScrolledWindow* self;
	GtkWidget* child;

	// convert parameter self
	self = (GtkScrolledWindow*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// call function
	gtk_scrolled_window_add_with_viewport(self, child);

	// cleanup parameter self

	// cleanup parameter child
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkScrolledWindow_gtk_1scrolled_1window_1get_1capture_1button_1press
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkScrolledWindow* self;

	// convert parameter self
	self = (GtkScrolledWindow*) _self;

	// call function
	result = gtk_scrolled_window_get_capture_button_press(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkScrolledWindow_gtk_1scrolled_1window_1get_1hadjustment
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAdjustment* result;
	jlong _result;
	GtkScrolledWindow* self;

	// convert parameter self
	self = (GtkScrolledWindow*) _self;

	// call function
	result = gtk_scrolled_window_get_hadjustment(self);

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
Java_org_gnome_gtk_GtkScrolledWindow_gtk_1scrolled_1window_1get_1hscrollbar
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkScrolledWindow* self;

	// convert parameter self
	self = (GtkScrolledWindow*) _self;

	// call function
	result = gtk_scrolled_window_get_hscrollbar(self);

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
Java_org_gnome_gtk_GtkScrolledWindow_gtk_1scrolled_1window_1get_1kinetic_1scrolling
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkScrolledWindow* self;

	// convert parameter self
	self = (GtkScrolledWindow*) _self;

	// call function
	result = gtk_scrolled_window_get_kinetic_scrolling(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkScrolledWindow_gtk_1scrolled_1window_1get_1max_1content_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkScrolledWindow* self;

	// convert parameter self
	self = (GtkScrolledWindow*) _self;

	// call function
	result = gtk_scrolled_window_get_max_content_height(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkScrolledWindow_gtk_1scrolled_1window_1get_1max_1content_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkScrolledWindow* self;

	// convert parameter self
	self = (GtkScrolledWindow*) _self;

	// call function
	result = gtk_scrolled_window_get_max_content_width(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkScrolledWindow_gtk_1scrolled_1window_1get_1min_1content_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkScrolledWindow* self;

	// convert parameter self
	self = (GtkScrolledWindow*) _self;

	// call function
	result = gtk_scrolled_window_get_min_content_height(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkScrolledWindow_gtk_1scrolled_1window_1get_1min_1content_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkScrolledWindow* self;

	// convert parameter self
	self = (GtkScrolledWindow*) _self;

	// call function
	result = gtk_scrolled_window_get_min_content_width(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkScrolledWindow_gtk_1scrolled_1window_1get_1overlay_1scrolling
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkScrolledWindow* self;

	// convert parameter self
	self = (GtkScrolledWindow*) _self;

	// call function
	result = gtk_scrolled_window_get_overlay_scrolling(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkScrolledWindow_gtk_1scrolled_1window_1get_1placement
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkCornerType result;
	jint _result;
	GtkScrolledWindow* self;

	// convert parameter self
	self = (GtkScrolledWindow*) _self;

	// call function
	result = gtk_scrolled_window_get_placement(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkScrolledWindow_gtk_1scrolled_1window_1get_1policy
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _hscrollbarPolicy,
	jintArray _vscrollbarPolicy
)
{
	GtkScrolledWindow* self;
	GtkPolicyType* hscrollbarPolicy;
	GtkPolicyType* vscrollbarPolicy;

	// convert parameter self
	self = (GtkScrolledWindow*) _self;

	// convert parameter hscrollbarPolicy
	if (_hscrollbarPolicy == NULL) {
		hscrollbarPolicy = NULL;
	} else {
		hscrollbarPolicy = (GtkPolicyType*) (*env)->GetIntArrayElements(env, _hscrollbarPolicy, NULL);
		if (hscrollbarPolicy == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter vscrollbarPolicy
	if (_vscrollbarPolicy == NULL) {
		vscrollbarPolicy = NULL;
	} else {
		vscrollbarPolicy = (GtkPolicyType*) (*env)->GetIntArrayElements(env, _vscrollbarPolicy, NULL);
		if (vscrollbarPolicy == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_scrolled_window_get_policy(self, hscrollbarPolicy, vscrollbarPolicy);

	// cleanup parameter self

	// cleanup parameter hscrollbarPolicy
	if (hscrollbarPolicy != NULL) {
		(*env)->ReleaseIntArrayElements(env, _hscrollbarPolicy, (jint*)hscrollbarPolicy, 0);
	}

	// cleanup parameter vscrollbarPolicy
	if (vscrollbarPolicy != NULL) {
		(*env)->ReleaseIntArrayElements(env, _vscrollbarPolicy, (jint*)vscrollbarPolicy, 0);
	}
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkScrolledWindow_gtk_1scrolled_1window_1get_1propagate_1natural_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkScrolledWindow* self;

	// convert parameter self
	self = (GtkScrolledWindow*) _self;

	// call function
	result = gtk_scrolled_window_get_propagate_natural_height(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkScrolledWindow_gtk_1scrolled_1window_1get_1propagate_1natural_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkScrolledWindow* self;

	// convert parameter self
	self = (GtkScrolledWindow*) _self;

	// call function
	result = gtk_scrolled_window_get_propagate_natural_width(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkScrolledWindow_gtk_1scrolled_1window_1get_1shadow_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkShadowType result;
	jint _result;
	GtkScrolledWindow* self;

	// convert parameter self
	self = (GtkScrolledWindow*) _self;

	// call function
	result = gtk_scrolled_window_get_shadow_type(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkScrolledWindow_gtk_1scrolled_1window_1get_1vadjustment
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAdjustment* result;
	jlong _result;
	GtkScrolledWindow* self;

	// convert parameter self
	self = (GtkScrolledWindow*) _self;

	// call function
	result = gtk_scrolled_window_get_vadjustment(self);

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
Java_org_gnome_gtk_GtkScrolledWindow_gtk_1scrolled_1window_1get_1vscrollbar
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkScrolledWindow* self;

	// convert parameter self
	self = (GtkScrolledWindow*) _self;

	// call function
	result = gtk_scrolled_window_get_vscrollbar(self);

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
Java_org_gnome_gtk_GtkScrolledWindow_gtk_1scrolled_1window_1set_1capture_1button_1press
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _captureButtonPress
)
{
	GtkScrolledWindow* self;
	gboolean captureButtonPress;

	// convert parameter self
	self = (GtkScrolledWindow*) _self;

	// convert parameter captureButtonPress
	captureButtonPress = (gboolean) _captureButtonPress;

	// call function
	gtk_scrolled_window_set_capture_button_press(self, captureButtonPress);

	// cleanup parameter self

	// cleanup parameter captureButtonPress
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkScrolledWindow_gtk_1scrolled_1window_1set_1hadjustment
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _hadjustment
)
{
	GtkScrolledWindow* self;
	GtkAdjustment* hadjustment;

	// convert parameter self
	self = (GtkScrolledWindow*) _self;

	// convert parameter hadjustment
	hadjustment = (GtkAdjustment*) _hadjustment;

	// call function
	gtk_scrolled_window_set_hadjustment(self, hadjustment);

	// cleanup parameter self

	// cleanup parameter hadjustment
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkScrolledWindow_gtk_1scrolled_1window_1set_1kinetic_1scrolling
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _kineticScrolling
)
{
	GtkScrolledWindow* self;
	gboolean kineticScrolling;

	// convert parameter self
	self = (GtkScrolledWindow*) _self;

	// convert parameter kineticScrolling
	kineticScrolling = (gboolean) _kineticScrolling;

	// call function
	gtk_scrolled_window_set_kinetic_scrolling(self, kineticScrolling);

	// cleanup parameter self

	// cleanup parameter kineticScrolling
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkScrolledWindow_gtk_1scrolled_1window_1set_1max_1content_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _height
)
{
	GtkScrolledWindow* self;
	gint height;

	// convert parameter self
	self = (GtkScrolledWindow*) _self;

	// convert parameter height
	height = (gint) _height;

	// call function
	gtk_scrolled_window_set_max_content_height(self, height);

	// cleanup parameter self

	// cleanup parameter height
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkScrolledWindow_gtk_1scrolled_1window_1set_1max_1content_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _width
)
{
	GtkScrolledWindow* self;
	gint width;

	// convert parameter self
	self = (GtkScrolledWindow*) _self;

	// convert parameter width
	width = (gint) _width;

	// call function
	gtk_scrolled_window_set_max_content_width(self, width);

	// cleanup parameter self

	// cleanup parameter width
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkScrolledWindow_gtk_1scrolled_1window_1set_1min_1content_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _height
)
{
	GtkScrolledWindow* self;
	gint height;

	// convert parameter self
	self = (GtkScrolledWindow*) _self;

	// convert parameter height
	height = (gint) _height;

	// call function
	gtk_scrolled_window_set_min_content_height(self, height);

	// cleanup parameter self

	// cleanup parameter height
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkScrolledWindow_gtk_1scrolled_1window_1set_1min_1content_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _width
)
{
	GtkScrolledWindow* self;
	gint width;

	// convert parameter self
	self = (GtkScrolledWindow*) _self;

	// convert parameter width
	width = (gint) _width;

	// call function
	gtk_scrolled_window_set_min_content_width(self, width);

	// cleanup parameter self

	// cleanup parameter width
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkScrolledWindow_gtk_1scrolled_1window_1set_1overlay_1scrolling
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _overlayScrolling
)
{
	GtkScrolledWindow* self;
	gboolean overlayScrolling;

	// convert parameter self
	self = (GtkScrolledWindow*) _self;

	// convert parameter overlayScrolling
	overlayScrolling = (gboolean) _overlayScrolling;

	// call function
	gtk_scrolled_window_set_overlay_scrolling(self, overlayScrolling);

	// cleanup parameter self

	// cleanup parameter overlayScrolling
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkScrolledWindow_gtk_1scrolled_1window_1set_1placement
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _windowPlacement
)
{
	GtkScrolledWindow* self;
	GtkCornerType windowPlacement;

	// convert parameter self
	self = (GtkScrolledWindow*) _self;

	// convert parameter windowPlacement
	windowPlacement = (GtkCornerType) _windowPlacement;

	// call function
	gtk_scrolled_window_set_placement(self, windowPlacement);

	// cleanup parameter self

	// cleanup parameter windowPlacement
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkScrolledWindow_gtk_1scrolled_1window_1set_1policy
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _hscrollbarPolicy,
	jint _vscrollbarPolicy
)
{
	GtkScrolledWindow* self;
	GtkPolicyType hscrollbarPolicy;
	GtkPolicyType vscrollbarPolicy;

	// convert parameter self
	self = (GtkScrolledWindow*) _self;

	// convert parameter hscrollbarPolicy
	hscrollbarPolicy = (GtkPolicyType) _hscrollbarPolicy;

	// convert parameter vscrollbarPolicy
	vscrollbarPolicy = (GtkPolicyType) _vscrollbarPolicy;

	// call function
	gtk_scrolled_window_set_policy(self, hscrollbarPolicy, vscrollbarPolicy);

	// cleanup parameter self

	// cleanup parameter hscrollbarPolicy

	// cleanup parameter vscrollbarPolicy
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkScrolledWindow_gtk_1scrolled_1window_1set_1propagate_1natural_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _propagate
)
{
	GtkScrolledWindow* self;
	gboolean propagate;

	// convert parameter self
	self = (GtkScrolledWindow*) _self;

	// convert parameter propagate
	propagate = (gboolean) _propagate;

	// call function
	gtk_scrolled_window_set_propagate_natural_height(self, propagate);

	// cleanup parameter self

	// cleanup parameter propagate
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkScrolledWindow_gtk_1scrolled_1window_1set_1propagate_1natural_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _propagate
)
{
	GtkScrolledWindow* self;
	gboolean propagate;

	// convert parameter self
	self = (GtkScrolledWindow*) _self;

	// convert parameter propagate
	propagate = (gboolean) _propagate;

	// call function
	gtk_scrolled_window_set_propagate_natural_width(self, propagate);

	// cleanup parameter self

	// cleanup parameter propagate
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkScrolledWindow_gtk_1scrolled_1window_1set_1shadow_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _type
)
{
	GtkScrolledWindow* self;
	GtkShadowType type;

	// convert parameter self
	self = (GtkScrolledWindow*) _self;

	// convert parameter type
	type = (GtkShadowType) _type;

	// call function
	gtk_scrolled_window_set_shadow_type(self, type);

	// cleanup parameter self

	// cleanup parameter type
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkScrolledWindow_gtk_1scrolled_1window_1set_1vadjustment
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _vadjustment
)
{
	GtkScrolledWindow* self;
	GtkAdjustment* vadjustment;

	// convert parameter self
	self = (GtkScrolledWindow*) _self;

	// convert parameter vadjustment
	vadjustment = (GtkAdjustment*) _vadjustment;

	// call function
	gtk_scrolled_window_set_vadjustment(self, vadjustment);

	// cleanup parameter self

	// cleanup parameter vadjustment
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkScrolledWindow_gtk_1scrolled_1window_1unset_1placement
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkScrolledWindow* self;

	// convert parameter self
	self = (GtkScrolledWindow*) _self;

	// call function
	gtk_scrolled_window_unset_placement(self);

	// cleanup parameter self
}
