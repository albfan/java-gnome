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

import org.gnome.gtk.Border;
import org.gnome.gtk.Plumbing;

final class GtkBorder extends Plumbing
{
    private GtkBorder() {}

    static final short getLeft(Border self) {
        short result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_border_get_left(pointerOf(self));

            return result;
        }
    }

    private static native final short gtk_border_get_left(long self);

    static final void setLeft(Border self, short left) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_border_set_left(pointerOf(self), left);
        }
    }

    private static native final void gtk_border_set_left(long self, short left);

    static final short getRight(Border self) {
        short result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_border_get_right(pointerOf(self));

            return result;
        }
    }

    private static native final short gtk_border_get_right(long self);

    static final void setRight(Border self, short right) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_border_set_right(pointerOf(self), right);
        }
    }

    private static native final void gtk_border_set_right(long self, short right);

    static final short getTop(Border self) {
        short result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_border_get_top(pointerOf(self));

            return result;
        }
    }

    private static native final short gtk_border_get_top(long self);

    static final void setTop(Border self, short top) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_border_set_top(pointerOf(self), top);
        }
    }

    private static native final void gtk_border_set_top(long self, short top);

    static final short getBottom(Border self) {
        short result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_border_get_bottom(pointerOf(self));

            return result;
        }
    }

    private static native final short gtk_border_get_bottom(long self);

    static final void setBottom(Border self, short bottom) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_border_set_bottom(pointerOf(self), bottom);
        }
    }

    private static native final void gtk_border_set_bottom(long self, short bottom);

    static final long createBorder() {
        long result;

        synchronized (lock) {
            result = gtk_border_new();

            return result;
        }
    }

    private static native final long gtk_border_new();

    static final Border copy(Border self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_border_copy(pointerOf(self));

            return (Border) boxedFor(Border.class, result);
        }
    }

    private static native final long gtk_border_copy(long self);

    static final void free(Border self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_border_free(pointerOf(self));
        }
    }

    private static native final void gtk_border_free(long self);
}

