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
#include "org_gnome_gtk_GtkToolPalette.h"

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkToolPalette_gtk_1tool_1palette_1new
(
	JNIEnv* env,
	jclass cls
)
{
	GtkWidget* result;
	jlong _result;

	// call function
	result = gtk_tool_palette_new();

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
Java_org_gnome_gtk_GtkToolPalette_gtk_1tool_1palette_1add_1drag_1dest
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _widget,
	jint _flags,
	jint _targets,
	jint _actions
)
{
	GtkToolPalette* self;
	GtkWidget* widget;
	GtkDestDefaults flags;
	GtkToolPaletteDragTargets targets;
	GdkDragAction actions;

	// convert parameter self
	self = (GtkToolPalette*) _self;

	// convert parameter widget
	widget = (GtkWidget*) _widget;

	// convert parameter flags
	flags = (GtkDestDefaults) _flags;

	// convert parameter targets
	targets = (GtkToolPaletteDragTargets) _targets;

	// convert parameter actions
	actions = (GdkDragAction) _actions;

	// call function
	gtk_tool_palette_add_drag_dest(self, widget, flags, targets, actions);

	// cleanup parameter self

	// cleanup parameter widget

	// cleanup parameter flags

	// cleanup parameter targets

	// cleanup parameter actions
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkToolPalette_gtk_1tool_1palette_1get_1drag_1item
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _selection
)
{
	GtkWidget* result;
	jlong _result;
	GtkToolPalette* self;
	const GtkSelectionData* selection;

	// convert parameter self
	self = (GtkToolPalette*) _self;

	// convert parameter selection
	selection = (const GtkSelectionData*) _selection;

	// call function
	result = gtk_tool_palette_get_drag_item(self, selection);

	// cleanup parameter self

	// cleanup parameter selection

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
Java_org_gnome_gtk_GtkToolPalette_gtk_1tool_1palette_1get_1drop_1group
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _x,
	jint _y
)
{
	GtkToolItemGroup* result;
	jlong _result;
	GtkToolPalette* self;
	gint x;
	gint y;

	// convert parameter self
	self = (GtkToolPalette*) _self;

	// convert parameter x
	x = (gint) _x;

	// convert parameter y
	y = (gint) _y;

	// call function
	result = gtk_tool_palette_get_drop_group(self, x, y);

	// cleanup parameter self

	// cleanup parameter x

	// cleanup parameter y

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
Java_org_gnome_gtk_GtkToolPalette_gtk_1tool_1palette_1get_1drop_1item
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _x,
	jint _y
)
{
	GtkToolItem* result;
	jlong _result;
	GtkToolPalette* self;
	gint x;
	gint y;

	// convert parameter self
	self = (GtkToolPalette*) _self;

	// convert parameter x
	x = (gint) _x;

	// convert parameter y
	y = (gint) _y;

	// call function
	result = gtk_tool_palette_get_drop_item(self, x, y);

	// cleanup parameter self

	// cleanup parameter x

	// cleanup parameter y

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
Java_org_gnome_gtk_GtkToolPalette_gtk_1tool_1palette_1get_1exclusive
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _group
)
{
	gboolean result;
	jboolean _result;
	GtkToolPalette* self;
	GtkToolItemGroup* group;

	// convert parameter self
	self = (GtkToolPalette*) _self;

	// convert parameter group
	group = (GtkToolItemGroup*) _group;

	// call function
	result = gtk_tool_palette_get_exclusive(self, group);

	// cleanup parameter self

	// cleanup parameter group

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkToolPalette_gtk_1tool_1palette_1get_1expand
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _group
)
{
	gboolean result;
	jboolean _result;
	GtkToolPalette* self;
	GtkToolItemGroup* group;

	// convert parameter self
	self = (GtkToolPalette*) _self;

	// convert parameter group
	group = (GtkToolItemGroup*) _group;

	// call function
	result = gtk_tool_palette_get_expand(self, group);

	// cleanup parameter self

	// cleanup parameter group

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkToolPalette_gtk_1tool_1palette_1get_1group_1position
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _group
)
{
	gint result;
	jint _result;
	GtkToolPalette* self;
	GtkToolItemGroup* group;

	// convert parameter self
	self = (GtkToolPalette*) _self;

	// convert parameter group
	group = (GtkToolItemGroup*) _group;

	// call function
	result = gtk_tool_palette_get_group_position(self, group);

	// cleanup parameter self

	// cleanup parameter group

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkToolPalette_gtk_1tool_1palette_1get_1hadjustment
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAdjustment* result;
	jlong _result;
	GtkToolPalette* self;

	// convert parameter self
	self = (GtkToolPalette*) _self;

	// call function
	result = gtk_tool_palette_get_hadjustment(self);

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
Java_org_gnome_gtk_GtkToolPalette_gtk_1tool_1palette_1get_1icon_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkIconSize result;
	jint _result;
	GtkToolPalette* self;

	// convert parameter self
	self = (GtkToolPalette*) _self;

	// call function
	result = gtk_tool_palette_get_icon_size(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkToolPalette_gtk_1tool_1palette_1get_1style
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkToolbarStyle result;
	jint _result;
	GtkToolPalette* self;

	// convert parameter self
	self = (GtkToolPalette*) _self;

	// call function
	result = gtk_tool_palette_get_style(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkToolPalette_gtk_1tool_1palette_1get_1vadjustment
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkAdjustment* result;
	jlong _result;
	GtkToolPalette* self;

	// convert parameter self
	self = (GtkToolPalette*) _self;

	// call function
	result = gtk_tool_palette_get_vadjustment(self);

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
Java_org_gnome_gtk_GtkToolPalette_gtk_1tool_1palette_1set_1drag_1source
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _targets
)
{
	GtkToolPalette* self;
	GtkToolPaletteDragTargets targets;

	// convert parameter self
	self = (GtkToolPalette*) _self;

	// convert parameter targets
	targets = (GtkToolPaletteDragTargets) _targets;

	// call function
	gtk_tool_palette_set_drag_source(self, targets);

	// cleanup parameter self

	// cleanup parameter targets
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkToolPalette_gtk_1tool_1palette_1set_1exclusive
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _group,
	jboolean _exclusive
)
{
	GtkToolPalette* self;
	GtkToolItemGroup* group;
	gboolean exclusive;

	// convert parameter self
	self = (GtkToolPalette*) _self;

	// convert parameter group
	group = (GtkToolItemGroup*) _group;

	// convert parameter exclusive
	exclusive = (gboolean) _exclusive;

	// call function
	gtk_tool_palette_set_exclusive(self, group, exclusive);

	// cleanup parameter self

	// cleanup parameter group

	// cleanup parameter exclusive
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkToolPalette_gtk_1tool_1palette_1set_1expand
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _group,
	jboolean _expand
)
{
	GtkToolPalette* self;
	GtkToolItemGroup* group;
	gboolean expand;

	// convert parameter self
	self = (GtkToolPalette*) _self;

	// convert parameter group
	group = (GtkToolItemGroup*) _group;

	// convert parameter expand
	expand = (gboolean) _expand;

	// call function
	gtk_tool_palette_set_expand(self, group, expand);

	// cleanup parameter self

	// cleanup parameter group

	// cleanup parameter expand
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkToolPalette_gtk_1tool_1palette_1set_1group_1position
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _group,
	jint _position
)
{
	GtkToolPalette* self;
	GtkToolItemGroup* group;
	gint position;

	// convert parameter self
	self = (GtkToolPalette*) _self;

	// convert parameter group
	group = (GtkToolItemGroup*) _group;

	// convert parameter position
	position = (gint) _position;

	// call function
	gtk_tool_palette_set_group_position(self, group, position);

	// cleanup parameter self

	// cleanup parameter group

	// cleanup parameter position
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkToolPalette_gtk_1tool_1palette_1set_1icon_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _iconSize
)
{
	GtkToolPalette* self;
	GtkIconSize iconSize;

	// convert parameter self
	self = (GtkToolPalette*) _self;

	// convert parameter iconSize
	iconSize = (GtkIconSize) _iconSize;

	// call function
	gtk_tool_palette_set_icon_size(self, iconSize);

	// cleanup parameter self

	// cleanup parameter iconSize
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkToolPalette_gtk_1tool_1palette_1set_1style
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _style
)
{
	GtkToolPalette* self;
	GtkToolbarStyle style;

	// convert parameter self
	self = (GtkToolPalette*) _self;

	// convert parameter style
	style = (GtkToolbarStyle) _style;

	// call function
	gtk_tool_palette_set_style(self, style);

	// cleanup parameter self

	// cleanup parameter style
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkToolPalette_gtk_1tool_1palette_1unset_1icon_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkToolPalette* self;

	// convert parameter self
	self = (GtkToolPalette*) _self;

	// call function
	gtk_tool_palette_unset_icon_size(self);

	// cleanup parameter self
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkToolPalette_gtk_1tool_1palette_1unset_1style
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkToolPalette* self;

	// convert parameter self
	self = (GtkToolPalette*) _self;

	// call function
	gtk_tool_palette_unset_style(self);

	// cleanup parameter self
}
