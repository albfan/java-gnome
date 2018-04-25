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
package org.gnome.sourceview;

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
import org.gnome.gtk.TextIter;
import org.gnome.gtk.TextMark;
import org.gnome.gtk.TextTag;
import org.gnome.gtk.TextTagTable;
import org.gnome.sourceview.Language;
import org.gnome.sourceview.Mark;
import org.gnome.sourceview.Plumbing;
import org.gnome.sourceview.SourceBuffer;
import org.gnome.sourceview.StyleScheme;

final class GtkSourceBuffer extends Plumbing
{
    private GtkSourceBuffer() {}

    static final long createSourceBuffer(TextTagTable table) {
        long result;

        synchronized (lock) {
            result = gtk_source_buffer_new(pointerOf(table));

            return result;
        }
    }

    private static native final long gtk_source_buffer_new(long table);

    static final long createSourceBufferWithLanguage(Language language) {
        long result;

        if (language == null) {
            throw new IllegalArgumentException("language can't be null");
        }

        synchronized (lock) {
            result = gtk_source_buffer_new_with_language(pointerOf(language));

            return result;
        }
    }

    private static native final long gtk_source_buffer_new_with_language(long language);

    static final boolean backwardIterToSourceMark(SourceBuffer self, TextIter iter, String category) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            result = gtk_source_buffer_backward_iter_to_source_mark(pointerOf(self), pointerOf(iter), category);

