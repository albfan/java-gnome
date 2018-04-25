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
import org.freedesktop.cairo.Context;
import org.gnome.gdk.EventKey;
import org.gnome.gdk.Rectangle;
import org.gnome.gdk.Window;
import org.gnome.glib.Signal;
import org.gnome.gtk.Adjustment;
import org.gnome.gtk.DeleteType;
import org.gnome.gtk.Justification;
import org.gnome.gtk.MovementStep;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.ScrollStep;
import org.gnome.gtk.TextAttributes;
import org.gnome.gtk.TextBuffer;
import org.gnome.gtk.TextChildAnchor;
import org.gnome.gtk.TextIter;
import org.gnome.gtk.TextMark;
import org.gnome.gtk.TextView;
import org.gnome.gtk.TextWindowType;
import org.gnome.gtk.Widget;
import org.gnome.gtk.WrapMode;
import org.gnome.pango.TabArray;

final class GtkTextView extends Plumbing
{
    private GtkTextView() {}

    static final long createTextView() {
        long result;

        synchronized (lock) {
            result = gtk_text_view_new();

            return result;
        }
    }

    private static native final long gtk_text_view_new();

    static final long createTextViewWithBuffer(TextBuffer buffer) {
        long result;

        if (buffer == null) {
            throw new IllegalArgumentException("buffer can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_new_with_buffer(pointerOf(buffer));

            return result;
        }
    }

    private static native final long gtk_text_view_new_with_buffer(long buffer);

    static final void addChildAtAnchor(TextView self, Widget child, TextChildAnchor anchor) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        if (anchor == null) {
            throw new IllegalArgumentException("anchor can't be null");
        }

        synchronized (lock) {
            gtk_text_view_add_child_at_anchor(pointerOf(self), pointerOf(child), pointerOf(anchor));
        }
    }

    private static native final void gtk_text_view_add_child_at_anchor(long self, long child, long anchor);

    static final void addChildInWindow(TextView self, Widget child, TextWindowType whichWindow, int xpos, int ypos) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        if (whichWindow == null) {
            throw new IllegalArgumentException("whichWindow can't be null");
        }

