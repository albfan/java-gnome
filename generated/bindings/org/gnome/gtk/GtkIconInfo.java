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
package org.gnome.gtk;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.freedesktop.bindings.BlacklistedMethodError;
import org.freedesktop.bindings.FIXME;
import org.freedesktop.cairo.Surface;
import org.gnome.gdk.Pixbuf;
import org.gnome.gdk.Point;
import org.gnome.gdk.RGBA;
import org.gnome.gdk.Rectangle;
import org.gnome.gdk.Window;
import org.gnome.glib.GlibException;
import org.gnome.gtk.IconInfo;
import org.gnome.gtk.IconTheme;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.StyleContext;

final class GtkIconInfo extends Plumbing
{
    private GtkIconInfo() {}

    static final long createIconInfoForPixbuf(IconTheme iconTheme, Pixbuf pixbuf) {
        long result;

        if (iconTheme == null) {
            throw new IllegalArgumentException("iconTheme can't be null");
        }

        if (pixbuf == null) {
            throw new IllegalArgumentException("pixbuf can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_info_new_for_pixbuf(pointerOf(iconTheme), pointerOf(pixbuf));

            return result;
        }
    }

    private static native final long gtk_icon_info_new_for_pixbuf(long iconTheme, long pixbuf);

    static final IconInfo copy(IconInfo self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_info_copy(pointerOf(self));

            return (IconInfo) objectFor(result);
        }
    }

    private static native final long gtk_icon_info_copy(long self);

    static final void free(IconInfo self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_icon_info_free(pointerOf(self));
        }
    }

    private static native final void gtk_icon_info_free(long self);

    static final boolean getAttachPoints(IconInfo self, Point[] points, int[] nPoints) {
        boolean result;
        long[] _points;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _points = pointersOf(points);

        synchronized (lock) {
            result = gtk_icon_info_get_attach_points(pointerOf(self), _points, nPoints);
            fillBoxedArray(Point.class, points, _points);

            return result;
        }
    }

    private static native final boolean gtk_icon_info_get_attach_points(long self, long[] points, int[] nPoints);

    static final int getBaseScale(IconInfo self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_info_get_base_scale(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_icon_info_get_base_scale(long self);

    static final int getBaseSize(IconInfo self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_info_get_base_size(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_icon_info_get_base_size(long self);

    static final Pixbuf getBuiltinPixbuf(IconInfo self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_info_get_builtin_pixbuf(pointerOf(self));

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long gtk_icon_info_get_builtin_pixbuf(long self);

    static final String getDisplayName(IconInfo self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_info_get_display_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_icon_info_get_display_name(long self);

    static final boolean getEmbeddedRect(IconInfo self, Rectangle rectangle) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_info_get_embedded_rect(pointerOf(self), pointerOf(rectangle));

            return result;
        }
    }

    private static native final boolean gtk_icon_info_get_embedded_rect(long self, long rectangle);

    static final String getFilename(IconInfo self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_info_get_filename(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_icon_info_get_filename(long self);

    static final boolean isSymbolic(IconInfo self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_info_is_symbolic(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_icon_info_is_symbolic(long self);

    static final Pixbuf loadIcon(IconInfo self) throws GlibException {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_info_load_icon(pointerOf(self));

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long gtk_icon_info_load_icon(long self) throws GlibException;

    @SuppressWarnings("unused")
    static final void loadIconAsync(IconInfo self, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GCancellable*");
    }

    @SuppressWarnings("unused")
    static final Pixbuf loadIconFinish(IconInfo self, FIXME res) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GAsyncResult*");
    }

    static final Surface loadSurface(IconInfo self, Window forWindow) throws GlibException {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_info_load_surface(pointerOf(self), pointerOf(forWindow));

            return (Surface) entityFor(Surface.class,  result);
        }
    }

    private static native final long gtk_icon_info_load_surface(long self, long forWindow) throws GlibException;

    static final Pixbuf loadSymbolic(IconInfo self, RGBA fg, RGBA successColor, RGBA warningColor, RGBA errorColor, boolean[] wasSymbolic) throws GlibException {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (fg == null) {
            throw new IllegalArgumentException("fg can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_info_load_symbolic(pointerOf(self), pointerOf(fg), pointerOf(successColor), pointerOf(warningColor), pointerOf(errorColor), wasSymbolic);

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long gtk_icon_info_load_symbolic(long self, long fg, long successColor, long warningColor, long errorColor, boolean[] wasSymbolic) throws GlibException;

    @SuppressWarnings("unused")
    static final void loadSymbolicAsync(IconInfo self, RGBA fg, RGBA successColor, RGBA warningColor, RGBA errorColor, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GCancellable*");
    }

    @SuppressWarnings("unused")
    static final Pixbuf loadSymbolicFinish(IconInfo self, FIXME res, boolean[] wasSymbolic) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GAsyncResult*");
    }

    static final Pixbuf loadSymbolicForContext(IconInfo self, StyleContext context, boolean[] wasSymbolic) throws GlibException {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (context == null) {
            throw new IllegalArgumentException("context can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_info_load_symbolic_for_context(pointerOf(self), pointerOf(context), wasSymbolic);

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long gtk_icon_info_load_symbolic_for_context(long self, long context, boolean[] wasSymbolic) throws GlibException;

    @SuppressWarnings("unused")
    static final void loadSymbolicForContextAsync(IconInfo self, StyleContext context, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GCancellable*");
    }

    @SuppressWarnings("unused")
    static final Pixbuf loadSymbolicForContextFinish(IconInfo self, FIXME res, boolean[] wasSymbolic) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GAsyncResult*");
    }

    @SuppressWarnings("unused")
    static final Pixbuf loadSymbolicForStyle(IconInfo self, FIXME style, FIXME state, boolean[] wasSymbolic) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkStyle*");
    }

    static final void setRawCoordinates(IconInfo self, boolean rawCoordinates) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_icon_info_set_raw_coordinates(pointerOf(self), rawCoordinates);
        }
    }

    private static native final void gtk_icon_info_set_raw_coordinates(long self, boolean rawCoordinates);
}

