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
#include "org_gnome_gtk_GtkTooltip.h"

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTooltip_gtk_1tooltip_1set_1custom
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _customWidget
)
{
	GtkTooltip* self;
	GtkWidget* customWidget;

	// convert parameter self
	self = (GtkTooltip*) _self;

	// convert parameter customWidget
	customWidget = (GtkWidget*) _customWidget;

	// call function
	gtk_tooltip_set_custom(self, customWidget);

	// cleanup parameter self

	// cleanup parameter customWidget
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTooltip_gtk_1tooltip_1set_1icon
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _pixbuf
)
{
	GtkTooltip* self;
	GdkPixbuf* pixbuf;

	// convert parameter self
	self = (GtkTooltip*) _self;

	// convert parameter pixbuf
	pixbuf = (GdkPixbuf*) _pixbuf;

	// call function
	gtk_tooltip_set_icon(self, pixbuf);

	// cleanup parameter self

	// cleanup parameter pixbuf
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTooltip_gtk_1tooltip_1set_1icon_1from_1icon_1name
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _iconName,
	jint _size
)
{
	GtkTooltip* self;
	const gchar* iconName;
	GtkIconSize size;

	// convert parameter self
	self = (GtkTooltip*) _self;

	// convert parameter iconName
	if (_iconName == NULL) {
		iconName = NULL;
	} else {
		iconName = (const gchar*) bindings_java_getString(env, _iconName);
		if (iconName == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter size
	size = (GtkIconSize) _size;

	// call function
	gtk_tooltip_set_icon_from_icon_name(self, iconName, size);

	// cleanup parameter self

	// cleanup parameter iconName
	if (iconName != NULL) {
		bindings_java_releaseString(iconName);
	}

	// cleanup parameter size
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTooltip_gtk_1tooltip_1set_1icon_1from_1stock
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _stockId,
	jint _size
)
{
	GtkTooltip* self;
	const gchar* stockId;
	GtkIconSize size;

	// convert parameter self
	self = (GtkTooltip*) _self;

	// convert parameter stockId
	if (_stockId == NULL) {
		stockId = NULL;
	} else {
		stockId = (const gchar*) bindings_java_getString(env, _stockId);
		if (stockId == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter size
	size = (GtkIconSize) _size;

	// call function
	gtk_tooltip_set_icon_from_stock(self, stockId, size);

	// cleanup parameter self

	// cleanup parameter stockId
	if (stockId != NULL) {
		bindings_java_releaseString(stockId);
	}

	// cleanup parameter size
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTooltip_gtk_1tooltip_1set_1markup
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _markup
)
{
	GtkTooltip* self;
	const gchar* markup;

	// convert parameter self
	self = (GtkTooltip*) _self;

	// convert parameter markup
	if (_markup == NULL) {
		markup = NULL;
	} else {
		markup = (const gchar*) bindings_java_getString(env, _markup);
		if (markup == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_tooltip_set_markup(self, markup);

	// cleanup parameter self

	// cleanup parameter markup
	if (markup != NULL) {
		bindings_java_releaseString(markup);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTooltip_gtk_1tooltip_1set_1text
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jstring _text
)
{
	GtkTooltip* self;
	const gchar* text;

	// convert parameter self
	self = (GtkTooltip*) _self;

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
	gtk_tooltip_set_text(self, text);

	// cleanup parameter self

	// cleanup parameter text
	if (text != NULL) {
		bindings_java_releaseString(text);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTooltip_gtk_1tooltip_1set_1tip_1area
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _rect
)
{
	GtkTooltip* self;
	const GdkRectangle* rect;

	// convert parameter self
	self = (GtkTooltip*) _self;

	// convert parameter rect
	rect = (const GdkRectangle*) _rect;

	// call function
	gtk_tooltip_set_tip_area(self, rect);

	// cleanup parameter self

	// cleanup parameter rect
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkTooltip_gtk_1tooltip_1trigger_1tooltip_1query
(
	JNIEnv* env,
	jclass cls,
	jlong _display
)
{
	GdkDisplay* display;

	// convert parameter display
	display = (GdkDisplay*) _display;

	// call function
	gtk_tooltip_trigger_tooltip_query(display);

	// cleanup parameter display
}
