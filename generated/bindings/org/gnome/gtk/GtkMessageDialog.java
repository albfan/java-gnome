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
import org.gnome.gtk.ButtonsType;
import org.gnome.gtk.DialogFlags;
import org.gnome.gtk.MessageDialog;
import org.gnome.gtk.MessageType;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.Widget;
import org.gnome.gtk.Window;

final class GtkMessageDialog extends Plumbing
{
    private GtkMessageDialog() {}

    static final long createMessageDialog(Window parent, DialogFlags flags, MessageType type, ButtonsType buttons, String messageFormat) {
        long result;

        if (flags == null) {
            throw new IllegalArgumentException("flags can't be null");
        }

        if (type == null) {
            throw new IllegalArgumentException("type can't be null");
        }

        if (buttons == null) {
            throw new IllegalArgumentException("buttons can't be null");
        }

        synchronized (lock) {
            result = gtk_message_dialog_new(pointerOf(parent), numOf(flags), numOf(type), numOf(buttons), messageFormat);

            return result;
        }
    }

    private static native final long gtk_message_dialog_new(long parent, int flags, int type, int buttons, String messageFormat);

    static final long createMessageDialogWithMarkup(Window parent, DialogFlags flags, MessageType type, ButtonsType buttons, String messageFormat) {
        long result;

        if (flags == null) {
            throw new IllegalArgumentException("flags can't be null");
        }

        if (type == null) {
            throw new IllegalArgumentException("type can't be null");
        }

        if (buttons == null) {
            throw new IllegalArgumentException("buttons can't be null");
        }

        synchronized (lock) {
            result = gtk_message_dialog_new_with_markup(pointerOf(parent), numOf(flags), numOf(type), numOf(buttons), messageFormat);

            return result;
        }
    }

    private static native final long gtk_message_dialog_new_with_markup(long parent, int flags, int type, int buttons, String messageFormat);

    static final void formatSecondaryMarkup(MessageDialog self, String messageFormat) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (messageFormat == null) {
            throw new IllegalArgumentException("messageFormat can't be null");
        }

        synchronized (lock) {
            gtk_message_dialog_format_secondary_markup(pointerOf(self), messageFormat);
        }
    }

    private static native final void gtk_message_dialog_format_secondary_markup(long self, String messageFormat);

    static final void formatSecondaryText(MessageDialog self, String messageFormat) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_message_dialog_format_secondary_text(pointerOf(self), messageFormat);
        }
    }

    private static native final void gtk_message_dialog_format_secondary_text(long self, String messageFormat);

    static final Widget getImage(MessageDialog self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_message_dialog_get_image(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_message_dialog_get_image(long self);

    static final Widget getMessageArea(MessageDialog self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_message_dialog_get_message_area(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_message_dialog_get_message_area(long self);

    static final void setImage(MessageDialog self, Widget image) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (image == null) {
            throw new IllegalArgumentException("image can't be null");
        }

        synchronized (lock) {
            gtk_message_dialog_set_image(pointerOf(self), pointerOf(image));
        }
    }

    private static native final void gtk_message_dialog_set_image(long self, long image);

    static final void setMarkup(MessageDialog self, String str) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (str == null) {
            throw new IllegalArgumentException("str can't be null");
        }

        synchronized (lock) {
            gtk_message_dialog_set_markup(pointerOf(self), str);
        }
    }

    private static native final void gtk_message_dialog_set_markup(long self, String str);
}

