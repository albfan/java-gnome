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

import org.freedesktop.bindings.BlacklistedMethodError;
import org.freedesktop.bindings.FIXME;
import org.gnome.gdk.Cursor;
import org.gnome.gdk.Plumbing;
import org.gnome.gdk.Visual;
import org.gnome.gdk.WindowType;
import org.gnome.gdk.WindowTypeHint;

final class GdkWindowAttr extends Plumbing
{
    private GdkWindowAttr() {}

    static final String getTitle(WindowAttr self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_attr_get_title(pointerOf(self));

            return result;
        }
    }

    private static native final String gdk_window_attr_get_title(long self);

    static final void setTitle(WindowAttr self, String title) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (title == null) {
            throw new IllegalArgumentException("title can't be null");
        }

        synchronized (lock) {
            gdk_window_attr_set_title(pointerOf(self), title);
        }
    }

    private static native final void gdk_window_attr_set_title(long self, String title);

    static final int getEventMask(WindowAttr self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_attr_get_event_mask(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_window_attr_get_event_mask(long self);

    static final void setEventMask(WindowAttr self, int eventMask) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_attr_set_event_mask(pointerOf(self), eventMask);
        }
    }

    private static native final void gdk_window_attr_set_event_mask(long self, int eventMask);

    static final int getX(WindowAttr self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_attr_get_x(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_window_attr_get_x(long self);

    static final void setX(WindowAttr self, int x) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_attr_set_x(pointerOf(self), x);
        }
    }

    private static native final void gdk_window_attr_set_x(long self, int x);

    static final int getY(WindowAttr self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_attr_get_y(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_window_attr_get_y(long self);

    static final void setY(WindowAttr self, int y) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_attr_set_y(pointerOf(self), y);
        }
    }

    private static native final void gdk_window_attr_set_y(long self, int y);

    static final int getWidth(WindowAttr self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_attr_get_width(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_window_attr_get_width(long self);

    static final void setWidth(WindowAttr self, int width) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_attr_set_width(pointerOf(self), width);
        }
    }

    private static native final void gdk_window_attr_set_width(long self, int width);

    static final int getHeight(WindowAttr self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_attr_get_height(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_window_attr_get_height(long self);

    static final void setHeight(WindowAttr self, int height) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_attr_set_height(pointerOf(self), height);
        }
    }

    private static native final void gdk_window_attr_set_height(long self, int height);

    @SuppressWarnings("unused")
    static final FIXME getWclass(WindowAttr self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkWindowWindowClass");
    }

    @SuppressWarnings("unused")
    static final void setWclass(WindowAttr self, FIXME wclass) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkWindowWindowClass");
    }

    static final Visual getVisual(WindowAttr self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_attr_get_visual(pointerOf(self));

            return (Visual) objectFor(result);
        }
    }

    private static native final long gdk_window_attr_get_visual(long self);

    static final void setVisual(WindowAttr self, Visual visual) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (visual == null) {
            throw new IllegalArgumentException("visual can't be null");
        }

        synchronized (lock) {
            gdk_window_attr_set_visual(pointerOf(self), pointerOf(visual));
        }
    }

    private static native final void gdk_window_attr_set_visual(long self, long visual);

    static final WindowType getWindowType(WindowAttr self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_attr_get_window_type(pointerOf(self));

            return (WindowType) enumFor(WindowType.class, result);
        }
    }

    private static native final int gdk_window_attr_get_window_type(long self);

    static final void setWindowType(WindowAttr self, WindowType windowType) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (windowType == null) {
            throw new IllegalArgumentException("windowType can't be null");
        }

        synchronized (lock) {
            gdk_window_attr_set_window_type(pointerOf(self), numOf(windowType));
        }
    }

    private static native final void gdk_window_attr_set_window_type(long self, int windowType);

    static final Cursor getCursor(WindowAttr self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_attr_get_cursor(pointerOf(self));

            return (Cursor) objectFor(result);
        }
    }

    private static native final long gdk_window_attr_get_cursor(long self);

    static final void setCursor(WindowAttr self, Cursor cursor) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (cursor == null) {
            throw new IllegalArgumentException("cursor can't be null");
        }

        synchronized (lock) {
            gdk_window_attr_set_cursor(pointerOf(self), pointerOf(cursor));
        }
    }

    private static native final void gdk_window_attr_set_cursor(long self, long cursor);

    static final String getWmclassName(WindowAttr self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_attr_get_wmclass_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gdk_window_attr_get_wmclass_name(long self);

    static final void setWmclassName(WindowAttr self, String wmclassName) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (wmclassName == null) {
            throw new IllegalArgumentException("wmclassName can't be null");
        }

        synchronized (lock) {
            gdk_window_attr_set_wmclass_name(pointerOf(self), wmclassName);
        }
    }

    private static native final void gdk_window_attr_set_wmclass_name(long self, String wmclassName);

    static final String getWmclassClass(WindowAttr self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_attr_get_wmclass_class(pointerOf(self));

            return result;
        }
    }

    private static native final String gdk_window_attr_get_wmclass_class(long self);

    static final void setWmclassClass(WindowAttr self, String wmclassClass) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (wmclassClass == null) {
            throw new IllegalArgumentException("wmclassClass can't be null");
        }

        synchronized (lock) {
            gdk_window_attr_set_wmclass_class(pointerOf(self), wmclassClass);
        }
    }

    private static native final void gdk_window_attr_set_wmclass_class(long self, String wmclassClass);

    static final boolean getOverrideRedirect(WindowAttr self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_attr_get_override_redirect(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_window_attr_get_override_redirect(long self);

    static final void setOverrideRedirect(WindowAttr self, boolean overrideRedirect) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_window_attr_set_override_redirect(pointerOf(self), overrideRedirect);
        }
    }

    private static native final void gdk_window_attr_set_override_redirect(long self, boolean overrideRedirect);

    static final WindowTypeHint getTypeHint(WindowAttr self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_window_attr_get_type_hint(pointerOf(self));

            return (WindowTypeHint) enumFor(WindowTypeHint.class, result);
        }
    }

    private static native final int gdk_window_attr_get_type_hint(long self);

    static final void setTypeHint(WindowAttr self, WindowTypeHint typeHint) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (typeHint == null) {
            throw new IllegalArgumentException("typeHint can't be null");
        }

        synchronized (lock) {
            gdk_window_attr_set_type_hint(pointerOf(self), numOf(typeHint));
        }
    }

    private static native final void gdk_window_attr_set_type_hint(long self, int typeHint);
}

