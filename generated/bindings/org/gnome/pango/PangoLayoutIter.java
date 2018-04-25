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
import org.gnome.pango.LayoutIter;
import org.gnome.pango.LayoutLine;
import org.gnome.pango.Plumbing;
import org.gnome.pango.Rectangle;

final class PangoLayoutIter extends Plumbing
{
    private PangoLayoutIter() {}

    static final boolean atLastLine(LayoutIter self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_iter_at_last_line(pointerOf(self));

            return result;
        }
    }

    private static native final boolean pango_layout_iter_at_last_line(long self);

    static final LayoutIter copy(LayoutIter self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_iter_copy(pointerOf(self));

            return (LayoutIter) boxedFor(LayoutIter.class, result);
        }
    }

    private static native final long pango_layout_iter_copy(long self);

    static final void free(LayoutIter self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_iter_free(pointerOf(self));
        }
    }

    private static native final void pango_layout_iter_free(long self);

    static final int getBaseline(LayoutIter self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_iter_get_baseline(pointerOf(self));

            return result;
        }
    }

    private static native final int pango_layout_iter_get_baseline(long self);

    static final void getCharExtents(LayoutIter self, Rectangle logicalRect) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_iter_get_char_extents(pointerOf(self), pointerOf(logicalRect));
        }
    }

    private static native final void pango_layout_iter_get_char_extents(long self, long logicalRect);

    static final void getClusterExtents(LayoutIter self, Rectangle inkRect, Rectangle logicalRect) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_iter_get_cluster_extents(pointerOf(self), pointerOf(inkRect), pointerOf(logicalRect));
        }
    }

    private static native final void pango_layout_iter_get_cluster_extents(long self, long inkRect, long logicalRect);

    static final int getIndex(LayoutIter self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_iter_get_index(pointerOf(self));

            return result;
        }
    }

    private static native final int pango_layout_iter_get_index(long self);

    static final Layout getLayout(LayoutIter self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_iter_get_layout(pointerOf(self));

            return (Layout) objectFor(result);
        }
    }

    private static native final long pango_layout_iter_get_layout(long self);

    static final void getLayoutExtents(LayoutIter self, Rectangle inkRect, Rectangle logicalRect) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_iter_get_layout_extents(pointerOf(self), pointerOf(inkRect), pointerOf(logicalRect));
        }
    }

    private static native final void pango_layout_iter_get_layout_extents(long self, long inkRect, long logicalRect);

    static final LayoutLine getLine(LayoutIter self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_iter_get_line(pointerOf(self));

            return (LayoutLine) boxedFor(LayoutLine.class, result);
        }
    }

    private static native final long pango_layout_iter_get_line(long self);

    static final void getLineExtents(LayoutIter self, Rectangle inkRect, Rectangle logicalRect) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_iter_get_line_extents(pointerOf(self), pointerOf(inkRect), pointerOf(logicalRect));
        }
    }

    private static native final void pango_layout_iter_get_line_extents(long self, long inkRect, long logicalRect);

    static final LayoutLine getLineReadonly(LayoutIter self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_iter_get_line_readonly(pointerOf(self));

            return (LayoutLine) boxedFor(LayoutLine.class, result);
        }
    }

    private static native final long pango_layout_iter_get_line_readonly(long self);

    static final void getLineYrange(LayoutIter self, int[] y0, int[] y1) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_iter_get_line_yrange(pointerOf(self), y0, y1);
        }
    }

    private static native final void pango_layout_iter_get_line_yrange(long self, int[] y0, int[] y1);

    @SuppressWarnings("unused")
    static final FIXME getRun(LayoutIter self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("PangoLayoutRun*");
    }

    static final void getRunExtents(LayoutIter self, Rectangle inkRect, Rectangle logicalRect) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            pango_layout_iter_get_run_extents(pointerOf(self), pointerOf(inkRect), pointerOf(logicalRect));
        }
    }

    private static native final void pango_layout_iter_get_run_extents(long self, long inkRect, long logicalRect);

    @SuppressWarnings("unused")
    static final FIXME getRunReadonly(LayoutIter self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("PangoLayoutRun*");
    }

    static final boolean nextChar(LayoutIter self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_iter_next_char(pointerOf(self));

            return result;
        }
    }

    private static native final boolean pango_layout_iter_next_char(long self);

    static final boolean nextCluster(LayoutIter self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_iter_next_cluster(pointerOf(self));

            return result;
        }
    }

    private static native final boolean pango_layout_iter_next_cluster(long self);

    static final boolean nextLine(LayoutIter self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_iter_next_line(pointerOf(self));

            return result;
        }
    }

    private static native final boolean pango_layout_iter_next_line(long self);

    static final boolean nextRun(LayoutIter self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = pango_layout_iter_next_run(pointerOf(self));

            return result;
        }
    }

    private static native final boolean pango_layout_iter_next_run(long self);
}

