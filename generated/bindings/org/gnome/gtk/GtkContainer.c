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
#include "org_gnome_gtk_GtkContainer.h"

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkContainer_gtk_1container_1add
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _widget
)
{
	GtkContainer* self;
	GtkWidget* widget;

	// convert parameter self
	self = (GtkContainer*) _self;

	// convert parameter widget
	widget = (GtkWidget*) _widget;

	// call function
	gtk_container_add(self, widget);

	// cleanup parameter self

	// cleanup parameter widget
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkContainer_gtk_1container_1add_1with_1properties
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _widget,
	jstring _firstPropName
)
{
	GtkContainer* self;
	GtkWidget* widget;
	const gchar* firstPropName;

	// convert parameter self
	self = (GtkContainer*) _self;

	// convert parameter widget
	widget = (GtkWidget*) _widget;

	// convert parameter firstPropName
	firstPropName = (const gchar*) bindings_java_getString(env, _firstPropName);
	if (firstPropName == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_container_add_with_properties(self, widget, firstPropName, NULL);

	// cleanup parameter self

	// cleanup parameter widget

	// cleanup parameter firstPropName
	bindings_java_releaseString(firstPropName);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkContainer_gtk_1container_1check_1resize
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkContainer* self;

	// convert parameter self
	self = (GtkContainer*) _self;

	// call function
	gtk_container_check_resize(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkContainer_gtk_1container_1child_1get
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jstring _firstPropName
)
{
	GtkContainer* self;
	GtkWidget* child;
	const gchar* firstPropName;

	// convert parameter self
	self = (GtkContainer*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter firstPropName
	firstPropName = (const gchar*) bindings_java_getString(env, _firstPropName);
	if (firstPropName == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_container_child_get(self, child, firstPropName, NULL);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter firstPropName
	bindings_java_releaseString(firstPropName);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkContainer_gtk_1container_1child_1get_1property
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jstring _propertyName,
	jlong _value
)
{
	GtkContainer* self;
	GtkWidget* child;
	const gchar* propertyName;
	GValue* value;

	// convert parameter self
	self = (GtkContainer*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter propertyName
	propertyName = (const gchar*) bindings_java_getString(env, _propertyName);
	if (propertyName == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter value
	value = (GValue*) _value;

	// call function
	gtk_container_child_get_property(self, child, propertyName, value);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter propertyName
	bindings_java_releaseString(propertyName);

	// cleanup parameter value
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkContainer_gtk_1container_1child_1notify
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jstring _childProperty
)
{
	GtkContainer* self;
	GtkWidget* child;
	const gchar* childProperty;

	// convert parameter self
	self = (GtkContainer*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter childProperty
	childProperty = (const gchar*) bindings_java_getString(env, _childProperty);
	if (childProperty == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_container_child_notify(self, child, childProperty);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter childProperty
	bindings_java_releaseString(childProperty);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkContainer_gtk_1container_1child_1set
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jstring _firstPropName
)
{
	GtkContainer* self;
	GtkWidget* child;
	const gchar* firstPropName;

	// convert parameter self
	self = (GtkContainer*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter firstPropName
	firstPropName = (const gchar*) bindings_java_getString(env, _firstPropName);
	if (firstPropName == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_container_child_set(self, child, firstPropName, NULL);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter firstPropName
	bindings_java_releaseString(firstPropName);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkContainer_gtk_1container_1child_1set_1property
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jstring _propertyName,
	jlong _value
)
{
	GtkContainer* self;
	GtkWidget* child;
	const gchar* propertyName;
	const GValue* value;

	// convert parameter self
	self = (GtkContainer*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter propertyName
	propertyName = (const gchar*) bindings_java_getString(env, _propertyName);
	if (propertyName == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter value
	value = (const GValue*) _value;

	// call function
	gtk_container_child_set_property(self, child, propertyName, value);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter propertyName
	bindings_java_releaseString(propertyName);

	// cleanup parameter value
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkContainer_gtk_1container_1get_1border_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GtkContainer* self;

	// convert parameter self
	self = (GtkContainer*) _self;

	// call function
	result = gtk_container_get_border_width(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlongArray JNICALL
Java_org_gnome_gtk_GtkContainer_gtk_1container_1get_1children
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GList* result;
	jlongArray _result;
	GtkContainer* self;

	// convert parameter self
	self = (GtkContainer*) _self;

	// call function
	result = gtk_container_get_children(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlongArray) bindings_java_convert_glist_to_jarray(env, result);

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkContainer_gtk_1container_1get_1focus_1child
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkContainer* self;

	// convert parameter self
	self = (GtkContainer*) _self;

	// call function
	result = gtk_container_get_focus_child(self);

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
Java_org_gnome_gtk_GtkContainer_gtk_1container_1get_1focus_1hadjustment
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAdjustment* result;
	jlong _result;
	GtkContainer* self;

	// convert parameter self
	self = (GtkContainer*) _self;

	// call function
	result = gtk_container_get_focus_hadjustment(self);

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
Java_org_gnome_gtk_GtkContainer_gtk_1container_1get_1focus_1vadjustment
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAdjustment* result;
	jlong _result;
	GtkContainer* self;

	// convert parameter self
	self = (GtkContainer*) _self;

	// call function
	result = gtk_container_get_focus_vadjustment(self);

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
Java_org_gnome_gtk_GtkContainer_gtk_1container_1get_1resize_1mode
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkResizeMode result;
	jint _result;
	GtkContainer* self;

	// convert parameter self
	self = (GtkContainer*) _self;

	// call function
	result = gtk_container_get_resize_mode(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkContainer_gtk_1container_1propagate_1draw
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jlong _cr
)
{
	GtkContainer* self;
	GtkWidget* child;
	cairo_t* cr;

	// convert parameter self
	self = (GtkContainer*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter cr
	cr = (cairo_t*) _cr;

	// call function
	gtk_container_propagate_draw(self, child, cr);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter cr
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkContainer_gtk_1container_1remove
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _widget
)
{
	GtkContainer* self;
	GtkWidget* widget;

	// convert parameter self
	self = (GtkContainer*) _self;

	// convert parameter widget
	widget = (GtkWidget*) _widget;

	// call function
	gtk_container_remove(self, widget);

	// cleanup parameter self

	// cleanup parameter widget
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkContainer_gtk_1container_1resize_1children
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkContainer* self;

	// convert parameter self
	self = (GtkContainer*) _self;

	// call function
	gtk_container_resize_children(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkContainer_gtk_1container_1set_1border_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _borderWidth
)
{
	GtkContainer* self;
	guint borderWidth;

	// convert parameter self
	self = (GtkContainer*) _self;

	// convert parameter borderWidth
	borderWidth = (guint) _borderWidth;

	// call function
	gtk_container_set_border_width(self, borderWidth);

	// cleanup parameter self

	// cleanup parameter borderWidth
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkContainer_gtk_1container_1set_1focus_1chain
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlongArray _focusableWidgets
)
{
	GtkContainer* self;
	GList* focusableWidgets;

	// convert parameter self
	self = (GtkContainer*) _self;

	// convert parameter focusableWidgets
	focusableWidgets = (GList*) bindings_java_convert_jarray_to_glist(env, _focusableWidgets);
	if (focusableWidgets == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_container_set_focus_chain(self, focusableWidgets);

	// cleanup parameter self

	// cleanup parameter focusableWidgets
	g_list_free(focusableWidgets);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkContainer_gtk_1container_1set_1focus_1child
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child
)
{
	GtkContainer* self;
	GtkWidget* child;

	// convert parameter self
	self = (GtkContainer*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// call function
	gtk_container_set_focus_child(self, child);

	// cleanup parameter self

	// cleanup parameter child
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkContainer_gtk_1container_1set_1focus_1hadjustment
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _adjustment
)
{
	GtkContainer* self;
	GtkAdjustment* adjustment;

	// convert parameter self
	self = (GtkContainer*) _self;

	// convert parameter adjustment
	adjustment = (GtkAdjustment*) _adjustment;

	// call function
	gtk_container_set_focus_hadjustment(self, adjustment);

	// cleanup parameter self

	// cleanup parameter adjustment
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkContainer_gtk_1container_1set_1focus_1vadjustment
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _adjustment
)
{
	GtkContainer* self;
	GtkAdjustment* adjustment;

	// convert parameter self
	self = (GtkContainer*) _self;

	// convert parameter adjustment
	adjustment = (GtkAdjustment*) _adjustment;

	// call function
	gtk_container_set_focus_vadjustment(self, adjustment);

	// cleanup parameter self

	// cleanup parameter adjustment
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkContainer_gtk_1container_1set_1reallocate_1redraws
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _needsRedraws
)
{
	GtkContainer* self;
	gboolean needsRedraws;

	// convert parameter self
	self = (GtkContainer*) _self;

	// convert parameter needsRedraws
	needsRedraws = (gboolean) _needsRedraws;

	// call function
	gtk_container_set_reallocate_redraws(self, needsRedraws);

	// cleanup parameter self

	// cleanup parameter needsRedraws
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkContainer_gtk_1container_1set_1resize_1mode
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _resizeMode
)
{
	GtkContainer* self;
	GtkResizeMode resizeMode;

	// convert parameter self
	self = (GtkContainer*) _self;

	// convert parameter resizeMode
	resizeMode = (GtkResizeMode) _resizeMode;

	// call function
	gtk_container_set_resize_mode(self, resizeMode);

	// cleanup parameter self

	// cleanup parameter resizeMode
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkContainer_gtk_1container_1unset_1focus_1chain
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkContainer* self;

	// convert parameter self
	self = (GtkContainer*) _self;

	// call function
	gtk_container_unset_focus_chain(self);

	// cleanup parameter self
}
