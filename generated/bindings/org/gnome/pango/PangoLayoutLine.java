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
import org.gnome.pango.Layout;
import org.gnome.pango.LayoutLine;
import org.gnome.pango.Plumbing;
import org.gnome.pango.Rectangle;

final class PangoLayoutLine extends Plumbing
{
    private PangoLayoutLine() {}

    static final Layout getLayout(LayoutLine self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_line_get_layout(pointerOf(self));

            return (Layout) objectFor(result);
        }
    }

    private static native final long pango_layout_line_get_layout(long self);

    static final void setLayout(LayoutLine self, Layout layout) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (layout == null) {
            throw new IllegalArgumentException("layout can't be null");
        }

        synchronized (lock) {
            pango_layout_line_set_layout(pointerOf(self), pointerOf(layout));
        }
    }

    private static native final void pango_layout_line_set_layout(long self, long layout);

    static final int getStartIndex(LayoutLine self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_line_get_start_index(pointerOf(self));

            return result;
        }
    }

    private static native final int pango_layout_line_get_start_index(long self);

    static final void setStartIndex(LayoutLine self, int startIndex) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_line_set_start_index(pointerOf(self), startIndex);
        }
    }

    private static native final void pango_layout_line_set_start_index(long self, int startIndex);

    static final int getLength(LayoutLine self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_line_get_length(pointerOf(self));

            return result;
        }
    }

    private static native final int pango_layout_line_get_length(long self);

    static final void setLength(LayoutLine self, int length) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_line_set_length(pointerOf(self), length);
        }
    }

    private static native final void pango_layout_line_set_length(long self, int length);

    @SuppressWarnings("unused")
    static final FIXME getRuns(LayoutLine self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GSList*");
    }

    @SuppressWarnings("unused")
    static final void setRuns(LayoutLine self, FIXME runs) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GSList*");
    }

    static final int getIsParagraphStart(LayoutLine self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_line_get_is_paragraph_start(pointerOf(self));

            return result;
        }
    }

    private static native final int pango_layout_line_get_is_paragraph_start(long self);

    static final void setIsParagraphStart(LayoutLine self, int isParagraphStart) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_line_set_is_paragraph_start(pointerOf(self), isParagraphStart);
        }
    }

    private static native final void pango_layout_line_set_is_paragraph_start(long self, int isParagraphStart);

    static final int getResolvedDir(LayoutLine self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_line_get_resolved_dir(pointerOf(self));

            return result;
        }
    }

    private static native final int pango_layout_line_get_resolved_dir(long self);

    static final void setResolvedDir(LayoutLine self, int resolvedDir) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_line_set_resolved_dir(pointerOf(self), resolvedDir);
        }
    }

    private static native final void pango_layout_line_set_resolved_dir(long self, int resolvedDir);

    static final void getExtents(LayoutLine self, Rectangle inkRect, Rectangle logicalRect) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_line_get_extents(pointerOf(self), pointerOf(inkRect), pointerOf(logicalRect));
        }
    }

    private static native final void pango_layout_line_get_extents(long self, long inkRect, long logicalRect);

    static final void getPixelExtents(LayoutLine self, Rectangle inkRect, Rectangle logicalRect) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_line_get_pixel_extents(pointerOf(self), pointerOf(inkRect), pointerOf(logicalRect));
        }
    }

    private static native final void pango_layout_line_get_pixel_extents(long self, long inkRect, long logicalRect);

    @SuppressWarnings("unused")
    static final void getXRanges(LayoutLine self, int startIndex, int endIndex, FIXME ranges, int[] nRanges) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("int**");
    }

    static final void indexToX(LayoutLine self, int index, boolean trailing, int[] xPos) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_line_index_to_x(pointerOf(self), index, trailing, xPos);
        }
    }

    private static native final void pango_layout_line_index_to_x(long self, int index, boolean trailing, int[] xPos);

    static final void ref(LayoutLine self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_line_ref(pointerOf(self));
        }
    }

    private static native final void pango_layout_line_ref(long self);

    static final void unref(LayoutLine self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_line_unref(pointerOf(self));
        }
    }

    private static native final void pango_layout_line_unref(long self);

    static final boolean xToIndex(LayoutLine self, int xPos, int[] index, int[] trailing) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_line_x_to_index(pointerOf(self), xPos, index, trailing);

            return result;
        }
    }

    private static native final boolean pango_layout_line_x_to_index(long self, int xPos, int[] index, int[] trailing);
}

