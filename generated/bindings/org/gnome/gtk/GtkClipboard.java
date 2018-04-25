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
import org.gnome.gdk.EventOwnerChange;
import org.gnome.gdk.Pixbuf;
import org.gnome.glib.Object;
import org.gnome.glib.Signal;
import org.gnome.gtk.Clipboard;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.SelectionData;
import org.gnome.gtk.TextBuffer;

final class GtkClipboard extends Plumbing
{
    private GtkClipboard() {}

    static final void clear(Clipboard self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_clipboard_clear(pointerOf(self));
        }
    }

    private static native final void gtk_clipboard_clear(long self);

    static final Display getDisplay(Clipboard self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_clipboard_get_display(pointerOf(self));

            return (Display) objectFor(result);
        }
    }

    private static native final long gtk_clipboard_get_display(long self);

    static final Object getOwner(Clipboard self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_clipboard_get_owner(pointerOf(self));

            return (Object) objectFor(result);
        }
    }

    private static native final long gtk_clipboard_get_owner(long self);

    @SuppressWarnings("unused")
    static final FIXME getSelection(Clipboard self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkAtom");
    }

    @SuppressWarnings("unused")
    static final void requestContents(Clipboard self, FIXME target, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkAtom");
    }

    @SuppressWarnings("unused")
    static final void requestImage(Clipboard self, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkClipboardImageReceivedFunc");
    }

    @SuppressWarnings("unused")
    static final void requestRichText(Clipboard self, TextBuffer buffer, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkClipboardRichTextReceivedFunc");
    }

    @SuppressWarnings("unused")
    static final void requestTargets(Clipboard self, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkClipboardTargetsReceivedFunc");
    }

    @SuppressWarnings("unused")
    static final void requestText(Clipboard self, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkClipboardTextReceivedFunc");
    }

    @SuppressWarnings("unused")
    static final void requestUris(Clipboard self, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkClipboardURIReceivedFunc");
    }

    @SuppressWarnings("unused")
    static final void setCanStore(Clipboard self, FIXME targets, int nTargets) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTargetEntry*");
    }

    static final void setImage(Clipboard self, Pixbuf pixbuf) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (pixbuf == null) {
            throw new IllegalArgumentException("pixbuf can't be null");
        }

        synchronized (lock) {
            gtk_clipboard_set_image(pointerOf(self), pointerOf(pixbuf));
        }
    }

    private static native final void gtk_clipboard_set_image(long self, long pixbuf);

    static final void setText(Clipboard self, String text, int len) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (text == null) {
            throw new IllegalArgumentException("text can't be null");
        }

        synchronized (lock) {
            gtk_clipboard_set_text(pointerOf(self), text, len);
        }
    }

    private static native final void gtk_clipboard_set_text(long self, String text, int len);

    @SuppressWarnings("unused")
    static final boolean setWithData(Clipboard self, FIXME targets, int nTargets, FIXME getFunc, FIXME clearFunc, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTargetEntry*");
    }

    @SuppressWarnings("unused")
    static final boolean setWithOwner(Clipboard self, FIXME targets, int nTargets, FIXME getFunc, FIXME clearFunc, Object owner) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTargetEntry*");
    }

    static final void store(Clipboard self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_clipboard_store(pointerOf(self));
        }
    }

    private static native final void gtk_clipboard_store(long self);

    @SuppressWarnings("unused")
    static final SelectionData waitForContents(Clipboard self, FIXME target) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkAtom");
    }

    static final Pixbuf waitForImage(Clipboard self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_clipboard_wait_for_image(pointerOf(self));

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long gtk_clipboard_wait_for_image(long self);

    @SuppressWarnings("unused")
    static final FIXME waitForRichText(Clipboard self, TextBuffer buffer, FIXME format, long[] length) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("guint8*");
    }

    @SuppressWarnings("unused")
    static final boolean waitForTargets(Clipboard self, FIXME targets, int[] nTargets) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkAtom**");
    }

    static final String waitForText(Clipboard self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_clipboard_wait_for_text(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_clipboard_wait_for_text(long self);

    static final String[] waitForUris(Clipboard self) {
        String[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_clipboard_wait_for_uris(pointerOf(self));

            return result;
        }
    }

    private static native final String[] gtk_clipboard_wait_for_uris(long self);

    static final boolean waitIsImageAvailable(Clipboard self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_clipboard_wait_is_image_available(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_clipboard_wait_is_image_available(long self);

    static final boolean waitIsRichTextAvailable(Clipboard self, TextBuffer buffer) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (buffer == null) {
            throw new IllegalArgumentException("buffer can't be null");
        }

        synchronized (lock) {
            result = gtk_clipboard_wait_is_rich_text_available(pointerOf(self), pointerOf(buffer));

            return result;
        }
    }

    private static native final boolean gtk_clipboard_wait_is_rich_text_available(long self, long buffer);

    @SuppressWarnings("unused")
    static final boolean waitIsTargetAvailable(Clipboard self, FIXME target) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkAtom");
    }

    static final boolean waitIsTextAvailable(Clipboard self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_clipboard_wait_is_text_available(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_clipboard_wait_is_text_available(long self);

    static final boolean waitIsUrisAvailable(Clipboard self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_clipboard_wait_is_uris_available(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_clipboard_wait_is_uris_available(long self);

    @SuppressWarnings("unused")
    static final Clipboard get(FIXME selection) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkAtom");
    }

    static final Clipboard getDefault(Display display) {
        long result;

        if (display == null) {
            throw new IllegalArgumentException("display can't be null");
        }

        synchronized (lock) {
            result = gtk_clipboard_get_default(pointerOf(display));

            return (Clipboard) objectFor(result);
        }
    }

    private static native final long gtk_clipboard_get_default(long display);

    @SuppressWarnings("unused")
    static final Clipboard getForDisplay(Display display, FIXME selection) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkAtom");
    }

    interface OwnerChangeSignal extends Signal
    {
        void onOwnerChange(Clipboard source, EventOwnerChange event);
    }

    static final void connect(Clipboard self, GtkClipboard.OwnerChangeSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkClipboard.class, "owner-change", after);
    }

    protected static final void receiveOwnerChange(Signal handler, long source, long event) {
        ((GtkClipboard.OwnerChangeSignal) handler).onOwnerChange((Clipboard) objectFor(source), (EventOwnerChange) boxedFor(EventOwnerChange.class, event));
    }
}

