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

import org.freedesktop.bindings.BlacklistedMethodError;
import org.freedesktop.bindings.FIXME;
import org.gnome.gdk.Display;
import org.gnome.gdk.Pixbuf;
import org.gnome.gdk.Rectangle;
import org.gnome.gtk.IconSize;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.Tooltip;
import org.gnome.gtk.Widget;

final class GtkTooltip extends Plumbing
{
    private GtkTooltip() {}

    static final void setCustom(Tooltip self, Widget customWidget) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tooltip_set_custom(pointerOf(self), pointerOf(customWidget));
        }
    }

    private static native final void gtk_tooltip_set_custom(long self, long customWidget);

    static final void setIcon(Tooltip self, Pixbuf pixbuf) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tooltip_set_icon(pointerOf(self), pointerOf(pixbuf));
        }
    }

    private static native final void gtk_tooltip_set_icon(long self, long pixbuf);

    @SuppressWarnings("unused")
    static final void setIconFromGicon(Tooltip self, FIXME gicon, IconSize size) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GIcon*");
    }

    static final void setIconFromIconName(Tooltip self, String iconName, IconSize size) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (size == null) {
            throw new IllegalArgumentException("size can't be null");
        }

        synchronized (lock) {
            gtk_tooltip_set_icon_from_icon_name(pointerOf(self), iconName, numOf(size));
        }
    }

    private static native final void gtk_tooltip_set_icon_from_icon_name(long self, String iconName, int size);

    static final void setIconFromStock(Tooltip self, String stockId, IconSize size) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (size == null) {
            throw new IllegalArgumentException("size can't be null");
        }

        synchronized (lock) {
            gtk_tooltip_set_icon_from_stock(pointerOf(self), stockId, numOf(size));
        }
    }

    private static native final void gtk_tooltip_set_icon_from_stock(long self, String stockId, int size);

    static final void setMarkup(Tooltip self, String markup) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tooltip_set_markup(pointerOf(self), markup);
        }
    }

    private static native final void gtk_tooltip_set_markup(long self, String markup);

    static final void setText(Tooltip self, String text) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tooltip_set_text(pointerOf(self), text);
        }
    }

    private static native final void gtk_tooltip_set_text(long self, String text);

    static final void setTipArea(Tooltip self, Rectangle rect) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (rect == null) {
            throw new IllegalArgumentException("rect can't be null");
        }

        synchronized (lock) {
            gtk_tooltip_set_tip_area(pointerOf(self), pointerOf(rect));
        }
    }

    private static native final void gtk_tooltip_set_tip_area(long self, long rect);

    static final void triggerTooltipQuery(Display display) {
        if (display == null) {
            throw new IllegalArgumentException("display can't be null");
        }

        synchronized (lock) {
            gtk_tooltip_trigger_tooltip_query(pointerOf(display));
        }
    }

    private static native final void gtk_tooltip_trigger_tooltip_query(long display);
}

