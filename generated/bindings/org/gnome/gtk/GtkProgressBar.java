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

import org.gnome.gtk.Plumbing;
import org.gnome.gtk.ProgressBar;
import org.gnome.pango.EllipsizeMode;

final class GtkProgressBar extends Plumbing
{
    private GtkProgressBar() {}

    static final long createProgressBar() {
        long result;

        synchronized (lock) {
            result = gtk_progress_bar_new();

            return result;
        }
    }

    private static native final long gtk_progress_bar_new();

    static final EllipsizeMode getEllipsize(ProgressBar self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_progress_bar_get_ellipsize(pointerOf(self));

            return (EllipsizeMode) enumFor(EllipsizeMode.class, result);
        }
    }

    private static native final int gtk_progress_bar_get_ellipsize(long self);

    static final double getFraction(ProgressBar self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_progress_bar_get_fraction(pointerOf(self));

            return result;
        }
    }

    private static native final double gtk_progress_bar_get_fraction(long self);

    static final boolean getInverted(ProgressBar self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_progress_bar_get_inverted(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_progress_bar_get_inverted(long self);

    static final double getPulseStep(ProgressBar self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_progress_bar_get_pulse_step(pointerOf(self));

            return result;
        }
    }

    private static native final double gtk_progress_bar_get_pulse_step(long self);

    static final boolean getShowText(ProgressBar self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_progress_bar_get_show_text(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_progress_bar_get_show_text(long self);

    static final String getText(ProgressBar self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_progress_bar_get_text(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_progress_bar_get_text(long self);

    static final void pulse(ProgressBar self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_progress_bar_pulse(pointerOf(self));
        }
    }

    private static native final void gtk_progress_bar_pulse(long self);

    static final void setEllipsize(ProgressBar self, EllipsizeMode mode) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (mode == null) {
            throw new IllegalArgumentException("mode can't be null");
        }

        synchronized (lock) {
            gtk_progress_bar_set_ellipsize(pointerOf(self), numOf(mode));
        }
    }

    private static native final void gtk_progress_bar_set_ellipsize(long self, int mode);

    static final void setFraction(ProgressBar self, double fraction) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_progress_bar_set_fraction(pointerOf(self), fraction);
        }
    }

    private static native final void gtk_progress_bar_set_fraction(long self, double fraction);

    static final void setInverted(ProgressBar self, boolean inverted) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_progress_bar_set_inverted(pointerOf(self), inverted);
        }
    }

    private static native final void gtk_progress_bar_set_inverted(long self, boolean inverted);

    static final void setPulseStep(ProgressBar self, double fraction) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_progress_bar_set_pulse_step(pointerOf(self), fraction);
        }
    }

    private static native final void gtk_progress_bar_set_pulse_step(long self, double fraction);

    static final void setShowText(ProgressBar self, boolean showText) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_progress_bar_set_show_text(pointerOf(self), showText);
        }
    }

    private static native final void gtk_progress_bar_set_show_text(long self, boolean showText);

    static final void setText(ProgressBar self, String text) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_progress_bar_set_text(pointerOf(self), text);
        }
    }

    private static native final void gtk_progress_bar_set_text(long self, String text);
}

