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
import org.gnome.gdk.Pixbuf;
import org.gnome.gtk.IconSize;
import org.gnome.gtk.IconSource;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.TextDirection;

final class GtkIconSource extends Plumbing
{
    private GtkIconSource() {}

    static final long createIconSource() {
        long result;

        synchronized (lock) {
            result = gtk_icon_source_new();

            return result;
        }
    }

    private static native final long gtk_icon_source_new();

    static final IconSource copy(IconSource self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_source_copy(pointerOf(self));

            return (IconSource) boxedFor(IconSource.class, result);
        }
    }

    private static native final long gtk_icon_source_copy(long self);

    static final void free(IconSource self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_icon_source_free(pointerOf(self));
        }
    }

    private static native final void gtk_icon_source_free(long self);

    static final TextDirection getDirection(IconSource self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_source_get_direction(pointerOf(self));

            return (TextDirection) enumFor(TextDirection.class, result);
        }
    }

    private static native final int gtk_icon_source_get_direction(long self);

    static final boolean getDirectionWildcarded(IconSource self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_source_get_direction_wildcarded(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_icon_source_get_direction_wildcarded(long self);

    static final String getFilename(IconSource self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_source_get_filename(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_icon_source_get_filename(long self);

    static final String getIconName(IconSource self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_source_get_icon_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_icon_source_get_icon_name(long self);

    static final Pixbuf getPixbuf(IconSource self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_source_get_pixbuf(pointerOf(self));

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long gtk_icon_source_get_pixbuf(long self);

    static final IconSize getSize(IconSource self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_source_get_size(pointerOf(self));

            return (IconSize) enumFor(IconSize.class, result);
        }
    }

    private static native final int gtk_icon_source_get_size(long self);

    static final boolean getSizeWildcarded(IconSource self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_source_get_size_wildcarded(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_icon_source_get_size_wildcarded(long self);

    @SuppressWarnings("unused")
    static final FIXME getState(IconSource self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkStateType");
    }

    static final boolean getStateWildcarded(IconSource self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_icon_source_get_state_wildcarded(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_icon_source_get_state_wildcarded(long self);

    static final void setDirection(IconSource self, TextDirection direction) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (direction == null) {
            throw new IllegalArgumentException("direction can't be null");
        }

        synchronized (lock) {
            gtk_icon_source_set_direction(pointerOf(self), numOf(direction));
        }
    }

    private static native final void gtk_icon_source_set_direction(long self, int direction);

    static final void setDirectionWildcarded(IconSource self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_icon_source_set_direction_wildcarded(pointerOf(self), setting);
        }
    }

    private static native final void gtk_icon_source_set_direction_wildcarded(long self, boolean setting);

    static final void setFilename(IconSource self, String filename) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (filename == null) {
            throw new IllegalArgumentException("filename can't be null");
        }

        synchronized (lock) {
            gtk_icon_source_set_filename(pointerOf(self), filename);
        }
    }

    private static native final void gtk_icon_source_set_filename(long self, String filename);

    static final void setIconName(IconSource self, String iconName) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_icon_source_set_icon_name(pointerOf(self), iconName);
        }
    }

    private static native final void gtk_icon_source_set_icon_name(long self, String iconName);

    static final void setPixbuf(IconSource self, Pixbuf pixbuf) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (pixbuf == null) {
            throw new IllegalArgumentException("pixbuf can't be null");
        }

        synchronized (lock) {
            gtk_icon_source_set_pixbuf(pointerOf(self), pointerOf(pixbuf));
        }
    }

    private static native final void gtk_icon_source_set_pixbuf(long self, long pixbuf);

    static final void setSize(IconSource self, IconSize size) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (size == null) {
            throw new IllegalArgumentException("size can't be null");
        }

        synchronized (lock) {
            gtk_icon_source_set_size(pointerOf(self), numOf(size));
        }
    }

    private static native final void gtk_icon_source_set_size(long self, int size);

    static final void setSizeWildcarded(IconSource self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_icon_source_set_size_wildcarded(pointerOf(self), setting);
        }
    }

    private static native final void gtk_icon_source_set_size_wildcarded(long self, boolean setting);

    @SuppressWarnings("unused")
    static final void setState(IconSource self, FIXME state) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkStateType");
    }

    static final void setStateWildcarded(IconSource self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_icon_source_set_state_wildcarded(pointerOf(self), setting);
        }
    }

    private static native final void gtk_icon_source_set_state_wildcarded(long self, boolean setting);
}

