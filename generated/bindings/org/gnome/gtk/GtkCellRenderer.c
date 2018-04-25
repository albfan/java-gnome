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
#include "org_gnome_gtk_GtkCellRenderer.h"

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkCellRenderer_gtk_1cell_1renderer_1activate
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _event,
	jlong _widget,
	jstring _path,
	jlong _backgroundArea,
	jlong _cellArea,
	jint _flags
)
{
	gboolean result;
	jboolean _result;
	GtkCellRenderer* self;
	GdkEvent* event;
	GtkWidget* widget;
	const gchar* path;
	const GdkRectangle* backgroundArea;
	const GdkRectangle* cellArea;
	GtkCellRendererState flags;

	// convert parameter self
	self = (GtkCellRenderer*) _self;

	// convert parameter event
	event = (GdkEvent*) _event;

	// convert parameter widget
	widget = (GtkWidget*) _widget;

	// convert parameter path
	path = (const gchar*) bindings_java_getString(env, _path);
	if (path == NULL) {
		return  JNI_FALSE; // Java Exception already thrown
	}

	// convert parameter backgroundArea
	backgroundArea = (const GdkRectangle*) _backgroundArea;

	// convert parameter cellArea
	cellArea = (const GdkRectangle*) _cellArea;

	// convert parameter flags
	flags = (GtkCellRendererState) _flags;

	// call function
	result = gtk_cell_renderer_activate(self, event, widget, path, backgroundArea, cellArea, flags);

	// cleanup parameter self

	// cleanup parameter event

	// cleanup parameter widget

	// cleanup parameter path
	bindings_java_releaseString(path);

	// cleanup parameter backgroundArea

	// cleanup parameter cellArea

	// cleanup parameter flags

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCellRenderer_gtk_1cell_1renderer_1get_1aligned_1area
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _widget,
	jint _flags,
	jlong _cellArea,
	jlong _alignedArea
)
{
	GtkCellRenderer* self;
	GtkWidget* widget;
	GtkCellRendererState flags;
	const GdkRectangle* cellArea;
	GdkRectangle* alignedArea;

	// convert parameter self
	self = (GtkCellRenderer*) _self;

	// convert parameter widget
	widget = (GtkWidget*) _widget;

	// convert parameter flags
	flags = (GtkCellRendererState) _flags;

	// convert parameter cellArea
	cellArea = (const GdkRectangle*) _cellArea;

	// convert parameter alignedArea
	alignedArea = (GdkRectangle*) _alignedArea;

	// call function
	gtk_cell_renderer_get_aligned_area(self, widget, flags, cellArea, alignedArea);

	// cleanup parameter self

	// cleanup parameter widget

	// cleanup parameter flags

	// cleanup parameter cellArea

	// cleanup parameter alignedArea
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCellRenderer_gtk_1cell_1renderer_1get_1alignment
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jfloatArray _xalign,
	jfloatArray _yalign
)
{
	GtkCellRenderer* self;
	gfloat* xalign;
	gfloat* yalign;

	// convert parameter self
	self = (GtkCellRenderer*) _self;

	// convert parameter xalign
	if (_xalign == NULL) {
		xalign = NULL;
	} else {
		xalign = (gfloat*) (*env)->GetFloatArrayElements(env, _xalign, NULL);
		if (xalign == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter yalign
	if (_yalign == NULL) {
		yalign = NULL;
	} else {
		yalign = (gfloat*) (*env)->GetFloatArrayElements(env, _yalign, NULL);
		if (yalign == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_cell_renderer_get_alignment(self, xalign, yalign);

	// cleanup parameter self

	// cleanup parameter xalign
	if (xalign != NULL) {
		(*env)->ReleaseFloatArrayElements(env, _xalign, (jfloat*)xalign, 0);
	}

	// cleanup parameter yalign
	if (yalign != NULL) {
		(*env)->ReleaseFloatArrayElements(env, _yalign, (jfloat*)yalign, 0);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCellRenderer_gtk_1cell_1renderer_1get_1fixed_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _width,
	jintArray _height
)
{
	GtkCellRenderer* self;
	gint* width;
	gint* height;

	// convert parameter self
	self = (GtkCellRenderer*) _self;

	// convert parameter width
	if (_width == NULL) {
		width = NULL;
	} else {
		width = (gint*) (*env)->GetIntArrayElements(env, _width, NULL);
		if (width == NULL) {
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
	gtk_cell_renderer_get_fixed_size(self, width, height);

	// cleanup parameter self

	// cleanup parameter width
	if (width != NULL) {
		(*env)->ReleaseIntArrayElements(env, _width, (jint*)width, 0);
	}

	// cleanup parameter height
	if (height != NULL) {
		(*env)->ReleaseIntArrayElements(env, _height, (jint*)height, 0);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCellRenderer_gtk_1cell_1renderer_1get_1padding
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jintArray _xpad,
	jintArray _ypad
)
{
	GtkCellRenderer* self;
	gint* xpad;
	gint* ypad;

	// convert parameter self
	self = (GtkCellRenderer*) _self;

	// convert parameter xpad
	if (_xpad == NULL) {
		xpad = NULL;
	} else {
		xpad = (gint*) (*env)->GetIntArrayElements(env, _xpad, NULL);
		if (xpad == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter ypad
	if (_ypad == NULL) {
		ypad = NULL;
	} else {
		ypad = (gint*) (*env)->GetIntArrayElements(env, _ypad, NULL);
		if (ypad == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_cell_renderer_get_padding(self, xpad, ypad);

	// cleanup parameter self

	// cleanup parameter xpad
	if (xpad != NULL) {
		(*env)->ReleaseIntArrayElements(env, _xpad, (jint*)xpad, 0);
	}

	// cleanup parameter ypad
	if (ypad != NULL) {
		(*env)->ReleaseIntArrayElements(env, _ypad, (jint*)ypad, 0);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCellRenderer_gtk_1cell_1renderer_1get_1preferred_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _widget,
	jintArray _minimumSize,
	jintArray _naturalSize
)
{
	GtkCellRenderer* self;
	GtkWidget* widget;
	gint* minimumSize;
	gint* naturalSize;

	// convert parameter self
	self = (GtkCellRenderer*) _self;

	// convert parameter widget
	widget = (GtkWidget*) _widget;

	// convert parameter minimumSize
	if (_minimumSize == NULL) {
		minimumSize = NULL;
	} else {
		minimumSize = (gint*) (*env)->GetIntArrayElements(env, _minimumSize, NULL);
		if (minimumSize == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter naturalSize
	if (_naturalSize == NULL) {
		naturalSize = NULL;
	} else {
		naturalSize = (gint*) (*env)->GetIntArrayElements(env, _naturalSize, NULL);
		if (naturalSize == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_cell_renderer_get_preferred_height(self, widget, minimumSize, naturalSize);

	// cleanup parameter self

	// cleanup parameter widget

	// cleanup parameter minimumSize
	if (minimumSize != NULL) {
		(*env)->ReleaseIntArrayElements(env, _minimumSize, (jint*)minimumSize, 0);
	}

	// cleanup parameter naturalSize
	if (naturalSize != NULL) {
		(*env)->ReleaseIntArrayElements(env, _naturalSize, (jint*)naturalSize, 0);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCellRenderer_gtk_1cell_1renderer_1get_1preferred_1height_1for_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _widget,
	jint _width,
	jintArray _minimumHeight,
	jintArray _naturalHeight
)
{
	GtkCellRenderer* self;
	GtkWidget* widget;
	gint width;
	gint* minimumHeight;
	gint* naturalHeight;

	// convert parameter self
	self = (GtkCellRenderer*) _self;

	// convert parameter widget
	widget = (GtkWidget*) _widget;

	// convert parameter width
	width = (gint) _width;

	// convert parameter minimumHeight
	if (_minimumHeight == NULL) {
		minimumHeight = NULL;
	} else {
		minimumHeight = (gint*) (*env)->GetIntArrayElements(env, _minimumHeight, NULL);
		if (minimumHeight == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter naturalHeight
	if (_naturalHeight == NULL) {
		naturalHeight = NULL;
	} else {
		naturalHeight = (gint*) (*env)->GetIntArrayElements(env, _naturalHeight, NULL);
		if (naturalHeight == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_cell_renderer_get_preferred_height_for_width(self, widget, width, minimumHeight, naturalHeight);

	// cleanup parameter self

	// cleanup parameter widget

	// cleanup parameter width

	// cleanup parameter minimumHeight
	if (minimumHeight != NULL) {
		(*env)->ReleaseIntArrayElements(env, _minimumHeight, (jint*)minimumHeight, 0);
	}

	// cleanup parameter naturalHeight
	if (naturalHeight != NULL) {
		(*env)->ReleaseIntArrayElements(env, _naturalHeight, (jint*)naturalHeight, 0);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCellRenderer_gtk_1cell_1renderer_1get_1preferred_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _widget,
	jlong _minimumSize,
	jlong _naturalSize
)
{
	GtkCellRenderer* self;
	GtkWidget* widget;
	GtkRequisition* minimumSize;
	GtkRequisition* naturalSize;

	// convert parameter self
	self = (GtkCellRenderer*) _self;

	// convert parameter widget
	widget = (GtkWidget*) _widget;

	// convert parameter minimumSize
	minimumSize = (GtkRequisition*) _minimumSize;

	// convert parameter naturalSize
	naturalSize = (GtkRequisition*) _naturalSize;

	// call function
	gtk_cell_renderer_get_preferred_size(self, widget, minimumSize, naturalSize);

	// cleanup parameter self

	// cleanup parameter widget

	// cleanup parameter minimumSize

	// cleanup parameter naturalSize
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCellRenderer_gtk_1cell_1renderer_1get_1preferred_1width
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _widget,
	jintArray _minimumSize,
	jintArray _naturalSize
)
{
	GtkCellRenderer* self;
	GtkWidget* widget;
	gint* minimumSize;
	gint* naturalSize;

	// convert parameter self
	self = (GtkCellRenderer*) _self;

	// convert parameter widget
	widget = (GtkWidget*) _widget;

	// convert parameter minimumSize
	if (_minimumSize == NULL) {
		minimumSize = NULL;
	} else {
		minimumSize = (gint*) (*env)->GetIntArrayElements(env, _minimumSize, NULL);
		if (minimumSize == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter naturalSize
	if (_naturalSize == NULL) {
		naturalSize = NULL;
	} else {
		naturalSize = (gint*) (*env)->GetIntArrayElements(env, _naturalSize, NULL);
		if (naturalSize == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_cell_renderer_get_preferred_width(self, widget, minimumSize, naturalSize);

	// cleanup parameter self

	// cleanup parameter widget

	// cleanup parameter minimumSize
	if (minimumSize != NULL) {
		(*env)->ReleaseIntArrayElements(env, _minimumSize, (jint*)minimumSize, 0);
	}

	// cleanup parameter naturalSize
	if (naturalSize != NULL) {
		(*env)->ReleaseIntArrayElements(env, _naturalSize, (jint*)naturalSize, 0);
	}
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCellRenderer_gtk_1cell_1renderer_1get_1preferred_1width_1for_1height
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _widget,
	jint _height,
	jintArray _minimumWidth,
	jintArray _naturalWidth
)
{
	GtkCellRenderer* self;
	GtkWidget* widget;
	gint height;
	gint* minimumWidth;
	gint* naturalWidth;

	// convert parameter self
	self = (GtkCellRenderer*) _self;

	// convert parameter widget
	widget = (GtkWidget*) _widget;

	// convert parameter height
	height = (gint) _height;

	// convert parameter minimumWidth
	if (_minimumWidth == NULL) {
		minimumWidth = NULL;
	} else {
		minimumWidth = (gint*) (*env)->GetIntArrayElements(env, _minimumWidth, NULL);
		if (minimumWidth == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter naturalWidth
	if (_naturalWidth == NULL) {
		naturalWidth = NULL;
	} else {
		naturalWidth = (gint*) (*env)->GetIntArrayElements(env, _naturalWidth, NULL);
		if (naturalWidth == NULL) {
			return; // Java Exception already thrown
		}
	}

	// call function
	gtk_cell_renderer_get_preferred_width_for_height(self, widget, height, minimumWidth, naturalWidth);

	// cleanup parameter self

	// cleanup parameter widget

	// cleanup parameter height

	// cleanup parameter minimumWidth
	if (minimumWidth != NULL) {
		(*env)->ReleaseIntArrayElements(env, _minimumWidth, (jint*)minimumWidth, 0);
	}

	// cleanup parameter naturalWidth
	if (naturalWidth != NULL) {
		(*env)->ReleaseIntArrayElements(env, _naturalWidth, (jint*)naturalWidth, 0);
	}
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkCellRenderer_gtk_1cell_1renderer_1get_1request_1mode
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	GtkSizeRequestMode result;
	jint _result;
	GtkCellRenderer* self;

	// convert parameter self
	self = (GtkCellRenderer*) _self;

	// call function
	result = gtk_cell_renderer_get_request_mode(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkCellRenderer_gtk_1cell_1renderer_1get_1sensitive
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkCellRenderer* self;

	// convert parameter self
	self = (GtkCellRenderer*) _self;

	// call function
	result = gtk_cell_renderer_get_sensitive(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCellRenderer_gtk_1cell_1renderer_1get_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _widget,
	jlong _cellArea,
	jintArray _xOffset,
	jintArray _yOffset,
	jintArray _width,
	jintArray _height
)
{
	GtkCellRenderer* self;
	GtkWidget* widget;
	const GdkRectangle* cellArea;
	gint* xOffset;
	gint* yOffset;
	gint* width;
	gint* height;

	// convert parameter self
	self = (GtkCellRenderer*) _self;

	// convert parameter widget
	widget = (GtkWidget*) _widget;

	// convert parameter cellArea
	cellArea = (const GdkRectangle*) _cellArea;

	// convert parameter xOffset
	if (_xOffset == NULL) {
		xOffset = NULL;
	} else {
		xOffset = (gint*) (*env)->GetIntArrayElements(env, _xOffset, NULL);
		if (xOffset == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter yOffset
	if (_yOffset == NULL) {
		yOffset = NULL;
	} else {
		yOffset = (gint*) (*env)->GetIntArrayElements(env, _yOffset, NULL);
		if (yOffset == NULL) {
			return; // Java Exception already thrown
		}
	}

	// convert parameter width
	if (_width == NULL) {
		width = NULL;
	} else {
		width = (gint*) (*env)->GetIntArrayElements(env, _width, NULL);
		if (width == NULL) {
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
	gtk_cell_renderer_get_size(self, widget, cellArea, xOffset, yOffset, width, height);

	// cleanup parameter self

	// cleanup parameter widget

	// cleanup parameter cellArea

	// cleanup parameter xOffset
	if (xOffset != NULL) {
		(*env)->ReleaseIntArrayElements(env, _xOffset, (jint*)xOffset, 0);
	}

	// cleanup parameter yOffset
	if (yOffset != NULL) {
		(*env)->ReleaseIntArrayElements(env, _yOffset, (jint*)yOffset, 0);
	}

	// cleanup parameter width
	if (width != NULL) {
		(*env)->ReleaseIntArrayElements(env, _width, (jint*)width, 0);
	}

	// cleanup parameter height
	if (height != NULL) {
		(*env)->ReleaseIntArrayElements(env, _height, (jint*)height, 0);
	}
}

JNIEXPORT jint JNICALL
Java_org_gnome_gtk_GtkCellRenderer_gtk_1cell_1renderer_1get_1state
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _widget,
	jint _cellState
)
{
	GtkStateFlags result;
	jint _result;
	GtkCellRenderer* self;
	GtkWidget* widget;
	GtkCellRendererState cellState;

	// convert parameter self
	self = (GtkCellRenderer*) _self;

	// convert parameter widget
	widget = (GtkWidget*) _widget;

	// convert parameter cellState
	cellState = (GtkCellRendererState) _cellState;

	// call function
	result = gtk_cell_renderer_get_state(self, widget, cellState);

	// cleanup parameter self

	// cleanup parameter widget

	// cleanup parameter cellState

	// translate return value to JNI type
	_result = (jint) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkCellRenderer_gtk_1cell_1renderer_1get_1visible
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkCellRenderer* self;

	// convert parameter self
	self = (GtkCellRenderer*) _self;

	// call function
	result = gtk_cell_renderer_get_visible(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT jboolean JNICALL
Java_org_gnome_gtk_GtkCellRenderer_gtk_1cell_1renderer_1is_1activatable
(
	JNIEnv* env,
	jclass cls,
	jlong _self
)
{
	gboolean result;
	jboolean _result;
	GtkCellRenderer* self;

	// convert parameter self
	self = (GtkCellRenderer*) _self;

	// call function
	result = gtk_cell_renderer_is_activatable(self);

	// cleanup parameter self

	// translate return value to JNI type
	_result = (jboolean) result;

	// and finally
	return _result;
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCellRenderer_gtk_1cell_1renderer_1render
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _cr,
	jlong _widget,
	jlong _backgroundArea,
	jlong _cellArea,
	jint _flags
)
{
	GtkCellRenderer* self;
	cairo_t* cr;
	GtkWidget* widget;
	const GdkRectangle* backgroundArea;
	const GdkRectangle* cellArea;
	GtkCellRendererState flags;

	// convert parameter self
	self = (GtkCellRenderer*) _self;

	// convert parameter cr
	cr = (cairo_t*) _cr;

	// convert parameter widget
	widget = (GtkWidget*) _widget;

	// convert parameter backgroundArea
	backgroundArea = (const GdkRectangle*) _backgroundArea;

	// convert parameter cellArea
	cellArea = (const GdkRectangle*) _cellArea;

	// convert parameter flags
	flags = (GtkCellRendererState) _flags;

	// call function
	gtk_cell_renderer_render(self, cr, widget, backgroundArea, cellArea, flags);

	// cleanup parameter self

	// cleanup parameter cr

	// cleanup parameter widget

	// cleanup parameter backgroundArea

	// cleanup parameter cellArea

	// cleanup parameter flags
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCellRenderer_gtk_1cell_1renderer_1set_1alignment
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jfloat _xalign,
	jfloat _yalign
)
{
	GtkCellRenderer* self;
	gfloat xalign;
	gfloat yalign;

	// convert parameter self
	self = (GtkCellRenderer*) _self;

	// convert parameter xalign
	xalign = (gfloat) _xalign;

	// convert parameter yalign
	yalign = (gfloat) _yalign;

	// call function
	gtk_cell_renderer_set_alignment(self, xalign, yalign);

	// cleanup parameter self

	// cleanup parameter xalign

	// cleanup parameter yalign
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCellRenderer_gtk_1cell_1renderer_1set_1fixed_1size
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _width,
	jint _height
)
{
	GtkCellRenderer* self;
	gint width;
	gint height;

	// convert parameter self
	self = (GtkCellRenderer*) _self;

	// convert parameter width
	width = (gint) _width;

	// convert parameter height
	height = (gint) _height;

	// call function
	gtk_cell_renderer_set_fixed_size(self, width, height);

	// cleanup parameter self

	// cleanup parameter width

	// cleanup parameter height
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCellRenderer_gtk_1cell_1renderer_1set_1padding
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jint _xpad,
	jint _ypad
)
{
	GtkCellRenderer* self;
	gint xpad;
	gint ypad;

	// convert parameter self
	self = (GtkCellRenderer*) _self;

	// convert parameter xpad
	xpad = (gint) _xpad;

	// convert parameter ypad
	ypad = (gint) _ypad;

	// call function
	gtk_cell_renderer_set_padding(self, xpad, ypad);

	// cleanup parameter self

	// cleanup parameter xpad

	// cleanup parameter ypad
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCellRenderer_gtk_1cell_1renderer_1set_1sensitive
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _sensitive
)
{
	GtkCellRenderer* self;
	gboolean sensitive;

	// convert parameter self
	self = (GtkCellRenderer*) _self;

	// convert parameter sensitive
	sensitive = (gboolean) _sensitive;

	// call function
	gtk_cell_renderer_set_sensitive(self, sensitive);

	// cleanup parameter self

	// cleanup parameter sensitive
}

JNIEXPORT void JNICALL
Java_org_gnome_gtk_GtkCellRenderer_gtk_1cell_1renderer_1set_1visible
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _visible
)
{
	GtkCellRenderer* self;
	gboolean visible;

	// convert parameter self
	self = (GtkCellRenderer*) _self;

	// convert parameter visible
	visible = (gboolean) _visible;

	// call function
	gtk_cell_renderer_set_visible(self, visible);

	// cleanup parameter self

	// cleanup parameter visible
}

JNIEXPORT jlong JNICALL
Java_org_gnome_gtk_GtkCellRenderer_gtk_1cell_1renderer_1start_1editing
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jlong _event,
	jlong _widget,
	jstring _path,
	jlong _backgroundArea,
	jlong _cellArea,
	jint _flags
)
{
	GtkCellEditable* result;
	jlong _result;
	GtkCellRenderer* self;
	GdkEvent* event;
	GtkWidget* widget;
	const gchar* path;
	const GdkRectangle* backgroundArea;
	const GdkRectangle* cellArea;
	GtkCellRendererState flags;

	// convert parameter self
	self = (GtkCellRenderer*) _self;

	// convert parameter event
	event = (GdkEvent*) _event;

	// convert parameter widget
	widget = (GtkWidget*) _widget;

	// convert parameter path
	path = (const gchar*) bindings_java_getString(env, _path);
	if (path == NULL) {
		return 0L; // Java Exception already thrown
	}

	// convert parameter backgroundArea
	backgroundArea = (const GdkRectangle*) _backgroundArea;

	// convert parameter cellArea
	cellArea = (const GdkRectangle*) _cellArea;

	// convert parameter flags
	flags = (GtkCellRendererState) _flags;

	// call function
	result = gtk_cell_renderer_start_editing(self, event, widget, path, backgroundArea, cellArea, flags);

	// cleanup parameter self

	// cleanup parameter event

	// cleanup parameter widget

	// cleanup parameter path
	bindings_java_releaseString(path);

	// cleanup parameter backgroundArea

	// cleanup parameter cellArea

	// cleanup parameter flags

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
Java_org_gnome_gtk_GtkCellRenderer_gtk_1cell_1renderer_1stop_1editing
(
	JNIEnv* env,
	jclass cls,
	jlong _self,
	jboolean _canceled
)
{
	GtkCellRenderer* self;
	gboolean canceled;

	// convert parameter self
	self = (GtkCellRenderer*) _self;

	// convert parameter canceled
	canceled = (gboolean) _canceled;

	// call function
	gtk_cell_renderer_stop_editing(self, canceled);

	// cleanup parameter self

	// cleanup parameter canceled
}
