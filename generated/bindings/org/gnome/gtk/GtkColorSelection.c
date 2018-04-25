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
#include "org_gnome_gtk_GtkColorSelection.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkColorSelection_gtk_1color_1selection_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkWidget* result;
	jlong _result;

	// call function
	result = gtk_color_selection_new();

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}

JNIEXPORT jchar JNICALL
Java_org_gnome_gtk_GtkColorSelection_gtk_1color_1selection_1get_1current_1alpha
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint16 result;
	jchar _result;
	GtkColorSelection* self;

	// convert parameter self
	self = (GtkColorSelection*) _self;

	// call function
	result = gtk_color_selection_get_current_alpha(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jchar) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkColorSelection_gtk_1color_1selection_1get_1current_1rgba
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _rgba
)
{
	GtkColorSelection* self;
	GdkRGBA* rgba;

	// convert parameter self
	self = (GtkColorSelection*) _self;

	// convert parameter rgba
	rgba = (GdkRGBA*) _rgba;

	// call function
	gtk_color_selection_get_current_rgba(self, rgba);

	// cleanup parameter self

	// cleanup parameter rgba
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkColorSelection_gtk_1color_1selection_1get_1has_1opacity_1control
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkColorSelection* self;

	// convert parameter self
	self = (GtkColorSelection*) _self;

	// call function
	result = gtk_color_selection_get_has_opacity_control(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkColorSelection_gtk_1color_1selection_1get_1has_1palette
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkColorSelection* self;

	// convert parameter self
	self = (GtkColorSelection*) _self;

	// call function
	result = gtk_color_selection_get_has_palette(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jchar JNICALL
Java_org_gnome_gtk_GtkColorSelection_gtk_1color_1selection_1get_1previous_1alpha
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint16 result;
	jchar _result;
	GtkColorSelection* self;

	// convert parameter self
	self = (GtkColorSelection*) _self;

	// call function
	result = gtk_color_selection_get_previous_alpha(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jchar) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkColorSelection_gtk_1color_1selection_1get_1previous_1rgba
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _rgba
)
{
	GtkColorSelection* self;
	GdkRGBA* rgba;

	// convert parameter self
	self = (GtkColorSelection*) _self;

	// convert parameter rgba
	rgba = (GdkRGBA*) _rgba;

	// call function
	gtk_color_selection_get_previous_rgba(self, rgba);

	// cleanup parameter self

	// cleanup parameter rgba
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkColorSelection_gtk_1color_1selection_1is_1adjusting
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkColorSelection* self;

	// convert parameter self
	self = (GtkColorSelection*) _self;

	// call function
	result = gtk_color_selection_is_adjusting(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkColorSelection_gtk_1color_1selection_1set_1current_1alpha
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jchar _alpha
)
{
	GtkColorSelection* self;
	guint16 alpha;

	// convert parameter self
	self = (GtkColorSelection*) _self;

	// convert parameter alpha
	alpha = (guint16) _alpha;

	// call function
	gtk_color_selection_set_current_alpha(self, alpha);

	// cleanup parameter self

	// cleanup parameter alpha
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkColorSelection_gtk_1color_1selection_1set_1current_1rgba
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _rgba
)
{
	GtkColorSelection* self;
	const GdkRGBA* rgba;

	// convert parameter self
	self = (GtkColorSelection*) _self;

	// convert parameter rgba
	rgba = (const GdkRGBA*) _rgba;

	// call function
	gtk_color_selection_set_current_rgba(self, rgba);

	// cleanup parameter self

	// cleanup parameter rgba
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkColorSelection_gtk_1color_1selection_1set_1has_1opacity_1control
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _hasOpacity
)
{
	GtkColorSelection* self;
	gboolean hasOpacity;

	// convert parameter self
	self = (GtkColorSelection*) _self;

	// convert parameter hasOpacity
	hasOpacity = (gboolean) _hasOpacity;

	// call function
	gtk_color_selection_set_has_opacity_control(self, hasOpacity);

	// cleanup parameter self

	// cleanup parameter hasOpacity
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkColorSelection_gtk_1color_1selection_1set_1has_1palette
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _hasPalette
)
{
	GtkColorSelection* self;
	gboolean hasPalette;

	// convert parameter self
	self = (GtkColorSelection*) _self;

	// convert parameter hasPalette
	hasPalette = (gboolean) _hasPalette;

	// call function
	gtk_color_selection_set_has_palette(self, hasPalette);

	// cleanup parameter self

	// cleanup parameter hasPalette
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkColorSelection_gtk_1color_1selection_1set_1previous_1alpha
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jchar _alpha
)
{
	GtkColorSelection* self;
	guint16 alpha;

	// convert parameter self
	self = (GtkColorSelection*) _self;

	// convert parameter alpha
	alpha = (guint16) _alpha;

	// call function
	gtk_color_selection_set_previous_alpha(self, alpha);

	// cleanup parameter self

	// cleanup parameter alpha
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkColorSelection_gtk_1color_1selection_1set_1previous_1rgba
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _rgba
)
{
	GtkColorSelection* self;
	const GdkRGBA* rgba;

	// convert parameter self
	self = (GtkColorSelection*) _self;

	// convert parameter rgba
	rgba = (const GdkRGBA*) _rgba;

	// call function
	gtk_color_selection_set_previous_rgba(self, rgba);

	// cleanup parameter self

	// cleanup parameter rgba
}
