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

import org.gnome.gtk.AttachOptions;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.Table;
import org.gnome.gtk.Widget;

final class GtkTable extends Plumbing
{
    private GtkTable() {}

    static final long createTable(int rows, int columns, boolean homogeneous) {
        long result;

        synchronized (lock) {
            result = gtk_table_new(rows, columns, homogeneous);

            return result;
        }
    }

    private static native final long gtk_table_new(int rows, int columns, boolean homogeneous);

    static final void attach(Table self, Widget child, int leftAttach, int rightAttach, int topAttach, int bottomAttach, AttachOptions xoptions, AttachOptions yoptions, int xpadding, int ypadding) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        if (xoptions == null) {
            throw new IllegalArgumentException("xoptions can't be null");
        }

        if (yoptions == null) {
            throw new IllegalArgumentException("yoptions can't be null");
        }

        synchronized (lock) {
            gtk_table_attach(pointerOf(self), pointerOf(child), leftAttach, rightAttach, topAttach, bottomAttach, numOf(xoptions), numOf(yoptions), xpadding, ypadding);
        }
    }

    private static native final void gtk_table_attach(long self, long child, int leftAttach, int rightAttach, int topAttach, int bottomAttach, int xoptions, int yoptions, int xpadding, int ypadding);

    static final void attachDefaults(Table self, Widget widget, int leftAttach, int rightAttach, int topAttach, int bottomAttach) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (widget == null) {
            throw new IllegalArgumentException("widget can't be null");
        }

        synchronized (lock) {
            gtk_table_attach_defaults(pointerOf(self), pointerOf(widget), leftAttach, rightAttach, topAttach, bottomAttach);
        }
    }

    private static native final void gtk_table_attach_defaults(long self, long widget, int leftAttach, int rightAttach, int topAttach, int bottomAttach);

    static final int getColSpacing(Table self, int column) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_table_get_col_spacing(pointerOf(self), column);

            return result;
        }
    }

    private static native final int gtk_table_get_col_spacing(long self, int column);

    static final int getDefaultColSpacing(Table self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_table_get_default_col_spacing(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_table_get_default_col_spacing(long self);

    static final int getDefaultRowSpacing(Table self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_table_get_default_row_spacing(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_table_get_default_row_spacing(long self);

    static final boolean getHomogeneous(Table self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_table_get_homogeneous(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_table_get_homogeneous(long self);

    static final int getRowSpacing(Table self, int row) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_table_get_row_spacing(pointerOf(self), row);

            return result;
        }
    }

    private static native final int gtk_table_get_row_spacing(long self, int row);

    static final void getSize(Table self, int[] rows, int[] columns) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_table_get_size(pointerOf(self), rows, columns);
        }
    }

    private static native final void gtk_table_get_size(long self, int[] rows, int[] columns);

    static final void resize(Table self, int rows, int columns) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_table_resize(pointerOf(self), rows, columns);
        }
    }

    private static native final void gtk_table_resize(long self, int rows, int columns);

    static final void setColSpacing(Table self, int column, int spacing) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_table_set_col_spacing(pointerOf(self), column, spacing);
        }
    }

    private static native final void gtk_table_set_col_spacing(long self, int column, int spacing);

    static final void setColSpacings(Table self, int spacing) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_table_set_col_spacings(pointerOf(self), spacing);
        }
    }

    private static native final void gtk_table_set_col_spacings(long self, int spacing);

    static final void setHomogeneous(Table self, boolean homogeneous) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_table_set_homogeneous(pointerOf(self), homogeneous);
        }
    }

    private static native final void gtk_table_set_homogeneous(long self, boolean homogeneous);

    static final void setRowSpacing(Table self, int row, int spacing) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_table_set_row_spacing(pointerOf(self), row, spacing);
        }
    }

    private static native final void gtk_table_set_row_spacing(long self, int row, int spacing);

    static final void setRowSpacings(Table self, int spacing) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_table_set_row_spacings(pointerOf(self), spacing);
        }
    }

    private static native final void gtk_table_set_row_spacings(long self, int spacing);
}

