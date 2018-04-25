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
#include "org_gnome_gtk_GtkLabel.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1new
(
	JNIEnv* env,
	jclass cls,
	jstring _str
)
{
	GtkWidget* result;
	jlong _result;
	const gchar* str;

	// convert parameter str
	if (_str == NULL) {
		str = NULL;
	} else {
		str = (const gchar*) bindings_java_getString(env, _str);
		if (str == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_label_new(str);

	// cleanup parameter str
	if (str != NULL) {
		bindings_java_releaseString(str);
	}

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
Java_org_gnome_gtk_GtkLabel_gtk_1label_1new_1with_1mnemonic
(
	JNIEnv* env,
	jclass cls,
	jstring _str
)
{
	GtkWidget* result;
	jlong _result;
	const gchar* str;

	// convert parameter str
	if (_str == NULL) {
		str = NULL;
	} else {
		str = (const gchar*) bindings_java_getString(env, _str);
		if (str == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_label_new_with_mnemonic(str);

	// cleanup parameter str
	if (str != NULL) {
		bindings_java_releaseString(str);
	}

	// translate return value to JNI type
	_result = (jlong) result;

	// cleanup return value
	if (result != NULL) {
		bindings_java_memory_cleanup((GObject*)result, TRUE);
	}

	// and finally
	return _result;
}

JNIEXPORT jdouble JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1get_1angle
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gdouble result;
	jdouble _result;
	GtkLabel* self;

	// convert parameter self
	self = (GtkLabel*) _self;

	// call function
	result = gtk_label_get_angle(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jdouble) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1get_1attributes
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoAttrList* result;
	jlong _result;
	GtkLabel* self;

	// convert parameter self
	self = (GtkLabel*) _self;

	// call function
	result = gtk_label_get_attributes(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1get_1current_1uri
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkLabel* self;

	// convert parameter self
	self = (GtkLabel*) _self;

	// call function
	result = gtk_label_get_current_uri(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1get_1ellipsize
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoEllipsizeMode result;
	jint _result;
	GtkLabel* self;

	// convert parameter self
	self = (GtkLabel*) _self;

	// call function
	result = gtk_label_get_ellipsize(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1get_1justify
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkJustification result;
	jint _result;
	GtkLabel* self;

	// convert parameter self
	self = (GtkLabel*) _self;

	// call function
	result = gtk_label_get_justify(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1get_1label
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkLabel* self;

	// convert parameter self
	self = (GtkLabel*) _self;

	// call function
	result = gtk_label_get_label(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1get_1layout
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoLayout* result;
	jlong _result;
	GtkLabel* self;

	// convert parameter self
	self = (GtkLabel*) _self;

	// call function
	result = gtk_label_get_layout(self);

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
Java_org_gnome_gtk_GtkLabel_gtk_1label_1get_1layout_1offsets
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _x,
	jintArray _y
)
{
	GtkLabel* self;
	gint* x;
	gint* y;

	// convert parameter self
	self = (GtkLabel*) _self;

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
	gtk_label_get_layout_offsets(self, x, y);

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

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1get_1line_1wrap
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkLabel* self;

	// convert parameter self
	self = (GtkLabel*) _self;

	// call function
	result = gtk_label_get_line_wrap(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1get_1line_1wrap_1mode
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoWrapMode result;
	jint _result;
	GtkLabel* self;

	// convert parameter self
	self = (GtkLabel*) _self;

	// call function
	result = gtk_label_get_line_wrap_mode(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1get_1lines
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkLabel* self;

	// convert parameter self
	self = (GtkLabel*) _self;

	// call function
	result = gtk_label_get_lines(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1get_1max_1width_1chars
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkLabel* self;

	// convert parameter self
	self = (GtkLabel*) _self;

	// call function
	result = gtk_label_get_max_width_chars(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1get_1mnemonic_1keyval
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GtkLabel* self;

	// convert parameter self
	self = (GtkLabel*) _self;

	// call function
	result = gtk_label_get_mnemonic_keyval(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1get_1mnemonic_1widget
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkLabel* self;

	// convert parameter self
	self = (GtkLabel*) _self;

	// call function
	result = gtk_label_get_mnemonic_widget(self);

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
Java_org_gnome_gtk_GtkLabel_gtk_1label_1get_1selectable
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkLabel* self;

	// convert parameter self
	self = (GtkLabel*) _self;

	// call function
	result = gtk_label_get_selectable(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1get_1selection_1bounds
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _start,
	jintArray _end
)
{
	gboolean result;
	jboolean _result;
	GtkLabel* self;
	gint* start;
	gint* end;

	// convert parameter self
	self = (GtkLabel*) _self;

	// convert parameter start
	if (_start == NULL) {
		start = NULL;
	} else {
		start = (gint*) (*env)->GetIntArrayElements(env, _start, NULL);
		if (start == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter end
	if (_end == NULL) {
		end = NULL;
	} else {
		end = (gint*) (*env)->GetIntArrayElements(env, _end, NULL);
		if (end == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_label_get_selection_bounds(self, start, end);

	// cleanup parameter self

	// cleanup parameter start
	if (start != NULL) {
		(*env)->ReleaseIntArrayElements(env, _start, (jint*)start, 0);
	}

	// cleanup parameter end
	if (end != NULL) {
		(*env)->ReleaseIntArrayElements(env, _end, (jint*)end, 0);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1get_1single_1line_1mode
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkLabel* self;

	// convert parameter self
	self = (GtkLabel*) _self;

	// call function
	result = gtk_label_get_single_line_mode(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1get_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkLabel* self;

	// convert parameter self
	self = (GtkLabel*) _self;

	// call function
	result = gtk_label_get_text(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1get_1track_1visited_1links
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkLabel* self;

	// convert parameter self
	self = (GtkLabel*) _self;

	// call function
	result = gtk_label_get_track_visited_links(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1get_1use_1markup
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkLabel* self;

	// convert parameter self
	self = (GtkLabel*) _self;

	// call function
	result = gtk_label_get_use_markup(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1get_1use_1underline
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkLabel* self;

	// convert parameter self
	self = (GtkLabel*) _self;

	// call function
	result = gtk_label_get_use_underline(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1get_1width_1chars
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkLabel* self;

	// convert parameter self
	self = (GtkLabel*) _self;

	// call function
	result = gtk_label_get_width_chars(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jfloat JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1get_1xalign
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gfloat result;
	jfloat _result;
	GtkLabel* self;

	// convert parameter self
	self = (GtkLabel*) _self;

	// call function
	result = gtk_label_get_xalign(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jfloat) result;

	// and finally
	return _result;
}

JNIEXPORT jfloat JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1get_1yalign
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gfloat result;
	jfloat _result;
	GtkLabel* self;

	// convert parameter self
	self = (GtkLabel*) _self;

	// call function
	result = gtk_label_get_yalign(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jfloat) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1select_1region
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _startOffset,
	jint _endOffset
)
{
	GtkLabel* self;
	gint startOffset;
	gint endOffset;

	// convert parameter self
	self = (GtkLabel*) _self;

	// convert parameter startOffset
	startOffset = (gint) _startOffset;

	// convert parameter endOffset
	endOffset = (gint) _endOffset;

	// call function
	gtk_label_select_region(self, startOffset, endOffset);

	// cleanup parameter self

	// cleanup parameter startOffset

	// cleanup parameter endOffset
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1set_1angle
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jdouble _angle
)
{
	GtkLabel* self;
	gdouble angle;

	// convert parameter self
	self = (GtkLabel*) _self;

	// convert parameter angle
	angle = (gdouble) _angle;

	// call function
	gtk_label_set_angle(self, angle);

	// cleanup parameter self

	// cleanup parameter angle
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1set_1attributes
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _attrs
)
{
	GtkLabel* self;
	PangoAttrList* attrs;

	// convert parameter self
	self = (GtkLabel*) _self;

	// convert parameter attrs
	attrs = (PangoAttrList*) _attrs;

	// call function
	gtk_label_set_attributes(self, attrs);

	// cleanup parameter self

	// cleanup parameter attrs
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1set_1ellipsize
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _mode
)
{
	GtkLabel* self;
	PangoEllipsizeMode mode;

	// convert parameter self
	self = (GtkLabel*) _self;

	// convert parameter mode
	mode = (PangoEllipsizeMode) _mode;

	// call function
	gtk_label_set_ellipsize(self, mode);

	// cleanup parameter self

	// cleanup parameter mode
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1set_1justify
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _jtype
)
{
	GtkLabel* self;
	GtkJustification jtype;

	// convert parameter self
	self = (GtkLabel*) _self;

	// convert parameter jtype
	jtype = (GtkJustification) _jtype;

	// call function
	gtk_label_set_justify(self, jtype);

	// cleanup parameter self

	// cleanup parameter jtype
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1set_1label
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _str
)
{
	GtkLabel* self;
	const gchar* str;

	// convert parameter self
	self = (GtkLabel*) _self;

	// convert parameter str
	str = (const gchar*) bindings_java_getString(env, _str);
	if (str == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_label_set_label(self, str);

	// cleanup parameter self

	// cleanup parameter str
	bindings_java_releaseString(str);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1set_1line_1wrap
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _wrap
)
{
	GtkLabel* self;
	gboolean wrap;

	// convert parameter self
	self = (GtkLabel*) _self;

	// convert parameter wrap
	wrap = (gboolean) _wrap;

	// call function
	gtk_label_set_line_wrap(self, wrap);

	// cleanup parameter self

	// cleanup parameter wrap
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1set_1line_1wrap_1mode
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _wrapMode
)
{
	GtkLabel* self;
	PangoWrapMode wrapMode;

	// convert parameter self
	self = (GtkLabel*) _self;

	// convert parameter wrapMode
	wrapMode = (PangoWrapMode) _wrapMode;

	// call function
	gtk_label_set_line_wrap_mode(self, wrapMode);

	// cleanup parameter self

	// cleanup parameter wrapMode
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1set_1lines
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _lines
)
{
	GtkLabel* self;
	gint lines;

	// convert parameter self
	self = (GtkLabel*) _self;

	// convert parameter lines
	lines = (gint) _lines;

	// call function
	gtk_label_set_lines(self, lines);

	// cleanup parameter self

	// cleanup parameter lines
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1set_1markup
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _str
)
{
	GtkLabel* self;
	const gchar* str;

	// convert parameter self
	self = (GtkLabel*) _self;

	// convert parameter str
	str = (const gchar*) bindings_java_getString(env, _str);
	if (str == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_label_set_markup(self, str);

	// cleanup parameter self

	// cleanup parameter str
	bindings_java_releaseString(str);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1set_1markup_1with_1mnemonic
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _str
)
{
	GtkLabel* self;
	const gchar* str;

	// convert parameter self
	self = (GtkLabel*) _self;

	// convert parameter str
	str = (const gchar*) bindings_java_getString(env, _str);
	if (str == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_label_set_markup_with_mnemonic(self, str);

	// cleanup parameter self

	// cleanup parameter str
	bindings_java_releaseString(str);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1set_1max_1width_1chars
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _nChars
)
{
	GtkLabel* self;
	gint nChars;

	// convert parameter self
	self = (GtkLabel*) _self;

	// convert parameter nChars
	nChars = (gint) _nChars;

	// call function
	gtk_label_set_max_width_chars(self, nChars);

	// cleanup parameter self

	// cleanup parameter nChars
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1set_1mnemonic_1widget
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _widget
)
{
	GtkLabel* self;
	GtkWidget* widget;

	// convert parameter self
	self = (GtkLabel*) _self;

	// convert parameter widget
	widget = (GtkWidget*) _widget;

	// call function
	gtk_label_set_mnemonic_widget(self, widget);

	// cleanup parameter self

	// cleanup parameter widget
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1set_1pattern
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _pattern
)
{
	GtkLabel* self;
	const gchar* pattern;

	// convert parameter self
	self = (GtkLabel*) _self;

	// convert parameter pattern
	pattern = (const gchar*) bindings_java_getString(env, _pattern);
	if (pattern == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_label_set_pattern(self, pattern);

	// cleanup parameter self

	// cleanup parameter pattern
	bindings_java_releaseString(pattern);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1set_1selectable
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	GtkLabel* self;
	gboolean setting;

	// convert parameter self
	self = (GtkLabel*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gtk_label_set_selectable(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1set_1single_1line_1mode
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _singleLineMode
)
{
	GtkLabel* self;
	gboolean singleLineMode;

	// convert parameter self
	self = (GtkLabel*) _self;

	// convert parameter singleLineMode
	singleLineMode = (gboolean) _singleLineMode;

	// call function
	gtk_label_set_single_line_mode(self, singleLineMode);

	// cleanup parameter self

	// cleanup parameter singleLineMode
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1set_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _str
)
{
	GtkLabel* self;
	const gchar* str;

	// convert parameter self
	self = (GtkLabel*) _self;

	// convert parameter str
	str = (const gchar*) bindings_java_getString(env, _str);
	if (str == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_label_set_text(self, str);

	// cleanup parameter self

	// cleanup parameter str
	bindings_java_releaseString(str);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1set_1text_1with_1mnemonic
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _str
)
{
	GtkLabel* self;
	const gchar* str;

	// convert parameter self
	self = (GtkLabel*) _self;

	// convert parameter str
	str = (const gchar*) bindings_java_getString(env, _str);
	if (str == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_label_set_text_with_mnemonic(self, str);

	// cleanup parameter self

	// cleanup parameter str
	bindings_java_releaseString(str);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1set_1track_1visited_1links
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _trackLinks
)
{
	GtkLabel* self;
	gboolean trackLinks;

	// convert parameter self
	self = (GtkLabel*) _self;

	// convert parameter trackLinks
	trackLinks = (gboolean) _trackLinks;

	// call function
	gtk_label_set_track_visited_links(self, trackLinks);

	// cleanup parameter self

	// cleanup parameter trackLinks
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1set_1use_1markup
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	GtkLabel* self;
	gboolean setting;

	// convert parameter self
	self = (GtkLabel*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gtk_label_set_use_markup(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1set_1use_1underline
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	GtkLabel* self;
	gboolean setting;

	// convert parameter self
	self = (GtkLabel*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gtk_label_set_use_underline(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1set_1width_1chars
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _nChars
)
{
	GtkLabel* self;
	gint nChars;

	// convert parameter self
	self = (GtkLabel*) _self;

	// convert parameter nChars
	nChars = (gint) _nChars;

	// call function
	gtk_label_set_width_chars(self, nChars);

	// cleanup parameter self

	// cleanup parameter nChars
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1set_1xalign
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jfloat _xalign
)
{
	GtkLabel* self;
	gfloat xalign;

	// convert parameter self
	self = (GtkLabel*) _self;

	// convert parameter xalign
	xalign = (gfloat) _xalign;

	// call function
	gtk_label_set_xalign(self, xalign);

	// cleanup parameter self

	// cleanup parameter xalign
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkLabel_gtk_1label_1set_1yalign
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jfloat _yalign
)
{
	GtkLabel* self;
	gfloat yalign;

	// convert parameter self
	self = (GtkLabel*) _self;

	// convert parameter yalign
	yalign = (gfloat) _yalign;

	// call function
	gtk_label_set_yalign(self, yalign);

	// cleanup parameter self

	// cleanup parameter yalign
}
