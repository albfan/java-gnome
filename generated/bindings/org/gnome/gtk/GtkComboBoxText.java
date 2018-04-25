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

import org.gnome.gtk.ComboBoxText;
import org.gnome.gtk.Plumbing;

final class GtkComboBoxText extends Plumbing
{
    private GtkComboBoxText() {}

    static final long createComboBoxText() {
        long result;

        synchronized (lock) {
            result = gtk_combo_box_text_new();

            return result;
        }
    }

    private static native final long gtk_combo_box_text_new();

    static final long createComboBoxTextWithEntry() {
        long result;

        synchronized (lock) {
            result = gtk_combo_box_text_new_with_entry();

            return result;
        }
    }

    private static native final long gtk_combo_box_text_new_with_entry();

    static final void append(ComboBoxText self, String id, String text) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (text == null) {
            throw new IllegalArgumentException("text can't be null");
        }

        synchronized (lock) {
            gtk_combo_box_text_append(pointerOf(self), id, text);
        }
    }

    private static native final void gtk_combo_box_text_append(long self, String id, String text);

    static final void appendText(ComboBoxText self, String text) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (text == null) {
            throw new IllegalArgumentException("text can't be null");
        }

        synchronized (lock) {
            gtk_combo_box_text_append_text(pointerOf(self), text);
        }
    }

    private static native final void gtk_combo_box_text_append_text(long self, String text);

    static final String getActiveText(ComboBoxText self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_combo_box_text_get_active_text(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_combo_box_text_get_active_text(long self);

    static final void insert(ComboBoxText self, int position, String id, String text) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (text == null) {
            throw new IllegalArgumentException("text can't be null");
        }

        synchronized (lock) {
            gtk_combo_box_text_insert(pointerOf(self), position, id, text);
        }
    }

    private static native final void gtk_combo_box_text_insert(long self, int position, String id, String text);

    static final void insertText(ComboBoxText self, int position, String text) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (text == null) {
            throw new IllegalArgumentException("text can't be null");
        }

        synchronized (lock) {
            gtk_combo_box_text_insert_text(pointerOf(self), position, text);
        }
    }

    private static native final void gtk_combo_box_text_insert_text(long self, int position, String text);

    static final void prepend(ComboBoxText self, String id, String text) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (text == null) {
            throw new IllegalArgumentException("text can't be null");
        }

        synchronized (lock) {
            gtk_combo_box_text_prepend(pointerOf(self), id, text);
        }
    }

    private static native final void gtk_combo_box_text_prepend(long self, String id, String text);

    static final void prependText(ComboBoxText self, String text) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (text == null) {
            throw new IllegalArgumentException("text can't be null");
        }

        synchronized (lock) {
            gtk_combo_box_text_prepend_text(pointerOf(self), text);
        }
    }

    private static native final void gtk_combo_box_text_prepend_text(long self, String text);

    static final void remove(ComboBoxText self, int position) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_combo_box_text_remove(pointerOf(self), position);
        }
    }

    private static native final void gtk_combo_box_text_remove(long self, int position);

    static final void removeAll(ComboBoxText self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_combo_box_text_remove_all(pointerOf(self));
        }
    }

    private static native final void gtk_combo_box_text_remove_all(long self);
}

