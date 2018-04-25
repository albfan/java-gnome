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
import org.gnome.gdk.Pixbuf;
import org.gnome.gdk.RGBA;
import org.gnome.glib.Object;
import org.gnome.gtk.CellView;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.Requisition;
import org.gnome.gtk.TreeModel;
import org.gnome.gtk.TreePath;

final class GtkCellView extends Plumbing
{
    private GtkCellView() {}

    static final long createCellView() {
        long result;

        synchronized (lock) {
            result = gtk_cell_view_new();

            return result;
        }
    }

    private static native final long gtk_cell_view_new();

    @SuppressWarnings("unused")
    static final long createCellViewWithContext(FIXME area, FIXME context) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkCellArea*");
    }

    static final long createCellViewWithMarkup(String markup) {
        long result;

        if (markup == null) {
            throw new IllegalArgumentException("markup can't be null");
        }

        synchronized (lock) {
            result = gtk_cell_view_new_with_markup(markup);

            return result;
        }
    }

    private static native final long gtk_cell_view_new_with_markup(String markup);

    static final long createCellViewWithPixbuf(Pixbuf pixbuf) {
        long result;

        if (pixbuf == null) {
            throw new IllegalArgumentException("pixbuf can't be null");
        }

        synchronized (lock) {
            result = gtk_cell_view_new_with_pixbuf(pointerOf(pixbuf));

            return result;
        }
    }

    private static native final long gtk_cell_view_new_with_pixbuf(long pixbuf);

    static final long createCellViewWithText(String text) {
        long result;

        if (text == null) {
            throw new IllegalArgumentException("text can't be null");
        }

        synchronized (lock) {
            result = gtk_cell_view_new_with_text(text);

            return result;
        }
    }

    private static native final long gtk_cell_view_new_with_text(String text);

    static final TreePath getDisplayedRow(CellView self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_cell_view_get_displayed_row(pointerOf(self));

            return (TreePath) boxedFor(TreePath.class, result);
        }
    }

    private static native final long gtk_cell_view_get_displayed_row(long self);

    static final boolean getDrawSensitive(CellView self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_cell_view_get_draw_sensitive(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_cell_view_get_draw_sensitive(long self);

    static final boolean getFitModel(CellView self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_cell_view_get_fit_model(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_cell_view_get_fit_model(long self);

    static final TreeModel getModel(CellView self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_cell_view_get_model(pointerOf(self));

            return (TreeModel) objectFor(result);
        }
    }

    private static native final long gtk_cell_view_get_model(long self);

    static final boolean getSizeOfRow(CellView self, TreePath path, Requisition requisition) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            result = gtk_cell_view_get_size_of_row(pointerOf(self), pointerOf(path), pointerOf(requisition));

            return result;
        }
    }

    private static native final boolean gtk_cell_view_get_size_of_row(long self, long path, long requisition);

    @SuppressWarnings("unused")
    static final void setBackgroundColor(CellView self, FIXME color) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("const-GdkColor*");
    }

    static final void setBackgroundRgba(CellView self, RGBA rgba) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (rgba == null) {
            throw new IllegalArgumentException("rgba can't be null");
        }

        synchronized (lock) {
            gtk_cell_view_set_background_rgba(pointerOf(self), pointerOf(rgba));
        }
    }

    private static native final void gtk_cell_view_set_background_rgba(long self, long rgba);

    static final void setDisplayedRow(CellView self, TreePath path) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_cell_view_set_displayed_row(pointerOf(self), pointerOf(path));
        }
    }

    private static native final void gtk_cell_view_set_displayed_row(long self, long path);

    static final void setDrawSensitive(CellView self, boolean drawSensitive) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_cell_view_set_draw_sensitive(pointerOf(self), drawSensitive);
        }
    }

    private static native final void gtk_cell_view_set_draw_sensitive(long self, boolean drawSensitive);

    static final void setFitModel(CellView self, boolean fitModel) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_cell_view_set_fit_model(pointerOf(self), fitModel);
        }
    }

    private static native final void gtk_cell_view_set_fit_model(long self, boolean fitModel);

    static final void setModel(CellView self, TreeModel model) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_cell_view_set_model(pointerOf(self), pointerOf((Object) model));
        }
    }

    private static native final void gtk_cell_view_set_model(long self, long model);
}

