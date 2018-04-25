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
#include "org_gnome_gtk_GtkMenuToolButton.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkMenuToolButton_gtk_1menu_1tool_1button_1new
(
	JNIEnv* env,
	jclass cls,
	jlong _iconWidget,
	jstring _label
)
{
	GtkToolItem* result;
	jlong _result;
	GtkWidget* iconWidget;
	const gchar* label;

	// convert parameter iconWidget
	iconWidget = (GtkWidget*) _iconWidget;

	// convert parameter label
	if (_label == NULL) {
		label = NULL;
	} else {
		label = (const gchar*) bindings_java_getString(env, _label);
		if (label == NULL) {
			return 0L; // Java Exception already thrown
		}
	}

	// call function
	result = gtk_menu_tool_button_new(iconWidget, label);

	// cleanup parameter iconWidget

	// cleanup parameter label
	if (label != NULL) {
		bindings_java_releaseString(label);
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
Java_org_gnome_gtk_GtkMenuToolButton_gtk_1menu_1tool_1button_1new_1from_1stock
(
	JNIEnv* env,
	jclass cls,
	jstring _stockId
)
{
	GtkToolItem* result;
	jlong _result;
	const gchar* stockId;

	// convert parameter stockId
	stockId = (const gchar*) bindings_java_getString(env, _stockId);
	if (stockId == NULL) {
		return 0L; // Java Exception already thrown
	}

	// call function
	result = gtk_menu_tool_button_new_from_stock(stockId);

	// cleanup parameter stockId
	bindings_java_releaseString(stockId);

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
Java_org_gnome_gtk_GtkMenuToolButton_gtk_1menu_1tool_1button_1get_1menu
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkWidget* result;
	jlong _result;
	GtkMenuToolButton* self;

	// convert parameter self
	self = (GtkMenuToolButton*) _self;

	// call function
	result = gtk_menu_tool_button_get_menu(self);

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
Java_org_gnome_gtk_GtkMenuToolButton_gtk_1menu_1tool_1button_1set_1arrow_1tooltip_1markup
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _markup
)
{
	GtkMenuToolButton* self;
	const gchar* markup;

	// convert parameter self
	self = (GtkMenuToolButton*) _self;

	// convert parameter markup
	markup = (const gchar*) bindings_java_getString(env, _markup);
	if (markup == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_menu_tool_button_set_arrow_tooltip_markup(self, markup);

	// cleanup parameter self

	// cleanup parameter markup
	bindings_java_releaseString(markup);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenuToolButton_gtk_1menu_1tool_1button_1set_1arrow_1tooltip_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _text
)
{
	GtkMenuToolButton* self;
	const gchar* text;

	// convert parameter self
	self = (GtkMenuToolButton*) _self;

	// convert parameter text
	text = (const gchar*) bindings_java_getString(env, _text);
	if (text == NULL) {
		return; // Java Exception already thrown
	}

	// call function
	gtk_menu_tool_button_set_arrow_tooltip_text(self, text);

	// cleanup parameter self

	// cleanup parameter text
	bindings_java_releaseString(text);
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkMenuToolButton_gtk_1menu_1tool_1button_1set_1menu
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _menu
)
{
	GtkMenuToolButton* self;
	GtkWidget* menu;

	// convert parameter self
	self = (GtkMenuToolButton*) _self;

	// convert parameter menu
	menu = (GtkWidget*) _menu;

	// call function
	gtk_menu_tool_button_set_menu(self, menu);

	// cleanup parameter self

	// cleanup parameter menu
}
