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
#include "org_gnome_gtk_GtkStyleContext.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkStyleContext* result;
	jlong _result;

	// call function
	result = gtk_style_context_new();

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
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1add_1class
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _className
)
{
	GtkStyleContext* self;
	const gchar* className;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// convert parameter className
	className = (const gchar*) bindings_java_getString(env, _className);
	if (className == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_style_context_add_class(self, className);

	// cleanup parameter self

	// cleanup parameter className
	bindings_java_releaseString(className);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1add_1region
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _regionName,
	jint _flags
)
{
	GtkStyleContext* self;
	const gchar* regionName;
	GtkRegionFlags flags;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// convert parameter regionName
	regionName = (const gchar*) bindings_java_getString(env, _regionName);
	if (regionName == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter flags
	flags = (GtkRegionFlags) _flags;

	// call function
	gtk_style_context_add_region(self, regionName, flags);

	// cleanup parameter self

	// cleanup parameter regionName
	bindings_java_releaseString(regionName);

	// cleanup parameter flags
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1get
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _state
)
{
	GtkStyleContext* self;
	GtkStateFlags state;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// convert parameter state
	state = (GtkStateFlags) _state;

	// call function
	gtk_style_context_get(self, state, NULL);

	// cleanup parameter self

	// cleanup parameter state
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1get_1background_1color
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _state,
	jlong _color
)
{
	GtkStyleContext* self;
	GtkStateFlags state;
	GdkRGBA* color;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// convert parameter state
	state = (GtkStateFlags) _state;

	// convert parameter color
	color = (GdkRGBA*) _color;

	// call function
	gtk_style_context_get_background_color(self, state, color);

	// cleanup parameter self

	// cleanup parameter state

	// cleanup parameter color
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1get_1border
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _state,
	jlong _border
)
{
	GtkStyleContext* self;
	GtkStateFlags state;
	GtkBorder* border;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// convert parameter state
	state = (GtkStateFlags) _state;

	// convert parameter border
	border = (GtkBorder*) _border;

	// call function
	gtk_style_context_get_border(self, state, border);

	// cleanup parameter self

	// cleanup parameter state

	// cleanup parameter border
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1get_1border_1color
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _state,
	jlong _color
)
{
	GtkStyleContext* self;
	GtkStateFlags state;
	GdkRGBA* color;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// convert parameter state
	state = (GtkStateFlags) _state;

	// convert parameter color
	color = (GdkRGBA*) _color;

	// call function
	gtk_style_context_get_border_color(self, state, color);

	// cleanup parameter self

	// cleanup parameter state

	// cleanup parameter color
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1get_1color
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _state,
	jlong _color
)
{
	GtkStyleContext* self;
	GtkStateFlags state;
	GdkRGBA* color;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// convert parameter state
	state = (GtkStateFlags) _state;

	// convert parameter color
	color = (GdkRGBA*) _color;

	// call function
	gtk_style_context_get_color(self, state, color);

	// cleanup parameter self

	// cleanup parameter state

	// cleanup parameter color
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1get_1direction
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTextDirection result;
	jint _result;
	GtkStyleContext* self;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// call function
	result = gtk_style_context_get_direction(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1get_1font
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _state
)
{
	const PangoFontDescription* result;
	jlong _result;
	GtkStyleContext* self;
	GtkStateFlags state;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// convert parameter state
	state = (GtkStateFlags) _state;

	// call function
	result = gtk_style_context_get_font(self, state);

	// cleanup parameter self

	// cleanup parameter state

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1get_1junction_1sides
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkJunctionSides result;
	jint _result;
	GtkStyleContext* self;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// call function
	result = gtk_style_context_get_junction_sides(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1get_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _state,
	jlong _margin
)
{
	GtkStyleContext* self;
	GtkStateFlags state;
	GtkBorder* margin;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// convert parameter state
	state = (GtkStateFlags) _state;

	// convert parameter margin
	margin = (GtkBorder*) _margin;

	// call function
	gtk_style_context_get_margin(self, state, margin);

	// cleanup parameter self

	// cleanup parameter state

	// cleanup parameter margin
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1get_1padding
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _state,
	jlong _padding
)
{
	GtkStyleContext* self;
	GtkStateFlags state;
	GtkBorder* padding;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// convert parameter state
	state = (GtkStateFlags) _state;

	// convert parameter padding
	padding = (GtkBorder*) _padding;

	// call function
	gtk_style_context_get_padding(self, state, padding);

	// cleanup parameter self

	// cleanup parameter state

	// cleanup parameter padding
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1get_1parent
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkStyleContext* result;
	jlong _result;
	GtkStyleContext* self;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// call function
	result = gtk_style_context_get_parent(self);

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
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1get_1property
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _property,
	jint _state,
	jlong _value
)
{
	GtkStyleContext* self;
	const gchar* property;
	GtkStateFlags state;
	GValue* value;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// convert parameter property
	property = (const gchar*) bindings_java_getString(env, _property);
	if (property == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter state
	state = (GtkStateFlags) _state;

	// convert parameter value
	value = (GValue*) _value;

	// call function
	gtk_style_context_get_property(self, property, state, value);

	// cleanup parameter self

	// cleanup parameter property
	bindings_java_releaseString(property);

	// cleanup parameter state

	// cleanup parameter value
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1get_1scale
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkStyleContext* self;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// call function
	result = gtk_style_context_get_scale(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1get_1screen
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkScreen* result;
	jlong _result;
	GtkStyleContext* self;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// call function
	result = gtk_style_context_get_screen(self);

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
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1get_1state
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkStateFlags result;
	jint _result;
	GtkStyleContext* self;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// call function
	result = gtk_style_context_get_state(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1get_1style
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkStyleContext* self;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// call function
	gtk_style_context_get_style(self, NULL);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1get_1style_1property
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _propertyName,
	jlong _value
)
{
	GtkStyleContext* self;
	const gchar* propertyName;
	GValue* value;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// convert parameter propertyName
	propertyName = (const gchar*) bindings_java_getString(env, _propertyName);
	if (propertyName == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter value
	value = (GValue*) _value;

	// call function
	gtk_style_context_get_style_property(self, propertyName, value);

	// cleanup parameter self

	// cleanup parameter propertyName
	bindings_java_releaseString(propertyName);

	// cleanup parameter value
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1has_1class
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _className
)
{
	gboolean result;
	jboolean _result;
	GtkStyleContext* self;
	const gchar* className;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// convert parameter className
	className = (const gchar*) bindings_java_getString(env, _className);
	if (className == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gtk_style_context_has_class(self, className);

	// cleanup parameter self

	// cleanup parameter className
	bindings_java_releaseString(className);

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1has_1region
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _regionName,
	jintArray _flagsReturn
)
{
	gboolean result;
	jboolean _result;
	GtkStyleContext* self;
	const gchar* regionName;
	GtkRegionFlags* flagsReturn;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// convert parameter regionName
	regionName = (const gchar*) bindings_java_getString(env, _regionName);
	if (regionName == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// convert parameter flagsReturn
	if (_flagsReturn == NULL) {
		flagsReturn = NULL;
	} else {
		flagsReturn = (GtkRegionFlags*) (*env)->GetIntArrayElements(env, _flagsReturn, NULL);
		if (flagsReturn == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_style_context_has_region(self, regionName, flagsReturn);

	// cleanup parameter self

	// cleanup parameter regionName
	bindings_java_releaseString(regionName);

	// cleanup parameter flagsReturn
	if (flagsReturn != NULL) {
		(*env)->ReleaseIntArrayElements(env, _flagsReturn, (jint*)flagsReturn, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1invalidate
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkStyleContext* self;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// call function
	gtk_style_context_invalidate(self);

	// cleanup parameter self
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1lookup_1color
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _colorName,
	jlong _color
)
{
	gboolean result;
	jboolean _result;
	GtkStyleContext* self;
	const gchar* colorName;
	GdkRGBA* color;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// convert parameter colorName
	colorName = (const gchar*) bindings_java_getString(env, _colorName);
	if (colorName == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// convert parameter color
	color = (GdkRGBA*) _color;

	// call function
	result = gtk_style_context_lookup_color(self, colorName, color);

	// cleanup parameter self

	// cleanup parameter colorName
	bindings_java_releaseString(colorName);

	// cleanup parameter color

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1lookup_1icon_1set
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _stockId
)
{
	GtkIconSet* result;
	jlong _result;
	GtkStyleContext* self;
	const gchar* stockId;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// convert parameter stockId
	stockId = (const gchar*) bindings_java_getString(env, _stockId);
	if (stockId == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_style_context_lookup_icon_set(self, stockId);

	// cleanup parameter self

	// cleanup parameter stockId
	bindings_java_releaseString(stockId);

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1pop_1animatable_1region
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkStyleContext* self;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// call function
	gtk_style_context_pop_animatable_region(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1remove_1class
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _className
)
{
	GtkStyleContext* self;
	const gchar* className;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// convert parameter className
	className = (const gchar*) bindings_java_getString(env, _className);
	if (className == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_style_context_remove_class(self, className);

	// cleanup parameter self

	// cleanup parameter className
	bindings_java_releaseString(className);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1remove_1region
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _regionName
)
{
	GtkStyleContext* self;
	const gchar* regionName;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// convert parameter regionName
	regionName = (const gchar*) bindings_java_getString(env, _regionName);
	if (regionName == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_style_context_remove_region(self, regionName);

	// cleanup parameter self

	// cleanup parameter regionName
	bindings_java_releaseString(regionName);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1restore
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkStyleContext* self;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// call function
	gtk_style_context_restore(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1save
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkStyleContext* self;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// call function
	gtk_style_context_save(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1scroll_1animations
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _window,
	jint _dx,
	jint _dy
)
{
	GtkStyleContext* self;
	GdkWindow* window;
	gint dx;
	gint dy;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// convert parameter window
	window = (GdkWindow*) _window;

	// convert parameter dx
	dx = (gint) _dx;

	// convert parameter dy
	dy = (gint) _dy;

	// call function
	gtk_style_context_scroll_animations(self, window, dx, dy);

	// cleanup parameter self

	// cleanup parameter window

	// cleanup parameter dx

	// cleanup parameter dy
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1set_1background
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _window
)
{
	GtkStyleContext* self;
	GdkWindow* window;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// convert parameter window
	window = (GdkWindow*) _window;

	// call function
	gtk_style_context_set_background(self, window);

	// cleanup parameter self

	// cleanup parameter window
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1set_1direction
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _direction
)
{
	GtkStyleContext* self;
	GtkTextDirection direction;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// convert parameter direction
	direction = (GtkTextDirection) _direction;

	// call function
	gtk_style_context_set_direction(self, direction);

	// cleanup parameter self

	// cleanup parameter direction
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1set_1junction_1sides
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _sides
)
{
	GtkStyleContext* self;
	GtkJunctionSides sides;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// convert parameter sides
	sides = (GtkJunctionSides) _sides;

	// call function
	gtk_style_context_set_junction_sides(self, sides);

	// cleanup parameter self

	// cleanup parameter sides
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1set_1parent
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _parent
)
{
	GtkStyleContext* self;
	GtkStyleContext* parent;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// convert parameter parent
	parent = (GtkStyleContext*) _parent;

	// call function
	gtk_style_context_set_parent(self, parent);

	// cleanup parameter self

	// cleanup parameter parent
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1set_1scale
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _scale
)
{
	GtkStyleContext* self;
	gint scale;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// convert parameter scale
	scale = (gint) _scale;

	// call function
	gtk_style_context_set_scale(self, scale);

	// cleanup parameter self

	// cleanup parameter scale
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1set_1screen
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _screen
)
{
	GtkStyleContext* self;
	GdkScreen* screen;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// convert parameter screen
	screen = (GdkScreen*) _screen;

	// call function
	gtk_style_context_set_screen(self, screen);

	// cleanup parameter self

	// cleanup parameter screen
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1set_1state
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _flags
)
{
	GtkStyleContext* self;
	GtkStateFlags flags;

	// convert parameter self
	self = (GtkStyleContext*) _self;

	// convert parameter flags
	flags = (GtkStateFlags) _flags;

	// call function
	gtk_style_context_set_state(self, flags);

	// cleanup parameter self

	// cleanup parameter flags
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkStyleContext_gtk_1style_1context_1reset_1widgets
(
	JNIEnv* env,
	jclass cls,
	jlong _screen
)
{
	GdkScreen* screen;

	// convert parameter screen
	screen = (GdkScreen*) _screen;

	// call function
	gtk_style_context_reset_widgets(screen);

	// cleanup parameter screen
}
