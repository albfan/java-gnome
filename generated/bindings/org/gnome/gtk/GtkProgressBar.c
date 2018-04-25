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
#include "org_gnome_gtk_GtkProgressBar.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkProgressBar_gtk_1progress_1bar_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkWidget* result;
	jlong _result;

	// call function
	result = gtk_progress_bar_new();

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkProgressBar_gtk_1progress_1bar_1get_1ellipsize
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoEllipsizeMode result;
	jint _result;
	GtkProgressBar* self;

	// convert parameter self
	self = (GtkProgressBar*) _self;

	// call function
	result = gtk_progress_bar_get_ellipsize(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkProgressBar_gtk_1progress_1bar_1get_1fraction
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GtkProgressBar* self;

	// convert parameter self
	self = (GtkProgressBar*) _self;

	// call function
	result = gtk_progress_bar_get_fraction(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkProgressBar_gtk_1progress_1bar_1get_1inverted
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkProgressBar* self;

	// convert parameter self
	self = (GtkProgressBar*) _self;

	// call function
	result = gtk_progress_bar_get_inverted(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkProgressBar_gtk_1progress_1bar_1get_1pulse_1step
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GtkProgressBar* self;

	// convert parameter self
	self = (GtkProgressBar*) _self;

	// call function
	result = gtk_progress_bar_get_pulse_step(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkProgressBar_gtk_1progress_1bar_1get_1show_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkProgressBar* self;

	// convert parameter self
	self = (GtkProgressBar*) _self;

	// call function
	result = gtk_progress_bar_get_show_text(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkProgressBar_gtk_1progress_1bar_1get_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkProgressBar* self;

	// convert parameter self
	self = (GtkProgressBar*) _self;

	// call function
	result = gtk_progress_bar_get_text(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkProgressBar_gtk_1progress_1bar_1pulse
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkProgressBar* self;

	// convert parameter self
	self = (GtkProgressBar*) _self;

	// call function
	gtk_progress_bar_pulse(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkProgressBar_gtk_1progress_1bar_1set_1ellipsize
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _mode
)
{
	GtkProgressBar* self;
	PangoEllipsizeMode mode;

	// convert parameter self
	self = (GtkProgressBar*) _self;

	// convert parameter mode
	mode = (PangoEllipsizeMode) _mode;

	// call function
	gtk_progress_bar_set_ellipsize(self, mode);

	// cleanup parameter self

	// cleanup parameter mode
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkProgressBar_gtk_1progress_1bar_1set_1fraction
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _fraction
)
{
	GtkProgressBar* self;
	gdouble fraction;

	// convert parameter self
	self = (GtkProgressBar*) _self;

	// convert parameter fraction
	fraction = (gdouble) _fraction;

	// call function
	gtk_progress_bar_set_fraction(self, fraction);

	// cleanup parameter self

	// cleanup parameter fraction
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkProgressBar_gtk_1progress_1bar_1set_1inverted
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _inverted
)
{
	GtkProgressBar* self;
	gboolean inverted;

	// convert parameter self
	self = (GtkProgressBar*) _self;

	// convert parameter inverted
	inverted = (gboolean) _inverted;

	// call function
	gtk_progress_bar_set_inverted(self, inverted);

	// cleanup parameter self

	// cleanup parameter inverted
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkProgressBar_gtk_1progress_1bar_1set_1pulse_1step
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _fraction
)
{
	GtkProgressBar* self;
	gdouble fraction;

	// convert parameter self
	self = (GtkProgressBar*) _self;

	// convert parameter fraction
	fraction = (gdouble) _fraction;

	// call function
	gtk_progress_bar_set_pulse_step(self, fraction);

	// cleanup parameter self

	// cleanup parameter fraction
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkProgressBar_gtk_1progress_1bar_1set_1show_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _showText
)
{
	GtkProgressBar* self;
	gboolean showText;

	// convert parameter self
	self = (GtkProgressBar*) _self;

	// convert parameter showText
	showText = (gboolean) _showText;

	// call function
	gtk_progress_bar_set_show_text(self, showText);

	// cleanup parameter self

	// cleanup parameter showText
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkProgressBar_gtk_1progress_1bar_1set_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _text
)
{
	GtkProgressBar* self;
	const gchar* text;

	// convert parameter self
	self = (GtkProgressBar*) _self;

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
	gtk_progress_bar_set_text(self, text);

	// cleanup parameter self

	// cleanup parameter text
	if (text != NULL) {
		bindings_java_releaseString(text);
	}
}
