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
#include "org_gnome_gtk_GtkFontButton.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkFontButton_gtk_1font_1button_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkWidget* result;
	jlong _result;

	// call function
	result = gtk_font_button_new();

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
Java_org_gnome_gtk_GtkFontButton_gtk_1font_1button_1new_1with_1font
(
	JNIEnv* env,
	jclass cls,
	jstring _fontname
)
{
	GtkWidget* result;
	jlong _result;
	const gchar* fontname;

	// convert parameter fontname
	fontname = (const gchar*) bindings_java_getString(env, _fontname);
	if (fontname == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_font_button_new_with_font(fontname);

	// cleanup parameter fontname
	bindings_java_releaseString(fontname);

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkFontButton_gtk_1font_1button_1get_1font_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkFontButton* self;

	// convert parameter self
	self = (GtkFontButton*) _self;

	// call function
	result = gtk_font_button_get_font_name(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkFontButton_gtk_1font_1button_1get_1show_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkFontButton* self;

	// convert parameter self
	self = (GtkFontButton*) _self;

	// call function
	result = gtk_font_button_get_show_size(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkFontButton_gtk_1font_1button_1get_1show_1style
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkFontButton* self;

	// convert parameter self
	self = (GtkFontButton*) _self;

	// call function
	result = gtk_font_button_get_show_style(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkFontButton_gtk_1font_1button_1get_1title
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkFontButton* self;

	// convert parameter self
	self = (GtkFontButton*) _self;

	// call function
	result = gtk_font_button_get_title(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkFontButton_gtk_1font_1button_1get_1use_1font
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkFontButton* self;

	// convert parameter self
	self = (GtkFontButton*) _self;

	// call function
	result = gtk_font_button_get_use_font(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkFontButton_gtk_1font_1button_1get_1use_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkFontButton* self;

	// convert parameter self
	self = (GtkFontButton*) _self;

	// call function
	result = gtk_font_button_get_use_size(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkFontButton_gtk_1font_1button_1set_1font_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _fontname
)
{
	gboolean result;
	jboolean _result;
	GtkFontButton* self;
	const gchar* fontname;

	// convert parameter self
	self = (GtkFontButton*) _self;

	// convert parameter fontname
	fontname = (const gchar*) bindings_java_getString(env, _fontname);
	if (fontname == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gtk_font_button_set_font_name(self, fontname);

	// cleanup parameter self

	// cleanup parameter fontname
	bindings_java_releaseString(fontname);

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkFontButton_gtk_1font_1button_1set_1show_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _showSize
)
{
	GtkFontButton* self;
	gboolean showSize;

	// convert parameter self
	self = (GtkFontButton*) _self;

	// convert parameter showSize
	showSize = (gboolean) _showSize;

	// call function
	gtk_font_button_set_show_size(self, showSize);

	// cleanup parameter self

	// cleanup parameter showSize
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkFontButton_gtk_1font_1button_1set_1show_1style
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _showStyle
)
{
	GtkFontButton* self;
	gboolean showStyle;

	// convert parameter self
	self = (GtkFontButton*) _self;

	// convert parameter showStyle
	showStyle = (gboolean) _showStyle;

	// call function
	gtk_font_button_set_show_style(self, showStyle);

	// cleanup parameter self

	// cleanup parameter showStyle
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkFontButton_gtk_1font_1button_1set_1title
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _title
)
{
	GtkFontButton* self;
	const gchar* title;

	// convert parameter self
	self = (GtkFontButton*) _self;

	// convert parameter title
	title = (const gchar*) bindings_java_getString(env, _title);
	if (title == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_font_button_set_title(self, title);

	// cleanup parameter self

	// cleanup parameter title
	bindings_java_releaseString(title);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkFontButton_gtk_1font_1button_1set_1use_1font
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _useFont
)
{
	GtkFontButton* self;
	gboolean useFont;

	// convert parameter self
	self = (GtkFontButton*) _self;

	// convert parameter useFont
	useFont = (gboolean) _useFont;

	// call function
	gtk_font_button_set_use_font(self, useFont);

	// cleanup parameter self

	// cleanup parameter useFont
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkFontButton_gtk_1font_1button_1set_1use_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _useSize
)
{
	GtkFontButton* self;
	gboolean useSize;

	// convert parameter self
	self = (GtkFontButton*) _self;

	// convert parameter useSize
	useSize = (gboolean) _useSize;

	// call function
	gtk_font_button_set_use_size(self, useSize);

	// cleanup parameter self

	// cleanup parameter useSize
}
