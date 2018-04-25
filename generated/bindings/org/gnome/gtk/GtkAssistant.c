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
#include "org_gnome_gtk_GtkAssistant.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkAssistant_gtk_1assistant_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkWidget* result;
	jlong _result;

	// call function
	result = gtk_assistant_new();

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
Java_org_gnome_gtk_GtkAssistant_gtk_1assistant_1add_1action_1widget
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child
)
{
	GtkAssistant* self;
	GtkWidget* child;

	// convert parameter self
	self = (GtkAssistant*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// call function
	gtk_assistant_add_action_widget(self, child);

	// cleanup parameter self

	// cleanup parameter child
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkAssistant_gtk_1assistant_1append_1page
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _page
)
{
	gint result;
	jint _result;
	GtkAssistant* self;
	GtkWidget* page;

	// convert parameter self
	self = (GtkAssistant*) _self;

	// convert parameter page
	page = (GtkWidget*) _page;

	// call function
	result = gtk_assistant_append_page(self, page);

	// cleanup parameter self

	// cleanup parameter page

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAssistant_gtk_1assistant_1commit
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAssistant* self;

	// convert parameter self
	self = (GtkAssistant*) _self;

	// call function
	gtk_assistant_commit(self);

	// cleanup parameter self
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkAssistant_gtk_1assistant_1get_1current_1page
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkAssistant* self;

	// convert parameter self
	self = (GtkAssistant*) _self;

	// call function
	result = gtk_assistant_get_current_page(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkAssistant_gtk_1assistant_1get_1n_1pages
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gint result;
	jint _result;
	GtkAssistant* self;

	// convert parameter self
	self = (GtkAssistant*) _self;

	// call function
	result = gtk_assistant_get_n_pages(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkAssistant_gtk_1assistant_1get_1nth_1page
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _pageNum
)
{
	GtkWidget* result;
	jlong _result;
	GtkAssistant* self;
	gint pageNum;

	// convert parameter self
	self = (GtkAssistant*) _self;

	// convert parameter pageNum
	pageNum = (gint) _pageNum;

	// call function
	result = gtk_assistant_get_nth_page(self, pageNum);

	// cleanup parameter self

	// cleanup parameter pageNum

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
Java_org_gnome_gtk_GtkAssistant_gtk_1assistant_1get_1page_1complete
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _page
)
{
	gboolean result;
	jboolean _result;
	GtkAssistant* self;
	GtkWidget* page;

	// convert parameter self
	self = (GtkAssistant*) _self;

	// convert parameter page
	page = (GtkWidget*) _page;

	// call function
	result = gtk_assistant_get_page_complete(self, page);

	// cleanup parameter self

	// cleanup parameter page

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkAssistant_gtk_1assistant_1get_1page_1has_1padding
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _page
)
{
	gboolean result;
	jboolean _result;
	GtkAssistant* self;
	GtkWidget* page;

	// convert parameter self
	self = (GtkAssistant*) _self;

	// convert parameter page
	page = (GtkWidget*) _page;

	// call function
	result = gtk_assistant_get_page_has_padding(self, page);

	// cleanup parameter self

	// cleanup parameter page

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkAssistant_gtk_1assistant_1get_1page_1header_1image
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _page
)
{
	GdkPixbuf* result;
	jlong _result;
	GtkAssistant* self;
	GtkWidget* page;

	// convert parameter self
	self = (GtkAssistant*) _self;

	// convert parameter page
	page = (GtkWidget*) _page;

	// call function
	result = gtk_assistant_get_page_header_image(self, page);

	// cleanup parameter self

	// cleanup parameter page

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
Java_org_gnome_gtk_GtkAssistant_gtk_1assistant_1get_1page_1side_1image
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _page
)
{
	GdkPixbuf* result;
	jlong _result;
	GtkAssistant* self;
	GtkWidget* page;

	// convert parameter self
	self = (GtkAssistant*) _self;

	// convert parameter page
	page = (GtkWidget*) _page;

	// call function
	result = gtk_assistant_get_page_side_image(self, page);

	// cleanup parameter self

	// cleanup parameter page

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
Java_org_gnome_gtk_GtkAssistant_gtk_1assistant_1get_1page_1title
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _page
)
{
	const gchar* result;
	jstring _result;
	GtkAssistant* self;
	GtkWidget* page;

	// convert parameter self
	self = (GtkAssistant*) _self;

	// convert parameter page
	page = (GtkWidget*) _page;

	// call function
	result = gtk_assistant_get_page_title(self, page);

	// cleanup parameter self

	// cleanup parameter page

	// translate return value to JNI type
	_result = (jstring) bindings_java_newString(env, result);

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkAssistant_gtk_1assistant_1get_1page_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _page
)
{
	GtkAssistantPageType result;
	jint _result;
	GtkAssistant* self;
	GtkWidget* page;

	// convert parameter self
	self = (GtkAssistant*) _self;

	// convert parameter page
	page = (GtkWidget*) _page;

	// call function
	result = gtk_assistant_get_page_type(self, page);

	// cleanup parameter self

	// cleanup parameter page

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkAssistant_gtk_1assistant_1insert_1page
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _page,
	jint _position
)
{
	gint result;
	jint _result;
	GtkAssistant* self;
	GtkWidget* page;
	gint position;

	// convert parameter self
	self = (GtkAssistant*) _self;

	// convert parameter page
	page = (GtkWidget*) _page;

	// convert parameter position
	position = (gint) _position;

	// call function
	result = gtk_assistant_insert_page(self, page, position);

	// cleanup parameter self

	// cleanup parameter page

	// cleanup parameter position

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAssistant_gtk_1assistant_1next_1page
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAssistant* self;

	// convert parameter self
	self = (GtkAssistant*) _self;

	// call function
	gtk_assistant_next_page(self);

	// cleanup parameter self
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkAssistant_gtk_1assistant_1prepend_1page
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _page
)
{
	gint result;
	jint _result;
	GtkAssistant* self;
	GtkWidget* page;

	// convert parameter self
	self = (GtkAssistant*) _self;

	// convert parameter page
	page = (GtkWidget*) _page;

	// call function
	result = gtk_assistant_prepend_page(self, page);

	// cleanup parameter self

	// cleanup parameter page

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAssistant_gtk_1assistant_1previous_1page
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAssistant* self;

	// convert parameter self
	self = (GtkAssistant*) _self;

	// call function
	gtk_assistant_previous_page(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAssistant_gtk_1assistant_1remove_1action_1widget
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _child
)
{
	GtkAssistant* self;
	GtkWidget* child;

	// convert parameter self
	self = (GtkAssistant*) _self;

	// convert parameter child
	child = (GtkWidget*) _child;

	// call function
	gtk_assistant_remove_action_widget(self, child);

	// cleanup parameter self

	// cleanup parameter child
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAssistant_gtk_1assistant_1remove_1page
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _pageNum
)
{
	GtkAssistant* self;
	gint pageNum;

	// convert parameter self
	self = (GtkAssistant*) _self;

	// convert parameter pageNum
	pageNum = (gint) _pageNum;

	// call function
	gtk_assistant_remove_page(self, pageNum);

	// cleanup parameter self

	// cleanup parameter pageNum
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAssistant_gtk_1assistant_1set_1current_1page
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _pageNum
)
{
	GtkAssistant* self;
	gint pageNum;

	// convert parameter self
	self = (GtkAssistant*) _self;

	// convert parameter pageNum
	pageNum = (gint) _pageNum;

	// call function
	gtk_assistant_set_current_page(self, pageNum);

	// cleanup parameter self

	// cleanup parameter pageNum
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAssistant_gtk_1assistant_1set_1page_1complete
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _page,
	jboolean _complete
)
{
	GtkAssistant* self;
	GtkWidget* page;
	gboolean complete;

	// convert parameter self
	self = (GtkAssistant*) _self;

	// convert parameter page
	page = (GtkWidget*) _page;

	// convert parameter complete
	complete = (gboolean) _complete;

	// call function
	gtk_assistant_set_page_complete(self, page, complete);

	// cleanup parameter self

	// cleanup parameter page

	// cleanup parameter complete
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAssistant_gtk_1assistant_1set_1page_1has_1padding
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _page,
	jboolean _hasPadding
)
{
	GtkAssistant* self;
	GtkWidget* page;
	gboolean hasPadding;

	// convert parameter self
	self = (GtkAssistant*) _self;

	// convert parameter page
	page = (GtkWidget*) _page;

	// convert parameter hasPadding
	hasPadding = (gboolean) _hasPadding;

	// call function
	gtk_assistant_set_page_has_padding(self, page, hasPadding);

	// cleanup parameter self

	// cleanup parameter page

	// cleanup parameter hasPadding
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAssistant_gtk_1assistant_1set_1page_1header_1image
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _page,
	jlong _pixbuf
)
{
	GtkAssistant* self;
	GtkWidget* page;
	GdkPixbuf* pixbuf;

	// convert parameter self
	self = (GtkAssistant*) _self;

	// convert parameter page
	page = (GtkWidget*) _page;

	// convert parameter pixbuf
	pixbuf = (GdkPixbuf*) _pixbuf;

	// call function
	gtk_assistant_set_page_header_image(self, page, pixbuf);

	// cleanup parameter self

	// cleanup parameter page

	// cleanup parameter pixbuf
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAssistant_gtk_1assistant_1set_1page_1side_1image
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _page,
	jlong _pixbuf
)
{
	GtkAssistant* self;
	GtkWidget* page;
	GdkPixbuf* pixbuf;

	// convert parameter self
	self = (GtkAssistant*) _self;

	// convert parameter page
	page = (GtkWidget*) _page;

	// convert parameter pixbuf
	pixbuf = (GdkPixbuf*) _pixbuf;

	// call function
	gtk_assistant_set_page_side_image(self, page, pixbuf);

	// cleanup parameter self

	// cleanup parameter page

	// cleanup parameter pixbuf
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAssistant_gtk_1assistant_1set_1page_1title
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _page,
	jstring _title
)
{
	GtkAssistant* self;
	GtkWidget* page;
	const gchar* title;

	// convert parameter self
	self = (GtkAssistant*) _self;

	// convert parameter page
	page = (GtkWidget*) _page;

	// convert parameter title
	title = (const gchar*) bindings_java_getString(env, _title);
	if (title == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_assistant_set_page_title(self, page, title);

	// cleanup parameter self

	// cleanup parameter page

	// cleanup parameter title
	bindings_java_releaseString(title);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAssistant_gtk_1assistant_1set_1page_1type
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _page,
	jint _type
)
{
	GtkAssistant* self;
	GtkWidget* page;
	GtkAssistantPageType type;

	// convert parameter self
	self = (GtkAssistant*) _self;

	// convert parameter page
	page = (GtkWidget*) _page;

	// convert parameter type
	type = (GtkAssistantPageType) _type;

	// call function
	gtk_assistant_set_page_type(self, page, type);

	// cleanup parameter self

	// cleanup parameter page

	// cleanup parameter type
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkAssistant_gtk_1assistant_1update_1buttons_1state
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAssistant* self;

	// convert parameter self
	self = (GtkAssistant*) _self;

	// call function
	gtk_assistant_update_buttons_state(self);

	// cleanup parameter self
}
