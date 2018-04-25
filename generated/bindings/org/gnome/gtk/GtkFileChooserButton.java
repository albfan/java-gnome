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

import org.gnome.glib.Signal;
import org.gnome.gtk.FileChooserAction;
import org.gnome.gtk.FileChooserButton;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.Widget;

final class GtkFileChooserButton extends Plumbing
{
    private GtkFileChooserButton() {}

    static final long createFileChooserButton(String title, FileChooserAction action) {
        long result;

        if (title == null) {
            throw new IllegalArgumentException("title can't be null");
        }

        if (action == null) {
            throw new IllegalArgumentException("action can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_button_new(title, numOf(action));

            return result;
        }
    }

    private static native final long gtk_file_chooser_button_new(String title, int action);

    static final long createFileChooserButtonWithDialog(Widget dialog) {
        long result;

        if (dialog == null) {
            throw new IllegalArgumentException("dialog can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_button_new_with_dialog(pointerOf(dialog));

            return result;
        }
    }

    private static native final long gtk_file_chooser_button_new_with_dialog(long dialog);

    static final boolean getFocusOnClick(FileChooserButton self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_button_get_focus_on_click(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_file_chooser_button_get_focus_on_click(long self);

    static final String getTitle(FileChooserButton self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_button_get_title(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_file_chooser_button_get_title(long self);

    static final int getWidthChars(FileChooserButton self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_file_chooser_button_get_width_chars(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_file_chooser_button_get_width_chars(long self);

    static final void setFocusOnClick(FileChooserButton self, boolean focusOnClick) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_file_chooser_button_set_focus_on_click(pointerOf(self), focusOnClick);
        }
    }

    private static native final void gtk_file_chooser_button_set_focus_on_click(long self, boolean focusOnClick);

    static final void setTitle(FileChooserButton self, String title) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (title == null) {
            throw new IllegalArgumentException("title can't be null");
        }

        synchronized (lock) {
            gtk_file_chooser_button_set_title(pointerOf(self), title);
        }
    }

    private static native final void gtk_file_chooser_button_set_title(long self, String title);

    static final void setWidthChars(FileChooserButton self, int nChars) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_file_chooser_button_set_width_chars(pointerOf(self), nChars);
        }
    }

    private static native final void gtk_file_chooser_button_set_width_chars(long self, int nChars);

    interface FileSetSignal extends Signal
    {
        void onFileSet(FileChooserButton source);
    }

    static final void connect(FileChooserButton self, GtkFileChooserButton.FileSetSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkFileChooserButton.class, "file-set", after);
    }

    protected static final void receiveFileSet(Signal handler, long source) {
        ((GtkFileChooserButton.FileSetSignal) handler).onFileSet((FileChooserButton) objectFor(source));
    }
}

