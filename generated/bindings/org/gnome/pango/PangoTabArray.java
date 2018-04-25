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
import org.gnome.pango.Plumbing;
import org.gnome.pango.TabAlign;
import org.gnome.pango.TabArray;

final class PangoTabArray extends Plumbing
{
    private PangoTabArray() {}

    static final long createTabArray(int initialSize, boolean positionsInPixels) {
        long result;

        synchronized (lock) {
            result = pango_tab_array_new(initialSize, positionsInPixels);

            return result;
        }
    }

    private static native final long pango_tab_array_new(int initialSize, boolean positionsInPixels);

    static final long createTabArrayWithPositions(int size, boolean positionsInPixels, TabAlign firstAlignment, int firstPosition) {
        long result;

        if (firstAlignment == null) {
            throw new IllegalArgumentException("firstAlignment can't be null");
        }

        synchronized (lock) {
            result = pango_tab_array_new_with_positions(size, positionsInPixels, numOf(firstAlignment), firstPosition);

            return result;
        }
    }

    private static native final long pango_tab_array_new_with_positions(int size, boolean positionsInPixels, int firstAlignment, int firstPosition);

    static final TabArray copy(TabArray self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_tab_array_copy(pointerOf(self));

            return (TabArray) boxedFor(TabArray.class, result);
        }
    }

    private static native final long pango_tab_array_copy(long self);

    static final void free(TabArray self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_tab_array_free(pointerOf(self));
        }
    }

    private static native final void pango_tab_array_free(long self);

    static final boolean getPositionsInPixels(TabArray self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_tab_array_get_positions_in_pixels(pointerOf(self));

            return result;
        }
    }

    private static native final boolean pango_tab_array_get_positions_in_pixels(long self);

    static final int getSize(TabArray self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_tab_array_get_size(pointerOf(self));

            return result;
        }
    }

    private static native final int pango_tab_array_get_size(long self);

    static final void getTab(TabArray self, int tabIndex, TabAlign[] alignment, int[] location) {
        int[] _alignment;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _alignment = numsOf(alignment);

        synchronized (lock) {
            pango_tab_array_get_tab(pointerOf(self), tabIndex, _alignment, location);
            fillEnumArray(TabAlign.class, alignment, _alignment);
        }
    }

    private static native final void pango_tab_array_get_tab(long self, int tabIndex, int[] alignment, int[] location);

    @SuppressWarnings("unused")
    static final void getTabs(TabArray self, FIXME alignments, FIXME locations) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("PangoTabAlign**");
    }

    static final void resize(TabArray self, int newSize) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_tab_array_resize(pointerOf(self), newSize);
        }
    }

    private static native final void pango_tab_array_resize(long self, int newSize);

    static final void setTab(TabArray self, int tabIndex, TabAlign alignment, int location) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (alignment == null) {
            throw new IllegalArgumentException("alignment can't be null");
        }

        synchronized (lock) {
            pango_tab_array_set_tab(pointerOf(self), tabIndex, numOf(alignment), location);
        }
    }

    private static native final void pango_tab_array_set_tab(long self, int tabIndex, int alignment, int location);
}

