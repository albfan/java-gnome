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
#include "org_gnome_gtk_GtkTextBuffer.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1new
(
	JNIEnv* env,
	jclass cls,
	jlong _table
)
{
	GtkTextBuffer* result;
	jlong _result;
	GtkTextTagTable* table;

	// convert parameter table
	table = (GtkTextTagTable*) _table;

	// call function
	result = gtk_text_buffer_new(table);

	// cleanup parameter table

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
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1add_1mark
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _mark,
	jlong _where
)
{
	GtkTextBuffer* self;
	GtkTextMark* mark;
	const GtkTextIter* where;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter mark
	mark = (GtkTextMark*) _mark;

	// convert parameter where
	where = (const GtkTextIter*) _where;

	// call function
	gtk_text_buffer_add_mark(self, mark, where);

	// cleanup parameter self

	// cleanup parameter mark

	// cleanup parameter where
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1add_1selection_1clipboard
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _clipboard
)
{
	GtkTextBuffer* self;
	GtkClipboard* clipboard;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter clipboard
	clipboard = (GtkClipboard*) _clipboard;

	// call function
	gtk_text_buffer_add_selection_clipboard(self, clipboard);

	// cleanup parameter self

	// cleanup parameter clipboard
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1apply_1tag
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _tag,
	jlong _start,
	jlong _end
)
{
	GtkTextBuffer* self;
	GtkTextTag* tag;
	const GtkTextIter* start;
	const GtkTextIter* end;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter tag
	tag = (GtkTextTag*) _tag;

	// convert parameter start
	start = (const GtkTextIter*) _start;

	// convert parameter end
	end = (const GtkTextIter*) _end;

	// call function
	gtk_text_buffer_apply_tag(self, tag, start, end);

	// cleanup parameter self

	// cleanup parameter tag

	// cleanup parameter start

	// cleanup parameter end
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1apply_1tag_1by_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _name,
	jlong _start,
	jlong _end
)
{
	GtkTextBuffer* self;
	const gchar* name;
	const GtkTextIter* start;
	const GtkTextIter* end;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter name
	name = (const gchar*) bindings_java_getString(env, _name);
	if (name == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter start
	start = (const GtkTextIter*) _start;

	// convert parameter end
	end = (const GtkTextIter*) _end;

	// call function
	gtk_text_buffer_apply_tag_by_name(self, name, start, end);

	// cleanup parameter self

	// cleanup parameter name
	bindings_java_releaseString(name);

	// cleanup parameter start

	// cleanup parameter end
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1backspace
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jboolean _interactive,
	jboolean _defaultEditable
)
{
	gboolean result;
	jboolean _result;
	GtkTextBuffer* self;
	GtkTextIter* iter;
	gboolean interactive;
	gboolean defaultEditable;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter iter
	iter = (GtkTextIter*) _iter;

	// convert parameter interactive
	interactive = (gboolean) _interactive;

	// convert parameter defaultEditable
	defaultEditable = (gboolean) _defaultEditable;

	// call function
	result = gtk_text_buffer_backspace(self, iter, interactive, defaultEditable);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter interactive

	// cleanup parameter defaultEditable

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1begin_1user_1action
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTextBuffer* self;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// call function
	gtk_text_buffer_begin_user_action(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1copy_1clipboard
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _clipboard
)
{
	GtkTextBuffer* self;
	GtkClipboard* clipboard;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter clipboard
	clipboard = (GtkClipboard*) _clipboard;

	// call function
	gtk_text_buffer_copy_clipboard(self, clipboard);

	// cleanup parameter self

	// cleanup parameter clipboard
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1create_1child_1anchor
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter
)
{
	GtkTextChildAnchor* result;
	jlong _result;
	GtkTextBuffer* self;
	GtkTextIter* iter;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter iter
	iter = (GtkTextIter*) _iter;

	// call function
	result = gtk_text_buffer_create_child_anchor(self, iter);

	// cleanup parameter self

	// cleanup parameter iter

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
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1create_1mark
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _markName,
	jlong _where,
	jboolean _leftGravity
)
{
	GtkTextMark* result;
	jlong _result;
	GtkTextBuffer* self;
	const gchar* markName;
	const GtkTextIter* where;
	gboolean leftGravity;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter markName
	if (_markName == NULL) {
		markName = NULL;
	} else {
		markName = (const gchar*) bindings_java_getString(env, _markName);
		if (markName == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// convert parameter where
	where = (const GtkTextIter*) _where;

	// convert parameter leftGravity
	leftGravity = (gboolean) _leftGravity;

	// call function
	result = gtk_text_buffer_create_mark(self, markName, where, leftGravity);

	// cleanup parameter self

	// cleanup parameter markName
	if (markName != NULL) {
		bindings_java_releaseString(markName);
	}

	// cleanup parameter where

	// cleanup parameter leftGravity

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
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1create_1tag
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _tagName,
	jstring _firstPropertyName
)
{
	GtkTextTag* result;
	jlong _result;
	GtkTextBuffer* self;
	const gchar* tagName;
	const gchar* firstPropertyName;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter tagName
	if (_tagName == NULL) {
		tagName = NULL;
	} else {
		tagName = (const gchar*) bindings_java_getString(env, _tagName);
		if (tagName == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// convert parameter firstPropertyName
	if (_firstPropertyName == NULL) {
		firstPropertyName = NULL;
	} else {
		firstPropertyName = (const gchar*) bindings_java_getString(env, _firstPropertyName);
		if (firstPropertyName == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_text_buffer_create_tag(self, tagName, firstPropertyName, NULL);

	// cleanup parameter self

	// cleanup parameter tagName
	if (tagName != NULL) {
		bindings_java_releaseString(tagName);
	}

	// cleanup parameter firstPropertyName
	if (firstPropertyName != NULL) {
		bindings_java_releaseString(firstPropertyName);
	}

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
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1cut_1clipboard
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _clipboard,
	jboolean _defaultEditable
)
{
	GtkTextBuffer* self;
	GtkClipboard* clipboard;
	gboolean defaultEditable;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter clipboard
	clipboard = (GtkClipboard*) _clipboard;

	// convert parameter defaultEditable
	defaultEditable = (gboolean) _defaultEditable;

	// call function
	gtk_text_buffer_cut_clipboard(self, clipboard, defaultEditable);

	// cleanup parameter self

	// cleanup parameter clipboard

	// cleanup parameter defaultEditable
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1delete
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _start,
	jlong _end
)
{
	GtkTextBuffer* self;
	GtkTextIter* start;
	GtkTextIter* end;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter start
	start = (GtkTextIter*) _start;

	// convert parameter end
	end = (GtkTextIter*) _end;

	// call function
	gtk_text_buffer_delete(self, start, end);

	// cleanup parameter self

	// cleanup parameter start

	// cleanup parameter end
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1delete_1interactive
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _startIter,
	jlong _endIter,
	jboolean _defaultEditable
)
{
	gboolean result;
	jboolean _result;
	GtkTextBuffer* self;
	GtkTextIter* startIter;
	GtkTextIter* endIter;
	gboolean defaultEditable;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter startIter
	startIter = (GtkTextIter*) _startIter;

	// convert parameter endIter
	endIter = (GtkTextIter*) _endIter;

	// convert parameter defaultEditable
	defaultEditable = (gboolean) _defaultEditable;

	// call function
	result = gtk_text_buffer_delete_interactive(self, startIter, endIter, defaultEditable);

	// cleanup parameter self

	// cleanup parameter startIter

	// cleanup parameter endIter

	// cleanup parameter defaultEditable

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1delete_1mark
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _mark
)
{
	GtkTextBuffer* self;
	GtkTextMark* mark;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter mark
	mark = (GtkTextMark*) _mark;

	// call function
	gtk_text_buffer_delete_mark(self, mark);

	// cleanup parameter self

	// cleanup parameter mark
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1delete_1mark_1by_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _name
)
{
	GtkTextBuffer* self;
	const gchar* name;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter name
	name = (const gchar*) bindings_java_getString(env, _name);
	if (name == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_text_buffer_delete_mark_by_name(self, name);

	// cleanup parameter self

	// cleanup parameter name
	bindings_java_releaseString(name);
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1delete_1selection
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _interactive,
	jboolean _defaultEditable
)
{
	gboolean result;
	jboolean _result;
	GtkTextBuffer* self;
	gboolean interactive;
	gboolean defaultEditable;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter interactive
	interactive = (gboolean) _interactive;

	// convert parameter defaultEditable
	defaultEditable = (gboolean) _defaultEditable;

	// call function
	result = gtk_text_buffer_delete_selection(self, interactive, defaultEditable);

	// cleanup parameter self

	// cleanup parameter interactive

	// cleanup parameter defaultEditable

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1end_1user_1action
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTextBuffer* self;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// call function
	gtk_text_buffer_end_user_action(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1get_1bounds
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _start,
	jlong _end
)
{
	GtkTextBuffer* self;
	GtkTextIter* start;
	GtkTextIter* end;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter start
	start = (GtkTextIter*) _start;

	// convert parameter end
	end = (GtkTextIter*) _end;

	// call function
	gtk_text_buffer_get_bounds(self, start, end);

	// cleanup parameter self

	// cleanup parameter start

	// cleanup parameter end
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1get_1char_1count
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkTextBuffer* self;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// call function
	result = gtk_text_buffer_get_char_count(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1get_1end_1iter
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter
)
{
	GtkTextBuffer* self;
	GtkTextIter* iter;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter iter
	iter = (GtkTextIter*) _iter;

	// call function
	gtk_text_buffer_get_end_iter(self, iter);

	// cleanup parameter self

	// cleanup parameter iter
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1get_1has_1selection
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkTextBuffer* self;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// call function
	result = gtk_text_buffer_get_has_selection(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1get_1insert
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTextMark* result;
	jlong _result;
	GtkTextBuffer* self;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// call function
	result = gtk_text_buffer_get_insert(self);

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
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1get_1iter_1at_1child_1anchor
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jlong _anchor
)
{
	GtkTextBuffer* self;
	GtkTextIter* iter;
	GtkTextChildAnchor* anchor;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter iter
	iter = (GtkTextIter*) _iter;

	// convert parameter anchor
	anchor = (GtkTextChildAnchor*) _anchor;

	// call function
	gtk_text_buffer_get_iter_at_child_anchor(self, iter, anchor);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter anchor
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1get_1iter_1at_1line
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jint _lineNumber
)
{
	GtkTextBuffer* self;
	GtkTextIter* iter;
	gint lineNumber;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter iter
	iter = (GtkTextIter*) _iter;

	// convert parameter lineNumber
	lineNumber = (gint) _lineNumber;

	// call function
	gtk_text_buffer_get_iter_at_line(self, iter, lineNumber);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter lineNumber
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1get_1iter_1at_1line_1index
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jint _lineNumber,
	jint _byteIndex
)
{
	GtkTextBuffer* self;
	GtkTextIter* iter;
	gint lineNumber;
	gint byteIndex;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter iter
	iter = (GtkTextIter*) _iter;

	// convert parameter lineNumber
	lineNumber = (gint) _lineNumber;

	// convert parameter byteIndex
	byteIndex = (gint) _byteIndex;

	// call function
	gtk_text_buffer_get_iter_at_line_index(self, iter, lineNumber, byteIndex);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter lineNumber

	// cleanup parameter byteIndex
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1get_1iter_1at_1line_1offset
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jint _lineNumber,
	jint _charOffset
)
{
	GtkTextBuffer* self;
	GtkTextIter* iter;
	gint lineNumber;
	gint charOffset;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter iter
	iter = (GtkTextIter*) _iter;

	// convert parameter lineNumber
	lineNumber = (gint) _lineNumber;

	// convert parameter charOffset
	charOffset = (gint) _charOffset;

	// call function
	gtk_text_buffer_get_iter_at_line_offset(self, iter, lineNumber, charOffset);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter lineNumber

	// cleanup parameter charOffset
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1get_1iter_1at_1mark
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jlong _mark
)
{
	GtkTextBuffer* self;
	GtkTextIter* iter;
	GtkTextMark* mark;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter iter
	iter = (GtkTextIter*) _iter;

	// convert parameter mark
	mark = (GtkTextMark*) _mark;

	// call function
	gtk_text_buffer_get_iter_at_mark(self, iter, mark);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter mark
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1get_1iter_1at_1offset
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jint _charOffset
)
{
	GtkTextBuffer* self;
	GtkTextIter* iter;
	gint charOffset;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter iter
	iter = (GtkTextIter*) _iter;

	// convert parameter charOffset
	charOffset = (gint) _charOffset;

	// call function
	gtk_text_buffer_get_iter_at_offset(self, iter, charOffset);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter charOffset
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1get_1line_1count
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkTextBuffer* self;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// call function
	result = gtk_text_buffer_get_line_count(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1get_1mark
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _name
)
{
	GtkTextMark* result;
	jlong _result;
	GtkTextBuffer* self;
	const gchar* name;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter name
	name = (const gchar*) bindings_java_getString(env, _name);
	if (name == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_text_buffer_get_mark(self, name);

	// cleanup parameter self

	// cleanup parameter name
	bindings_java_releaseString(name);

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
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1get_1modified
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkTextBuffer* self;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// call function
	result = gtk_text_buffer_get_modified(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1get_1selection_1bound
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTextMark* result;
	jlong _result;
	GtkTextBuffer* self;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// call function
	result = gtk_text_buffer_get_selection_bound(self);

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
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1get_1selection_1bounds
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _start,
	jlong _end
)
{
	gboolean result;
	jboolean _result;
	GtkTextBuffer* self;
	GtkTextIter* start;
	GtkTextIter* end;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter start
	start = (GtkTextIter*) _start;

	// convert parameter end
	end = (GtkTextIter*) _end;

	// call function
	result = gtk_text_buffer_get_selection_bounds(self, start, end);

	// cleanup parameter self

	// cleanup parameter start

	// cleanup parameter end

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1get_1slice
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _start,
	jlong _end,
	jboolean _includeHiddenChars
)
{
	gchar* result;
	jstring _result;
	GtkTextBuffer* self;
	const GtkTextIter* start;
	const GtkTextIter* end;
	gboolean includeHiddenChars;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter start
	start = (const GtkTextIter*) _start;

	// convert parameter end
	end = (const GtkTextIter*) _end;

	// convert parameter includeHiddenChars
	includeHiddenChars = (gboolean) _includeHiddenChars;

	// call function
	result = gtk_text_buffer_get_slice(self, start, end, includeHiddenChars);

	// cleanup parameter self

	// cleanup parameter start

	// cleanup parameter end

	// cleanup parameter includeHiddenChars

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// cleanup return value
	if (result != NULL) {
		g_free(result);
	}

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1get_1start_1iter
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter
)
{
	GtkTextBuffer* self;
	GtkTextIter* iter;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter iter
	iter = (GtkTextIter*) _iter;

	// call function
	gtk_text_buffer_get_start_iter(self, iter);

	// cleanup parameter self

	// cleanup parameter iter
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1get_1tag_1table
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTextTagTable* result;
	jlong _result;
	GtkTextBuffer* self;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// call function
	result = gtk_text_buffer_get_tag_table(self);

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
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1get_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _start,
	jlong _end,
	jboolean _includeHiddenChars
)
{
	gchar* result;
	jstring _result;
	GtkTextBuffer* self;
	const GtkTextIter* start;
	const GtkTextIter* end;
	gboolean includeHiddenChars;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter start
	start = (const GtkTextIter*) _start;

	// convert parameter end
	end = (const GtkTextIter*) _end;

	// convert parameter includeHiddenChars
	includeHiddenChars = (gboolean) _includeHiddenChars;

	// call function
	result = gtk_text_buffer_get_text(self, start, end, includeHiddenChars);

	// cleanup parameter self

	// cleanup parameter start

	// cleanup parameter end

	// cleanup parameter includeHiddenChars

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// cleanup return value
	if (result != NULL) {
		g_free(result);
	}

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1insert
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jstring _text,
	jint _len
)
{
	GtkTextBuffer* self;
	GtkTextIter* iter;
	const gchar* text;
	gint len;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter iter
	iter = (GtkTextIter*) _iter;

	// convert parameter text
	text = (const gchar*) bindings_java_getString(env, _text);
	if (text == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter len
	len = (gint) _len;

	// call function
	gtk_text_buffer_insert(self, iter, text, len);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter text
	bindings_java_releaseString(text);

	// cleanup parameter len
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1insert_1at_1cursor
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _text,
	jint _len
)
{
	GtkTextBuffer* self;
	const gchar* text;
	gint len;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter text
	text = (const gchar*) bindings_java_getString(env, _text);
	if (text == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter len
	len = (gint) _len;

	// call function
	gtk_text_buffer_insert_at_cursor(self, text, len);

	// cleanup parameter self

	// cleanup parameter text
	bindings_java_releaseString(text);

	// cleanup parameter len
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1insert_1child_1anchor
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jlong _anchor
)
{
	GtkTextBuffer* self;
	GtkTextIter* iter;
	GtkTextChildAnchor* anchor;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter iter
	iter = (GtkTextIter*) _iter;

	// convert parameter anchor
	anchor = (GtkTextChildAnchor*) _anchor;

	// call function
	gtk_text_buffer_insert_child_anchor(self, iter, anchor);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter anchor
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1insert_1interactive
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jstring _text,
	jint _len,
	jboolean _defaultEditable
)
{
	gboolean result;
	jboolean _result;
	GtkTextBuffer* self;
	GtkTextIter* iter;
	const gchar* text;
	gint len;
	gboolean defaultEditable;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter iter
	iter = (GtkTextIter*) _iter;

	// convert parameter text
	text = (const gchar*) bindings_java_getString(env, _text);
	if (text == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// convert parameter len
	len = (gint) _len;

	// convert parameter defaultEditable
	defaultEditable = (gboolean) _defaultEditable;

	// call function
	result = gtk_text_buffer_insert_interactive(self, iter, text, len, defaultEditable);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter text
	bindings_java_releaseString(text);

	// cleanup parameter len

	// cleanup parameter defaultEditable

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1insert_1interactive_1at_1cursor
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _text,
	jint _len,
	jboolean _defaultEditable
)
{
	gboolean result;
	jboolean _result;
	GtkTextBuffer* self;
	const gchar* text;
	gint len;
	gboolean defaultEditable;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter text
	text = (const gchar*) bindings_java_getString(env, _text);
	if (text == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// convert parameter len
	len = (gint) _len;

	// convert parameter defaultEditable
	defaultEditable = (gboolean) _defaultEditable;

	// call function
	result = gtk_text_buffer_insert_interactive_at_cursor(self, text, len, defaultEditable);

	// cleanup parameter self

	// cleanup parameter text
	bindings_java_releaseString(text);

	// cleanup parameter len

	// cleanup parameter defaultEditable

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1insert_1markup
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jstring _markup,
	jint _len
)
{
	GtkTextBuffer* self;
	GtkTextIter* iter;
	const gchar* markup;
	gint len;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter iter
	iter = (GtkTextIter*) _iter;

	// convert parameter markup
	markup = (const gchar*) bindings_java_getString(env, _markup);
	if (markup == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter len
	len = (gint) _len;

	// call function
	gtk_text_buffer_insert_markup(self, iter, markup, len);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter markup
	bindings_java_releaseString(markup);

	// cleanup parameter len
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1insert_1pixbuf
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jlong _pixbuf
)
{
	GtkTextBuffer* self;
	GtkTextIter* iter;
	GdkPixbuf* pixbuf;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter iter
	iter = (GtkTextIter*) _iter;

	// convert parameter pixbuf
	pixbuf = (GdkPixbuf*) _pixbuf;

	// call function
	gtk_text_buffer_insert_pixbuf(self, iter, pixbuf);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter pixbuf
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1insert_1range
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jlong _start,
	jlong _end
)
{
	GtkTextBuffer* self;
	GtkTextIter* iter;
	const GtkTextIter* start;
	const GtkTextIter* end;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter iter
	iter = (GtkTextIter*) _iter;

	// convert parameter start
	start = (const GtkTextIter*) _start;

	// convert parameter end
	end = (const GtkTextIter*) _end;

	// call function
	gtk_text_buffer_insert_range(self, iter, start, end);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter start

	// cleanup parameter end
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1insert_1range_1interactive
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jlong _start,
	jlong _end,
	jboolean _defaultEditable
)
{
	gboolean result;
	jboolean _result;
	GtkTextBuffer* self;
	GtkTextIter* iter;
	const GtkTextIter* start;
	const GtkTextIter* end;
	gboolean defaultEditable;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter iter
	iter = (GtkTextIter*) _iter;

	// convert parameter start
	start = (const GtkTextIter*) _start;

	// convert parameter end
	end = (const GtkTextIter*) _end;

	// convert parameter defaultEditable
	defaultEditable = (gboolean) _defaultEditable;

	// call function
	result = gtk_text_buffer_insert_range_interactive(self, iter, start, end, defaultEditable);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter start

	// cleanup parameter end

	// cleanup parameter defaultEditable

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1insert_1with_1tags
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jstring _text,
	jint _len,
	jlong _firstTag
)
{
	GtkTextBuffer* self;
	GtkTextIter* iter;
	const gchar* text;
	gint len;
	GtkTextTag* firstTag;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter iter
	iter = (GtkTextIter*) _iter;

	// convert parameter text
	text = (const gchar*) bindings_java_getString(env, _text);
	if (text == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter len
	len = (gint) _len;

	// convert parameter firstTag
	firstTag = (GtkTextTag*) _firstTag;

	// call function
	gtk_text_buffer_insert_with_tags(self, iter, text, len, firstTag, NULL);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter text
	bindings_java_releaseString(text);

	// cleanup parameter len

	// cleanup parameter firstTag
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1insert_1with_1tags_1by_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jstring _text,
	jint _len,
	jstring _firstTagName
)
{
	GtkTextBuffer* self;
	GtkTextIter* iter;
	const gchar* text;
	gint len;
	const gchar* firstTagName;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter iter
	iter = (GtkTextIter*) _iter;

	// convert parameter text
	text = (const gchar*) bindings_java_getString(env, _text);
	if (text == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter len
	len = (gint) _len;

	// convert parameter firstTagName
	firstTagName = (const gchar*) bindings_java_getString(env, _firstTagName);
	if (firstTagName == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_text_buffer_insert_with_tags_by_name(self, iter, text, len, firstTagName, NULL);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter text
	bindings_java_releaseString(text);

	// cleanup parameter len

	// cleanup parameter firstTagName
	bindings_java_releaseString(firstTagName);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1move_1mark
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _mark,
	jlong _where
)
{
	GtkTextBuffer* self;
	GtkTextMark* mark;
	const GtkTextIter* where;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter mark
	mark = (GtkTextMark*) _mark;

	// convert parameter where
	where = (const GtkTextIter*) _where;

	// call function
	gtk_text_buffer_move_mark(self, mark, where);

	// cleanup parameter self

	// cleanup parameter mark

	// cleanup parameter where
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1move_1mark_1by_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _name,
	jlong _where
)
{
	GtkTextBuffer* self;
	const gchar* name;
	const GtkTextIter* where;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter name
	name = (const gchar*) bindings_java_getString(env, _name);
	if (name == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter where
	where = (const GtkTextIter*) _where;

	// call function
	gtk_text_buffer_move_mark_by_name(self, name, where);

	// cleanup parameter self

	// cleanup parameter name
	bindings_java_releaseString(name);

	// cleanup parameter where
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1paste_1clipboard
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _clipboard,
	jlong _overrideLocation,
	jboolean _defaultEditable
)
{
	GtkTextBuffer* self;
	GtkClipboard* clipboard;
	GtkTextIter* overrideLocation;
	gboolean defaultEditable;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter clipboard
	clipboard = (GtkClipboard*) _clipboard;

	// convert parameter overrideLocation
	overrideLocation = (GtkTextIter*) _overrideLocation;

	// convert parameter defaultEditable
	defaultEditable = (gboolean) _defaultEditable;

	// call function
	gtk_text_buffer_paste_clipboard(self, clipboard, overrideLocation, defaultEditable);

	// cleanup parameter self

	// cleanup parameter clipboard

	// cleanup parameter overrideLocation

	// cleanup parameter defaultEditable
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1place_1cursor
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _where
)
{
	GtkTextBuffer* self;
	const GtkTextIter* where;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter where
	where = (const GtkTextIter*) _where;

	// call function
	gtk_text_buffer_place_cursor(self, where);

	// cleanup parameter self

	// cleanup parameter where
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1remove_1all_1tags
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _start,
	jlong _end
)
{
	GtkTextBuffer* self;
	const GtkTextIter* start;
	const GtkTextIter* end;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter start
	start = (const GtkTextIter*) _start;

	// convert parameter end
	end = (const GtkTextIter*) _end;

	// call function
	gtk_text_buffer_remove_all_tags(self, start, end);

	// cleanup parameter self

	// cleanup parameter start

	// cleanup parameter end
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1remove_1selection_1clipboard
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _clipboard
)
{
	GtkTextBuffer* self;
	GtkClipboard* clipboard;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter clipboard
	clipboard = (GtkClipboard*) _clipboard;

	// call function
	gtk_text_buffer_remove_selection_clipboard(self, clipboard);

	// cleanup parameter self

	// cleanup parameter clipboard
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1remove_1tag
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _tag,
	jlong _start,
	jlong _end
)
{
	GtkTextBuffer* self;
	GtkTextTag* tag;
	const GtkTextIter* start;
	const GtkTextIter* end;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter tag
	tag = (GtkTextTag*) _tag;

	// convert parameter start
	start = (const GtkTextIter*) _start;

	// convert parameter end
	end = (const GtkTextIter*) _end;

	// call function
	gtk_text_buffer_remove_tag(self, tag, start, end);

	// cleanup parameter self

	// cleanup parameter tag

	// cleanup parameter start

	// cleanup parameter end
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1remove_1tag_1by_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _name,
	jlong _start,
	jlong _end
)
{
	GtkTextBuffer* self;
	const gchar* name;
	const GtkTextIter* start;
	const GtkTextIter* end;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter name
	name = (const gchar*) bindings_java_getString(env, _name);
	if (name == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter start
	start = (const GtkTextIter*) _start;

	// convert parameter end
	end = (const GtkTextIter*) _end;

	// call function
	gtk_text_buffer_remove_tag_by_name(self, name, start, end);

	// cleanup parameter self

	// cleanup parameter name
	bindings_java_releaseString(name);

	// cleanup parameter start

	// cleanup parameter end
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1select_1range
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _ins,
	jlong _bound
)
{
	GtkTextBuffer* self;
	const GtkTextIter* ins;
	const GtkTextIter* bound;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter ins
	ins = (const GtkTextIter*) _ins;

	// convert parameter bound
	bound = (const GtkTextIter*) _bound;

	// call function
	gtk_text_buffer_select_range(self, ins, bound);

	// cleanup parameter self

	// cleanup parameter ins

	// cleanup parameter bound
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1set_1modified
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _setting
)
{
	GtkTextBuffer* self;
	gboolean setting;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter setting
	setting = (gboolean) _setting;

	// call function
	gtk_text_buffer_set_modified(self, setting);

	// cleanup parameter self

	// cleanup parameter setting
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTextBuffer_gtk_1text_1buffer_1set_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _text,
	jint _len
)
{
	GtkTextBuffer* self;
	const gchar* text;
	gint len;

	// convert parameter self
	self = (GtkTextBuffer*) _self;

	// convert parameter text
	text = (const gchar*) bindings_java_getString(env, _text);
	if (text == NULL) {
		return; // Java Exception already thrown
	}

	// convert parameter len
	len = (gint) _len;

	// call function
	gtk_text_buffer_set_text(self, text, len);

	// cleanup parameter self

	// cleanup parameter text
	bindings_java_releaseString(text);

	// cleanup parameter len
}
