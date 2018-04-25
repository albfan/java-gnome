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
#include "org_gnome_gtk_GtkCellView.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkCellView_gtk_1cell_1view_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkWidget* result;
	jlong _result;

	// call function
	result = gtk_cell_view_new();

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
Java_org_gnome_gtk_GtkCellView_gtk_1cell_1view_1new_1with_1markup
(
	JNIEnv* env,
	jclass cls,
	jstring _markup
)
{
	GtkWidget* result;
	jlong _result;
	const gchar* markup;

	// convert parameter markup
	markup = (const gchar*) bindings_java_getString(env, _markup);
	if (markup == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_cell_view_new_with_markup(markup);

	// cleanup parameter markup
	bindings_java_releaseString(markup);

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
Java_org_gnome_gtk_GtkCellView_gtk_1cell_1view_1new_1with_1pixbuf
(
	JNIEnv* env,
	jclass cls,
	jlong _pixbuf
)
{
	GtkWidget* result;
	jlong _result;
	GdkPixbuf* pixbuf;

	// convert parameter pixbuf
	pixbuf = (GdkPixbuf*) _pixbuf;

	// call function
	result = gtk_cell_view_new_with_pixbuf(pixbuf);

	// cleanup parameter pixbuf

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
Java_org_gnome_gtk_GtkCellView_gtk_1cell_1view_1new_1with_1text
(
	JNIEnv* env,
	jclass cls,
	jstring _text
)
{
	GtkWidget* result;
	jlong _result;
	const gchar* text;

	// convert parameter text
	text = (const gchar*) bindings_java_getString(env, _text);
	if (text == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_cell_view_new_with_text(text);

	// cleanup parameter text
	bindings_java_releaseString(text);

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
Java_org_gnome_gtk_GtkCellView_gtk_1cell_1view_1get_1displayed_1row
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreePath* result;
	jlong _result;
	GtkCellView* self;

	// convert parameter self
	self = (GtkCellView*) _self;

	// call function
	result = gtk_cell_view_get_displayed_row(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jlong) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkCellView_gtk_1cell_1view_1get_1draw_1sensitive
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkCellView* self;

	// convert parameter self
	self = (GtkCellView*) _self;

	// call function
	result = gtk_cell_view_get_draw_sensitive(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkCellView_gtk_1cell_1view_1get_1fit_1model
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkCellView* self;

	// convert parameter self
	self = (GtkCellView*) _self;

	// call function
	result = gtk_cell_view_get_fit_model(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkCellView_gtk_1cell_1view_1get_1model
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkTreeModel* result;
	jlong _result;
	GtkCellView* self;

	// convert parameter self
	self = (GtkCellView*) _self;

	// call function
	result = gtk_cell_view_get_model(self);

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
Java_org_gnome_gtk_GtkCellView_gtk_1cell_1view_1get_1size_1of_1row
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path,
	jlong _requisition
)
{
	gboolean result;
	jboolean _result;
	GtkCellView* self;
	GtkTreePath* path;
	GtkRequisition* requisition;

	// convert parameter self
	self = (GtkCellView*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// convert parameter requisition
	requisition = (GtkRequisition*) _requisition;

	// call function
	result = gtk_cell_view_get_size_of_row(self, path, requisition);

	// cleanup parameter self

	// cleanup parameter path

	// cleanup parameter requisition

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCellView_gtk_1cell_1view_1set_1background_1rgba
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _rgba
)
{
	GtkCellView* self;
	const GdkRGBA* rgba;

	// convert parameter self
	self = (GtkCellView*) _self;

	// convert parameter rgba
	rgba = (const GdkRGBA*) _rgba;

	// call function
	gtk_cell_view_set_background_rgba(self, rgba);

	// cleanup parameter self

	// cleanup parameter rgba
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCellView_gtk_1cell_1view_1set_1displayed_1row
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _path
)
{
	GtkCellView* self;
	GtkTreePath* path;

	// convert parameter self
	self = (GtkCellView*) _self;

	// convert parameter path
	path = (GtkTreePath*) _path;

	// call function
	gtk_cell_view_set_displayed_row(self, path);

	// cleanup parameter self

	// cleanup parameter path
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCellView_gtk_1cell_1view_1set_1draw_1sensitive
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _drawSensitive
)
{
	GtkCellView* self;
	gboolean drawSensitive;

	// convert parameter self
	self = (GtkCellView*) _self;

	// convert parameter drawSensitive
	drawSensitive = (gboolean) _drawSensitive;

	// call function
	gtk_cell_view_set_draw_sensitive(self, drawSensitive);

	// cleanup parameter self

	// cleanup parameter drawSensitive
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCellView_gtk_1cell_1view_1set_1fit_1model
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _fitModel
)
{
	GtkCellView* self;
	gboolean fitModel;

	// convert parameter self
	self = (GtkCellView*) _self;

	// convert parameter fitModel
	fitModel = (gboolean) _fitModel;

	// call function
	gtk_cell_view_set_fit_model(self, fitModel);

	// cleanup parameter self

	// cleanup parameter fitModel
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCellView_gtk_1cell_1view_1set_1model
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _model
)
{
	GtkCellView* self;
	GtkTreeModel* model;

	// convert parameter self
	self = (GtkCellView*) _self;

	// convert parameter model
	model = (GtkTreeModel*) _model;

	// call function
	gtk_cell_view_set_model(self, model);

	// cleanup parameter self

	// cleanup parameter model
}