            return result;
        }
    }

    private static native final boolean gtk_source_buffer_backward_iter_to_source_mark(long self, long iter, String category);

    static final void beginNotUndoableAction(SourceBuffer self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_buffer_begin_not_undoable_action(pointerOf(self));
        }
    }

    private static native final void gtk_source_buffer_begin_not_undoable_action(long self);

    static final boolean canRedo(SourceBuffer self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_buffer_can_redo(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_source_buffer_can_redo(long self);

    static final boolean canUndo(SourceBuffer self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_buffer_can_undo(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_source_buffer_can_undo(long self);

    @SuppressWarnings("unused")
    static final void changeCase(SourceBuffer self, FIXME caseType, TextIter start, TextIter end) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkSourceChangeCaseType");
    }

    static final Mark createSourceMark(SourceBuffer self, String name, String category, org.gnome.gtk.TextIter where) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (category == null) {
            throw new IllegalArgumentException("category can't be null");
        }

        if (where == null) {
            throw new IllegalArgumentException("where can't be null");
        }

        synchronized (lock) {
            result = gtk_source_buffer_create_source_mark(pointerOf(self), name, category, pointerOf(where));

            return (Mark) objectFor(result);
        }
    }

    private static native final long gtk_source_buffer_create_source_mark(long self, String name, String category, long where);

    static final TextTag createSourceTag(SourceBuffer self, String tagName, String firstPropertyName) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_buffer_create_source_tag(pointerOf(self), tagName, firstPropertyName);

            return (TextTag) objectFor(result);
        }
    }

    private static native final long gtk_source_buffer_create_source_tag(long self, String tagName, String firstPropertyName);

    static final void endNotUndoableAction(SourceBuffer self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_buffer_end_not_undoable_action(pointerOf(self));
        }
    }

    private static native final void gtk_source_buffer_end_not_undoable_action(long self);

    static final void ensureHighlight(SourceBuffer self, org.gnome.gtk.TextIter start, org.gnome.gtk.TextIter end) {
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
            gtk_source_buffer_ensure_highlight(pointerOf(self), pointerOf(start), pointerOf(end));
        }
    }

    private static native final void gtk_source_buffer_ensure_highlight(long self, long start, long end);

    static final boolean forwardIterToSourceMark(SourceBuffer self, TextIter iter, String category) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            result = gtk_source_buffer_forward_iter_to_source_mark(pointerOf(self), pointerOf(iter), category);

            return result;
        }
    }

    private static native final boolean gtk_source_buffer_forward_iter_to_source_mark(long self, long iter, String category);

    static final String[] getContextClassesAtIter(SourceBuffer self, org.gnome.gtk.TextIter iter) {
        String[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            result = gtk_source_buffer_get_context_classes_at_iter(pointerOf(self), pointerOf(iter));

            return result;
        }
    }

    private static native final String[] gtk_source_buffer_get_context_classes_at_iter(long self, long iter);

    static final boolean getHighlightMatchingBrackets(SourceBuffer self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_buffer_get_highlight_matching_brackets(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_source_buffer_get_highlight_matching_brackets(long self);

    static final boolean getHighlightSyntax(SourceBuffer self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_buffer_get_highlight_syntax(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_source_buffer_get_highlight_syntax(long self);

    static final boolean getImplicitTrailingNewline(SourceBuffer self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_buffer_get_implicit_trailing_newline(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_source_buffer_get_implicit_trailing_newline(long self);

    static final Language getLanguage(SourceBuffer self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_buffer_get_language(pointerOf(self));

            return (Language) objectFor(result);
        }
    }

    private static native final long gtk_source_buffer_get_language(long self);

    static final int getMaxUndoLevels(SourceBuffer self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_buffer_get_max_undo_levels(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_source_buffer_get_max_undo_levels(long self);

    static final Mark[] getSourceMarksAtIter(SourceBuffer self, TextIter iter, String category) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            result = gtk_source_buffer_get_source_marks_at_iter(pointerOf(self), pointerOf(iter), category);

            return (Mark[]) objectArrayFor(result, new Mark[result.length]);
        }
    }

    private static native final long[] gtk_source_buffer_get_source_marks_at_iter(long self, long iter, String category);

    static final Mark[] getSourceMarksAtLine(SourceBuffer self, int line, String category) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_buffer_get_source_marks_at_line(pointerOf(self), line, category);

            return (Mark[]) objectArrayFor(result, new Mark[result.length]);
        }
    }

    private static native final long[] gtk_source_buffer_get_source_marks_at_line(long self, int line, String category);

    static final StyleScheme getStyleScheme(SourceBuffer self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_buffer_get_style_scheme(pointerOf(self));

            return (StyleScheme) objectFor(result);
        }
    }

    private static native final long gtk_source_buffer_get_style_scheme(long self);

    @SuppressWarnings("unused")
    static final FIXME getUndoManager(SourceBuffer self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkSourceUndoManager*");
    }

    static final boolean iterBackwardToContextClassToggle(SourceBuffer self, TextIter iter, String contextClass) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        if (contextClass == null) {
            throw new IllegalArgumentException("contextClass can't be null");
        }

        synchronized (lock) {
            result = gtk_source_buffer_iter_backward_to_context_class_toggle(pointerOf(self), pointerOf(iter), contextClass);

            return result;
        }
    }

    private static native final boolean gtk_source_buffer_iter_backward_to_context_class_toggle(long self, long iter, String contextClass);

    static final boolean iterForwardToContextClassToggle(SourceBuffer self, TextIter iter, String contextClass) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        if (contextClass == null) {
            throw new IllegalArgumentException("contextClass can't be null");
        }

        synchronized (lock) {
            result = gtk_source_buffer_iter_forward_to_context_class_toggle(pointerOf(self), pointerOf(iter), contextClass);

            return result;
        }
    }

    private static native final boolean gtk_source_buffer_iter_forward_to_context_class_toggle(long self, long iter, String contextClass);

    static final boolean iterHasContextClass(SourceBuffer self, org.gnome.gtk.TextIter iter, String contextClass) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        if (contextClass == null) {
            throw new IllegalArgumentException("contextClass can't be null");
        }

        synchronized (lock) {
            result = gtk_source_buffer_iter_has_context_class(pointerOf(self), pointerOf(iter), contextClass);

            return result;
        }
    }

    private static native final boolean gtk_source_buffer_iter_has_context_class(long self, long iter, String contextClass);

    static final void joinLines(SourceBuffer self, TextIter start, TextIter end) {
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
            gtk_source_buffer_join_lines(pointerOf(self), pointerOf(start), pointerOf(end));
        }
    }

    private static native final void gtk_source_buffer_join_lines(long self, long start, long end);

    static final void redo(SourceBuffer self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_buffer_redo(pointerOf(self));
        }
    }

    private static native final void gtk_source_buffer_redo(long self);

    static final void removeSourceMarks(SourceBuffer self, org.gnome.gtk.TextIter start, org.gnome.gtk.TextIter end, String category) {
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
            gtk_source_buffer_remove_source_marks(pointerOf(self), pointerOf(start), pointerOf(end), category);
        }
    }

    private static native final void gtk_source_buffer_remove_source_marks(long self, long start, long end, String category);

    static final void setHighlightMatchingBrackets(SourceBuffer self, boolean highlight) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_buffer_set_highlight_matching_brackets(pointerOf(self), highlight);
        }
    }

    private static native final void gtk_source_buffer_set_highlight_matching_brackets(long self, boolean highlight);

    static final void setHighlightSyntax(SourceBuffer self, boolean highlight) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_buffer_set_highlight_syntax(pointerOf(self), highlight);
        }
    }

    private static native final void gtk_source_buffer_set_highlight_syntax(long self, boolean highlight);

    static final void setImplicitTrailingNewline(SourceBuffer self, boolean implicitTrailingNewline) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_buffer_set_implicit_trailing_newline(pointerOf(self), implicitTrailingNewline);
        }
    }

    private static native final void gtk_source_buffer_set_implicit_trailing_newline(long self, boolean implicitTrailingNewline);

    static final void setLanguage(SourceBuffer self, Language language) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_buffer_set_language(pointerOf(self), pointerOf(language));
        }
    }

    private static native final void gtk_source_buffer_set_language(long self, long language);

    static final void setMaxUndoLevels(SourceBuffer self, int maxUndoLevels) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_buffer_set_max_undo_levels(pointerOf(self), maxUndoLevels);
        }
    }

    private static native final void gtk_source_buffer_set_max_undo_levels(long self, int maxUndoLevels);

    static final void setStyleScheme(SourceBuffer self, StyleScheme scheme) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_buffer_set_style_scheme(pointerOf(self), pointerOf(scheme));
        }
    }

    private static native final void gtk_source_buffer_set_style_scheme(long self, long scheme);

    @SuppressWarnings("unused")
    static final void setUndoManager(SourceBuffer self, FIXME manager) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkSourceUndoManager*");
    }

    @SuppressWarnings("unused")
    static final void sortLines(SourceBuffer self, TextIter start, TextIter end, FIXME flags, int column) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkSourceSortFlags");
    }

    static final void undo(SourceBuffer self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_buffer_undo(pointerOf(self));
        }
    }

    private static native final void gtk_source_buffer_undo(long self);

    interface BracketMatchedSignal extends Signal
    {
        void onBracketMatched(SourceBuffer source, TextIter iter, FIXME state);
    }

    static final void connect(SourceBuffer self, GtkSourceBuffer.BracketMatchedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkSourceBuffer.class, "bracket-matched", after);
    }

    protected static final void receiveBracketMatched(Signal handler, long source, long iter, java.lang.Object state) {
        ((GtkSourceBuffer.BracketMatchedSignal) handler).onBracketMatched((SourceBuffer) objectFor(source), (TextIter) boxedFor(TextIter.class, iter), (FIXME) state);
    }

    interface RedoSignal extends Signal
    {
        void onRedo(SourceBuffer source);
    }

    static final void connect(SourceBuffer self, GtkSourceBuffer.RedoSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkSourceBuffer.class, "redo", after);
    }

    protected static final void receiveRedo(Signal handler, long source) {
        ((GtkSourceBuffer.RedoSignal) handler).onRedo((SourceBuffer) objectFor(source));
    }

    interface UndoSignal extends Signal
    {
        void onUndo(SourceBuffer source);
    }

    static final void connect(SourceBuffer self, GtkSourceBuffer.UndoSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkSourceBuffer.class, "undo", after);
    }

    protected static final void receiveUndo(Signal handler, long source) {
        ((GtkSourceBuffer.UndoSignal) handler).onUndo((SourceBuffer) objectFor(source));
    }

    interface HighlightUpdatedSignal extends Signal
    {
        void onHighlightUpdated(SourceBuffer source, TextIter start, TextIter end);
    }

    static final void connect(SourceBuffer self, GtkSourceBuffer.HighlightUpdatedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkSourceBuffer.class, "highlight-updated", after);
    }

    protected static final void receiveHighlightUpdated(Signal handler, long source, long start, long end) {
        ((GtkSourceBuffer.HighlightUpdatedSignal) handler).onHighlightUpdated((SourceBuffer) objectFor(source), (TextIter) boxedFor(TextIter.class, start), (TextIter) boxedFor(TextIter.class, end));
    }

    interface SourceMarkUpdatedSignal extends Signal
    {
        void onSourceMarkUpdated(SourceBuffer source, TextMark mark);
    }

    static final void connect(SourceBuffer self, GtkSourceBuffer.SourceMarkUpdatedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkSourceBuffer.class, "source-mark-updated", after);
    }

    protected static final void receiveSourceMarkUpdated(Signal handler, long source, long mark) {
        ((GtkSourceBuffer.SourceMarkUpdatedSignal) handler).onSourceMarkUpdated((SourceBuffer) objectFor(source), (TextMark) objectFor(mark));
    }
}

