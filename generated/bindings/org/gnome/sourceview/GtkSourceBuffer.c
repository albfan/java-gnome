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
#include <gtksourceview/gtksource.h>
#include "bindings_java.h"
#include "org_gnome_sourceview_GtkSourceBuffer.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_sourceview_GtkSourceBuffer_gtk_1source_1buffer_1new
(
	JNIEnv* env,
	jclass cls,
	jlong _table
)
{
	GtkSourceBuffer* result;
	jlong _result;
	GtkTextTagTable* table;

	// convert parameter table
	table = (GtkTextTagTable*) _table;

	// call function
	result = gtk_source_buffer_new(table);

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

JNIEXPORT jlong JNICALL
Java_org_gnome_sourceview_GtkSourceBuffer_gtk_1source_1buffer_1new_1with_1language
(
	JNIEnv* env,
	jclass cls,
	jlong _language
)
{
	GtkSourceBuffer* result;
	jlong _result;
	GtkSourceLanguage* language;

	// convert parameter language
	language = (GtkSourceLanguage*) _language;

	// call function
	result = gtk_source_buffer_new_with_language(language);

	// cleanup parameter language

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
Java_org_gnome_sourceview_GtkSourceBuffer_gtk_1source_1buffer_1backward_1iter_1to_1source_1mark
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jstring _category
)
{
	gboolean result;
	jboolean _result;
	GtkSourceBuffer* self;
	GtkTextIter* iter;
	const gchar* category;

	// convert parameter self
	self = (GtkSourceBuffer*) _self;

	// convert parameter iter
	iter = (GtkTextIter*) _iter;

	// convert parameter category
	if (_category == NULL) {
		category = NULL;
	} else {
		category = (const gchar*) bindings_java_getString(env, _category);
		if (category == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_source_buffer_backward_iter_to_source_mark(self, iter, category);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter category
	if (category != NULL) {
		bindings_java_releaseString(category);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourceBuffer_gtk_1source_1buffer_1begin_1not_1undoable_1action
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkSourceBuffer* self;

	// convert parameter self
	self = (GtkSourceBuffer*) _self;

	// call function
	gtk_source_buffer_begin_not_undoable_action(self);

	// cleanup parameter self
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_sourceview_GtkSourceBuffer_gtk_1source_1buffer_1can_1redo
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkSourceBuffer* self;

	// convert parameter self
	self = (GtkSourceBuffer*) _self;

	// call function
	result = gtk_source_buffer_can_redo(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_sourceview_GtkSourceBuffer_gtk_1source_1buffer_1can_1undo
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkSourceBuffer* self;

	// convert parameter self
	self = (GtkSourceBuffer*) _self;

	// call function
	result = gtk_source_buffer_can_undo(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_sourceview_GtkSourceBuffer_gtk_1source_1buffer_1create_1source_1mark
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _name,
	jstring _category,
	jlong _where
)
{
	GtkSourceMark* result;
	jlong _result;
	GtkSourceBuffer* self;
	const gchar* name;
	const gchar* category;
	const GtkTextIter* where;

	// convert parameter self
	self = (GtkSourceBuffer*) _self;

	// convert parameter name
	if (_name == NULL) {
		name = NULL;
	} else {
		name = (const gchar*) bindings_java_getString(env, _name);
		if (name == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// convert parameter category
	category = (const gchar*) bindings_java_getString(env, _category);
	if (category == NULL) {
		return 0L; // Java Exception already thrown
	}

	// convert parameter where
	where = (const GtkTextIter*) _where;

	// call function
	result = gtk_source_buffer_create_source_mark(self, name, category, where);

	// cleanup parameter self

	// cleanup parameter name
	if (name != NULL) {
		bindings_java_releaseString(name);
	}

	// cleanup parameter category
	bindings_java_releaseString(category);

	// cleanup parameter where

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
Java_org_gnome_sourceview_GtkSourceBuffer_gtk_1source_1buffer_1create_1source_1tag
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
	GtkSourceBuffer* self;
	const gchar* tagName;
	const gchar* firstPropertyName;

	// convert parameter self
	self = (GtkSourceBuffer*) _self;

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
	result = gtk_source_buffer_create_source_tag(self, tagName, firstPropertyName, NULL);

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
Java_org_gnome_sourceview_GtkSourceBuffer_gtk_1source_1buffer_1end_1not_1undoable_1action
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkSourceBuffer* self;

	// convert parameter self
	self = (GtkSourceBuffer*) _self;

	// call function
	gtk_source_buffer_end_not_undoable_action(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourceBuffer_gtk_1source_1buffer_1ensure_1highlight
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _start,
	jlong _end
)
{
	GtkSourceBuffer* self;
	const GtkTextIter* start;
	const GtkTextIter* end;

	// convert parameter self
	self = (GtkSourceBuffer*) _self;

	// convert parameter start
	start = (const GtkTextIter*) _start;

	// convert parameter end
	end = (const GtkTextIter*) _end;

	// call function
	gtk_source_buffer_ensure_highlight(self, start, end);

	// cleanup parameter self

	// cleanup parameter start

	// cleanup parameter end
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_sourceview_GtkSourceBuffer_gtk_1source_1buffer_1forward_1iter_1to_1source_1mark
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jstring _category
)
{
	gboolean result;
	jboolean _result;
	GtkSourceBuffer* self;
	GtkTextIter* iter;
	const gchar* category;

	// convert parameter self
	self = (GtkSourceBuffer*) _self;

	// convert parameter iter
	iter = (GtkTextIter*) _iter;

	// convert parameter category
	if (_category == NULL) {
		category = NULL;
	} else {
		category = (const gchar*) bindings_java_getString(env, _category);
		if (category == NULL) {
			return  JNI_FALSE; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_source_buffer_forward_iter_to_source_mark(self, iter, category);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter category
	if (category != NULL) {
		bindings_java_releaseString(category);
	}

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jobjectArray JNICALL
Java_org_gnome_sourceview_GtkSourceBuffer_gtk_1source_1buffer_1get_1context_1classes_1at_1iter
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter
)
{
	gchar** result;
	jobjectArray _result;
	GtkSourceBuffer* self;
	const GtkTextIter* iter;

	// convert parameter self
	self = (GtkSourceBuffer*) _self;

	// convert parameter iter
	iter = (const GtkTextIter*) _iter;

	// call function
	result = gtk_source_buffer_get_context_classes_at_iter(self, iter);

	// cleanup parameter self

	// cleanup parameter iter

	// translate return value to JNI type
	_result = (jobjectArray) bindings_java_convert_gchararray_to_jarray(env, (const gchar**)result);

	// cleanup return value
	if (result != NULL) {
		g_strfreev(result);
	}

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_sourceview_GtkSourceBuffer_gtk_1source_1buffer_1get_1highlight_1matching_1brackets
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkSourceBuffer* self;

	// convert parameter self
	self = (GtkSourceBuffer*) _self;

	// call function
	result = gtk_source_buffer_get_highlight_matching_brackets(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_sourceview_GtkSourceBuffer_gtk_1source_1buffer_1get_1highlight_1syntax
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkSourceBuffer* self;

	// convert parameter self
	self = (GtkSourceBuffer*) _self;

	// call function
	result = gtk_source_buffer_get_highlight_syntax(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_sourceview_GtkSourceBuffer_gtk_1source_1buffer_1get_1implicit_1trailing_1newline
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkSourceBuffer* self;

	// convert parameter self
	self = (GtkSourceBuffer*) _self;

	// call function
	result = gtk_source_buffer_get_implicit_trailing_newline(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_sourceview_GtkSourceBuffer_gtk_1source_1buffer_1get_1language
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkSourceLanguage* result;
	jlong _result;
	GtkSourceBuffer* self;

	// convert parameter self
	self = (GtkSourceBuffer*) _self;

	// call function
	result = gtk_source_buffer_get_language(self);

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
Java_org_gnome_sourceview_GtkSourceBuffer_gtk_1source_1buffer_1get_1max_1undo_1levels
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkSourceBuffer* self;

	// convert parameter self
	self = (GtkSourceBuffer*) _self;

	// call function
	result = gtk_source_buffer_get_max_undo_levels(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlongArray JNICALL
Java_org_gnome_sourceview_GtkSourceBuffer_gtk_1source_1buffer_1get_1source_1marks_1at_1iter
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jstring _category
)
{
	GSList* result;
	jlongArray _result;
	GtkSourceBuffer* self;
	GtkTextIter* iter;
	const gchar* category;

	// convert parameter self
	self = (GtkSourceBuffer*) _self;

	// convert parameter iter
	iter = (GtkTextIter*) _iter;

	// convert parameter category
	if (_category == NULL) {
		category = NULL;
	} else {
		category = (const gchar*) bindings_java_getString(env, _category);
		if (category == NULL) {
			return NULL; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_source_buffer_get_source_marks_at_iter(self, iter, category);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter category
	if (category != NULL) {
		bindings_java_releaseString(category);
	}

	// translate return value to JNI type
	_result = (jlongArray) bindings_java_convert_gslist_to_jarray(env, result);

	// and finally
	return _result;
}

JNIEXPORT jlongArray JNICALL
Java_org_gnome_sourceview_GtkSourceBuffer_gtk_1source_1buffer_1get_1source_1marks_1at_1line
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _line,
	jstring _category
)
{
	GSList* result;
	jlongArray _result;
	GtkSourceBuffer* self;
	gint line;
	const gchar* category;

	// convert parameter self
	self = (GtkSourceBuffer*) _self;

	// convert parameter line
	line = (gint) _line;

	// convert parameter category
	if (_category == NULL) {
		category = NULL;
	} else {
		category = (const gchar*) bindings_java_getString(env, _category);
		if (category == NULL) {
			return NULL; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_source_buffer_get_source_marks_at_line(self, line, category);

	// cleanup parameter self

	// cleanup parameter line

	// cleanup parameter category
	if (category != NULL) {
		bindings_java_releaseString(category);
	}

	// translate return value to JNI type
	_result = (jlongArray) bindings_java_convert_gslist_to_jarray(env, result);

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_sourceview_GtkSourceBuffer_gtk_1source_1buffer_1get_1style_1scheme
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkSourceStyleScheme* result;
	jlong _result;
	GtkSourceBuffer* self;

	// convert parameter self
	self = (GtkSourceBuffer*) _self;

	// call function
	result = gtk_source_buffer_get_style_scheme(self);

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
Java_org_gnome_sourceview_GtkSourceBuffer_gtk_1source_1buffer_1iter_1backward_1to_1context_1class_1toggle
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jstring _contextClass
)
{
	gboolean result;
	jboolean _result;
	GtkSourceBuffer* self;
	GtkTextIter* iter;
	const gchar* contextClass;

	// convert parameter self
	self = (GtkSourceBuffer*) _self;

	// convert parameter iter
	iter = (GtkTextIter*) _iter;

	// convert parameter contextClass
	contextClass = (const gchar*) bindings_java_getString(env, _contextClass);
	if (contextClass == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gtk_source_buffer_iter_backward_to_context_class_toggle(self, iter, contextClass);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter contextClass
	bindings_java_releaseString(contextClass);

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_sourceview_GtkSourceBuffer_gtk_1source_1buffer_1iter_1forward_1to_1context_1class_1toggle
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jstring _contextClass
)
{
	gboolean result;
	jboolean _result;
	GtkSourceBuffer* self;
	GtkTextIter* iter;
	const gchar* contextClass;

	// convert parameter self
	self = (GtkSourceBuffer*) _self;

	// convert parameter iter
	iter = (GtkTextIter*) _iter;

	// convert parameter contextClass
	contextClass = (const gchar*) bindings_java_getString(env, _contextClass);
	if (contextClass == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gtk_source_buffer_iter_forward_to_context_class_toggle(self, iter, contextClass);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter contextClass
	bindings_java_releaseString(contextClass);

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_sourceview_GtkSourceBuffer_gtk_1source_1buffer_1iter_1has_1context_1class
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter,
	jstring _contextClass
)
{
	gboolean result;
	jboolean _result;
	GtkSourceBuffer* self;
	const GtkTextIter* iter;
	const gchar* contextClass;

	// convert parameter self
	self = (GtkSourceBuffer*) _self;

	// convert parameter iter
	iter = (const GtkTextIter*) _iter;

	// convert parameter contextClass
	contextClass = (const gchar*) bindings_java_getString(env, _contextClass);
	if (contextClass == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// call function
	result = gtk_source_buffer_iter_has_context_class(self, iter, contextClass);

	// cleanup parameter self

	// cleanup parameter iter

	// cleanup parameter contextClass
	bindings_java_releaseString(contextClass);

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourceBuffer_gtk_1source_1buffer_1join_1lines
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _start,
	jlong _end
)
{
	GtkSourceBuffer* self;
	GtkTextIter* start;
	GtkTextIter* end;

	// convert parameter self
	self = (GtkSourceBuffer*) _self;

	// convert parameter start
	start = (GtkTextIter*) _start;

	// convert parameter end
	end = (GtkTextIter*) _end;

	// call function
	gtk_source_buffer_join_lines(self, start, end);

	// cleanup parameter self

	// cleanup parameter start

	// cleanup parameter end
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourceBuffer_gtk_1source_1buffer_1redo
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkSourceBuffer* self;

	// convert parameter self
	self = (GtkSourceBuffer*) _self;

	// call function
	gtk_source_buffer_redo(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourceBuffer_gtk_1source_1buffer_1remove_1source_1marks
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _start,
	jlong _end,
	jstring _category
)
{
	GtkSourceBuffer* self;
	const GtkTextIter* start;
	const GtkTextIter* end;
	const gchar* category;

	// convert parameter self
	self = (GtkSourceBuffer*) _self;

	// convert parameter start
	start = (const GtkTextIter*) _start;

	// convert parameter end
	end = (const GtkTextIter*) _end;

	// convert parameter category
	if (_category == NULL) {
		category = NULL;
	} else {
		category = (const gchar*) bindings_java_getString(env, _category);
		if (category == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_source_buffer_remove_source_marks(self, start, end, category);

	// cleanup parameter self

	// cleanup parameter start

	// cleanup parameter end

	// cleanup parameter category
	if (category != NULL) {
		bindings_java_releaseString(category);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourceBuffer_gtk_1source_1buffer_1set_1highlight_1matching_1brackets
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _highlight
)
{
	GtkSourceBuffer* self;
	gboolean highlight;

	// convert parameter self
	self = (GtkSourceBuffer*) _self;

	// convert parameter highlight
	highlight = (gboolean) _highlight;

	// call function
	gtk_source_buffer_set_highlight_matching_brackets(self, highlight);

	// cleanup parameter self

	// cleanup parameter highlight
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourceBuffer_gtk_1source_1buffer_1set_1highlight_1syntax
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _highlight
)
{
	GtkSourceBuffer* self;
	gboolean highlight;

	// convert parameter self
	self = (GtkSourceBuffer*) _self;

	// convert parameter highlight
	highlight = (gboolean) _highlight;

	// call function
	gtk_source_buffer_set_highlight_syntax(self, highlight);

	// cleanup parameter self

	// cleanup parameter highlight
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourceBuffer_gtk_1source_1buffer_1set_1implicit_1trailing_1newline
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _implicitTrailingNewline
)
{
	GtkSourceBuffer* self;
	gboolean implicitTrailingNewline;

	// convert parameter self
	self = (GtkSourceBuffer*) _self;

	// convert parameter implicitTrailingNewline
	implicitTrailingNewline = (gboolean) _implicitTrailingNewline;

	// call function
	gtk_source_buffer_set_implicit_trailing_newline(self, implicitTrailingNewline);

	// cleanup parameter self

	// cleanup parameter implicitTrailingNewline
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourceBuffer_gtk_1source_1buffer_1set_1language
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _language
)
{
	GtkSourceBuffer* self;
	GtkSourceLanguage* language;

	// convert parameter self
	self = (GtkSourceBuffer*) _self;

	// convert parameter language
	language = (GtkSourceLanguage*) _language;

	// call function
	gtk_source_buffer_set_language(self, language);

	// cleanup parameter self

	// cleanup parameter language
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourceBuffer_gtk_1source_1buffer_1set_1max_1undo_1levels
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _maxUndoLevels
)
{
	GtkSourceBuffer* self;
	gint maxUndoLevels;

	// convert parameter self
	self = (GtkSourceBuffer*) _self;

	// convert parameter maxUndoLevels
	maxUndoLevels = (gint) _maxUndoLevels;

	// call function
	gtk_source_buffer_set_max_undo_levels(self, maxUndoLevels);

	// cleanup parameter self

	// cleanup parameter maxUndoLevels
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourceBuffer_gtk_1source_1buffer_1set_1style_1scheme
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _scheme
)
{
	GtkSourceBuffer* self;
	GtkSourceStyleScheme* scheme;

	// convert parameter self
	self = (GtkSourceBuffer*) _self;

	// convert parameter scheme
	scheme = (GtkSourceStyleScheme*) _scheme;

	// call function
	gtk_source_buffer_set_style_scheme(self, scheme);

	// cleanup parameter self

	// cleanup parameter scheme
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourceBuffer_gtk_1source_1buffer_1undo
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkSourceBuffer* self;

	// convert parameter self
	self = (GtkSourceBuffer*) _self;

	// call function
	gtk_source_buffer_undo(self);

	// cleanup parameter self
}
