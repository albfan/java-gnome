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
import org.gnome.gdk.Event;
import org.gnome.glib.Signal;
import org.gnome.gtk.TextIter;
import org.gnome.gtk.TextWindowType;
import org.gnome.sourceview.DrawSpacesFlags;
import org.gnome.sourceview.Plumbing;
import org.gnome.sourceview.SmartHomeEndType;
import org.gnome.sourceview.SourceBuffer;
import org.gnome.sourceview.SourceView;

final class GtkSourceView extends Plumbing
{
    private GtkSourceView() {}

    static final long createSourceView() {
        long result;

        synchronized (lock) {
            result = gtk_source_view_new();

            return result;
        }
    }

    private static native final long gtk_source_view_new();

    static final long createSourceViewWithBuffer(SourceBuffer buffer) {
        long result;

        if (buffer == null) {
            throw new IllegalArgumentException("buffer can't be null");
        }

        synchronized (lock) {
            result = gtk_source_view_new_with_buffer(pointerOf(buffer));

            return result;
        }
    }

    private static native final long gtk_source_view_new_with_buffer(long buffer);

    static final boolean getAutoIndent(SourceView self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_view_get_auto_indent(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_source_view_get_auto_indent(long self);

    @SuppressWarnings("unused")
    static final FIXME getBackgroundPattern(SourceView self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkSourceBackgroundPatternType");
    }

    @SuppressWarnings("unused")
    static final FIXME getCompletion(SourceView self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkSourceCompletion*");
    }

    static final DrawSpacesFlags getDrawSpaces(SourceView self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_view_get_draw_spaces(pointerOf(self));

            return (DrawSpacesFlags) flagFor(DrawSpacesFlags.class, result);
        }
    }

    private static native final int gtk_source_view_get_draw_spaces(long self);

    @SuppressWarnings("unused")
    static final FIXME getGutter(SourceView self, TextWindowType windowType) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkSourceGutter*");
    }

    static final boolean getHighlightCurrentLine(SourceView self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_view_get_highlight_current_line(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_source_view_get_highlight_current_line(long self);

    static final boolean getIndentOnTab(SourceView self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_view_get_indent_on_tab(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_source_view_get_indent_on_tab(long self);

    static final int getIndentWidth(SourceView self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_view_get_indent_width(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_source_view_get_indent_width(long self);

    static final boolean getInsertSpacesInsteadOfTabs(SourceView self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_view_get_insert_spaces_instead_of_tabs(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_source_view_get_insert_spaces_instead_of_tabs(long self);

    @SuppressWarnings("unused")
    static final FIXME getMarkAttributes(SourceView self, String category, int[] priority) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkSourceMarkAttributes*");
    }

    static final int getRightMarginPosition(SourceView self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_view_get_right_margin_position(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_source_view_get_right_margin_position(long self);

    static final boolean getShowLineMarks(SourceView self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_view_get_show_line_marks(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_source_view_get_show_line_marks(long self);

    static final boolean getShowLineNumbers(SourceView self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_view_get_show_line_numbers(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_source_view_get_show_line_numbers(long self);

    static final boolean getShowRightMargin(SourceView self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_view_get_show_right_margin(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_source_view_get_show_right_margin(long self);

    static final boolean getSmartBackspace(SourceView self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_view_get_smart_backspace(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_source_view_get_smart_backspace(long self);

    static final SmartHomeEndType getSmartHomeEnd(SourceView self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_view_get_smart_home_end(pointerOf(self));

            return (SmartHomeEndType) enumFor(SmartHomeEndType.class, result);
        }
    }

    private static native final int gtk_source_view_get_smart_home_end(long self);

    @SuppressWarnings("unused")
    static final FIXME getSpaceDrawer(SourceView self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkSourceSpaceDrawer*");
    }

    static final int getTabWidth(SourceView self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_source_view_get_tab_width(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_source_view_get_tab_width(long self);

    static final int getVisualColumn(SourceView self, TextIter iter) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            result = gtk_source_view_get_visual_column(pointerOf(self), pointerOf(iter));

            return result;
        }
    }

    private static native final int gtk_source_view_get_visual_column(long self, long iter);

    static final void indentLines(SourceView self, org.gnome.gtk.TextIter start, org.gnome.gtk.TextIter end) {
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
            gtk_source_view_indent_lines(pointerOf(self), pointerOf(start), pointerOf(end));
        }
    }

    private static native final void gtk_source_view_indent_lines(long self, long start, long end);

    static final void setAutoIndent(SourceView self, boolean enable) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_view_set_auto_indent(pointerOf(self), enable);
        }
    }

    private static native final void gtk_source_view_set_auto_indent(long self, boolean enable);

    @SuppressWarnings("unused")
    static final void setBackgroundPattern(SourceView self, FIXME backgroundPattern) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkSourceBackgroundPatternType");
    }

    static final void setDrawSpaces(SourceView self, DrawSpacesFlags flags) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (flags == null) {
            throw new IllegalArgumentException("flags can't be null");
        }

        synchronized (lock) {
            gtk_source_view_set_draw_spaces(pointerOf(self), numOf(flags));
        }
    }

    private static native final void gtk_source_view_set_draw_spaces(long self, int flags);

    static final void setHighlightCurrentLine(SourceView self, boolean highlight) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_view_set_highlight_current_line(pointerOf(self), highlight);
        }
    }

    private static native final void gtk_source_view_set_highlight_current_line(long self, boolean highlight);

    static final void setIndentOnTab(SourceView self, boolean enable) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_view_set_indent_on_tab(pointerOf(self), enable);
        }
    }

    private static native final void gtk_source_view_set_indent_on_tab(long self, boolean enable);

    static final void setIndentWidth(SourceView self, int width) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_view_set_indent_width(pointerOf(self), width);
        }
    }

    private static native final void gtk_source_view_set_indent_width(long self, int width);

    static final void setInsertSpacesInsteadOfTabs(SourceView self, boolean enable) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_view_set_insert_spaces_instead_of_tabs(pointerOf(self), enable);
        }
    }

    private static native final void gtk_source_view_set_insert_spaces_instead_of_tabs(long self, boolean enable);

    @SuppressWarnings("unused")
    static final void setMarkAttributes(SourceView self, String category, FIXME attributes, int priority) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkSourceMarkAttributes*");
    }

    static final void setRightMarginPosition(SourceView self, int pos) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_view_set_right_margin_position(pointerOf(self), pos);
        }
    }

