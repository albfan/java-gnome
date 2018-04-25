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

import org.gnome.gdk.Window;
import org.gnome.gtk.Adjustment;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.ShadowType;
import org.gnome.gtk.Viewport;

final class GtkViewport extends Plumbing
{
    private GtkViewport() {}

    static final long createViewport(Adjustment hadjustment, Adjustment vadjustment) {
        long result;

        synchronized (lock) {
            result = gtk_viewport_new(pointerOf(hadjustment), pointerOf(vadjustment));

            return result;
        }
    }

    private static native final long gtk_viewport_new(long hadjustment, long vadjustment);

    static final Window getBinWindow(Viewport self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_viewport_get_bin_window(pointerOf(self));

            return (Window) objectFor(result);
        }
    }

    private static native final long gtk_viewport_get_bin_window(long self);

    static final Adjustment getHadjustment(Viewport self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_viewport_get_hadjustment(pointerOf(self));

            return (Adjustment) objectFor(result);
        }
    }

    private static native final long gtk_viewport_get_hadjustment(long self);

    static final ShadowType getShadowType(Viewport self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_viewport_get_shadow_type(pointerOf(self));

            return (ShadowType) enumFor(ShadowType.class, result);
        }
    }

    private static native final int gtk_viewport_get_shadow_type(long self);

    static final Adjustment getVadjustment(Viewport self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_viewport_get_vadjustment(pointerOf(self));

            return (Adjustment) objectFor(result);
        }
    }

    private static native final long gtk_viewport_get_vadjustment(long self);

    static final Window getViewWindow(Viewport self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_viewport_get_view_window(pointerOf(self));

            return (Window) objectFor(result);
        }
    }

    private static native final long gtk_viewport_get_view_window(long self);

    static final void setHadjustment(Viewport self, Adjustment adjustment) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_viewport_set_hadjustment(pointerOf(self), pointerOf(adjustment));
        }
    }

    private static native final void gtk_viewport_set_hadjustment(long self, long adjustment);

    static final void setShadowType(Viewport self, ShadowType type) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (type == null) {
            throw new IllegalArgumentException("type can't be null");
        }

        synchronized (lock) {
            gtk_viewport_set_shadow_type(pointerOf(self), numOf(type));
        }
    }

    private static native final void gtk_viewport_set_shadow_type(long self, int type);

    static final void setVadjustment(Viewport self, Adjustment adjustment) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_viewport_set_vadjustment(pointerOf(self), pointerOf(adjustment));
        }
    }

    private static native final void gtk_viewport_set_vadjustment(long self, long adjustment);
}

