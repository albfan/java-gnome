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
import org.gnome.gtk.EntryBuffer;
import org.gnome.gtk.Plumbing;

final class GtkEntryBuffer extends Plumbing
{
    private GtkEntryBuffer() {}

    static final long createEntryBuffer(String initialChars, int nInitialChars) {
        long result;

        synchronized (lock) {
            result = gtk_entry_buffer_new(initialChars, nInitialChars);

            return result;
        }
    }

    private static native final long gtk_entry_buffer_new(String initialChars, int nInitialChars);

    static final int deleteText(EntryBuffer self, int position, int nChars) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_buffer_delete_text(pointerOf(self), position, nChars);

            return result;
        }
    }

    private static native final int gtk_entry_buffer_delete_text(long self, int position, int nChars);

    static final void emitDeletedText(EntryBuffer self, int position, int nChars) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_buffer_emit_deleted_text(pointerOf(self), position, nChars);
        }
    }

    private static native final void gtk_entry_buffer_emit_deleted_text(long self, int position, int nChars);

    static final void emitInsertedText(EntryBuffer self, int position, String chars, int nChars) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (chars == null) {
            throw new IllegalArgumentException("chars can't be null");
        }

        synchronized (lock) {
            gtk_entry_buffer_emit_inserted_text(pointerOf(self), position, chars, nChars);
        }
    }

    private static native final void gtk_entry_buffer_emit_inserted_text(long self, int position, String chars, int nChars);

    static final long getBytes(EntryBuffer self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_buffer_get_bytes(pointerOf(self));

            return result;
        }
    }

    private static native final long gtk_entry_buffer_get_bytes(long self);

    static final int getLength(EntryBuffer self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_buffer_get_length(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_entry_buffer_get_length(long self);

    static final int getMaxLength(EntryBuffer self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_buffer_get_max_length(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_entry_buffer_get_max_length(long self);

    static final String getText(EntryBuffer self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_buffer_get_text(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_entry_buffer_get_text(long self);

    static final int insertText(EntryBuffer self, int position, String chars, int nChars) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (chars == null) {
            throw new IllegalArgumentException("chars can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_buffer_insert_text(pointerOf(self), position, chars, nChars);

            return result;
        }
    }

    private static native final int gtk_entry_buffer_insert_text(long self, int position, String chars, int nChars);

    static final void setMaxLength(EntryBuffer self, int maxLength) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_buffer_set_max_length(pointerOf(self), maxLength);
        }
    }

    private static native final void gtk_entry_buffer_set_max_length(long self, int maxLength);

    static final void setText(EntryBuffer self, String chars, int nChars) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (chars == null) {
            throw new IllegalArgumentException("chars can't be null");
        }

        synchronized (lock) {
            gtk_entry_buffer_set_text(pointerOf(self), chars, nChars);
        }
    }

    private static native final void gtk_entry_buffer_set_text(long self, String chars, int nChars);

    interface DeleteTextSignal extends Signal
    {
        int onDeleteText(EntryBuffer source, int position, int nChars);
    }

    static final void connect(EntryBuffer self, GtkEntryBuffer.DeleteTextSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkEntryBuffer.class, "delete-text", after);
    }

    protected static final int receiveDeleteText(Signal handler, long source, int position, int nChars) {
        int result;

        result = ((GtkEntryBuffer.DeleteTextSignal) handler).onDeleteText((EntryBuffer) objectFor(source), position, nChars);

        return result;
    }

    interface DeletedTextSignal extends Signal
    {
        void onDeletedText(EntryBuffer source, int position, int nChars);
    }

    static final void connect(EntryBuffer self, GtkEntryBuffer.DeletedTextSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkEntryBuffer.class, "deleted-text", after);
    }

    protected static final void receiveDeletedText(Signal handler, long source, int position, int nChars) {
        ((GtkEntryBuffer.DeletedTextSignal) handler).onDeletedText((EntryBuffer) objectFor(source), position, nChars);
    }

    interface GetLengthSignal extends Signal
    {
        int onGetLength(EntryBuffer source);
    }

    static final void connect(EntryBuffer self, GtkEntryBuffer.GetLengthSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkEntryBuffer.class, "get-length", after);
    }

    protected static final int receiveGetLength(Signal handler, long source) {
        int result;

        result = ((GtkEntryBuffer.GetLengthSignal) handler).onGetLength((EntryBuffer) objectFor(source));

        return result;
    }

    interface GetTextSignal extends Signal
    {
        String onGetText(EntryBuffer source, long[] nBytes);
    }

    static final void connect(EntryBuffer self, GtkEntryBuffer.GetTextSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkEntryBuffer.class, "get-text", after);
    }

    protected static final String receiveGetText(Signal handler, long source, long[] nBytes) {
        String result;

        result = ((GtkEntryBuffer.GetTextSignal) handler).onGetText((EntryBuffer) objectFor(source), nBytes);

        return result;
    }

    interface InsertTextSignal extends Signal
    {
        int onInsertText(EntryBuffer source, int position, String chars, int nChars);
    }

    static final void connect(EntryBuffer self, GtkEntryBuffer.InsertTextSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkEntryBuffer.class, "insert-text", after);
    }

    protected static final int receiveInsertText(Signal handler, long source, int position, String chars, int nChars) {
        int result;

        result = ((GtkEntryBuffer.InsertTextSignal) handler).onInsertText((EntryBuffer) objectFor(source), position, chars, nChars);

        return result;
    }

    interface InsertedTextSignal extends Signal
    {
        void onInsertedText(EntryBuffer source, int position, String chars, int nChars);
    }

    static final void connect(EntryBuffer self, GtkEntryBuffer.InsertedTextSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkEntryBuffer.class, "inserted-text", after);
    }

    protected static final void receiveInsertedText(Signal handler, long source, int position, String chars, int nChars) {
        ((GtkEntryBuffer.InsertedTextSignal) handler).onInsertedText((EntryBuffer) objectFor(source), position, chars, nChars);
    }
}

