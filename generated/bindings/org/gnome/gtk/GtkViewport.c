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
#include "org_gnome_gtk_GtkViewport.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkViewport_gtk_1viewport_1new
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
	result = gtk_viewport_new(hadjustment, vadjustment);

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

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkViewport_gtk_1viewport_1get_1bin_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* result;
	jlong _result;
	GtkViewport* self;

	// convert parameter self
	self = (GtkViewport*) _self;

	// call function
	result = gtk_viewport_get_bin_window(self);

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
Java_org_gnome_gtk_GtkViewport_gtk_1viewport_1get_1hadjustment
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAdjustment* result;
	jlong _result;
	GtkViewport* self;

	// convert parameter self
	self = (GtkViewport*) _self;

	// call function
	result = gtk_viewport_get_hadjustment(self);

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
Java_org_gnome_gtk_GtkViewport_gtk_1viewport_1get_1shadow_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkShadowType result;
	jint _result;
	GtkViewport* self;

	// convert parameter self
	self = (GtkViewport*) _self;

	// call function
	result = gtk_viewport_get_shadow_type(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkViewport_gtk_1viewport_1get_1vadjustment
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAdjustment* result;
	jlong _result;
	GtkViewport* self;

	// convert parameter self
	self = (GtkViewport*) _self;

	// call function
	result = gtk_viewport_get_vadjustment(self);

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
Java_org_gnome_gtk_GtkViewport_gtk_1viewport_1get_1view_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GdkWindow* result;
	jlong _result;
	GtkViewport* self;

	// convert parameter self
	self = (GtkViewport*) _self;

	// call function
	result = gtk_viewport_get_view_window(self);

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
Java_org_gnome_gtk_GtkViewport_gtk_1viewport_1set_1hadjustment
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _adjustment
)
{
	GtkViewport* self;
	GtkAdjustment* adjustment;

	// convert parameter self
	self = (GtkViewport*) _self;

	// convert parameter adjustment
	adjustment = (GtkAdjustment*) _adjustment;

	// call function
	gtk_viewport_set_hadjustment(self, adjustment);

	// cleanup parameter self

	// cleanup parameter adjustment
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkViewport_gtk_1viewport_1set_1shadow_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _type
)
{
	GtkViewport* self;
	GtkShadowType type;

	// convert parameter self
	self = (GtkViewport*) _self;

	// convert parameter type
	type = (GtkShadowType) _type;

	// call function
	gtk_viewport_set_shadow_type(self, type);

	// cleanup parameter self

	// cleanup parameter type
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkViewport_gtk_1viewport_1set_1vadjustment
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _adjustment
)
{
	GtkViewport* self;
	GtkAdjustment* adjustment;

	// convert parameter self
	self = (GtkViewport*) _self;

	// convert parameter adjustment
	adjustment = (GtkAdjustment*) _adjustment;

	// call function
	gtk_viewport_set_vadjustment(self, adjustment);

	// cleanup parameter self

	// cleanup parameter adjustment
}
