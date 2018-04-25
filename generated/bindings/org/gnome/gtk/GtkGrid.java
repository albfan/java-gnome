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
import org.gnome.gtk.Grid;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.PositionType;
import org.gnome.gtk.Widget;

final class GtkGrid extends Plumbing
{
    private GtkGrid() {}

    static final long createGrid() {
        long result;

        synchronized (lock) {
            result = gtk_grid_new();

            return result;
        }
    }

    private static native final long gtk_grid_new();

    static final void attach(Grid self, Widget child, int left, int top, int width, int height) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            gtk_grid_attach(pointerOf(self), pointerOf(child), left, top, width, height);
        }
    }

    private static native final void gtk_grid_attach(long self, long child, int left, int top, int width, int height);

    static final void attachNextTo(Grid self, Widget child, Widget sibling, PositionType side, int width, int height) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        if (side == null) {
            throw new IllegalArgumentException("side can't be null");
        }

        synchronized (lock) {
            gtk_grid_attach_next_to(pointerOf(self), pointerOf(child), pointerOf(sibling), numOf(side), width, height);
        }
    }

    private static native final void gtk_grid_attach_next_to(long self, long child, long sibling, int side, int width, int height);

    static final int getBaselineRow(Grid self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_grid_get_baseline_row(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_grid_get_baseline_row(long self);

    static final Widget getChildAt(Grid self, int left, int top) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_grid_get_child_at(pointerOf(self), left, top);

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_grid_get_child_at(long self, int left, int top);

    static final boolean getColumnHomogeneous(Grid self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_grid_get_column_homogeneous(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_grid_get_column_homogeneous(long self);

    static final int getColumnSpacing(Grid self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_grid_get_column_spacing(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_grid_get_column_spacing(long self);

    @SuppressWarnings("unused")
    static final FIXME getRowBaselinePosition(Grid self, int row) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkBaselinePosition");
    }

    static final boolean getRowHomogeneous(Grid self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_grid_get_row_homogeneous(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_grid_get_row_homogeneous(long self);

    static final int getRowSpacing(Grid self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_grid_get_row_spacing(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_grid_get_row_spacing(long self);

    static final void insertColumn(Grid self, int position) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_grid_insert_column(pointerOf(self), position);
        }
    }

    private static native final void gtk_grid_insert_column(long self, int position);

    static final void insertNextTo(Grid self, Widget sibling, PositionType side) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (sibling == null) {
            throw new IllegalArgumentException("sibling can't be null");
        }

        if (side == null) {
            throw new IllegalArgumentException("side can't be null");
        }

        synchronized (lock) {
            gtk_grid_insert_next_to(pointerOf(self), pointerOf(sibling), numOf(side));
        }
    }

    private static native final void gtk_grid_insert_next_to(long self, long sibling, int side);

    static final void insertRow(Grid self, int position) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_grid_insert_row(pointerOf(self), position);
        }
    }

    private static native final void gtk_grid_insert_row(long self, int position);

    static final void removeColumn(Grid self, int position) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_grid_remove_column(pointerOf(self), position);
        }
    }

    private static native final void gtk_grid_remove_column(long self, int position);

    static final void removeRow(Grid self, int position) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_grid_remove_row(pointerOf(self), position);
        }
    }

    private static native final void gtk_grid_remove_row(long self, int position);

    static final void setBaselineRow(Grid self, int row) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_grid_set_baseline_row(pointerOf(self), row);
        }
    }

    private static native final void gtk_grid_set_baseline_row(long self, int row);

    static final void setColumnHomogeneous(Grid self, boolean homogeneous) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_grid_set_column_homogeneous(pointerOf(self), homogeneous);
        }
    }

    private static native final void gtk_grid_set_column_homogeneous(long self, boolean homogeneous);

    static final void setColumnSpacing(Grid self, int spacing) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_grid_set_column_spacing(pointerOf(self), spacing);
        }
    }

    private static native final void gtk_grid_set_column_spacing(long self, int spacing);

    @SuppressWarnings("unused")
    static final void setRowBaselinePosition(Grid self, int row, FIXME pos) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkBaselinePosition");
    }

    static final void setRowHomogeneous(Grid self, boolean homogeneous) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_grid_set_row_homogeneous(pointerOf(self), homogeneous);
        }
    }

    private static native final void gtk_grid_set_row_homogeneous(long self, boolean homogeneous);

    static final void setRowSpacing(Grid self, int spacing) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_grid_set_row_spacing(pointerOf(self), spacing);
        }
    }

    private static native final void gtk_grid_set_row_spacing(long self, int spacing);
}

