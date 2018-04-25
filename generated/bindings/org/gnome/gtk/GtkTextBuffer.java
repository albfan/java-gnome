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
import org.gnome.glib.GlibException;
import org.gnome.glib.Signal;
import org.gnome.gtk.Clipboard;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.TextBuffer;
import org.gnome.gtk.TextChildAnchor;
import org.gnome.gtk.TextIter;
import org.gnome.gtk.TextMark;
import org.gnome.gtk.TextTag;
import org.gnome.gtk.TextTagTable;

final class GtkTextBuffer extends Plumbing
{
    private GtkTextBuffer() {}

    static final long createTextBuffer(TextTagTable table) {
        long result;

        synchronized (lock) {
            result = gtk_text_buffer_new(pointerOf(table));

            return result;
        }
    }

    private static native final long gtk_text_buffer_new(long table);

    static final void addMark(TextBuffer self, TextMark mark, TextIter where) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (mark == null) {
            throw new IllegalArgumentException("mark can't be null");
        }

        if (where == null) {
            throw new IllegalArgumentException("where can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_add_mark(pointerOf(self), pointerOf(mark), pointerOf(where));
        }
    }

    private static native final void gtk_text_buffer_add_mark(long self, long mark, long where);

    static final void addSelectionClipboard(TextBuffer self, Clipboard clipboard) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (clipboard == null) {
            throw new IllegalArgumentException("clipboard can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_add_selection_clipboard(pointerOf(self), pointerOf(clipboard));
        }
    }

    private static native final void gtk_text_buffer_add_selection_clipboard(long self, long clipboard);

    static final void applyTag(TextBuffer self, TextTag tag, TextIter start, TextIter end) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (tag == null) {
            throw new IllegalArgumentException("tag can't be null");
        }

        if (start == null) {
            throw new IllegalArgumentException("start can't be null");
        }

        if (end == null) {
            throw new IllegalArgumentException("end can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_apply_tag(pointerOf(self), pointerOf(tag), pointerOf(start), pointerOf(end));
        }
    }

    private static native final void gtk_text_buffer_apply_tag(long self, long tag, long start, long end);

    static final void applyTagByName(TextBuffer self, String name, TextIter start, TextIter end) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (name == null) {
            throw new IllegalArgumentException("name can't be null");
        }

        if (start == null) {
            throw new IllegalArgumentException("start can't be null");
        }

        if (end == null) {
            throw new IllegalArgumentException("end can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_apply_tag_by_name(pointerOf(self), name, pointerOf(start), pointerOf(end));
        }
    }

    private static native final void gtk_text_buffer_apply_tag_by_name(long self, String name, long start, long end);

    static final boolean backspace(TextBuffer self, org.gnome.gtk.TextIter iter, boolean interactive, boolean defaultEditable) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            result = gtk_text_buffer_backspace(pointerOf(self), pointerOf(iter), interactive, defaultEditable);

