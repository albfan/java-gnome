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
#include "org_gnome_sourceview_GtkSourceView.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_sourceview_GtkSourceView_gtk_1source_1view_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkWidget* result;
	jlong _result;

	// call function
	result = gtk_source_view_new();

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
Java_org_gnome_sourceview_GtkSourceView_gtk_1source_1view_1new_1with_1buffer
(
	JNIEnv* env,
	jclass cls,
	jlong _buffer
)
{
	GtkWidget* result;
	jlong _result;
	GtkSourceBuffer* buffer;

	// convert parameter buffer
	buffer = (GtkSourceBuffer*) _buffer;

	// call function
	result = gtk_source_view_new_with_buffer(buffer);

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
Java_org_gnome_sourceview_GtkSourceView_gtk_1source_1view_1get_1auto_1indent
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkSourceView* self;

	// convert parameter self
	self = (GtkSourceView*) _self;

	// call function
	result = gtk_source_view_get_auto_indent(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_sourceview_GtkSourceView_gtk_1source_1view_1get_1draw_1spaces
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkSourceDrawSpacesFlags result;
	jint _result;
	GtkSourceView* self;

	// convert parameter self
	self = (GtkSourceView*) _self;

	// call function
	result = gtk_source_view_get_draw_spaces(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_sourceview_GtkSourceView_gtk_1source_1view_1get_1highlight_1current_1line
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkSourceView* self;

	// convert parameter self
	self = (GtkSourceView*) _self;

	// call function
	result = gtk_source_view_get_highlight_current_line(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_sourceview_GtkSourceView_gtk_1source_1view_1get_1indent_1on_1tab
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkSourceView* self;

	// convert parameter self
	self = (GtkSourceView*) _self;

	// call function
	result = gtk_source_view_get_indent_on_tab(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_sourceview_GtkSourceView_gtk_1source_1view_1get_1indent_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkSourceView* self;

	// convert parameter self
	self = (GtkSourceView*) _self;

	// call function
	result = gtk_source_view_get_indent_width(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_sourceview_GtkSourceView_gtk_1source_1view_1get_1insert_1spaces_1instead_1of_1tabs
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkSourceView* self;

	// convert parameter self
	self = (GtkSourceView*) _self;

	// call function
	result = gtk_source_view_get_insert_spaces_instead_of_tabs(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_sourceview_GtkSourceView_gtk_1source_1view_1get_1right_1margin_1position
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GtkSourceView* self;

	// convert parameter self
	self = (GtkSourceView*) _self;

	// call function
	result = gtk_source_view_get_right_margin_position(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_sourceview_GtkSourceView_gtk_1source_1view_1get_1show_1line_1marks
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkSourceView* self;

	// convert parameter self
	self = (GtkSourceView*) _self;

	// call function
	result = gtk_source_view_get_show_line_marks(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_sourceview_GtkSourceView_gtk_1source_1view_1get_1show_1line_1numbers
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkSourceView* self;

	// convert parameter self
	self = (GtkSourceView*) _self;

	// call function
	result = gtk_source_view_get_show_line_numbers(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_sourceview_GtkSourceView_gtk_1source_1view_1get_1show_1right_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkSourceView* self;

	// convert parameter self
	self = (GtkSourceView*) _self;

	// call function
	result = gtk_source_view_get_show_right_margin(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_sourceview_GtkSourceView_gtk_1source_1view_1get_1smart_1backspace
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkSourceView* self;

	// convert parameter self
	self = (GtkSourceView*) _self;

	// call function
	result = gtk_source_view_get_smart_backspace(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_sourceview_GtkSourceView_gtk_1source_1view_1get_1smart_1home_1end
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkSourceSmartHomeEndType result;
	jint _result;
	GtkSourceView* self;

	// convert parameter self
	self = (GtkSourceView*) _self;

	// call function
	result = gtk_source_view_get_smart_home_end(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_sourceview_GtkSourceView_gtk_1source_1view_1get_1tab_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	guint result;
	jint _result;
	GtkSourceView* self;

	// convert parameter self
	self = (GtkSourceView*) _self;

	// call function
	result = gtk_source_view_get_tab_width(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_sourceview_GtkSourceView_gtk_1source_1view_1get_1visual_1column
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _iter
)
{
	guint result;
	jint _result;
	GtkSourceView* self;
	const GtkTextIter* iter;

	// convert parameter self
	self = (GtkSourceView*) _self;

	// convert parameter iter
	iter = (const GtkTextIter*) _iter;

	// call function
	result = gtk_source_view_get_visual_column(self, iter);

	// cleanup parameter self

	// cleanup parameter iter

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourceView_gtk_1source_1view_1indent_1lines
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _start,
	jlong _end
)
{
	GtkSourceView* self;
	GtkTextIter* start;
	GtkTextIter* end;

	// convert parameter self
	self = (GtkSourceView*) _self;

	// convert parameter start
	start = (GtkTextIter*) _start;

	// convert parameter end
	end = (GtkTextIter*) _end;

	// call function
	gtk_source_view_indent_lines(self, start, end);

	// cleanup parameter self

	// cleanup parameter start

	// cleanup parameter end
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourceView_gtk_1source_1view_1set_1auto_1indent
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _enable
)
{
	GtkSourceView* self;
	gboolean enable;

	// convert parameter self
	self = (GtkSourceView*) _self;

	// convert parameter enable
	enable = (gboolean) _enable;

	// call function
	gtk_source_view_set_auto_indent(self, enable);

	// cleanup parameter self

	// cleanup parameter enable
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourceView_gtk_1source_1view_1set_1draw_1spaces
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _flags
)
{
	GtkSourceView* self;
	GtkSourceDrawSpacesFlags flags;

	// convert parameter self
	self = (GtkSourceView*) _self;

	// convert parameter flags
	flags = (GtkSourceDrawSpacesFlags) _flags;

	// call function
	gtk_source_view_set_draw_spaces(self, flags);

	// cleanup parameter self

	// cleanup parameter flags
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourceView_gtk_1source_1view_1set_1highlight_1current_1line
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _highlight
)
{
	GtkSourceView* self;
	gboolean highlight;

	// convert parameter self
	self = (GtkSourceView*) _self;

	// convert parameter highlight
	highlight = (gboolean) _highlight;

	// call function
	gtk_source_view_set_highlight_current_line(self, highlight);

	// cleanup parameter self

	// cleanup parameter highlight
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourceView_gtk_1source_1view_1set_1indent_1on_1tab
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _enable
)
{
	GtkSourceView* self;
	gboolean enable;

	// convert parameter self
	self = (GtkSourceView*) _self;

	// convert parameter enable
	enable = (gboolean) _enable;

	// call function
	gtk_source_view_set_indent_on_tab(self, enable);

	// cleanup parameter self

	// cleanup parameter enable
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourceView_gtk_1source_1view_1set_1indent_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _width
)
{
	GtkSourceView* self;
	gint width;

	// convert parameter self
	self = (GtkSourceView*) _self;

	// convert parameter width
	width = (gint) _width;

	// call function
	gtk_source_view_set_indent_width(self, width);

	// cleanup parameter self

	// cleanup parameter width
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourceView_gtk_1source_1view_1set_1insert_1spaces_1instead_1of_1tabs
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _enable
)
{
	GtkSourceView* self;
	gboolean enable;

	// convert parameter self
	self = (GtkSourceView*) _self;

	// convert parameter enable
	enable = (gboolean) _enable;

	// call function
	gtk_source_view_set_insert_spaces_instead_of_tabs(self, enable);

	// cleanup parameter self

	// cleanup parameter enable
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourceView_gtk_1source_1view_1set_1right_1margin_1position
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _pos
)
{
	GtkSourceView* self;
	guint pos;

	// convert parameter self
	self = (GtkSourceView*) _self;

	// convert parameter pos
	pos = (guint) _pos;

	// call function
	gtk_source_view_set_right_margin_position(self, pos);

	// cleanup parameter self

	// cleanup parameter pos
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourceView_gtk_1source_1view_1set_1show_1line_1marks
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _show
)
{
	GtkSourceView* self;
	gboolean show;

	// convert parameter self
	self = (GtkSourceView*) _self;

	// convert parameter show
	show = (gboolean) _show;

	// call function
	gtk_source_view_set_show_line_marks(self, show);

	// cleanup parameter self

	// cleanup parameter show
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourceView_gtk_1source_1view_1set_1show_1line_1numbers
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _show
)
{
	GtkSourceView* self;
	gboolean show;

	// convert parameter self
	self = (GtkSourceView*) _self;

	// convert parameter show
	show = (gboolean) _show;

	// call function
	gtk_source_view_set_show_line_numbers(self, show);

	// cleanup parameter self

	// cleanup parameter show
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourceView_gtk_1source_1view_1set_1show_1right_1margin
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _show
)
{
	GtkSourceView* self;
	gboolean show;

	// convert parameter self
	self = (GtkSourceView*) _self;

	// convert parameter show
	show = (gboolean) _show;

	// call function
	gtk_source_view_set_show_right_margin(self, show);

	// cleanup parameter self

	// cleanup parameter show
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourceView_gtk_1source_1view_1set_1smart_1backspace
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _smartBackspace
)
{
	GtkSourceView* self;
	gboolean smartBackspace;

	// convert parameter self
	self = (GtkSourceView*) _self;

	// convert parameter smartBackspace
	smartBackspace = (gboolean) _smartBackspace;

	// call function
	gtk_source_view_set_smart_backspace(self, smartBackspace);

	// cleanup parameter self

	// cleanup parameter smartBackspace
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourceView_gtk_1source_1view_1set_1smart_1home_1end
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _smartHomeEnd
)
{
	GtkSourceView* self;
	GtkSourceSmartHomeEndType smartHomeEnd;

	// convert parameter self
	self = (GtkSourceView*) _self;

	// convert parameter smartHomeEnd
	smartHomeEnd = (GtkSourceSmartHomeEndType) _smartHomeEnd;

	// call function
	gtk_source_view_set_smart_home_end(self, smartHomeEnd);

	// cleanup parameter self

	// cleanup parameter smartHomeEnd
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourceView_gtk_1source_1view_1set_1tab_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _width
)
{
	GtkSourceView* self;
	guint width;

	// convert parameter self
	self = (GtkSourceView*) _self;

	// convert parameter width
	width = (guint) _width;

	// call function
	gtk_source_view_set_tab_width(self, width);

	// cleanup parameter self

	// cleanup parameter width
}

JNIEXPORT void JNICALL
Java_org_gnome_sourceview_GtkSourceView_gtk_1source_1view_1unindent_1lines
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _start,
	jlong _end
)
{
	GtkSourceView* self;
	GtkTextIter* start;
	GtkTextIter* end;

	// convert parameter self
	self = (GtkSourceView*) _self;

	// convert parameter start
	start = (GtkTextIter*) _start;

	// convert parameter end
	end = (GtkTextIter*) _end;

	// call function
	gtk_source_view_unindent_lines(self, start, end);

	// cleanup parameter self

	// cleanup parameter start

	// cleanup parameter end
}
