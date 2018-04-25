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
package org.gnome.gdk;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.freedesktop.cairo.Surface;
import org.gnome.gdk.Cursor;
import org.gnome.gdk.CursorType;
import org.gnome.gdk.Display;
import org.gnome.gdk.Pixbuf;
import org.gnome.gdk.Plumbing;

final class GdkCursor extends Plumbing
{
    private GdkCursor() {}

    static final long createCursor(CursorType cursorType) {
        long result;

        if (cursorType == null) {
            throw new IllegalArgumentException("cursorType can't be null");
        }

        synchronized (lock) {
            result = gdk_cursor_new(numOf(cursorType));

            return result;
        }
    }

    private static native final long gdk_cursor_new(int cursorType);

    static final long createCursorForDisplay(Display display, CursorType cursorType) {
        long result;

        if (display == null) {
            throw new IllegalArgumentException("display can't be null");
        }

        if (cursorType == null) {
            throw new IllegalArgumentException("cursorType can't be null");
        }

        synchronized (lock) {
            result = gdk_cursor_new_for_display(pointerOf(display), numOf(cursorType));

            return result;
        }
    }

    private static native final long gdk_cursor_new_for_display(long display, int cursorType);

    static final long createCursorFromName(Display display, String name) {
        long result;

        if (display == null) {
            throw new IllegalArgumentException("display can't be null");
        }

        if (name == null) {
            throw new IllegalArgumentException("name can't be null");
        }

        synchronized (lock) {
            result = gdk_cursor_new_from_name(pointerOf(display), name);

            return result;
        }
    }

    private static native final long gdk_cursor_new_from_name(long display, String name);

    static final long createCursorFromPixbuf(Display display, Pixbuf pixbuf, int x, int y) {
        long result;

        if (display == null) {
            throw new IllegalArgumentException("display can't be null");
        }

        if (pixbuf == null) {
            throw new IllegalArgumentException("pixbuf can't be null");
        }

        synchronized (lock) {
            result = gdk_cursor_new_from_pixbuf(pointerOf(display), pointerOf(pixbuf), x, y);

            return result;
        }
    }

    private static native final long gdk_cursor_new_from_pixbuf(long display, long pixbuf, int x, int y);

    static final long createCursorFromSurface(Display display, Surface surface, double x, double y) {
        long result;

        if (display == null) {
            throw new IllegalArgumentException("display can't be null");
        }

        if (surface == null) {
            throw new IllegalArgumentException("surface can't be null");
        }

        synchronized (lock) {
            result = gdk_cursor_new_from_surface(pointerOf(display), pointerOf(surface), x, y);

            return result;
        }
    }

    private static native final long gdk_cursor_new_from_surface(long display, long surface, double x, double y);

    static final CursorType getCursorType(Cursor self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_cursor_get_cursor_type(pointerOf(self));

            return (CursorType) enumFor(CursorType.class, result);
        }
    }

    private static native final int gdk_cursor_get_cursor_type(long self);

    static final Display getDisplay(Cursor self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_cursor_get_display(pointerOf(self));

            return (Display) objectFor(result);
        }
    }

    private static native final long gdk_cursor_get_display(long self);

    static final Pixbuf getImage(Cursor self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_cursor_get_image(pointerOf(self));

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long gdk_cursor_get_image(long self);

    static final Surface getSurface(Cursor self, double[] xHot, double[] yHot) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_cursor_get_surface(pointerOf(self), xHot, yHot);

            return (Surface) entityFor(Surface.class,  result);
        }
    }

    private static native final long gdk_cursor_get_surface(long self, double[] xHot, double[] yHot);

    static final Cursor ref(Cursor self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_cursor_ref(pointerOf(self));

            return (Cursor) objectFor(result);
        }
    }

    private static native final long gdk_cursor_ref(long self);

    static final void unref(Cursor self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_cursor_unref(pointerOf(self));
        }
    }

    private static native final void gdk_cursor_unref(long self);
}

