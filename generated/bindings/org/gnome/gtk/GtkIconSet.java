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
import org.gnome.gdk.Window;
import org.gnome.gtk.IconSet;
import org.gnome.gtk.IconSize;
import org.gnome.gtk.IconSource;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.StyleContext;
import org.gnome.gtk.TextDirection;
import org.gnome.gtk.Widget;

final class GtkIconSet extends Plumbing
{
    private GtkIconSet() {}

    static final long createIconSet() {
        long result;

        synchronized (lock) {
            result = gtk_icon_set_new();

            return result;
        }
    }

    private static native final long gtk_icon_set_new();

    static final long createIconSetFromPixbuf(Pixbuf pixbuf) {
        long result;

        if (pixbuf == null) {
            throw new IllegalArgumentException("pixbuf can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_set_new_from_pixbuf(pointerOf(pixbuf));

            return result;
        }
    }

    private static native final long gtk_icon_set_new_from_pixbuf(long pixbuf);

    static final void addSource(IconSet self, IconSource source) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (source == null) {
            throw new IllegalArgumentException("source can't be null");
        }

        synchronized (lock) {
            gtk_icon_set_add_source(pointerOf(self), pointerOf(source));
        }
    }

    private static native final void gtk_icon_set_add_source(long self, long source);

    static final IconSet copy(IconSet self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_set_copy(pointerOf(self));

            return (IconSet) boxedFor(IconSet.class, result);
        }
    }

    private static native final long gtk_icon_set_copy(long self);

    @SuppressWarnings("unused")
    static final void getSizes(IconSet self, FIXME sizes, int[] nSizes) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkIconSize**");
    }

    static final IconSet ref(IconSet self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_set_ref(pointerOf(self));

            return (IconSet) boxedFor(IconSet.class, result);
        }
    }

    private static native final long gtk_icon_set_ref(long self);

    @SuppressWarnings("unused")
    static final Pixbuf renderIcon(IconSet self, FIXME style, TextDirection direction, FIXME state, IconSize size, Widget widget, String detail) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkStyle*");
    }

    static final Pixbuf renderIconPixbuf(IconSet self, StyleContext context, IconSize size) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (context == null) {
            throw new IllegalArgumentException("context can't be null");
        }

        if (size == null) {
            throw new IllegalArgumentException("size can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_set_render_icon_pixbuf(pointerOf(self), pointerOf(context), numOf(size));

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long gtk_icon_set_render_icon_pixbuf(long self, long context, int size);

    static final Surface renderIconSurface(IconSet self, StyleContext context, IconSize size, int scale, Window forWindow) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (context == null) {
            throw new IllegalArgumentException("context can't be null");
        }

        if (size == null) {
            throw new IllegalArgumentException("size can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_set_render_icon_surface(pointerOf(self), pointerOf(context), numOf(size), scale, pointerOf(forWindow));

            return (Surface) entityFor(Surface.class,  result);
        }
    }

    private static native final long gtk_icon_set_render_icon_surface(long self, long context, int size, int scale, long forWindow);

    static final void unref(IconSet self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_icon_set_unref(pointerOf(self));
        }
    }

    private static native final void gtk_icon_set_unref(long self);
}

