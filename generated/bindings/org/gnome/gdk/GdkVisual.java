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
import org.gnome.gdk.Plumbing;
import org.gnome.gdk.Screen;
import org.gnome.gdk.Visual;
import org.gnome.gdk.VisualType;

final class GdkVisual extends Plumbing
{
    private GdkVisual() {}

    static final int getBitsPerRgb(Visual self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_visual_get_bits_per_rgb(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_visual_get_bits_per_rgb(long self);

    @SuppressWarnings("unused")
    static final void getBluePixelDetails(Visual self, FIXME mask, int[] shift, int[] precision) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("guint32*");
    }

    @SuppressWarnings("unused")
    static final FIXME getByteOrder(Visual self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkByteOrder");
    }

    static final int getColormapSize(Visual self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_visual_get_colormap_size(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_visual_get_colormap_size(long self);

    static final int getDepth(Visual self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_visual_get_depth(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_visual_get_depth(long self);

    @SuppressWarnings("unused")
    static final void getGreenPixelDetails(Visual self, FIXME mask, int[] shift, int[] precision) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("guint32*");
    }

    @SuppressWarnings("unused")
    static final void getRedPixelDetails(Visual self, FIXME mask, int[] shift, int[] precision) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("guint32*");
    }

    static final Screen getScreen(Visual self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_visual_get_screen(pointerOf(self));

            return (Screen) objectFor(result);
        }
    }

    private static native final long gdk_visual_get_screen(long self);

    static final VisualType getVisualType(Visual self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_visual_get_visual_type(pointerOf(self));

            return (VisualType) enumFor(VisualType.class, result);
        }
    }

    private static native final int gdk_visual_get_visual_type(long self);

    static final Visual getBest() {
        long result;

        synchronized (lock) {
            result = gdk_visual_get_best();

            return (Visual) objectFor(result);
        }
    }

    private static native final long gdk_visual_get_best();

    static final int getBestDepth() {
        int result;

        synchronized (lock) {
            result = gdk_visual_get_best_depth();

            return result;
        }
    }

    private static native final int gdk_visual_get_best_depth();

    static final VisualType getBestType() {
        int result;

        synchronized (lock) {
            result = gdk_visual_get_best_type();

            return (VisualType) enumFor(VisualType.class, result);
        }
    }

    private static native final int gdk_visual_get_best_type();

    static final Visual getBestWithBoth(int depth, VisualType visualType) {
        long result;

        if (visualType == null) {
            throw new IllegalArgumentException("visualType can't be null");
        }

        synchronized (lock) {
            result = gdk_visual_get_best_with_both(depth, numOf(visualType));

            return (Visual) objectFor(result);
        }
    }

    private static native final long gdk_visual_get_best_with_both(int depth, int visualType);

    static final Visual getBestWithDepth(int depth) {
        long result;

        synchronized (lock) {
            result = gdk_visual_get_best_with_depth(depth);

            return (Visual) objectFor(result);
        }
    }

    private static native final long gdk_visual_get_best_with_depth(int depth);

    static final Visual getBestWithType(VisualType visualType) {
        long result;

        if (visualType == null) {
            throw new IllegalArgumentException("visualType can't be null");
        }

        synchronized (lock) {
            result = gdk_visual_get_best_with_type(numOf(visualType));

            return (Visual) objectFor(result);
        }
    }

    private static native final long gdk_visual_get_best_with_type(int visualType);

    static final Visual getSystem() {
        long result;

        synchronized (lock) {
            result = gdk_visual_get_system();

            return (Visual) objectFor(result);
        }
    }

    private static native final long gdk_visual_get_system();
}

