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

import org.gnome.gtk.AcceleratorGroup;
import org.gnome.gtk.ImageMenuItem;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.Widget;

final class GtkImageMenuItem extends Plumbing
{
    private GtkImageMenuItem() {}

    static final long createImageMenuItem() {
        long result;

        synchronized (lock) {
            result = gtk_image_menu_item_new();

            return result;
        }
    }

    private static native final long gtk_image_menu_item_new();

    static final long createImageMenuItemFromStock(String stockId, AcceleratorGroup accelGroup) {
        long result;

        if (stockId == null) {
            throw new IllegalArgumentException("stockId can't be null");
        }

        synchronized (lock) {
            result = gtk_image_menu_item_new_from_stock(stockId, pointerOf(accelGroup));

            return result;
        }
    }

    private static native final long gtk_image_menu_item_new_from_stock(String stockId, long accelGroup);

    static final long createImageMenuItemWithLabel(String label) {
        long result;

        if (label == null) {
            throw new IllegalArgumentException("label can't be null");
        }

        synchronized (lock) {
            result = gtk_image_menu_item_new_with_label(label);

            return result;
        }
    }

    private static native final long gtk_image_menu_item_new_with_label(String label);

    static final long createImageMenuItemWithMnemonic(String label) {
        long result;

        if (label == null) {
            throw new IllegalArgumentException("label can't be null");
        }

        synchronized (lock) {
            result = gtk_image_menu_item_new_with_mnemonic(label);

            return result;
        }
    }

    private static native final long gtk_image_menu_item_new_with_mnemonic(String label);

    static final boolean getAlwaysShowImage(ImageMenuItem self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_image_menu_item_get_always_show_image(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_image_menu_item_get_always_show_image(long self);

    static final Widget getImage(ImageMenuItem self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_image_menu_item_get_image(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_image_menu_item_get_image(long self);

    static final boolean getUseStock(ImageMenuItem self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_image_menu_item_get_use_stock(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_image_menu_item_get_use_stock(long self);

    static final void setAccelGroup(ImageMenuItem self, AcceleratorGroup accelGroup) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (accelGroup == null) {
            throw new IllegalArgumentException("accelGroup can't be null");
        }

        synchronized (lock) {
            gtk_image_menu_item_set_accel_group(pointerOf(self), pointerOf(accelGroup));
        }
    }

    private static native final void gtk_image_menu_item_set_accel_group(long self, long accelGroup);

    static final void setAlwaysShowImage(ImageMenuItem self, boolean alwaysShow) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_image_menu_item_set_always_show_image(pointerOf(self), alwaysShow);
        }
    }

    private static native final void gtk_image_menu_item_set_always_show_image(long self, boolean alwaysShow);

    static final void setImage(ImageMenuItem self, Widget image) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_image_menu_item_set_image(pointerOf(self), pointerOf(image));
        }
    }

    private static native final void gtk_image_menu_item_set_image(long self, long image);

    static final void setUseStock(ImageMenuItem self, boolean useStock) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_image_menu_item_set_use_stock(pointerOf(self), useStock);
        }
    }

    private static native final void gtk_image_menu_item_set_use_stock(long self, boolean useStock);
}

