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
#include "org_gnome_gtk_GtkFontSelection.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkFontSelection_gtk_1font_1selection_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkWidget* result;
	jlong _result;

	// call function
	result = gtk_font_selection_new();

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
Java_org_gnome_gtk_GtkFontSelection_gtk_1font_1selection_1get_1face
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoFontFace* result;
	jlong _result;
	GtkFontSelection* self;

	// convert parameter self
	self = (GtkFontSelection*) _self;

	// call function
	result = gtk_font_selection_get_face(self);

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
Java_org_gnome_gtk_GtkFontSelection_gtk_1font_1selection_1get_1face_1list
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkFontSelection* self;

	// convert parameter self
	self = (GtkFontSelection*) _self;

	// call function
	result = gtk_font_selection_get_face_list(self);

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
Java_org_gnome_gtk_GtkFontSelection_gtk_1font_1selection_1get_1family
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoFontFamily* result;
	jlong _result;
	GtkFontSelection* self;

	// convert parameter self
	self = (GtkFontSelection*) _self;

	// call function
	result = gtk_font_selection_get_family(self);

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
Java_org_gnome_gtk_GtkFontSelection_gtk_1font_1selection_1get_1family_1list
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkFontSelection* self;

	// convert parameter self
	self = (GtkFontSelection*) _self;

	// call function
	result = gtk_font_selection_get_family_list(self);

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
Java_org_gnome_gtk_GtkFontSelection_gtk_1font_1selection_1get_1font_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gchar* result;
	jstring _result;
	GtkFontSelection* self;

	// convert parameter self
	self = (GtkFontSelection*) _self;

	// call function
	result = gtk_font_selection_get_font_name(self);

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
Java_org_gnome_gtk_GtkFontSelection_gtk_1font_1selection_1get_1preview_1entry
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkFontSelection* self;

	// convert parameter self
	self = (GtkFontSelection*) _self;

	// call function
	result = gtk_font_selection_get_preview_entry(self);

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
Java_org_gnome_gtk_GtkFontSelection_gtk_1font_1selection_1get_1preview_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkFontSelection* self;

	// convert parameter self
	self = (GtkFontSelection*) _self;

	// call function
	result = gtk_font_selection_get_preview_text(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkFontSelection_gtk_1font_1selection_1get_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkFontSelection* self;

	// convert parameter self
	self = (GtkFontSelection*) _self;

	// call function
	result = gtk_font_selection_get_size(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkFontSelection_gtk_1font_1selection_1get_1size_1entry
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkFontSelection* self;

	// convert parameter self
	self = (GtkFontSelection*) _self;

	// call function
	result = gtk_font_selection_get_size_entry(self);

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
Java_org_gnome_gtk_GtkFontSelection_gtk_1font_1selection_1get_1size_1list
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkFontSelection* self;

	// convert parameter self
	self = (GtkFontSelection*) _self;

	// call function
	result = gtk_font_selection_get_size_list(self);

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
Java_org_gnome_gtk_GtkFontSelection_gtk_1font_1selection_1set_1font_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _fontname
)
{
	gboolean result;
	jboolean _result;
	GtkFontSelection* self;
	const gchar* fontname;

	// convert parameter self
	self = (GtkFontSelection*) _self;

	// convert parameter fontname
	fontname = (const gchar*) bindings_java_getString(env, _fontname);
	if (fontname == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gtk_font_selection_set_font_name(self, fontname);

	// cleanup parameter self

	// cleanup parameter fontname
	bindings_java_releaseString(fontname);

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkFontSelection_gtk_1font_1selection_1set_1preview_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _text
)
{
	GtkFontSelection* self;
	const gchar* text;

	// convert parameter self
	self = (GtkFontSelection*) _self;

	// convert parameter text
	text = (const gchar*) bindings_java_getString(env, _text);
	if (text == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_font_selection_set_preview_text(self, text);

	// cleanup parameter self

	// cleanup parameter text
	bindings_java_releaseString(text);
}