        synchronized (lock) {
            gtk_text_view_add_child_in_window(pointerOf(self), pointerOf(child), numOf(whichWindow), xpos, ypos);
        }
    }

    private static native final void gtk_text_view_add_child_in_window(long self, long child, int whichWindow, int xpos, int ypos);

    static final boolean backwardDisplayLine(TextView self, TextIter iter) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_backward_display_line(pointerOf(self), pointerOf(iter));

            return result;
        }
    }

    private static native final boolean gtk_text_view_backward_display_line(long self, long iter);

    static final boolean backwardDisplayLineStart(TextView self, TextIter iter) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_backward_display_line_start(pointerOf(self), pointerOf(iter));

            return result;
        }
    }

    private static native final boolean gtk_text_view_backward_display_line_start(long self, long iter);

    static final void bufferToWindowCoords(TextView self, TextWindowType win, int bufferX, int bufferY, int[] windowX, int[] windowY) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (win == null) {
            throw new IllegalArgumentException("win can't be null");
        }

        synchronized (lock) {
            gtk_text_view_buffer_to_window_coords(pointerOf(self), numOf(win), bufferX, bufferY, windowX, windowY);
        }
    }

    private static native final void gtk_text_view_buffer_to_window_coords(long self, int win, int bufferX, int bufferY, int[] windowX, int[] windowY);

    static final boolean forwardDisplayLine(TextView self, TextIter iter) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_forward_display_line(pointerOf(self), pointerOf(iter));

            return result;
        }
    }

    private static native final boolean gtk_text_view_forward_display_line(long self, long iter);

    static final boolean forwardDisplayLineEnd(TextView self, TextIter iter) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_forward_display_line_end(pointerOf(self), pointerOf(iter));

            return result;
        }
    }

    private static native final boolean gtk_text_view_forward_display_line_end(long self, long iter);

    static final boolean getAcceptsTab(TextView self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_get_accepts_tab(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_view_get_accepts_tab(long self);

    static final int getBorderWindowSize(TextView self, TextWindowType type) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (type == null) {
            throw new IllegalArgumentException("type can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_get_border_window_size(pointerOf(self), numOf(type));

            return result;
        }
    }

    private static native final int gtk_text_view_get_border_window_size(long self, int type);

    static final int getBottomMargin(TextView self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_get_bottom_margin(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_view_get_bottom_margin(long self);

    static final TextBuffer getBuffer(TextView self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_get_buffer(pointerOf(self));

            return (TextBuffer) objectFor(result);
        }
    }

    private static native final long gtk_text_view_get_buffer(long self);

    static final void getCursorLocations(TextView self, org.gnome.gtk.TextIter iter, Rectangle strong, Rectangle weak) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_view_get_cursor_locations(pointerOf(self), pointerOf(iter), pointerOf(strong), pointerOf(weak));
        }
    }

    private static native final void gtk_text_view_get_cursor_locations(long self, long iter, long strong, long weak);

    static final boolean getCursorVisible(TextView self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_get_cursor_visible(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_view_get_cursor_visible(long self);

    static final TextAttributes getDefaultAttributes(TextView self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_get_default_attributes(pointerOf(self));

            return (TextAttributes) boxedFor(TextAttributes.class, result);
        }
    }

    private static native final long gtk_text_view_get_default_attributes(long self);

    static final boolean getEditable(TextView self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_get_editable(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_view_get_editable(long self);

    static final Adjustment getHadjustment(TextView self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_get_hadjustment(pointerOf(self));

            return (Adjustment) objectFor(result);
        }
    }

    private static native final long gtk_text_view_get_hadjustment(long self);

    static final int getIndent(TextView self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_get_indent(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_view_get_indent(long self);

    @SuppressWarnings("unused")
    static final FIXME getInputHints(TextView self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkInputHints");
    }

    @SuppressWarnings("unused")
    static final FIXME getInputPurpose(TextView self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkInputPurpose");
    }

    static final boolean getIterAtLocation(TextView self, TextIter iter, int x, int y) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_get_iter_at_location(pointerOf(self), pointerOf(iter), x, y);

            return result;
        }
    }

    private static native final boolean gtk_text_view_get_iter_at_location(long self, long iter, int x, int y);

    static final boolean getIterAtPosition(TextView self, TextIter iter, int[] trailing, int x, int y) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_get_iter_at_position(pointerOf(self), pointerOf(iter), trailing, x, y);

            return result;
        }
    }

    private static native final boolean gtk_text_view_get_iter_at_position(long self, long iter, int[] trailing, int x, int y);

    static final void getIterLocation(TextView self, org.gnome.gtk.TextIter iter, Rectangle location) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            gtk_text_view_get_iter_location(pointerOf(self), pointerOf(iter), pointerOf(location));
        }
    }

    private static native final void gtk_text_view_get_iter_location(long self, long iter, long location);

    static final Justification getJustification(TextView self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_get_justification(pointerOf(self));

            return (Justification) enumFor(Justification.class, result);
        }
    }

    private static native final int gtk_text_view_get_justification(long self);

    static final int getLeftMargin(TextView self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_get_left_margin(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_view_get_left_margin(long self);

    static final void getLineAtY(TextView self, TextIter targetIter, int y, int[] lineTop) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_view_get_line_at_y(pointerOf(self), pointerOf(targetIter), y, lineTop);
        }
    }

    private static native final void gtk_text_view_get_line_at_y(long self, long targetIter, int y, int[] lineTop);

    static final void getLineYrange(TextView self, org.gnome.gtk.TextIter iter, int[] y, int[] height) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            gtk_text_view_get_line_yrange(pointerOf(self), pointerOf(iter), y, height);
        }
    }

    private static native final void gtk_text_view_get_line_yrange(long self, long iter, int[] y, int[] height);

    static final boolean getMonospace(TextView self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_get_monospace(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_view_get_monospace(long self);

    static final boolean getOverwrite(TextView self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_get_overwrite(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_view_get_overwrite(long self);

    static final int getPixelsAboveLines(TextView self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_get_pixels_above_lines(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_view_get_pixels_above_lines(long self);

    static final int getPixelsBelowLines(TextView self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_get_pixels_below_lines(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_view_get_pixels_below_lines(long self);

    static final int getPixelsInsideWrap(TextView self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_get_pixels_inside_wrap(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_view_get_pixels_inside_wrap(long self);

    static final int getRightMargin(TextView self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_get_right_margin(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_view_get_right_margin(long self);

    static final TabArray getTabs(TextView self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_get_tabs(pointerOf(self));

            return (TabArray) boxedFor(TabArray.class, result);
        }
    }

    private static native final long gtk_text_view_get_tabs(long self);

    static final int getTopMargin(TextView self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_get_top_margin(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_view_get_top_margin(long self);

    static final Adjustment getVadjustment(TextView self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_get_vadjustment(pointerOf(self));

            return (Adjustment) objectFor(result);
        }
    }

    private static native final long gtk_text_view_get_vadjustment(long self);

    static final void getVisibleRect(TextView self, Rectangle visibleRect) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_view_get_visible_rect(pointerOf(self), pointerOf(visibleRect));
        }
    }

    private static native final void gtk_text_view_get_visible_rect(long self, long visibleRect);

    static final Window getWindow(TextView self, TextWindowType win) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (win == null) {
            throw new IllegalArgumentException("win can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_get_window(pointerOf(self), numOf(win));

            return (Window) objectFor(result);
        }
    }

    private static native final long gtk_text_view_get_window(long self, int win);

    static final TextWindowType getWindowType(TextView self, Window window) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (window == null) {
            throw new IllegalArgumentException("window can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_get_window_type(pointerOf(self), pointerOf(window));

            return (TextWindowType) enumFor(TextWindowType.class, result);
        }
    }

    private static native final int gtk_text_view_get_window_type(long self, long window);

    static final WrapMode getWrapMode(TextView self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_get_wrap_mode(pointerOf(self));

            return (WrapMode) enumFor(WrapMode.class, result);
        }
    }

    private static native final int gtk_text_view_get_wrap_mode(long self);

    static final boolean imContextFilterKeypress(TextView self, EventKey event) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (event == null) {
            throw new IllegalArgumentException("event can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_im_context_filter_keypress(pointerOf(self), pointerOf(event));

            return result;
        }
    }

    private static native final boolean gtk_text_view_im_context_filter_keypress(long self, long event);

    static final void moveChild(TextView self, Widget child, int xpos, int ypos) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (child == null) {
            throw new IllegalArgumentException("child can't be null");
        }

        synchronized (lock) {
            gtk_text_view_move_child(pointerOf(self), pointerOf(child), xpos, ypos);
        }
    }

    private static native final void gtk_text_view_move_child(long self, long child, int xpos, int ypos);

    static final boolean moveMarkOnscreen(TextView self, TextMark mark) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (mark == null) {
            throw new IllegalArgumentException("mark can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_move_mark_onscreen(pointerOf(self), pointerOf(mark));

            return result;
        }
    }

    private static native final boolean gtk_text_view_move_mark_onscreen(long self, long mark);

    static final boolean moveVisually(TextView self, TextIter iter, int count) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_move_visually(pointerOf(self), pointerOf(iter), count);

            return result;
        }
    }

    private static native final boolean gtk_text_view_move_visually(long self, long iter, int count);

    static final boolean placeCursorOnscreen(TextView self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_place_cursor_onscreen(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_text_view_place_cursor_onscreen(long self);

    static final void resetCursorBlink(TextView self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_view_reset_cursor_blink(pointerOf(self));
        }
    }

    private static native final void gtk_text_view_reset_cursor_blink(long self);

    static final void resetImContext(TextView self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_view_reset_im_context(pointerOf(self));
        }
    }

    private static native final void gtk_text_view_reset_im_context(long self);

    static final void scrollMarkOnscreen(TextView self, TextMark mark) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (mark == null) {
            throw new IllegalArgumentException("mark can't be null");
        }

        synchronized (lock) {
            gtk_text_view_scroll_mark_onscreen(pointerOf(self), pointerOf(mark));
        }
    }

    private static native final void gtk_text_view_scroll_mark_onscreen(long self, long mark);

    static final boolean scrollToIter(TextView self, TextIter iter, double withinMargin, boolean useAlign, double xalign, double yalign) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_scroll_to_iter(pointerOf(self), pointerOf(iter), withinMargin, useAlign, xalign, yalign);

            return result;
        }
    }

    private static native final boolean gtk_text_view_scroll_to_iter(long self, long iter, double withinMargin, boolean useAlign, double xalign, double yalign);

    static final void scrollToMark(TextView self, TextMark mark, double withinMargin, boolean useAlign, double xalign, double yalign) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (mark == null) {
            throw new IllegalArgumentException("mark can't be null");
        }

        synchronized (lock) {
            gtk_text_view_scroll_to_mark(pointerOf(self), pointerOf(mark), withinMargin, useAlign, xalign, yalign);
        }
    }

    private static native final void gtk_text_view_scroll_to_mark(long self, long mark, double withinMargin, boolean useAlign, double xalign, double yalign);

    static final void setAcceptsTab(TextView self, boolean acceptsTab) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_view_set_accepts_tab(pointerOf(self), acceptsTab);
        }
    }

    private static native final void gtk_text_view_set_accepts_tab(long self, boolean acceptsTab);

    static final void setBorderWindowSize(TextView self, TextWindowType type, int size) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (type == null) {
            throw new IllegalArgumentException("type can't be null");
        }

        synchronized (lock) {
            gtk_text_view_set_border_window_size(pointerOf(self), numOf(type), size);
        }
    }

    private static native final void gtk_text_view_set_border_window_size(long self, int type, int size);

    static final void setBottomMargin(TextView self, int bottomMargin) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_view_set_bottom_margin(pointerOf(self), bottomMargin);
        }
    }

    private static native final void gtk_text_view_set_bottom_margin(long self, int bottomMargin);

    static final void setBuffer(TextView self, TextBuffer buffer) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_view_set_buffer(pointerOf(self), pointerOf(buffer));
        }
    }

    private static native final void gtk_text_view_set_buffer(long self, long buffer);

    static final void setCursorVisible(TextView self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_view_set_cursor_visible(pointerOf(self), setting);
        }
    }

    private static native final void gtk_text_view_set_cursor_visible(long self, boolean setting);

    static final void setEditable(TextView self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_view_set_editable(pointerOf(self), setting);
        }
    }

    private static native final void gtk_text_view_set_editable(long self, boolean setting);

    static final void setIndent(TextView self, int indent) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_view_set_indent(pointerOf(self), indent);
        }
    }

    private static native final void gtk_text_view_set_indent(long self, int indent);

    @SuppressWarnings("unused")
    static final void setInputHints(TextView self, FIXME hints) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkInputHints");
    }

    @SuppressWarnings("unused")
    static final void setInputPurpose(TextView self, FIXME purpose) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkInputPurpose");
    }

    static final void setJustification(TextView self, Justification justification) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (justification == null) {
            throw new IllegalArgumentException("justification can't be null");
        }

        synchronized (lock) {
            gtk_text_view_set_justification(pointerOf(self), numOf(justification));
        }
    }

    private static native final void gtk_text_view_set_justification(long self, int justification);

    static final void setLeftMargin(TextView self, int leftMargin) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_view_set_left_margin(pointerOf(self), leftMargin);
        }
    }

    private static native final void gtk_text_view_set_left_margin(long self, int leftMargin);

    static final void setMonospace(TextView self, boolean monospace) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_view_set_monospace(pointerOf(self), monospace);
        }
    }

    private static native final void gtk_text_view_set_monospace(long self, boolean monospace);

    static final void setOverwrite(TextView self, boolean overwrite) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_view_set_overwrite(pointerOf(self), overwrite);
        }
    }

    private static native final void gtk_text_view_set_overwrite(long self, boolean overwrite);

    static final void setPixelsAboveLines(TextView self, int pixelsAboveLines) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_view_set_pixels_above_lines(pointerOf(self), pixelsAboveLines);
        }
    }

    private static native final void gtk_text_view_set_pixels_above_lines(long self, int pixelsAboveLines);

    static final void setPixelsBelowLines(TextView self, int pixelsBelowLines) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_view_set_pixels_below_lines(pointerOf(self), pixelsBelowLines);
        }
    }

    private static native final void gtk_text_view_set_pixels_below_lines(long self, int pixelsBelowLines);

    static final void setPixelsInsideWrap(TextView self, int pixelsInsideWrap) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_view_set_pixels_inside_wrap(pointerOf(self), pixelsInsideWrap);
        }
    }

    private static native final void gtk_text_view_set_pixels_inside_wrap(long self, int pixelsInsideWrap);

    static final void setRightMargin(TextView self, int rightMargin) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_view_set_right_margin(pointerOf(self), rightMargin);
        }
    }

    private static native final void gtk_text_view_set_right_margin(long self, int rightMargin);

    static final void setTabs(TextView self, TabArray tabs) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (tabs == null) {
            throw new IllegalArgumentException("tabs can't be null");
        }

        synchronized (lock) {
            gtk_text_view_set_tabs(pointerOf(self), pointerOf(tabs));
        }
    }

    private static native final void gtk_text_view_set_tabs(long self, long tabs);

    static final void setTopMargin(TextView self, int topMargin) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_view_set_top_margin(pointerOf(self), topMargin);
        }
    }

    private static native final void gtk_text_view_set_top_margin(long self, int topMargin);

    static final void setWrapMode(TextView self, WrapMode wrapMode) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (wrapMode == null) {
            throw new IllegalArgumentException("wrapMode can't be null");
        }

        synchronized (lock) {
            gtk_text_view_set_wrap_mode(pointerOf(self), numOf(wrapMode));
        }
    }

    private static native final void gtk_text_view_set_wrap_mode(long self, int wrapMode);

    static final boolean startsDisplayLine(TextView self, org.gnome.gtk.TextIter iter) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            result = gtk_text_view_starts_display_line(pointerOf(self), pointerOf(iter));

            return result;
        }
    }

    private static native final boolean gtk_text_view_starts_display_line(long self, long iter);

    static final void windowToBufferCoords(TextView self, TextWindowType win, int windowX, int windowY, int[] bufferX, int[] bufferY) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (win == null) {
            throw new IllegalArgumentException("win can't be null");
        }

        synchronized (lock) {
            gtk_text_view_window_to_buffer_coords(pointerOf(self), numOf(win), windowX, windowY, bufferX, bufferY);
        }
    }

    private static native final void gtk_text_view_window_to_buffer_coords(long self, int win, int windowX, int windowY, int[] bufferX, int[] bufferY);

    interface BackspaceSignal extends Signal
    {
        void onBackspace(TextView source);
    }

    static final void connect(TextView self, GtkTextView.BackspaceSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextView.class, "backspace", after);
    }

    protected static final void receiveBackspace(Signal handler, long source) {
        ((GtkTextView.BackspaceSignal) handler).onBackspace((TextView) objectFor(source));
    }

    interface CopyClipboardSignal extends Signal
    {
        void onCopyClipboard(TextView source);
    }

    static final void connect(TextView self, GtkTextView.CopyClipboardSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextView.class, "copy-clipboard", after);
    }

    protected static final void receiveCopyClipboard(Signal handler, long source) {
        ((GtkTextView.CopyClipboardSignal) handler).onCopyClipboard((TextView) objectFor(source));
    }

    interface CreateBufferSignal extends Signal
    {
        TextBuffer onCreateBuffer(TextView source);
    }

    static final void connect(TextView self, GtkTextView.CreateBufferSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextView.class, "create-buffer", after);
    }

    protected static final long receiveCreateBuffer(Signal handler, long source) {
        TextBuffer result;

        result = ((GtkTextView.CreateBufferSignal) handler).onCreateBuffer((TextView) objectFor(source));

        return pointerOf(result);
    }

    interface CutClipboardSignal extends Signal
    {
        void onCutClipboard(TextView source);
    }

    static final void connect(TextView self, GtkTextView.CutClipboardSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextView.class, "cut-clipboard", after);
    }

    protected static final void receiveCutClipboard(Signal handler, long source) {
        ((GtkTextView.CutClipboardSignal) handler).onCutClipboard((TextView) objectFor(source));
    }

    interface DeleteFromCursorSignal extends Signal
    {
        void onDeleteFromCursor(TextView source, DeleteType type, int count);
    }

    static final void connect(TextView self, GtkTextView.DeleteFromCursorSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextView.class, "delete-from-cursor", after);
    }

    protected static final void receiveDeleteFromCursor(Signal handler, long source, int type, int count) {
        ((GtkTextView.DeleteFromCursorSignal) handler).onDeleteFromCursor((TextView) objectFor(source), (DeleteType) enumFor(DeleteType.class, type), count);
    }

    interface DrawLayerSignal extends Signal
    {
        void onDrawLayer(TextView source, FIXME layer, Context cr);
    }

    static final void connect(TextView self, GtkTextView.DrawLayerSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextView.class, "draw-layer", after);
    }

    protected static final void receiveDrawLayer(Signal handler, long source, java.lang.Object layer, long cr) {
        ((GtkTextView.DrawLayerSignal) handler).onDrawLayer((TextView) objectFor(source), (FIXME) layer, (Context) entityFor(Context.class,  cr));
    }

    interface ExtendSelectionSignal extends Signal
    {
        boolean onExtendSelection(TextView source, FIXME granularity, org.gnome.gtk.TextIter location, TextIter start, TextIter end);
    }

    static final void connect(TextView self, GtkTextView.ExtendSelectionSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextView.class, "extend-selection", after);
    }

    protected static final boolean receiveExtendSelection(Signal handler, long source, java.lang.Object granularity, long location, long start, long end) {
        boolean result;

        result = ((GtkTextView.ExtendSelectionSignal) handler).onExtendSelection((TextView) objectFor(source), (FIXME) granularity, (org.gnome.gtk.TextIter) boxedFor(org.gnome.gtk.TextIter.class, location), (TextIter) boxedFor(TextIter.class, start), (TextIter) boxedFor(TextIter.class, end));

        return result;
    }

    interface InsertAtCursorSignal extends Signal
    {
        void onInsertAtCursor(TextView source, String str);
    }

    static final void connect(TextView self, GtkTextView.InsertAtCursorSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextView.class, "insert-at-cursor", after);
    }

    protected static final void receiveInsertAtCursor(Signal handler, long source, String str) {
        ((GtkTextView.InsertAtCursorSignal) handler).onInsertAtCursor((TextView) objectFor(source), str);
    }

    interface InsertEmojiSignal extends Signal
    {
        void onInsertEmoji(TextView source);
    }

    static final void connect(TextView self, GtkTextView.InsertEmojiSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextView.class, "insert-emoji", after);
    }

    protected static final void receiveInsertEmoji(Signal handler, long source) {
        ((GtkTextView.InsertEmojiSignal) handler).onInsertEmoji((TextView) objectFor(source));
    }

    interface MoveCursorSignal extends Signal
    {
        void onMoveCursor(TextView source, MovementStep step, int count, boolean extendSelection);
    }

    static final void connect(TextView self, GtkTextView.MoveCursorSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextView.class, "move-cursor", after);
    }

    protected static final void receiveMoveCursor(Signal handler, long source, int step, int count, boolean extendSelection) {
        ((GtkTextView.MoveCursorSignal) handler).onMoveCursor((TextView) objectFor(source), (MovementStep) enumFor(MovementStep.class, step), count, extendSelection);
    }

    interface PasteClipboardSignal extends Signal
    {
        void onPasteClipboard(TextView source);
    }

    static final void connect(TextView self, GtkTextView.PasteClipboardSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextView.class, "paste-clipboard", after);
    }

    protected static final void receivePasteClipboard(Signal handler, long source) {
        ((GtkTextView.PasteClipboardSignal) handler).onPasteClipboard((TextView) objectFor(source));
    }

    interface PopulatePopupSignal extends Signal
    {
        void onPopulatePopup(TextView source, Widget popup);
    }

    static final void connect(TextView self, GtkTextView.PopulatePopupSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextView.class, "populate-popup", after);
    }

    protected static final void receivePopulatePopup(Signal handler, long source, long popup) {
        ((GtkTextView.PopulatePopupSignal) handler).onPopulatePopup((TextView) objectFor(source), (Widget) objectFor(popup));
    }

    interface SetAnchorSignal extends Signal
    {
        void onSetAnchor(TextView source);
    }

    static final void connect(TextView self, GtkTextView.SetAnchorSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextView.class, "set-anchor", after);
    }

    protected static final void receiveSetAnchor(Signal handler, long source) {
        ((GtkTextView.SetAnchorSignal) handler).onSetAnchor((TextView) objectFor(source));
    }

    interface ToggleOverwriteSignal extends Signal
    {
        void onToggleOverwrite(TextView source);
    }

    static final void connect(TextView self, GtkTextView.ToggleOverwriteSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextView.class, "toggle-overwrite", after);
    }

    protected static final void receiveToggleOverwrite(Signal handler, long source) {
        ((GtkTextView.ToggleOverwriteSignal) handler).onToggleOverwrite((TextView) objectFor(source));
    }

    interface MoveViewportSignal extends Signal
    {
        void onMoveViewport(TextView source, ScrollStep step, int count);
    }

    static final void connect(TextView self, GtkTextView.MoveViewportSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextView.class, "move-viewport", after);
    }

    protected static final void receiveMoveViewport(Signal handler, long source, int step, int count) {
        ((GtkTextView.MoveViewportSignal) handler).onMoveViewport((TextView) objectFor(source), (ScrollStep) enumFor(ScrollStep.class, step), count);
    }

    interface PreeditChangedSignal extends Signal
    {
        void onPreeditChanged(TextView source, String preedit);
    }

    static final void connect(TextView self, GtkTextView.PreeditChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextView.class, "preedit-changed", after);
    }

    protected static final void receivePreeditChanged(Signal handler, long source, String preedit) {
        ((GtkTextView.PreeditChangedSignal) handler).onPreeditChanged((TextView) objectFor(source), preedit);
    }

    interface SelectAllSignal extends Signal
    {
        void onSelectAll(TextView source, boolean select);
    }

    static final void connect(TextView self, GtkTextView.SelectAllSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextView.class, "select-all", after);
    }

    protected static final void receiveSelectAll(Signal handler, long source, boolean select) {
        ((GtkTextView.SelectAllSignal) handler).onSelectAll((TextView) objectFor(source), select);
    }

    interface ToggleCursorVisibleSignal extends Signal
    {
        void onToggleCursorVisible(TextView source);
    }

    static final void connect(TextView self, GtkTextView.ToggleCursorVisibleSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextView.class, "toggle-cursor-visible", after);
    }

    protected static final void receiveToggleCursorVisible(Signal handler, long source) {
        ((GtkTextView.ToggleCursorVisibleSignal) handler).onToggleCursorVisible((TextView) objectFor(source));
    }
}

