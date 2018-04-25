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
#include "org_gnome_gtk_GtkTextView.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkWidget* result;
	jlong _result;

	// call function
	result = gtk_text_view_new();

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
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1new_1with_1buffer
(
	JNIEnv* env,
	jclass cls,
	jlong _buffer
)
{
	GtkWidget* result;
	jlong _result;
	GtkTextBuffer* buffer;

	// convert parameter buffer
	buffer = (GtkTextBuffer*) _buffer;

	// call function
	result = gtk_text_view_new_with_buffer(buffer);

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

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1add_1child_1at_1anchor
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jlong _anchor
)
{
	GtkTextView* self;
	GtkWidget* child;
	GtkTextChildAnchor* anchor;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter anchor
	anchor = (GtkTextChildAnchor*) _anchor;

	// call function
	gtk_text_view_add_child_at_anchor(self, child, anchor);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter anchor
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1add_1child_1in_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jint _whichWindow,
	jint _xpos,
	jint _ypos
)
{
	GtkTextView* self;
	GtkWidget* child;
	GtkTextWindowType whichWindow;
	gint xpos;
	gint ypos;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter whichWindow
	whichWindow = (GtkTextWindowType) _whichWindow;

	// convert parameter xpos
	xpos = (gint) _xpos;

	// convert parameter ypos
	ypos = (gint) _ypos;

	// call function
	gtk_text_view_add_child_in_window(self, child, whichWindow, xpos, ypos);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter whichWindow

	// cleanup parameter xpos

	// cleanup parameter ypos
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1backward_1display_1line
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter
)
{
	gboolean result;
	jboolean _result;
	GtkTextView* self;
	GtkTextIter* iter;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter iter
	iter = (GtkTextIter*) _iter;

	// call function
	result = gtk_text_view_backward_display_line(self, iter);

	// cleanup parameter self

	// cleanup parameter iter

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1backward_1display_1line_1start
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter
)
{
	gboolean result;
	jboolean _result;
	GtkTextView* self;
	GtkTextIter* iter;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter iter
	iter = (GtkTextIter*) _iter;

	// call function
	result = gtk_text_view_backward_display_line_start(self, iter);

	// cleanup parameter self

	// cleanup parameter iter

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1buffer_1to_1window_1coords
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _win,
	jint _bufferX,
	jint _bufferY,
	jintArray _windowX,
	jintArray _windowY
)
{
	GtkTextView* self;
	GtkTextWindowType win;
	gint bufferX;
	gint bufferY;
	gint* windowX;
	gint* windowY;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter win
	win = (GtkTextWindowType) _win;

	// convert parameter bufferX
	bufferX = (gint) _bufferX;

	// convert parameter bufferY
	bufferY = (gint) _bufferY;

	// convert parameter windowX
	if (_windowX == NULL) {
		windowX = NULL;
	} else {
		windowX = (gint*) (*env)->GetIntArrayElements(env, _windowX, NULL);
		if (windowX == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter windowY
	if (_windowY == NULL) {
		windowY = NULL;
	} else {
		windowY = (gint*) (*env)->GetIntArrayElements(env, _windowY, NULL);
		if (windowY == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_text_view_buffer_to_window_coords(self, win, bufferX, bufferY, windowX, windowY);

	// cleanup parameter self

	// cleanup parameter win

	// cleanup parameter bufferX

	// cleanup parameter bufferY

	// cleanup parameter windowX
	if (windowX != NULL) {
		(*env)->ReleaseIntArrayElements(env, _windowX, (jint*)windowX, 0);
	}

	// cleanup parameter windowY
	if (windowY != NULL) {
		(*env)->ReleaseIntArrayElements(env, _windowY, (jint*)windowY, 0);
	}
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1forward_1display_1line
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter
)
{
	gboolean result;
	jboolean _result;
	GtkTextView* self;
	GtkTextIter* iter;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter iter
	iter = (GtkTextIter*) _iter;

	// call function
	result = gtk_text_view_forward_display_line(self, iter);

	// cleanup parameter self

	// cleanup parameter iter

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1forward_1display_1line_1end
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter
)
{
	gboolean result;
	jboolean _result;
	GtkTextView* self;
	GtkTextIter* iter;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter iter
	iter = (GtkTextIter*) _iter;

	// call function
	result = gtk_text_view_forward_display_line_end(self, iter);

	// cleanup parameter self

	// cleanup parameter iter

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1get_1accepts_1tab
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkTextView* self;

	// convert parameter self
	self = (GtkTextView*) _self;

	// call function
	result = gtk_text_view_get_accepts_tab(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1get_1border_1window_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _type
)
{
	gint result;
	jint _result;
	GtkTextView* self;
	GtkTextWindowType type;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter type
	type = (GtkTextWindowType) _type;

	// call function
	result = gtk_text_view_get_border_window_size(self, type);

	// cleanup parameter self

	// cleanup parameter type

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1get_1bottom_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkTextView* self;

	// convert parameter self
	self = (GtkTextView*) _self;

	// call function
	result = gtk_text_view_get_bottom_margin(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1get_1buffer
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTextBuffer* result;
	jlong _result;
	GtkTextView* self;

	// convert parameter self
	self = (GtkTextView*) _self;

	// call function
	result = gtk_text_view_get_buffer(self);

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
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1get_1cursor_1locations
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jlong _strong,
	jlong _weak
)
{
	GtkTextView* self;
	const GtkTextIter* iter;
	GdkRectangle* strong;
	GdkRectangle* weak;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter iter
	iter = (const GtkTextIter*) _iter;

	// convert parameter strong
	strong = (GdkRectangle*) _strong;

	// convert parameter weak
	weak = (GdkRectangle*) _weak;

	// call function
	gtk_text_view_get_cursor_locations(self, iter, strong, weak);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter strong

	// cleanup parameter weak
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1get_1cursor_1visible
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkTextView* self;

	// convert parameter self
	self = (GtkTextView*) _self;

	// call function
	result = gtk_text_view_get_cursor_visible(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1get_1default_1attributes
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTextAttributes* result;
	jlong _result;
	GtkTextView* self;

	// convert parameter self
	self = (GtkTextView*) _self;

	// call function
	result = gtk_text_view_get_default_attributes(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1get_1editable
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkTextView* self;

	// convert parameter self
	self = (GtkTextView*) _self;

	// call function
	result = gtk_text_view_get_editable(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1get_1hadjustment
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAdjustment* result;
	jlong _result;
	GtkTextView* self;

	// convert parameter self
	self = (GtkTextView*) _self;

	// call function
	result = gtk_text_view_get_hadjustment(self);

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
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1get_1indent
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkTextView* self;

	// convert parameter self
	self = (GtkTextView*) _self;

	// call function
	result = gtk_text_view_get_indent(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1get_1iter_1at_1location
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jint _x,
	jint _y
)
{
	gboolean result;
	jboolean _result;
	GtkTextView* self;
	GtkTextIter* iter;
	gint x;
	gint y;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter iter
	iter = (GtkTextIter*) _iter;

	// convert parameter x
	x = (gint) _x;

	// convert parameter y
	y = (gint) _y;

	// call function
	result = gtk_text_view_get_iter_at_location(self, iter, x, y);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter x

	// cleanup parameter y

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1get_1iter_1at_1position
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jintArray _trailing,
	jint _x,
	jint _y
)
{
	gboolean result;
	jboolean _result;
	GtkTextView* self;
	GtkTextIter* iter;
	gint* trailing;
	gint x;
	gint y;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter iter
	iter = (GtkTextIter*) _iter;

	// convert parameter trailing
	if (_trailing == NULL) {
		trailing = NULL;
	} else {
		trailing = (gint*) (*env)->GetIntArrayElements(env, _trailing, NULL);
		if (trailing == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// convert parameter x
	x = (gint) _x;

	// convert parameter y
	y = (gint) _y;

	// call function
	result = gtk_text_view_get_iter_at_position(self, iter, trailing, x, y);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter trailing
	if (trailing != NULL) {
		(*env)->ReleaseIntArrayElements(env, _trailing, (jint*)trailing, 0);
	}

	// cleanup parameter x

	// cleanup parameter y

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1get_1iter_1location
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jlong _location
)
{
	GtkTextView* self;
	const GtkTextIter* iter;
	GdkRectangle* location;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter iter
	iter = (const GtkTextIter*) _iter;

	// convert parameter location
	location = (GdkRectangle*) _location;

	// call function
	gtk_text_view_get_iter_location(self, iter, location);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter location
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1get_1justification
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkJustification result;
	jint _result;
	GtkTextView* self;

	// convert parameter self
	self = (GtkTextView*) _self;

	// call function
	result = gtk_text_view_get_justification(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1get_1left_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkTextView* self;

	// convert parameter self
	self = (GtkTextView*) _self;

	// call function
	result = gtk_text_view_get_left_margin(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1get_1line_1at_1y
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _targetIter,
	jint _y,
	jintArray _lineTop
)
{
	GtkTextView* self;
	GtkTextIter* targetIter;
	gint y;
	gint* lineTop;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter targetIter
	targetIter = (GtkTextIter*) _targetIter;

	// convert parameter y
	y = (gint) _y;

	// convert parameter lineTop
	if (_lineTop == NULL) {
		lineTop = NULL;
	} else {
		lineTop = (gint*) (*env)->GetIntArrayElements(env, _lineTop, NULL);
		if (lineTop == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_text_view_get_line_at_y(self, targetIter, y, lineTop);

	// cleanup parameter self

	// cleanup parameter targetIter

	// cleanup parameter y

	// cleanup parameter lineTop
	if (lineTop != NULL) {
		(*env)->ReleaseIntArrayElements(env, _lineTop, (jint*)lineTop, 0);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1get_1line_1yrange
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jintArray _y,
	jintArray _height
)
{
	GtkTextView* self;
	const GtkTextIter* iter;
	gint* y;
	gint* height;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter iter
	iter = (const GtkTextIter*) _iter;

	// convert parameter y
	if (_y == NULL) {
		y = NULL;
	} else {
		y = (gint*) (*env)->GetIntArrayElements(env, _y, NULL);
		if (y == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter height
	if (_height == NULL) {
		height = NULL;
	} else {
		height = (gint*) (*env)->GetIntArrayElements(env, _height, NULL);
		if (height == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_text_view_get_line_yrange(self, iter, y, height);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter y
	if (y != NULL) {
		(*env)->ReleaseIntArrayElements(env, _y, (jint*)y, 0);
	}

	// cleanup parameter height
	if (height != NULL) {
		(*env)->ReleaseIntArrayElements(env, _height, (jint*)height, 0);
	}
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1get_1monospace
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkTextView* self;

	// convert parameter self
	self = (GtkTextView*) _self;

	// call function
	result = gtk_text_view_get_monospace(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1get_1overwrite
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkTextView* self;

	// convert parameter self
	self = (GtkTextView*) _self;

	// call function
	result = gtk_text_view_get_overwrite(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1get_1pixels_1above_1lines
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkTextView* self;

	// convert parameter self
	self = (GtkTextView*) _self;

	// call function
	result = gtk_text_view_get_pixels_above_lines(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1get_1pixels_1below_1lines
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkTextView* self;

	// convert parameter self
	self = (GtkTextView*) _self;

	// call function
	result = gtk_text_view_get_pixels_below_lines(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1get_1pixels_1inside_1wrap
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkTextView* self;

	// convert parameter self
	self = (GtkTextView*) _self;

	// call function
	result = gtk_text_view_get_pixels_inside_wrap(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1get_1right_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkTextView* self;

	// convert parameter self
	self = (GtkTextView*) _self;

	// call function
	result = gtk_text_view_get_right_margin(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1get_1tabs
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	PangoTabArray* result;
	jlong _result;
	GtkTextView* self;

	// convert parameter self
	self = (GtkTextView*) _self;

	// call function
	result = gtk_text_view_get_tabs(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1get_1top_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkTextView* self;

	// convert parameter self
	self = (GtkTextView*) _self;

	// call function
	result = gtk_text_view_get_top_margin(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1get_1vadjustment
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAdjustment* result;
	jlong _result;
	GtkTextView* self;

	// convert parameter self
	self = (GtkTextView*) _self;

	// call function
	result = gtk_text_view_get_vadjustment(self);

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
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1get_1visible_1rect
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _visibleRect
)
{
	GtkTextView* self;
	GdkRectangle* visibleRect;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter visibleRect
	visibleRect = (GdkRectangle*) _visibleRect;

	// call function
	gtk_text_view_get_visible_rect(self, visibleRect);

	// cleanup parameter self

	// cleanup parameter visibleRect
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1get_1window
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _win
)
{
	GdkWindow* result;
	jlong _result;
	GtkTextView* self;
	GtkTextWindowType win;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter win
	win = (GtkTextWindowType) _win;

	// call function
	result = gtk_text_view_get_window(self, win);

	// cleanup parameter self

	// cleanup parameter win

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
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1get_1window_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _window
)
{
	GtkTextWindowType result;
	jint _result;
	GtkTextView* self;
	GdkWindow* window;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter window
	window = (GdkWindow*) _window;

	// call function
	result = gtk_text_view_get_window_type(self, window);

	// cleanup parameter self

	// cleanup parameter window

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1get_1wrap_1mode
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWrapMode result;
	jint _result;
	GtkTextView* self;

	// convert parameter self
	self = (GtkTextView*) _self;

	// call function
	result = gtk_text_view_get_wrap_mode(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1im_1context_1filter_1keypress
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _event
)
{
	gboolean result;
	jboolean _result;
	GtkTextView* self;
	GdkEventKey* event;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter event
	event = (GdkEventKey*) _event;

	// call function
	result = gtk_text_view_im_context_filter_keypress(self, event);

	// cleanup parameter self

	// cleanup parameter event

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1move_1child
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child,
	jint _xpos,
	jint _ypos
)
{
	GtkTextView* self;
	GtkWidget* child;
	gint xpos;
	gint ypos;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// convert parameter xpos
	xpos = (gint) _xpos;

	// convert parameter ypos
	ypos = (gint) _ypos;

	// call function
	gtk_text_view_move_child(self, child, xpos, ypos);

	// cleanup parameter self

	// cleanup parameter child

	// cleanup parameter xpos

	// cleanup parameter ypos
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1move_1mark_1onscreen
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _mark
)
{
	gboolean result;
	jboolean _result;
	GtkTextView* self;
	GtkTextMark* mark;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter mark
	mark = (GtkTextMark*) _mark;

	// call function
	result = gtk_text_view_move_mark_onscreen(self, mark);

	// cleanup parameter self

	// cleanup parameter mark

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1move_1visually
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jint _count
)
{
	gboolean result;
	jboolean _result;
	GtkTextView* self;
	GtkTextIter* iter;
	gint count;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter iter
	iter = (GtkTextIter*) _iter;

	// convert parameter count
	count = (gint) _count;

	// call function
	result = gtk_text_view_move_visually(self, iter, count);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter count

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1place_1cursor_1onscreen
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkTextView* self;

	// convert parameter self
	self = (GtkTextView*) _self;

	// call function
	result = gtk_text_view_place_cursor_onscreen(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1reset_1cursor_1blink
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTextView* self;

	// convert parameter self
	self = (GtkTextView*) _self;

	// call function
	gtk_text_view_reset_cursor_blink(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1reset_1im_1context
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTextView* self;

	// convert parameter self
	self = (GtkTextView*) _self;

	// call function
	gtk_text_view_reset_im_context(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1scroll_1mark_1onscreen
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _mark
)
{
	GtkTextView* self;
	GtkTextMark* mark;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter mark
	mark = (GtkTextMark*) _mark;

	// call function
	gtk_text_view_scroll_mark_onscreen(self, mark);

	// cleanup parameter self

	// cleanup parameter mark
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1scroll_1to_1iter
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jdouble _withinMargin,
	jboolean _useAlign,
	jdouble _xalign,
	jdouble _yalign
)
{
	gboolean result;
	jboolean _result;
	GtkTextView* self;
	GtkTextIter* iter;
	gdouble withinMargin;
	gboolean useAlign;
	gdouble xalign;
	gdouble yalign;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter iter
	iter = (GtkTextIter*) _iter;

	// convert parameter withinMargin
	withinMargin = (gdouble) _withinMargin;

	// convert parameter useAlign
	useAlign = (gboolean) _useAlign;

	// convert parameter xalign
	xalign = (gdouble) _xalign;

	// convert parameter yalign
	yalign = (gdouble) _yalign;

	// call function
	result = gtk_text_view_scroll_to_iter(self, iter, withinMargin, useAlign, xalign, yalign);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter withinMargin

	// cleanup parameter useAlign

	// cleanup parameter xalign

	// cleanup parameter yalign

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1scroll_1to_1mark
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _mark,
	jdouble _withinMargin,
	jboolean _useAlign,
	jdouble _xalign,
	jdouble _yalign
)
{
	GtkTextView* self;
	GtkTextMark* mark;
	gdouble withinMargin;
	gboolean useAlign;
	gdouble xalign;
	gdouble yalign;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter mark
	mark = (GtkTextMark*) _mark;

	// convert parameter withinMargin
	withinMargin = (gdouble) _withinMargin;

	// convert parameter useAlign
	useAlign = (gboolean) _useAlign;

	// convert parameter xalign
	xalign = (gdouble) _xalign;

	// convert parameter yalign
	yalign = (gdouble) _yalign;

	// call function
	gtk_text_view_scroll_to_mark(self, mark, withinMargin, useAlign, xalign, yalign);

	// cleanup parameter self

	// cleanup parameter mark

	// cleanup parameter withinMargin

	// cleanup parameter useAlign

	// cleanup parameter xalign

	// cleanup parameter yalign
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1set_1accepts_1tab
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _acceptsTab
)
{
	GtkTextView* self;
	gboolean acceptsTab;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter acceptsTab
	acceptsTab = (gboolean) _acceptsTab;

	// call function
	gtk_text_view_set_accepts_tab(self, acceptsTab);

	// cleanup parameter self

	// cleanup parameter acceptsTab
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1set_1border_1window_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _type,
	jint _size
)
{
	GtkTextView* self;
	GtkTextWindowType type;
	gint size;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter type
	type = (GtkTextWindowType) _type;

	// convert parameter size
	size = (gint) _size;

	// call function
	gtk_text_view_set_border_window_size(self, type, size);

	// cleanup parameter self

	// cleanup parameter type

	// cleanup parameter size
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1set_1bottom_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _bottomMargin
)
{
	GtkTextView* self;
	gint bottomMargin;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter bottomMargin
	bottomMargin = (gint) _bottomMargin;

	// call function
	gtk_text_view_set_bottom_margin(self, bottomMargin);

	// cleanup parameter self

	// cleanup parameter bottomMargin
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1set_1buffer
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _buffer
)
{
	GtkTextView* self;
	GtkTextBuffer* buffer;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter buffer
	buffer = (GtkTextBuffer*) _buffer;

	// call function
	gtk_text_view_set_buffer(self, buffer);

	// cleanup parameter self

	// cleanup parameter buffer
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1set_1cursor_1visible
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	GtkTextView* self;
	gboolean setting;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gtk_text_view_set_cursor_visible(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1set_1editable
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	GtkTextView* self;
	gboolean setting;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gtk_text_view_set_editable(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1set_1indent
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _indent
)
{
	GtkTextView* self;
	gint indent;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter indent
	indent = (gint) _indent;

	// call function
	gtk_text_view_set_indent(self, indent);

	// cleanup parameter self

	// cleanup parameter indent
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1set_1justification
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _justification
)
{
	GtkTextView* self;
	GtkJustification justification;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter justification
	justification = (GtkJustification) _justification;

	// call function
	gtk_text_view_set_justification(self, justification);

	// cleanup parameter self

	// cleanup parameter justification
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1set_1left_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _leftMargin
)
{
	GtkTextView* self;
	gint leftMargin;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter leftMargin
	leftMargin = (gint) _leftMargin;

	// call function
	gtk_text_view_set_left_margin(self, leftMargin);

	// cleanup parameter self

	// cleanup parameter leftMargin
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1set_1monospace
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _monospace
)
{
	GtkTextView* self;
	gboolean monospace;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter monospace
	monospace = (gboolean) _monospace;

	// call function
	gtk_text_view_set_monospace(self, monospace);

	// cleanup parameter self

	// cleanup parameter monospace
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1set_1overwrite
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _overwrite
)
{
	GtkTextView* self;
	gboolean overwrite;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter overwrite
	overwrite = (gboolean) _overwrite;

	// call function
	gtk_text_view_set_overwrite(self, overwrite);

	// cleanup parameter self

	// cleanup parameter overwrite
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1set_1pixels_1above_1lines
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _pixelsAboveLines
)
{
	GtkTextView* self;
	gint pixelsAboveLines;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter pixelsAboveLines
	pixelsAboveLines = (gint) _pixelsAboveLines;

	// call function
	gtk_text_view_set_pixels_above_lines(self, pixelsAboveLines);

	// cleanup parameter self

	// cleanup parameter pixelsAboveLines
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1set_1pixels_1below_1lines
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _pixelsBelowLines
)
{
	GtkTextView* self;
	gint pixelsBelowLines;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter pixelsBelowLines
	pixelsBelowLines = (gint) _pixelsBelowLines;

	// call function
	gtk_text_view_set_pixels_below_lines(self, pixelsBelowLines);

	// cleanup parameter self

	// cleanup parameter pixelsBelowLines
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1set_1pixels_1inside_1wrap
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _pixelsInsideWrap
)
{
	GtkTextView* self;
	gint pixelsInsideWrap;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter pixelsInsideWrap
	pixelsInsideWrap = (gint) _pixelsInsideWrap;

	// call function
	gtk_text_view_set_pixels_inside_wrap(self, pixelsInsideWrap);

	// cleanup parameter self

	// cleanup parameter pixelsInsideWrap
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1set_1right_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _rightMargin
)
{
	GtkTextView* self;
	gint rightMargin;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter rightMargin
	rightMargin = (gint) _rightMargin;

	// call function
	gtk_text_view_set_right_margin(self, rightMargin);

	// cleanup parameter self

	// cleanup parameter rightMargin
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1set_1tabs
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _tabs
)
{
	GtkTextView* self;
	PangoTabArray* tabs;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter tabs
	tabs = (PangoTabArray*) _tabs;

	// call function
	gtk_text_view_set_tabs(self, tabs);

	// cleanup parameter self

	// cleanup parameter tabs
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1set_1top_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _topMargin
)
{
	GtkTextView* self;
	gint topMargin;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter topMargin
	topMargin = (gint) _topMargin;

	// call function
	gtk_text_view_set_top_margin(self, topMargin);

	// cleanup parameter self

	// cleanup parameter topMargin
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1set_1wrap_1mode
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _wrapMode
)
{
	GtkTextView* self;
	GtkWrapMode wrapMode;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter wrapMode
	wrapMode = (GtkWrapMode) _wrapMode;

	// call function
	gtk_text_view_set_wrap_mode(self, wrapMode);

	// cleanup parameter self

	// cleanup parameter wrapMode
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1starts_1display_1line
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter
)
{
	gboolean result;
	jboolean _result;
	GtkTextView* self;
	const GtkTextIter* iter;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter iter
	iter = (const GtkTextIter*) _iter;

	// call function
	result = gtk_text_view_starts_display_line(self, iter);

	// cleanup parameter self

	// cleanup parameter iter

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextView_gtk_1text_1view_1window_1to_1buffer_1coords
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _win,
	jint _windowX,
	jint _windowY,
	jintArray _bufferX,
	jintArray _bufferY
)
{
	GtkTextView* self;
	GtkTextWindowType win;
	gint windowX;
	gint windowY;
	gint* bufferX;
	gint* bufferY;

	// convert parameter self
	self = (GtkTextView*) _self;

	// convert parameter win
	win = (GtkTextWindowType) _win;

	// convert parameter windowX
	windowX = (gint) _windowX;

	// convert parameter windowY
	windowY = (gint) _windowY;

	// convert parameter bufferX
	if (_bufferX == NULL) {
		bufferX = NULL;
	} else {
		bufferX = (gint*) (*env)->GetIntArrayElements(env, _bufferX, NULL);
		if (bufferX == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter bufferY
	if (_bufferY == NULL) {
		bufferY = NULL;
	} else {
		bufferY = (gint*) (*env)->GetIntArrayElements(env, _bufferY, NULL);
		if (bufferY == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_text_view_window_to_buffer_coords(self, win, windowX, windowY, bufferX, bufferY);

	// cleanup parameter self

	// cleanup parameter win

	// cleanup parameter windowX

	// cleanup parameter windowY

	// cleanup parameter bufferX
	if (bufferX != NULL) {
		(*env)->ReleaseIntArrayElements(env, _bufferX, (jint*)bufferX, 0);
	}

	// cleanup parameter bufferY
	if (bufferY != NULL) {
		(*env)->ReleaseIntArrayElements(env, _bufferY, (jint*)bufferY, 0);
	}
}
