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
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.TextAttributes;
import org.gnome.gtk.TextBuffer;
import org.gnome.gtk.TextChildAnchor;
import org.gnome.gtk.TextIter;
import org.gnome.gtk.TextMark;
import org.gnome.gtk.TextSearchFlags;
import org.gnome.gtk.TextTag;
import org.gnome.pango.Language;

final class GtkTextIter extends Plumbing
{
    private GtkTextIter() {}

    @SuppressWarnings("unused")
    static final FIXME getDummy1(TextIter self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("gpointer");
    }

    @SuppressWarnings("unused")
    static final FIXME getDummy2(TextIter self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("gpointer");
    }

    static final int getDummy3(TextIter self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_get_dummy3(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_iter_get_dummy3(long self);

    static final int getDummy4(TextIter self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_get_dummy4(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_iter_get_dummy4(long self);

    static final int getDummy5(TextIter self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_get_dummy5(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_iter_get_dummy5(long self);

    static final int getDummy6(TextIter self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_get_dummy6(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_iter_get_dummy6(long self);

    static final int getDummy7(TextIter self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_get_dummy7(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_iter_get_dummy7(long self);

    static final int getDummy8(TextIter self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_get_dummy8(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_iter_get_dummy8(long self);

    @SuppressWarnings("unused")
    static final FIXME getDummy9(TextIter self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("gpointer");
    }

    @SuppressWarnings("unused")
    static final FIXME getDummy10(TextIter self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("gpointer");
    }

    static final int getDummy11(TextIter self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_get_dummy11(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_iter_get_dummy11(long self);

    static final int getDummy12(TextIter self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_get_dummy12(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_iter_get_dummy12(long self);

    static final int getDummy13(TextIter self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_get_dummy13(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_iter_get_dummy13(long self);

    @SuppressWarnings("unused")
    static final FIXME getDummy14(TextIter self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("gpointer");
    }

    static final void assign(TextIter self, org.gnome.gtk.TextIter other) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (other == null) {
            throw new IllegalArgumentException("other can't be null");
        }

        synchronized (lock) {
            gtk_text_iter_assign(pointerOf(self), pointerOf(other));
        }
    }

    private static native final void gtk_text_iter_assign(long self, long other);

    static final boolean backwardChar(TextIter self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_backward_char(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_backward_char(long self);

    static final boolean backwardChars(TextIter self, int count) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_backward_chars(pointerOf(self), count);

            return result;
        }
    }

    private static native final boolean gtk_text_iter_backward_chars(long self, int count);

    static final boolean backwardCursorPosition(TextIter self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_backward_cursor_position(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_backward_cursor_position(long self);

    static final boolean backwardCursorPositions(TextIter self, int count) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_backward_cursor_positions(pointerOf(self), count);

            return result;
        }
    }

    private static native final boolean gtk_text_iter_backward_cursor_positions(long self, int count);

    @SuppressWarnings("unused")
    static final boolean backwardFindChar(TextIter self, FIXME pred, FIXME userData, org.gnome.gtk.TextIter limit) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTextCharPredicate");
    }

    static final boolean backwardLine(TextIter self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_backward_line(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_backward_line(long self);

    static final boolean backwardLines(TextIter self, int count) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_backward_lines(pointerOf(self), count);

            return result;
        }
    }

    private static native final boolean gtk_text_iter_backward_lines(long self, int count);

    static final boolean backwardSearch(TextIter self, String str, TextSearchFlags flags, TextIter matchStart, TextIter matchEnd, org.gnome.gtk.TextIter limit) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (str == null) {
            throw new IllegalArgumentException("str can't be null");
        }

        if (flags == null) {
            throw new IllegalArgumentException("flags can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_backward_search(pointerOf(self), str, numOf(flags), pointerOf(matchStart), pointerOf(matchEnd), pointerOf(limit));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_backward_search(long self, String str, int flags, long matchStart, long matchEnd, long limit);

    static final boolean backwardSentenceStart(TextIter self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_backward_sentence_start(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_backward_sentence_start(long self);

    static final boolean backwardSentenceStarts(TextIter self, int count) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_backward_sentence_starts(pointerOf(self), count);

            return result;
        }
    }

    private static native final boolean gtk_text_iter_backward_sentence_starts(long self, int count);

    static final boolean backwardToTagToggle(TextIter self, TextTag tag) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_backward_to_tag_toggle(pointerOf(self), pointerOf(tag));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_backward_to_tag_toggle(long self, long tag);

    static final boolean backwardVisibleCursorPosition(TextIter self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_backward_visible_cursor_position(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_backward_visible_cursor_position(long self);

    static final boolean backwardVisibleCursorPositions(TextIter self, int count) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_backward_visible_cursor_positions(pointerOf(self), count);

            return result;
        }
    }

    private static native final boolean gtk_text_iter_backward_visible_cursor_positions(long self, int count);

    static final boolean backwardVisibleLine(TextIter self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_backward_visible_line(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_backward_visible_line(long self);

    static final boolean backwardVisibleLines(TextIter self, int count) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_backward_visible_lines(pointerOf(self), count);

            return result;
        }
    }

    private static native final boolean gtk_text_iter_backward_visible_lines(long self, int count);

    static final boolean backwardVisibleWordStart(TextIter self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_backward_visible_word_start(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_backward_visible_word_start(long self);

    static final boolean backwardVisibleWordStarts(TextIter self, int count) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_backward_visible_word_starts(pointerOf(self), count);

            return result;
        }
    }

    private static native final boolean gtk_text_iter_backward_visible_word_starts(long self, int count);

    static final boolean backwardWordStart(TextIter self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_backward_word_start(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_backward_word_start(long self);

    static final boolean backwardWordStarts(TextIter self, int count) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_backward_word_starts(pointerOf(self), count);

            return result;
        }
    }

    private static native final boolean gtk_text_iter_backward_word_starts(long self, int count);

    static final boolean beginsTag(TextIter self, TextTag tag) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_begins_tag(pointerOf(self), pointerOf(tag));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_begins_tag(long self, long tag);

    static final boolean canInsert(TextIter self, boolean defaultEditability) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_can_insert(pointerOf(self), defaultEditability);

            return result;
        }
    }

    private static native final boolean gtk_text_iter_can_insert(long self, boolean defaultEditability);

    static final int compare(TextIter self, org.gnome.gtk.TextIter rhs) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (rhs == null) {
            throw new IllegalArgumentException("rhs can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_compare(pointerOf(self), pointerOf(rhs));

            return result;
        }
    }

    private static native final int gtk_text_iter_compare(long self, long rhs);

    static final TextIter copy(TextIter self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_copy(pointerOf(self));

            return (TextIter) boxedFor(TextIter.class, result);
        }
    }

    private static native final long gtk_text_iter_copy(long self);

    static final boolean editable(TextIter self, boolean defaultSetting) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_editable(pointerOf(self), defaultSetting);

            return result;
        }
    }

    private static native final boolean gtk_text_iter_editable(long self, boolean defaultSetting);

    static final boolean endsLine(TextIter self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_ends_line(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_ends_line(long self);

    static final boolean endsSentence(TextIter self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_ends_sentence(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_ends_sentence(long self);

    static final boolean endsTag(TextIter self, TextTag tag) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_ends_tag(pointerOf(self), pointerOf(tag));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_ends_tag(long self, long tag);

    static final boolean endsWord(TextIter self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_ends_word(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_ends_word(long self);

    static final boolean equal(TextIter self, org.gnome.gtk.TextIter rhs) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (rhs == null) {
            throw new IllegalArgumentException("rhs can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_equal(pointerOf(self), pointerOf(rhs));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_equal(long self, long rhs);

    static final boolean forwardChar(TextIter self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_forward_char(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_forward_char(long self);

    static final boolean forwardChars(TextIter self, int count) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_forward_chars(pointerOf(self), count);

            return result;
        }
    }

    private static native final boolean gtk_text_iter_forward_chars(long self, int count);

    static final boolean forwardCursorPosition(TextIter self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_forward_cursor_position(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_forward_cursor_position(long self);

    static final boolean forwardCursorPositions(TextIter self, int count) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_forward_cursor_positions(pointerOf(self), count);

            return result;
        }
    }

    private static native final boolean gtk_text_iter_forward_cursor_positions(long self, int count);

    @SuppressWarnings("unused")
    static final boolean forwardFindChar(TextIter self, FIXME pred, FIXME userData, org.gnome.gtk.TextIter limit) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTextCharPredicate");
    }

    static final boolean forwardLine(TextIter self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_forward_line(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_forward_line(long self);

    static final boolean forwardLines(TextIter self, int count) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_forward_lines(pointerOf(self), count);

            return result;
        }
    }

    private static native final boolean gtk_text_iter_forward_lines(long self, int count);

    static final boolean forwardSearch(TextIter self, String str, TextSearchFlags flags, TextIter matchStart, TextIter matchEnd, org.gnome.gtk.TextIter limit) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (str == null) {
            throw new IllegalArgumentException("str can't be null");
        }

        if (flags == null) {
            throw new IllegalArgumentException("flags can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_forward_search(pointerOf(self), str, numOf(flags), pointerOf(matchStart), pointerOf(matchEnd), pointerOf(limit));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_forward_search(long self, String str, int flags, long matchStart, long matchEnd, long limit);

    static final boolean forwardSentenceEnd(TextIter self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_forward_sentence_end(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_forward_sentence_end(long self);

    static final boolean forwardSentenceEnds(TextIter self, int count) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_forward_sentence_ends(pointerOf(self), count);

            return result;
        }
    }

    private static native final boolean gtk_text_iter_forward_sentence_ends(long self, int count);

    static final void forwardToEnd(TextIter self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_iter_forward_to_end(pointerOf(self));
        }
    }

    private static native final void gtk_text_iter_forward_to_end(long self);

    static final boolean forwardToLineEnd(TextIter self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_forward_to_line_end(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_forward_to_line_end(long self);

    static final boolean forwardToTagToggle(TextIter self, TextTag tag) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_forward_to_tag_toggle(pointerOf(self), pointerOf(tag));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_forward_to_tag_toggle(long self, long tag);

    static final boolean forwardVisibleCursorPosition(TextIter self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_forward_visible_cursor_position(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_forward_visible_cursor_position(long self);

    static final boolean forwardVisibleCursorPositions(TextIter self, int count) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_forward_visible_cursor_positions(pointerOf(self), count);

            return result;
        }
    }

    private static native final boolean gtk_text_iter_forward_visible_cursor_positions(long self, int count);

    static final boolean forwardVisibleLine(TextIter self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_forward_visible_line(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_forward_visible_line(long self);

    static final boolean forwardVisibleLines(TextIter self, int count) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_forward_visible_lines(pointerOf(self), count);

            return result;
        }
    }

    private static native final boolean gtk_text_iter_forward_visible_lines(long self, int count);

    static final boolean forwardVisibleWordEnd(TextIter self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_forward_visible_word_end(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_forward_visible_word_end(long self);

    static final boolean forwardVisibleWordEnds(TextIter self, int count) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_forward_visible_word_ends(pointerOf(self), count);

            return result;
        }
    }

    private static native final boolean gtk_text_iter_forward_visible_word_ends(long self, int count);

    static final boolean forwardWordEnd(TextIter self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_forward_word_end(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_forward_word_end(long self);

    static final boolean forwardWordEnds(TextIter self, int count) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_forward_word_ends(pointerOf(self), count);

            return result;
        }
    }

    private static native final boolean gtk_text_iter_forward_word_ends(long self, int count);

    static final void free(TextIter self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_iter_free(pointerOf(self));
        }
    }

    private static native final void gtk_text_iter_free(long self);

    static final boolean getAttributes(TextIter self, TextAttributes values) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_get_attributes(pointerOf(self), pointerOf(values));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_get_attributes(long self, long values);

    static final TextBuffer getBuffer(TextIter self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_get_buffer(pointerOf(self));

            return (TextBuffer) objectFor(result);
        }
    }

    private static native final long gtk_text_iter_get_buffer(long self);

    static final int getBytesInLine(TextIter self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_get_bytes_in_line(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_iter_get_bytes_in_line(long self);

    static final int getChar(TextIter self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_get_char(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_iter_get_char(long self);

    static final int getCharsInLine(TextIter self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_get_chars_in_line(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_iter_get_chars_in_line(long self);

    static final TextChildAnchor getChildAnchor(TextIter self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_get_child_anchor(pointerOf(self));

            return (TextChildAnchor) objectFor(result);
        }
    }

    private static native final long gtk_text_iter_get_child_anchor(long self);

    static final Language getLanguage(TextIter self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_get_language(pointerOf(self));

            return (Language) boxedFor(Language.class, result);
        }
    }

    private static native final long gtk_text_iter_get_language(long self);

    static final int getLine(TextIter self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_get_line(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_iter_get_line(long self);

    static final int getLineIndex(TextIter self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_get_line_index(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_iter_get_line_index(long self);

    static final int getLineOffset(TextIter self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_get_line_offset(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_iter_get_line_offset(long self);

    static final TextMark[] getMarks(TextIter self) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_get_marks(pointerOf(self));

            return (TextMark[]) objectArrayFor(result, new TextMark[result.length]);
        }
    }

    private static native final long[] gtk_text_iter_get_marks(long self);

    static final int getOffset(TextIter self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_get_offset(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_iter_get_offset(long self);

    static final Pixbuf getPixbuf(TextIter self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_get_pixbuf(pointerOf(self));

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long gtk_text_iter_get_pixbuf(long self);

    static final String getSlice(TextIter self, org.gnome.gtk.TextIter end) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (end == null) {
            throw new IllegalArgumentException("end can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_get_slice(pointerOf(self), pointerOf(end));

            return result;
        }
    }

    private static native final String gtk_text_iter_get_slice(long self, long end);

    static final TextTag[] getTags(TextIter self) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_get_tags(pointerOf(self));

            return (TextTag[]) objectArrayFor(result, new TextTag[result.length]);
        }
    }

    private static native final long[] gtk_text_iter_get_tags(long self);

    static final String getText(TextIter self, org.gnome.gtk.TextIter end) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (end == null) {
            throw new IllegalArgumentException("end can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_get_text(pointerOf(self), pointerOf(end));

            return result;
        }
    }

    private static native final String gtk_text_iter_get_text(long self, long end);

    static final TextTag[] getToggledTags(TextIter self, boolean toggledOn) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_get_toggled_tags(pointerOf(self), toggledOn);

            return (TextTag[]) objectArrayFor(result, new TextTag[result.length]);
        }
    }

    private static native final long[] gtk_text_iter_get_toggled_tags(long self, boolean toggledOn);

    static final int getVisibleLineIndex(TextIter self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_get_visible_line_index(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_iter_get_visible_line_index(long self);

    static final int getVisibleLineOffset(TextIter self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_get_visible_line_offset(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_iter_get_visible_line_offset(long self);

    static final String getVisibleSlice(TextIter self, org.gnome.gtk.TextIter end) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (end == null) {
            throw new IllegalArgumentException("end can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_get_visible_slice(pointerOf(self), pointerOf(end));

            return result;
        }
    }

    private static native final String gtk_text_iter_get_visible_slice(long self, long end);

    static final String getVisibleText(TextIter self, org.gnome.gtk.TextIter end) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (end == null) {
            throw new IllegalArgumentException("end can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_get_visible_text(pointerOf(self), pointerOf(end));

            return result;
        }
    }

    private static native final String gtk_text_iter_get_visible_text(long self, long end);

    static final boolean hasTag(TextIter self, TextTag tag) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (tag == null) {
            throw new IllegalArgumentException("tag can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_has_tag(pointerOf(self), pointerOf(tag));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_has_tag(long self, long tag);

    static final boolean inRange(TextIter self, org.gnome.gtk.TextIter start, org.gnome.gtk.TextIter end) {
        boolean result;

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
            result = gtk_text_iter_in_range(pointerOf(self), pointerOf(start), pointerOf(end));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_in_range(long self, long start, long end);

    static final boolean insideSentence(TextIter self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_inside_sentence(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_inside_sentence(long self);

    static final boolean insideWord(TextIter self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_inside_word(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_inside_word(long self);

    static final boolean isCursorPosition(TextIter self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_is_cursor_position(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_is_cursor_position(long self);

    static final boolean isEnd(TextIter self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_is_end(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_is_end(long self);

    static final boolean isStart(TextIter self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_is_start(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_is_start(long self);

    static final void order(TextIter self, TextIter second) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (second == null) {
            throw new IllegalArgumentException("second can't be null");
        }

        synchronized (lock) {
            gtk_text_iter_order(pointerOf(self), pointerOf(second));
        }
    }

    private static native final void gtk_text_iter_order(long self, long second);

    static final void setLine(TextIter self, int lineNumber) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_iter_set_line(pointerOf(self), lineNumber);
        }
    }

    private static native final void gtk_text_iter_set_line(long self, int lineNumber);

    static final void setLineIndex(TextIter self, int byteOnLine) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_iter_set_line_index(pointerOf(self), byteOnLine);
        }
    }

    private static native final void gtk_text_iter_set_line_index(long self, int byteOnLine);

    static final void setLineOffset(TextIter self, int charOnLine) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_iter_set_line_offset(pointerOf(self), charOnLine);
        }
    }

    private static native final void gtk_text_iter_set_line_offset(long self, int charOnLine);

    static final void setOffset(TextIter self, int charOffset) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_iter_set_offset(pointerOf(self), charOffset);
        }
    }

    private static native final void gtk_text_iter_set_offset(long self, int charOffset);

    static final void setVisibleLineIndex(TextIter self, int byteOnLine) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_iter_set_visible_line_index(pointerOf(self), byteOnLine);
        }
    }

    private static native final void gtk_text_iter_set_visible_line_index(long self, int byteOnLine);

    static final void setVisibleLineOffset(TextIter self, int charOnLine) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_iter_set_visible_line_offset(pointerOf(self), charOnLine);
        }
    }

    private static native final void gtk_text_iter_set_visible_line_offset(long self, int charOnLine);

    static final boolean startsLine(TextIter self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_starts_line(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_starts_line(long self);

    static final boolean startsSentence(TextIter self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_starts_sentence(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_starts_sentence(long self);

    static final boolean startsTag(TextIter self, TextTag tag) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_starts_tag(pointerOf(self), pointerOf(tag));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_starts_tag(long self, long tag);

    static final boolean startsWord(TextIter self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_starts_word(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_starts_word(long self);

    static final boolean togglesTag(TextIter self, TextTag tag) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_iter_toggles_tag(pointerOf(self), pointerOf(tag));

            return result;
        }
    }

    private static native final boolean gtk_text_iter_toggles_tag(long self, long tag);
}

