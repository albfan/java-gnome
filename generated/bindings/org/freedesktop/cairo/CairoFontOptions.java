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

import org.freedesktop.cairo.FontOptions;
import org.freedesktop.cairo.HintMetrics;
import org.freedesktop.cairo.HintStyle;
import org.freedesktop.cairo.Plumbing;
import org.freedesktop.cairo.Status;

final class CairoFontOptions extends Plumbing
{
    private CairoFontOptions() {}

    static final long createFontOptions() {
        long result;

        synchronized (lock) {
            result = cairo_font_options_create();

            return result;
        }
    }

    private static native final long cairo_font_options_create();

    static final void destroy(FontOptions self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_font_options_destroy(pointerOf(self));
        }
    }

    private static native final void cairo_font_options_destroy(long self);

    static final Status status(FontOptions self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = cairo_font_options_status(pointerOf(self));

            return (Status) enumFor(Status.class, result);
        }
    }

    private static native final int cairo_font_options_status(long self);

    static final void setHintMetrics(FontOptions self, HintMetrics hintMetrics) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (hintMetrics == null) {
            throw new IllegalArgumentException("hintMetrics can't be null");
        }

        synchronized (lock) {
            cairo_font_options_set_hint_metrics(pointerOf(self), numOf(hintMetrics));
        }
    }

    private static native final void cairo_font_options_set_hint_metrics(long self, int hintMetrics);

    static final void setHintStyle(FontOptions self, HintStyle hintStyle) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (hintStyle == null) {
            throw new IllegalArgumentException("hintStyle can't be null");
        }

        synchronized (lock) {
            cairo_font_options_set_hint_style(pointerOf(self), numOf(hintStyle));
        }
    }

    private static native final void cairo_font_options_set_hint_style(long self, int hintStyle);
}

