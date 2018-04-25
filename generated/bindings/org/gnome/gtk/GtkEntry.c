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
#include "org_gnome_gtk_GtkEntry.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkWidget* result;
	jlong _result;

	// call function
	result = gtk_entry_new();

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
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1new_1with_1buffer
(
	JNIEnv* env,
	jclass cls,
	jlong _buffer
)
{
	GtkWidget* result;
	jlong _result;
	GtkEntryBuffer* buffer;

	// convert parameter buffer
	buffer = (GtkEntryBuffer*) _buffer;

	// call function
	result = gtk_entry_new_with_buffer(buffer);

	// cleanup parameter buffer

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1activates_1default
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkEntry* self;

	// convert parameter self
	self = (GtkEntry*) _self;

	// call function
	result = gtk_entry_get_activates_default(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jfloat JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1alignment
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gfloat result;
	jfloat _result;
	GtkEntry* self;

	// convert parameter self
	self = (GtkEntry*) _self;

	// call function
	result = gtk_entry_get_alignment(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jfloat) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1attributes
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoAttrList* result;
	jlong _result;
	GtkEntry* self;

	// convert parameter self
	self = (GtkEntry*) _self;

	// call function
	result = gtk_entry_get_attributes(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1buffer
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkEntryBuffer* result;
	jlong _result;
	GtkEntry* self;

	// convert parameter self
	self = (GtkEntry*) _self;

	// call function
	result = gtk_entry_get_buffer(self);

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
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1completion
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkEntryCompletion* result;
	jlong _result;
	GtkEntry* self;

	// convert parameter self
	self = (GtkEntry*) _self;

	// call function
	result = gtk_entry_get_completion(self);

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
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1current_1icon_1drag_1source
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkEntry* self;

	// convert parameter self
	self = (GtkEntry*) _self;

	// call function
	result = gtk_entry_get_current_icon_drag_source(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1cursor_1hadjustment
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAdjustment* result;
	jlong _result;
	GtkEntry* self;

	// convert parameter self
	self = (GtkEntry*) _self;

	// call function
	result = gtk_entry_get_cursor_hadjustment(self);

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
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1has_1frame
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkEntry* self;

	// convert parameter self
	self = (GtkEntry*) _self;

	// call function
	result = gtk_entry_get_has_frame(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1icon_1activatable
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _iconPos
)
{
	gboolean result;
	jboolean _result;
	GtkEntry* self;
	GtkEntryIconPosition iconPos;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter iconPos
	iconPos = (GtkEntryIconPosition) _iconPos;

	// call function
	result = gtk_entry_get_icon_activatable(self, iconPos);

	// cleanup parameter self

	// cleanup parameter iconPos

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1icon_1area
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _iconPos,
	jlong _iconArea
)
{
	GtkEntry* self;
	GtkEntryIconPosition iconPos;
	GdkRectangle* iconArea;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter iconPos
	iconPos = (GtkEntryIconPosition) _iconPos;

	// convert parameter iconArea
	iconArea = (GdkRectangle*) _iconArea;

	// call function
	gtk_entry_get_icon_area(self, iconPos, iconArea);

	// cleanup parameter self

	// cleanup parameter iconPos

	// cleanup parameter iconArea
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1icon_1at_1pos
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _x,
	jint _y
)
{
	gint result;
	jint _result;
	GtkEntry* self;
	gint x;
	gint y;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter x
	x = (gint) _x;

	// convert parameter y
	y = (gint) _y;

	// call function
	result = gtk_entry_get_icon_at_pos(self, x, y);

	// cleanup parameter self

	// cleanup parameter x

	// cleanup parameter y

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1icon_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _iconPos
)
{
	const gchar* result;
	jstring _result;
	GtkEntry* self;
	GtkEntryIconPosition iconPos;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter iconPos
	iconPos = (GtkEntryIconPosition) _iconPos;

	// call function
	result = gtk_entry_get_icon_name(self, iconPos);

	// cleanup parameter self

	// cleanup parameter iconPos

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1icon_1pixbuf
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _iconPos
)
{
	GdkPixbuf* result;
	jlong _result;
	GtkEntry* self;
	GtkEntryIconPosition iconPos;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter iconPos
	iconPos = (GtkEntryIconPosition) _iconPos;

	// call function
	result = gtk_entry_get_icon_pixbuf(self, iconPos);

	// cleanup parameter self

	// cleanup parameter iconPos

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
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1icon_1sensitive
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _iconPos
)
{
	gboolean result;
	jboolean _result;
	GtkEntry* self;
	GtkEntryIconPosition iconPos;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter iconPos
	iconPos = (GtkEntryIconPosition) _iconPos;

	// call function
	result = gtk_entry_get_icon_sensitive(self, iconPos);

	// cleanup parameter self

	// cleanup parameter iconPos

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1icon_1stock
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _iconPos
)
{
	const gchar* result;
	jstring _result;
	GtkEntry* self;
	GtkEntryIconPosition iconPos;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter iconPos
	iconPos = (GtkEntryIconPosition) _iconPos;

	// call function
	result = gtk_entry_get_icon_stock(self, iconPos);

	// cleanup parameter self

	// cleanup parameter iconPos

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1icon_1storage_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _iconPos
)
{
	GtkImageType result;
	jint _result;
	GtkEntry* self;
	GtkEntryIconPosition iconPos;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter iconPos
	iconPos = (GtkEntryIconPosition) _iconPos;

	// call function
	result = gtk_entry_get_icon_storage_type(self, iconPos);

	// cleanup parameter self

	// cleanup parameter iconPos

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1icon_1tooltip_1markup
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _iconPos
)
{
	gchar* result;
	jstring _result;
	GtkEntry* self;
	GtkEntryIconPosition iconPos;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter iconPos
	iconPos = (GtkEntryIconPosition) _iconPos;

	// call function
	result = gtk_entry_get_icon_tooltip_markup(self, iconPos);

	// cleanup parameter self

	// cleanup parameter iconPos

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
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1icon_1tooltip_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _iconPos
)
{
	gchar* result;
	jstring _result;
	GtkEntry* self;
	GtkEntryIconPosition iconPos;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter iconPos
	iconPos = (GtkEntryIconPosition) _iconPos;

	// call function
	result = gtk_entry_get_icon_tooltip_text(self, iconPos);

	// cleanup parameter self

	// cleanup parameter iconPos

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
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1inner_1border
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const GtkBorder* result;
	jlong _result;
	GtkEntry* self;

	// convert parameter self
	self = (GtkEntry*) _self;

	// call function
	result = gtk_entry_get_inner_border(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1invisible_1char
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gunichar result;
	jint _result;
	GtkEntry* self;

	// convert parameter self
	self = (GtkEntry*) _self;

	// call function
	result = gtk_entry_get_invisible_char(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1layout
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoLayout* result;
	jlong _result;
	GtkEntry* self;

	// convert parameter self
	self = (GtkEntry*) _self;

	// call function
	result = gtk_entry_get_layout(self);

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
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1layout_1offsets
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _x,
	jintArray _y
)
{
	GtkEntry* self;
	gint* x;
	gint* y;

	// convert parameter self
	self = (GtkEntry*) _self;

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
	gtk_entry_get_layout_offsets(self, x, y);

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

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1max_1length
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkEntry* self;

	// convert parameter self
	self = (GtkEntry*) _self;

	// call function
	result = gtk_entry_get_max_length(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1max_1width_1chars
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkEntry* self;

	// convert parameter self
	self = (GtkEntry*) _self;

	// call function
	result = gtk_entry_get_max_width_chars(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1overwrite_1mode
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkEntry* self;

	// convert parameter self
	self = (GtkEntry*) _self;

	// call function
	result = gtk_entry_get_overwrite_mode(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1placeholder_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkEntry* self;

	// convert parameter self
	self = (GtkEntry*) _self;

	// call function
	result = gtk_entry_get_placeholder_text(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1progress_1fraction
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GtkEntry* self;

	// convert parameter self
	self = (GtkEntry*) _self;

	// call function
	result = gtk_entry_get_progress_fraction(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1progress_1pulse_1step
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GtkEntry* self;

	// convert parameter self
	self = (GtkEntry*) _self;

	// call function
	result = gtk_entry_get_progress_pulse_step(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1tabs
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoTabArray* result;
	jlong _result;
	GtkEntry* self;

	// convert parameter self
	self = (GtkEntry*) _self;

	// call function
	result = gtk_entry_get_tabs(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkEntry* self;

	// convert parameter self
	self = (GtkEntry*) _self;

	// call function
	result = gtk_entry_get_text(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1text_1area
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _textArea
)
{
	GtkEntry* self;
	GdkRectangle* textArea;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter textArea
	textArea = (GdkRectangle*) _textArea;

	// call function
	gtk_entry_get_text_area(self, textArea);

	// cleanup parameter self

	// cleanup parameter textArea
}

JNIEXPORT jchar JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1text_1length
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint16 result;
	jchar _result;
	GtkEntry* self;

	// convert parameter self
	self = (GtkEntry*) _self;

	// call function
	result = gtk_entry_get_text_length(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jchar) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1visibility
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkEntry* self;

	// convert parameter self
	self = (GtkEntry*) _self;

	// call function
	result = gtk_entry_get_visibility(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1get_1width_1chars
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkEntry* self;

	// convert parameter self
	self = (GtkEntry*) _self;

	// call function
	result = gtk_entry_get_width_chars(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1grab_1focus_1without_1selecting
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkEntry* self;

	// convert parameter self
	self = (GtkEntry*) _self;

	// call function
	gtk_entry_grab_focus_without_selecting(self);

	// cleanup parameter self
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1im_1context_1filter_1keypress
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _event
)
{
	gboolean result;
	jboolean _result;
	GtkEntry* self;
	GdkEventKey* event;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter event
	event = (GdkEventKey*) _event;

	// call function
	result = gtk_entry_im_context_filter_keypress(self, event);

	// cleanup parameter self

	// cleanup parameter event

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1layout_1index_1to_1text_1index
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _layoutIndex
)
{
	gint result;
	jint _result;
	GtkEntry* self;
	gint layoutIndex;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter layoutIndex
	layoutIndex = (gint) _layoutIndex;

	// call function
	result = gtk_entry_layout_index_to_text_index(self, layoutIndex);

	// cleanup parameter self

	// cleanup parameter layoutIndex

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1progress_1pulse
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkEntry* self;

	// convert parameter self
	self = (GtkEntry*) _self;

	// call function
	gtk_entry_progress_pulse(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1reset_1im_1context
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkEntry* self;

	// convert parameter self
	self = (GtkEntry*) _self;

	// call function
	gtk_entry_reset_im_context(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1set_1activates_1default
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	GtkEntry* self;
	gboolean setting;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gtk_entry_set_activates_default(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1set_1alignment
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jfloat _xalign
)
{
	GtkEntry* self;
	gfloat xalign;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter xalign
	xalign = (gfloat) _xalign;

	// call function
	gtk_entry_set_alignment(self, xalign);

	// cleanup parameter self

	// cleanup parameter xalign
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1set_1attributes
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _attrs
)
{
	GtkEntry* self;
	PangoAttrList* attrs;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter attrs
	attrs = (PangoAttrList*) _attrs;

	// call function
	gtk_entry_set_attributes(self, attrs);

	// cleanup parameter self

	// cleanup parameter attrs
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1set_1buffer
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _buffer
)
{
	GtkEntry* self;
	GtkEntryBuffer* buffer;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter buffer
	buffer = (GtkEntryBuffer*) _buffer;

	// call function
	gtk_entry_set_buffer(self, buffer);

	// cleanup parameter self

	// cleanup parameter buffer
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1set_1completion
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _completion
)
{
	GtkEntry* self;
	GtkEntryCompletion* completion;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter completion
	completion = (GtkEntryCompletion*) _completion;

	// call function
	gtk_entry_set_completion(self, completion);

	// cleanup parameter self

	// cleanup parameter completion
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1set_1cursor_1hadjustment
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _adjustment
)
{
	GtkEntry* self;
	GtkAdjustment* adjustment;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter adjustment
	adjustment = (GtkAdjustment*) _adjustment;

	// call function
	gtk_entry_set_cursor_hadjustment(self, adjustment);

	// cleanup parameter self

	// cleanup parameter adjustment
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1set_1has_1frame
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	GtkEntry* self;
	gboolean setting;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gtk_entry_set_has_frame(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1set_1icon_1activatable
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _iconPos,
	jboolean _activatable
)
{
	GtkEntry* self;
	GtkEntryIconPosition iconPos;
	gboolean activatable;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter iconPos
	iconPos = (GtkEntryIconPosition) _iconPos;

	// convert parameter activatable
	activatable = (gboolean) _activatable;

	// call function
	gtk_entry_set_icon_activatable(self, iconPos, activatable);

	// cleanup parameter self

	// cleanup parameter iconPos

	// cleanup parameter activatable
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1set_1icon_1from_1icon_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _iconPos,
	jstring _iconName
)
{
	GtkEntry* self;
	GtkEntryIconPosition iconPos;
	const gchar* iconName;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter iconPos
	iconPos = (GtkEntryIconPosition) _iconPos;

	// convert parameter iconName
	if (_iconName == NULL) {
		iconName = NULL;
	} else {
		iconName = (const gchar*) bindings_java_getString(env, _iconName);
		if (iconName == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_entry_set_icon_from_icon_name(self, iconPos, iconName);

	// cleanup parameter self

	// cleanup parameter iconPos

	// cleanup parameter iconName
	if (iconName != NULL) {
		bindings_java_releaseString(iconName);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1set_1icon_1from_1pixbuf
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _iconPos,
	jlong _pixbuf
)
{
	GtkEntry* self;
	GtkEntryIconPosition iconPos;
	GdkPixbuf* pixbuf;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter iconPos
	iconPos = (GtkEntryIconPosition) _iconPos;

	// convert parameter pixbuf
	pixbuf = (GdkPixbuf*) _pixbuf;

	// call function
	gtk_entry_set_icon_from_pixbuf(self, iconPos, pixbuf);

	// cleanup parameter self

	// cleanup parameter iconPos

	// cleanup parameter pixbuf
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1set_1icon_1from_1stock
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _iconPos,
	jstring _stockId
)
{
	GtkEntry* self;
	GtkEntryIconPosition iconPos;
	const gchar* stockId;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter iconPos
	iconPos = (GtkEntryIconPosition) _iconPos;

	// convert parameter stockId
	if (_stockId == NULL) {
		stockId = NULL;
	} else {
		stockId = (const gchar*) bindings_java_getString(env, _stockId);
		if (stockId == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_entry_set_icon_from_stock(self, iconPos, stockId);

	// cleanup parameter self

	// cleanup parameter iconPos

	// cleanup parameter stockId
	if (stockId != NULL) {
		bindings_java_releaseString(stockId);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1set_1icon_1sensitive
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _iconPos,
	jboolean _sensitive
)
{
	GtkEntry* self;
	GtkEntryIconPosition iconPos;
	gboolean sensitive;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter iconPos
	iconPos = (GtkEntryIconPosition) _iconPos;

	// convert parameter sensitive
	sensitive = (gboolean) _sensitive;

	// call function
	gtk_entry_set_icon_sensitive(self, iconPos, sensitive);

	// cleanup parameter self

	// cleanup parameter iconPos

	// cleanup parameter sensitive
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1set_1icon_1tooltip_1markup
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _iconPos,
	jstring _tooltip
)
{
	GtkEntry* self;
	GtkEntryIconPosition iconPos;
	const gchar* tooltip;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter iconPos
	iconPos = (GtkEntryIconPosition) _iconPos;

	// convert parameter tooltip
	if (_tooltip == NULL) {
		tooltip = NULL;
	} else {
		tooltip = (const gchar*) bindings_java_getString(env, _tooltip);
		if (tooltip == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_entry_set_icon_tooltip_markup(self, iconPos, tooltip);

	// cleanup parameter self

	// cleanup parameter iconPos

	// cleanup parameter tooltip
	if (tooltip != NULL) {
		bindings_java_releaseString(tooltip);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1set_1icon_1tooltip_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _iconPos,
	jstring _tooltip
)
{
	GtkEntry* self;
	GtkEntryIconPosition iconPos;
	const gchar* tooltip;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter iconPos
	iconPos = (GtkEntryIconPosition) _iconPos;

	// convert parameter tooltip
	if (_tooltip == NULL) {
		tooltip = NULL;
	} else {
		tooltip = (const gchar*) bindings_java_getString(env, _tooltip);
		if (tooltip == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_entry_set_icon_tooltip_text(self, iconPos, tooltip);

	// cleanup parameter self

	// cleanup parameter iconPos

	// cleanup parameter tooltip
	if (tooltip != NULL) {
		bindings_java_releaseString(tooltip);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1set_1inner_1border
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _border
)
{
	GtkEntry* self;
	const GtkBorder* border;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter border
	border = (const GtkBorder*) _border;

	// call function
	gtk_entry_set_inner_border(self, border);

	// cleanup parameter self

	// cleanup parameter border
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1set_1invisible_1char
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _ch
)
{
	GtkEntry* self;
	gunichar ch;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter ch
	ch = (gunichar) _ch;

	// call function
	gtk_entry_set_invisible_char(self, ch);

	// cleanup parameter self

	// cleanup parameter ch
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1set_1max_1length
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _max
)
{
	GtkEntry* self;
	gint max;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter max
	max = (gint) _max;

	// call function
	gtk_entry_set_max_length(self, max);

	// cleanup parameter self

	// cleanup parameter max
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1set_1max_1width_1chars
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _nChars
)
{
	GtkEntry* self;
	gint nChars;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter nChars
	nChars = (gint) _nChars;

	// call function
	gtk_entry_set_max_width_chars(self, nChars);

	// cleanup parameter self

	// cleanup parameter nChars
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1set_1overwrite_1mode
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _overwrite
)
{
	GtkEntry* self;
	gboolean overwrite;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter overwrite
	overwrite = (gboolean) _overwrite;

	// call function
	gtk_entry_set_overwrite_mode(self, overwrite);

	// cleanup parameter self

	// cleanup parameter overwrite
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1set_1placeholder_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _text
)
{
	GtkEntry* self;
	const gchar* text;

	// convert parameter self
	self = (GtkEntry*) _self;

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
	gtk_entry_set_placeholder_text(self, text);

	// cleanup parameter self

	// cleanup parameter text
	if (text != NULL) {
		bindings_java_releaseString(text);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1set_1progress_1fraction
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _fraction
)
{
	GtkEntry* self;
	gdouble fraction;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter fraction
	fraction = (gdouble) _fraction;

	// call function
	gtk_entry_set_progress_fraction(self, fraction);

	// cleanup parameter self

	// cleanup parameter fraction
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1set_1progress_1pulse_1step
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _fraction
)
{
	GtkEntry* self;
	gdouble fraction;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter fraction
	fraction = (gdouble) _fraction;

	// call function
	gtk_entry_set_progress_pulse_step(self, fraction);

	// cleanup parameter self

	// cleanup parameter fraction
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1set_1tabs
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _tabs
)
{
	GtkEntry* self;
	PangoTabArray* tabs;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter tabs
	tabs = (PangoTabArray*) _tabs;

	// call function
	gtk_entry_set_tabs(self, tabs);

	// cleanup parameter self

	// cleanup parameter tabs
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1set_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _text
)
{
	GtkEntry* self;
	const gchar* text;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter text
	text = (const gchar*) bindings_java_getString(env, _text);
	if (text == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_entry_set_text(self, text);

	// cleanup parameter self

	// cleanup parameter text
	bindings_java_releaseString(text);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1set_1visibility
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _visible
)
{
	GtkEntry* self;
	gboolean visible;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter visible
	visible = (gboolean) _visible;

	// call function
	gtk_entry_set_visibility(self, visible);

	// cleanup parameter self

	// cleanup parameter visible
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1set_1width_1chars
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _nChars
)
{
	GtkEntry* self;
	gint nChars;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter nChars
	nChars = (gint) _nChars;

	// call function
	gtk_entry_set_width_chars(self, nChars);

	// cleanup parameter self

	// cleanup parameter nChars
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1text_1index_1to_1layout_1index
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _textIndex
)
{
	gint result;
	jint _result;
	GtkEntry* self;
	gint textIndex;

	// convert parameter self
	self = (GtkEntry*) _self;

	// convert parameter textIndex
	textIndex = (gint) _textIndex;

	// call function
	result = gtk_entry_text_index_to_layout_index(self, textIndex);

	// cleanup parameter self

	// cleanup parameter textIndex

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkEntry_gtk_1entry_1unset_1invisible_1char
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkEntry* self;

	// convert parameter self
	self = (GtkEntry*) _self;

	// call function
	gtk_entry_unset_invisible_char(self);

	// cleanup parameter self
}
