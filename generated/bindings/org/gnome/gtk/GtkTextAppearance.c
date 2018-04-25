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
#include "org_gnome_gtk_GtkTextAppearance.h"

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTextAppearance_gtk_1text_1appearance_1get_1rise
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkTextAppearance* self;

	// convert parameter self
	self = (GtkTextAppearance*) _self;

	// get field value
	result = self->rise;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextAppearance_gtk_1text_1appearance_1set_1rise
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _rise
)
{
	GtkTextAppearance* self;
	gint rise;

	// convert parameter self
	self = (GtkTextAppearance*) _self;

	// convert parameter rise
	rise = (gint) _rise;

	// set field value
	self->rise = rise;

	// cleanup parameter self

	// cleanup parameter rise
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTextAppearance_gtk_1text_1appearance_1get_1underline
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GtkTextAppearance* self;

	// convert parameter self
	self = (GtkTextAppearance*) _self;

	// get field value
	result = self->underline;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextAppearance_gtk_1text_1appearance_1set_1underline
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _underline
)
{
	GtkTextAppearance* self;
	guint underline;

	// convert parameter self
	self = (GtkTextAppearance*) _self;

	// convert parameter underline
	underline = (guint) _underline;

	// set field value
	self->underline = underline;

	// cleanup parameter self

	// cleanup parameter underline
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTextAppearance_gtk_1text_1appearance_1get_1strikethrough
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GtkTextAppearance* self;

	// convert parameter self
	self = (GtkTextAppearance*) _self;

	// get field value
	result = self->strikethrough;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextAppearance_gtk_1text_1appearance_1set_1strikethrough
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _strikethrough
)
{
	GtkTextAppearance* self;
	guint strikethrough;

	// convert parameter self
	self = (GtkTextAppearance*) _self;

	// convert parameter strikethrough
	strikethrough = (guint) _strikethrough;

	// set field value
	self->strikethrough = strikethrough;

	// cleanup parameter self

	// cleanup parameter strikethrough
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTextAppearance_gtk_1text_1appearance_1get_1draw_1bg
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GtkTextAppearance* self;

	// convert parameter self
	self = (GtkTextAppearance*) _self;

	// get field value
	result = self->draw_bg;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextAppearance_gtk_1text_1appearance_1set_1draw_1bg
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _drawBg
)
{
	GtkTextAppearance* self;
	guint drawBg;

	// convert parameter self
	self = (GtkTextAppearance*) _self;

	// convert parameter drawBg
	drawBg = (guint) _drawBg;

	// set field value
	self->draw_bg = drawBg;

	// cleanup parameter self

	// cleanup parameter drawBg
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTextAppearance_gtk_1text_1appearance_1get_1inside_1selection
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GtkTextAppearance* self;

	// convert parameter self
	self = (GtkTextAppearance*) _self;

	// get field value
	result = self->inside_selection;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextAppearance_gtk_1text_1appearance_1set_1inside_1selection
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _insideSelection
)
{
	GtkTextAppearance* self;
	guint insideSelection;

	// convert parameter self
	self = (GtkTextAppearance*) _self;

	// convert parameter insideSelection
	insideSelection = (guint) _insideSelection;

	// set field value
	self->inside_selection = insideSelection;

	// cleanup parameter self

	// cleanup parameter insideSelection
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTextAppearance_gtk_1text_1appearance_1get_1is_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GtkTextAppearance* self;

	// convert parameter self
	self = (GtkTextAppearance*) _self;

	// get field value
	result = self->is_text;

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextAppearance_gtk_1text_1appearance_1set_1is_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _isText
)
{
	GtkTextAppearance* self;
	guint isText;

	// convert parameter self
	self = (GtkTextAppearance*) _self;

	// convert parameter isText
	isText = (guint) _isText;

	// set field value
	self->is_text = isText;

	// cleanup parameter self

	// cleanup parameter isText
}