    private static native final void gtk_source_view_set_right_margin_position(long self, int pos);

    static final void setShowLineMarks(SourceView self, boolean show) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_view_set_show_line_marks(pointerOf(self), show);
        }
    }

    private static native final void gtk_source_view_set_show_line_marks(long self, boolean show);

    static final void setShowLineNumbers(SourceView self, boolean show) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_view_set_show_line_numbers(pointerOf(self), show);
        }
    }

    private static native final void gtk_source_view_set_show_line_numbers(long self, boolean show);

    static final void setShowRightMargin(SourceView self, boolean show) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_view_set_show_right_margin(pointerOf(self), show);
        }
    }

    private static native final void gtk_source_view_set_show_right_margin(long self, boolean show);

    static final void setSmartBackspace(SourceView self, boolean smartBackspace) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_view_set_smart_backspace(pointerOf(self), smartBackspace);
        }
    }

    private static native final void gtk_source_view_set_smart_backspace(long self, boolean smartBackspace);

    static final void setSmartHomeEnd(SourceView self, SmartHomeEndType smartHomeEnd) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (smartHomeEnd == null) {
            throw new IllegalArgumentException("smartHomeEnd can't be null");
        }

        synchronized (lock) {
            gtk_source_view_set_smart_home_end(pointerOf(self), numOf(smartHomeEnd));
        }
    }

    private static native final void gtk_source_view_set_smart_home_end(long self, int smartHomeEnd);

    static final void setTabWidth(SourceView self, int width) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_source_view_set_tab_width(pointerOf(self), width);
        }
    }

    private static native final void gtk_source_view_set_tab_width(long self, int width);

    static final void unindentLines(SourceView self, org.gnome.gtk.TextIter start, org.gnome.gtk.TextIter end) {
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
            gtk_source_view_unindent_lines(pointerOf(self), pointerOf(start), pointerOf(end));
        }
    }

    private static native final void gtk_source_view_unindent_lines(long self, long start, long end);

    interface LineMarkActivatedSignal extends Signal
    {
        void onLineMarkActivated(SourceView source, org.gnome.gtk.TextIter iter, Event event);
    }

    static final void connect(SourceView self, GtkSourceView.LineMarkActivatedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkSourceView.class, "line-mark-activated", after);
    }

    protected static final void receiveLineMarkActivated(Signal handler, long source, long iter, long event) {
        ((GtkSourceView.LineMarkActivatedSignal) handler).onLineMarkActivated((SourceView) objectFor(source), (org.gnome.gtk.TextIter) boxedFor(org.gnome.gtk.TextIter.class, iter), (Event) boxedFor(Event.class, event));
    }

    interface MoveLinesSignal extends Signal
    {
        void onMoveLines(SourceView source, boolean copy, int step);
    }

    static final void connect(SourceView self, GtkSourceView.MoveLinesSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkSourceView.class, "move-lines", after);
    }

    protected static final void receiveMoveLines(Signal handler, long source, boolean copy, int step) {
        ((GtkSourceView.MoveLinesSignal) handler).onMoveLines((SourceView) objectFor(source), copy, step);
    }

    interface MoveWordsSignal extends Signal
    {
        void onMoveWords(SourceView source, int step);
    }

    static final void connect(SourceView self, GtkSourceView.MoveWordsSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkSourceView.class, "move-words", after);
    }

    protected static final void receiveMoveWords(Signal handler, long source, int step) {
        ((GtkSourceView.MoveWordsSignal) handler).onMoveWords((SourceView) objectFor(source), step);
    }

    interface RedoSignal extends Signal
    {
        void onRedo(SourceView source);
    }

    static final void connect(SourceView self, GtkSourceView.RedoSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkSourceView.class, "redo", after);
    }

    protected static final void receiveRedo(Signal handler, long source) {
        ((GtkSourceView.RedoSignal) handler).onRedo((SourceView) objectFor(source));
    }

    interface ShowCompletionSignal extends Signal
    {
        void onShowCompletion(SourceView source);
    }

    static final void connect(SourceView self, GtkSourceView.ShowCompletionSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkSourceView.class, "show-completion", after);
    }

    protected static final void receiveShowCompletion(Signal handler, long source) {
        ((GtkSourceView.ShowCompletionSignal) handler).onShowCompletion((SourceView) objectFor(source));
    }

    interface UndoSignal extends Signal
    {
        void onUndo(SourceView source);
    }

    static final void connect(SourceView self, GtkSourceView.UndoSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkSourceView.class, "undo", after);
    }

    protected static final void receiveUndo(Signal handler, long source) {
        ((GtkSourceView.UndoSignal) handler).onUndo((SourceView) objectFor(source));
    }

    interface ChangeCaseSignal extends Signal
    {
        void onChangeCase(SourceView source, FIXME caseType);
    }

    static final void connect(SourceView self, GtkSourceView.ChangeCaseSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkSourceView.class, "change-case", after);
    }

    protected static final void receiveChangeCase(Signal handler, long source, java.lang.Object caseType) {
        ((GtkSourceView.ChangeCaseSignal) handler).onChangeCase((SourceView) objectFor(source), (FIXME) caseType);
    }

    interface ChangeNumberSignal extends Signal
    {
        void onChangeNumber(SourceView source, int count);
    }

    static final void connect(SourceView self, GtkSourceView.ChangeNumberSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkSourceView.class, "change-number", after);
    }

    protected static final void receiveChangeNumber(Signal handler, long source, int count) {
        ((GtkSourceView.ChangeNumberSignal) handler).onChangeNumber((SourceView) objectFor(source), count);
    }

    interface JoinLinesSignal extends Signal
    {
        void onJoinLines(SourceView source);
    }

    static final void connect(SourceView self, GtkSourceView.JoinLinesSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkSourceView.class, "join-lines", after);
    }

    protected static final void receiveJoinLines(Signal handler, long source) {
        ((GtkSourceView.JoinLinesSignal) handler).onJoinLines((SourceView) objectFor(source));
    }

    interface MoveToMatchingBracketSignal extends Signal
    {
        void onMoveToMatchingBracket(SourceView source, boolean extendSelection);
    }

    static final void connect(SourceView self, GtkSourceView.MoveToMatchingBracketSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkSourceView.class, "move-to-matching-bracket", after);
    }

    protected static final void receiveMoveToMatchingBracket(Signal handler, long source, boolean extendSelection) {
        ((GtkSourceView.MoveToMatchingBracketSignal) handler).onMoveToMatchingBracket((SourceView) objectFor(source), extendSelection);
    }

    interface SmartHomeEndSignal extends Signal
    {
        void onSmartHomeEnd(SourceView source, org.gnome.gtk.TextIter iter, int count);
    }

    static final void connect(SourceView self, GtkSourceView.SmartHomeEndSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkSourceView.class, "smart-home-end", after);
    }

    protected static final void receiveSmartHomeEnd(Signal handler, long source, long iter, int count) {
        ((GtkSourceView.SmartHomeEndSignal) handler).onSmartHomeEnd((SourceView) objectFor(source), (org.gnome.gtk.TextIter) boxedFor(org.gnome.gtk.TextIter.class, iter), count);
    }
}

