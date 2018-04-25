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
package org.gnome.pango;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.freedesktop.bindings.BlacklistedMethodError;
import org.freedesktop.bindings.FIXME;
import org.gnome.pango.Item;
import org.gnome.pango.Plumbing;

final class PangoItem extends Plumbing
{
    private PangoItem() {}

    static final int getOffset(Item self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_item_get_offset(pointerOf(self));

            return result;
        }
    }

    private static native final int pango_item_get_offset(long self);

    static final void setOffset(Item self, int offset) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_item_set_offset(pointerOf(self), offset);
        }
    }

    private static native final void pango_item_set_offset(long self, int offset);

    static final int getLength(Item self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_item_get_length(pointerOf(self));

            return result;
        }
    }

    private static native final int pango_item_get_length(long self);

    static final void setLength(Item self, int length) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_item_set_length(pointerOf(self), length);
        }
    }

    private static native final void pango_item_set_length(long self, int length);

    static final int getNumChars(Item self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_item_get_num_chars(pointerOf(self));

            return result;
        }
    }

    private static native final int pango_item_get_num_chars(long self);

    static final void setNumChars(Item self, int numChars) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_item_set_num_chars(pointerOf(self), numChars);
        }
    }

    private static native final void pango_item_set_num_chars(long self, int numChars);

    @SuppressWarnings("unused")
    static final FIXME getAnalysis(Item self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("PangoAnalysis");
    }

    @SuppressWarnings("unused")
    static final void setAnalysis(Item self, FIXME analysis) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("PangoAnalysis");
    }

    static final long createItem() {
        long result;

        synchronized (lock) {
            result = pango_item_new();

            return result;
        }
    }

    private static native final long pango_item_new();

    static final Item copy(Item self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_item_copy(pointerOf(self));

            return (Item) boxedFor(Item.class, result);
        }
    }

    private static native final long pango_item_copy(long self);

    static final void free(Item self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_item_free(pointerOf(self));
        }
    }

    private static native final void pango_item_free(long self);

    static final Item split(Item self, int splitIndex, int splitOffset) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_item_split(pointerOf(self), splitIndex, splitOffset);

            return (Item) boxedFor(Item.class, result);
        }
    }

    private static native final long pango_item_split(long self, int splitIndex, int splitOffset);
}

