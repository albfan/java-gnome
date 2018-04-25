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
import org.gnome.gtk.Box;
import org.gnome.gtk.Orientation;
import org.gnome.gtk.PackType;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.Widget;

final class GtkBox extends Plumbing
{
    private GtkBox() {}

    static final long createBox(Orientation orientation, int spacing) {
        long result;

        if (orientation == null) {
            throw new IllegalArgumentException("orientation can't be null");
        }

        synchronized (lock) {
            result = gtk_box_new(numOf(orientation), spacing);

            return result;
        }
    }

    private static native final long gtk_box_new(int orientation, int spacing);

    @SuppressWarnings("unused")
    static final FIXME getBaselinePosition(Box self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkBaselinePosition");
    }

    static final Widget getCenterWidget(Box self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_box_get_center_widget(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_box_get_center_widget(long self);

    static final boolean getHomogeneous(Box self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_box_get_homogeneous(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_box_get_homogeneous(long self);

    static final int getSpacing(Box self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_box_get_spacing(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_box_get_spacing(long self);

    static final void packEnd(Box self, Widget child, boolean expand, boolean fill, int padding) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            gtk_box_pack_end(pointerOf(self), pointerOf(child), expand, fill, padding);
        }
    }

    private static native final void gtk_box_pack_end(long self, long child, boolean expand, boolean fill, int padding);

    static final void packStart(Box self, Widget child, boolean expand, boolean fill, int padding) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            gtk_box_pack_start(pointerOf(self), pointerOf(child), expand, fill, padding);
        }
    }

    private static native final void gtk_box_pack_start(long self, long child, boolean expand, boolean fill, int padding);

    static final void queryChildPacking(Box self, Widget child, boolean[] expand, boolean[] fill, int[] padding, PackType[] packType) {
        int[] _packType;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        _packType = numsOf(packType);

        synchronized (lock) {
            gtk_box_query_child_packing(pointerOf(self), pointerOf(child), expand, fill, padding, _packType);
            fillEnumArray(PackType.class, packType, _packType);
        }
    }

    private static native final void gtk_box_query_child_packing(long self, long child, boolean[] expand, boolean[] fill, int[] padding, int[] packType);

    static final void reorderChild(Box self, Widget child, int position) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            gtk_box_reorder_child(pointerOf(self), pointerOf(child), position);
        }
    }

    private static native final void gtk_box_reorder_child(long self, long child, int position);

    @SuppressWarnings("unused")
    static final void setBaselinePosition(Box self, FIXME position) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkBaselinePosition");
    }

    static final void setCenterWidget(Box self, Widget widget) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_box_set_center_widget(pointerOf(self), pointerOf(widget));
        }
    }

    private static native final void gtk_box_set_center_widget(long self, long widget);

    static final void setChildPacking(Box self, Widget child, boolean expand, boolean fill, int padding, PackType packType) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        if (packType == null) {
            throw new IllegalArgumentException("packType can't be null");
        }

        synchronized (lock) {
            gtk_box_set_child_packing(pointerOf(self), pointerOf(child), expand, fill, padding, numOf(packType));
        }
    }

    private static native final void gtk_box_set_child_packing(long self, long child, boolean expand, boolean fill, int padding, int packType);

    static final void setHomogeneous(Box self, boolean homogeneous) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_box_set_homogeneous(pointerOf(self), homogeneous);
        }
    }

    private static native final void gtk_box_set_homogeneous(long self, boolean homogeneous);

    static final void setSpacing(Box self, int spacing) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_box_set_spacing(pointerOf(self), spacing);
        }
    }

    private static native final void gtk_box_set_spacing(long self, int spacing);
}