            return result;
        }
    }

    private static native final boolean gtk_text_buffer_backspace(long self, long iter, boolean interactive, boolean defaultEditable);

    static final void beginUserAction(TextBuffer self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_begin_user_action(pointerOf(self));
        }
    }

    private static native final void gtk_text_buffer_begin_user_action(long self);

    static final void copyClipboard(TextBuffer self, Clipboard clipboard) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (clipboard == null) {
            throw new IllegalArgumentException("clipboard can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_copy_clipboard(pointerOf(self), pointerOf(clipboard));
        }
    }

    private static native final void gtk_text_buffer_copy_clipboard(long self, long clipboard);

    static final TextChildAnchor createChildAnchor(TextBuffer self, org.gnome.gtk.TextIter iter) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            result = gtk_text_buffer_create_child_anchor(pointerOf(self), pointerOf(iter));

            return (TextChildAnchor) objectFor(result);
        }
    }

    private static native final long gtk_text_buffer_create_child_anchor(long self, long iter);

    static final TextMark createMark(TextBuffer self, String markName, TextIter where, boolean leftGravity) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (where == null) {
            throw new IllegalArgumentException("where can't be null");
        }

        synchronized (lock) {
            result = gtk_text_buffer_create_mark(pointerOf(self), markName, pointerOf(where), leftGravity);

            return (TextMark) objectFor(result);
        }
    }

    private static native final long gtk_text_buffer_create_mark(long self, String markName, long where, boolean leftGravity);

    static final TextTag createTag(TextBuffer self, String tagName, String firstPropertyName) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_buffer_create_tag(pointerOf(self), tagName, firstPropertyName);

            return (TextTag) objectFor(result);
        }
    }

    private static native final long gtk_text_buffer_create_tag(long self, String tagName, String firstPropertyName);

    static final void cutClipboard(TextBuffer self, Clipboard clipboard, boolean defaultEditable) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (clipboard == null) {
            throw new IllegalArgumentException("clipboard can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_cut_clipboard(pointerOf(self), pointerOf(clipboard), defaultEditable);
        }
    }

    private static native final void gtk_text_buffer_cut_clipboard(long self, long clipboard, boolean defaultEditable);

    static final void delete(TextBuffer self, org.gnome.gtk.TextIter start, org.gnome.gtk.TextIter end) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (start == null) {
            throw new IllegalArgumentException("start can't be null");
        }

        if (end == null) {
            throw new IllegalArgumentException("end can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_delete(pointerOf(self), pointerOf(start), pointerOf(end));
        }
    }

    private static native final void gtk_text_buffer_delete(long self, long start, long end);

    static final boolean deleteInteractive(TextBuffer self, org.gnome.gtk.TextIter startIter, org.gnome.gtk.TextIter endIter, boolean defaultEditable) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (startIter == null) {
            throw new IllegalArgumentException("startIter can't be null");
        }

        if (endIter == null) {
            throw new IllegalArgumentException("endIter can't be null");
        }

        synchronized (lock) {
            result = gtk_text_buffer_delete_interactive(pointerOf(self), pointerOf(startIter), pointerOf(endIter), defaultEditable);

            return result;
        }
    }

    private static native final boolean gtk_text_buffer_delete_interactive(long self, long startIter, long endIter, boolean defaultEditable);

    static final void deleteMark(TextBuffer self, TextMark mark) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (mark == null) {
            throw new IllegalArgumentException("mark can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_delete_mark(pointerOf(self), pointerOf(mark));
        }
    }

    private static native final void gtk_text_buffer_delete_mark(long self, long mark);

    static final void deleteMarkByName(TextBuffer self, String name) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (name == null) {
            throw new IllegalArgumentException("name can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_delete_mark_by_name(pointerOf(self), name);
        }
    }

    private static native final void gtk_text_buffer_delete_mark_by_name(long self, String name);

    static final boolean deleteSelection(TextBuffer self, boolean interactive, boolean defaultEditable) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_buffer_delete_selection(pointerOf(self), interactive, defaultEditable);

            return result;
        }
    }

    private static native final boolean gtk_text_buffer_delete_selection(long self, boolean interactive, boolean defaultEditable);

    @SuppressWarnings("unused")
    static final boolean deserialize(TextBuffer self, TextBuffer contentBuffer, FIXME format, org.gnome.gtk.TextIter iter, FIXME data, long length) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkAtom");
    }

    @SuppressWarnings("unused")
    static final boolean deserializeGetCanCreateTags(TextBuffer self, FIXME format) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkAtom");
    }

    @SuppressWarnings("unused")
    static final void deserializeSetCanCreateTags(TextBuffer self, FIXME format, boolean canCreateTags) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkAtom");
    }

    static final void endUserAction(TextBuffer self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_end_user_action(pointerOf(self));
        }
    }

    private static native final void gtk_text_buffer_end_user_action(long self);

    static final void getBounds(TextBuffer self, org.gnome.gtk.TextIter start, org.gnome.gtk.TextIter end) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_get_bounds(pointerOf(self), pointerOf(start), pointerOf(end));
        }
    }

    private static native final void gtk_text_buffer_get_bounds(long self, long start, long end);

    static final int getCharCount(TextBuffer self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_buffer_get_char_count(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_buffer_get_char_count(long self);

    @SuppressWarnings("unused")
    static final FIXME getCopyTargetList(TextBuffer self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTargetList*");
    }

    @SuppressWarnings("unused")
    static final FIXME getDeserializeFormats(TextBuffer self, int[] nFormats) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkAtom*");
    }

    static final void getEndIter(TextBuffer self, org.gnome.gtk.TextIter iter) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_get_end_iter(pointerOf(self), pointerOf(iter));
        }
    }

    private static native final void gtk_text_buffer_get_end_iter(long self, long iter);

    static final boolean getHasSelection(TextBuffer self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_buffer_get_has_selection(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_buffer_get_has_selection(long self);

    static final TextMark getInsert(TextBuffer self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_buffer_get_insert(pointerOf(self));

            return (TextMark) objectFor(result);
        }
    }

    private static native final long gtk_text_buffer_get_insert(long self);

    static final void getIterAtChildAnchor(TextBuffer self, org.gnome.gtk.TextIter iter, TextChildAnchor anchor) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (anchor == null) {
            throw new IllegalArgumentException("anchor can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_get_iter_at_child_anchor(pointerOf(self), pointerOf(iter), pointerOf(anchor));
        }
    }

    private static native final void gtk_text_buffer_get_iter_at_child_anchor(long self, long iter, long anchor);

    static final void getIterAtLine(TextBuffer self, org.gnome.gtk.TextIter iter, int lineNumber) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_get_iter_at_line(pointerOf(self), pointerOf(iter), lineNumber);
        }
    }

    private static native final void gtk_text_buffer_get_iter_at_line(long self, long iter, int lineNumber);

    static final void getIterAtLineIndex(TextBuffer self, org.gnome.gtk.TextIter iter, int lineNumber, int byteIndex) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_get_iter_at_line_index(pointerOf(self), pointerOf(iter), lineNumber, byteIndex);
        }
    }

    private static native final void gtk_text_buffer_get_iter_at_line_index(long self, long iter, int lineNumber, int byteIndex);

    static final void getIterAtLineOffset(TextBuffer self, org.gnome.gtk.TextIter iter, int lineNumber, int charOffset) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_get_iter_at_line_offset(pointerOf(self), pointerOf(iter), lineNumber, charOffset);
        }
    }

    private static native final void gtk_text_buffer_get_iter_at_line_offset(long self, long iter, int lineNumber, int charOffset);

    static final void getIterAtMark(TextBuffer self, org.gnome.gtk.TextIter iter, TextMark mark) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (mark == null) {
            throw new IllegalArgumentException("mark can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_get_iter_at_mark(pointerOf(self), pointerOf(iter), pointerOf(mark));
        }
    }

    private static native final void gtk_text_buffer_get_iter_at_mark(long self, long iter, long mark);

    static final void getIterAtOffset(TextBuffer self, org.gnome.gtk.TextIter iter, int charOffset) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_get_iter_at_offset(pointerOf(self), pointerOf(iter), charOffset);
        }
    }

    private static native final void gtk_text_buffer_get_iter_at_offset(long self, long iter, int charOffset);

    static final int getLineCount(TextBuffer self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_buffer_get_line_count(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_buffer_get_line_count(long self);

    static final TextMark getMark(TextBuffer self, String name) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (name == null) {
            throw new IllegalArgumentException("name can't be null");
        }

        synchronized (lock) {
            result = gtk_text_buffer_get_mark(pointerOf(self), name);

            return (TextMark) objectFor(result);
        }
    }

    private static native final long gtk_text_buffer_get_mark(long self, String name);

    static final boolean getModified(TextBuffer self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_buffer_get_modified(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_buffer_get_modified(long self);

    @SuppressWarnings("unused")
    static final FIXME getPasteTargetList(TextBuffer self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTargetList*");
    }

    static final TextMark getSelectionBound(TextBuffer self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_buffer_get_selection_bound(pointerOf(self));

            return (TextMark) objectFor(result);
        }
    }

    private static native final long gtk_text_buffer_get_selection_bound(long self);

    static final boolean getSelectionBounds(TextBuffer self, org.gnome.gtk.TextIter start, org.gnome.gtk.TextIter end) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_buffer_get_selection_bounds(pointerOf(self), pointerOf(start), pointerOf(end));

            return result;
        }
    }

    private static native final boolean gtk_text_buffer_get_selection_bounds(long self, long start, long end);

    @SuppressWarnings("unused")
    static final FIXME getSerializeFormats(TextBuffer self, int[] nFormats) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkAtom*");
    }

    static final String getSlice(TextBuffer self, TextIter start, TextIter end, boolean includeHiddenChars) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (start == null) {
            throw new IllegalArgumentException("start can't be null");
        }

        if (end == null) {
            throw new IllegalArgumentException("end can't be null");
        }

        synchronized (lock) {
            result = gtk_text_buffer_get_slice(pointerOf(self), pointerOf(start), pointerOf(end), includeHiddenChars);

            return result;
        }
    }

    private static native final String gtk_text_buffer_get_slice(long self, long start, long end, boolean includeHiddenChars);

    static final void getStartIter(TextBuffer self, org.gnome.gtk.TextIter iter) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_get_start_iter(pointerOf(self), pointerOf(iter));
        }
    }

    private static native final void gtk_text_buffer_get_start_iter(long self, long iter);

    static final TextTagTable getTagTable(TextBuffer self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_buffer_get_tag_table(pointerOf(self));

            return (TextTagTable) objectFor(result);
        }
    }

    private static native final long gtk_text_buffer_get_tag_table(long self);

    static final String getText(TextBuffer self, TextIter start, TextIter end, boolean includeHiddenChars) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (start == null) {
            throw new IllegalArgumentException("start can't be null");
        }

        if (end == null) {
            throw new IllegalArgumentException("end can't be null");
        }

        synchronized (lock) {
            result = gtk_text_buffer_get_text(pointerOf(self), pointerOf(start), pointerOf(end), includeHiddenChars);

            return result;
        }
    }

    private static native final String gtk_text_buffer_get_text(long self, long start, long end, boolean includeHiddenChars);

    static final void insert(TextBuffer self, org.gnome.gtk.TextIter iter, String text, int len) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        if (text == null) {
            throw new IllegalArgumentException("text can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_insert(pointerOf(self), pointerOf(iter), text, len);
        }
    }

    private static native final void gtk_text_buffer_insert(long self, long iter, String text, int len);

    static final void insertAtCursor(TextBuffer self, String text, int len) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (text == null) {
            throw new IllegalArgumentException("text can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_insert_at_cursor(pointerOf(self), text, len);
        }
    }

    private static native final void gtk_text_buffer_insert_at_cursor(long self, String text, int len);

    static final void insertChildAnchor(TextBuffer self, org.gnome.gtk.TextIter iter, TextChildAnchor anchor) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        if (anchor == null) {
            throw new IllegalArgumentException("anchor can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_insert_child_anchor(pointerOf(self), pointerOf(iter), pointerOf(anchor));
        }
    }

    private static native final void gtk_text_buffer_insert_child_anchor(long self, long iter, long anchor);

    static final boolean insertInteractive(TextBuffer self, org.gnome.gtk.TextIter iter, String text, int len, boolean defaultEditable) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        if (text == null) {
            throw new IllegalArgumentException("text can't be null");
        }

        synchronized (lock) {
            result = gtk_text_buffer_insert_interactive(pointerOf(self), pointerOf(iter), text, len, defaultEditable);

            return result;
        }
    }

    private static native final boolean gtk_text_buffer_insert_interactive(long self, long iter, String text, int len, boolean defaultEditable);

    static final boolean insertInteractiveAtCursor(TextBuffer self, String text, int len, boolean defaultEditable) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (text == null) {
            throw new IllegalArgumentException("text can't be null");
        }

        synchronized (lock) {
            result = gtk_text_buffer_insert_interactive_at_cursor(pointerOf(self), text, len, defaultEditable);

            return result;
        }
    }

    private static native final boolean gtk_text_buffer_insert_interactive_at_cursor(long self, String text, int len, boolean defaultEditable);

    static final void insertMarkup(TextBuffer self, org.gnome.gtk.TextIter iter, String markup, int len) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        if (markup == null) {
            throw new IllegalArgumentException("markup can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_insert_markup(pointerOf(self), pointerOf(iter), markup, len);
        }
    }

    private static native final void gtk_text_buffer_insert_markup(long self, long iter, String markup, int len);

    static final void insertPixbuf(TextBuffer self, org.gnome.gtk.TextIter iter, Pixbuf pixbuf) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        if (pixbuf == null) {
            throw new IllegalArgumentException("pixbuf can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_insert_pixbuf(pointerOf(self), pointerOf(iter), pointerOf(pixbuf));
        }
    }

    private static native final void gtk_text_buffer_insert_pixbuf(long self, long iter, long pixbuf);

    static final void insertRange(TextBuffer self, org.gnome.gtk.TextIter iter, TextIter start, TextIter end) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        if (start == null) {
            throw new IllegalArgumentException("start can't be null");
        }

        if (end == null) {
            throw new IllegalArgumentException("end can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_insert_range(pointerOf(self), pointerOf(iter), pointerOf(start), pointerOf(end));
        }
    }

    private static native final void gtk_text_buffer_insert_range(long self, long iter, long start, long end);

    static final boolean insertRangeInteractive(TextBuffer self, org.gnome.gtk.TextIter iter, TextIter start, TextIter end, boolean defaultEditable) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        if (start == null) {
            throw new IllegalArgumentException("start can't be null");
        }

        if (end == null) {
            throw new IllegalArgumentException("end can't be null");
        }

        synchronized (lock) {
            result = gtk_text_buffer_insert_range_interactive(pointerOf(self), pointerOf(iter), pointerOf(start), pointerOf(end), defaultEditable);

            return result;
        }
    }

    private static native final boolean gtk_text_buffer_insert_range_interactive(long self, long iter, long start, long end, boolean defaultEditable);

    static final void insertWithTags(TextBuffer self, org.gnome.gtk.TextIter iter, String text, int len, TextTag firstTag) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        if (text == null) {
            throw new IllegalArgumentException("text can't be null");
        }

        if (firstTag == null) {
            throw new IllegalArgumentException("firstTag can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_insert_with_tags(pointerOf(self), pointerOf(iter), text, len, pointerOf(firstTag));
        }
    }

    private static native final void gtk_text_buffer_insert_with_tags(long self, long iter, String text, int len, long firstTag);

    static final void insertWithTagsByName(TextBuffer self, org.gnome.gtk.TextIter iter, String text, int len, String firstTagName) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        if (text == null) {
            throw new IllegalArgumentException("text can't be null");
        }

        if (firstTagName == null) {
            throw new IllegalArgumentException("firstTagName can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_insert_with_tags_by_name(pointerOf(self), pointerOf(iter), text, len, firstTagName);
        }
    }

    private static native final void gtk_text_buffer_insert_with_tags_by_name(long self, long iter, String text, int len, String firstTagName);

    static final void moveMark(TextBuffer self, TextMark mark, TextIter where) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (mark == null) {
            throw new IllegalArgumentException("mark can't be null");
        }

        if (where == null) {
            throw new IllegalArgumentException("where can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_move_mark(pointerOf(self), pointerOf(mark), pointerOf(where));
        }
    }

    private static native final void gtk_text_buffer_move_mark(long self, long mark, long where);

    static final void moveMarkByName(TextBuffer self, String name, TextIter where) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (name == null) {
            throw new IllegalArgumentException("name can't be null");
        }

        if (where == null) {
            throw new IllegalArgumentException("where can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_move_mark_by_name(pointerOf(self), name, pointerOf(where));
        }
    }

    private static native final void gtk_text_buffer_move_mark_by_name(long self, String name, long where);

    static final void pasteClipboard(TextBuffer self, Clipboard clipboard, org.gnome.gtk.TextIter overrideLocation, boolean defaultEditable) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (clipboard == null) {
            throw new IllegalArgumentException("clipboard can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_paste_clipboard(pointerOf(self), pointerOf(clipboard), pointerOf(overrideLocation), defaultEditable);
        }
    }

    private static native final void gtk_text_buffer_paste_clipboard(long self, long clipboard, long overrideLocation, boolean defaultEditable);

    static final void placeCursor(TextBuffer self, TextIter where) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (where == null) {
            throw new IllegalArgumentException("where can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_place_cursor(pointerOf(self), pointerOf(where));
        }
    }

    private static native final void gtk_text_buffer_place_cursor(long self, long where);

    @SuppressWarnings("unused")
    static final FIXME registerDeserializeFormat(TextBuffer self, String mimeType, FIXME function, FIXME userData, FIXME userDataDestroy) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkAtom");
    }

    @SuppressWarnings("unused")
    static final FIXME registerDeserializeTagset(TextBuffer self, String tagsetName) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkAtom");
    }

    @SuppressWarnings("unused")
    static final FIXME registerSerializeFormat(TextBuffer self, String mimeType, FIXME function, FIXME userData, FIXME userDataDestroy) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkAtom");
    }

    @SuppressWarnings("unused")
    static final FIXME registerSerializeTagset(TextBuffer self, String tagsetName) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkAtom");
    }

    static final void removeAllTags(TextBuffer self, TextIter start, TextIter end) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (start == null) {
            throw new IllegalArgumentException("start can't be null");
        }

        if (end == null) {
            throw new IllegalArgumentException("end can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_remove_all_tags(pointerOf(self), pointerOf(start), pointerOf(end));
        }
    }

    private static native final void gtk_text_buffer_remove_all_tags(long self, long start, long end);

    static final void removeSelectionClipboard(TextBuffer self, Clipboard clipboard) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (clipboard == null) {
            throw new IllegalArgumentException("clipboard can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_remove_selection_clipboard(pointerOf(self), pointerOf(clipboard));
        }
    }

    private static native final void gtk_text_buffer_remove_selection_clipboard(long self, long clipboard);

    static final void removeTag(TextBuffer self, TextTag tag, TextIter start, TextIter end) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (tag == null) {
            throw new IllegalArgumentException("tag can't be null");
        }

        if (start == null) {
            throw new IllegalArgumentException("start can't be null");
        }

        if (end == null) {
            throw new IllegalArgumentException("end can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_remove_tag(pointerOf(self), pointerOf(tag), pointerOf(start), pointerOf(end));
        }
    }

    private static native final void gtk_text_buffer_remove_tag(long self, long tag, long start, long end);

    static final void removeTagByName(TextBuffer self, String name, TextIter start, TextIter end) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (name == null) {
            throw new IllegalArgumentException("name can't be null");
        }

        if (start == null) {
            throw new IllegalArgumentException("start can't be null");
        }

        if (end == null) {
            throw new IllegalArgumentException("end can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_remove_tag_by_name(pointerOf(self), name, pointerOf(start), pointerOf(end));
        }
    }

    private static native final void gtk_text_buffer_remove_tag_by_name(long self, String name, long start, long end);

    static final void selectRange(TextBuffer self, TextIter ins, TextIter bound) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (ins == null) {
            throw new IllegalArgumentException("ins can't be null");
        }

        if (bound == null) {
            throw new IllegalArgumentException("bound can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_select_range(pointerOf(self), pointerOf(ins), pointerOf(bound));
        }
    }

    private static native final void gtk_text_buffer_select_range(long self, long ins, long bound);

    @SuppressWarnings("unused")
    static final FIXME serialize(TextBuffer self, TextBuffer contentBuffer, FIXME format, TextIter start, TextIter end, long[] length) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("guint8*");
    }

    static final void setModified(TextBuffer self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_set_modified(pointerOf(self), setting);
        }
    }

    private static native final void gtk_text_buffer_set_modified(long self, boolean setting);

    static final void setText(TextBuffer self, String text, int len) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (text == null) {
            throw new IllegalArgumentException("text can't be null");
        }

        synchronized (lock) {
            gtk_text_buffer_set_text(pointerOf(self), text, len);
        }
    }

    private static native final void gtk_text_buffer_set_text(long self, String text, int len);

    @SuppressWarnings("unused")
    static final void unregisterDeserializeFormat(TextBuffer self, FIXME format) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkAtom");
    }

    @SuppressWarnings("unused")
    static final void unregisterSerializeFormat(TextBuffer self, FIXME format) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkAtom");
    }

    interface ApplyTagSignal extends Signal
    {
        void onApplyTag(TextBuffer source, TextTag tag, TextIter start, TextIter end);
    }

    static final void connect(TextBuffer self, GtkTextBuffer.ApplyTagSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextBuffer.class, "apply-tag", after);
    }

    protected static final void receiveApplyTag(Signal handler, long source, long tag, long start, long end) {
        ((GtkTextBuffer.ApplyTagSignal) handler).onApplyTag((TextBuffer) objectFor(source), (TextTag) objectFor(tag), (TextIter) boxedFor(TextIter.class, start), (TextIter) boxedFor(TextIter.class, end));
    }

    interface BeginUserActionSignal extends Signal
    {
        void onBeginUserAction(TextBuffer source);
    }

    static final void connect(TextBuffer self, GtkTextBuffer.BeginUserActionSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextBuffer.class, "begin-user-action", after);
    }

    protected static final void receiveBeginUserAction(Signal handler, long source) {
        ((GtkTextBuffer.BeginUserActionSignal) handler).onBeginUserAction((TextBuffer) objectFor(source));
    }

    interface ChangedSignal extends Signal
    {
        void onChanged(TextBuffer source);
    }

    static final void connect(TextBuffer self, GtkTextBuffer.ChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextBuffer.class, "changed", after);
    }

    protected static final void receiveChanged(Signal handler, long source) {
        ((GtkTextBuffer.ChangedSignal) handler).onChanged((TextBuffer) objectFor(source));
    }

    interface DeleteRangeSignal extends Signal
    {
        void onDeleteRange(TextBuffer source, org.gnome.gtk.TextIter start, org.gnome.gtk.TextIter end);
    }

    static final void connect(TextBuffer self, GtkTextBuffer.DeleteRangeSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextBuffer.class, "delete-range", after);
    }

    protected static final void receiveDeleteRange(Signal handler, long source, long start, long end) {
        ((GtkTextBuffer.DeleteRangeSignal) handler).onDeleteRange((TextBuffer) objectFor(source), (org.gnome.gtk.TextIter) boxedFor(org.gnome.gtk.TextIter.class, start), (org.gnome.gtk.TextIter) boxedFor(org.gnome.gtk.TextIter.class, end));
    }

    interface EndUserActionSignal extends Signal
    {
        void onEndUserAction(TextBuffer source);
    }

    static final void connect(TextBuffer self, GtkTextBuffer.EndUserActionSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextBuffer.class, "end-user-action", after);
    }

    protected static final void receiveEndUserAction(Signal handler, long source) {
        ((GtkTextBuffer.EndUserActionSignal) handler).onEndUserAction((TextBuffer) objectFor(source));
    }

    interface InsertChildAnchorSignal extends Signal
    {
        void onInsertChildAnchor(TextBuffer source, org.gnome.gtk.TextIter iter, TextChildAnchor anchor);
    }

    static final void connect(TextBuffer self, GtkTextBuffer.InsertChildAnchorSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextBuffer.class, "insert-child-anchor", after);
    }

    protected static final void receiveInsertChildAnchor(Signal handler, long source, long iter, long anchor) {
        ((GtkTextBuffer.InsertChildAnchorSignal) handler).onInsertChildAnchor((TextBuffer) objectFor(source), (org.gnome.gtk.TextIter) boxedFor(org.gnome.gtk.TextIter.class, iter), (TextChildAnchor) objectFor(anchor));
    }

    interface InsertPixbufSignal extends Signal
    {
        void onInsertPixbuf(TextBuffer source, org.gnome.gtk.TextIter iter, Pixbuf pixbuf);
    }

    static final void connect(TextBuffer self, GtkTextBuffer.InsertPixbufSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextBuffer.class, "insert-pixbuf", after);
    }

    protected static final void receiveInsertPixbuf(Signal handler, long source, long iter, long pixbuf) {
        ((GtkTextBuffer.InsertPixbufSignal) handler).onInsertPixbuf((TextBuffer) objectFor(source), (org.gnome.gtk.TextIter) boxedFor(org.gnome.gtk.TextIter.class, iter), (Pixbuf) objectFor(pixbuf));
    }

    interface InsertTextSignal extends Signal
    {
        void onInsertText(TextBuffer source, org.gnome.gtk.TextIter pos, String newText, int newTextLength);
    }

    static final void connect(TextBuffer self, GtkTextBuffer.InsertTextSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextBuffer.class, "insert-text", after);
    }

    protected static final void receiveInsertText(Signal handler, long source, long pos, String newText, int newTextLength) {
        ((GtkTextBuffer.InsertTextSignal) handler).onInsertText((TextBuffer) objectFor(source), (org.gnome.gtk.TextIter) boxedFor(org.gnome.gtk.TextIter.class, pos), newText, newTextLength);
    }

    interface MarkDeletedSignal extends Signal
    {
        void onMarkDeleted(TextBuffer source, TextMark mark);
    }

    static final void connect(TextBuffer self, GtkTextBuffer.MarkDeletedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextBuffer.class, "mark-deleted", after);
    }

    protected static final void receiveMarkDeleted(Signal handler, long source, long mark) {
        ((GtkTextBuffer.MarkDeletedSignal) handler).onMarkDeleted((TextBuffer) objectFor(source), (TextMark) objectFor(mark));
    }

    interface MarkSetSignal extends Signal
    {
        void onMarkSet(TextBuffer source, TextIter location, TextMark mark);
    }

    static final void connect(TextBuffer self, GtkTextBuffer.MarkSetSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextBuffer.class, "mark-set", after);
    }

    protected static final void receiveMarkSet(Signal handler, long source, long location, long mark) {
        ((GtkTextBuffer.MarkSetSignal) handler).onMarkSet((TextBuffer) objectFor(source), (TextIter) boxedFor(TextIter.class, location), (TextMark) objectFor(mark));
    }

    interface ModifiedChangedSignal extends Signal
    {
        void onModifiedChanged(TextBuffer source);
    }

    static final void connect(TextBuffer self, GtkTextBuffer.ModifiedChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextBuffer.class, "modified-changed", after);
    }

    protected static final void receiveModifiedChanged(Signal handler, long source) {
        ((GtkTextBuffer.ModifiedChangedSignal) handler).onModifiedChanged((TextBuffer) objectFor(source));
    }

    interface PasteDoneSignal extends Signal
    {
        void onPasteDone(TextBuffer source, Clipboard clipboard);
    }

    static final void connect(TextBuffer self, GtkTextBuffer.PasteDoneSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextBuffer.class, "paste-done", after);
    }

    protected static final void receivePasteDone(Signal handler, long source, long clipboard) {
        ((GtkTextBuffer.PasteDoneSignal) handler).onPasteDone((TextBuffer) objectFor(source), (Clipboard) objectFor(clipboard));
    }

    interface RemoveTagSignal extends Signal
    {
        void onRemoveTag(TextBuffer source, TextTag tag, TextIter start, TextIter end);
    }

    static final void connect(TextBuffer self, GtkTextBuffer.RemoveTagSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextBuffer.class, "remove-tag", after);
    }

    protected static final void receiveRemoveTag(Signal handler, long source, long tag, long start, long end) {
        ((GtkTextBuffer.RemoveTagSignal) handler).onRemoveTag((TextBuffer) objectFor(source), (TextTag) objectFor(tag), (TextIter) boxedFor(TextIter.class, start), (TextIter) boxedFor(TextIter.class, end));
    }
}

