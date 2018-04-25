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
import org.gnome.glib.Signal;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.TextTag;
import org.gnome.gtk.TextTagTable;

final class GtkTextTagTable extends Plumbing
{
    private GtkTextTagTable() {}

    static final long createTextTagTable() {
        long result;

        synchronized (lock) {
            result = gtk_text_tag_table_new();

            return result;
        }
    }

    private static native final long gtk_text_tag_table_new();

    static final boolean add(TextTagTable self, TextTag tag) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (tag == null) {
            throw new IllegalArgumentException("tag can't be null");
        }

        synchronized (lock) {
            result = gtk_text_tag_table_add(pointerOf(self), pointerOf(tag));

            return result;
        }
    }

    private static native final boolean gtk_text_tag_table_add(long self, long tag);

    @SuppressWarnings("unused")
    static final void foreach(TextTagTable self, FIXME func, FIXME data) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTextTagTableForeach");
    }

    static final int getSize(TextTagTable self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_tag_table_get_size(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_tag_table_get_size(long self);

    static final TextTag lookup(TextTagTable self, String name) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (name == null) {
            throw new IllegalArgumentException("name can't be null");
        }

        synchronized (lock) {
            result = gtk_text_tag_table_lookup(pointerOf(self), name);

            return (TextTag) objectFor(result);
        }
    }

    private static native final long gtk_text_tag_table_lookup(long self, String name);

    static final void remove(TextTagTable self, TextTag tag) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (tag == null) {
            throw new IllegalArgumentException("tag can't be null");
        }

        synchronized (lock) {
            gtk_text_tag_table_remove(pointerOf(self), pointerOf(tag));
        }
    }

    private static native final void gtk_text_tag_table_remove(long self, long tag);

    interface TagAddedSignal extends Signal
    {
        void onTagAdded(TextTagTable source, TextTag tag);
    }

    static final void connect(TextTagTable self, GtkTextTagTable.TagAddedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextTagTable.class, "tag-added", after);
    }

    protected static final void receiveTagAdded(Signal handler, long source, long tag) {
        ((GtkTextTagTable.TagAddedSignal) handler).onTagAdded((TextTagTable) objectFor(source), (TextTag) objectFor(tag));
    }

    interface TagChangedSignal extends Signal
    {
        void onTagChanged(TextTagTable source, TextTag tag, boolean sizeChanged);
    }

    static final void connect(TextTagTable self, GtkTextTagTable.TagChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextTagTable.class, "tag-changed", after);
    }

    protected static final void receiveTagChanged(Signal handler, long source, long tag, boolean sizeChanged) {
        ((GtkTextTagTable.TagChangedSignal) handler).onTagChanged((TextTagTable) objectFor(source), (TextTag) objectFor(tag), sizeChanged);
    }

    interface TagRemovedSignal extends Signal
    {
        void onTagRemoved(TextTagTable source, TextTag tag);
    }

    static final void connect(TextTagTable self, GtkTextTagTable.TagRemovedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextTagTable.class, "tag-removed", after);
    }

    protected static final void receiveTagRemoved(Signal handler, long source, long tag) {
        ((GtkTextTagTable.TagRemovedSignal) handler).onTagRemoved((TextTagTable) objectFor(source), (TextTag) objectFor(tag));
    }
}

