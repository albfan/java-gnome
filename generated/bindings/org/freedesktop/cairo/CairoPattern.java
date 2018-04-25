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
package org.freedesktop.cairo;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.freedesktop.cairo.Extend;
import org.freedesktop.cairo.Filter;
import org.freedesktop.cairo.Pattern;
import org.freedesktop.cairo.Plumbing;
import org.freedesktop.cairo.Status;
import org.freedesktop.cairo.Surface;

final class CairoPattern extends Plumbing
{
    private CairoPattern() {}

    static final void destroy(Pattern self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_pattern_destroy(pointerOf(self));
        }
    }

    private static native final void cairo_pattern_destroy(long self);

    static final Pattern reference(Pattern self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = cairo_pattern_reference(pointerOf(self));

            return (Pattern) entityFor(Pattern.class,  result);
        }
    }

    private static native final long cairo_pattern_reference(long self);

    static final long createPatternForSurface(Surface surface) {
        long result;

        if (surface == null) {
            throw new IllegalArgumentException("surface can't be null");
        }

        synchronized (lock) {
            result = cairo_pattern_create_for_surface(pointerOf(surface));

            return result;
        }
    }

    private static native final long cairo_pattern_create_for_surface(long surface);

    static final long createPatternRgba(double red, double green, double blue, double alpha) {
        long result;

        synchronized (lock) {
            result = cairo_pattern_create_rgba(red, green, blue, alpha);

            return result;
        }
    }

    private static native final long cairo_pattern_create_rgba(double red, double green, double blue, double alpha);

    static final long createPatternLinear(double x0, double y0, double x1, double y1) {
        long result;

        synchronized (lock) {
            result = cairo_pattern_create_linear(x0, y0, x1, y1);

            return result;
        }
    }

    private static native final long cairo_pattern_create_linear(double x0, double y0, double x1, double y1);

    static final long createPatternRadial(double cx0, double cy0, double radius0, double cx1, double cy1, double radius1) {
        long result;

        synchronized (lock) {
            result = cairo_pattern_create_radial(cx0, cy0, radius0, cx1, cy1, radius1);

            return result;
        }
    }

    private static native final long cairo_pattern_create_radial(double cx0, double cy0, double radius0, double cx1, double cy1, double radius1);

    static final void addColorStopRgb(Pattern self, double offset, double red, double green, double blue) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_pattern_add_color_stop_rgb(pointerOf(self), offset, red, green, blue);
        }
    }

    private static native final void cairo_pattern_add_color_stop_rgb(long self, double offset, double red, double green, double blue);

    static final void addColorStopRgba(Pattern self, double offset, double red, double green, double blue, double alpha) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_pattern_add_color_stop_rgba(pointerOf(self), offset, red, green, blue, alpha);
        }
    }

    private static native final void cairo_pattern_add_color_stop_rgba(long self, double offset, double red, double green, double blue, double alpha);

    static final Status status(Pattern self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = cairo_pattern_status(pointerOf(self));

            return (Status) enumFor(Status.class, result);
        }
    }

    private static native final int cairo_pattern_status(long self);

    static final void setExtend(Pattern self, Extend extend) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (extend == null) {
            throw new IllegalArgumentException("extend can't be null");
        }

        synchronized (lock) {
            cairo_pattern_set_extend(pointerOf(self), numOf(extend));
        }
    }

    private static native final void cairo_pattern_set_extend(long self, int extend);

    static final void setFilter(Pattern self, Filter filter) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (filter == null) {
            throw new IllegalArgumentException("filter can't be null");
        }

        synchronized (lock) {
            cairo_pattern_set_filter(pointerOf(self), numOf(filter));
        }
    }

    private static native final void cairo_pattern_set_filter(long self, int filter);
}

