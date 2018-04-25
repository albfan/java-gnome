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
import org.gnome.gtk.Justification;
import org.gnome.gtk.Label;
import org.gnome.gtk.Menu;
import org.gnome.gtk.MovementStep;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.Widget;
import org.gnome.pango.AttributeList;
import org.gnome.pango.EllipsizeMode;
import org.gnome.pango.Layout;
import org.gnome.pango.WrapMode;

final class GtkLabel extends Plumbing
{
    private GtkLabel() {}

    static final long createLabel(String str) {
        long result;

        synchronized (lock) {
            result = gtk_label_new(str);

            return result;
        }
    }

    private static native final long gtk_label_new(String str);

    static final long createLabelWithMnemonic(String str) {
        long result;

        synchronized (lock) {
            result = gtk_label_new_with_mnemonic(str);

            return result;
        }
    }

    private static native final long gtk_label_new_with_mnemonic(String str);

    static final double getAngle(Label self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_label_get_angle(pointerOf(self));

            return result;
        }
    }

    private static native final double gtk_label_get_angle(long self);

    static final AttributeList getAttributes(Label self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_label_get_attributes(pointerOf(self));

            return (AttributeList) boxedFor(AttributeList.class, result);
        }
    }

    private static native final long gtk_label_get_attributes(long self);

    static final String getCurrentUri(Label self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_label_get_current_uri(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_label_get_current_uri(long self);

    static final EllipsizeMode getEllipsize(Label self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_label_get_ellipsize(pointerOf(self));

            return (EllipsizeMode) enumFor(EllipsizeMode.class, result);
        }
    }

    private static native final int gtk_label_get_ellipsize(long self);

    static final Justification getJustify(Label self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_label_get_justify(pointerOf(self));

            return (Justification) enumFor(Justification.class, result);
        }
    }

    private static native final int gtk_label_get_justify(long self);

    static final String getLabel(Label self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_label_get_label(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_label_get_label(long self);

    static final Layout getLayout(Label self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_label_get_layout(pointerOf(self));

            return (Layout) objectFor(result);
        }
    }

    private static native final long gtk_label_get_layout(long self);

    static final void getLayoutOffsets(Label self, int[] x, int[] y) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_label_get_layout_offsets(pointerOf(self), x, y);
        }
    }

    private static native final void gtk_label_get_layout_offsets(long self, int[] x, int[] y);

    static final boolean getLineWrap(Label self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_label_get_line_wrap(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_label_get_line_wrap(long self);

    static final WrapMode getLineWrapMode(Label self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_label_get_line_wrap_mode(pointerOf(self));

            return (WrapMode) enumFor(WrapMode.class, result);
        }
    }

    private static native final int gtk_label_get_line_wrap_mode(long self);

    static final int getLines(Label self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_label_get_lines(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_label_get_lines(long self);

    static final int getMaxWidthChars(Label self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_label_get_max_width_chars(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_label_get_max_width_chars(long self);

    static final int getMnemonicKeyval(Label self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_label_get_mnemonic_keyval(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_label_get_mnemonic_keyval(long self);

    static final Widget getMnemonicWidget(Label self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_label_get_mnemonic_widget(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_label_get_mnemonic_widget(long self);

    static final boolean getSelectable(Label self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_label_get_selectable(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_label_get_selectable(long self);

    static final boolean getSelectionBounds(Label self, int[] start, int[] end) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_label_get_selection_bounds(pointerOf(self), start, end);

            return result;
        }
    }

    private static native final boolean gtk_label_get_selection_bounds(long self, int[] start, int[] end);

    static final boolean getSingleLineMode(Label self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_label_get_single_line_mode(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_label_get_single_line_mode(long self);

    static final String getText(Label self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_label_get_text(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_label_get_text(long self);

    static final boolean getTrackVisitedLinks(Label self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_label_get_track_visited_links(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_label_get_track_visited_links(long self);

    static final boolean getUseMarkup(Label self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_label_get_use_markup(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_label_get_use_markup(long self);

    static final boolean getUseUnderline(Label self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_label_get_use_underline(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_label_get_use_underline(long self);

    static final int getWidthChars(Label self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_label_get_width_chars(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_label_get_width_chars(long self);

    static final float getXalign(Label self) {
        float result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_label_get_xalign(pointerOf(self));

            return result;
        }
    }

    private static native final float gtk_label_get_xalign(long self);

    static final float getYalign(Label self) {
        float result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_label_get_yalign(pointerOf(self));

            return result;
        }
    }

    private static native final float gtk_label_get_yalign(long self);

    static final void selectRegion(Label self, int startOffset, int endOffset) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_label_select_region(pointerOf(self), startOffset, endOffset);
        }
    }

    private static native final void gtk_label_select_region(long self, int startOffset, int endOffset);

    static final void setAngle(Label self, double angle) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_label_set_angle(pointerOf(self), angle);
        }
    }

    private static native final void gtk_label_set_angle(long self, double angle);

    static final void setAttributes(Label self, AttributeList attrs) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_label_set_attributes(pointerOf(self), pointerOf(attrs));
        }
    }

    private static native final void gtk_label_set_attributes(long self, long attrs);

    static final void setEllipsize(Label self, EllipsizeMode mode) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (mode == null) {
            throw new IllegalArgumentException("mode can't be null");
        }

        synchronized (lock) {
            gtk_label_set_ellipsize(pointerOf(self), numOf(mode));
        }
    }

    private static native final void gtk_label_set_ellipsize(long self, int mode);

    static final void setJustify(Label self, Justification jtype) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (jtype == null) {
            throw new IllegalArgumentException("jtype can't be null");
        }

        synchronized (lock) {
            gtk_label_set_justify(pointerOf(self), numOf(jtype));
        }
    }

    private static native final void gtk_label_set_justify(long self, int jtype);

    static final void setLabel(Label self, String str) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (str == null) {
            throw new IllegalArgumentException("str can't be null");
        }

        synchronized (lock) {
            gtk_label_set_label(pointerOf(self), str);
        }
    }

    private static native final void gtk_label_set_label(long self, String str);

    static final void setLineWrap(Label self, boolean wrap) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_label_set_line_wrap(pointerOf(self), wrap);
        }
    }

    private static native final void gtk_label_set_line_wrap(long self, boolean wrap);

    static final void setLineWrapMode(Label self, WrapMode wrapMode) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (wrapMode == null) {
            throw new IllegalArgumentException("wrapMode can't be null");
        }

        synchronized (lock) {
            gtk_label_set_line_wrap_mode(pointerOf(self), numOf(wrapMode));
        }
    }

    private static native final void gtk_label_set_line_wrap_mode(long self, int wrapMode);

    static final void setLines(Label self, int lines) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_label_set_lines(pointerOf(self), lines);
        }
    }

    private static native final void gtk_label_set_lines(long self, int lines);

    static final void setMarkup(Label self, String str) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (str == null) {
            throw new IllegalArgumentException("str can't be null");
        }

        synchronized (lock) {
            gtk_label_set_markup(pointerOf(self), str);
        }
    }

    private static native final void gtk_label_set_markup(long self, String str);

    static final void setMarkupWithMnemonic(Label self, String str) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (str == null) {
            throw new IllegalArgumentException("str can't be null");
        }

        synchronized (lock) {
            gtk_label_set_markup_with_mnemonic(pointerOf(self), str);
        }
    }

    private static native final void gtk_label_set_markup_with_mnemonic(long self, String str);

    static final void setMaxWidthChars(Label self, int nChars) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_label_set_max_width_chars(pointerOf(self), nChars);
        }
    }

    private static native final void gtk_label_set_max_width_chars(long self, int nChars);

    static final void setMnemonicWidget(Label self, Widget widget) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_label_set_mnemonic_widget(pointerOf(self), pointerOf(widget));
        }
    }

    private static native final void gtk_label_set_mnemonic_widget(long self, long widget);

    static final void setPattern(Label self, String pattern) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (pattern == null) {
            throw new IllegalArgumentException("pattern can't be null");
        }

        synchronized (lock) {
            gtk_label_set_pattern(pointerOf(self), pattern);
        }
    }

    private static native final void gtk_label_set_pattern(long self, String pattern);

    static final void setSelectable(Label self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_label_set_selectable(pointerOf(self), setting);
        }
    }

    private static native final void gtk_label_set_selectable(long self, boolean setting);

    static final void setSingleLineMode(Label self, boolean singleLineMode) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_label_set_single_line_mode(pointerOf(self), singleLineMode);
        }
    }

    private static native final void gtk_label_set_single_line_mode(long self, boolean singleLineMode);

    static final void setText(Label self, String str) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (str == null) {
            throw new IllegalArgumentException("str can't be null");
        }

        synchronized (lock) {
            gtk_label_set_text(pointerOf(self), str);
        }
    }

    private static native final void gtk_label_set_text(long self, String str);

    static final void setTextWithMnemonic(Label self, String str) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (str == null) {
            throw new IllegalArgumentException("str can't be null");
        }

        synchronized (lock) {
            gtk_label_set_text_with_mnemonic(pointerOf(self), str);
        }
    }

    private static native final void gtk_label_set_text_with_mnemonic(long self, String str);

    static final void setTrackVisitedLinks(Label self, boolean trackLinks) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_label_set_track_visited_links(pointerOf(self), trackLinks);
        }
    }

    private static native final void gtk_label_set_track_visited_links(long self, boolean trackLinks);

    static final void setUseMarkup(Label self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_label_set_use_markup(pointerOf(self), setting);
        }
    }

    private static native final void gtk_label_set_use_markup(long self, boolean setting);

    static final void setUseUnderline(Label self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_label_set_use_underline(pointerOf(self), setting);
        }
    }

    private static native final void gtk_label_set_use_underline(long self, boolean setting);

    static final void setWidthChars(Label self, int nChars) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_label_set_width_chars(pointerOf(self), nChars);
        }
    }

    private static native final void gtk_label_set_width_chars(long self, int nChars);

    static final void setXalign(Label self, float xalign) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_label_set_xalign(pointerOf(self), xalign);
        }
    }

    private static native final void gtk_label_set_xalign(long self, float xalign);

    static final void setYalign(Label self, float yalign) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_label_set_yalign(pointerOf(self), yalign);
        }
    }

    private static native final void gtk_label_set_yalign(long self, float yalign);

    interface ActivateLinkSignal extends Signal
    {
        boolean onActivateLink(Label source, String uri);
    }

    static final void connect(Label self, GtkLabel.ActivateLinkSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkLabel.class, "activate-link", after);
    }

    protected static final boolean receiveActivateLink(Signal handler, long source, String uri) {
        boolean result;

        result = ((GtkLabel.ActivateLinkSignal) handler).onActivateLink((Label) objectFor(source), uri);

        return result;
    }

    interface CopyClipboardSignal extends Signal
    {
        void onCopyClipboard(Label source);
    }

    static final void connect(Label self, GtkLabel.CopyClipboardSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkLabel.class, "copy-clipboard", after);
    }

    protected static final void receiveCopyClipboard(Signal handler, long source) {
        ((GtkLabel.CopyClipboardSignal) handler).onCopyClipboard((Label) objectFor(source));
    }

    interface MoveCursorSignal extends Signal
    {
        void onMoveCursor(Label source, MovementStep step, int count, boolean extendSelection);
    }

    static final void connect(Label self, GtkLabel.MoveCursorSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkLabel.class, "move-cursor", after);
    }

    protected static final void receiveMoveCursor(Signal handler, long source, int step, int count, boolean extendSelection) {
        ((GtkLabel.MoveCursorSignal) handler).onMoveCursor((Label) objectFor(source), (MovementStep) enumFor(MovementStep.class, step), count, extendSelection);
    }

    interface PopulatePopupSignal extends Signal
    {
        void onPopulatePopup(Label source, Menu menu);
    }

    static final void connect(Label self, GtkLabel.PopulatePopupSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkLabel.class, "populate-popup", after);
    }

    protected static final void receivePopulatePopup(Signal handler, long source, long menu) {
        ((GtkLabel.PopulatePopupSignal) handler).onPopulatePopup((Label) objectFor(source), (Menu) objectFor(menu));
    }

    interface ActivateCurrentLinkSignal extends Signal
    {
        void onActivateCurrentLink(Label source);
    }

    static final void connect(Label self, GtkLabel.ActivateCurrentLinkSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkLabel.class, "activate-current-link", after);
    }

    protected static final void receiveActivateCurrentLink(Signal handler, long source) {
        ((GtkLabel.ActivateCurrentLinkSignal) handler).onActivateCurrentLink((Label) objectFor(source));
    }
}

