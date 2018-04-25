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
#include "org_gnome_gtk_GtkPrintOperation.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkPrintOperation_gtk_1print_1operation_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkPrintOperation* result;
	jlong _result;

	// call function
	result = gtk_print_operation_new();

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
Java_org_gnome_gtk_GtkPrintOperation_gtk_1print_1operation_1cancel
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkPrintOperation* self;

	// convert parameter self
	self = (GtkPrintOperation*) _self;

	// call function
	gtk_print_operation_cancel(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintOperation_gtk_1print_1operation_1draw_1page_1finish
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkPrintOperation* self;

	// convert parameter self
	self = (GtkPrintOperation*) _self;

	// call function
	gtk_print_operation_draw_page_finish(self);

	// cleanup parameter self
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkPrintOperation_gtk_1print_1operation_1get_1default_1page_1setup
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkPageSetup* result;
	jlong _result;
	GtkPrintOperation* self;

	// convert parameter self
	self = (GtkPrintOperation*) _self;

	// call function
	result = gtk_print_operation_get_default_page_setup(self);

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
Java_org_gnome_gtk_GtkPrintOperation_gtk_1print_1operation_1get_1embed_1page_1setup
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkPrintOperation* self;

	// convert parameter self
	self = (GtkPrintOperation*) _self;

	// call function
	result = gtk_print_operation_get_embed_page_setup(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintOperation_gtk_1print_1operation_1get_1error
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkPrintOperation* self;
	GError* error = NULL;

	// convert parameter self
	self = (GtkPrintOperation*) _self;

	// call function
	gtk_print_operation_get_error(self, &error);

	// cleanup parameter self

	// check for error
	if (error) {
		bindings_java_throwGlibException(env, error);
		return;
	}
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkPrintOperation_gtk_1print_1operation_1get_1has_1selection
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkPrintOperation* self;

	// convert parameter self
	self = (GtkPrintOperation*) _self;

	// call function
	result = gtk_print_operation_get_has_selection(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkPrintOperation_gtk_1print_1operation_1get_1n_1pages_1to_1print
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkPrintOperation* self;

	// convert parameter self
	self = (GtkPrintOperation*) _self;

	// call function
	result = gtk_print_operation_get_n_pages_to_print(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkPrintOperation_gtk_1print_1operation_1get_1print_1settings
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkPrintSettings* result;
	jlong _result;
	GtkPrintOperation* self;

	// convert parameter self
	self = (GtkPrintOperation*) _self;

	// call function
	result = gtk_print_operation_get_print_settings(self);

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
Java_org_gnome_gtk_GtkPrintOperation_gtk_1print_1operation_1get_1status
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkPrintStatus result;
	jint _result;
	GtkPrintOperation* self;

	// convert parameter self
	self = (GtkPrintOperation*) _self;

	// call function
	result = gtk_print_operation_get_status(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jstring JNICALL
Java_org_gnome_gtk_GtkPrintOperation_gtk_1print_1operation_1get_1status_1string
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	const gchar* result;
	jstring _result;
	GtkPrintOperation* self;

	// convert parameter self
	self = (GtkPrintOperation*) _self;

	// call function
	result = gtk_print_operation_get_status_string(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkPrintOperation_gtk_1print_1operation_1get_1support_1selection
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkPrintOperation* self;

	// convert parameter self
	self = (GtkPrintOperation*) _self;

	// call function
	result = gtk_print_operation_get_support_selection(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkPrintOperation_gtk_1print_1operation_1is_1finished
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkPrintOperation* self;

	// convert parameter self
	self = (GtkPrintOperation*) _self;

	// call function
	result = gtk_print_operation_is_finished(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkPrintOperation_gtk_1print_1operation_1run
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _action,
	jlong _parent
)
{
	GtkPrintOperationResult result;
	jint _result;
	GtkPrintOperation* self;
	GtkPrintOperationAction action;
	GtkWindow* parent;
	GError* error = NULL;

	// convert parameter self
	self = (GtkPrintOperation*) _self;

	// convert parameter action
	action = (GtkPrintOperationAction) _action;

	// convert parameter parent
	parent = (GtkWindow*) _parent;

	// call function
	result = gtk_print_operation_run(self, action, parent, &error);

	// cleanup parameter self

	// cleanup parameter action

	// cleanup parameter parent

	// check for error
	if (error) {
		bindings_java_throwGlibException(env, error);
		return 0;
	}

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintOperation_gtk_1print_1operation_1set_1allow_1async
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _allowAsync
)
{
	GtkPrintOperation* self;
	gboolean allowAsync;

	// convert parameter self
	self = (GtkPrintOperation*) _self;

	// convert parameter allowAsync
	allowAsync = (gboolean) _allowAsync;

	// call function
	gtk_print_operation_set_allow_async(self, allowAsync);

	// cleanup parameter self

	// cleanup parameter allowAsync
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintOperation_gtk_1print_1operation_1set_1current_1page
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _currentPage
)
{
	GtkPrintOperation* self;
	gint currentPage;

	// convert parameter self
	self = (GtkPrintOperation*) _self;

	// convert parameter currentPage
	currentPage = (gint) _currentPage;

	// call function
	gtk_print_operation_set_current_page(self, currentPage);

	// cleanup parameter self

	// cleanup parameter currentPage
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintOperation_gtk_1print_1operation_1set_1custom_1tab_1label
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _label
)
{
	GtkPrintOperation* self;
	const gchar* label;

	// convert parameter self
	self = (GtkPrintOperation*) _self;

	// convert parameter label
	if (_label == NULL) {
		label = NULL;
	} else {
		label = (const gchar*) bindings_java_getString(env, _label);
		if (label == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_print_operation_set_custom_tab_label(self, label);

	// cleanup parameter self

	// cleanup parameter label
	if (label != NULL) {
		bindings_java_releaseString(label);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintOperation_gtk_1print_1operation_1set_1default_1page_1setup
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _defaultPageSetup
)
{
	GtkPrintOperation* self;
	GtkPageSetup* defaultPageSetup;

	// convert parameter self
	self = (GtkPrintOperation*) _self;

	// convert parameter defaultPageSetup
	defaultPageSetup = (GtkPageSetup*) _defaultPageSetup;

	// call function
	gtk_print_operation_set_default_page_setup(self, defaultPageSetup);

	// cleanup parameter self

	// cleanup parameter defaultPageSetup
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintOperation_gtk_1print_1operation_1set_1defer_1drawing
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkPrintOperation* self;

	// convert parameter self
	self = (GtkPrintOperation*) _self;

	// call function
	gtk_print_operation_set_defer_drawing(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintOperation_gtk_1print_1operation_1set_1embed_1page_1setup
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _embed
)
{
	GtkPrintOperation* self;
	gboolean embed;

	// convert parameter self
	self = (GtkPrintOperation*) _self;

	// convert parameter embed
	embed = (gboolean) _embed;

	// call function
	gtk_print_operation_set_embed_page_setup(self, embed);

	// cleanup parameter self

	// cleanup parameter embed
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintOperation_gtk_1print_1operation_1set_1export_1filename
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _filename
)
{
	GtkPrintOperation* self;
	const gchar* filename;

	// convert parameter self
	self = (GtkPrintOperation*) _self;

	// convert parameter filename
	filename = (const gchar*) bindings_java_getString(env, _filename);
	if (filename == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_print_operation_set_export_filename(self, filename);

	// cleanup parameter self

	// cleanup parameter filename
	bindings_java_releaseString(filename);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintOperation_gtk_1print_1operation_1set_1has_1selection
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _hasSelection
)
{
	GtkPrintOperation* self;
	gboolean hasSelection;

	// convert parameter self
	self = (GtkPrintOperation*) _self;

	// convert parameter hasSelection
	hasSelection = (gboolean) _hasSelection;

	// call function
	gtk_print_operation_set_has_selection(self, hasSelection);

	// cleanup parameter self

	// cleanup parameter hasSelection
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintOperation_gtk_1print_1operation_1set_1job_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _jobName
)
{
	GtkPrintOperation* self;
	const gchar* jobName;

	// convert parameter self
	self = (GtkPrintOperation*) _self;

	// convert parameter jobName
	jobName = (const gchar*) bindings_java_getString(env, _jobName);
	if (jobName == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_print_operation_set_job_name(self, jobName);

	// cleanup parameter self

	// cleanup parameter jobName
	bindings_java_releaseString(jobName);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintOperation_gtk_1print_1operation_1set_1n_1pages
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _nPages
)
{
	GtkPrintOperation* self;
	gint nPages;

	// convert parameter self
	self = (GtkPrintOperation*) _self;

	// convert parameter nPages
	nPages = (gint) _nPages;

	// call function
	gtk_print_operation_set_n_pages(self, nPages);

	// cleanup parameter self

	// cleanup parameter nPages
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintOperation_gtk_1print_1operation_1set_1print_1settings
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _printSettings
)
{
	GtkPrintOperation* self;
	GtkPrintSettings* printSettings;

	// convert parameter self
	self = (GtkPrintOperation*) _self;

	// convert parameter printSettings
	printSettings = (GtkPrintSettings*) _printSettings;

	// call function
	gtk_print_operation_set_print_settings(self, printSettings);

	// cleanup parameter self

	// cleanup parameter printSettings
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintOperation_gtk_1print_1operation_1set_1show_1progress
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _showProgress
)
{
	GtkPrintOperation* self;
	gboolean showProgress;

	// convert parameter self
	self = (GtkPrintOperation*) _self;

	// convert parameter showProgress
	showProgress = (gboolean) _showProgress;

	// call function
	gtk_print_operation_set_show_progress(self, showProgress);

	// cleanup parameter self

	// cleanup parameter showProgress
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintOperation_gtk_1print_1operation_1set_1support_1selection
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _supportSelection
)
{
	GtkPrintOperation* self;
	gboolean supportSelection;

	// convert parameter self
	self = (GtkPrintOperation*) _self;

	// convert parameter supportSelection
	supportSelection = (gboolean) _supportSelection;

	// call function
	gtk_print_operation_set_support_selection(self, supportSelection);

	// cleanup parameter self

	// cleanup parameter supportSelection
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintOperation_gtk_1print_1operation_1set_1track_1print_1status
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _trackStatus
)
{
	GtkPrintOperation* self;
	gboolean trackStatus;

	// convert parameter self
	self = (GtkPrintOperation*) _self;

	// convert parameter trackStatus
	trackStatus = (gboolean) _trackStatus;

	// call function
	gtk_print_operation_set_track_print_status(self, trackStatus);

	// cleanup parameter self

	// cleanup parameter trackStatus
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintOperation_gtk_1print_1operation_1set_1unit
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _unit
)
{
	GtkPrintOperation* self;
	GtkUnit unit;

	// convert parameter self
	self = (GtkPrintOperation*) _self;

	// convert parameter unit
	unit = (GtkUnit) _unit;

	// call function
	gtk_print_operation_set_unit(self, unit);

	// cleanup parameter self

	// cleanup parameter unit
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkPrintOperation_gtk_1print_1operation_1set_1use_1full_1page
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _fullPage
)
{
	GtkPrintOperation* self;
	gboolean fullPage;

	// convert parameter self
	self = (GtkPrintOperation*) _self;

	// convert parameter fullPage
	fullPage = (gboolean) _fullPage;

	// call function
	gtk_print_operation_set_use_full_page(self, fullPage);

	// cleanup parameter self

	// cleanup parameter fullPage
}
