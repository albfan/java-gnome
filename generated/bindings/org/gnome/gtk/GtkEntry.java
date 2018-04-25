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
import org.gnome.gdk.DragAction;
import org.gnome.gdk.EventButton;
import org.gnome.gdk.EventKey;
import org.gnome.gdk.Pixbuf;
import org.gnome.gdk.Rectangle;
import org.gnome.glib.Signal;
import org.gnome.gtk.Adjustment;
import org.gnome.gtk.Border;
import org.gnome.gtk.DeleteType;
import org.gnome.gtk.Entry;
import org.gnome.gtk.EntryBuffer;
import org.gnome.gtk.EntryCompletion;
import org.gnome.gtk.EntryIconPosition;
import org.gnome.gtk.ImageType;
import org.gnome.gtk.MovementStep;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.Widget;
import org.gnome.pango.AttributeList;
import org.gnome.pango.Layout;
import org.gnome.pango.TabArray;

final class GtkEntry extends Plumbing
{
    private GtkEntry() {}

    static final long createEntry() {
        long result;

        synchronized (lock) {
            result = gtk_entry_new();

            return result;
        }
    }

    private static native final long gtk_entry_new();

    static final long createEntryWithBuffer(EntryBuffer buffer) {
        long result;

        if (buffer == null) {
            throw new IllegalArgumentException("buffer can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_new_with_buffer(pointerOf(buffer));

            return result;
        }
    }

    private static native final long gtk_entry_new_with_buffer(long buffer);

    static final boolean getActivatesDefault(Entry self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_get_activates_default(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_entry_get_activates_default(long self);

    static final float getAlignment(Entry self) {
        float result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_get_alignment(pointerOf(self));

            return result;
        }
    }

    private static native final float gtk_entry_get_alignment(long self);

    static final AttributeList getAttributes(Entry self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_get_attributes(pointerOf(self));

            return (AttributeList) boxedFor(AttributeList.class, result);
        }
    }

    private static native final long gtk_entry_get_attributes(long self);

    static final EntryBuffer getBuffer(Entry self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_get_buffer(pointerOf(self));

            return (EntryBuffer) objectFor(result);
        }
    }

    private static native final long gtk_entry_get_buffer(long self);

    static final EntryCompletion getCompletion(Entry self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_get_completion(pointerOf(self));

            return (EntryCompletion) objectFor(result);
        }
    }

    private static native final long gtk_entry_get_completion(long self);

    static final int getCurrentIconDragSource(Entry self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_get_current_icon_drag_source(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_entry_get_current_icon_drag_source(long self);

    static final Adjustment getCursorHadjustment(Entry self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_get_cursor_hadjustment(pointerOf(self));

            return (Adjustment) objectFor(result);
        }
    }

    private static native final long gtk_entry_get_cursor_hadjustment(long self);

    static final boolean getHasFrame(Entry self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_get_has_frame(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_entry_get_has_frame(long self);

    static final boolean getIconActivatable(Entry self, EntryIconPosition iconPos) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iconPos == null) {
            throw new IllegalArgumentException("iconPos can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_get_icon_activatable(pointerOf(self), numOf(iconPos));

            return result;
        }
    }

    private static native final boolean gtk_entry_get_icon_activatable(long self, int iconPos);

    static final void getIconArea(Entry self, EntryIconPosition iconPos, Rectangle iconArea) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iconPos == null) {
            throw new IllegalArgumentException("iconPos can't be null");
        }

        synchronized (lock) {
            gtk_entry_get_icon_area(pointerOf(self), numOf(iconPos), pointerOf(iconArea));
        }
    }

    private static native final void gtk_entry_get_icon_area(long self, int iconPos, long iconArea);

    static final int getIconAtPos(Entry self, int x, int y) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_get_icon_at_pos(pointerOf(self), x, y);

            return result;
        }
    }

    private static native final int gtk_entry_get_icon_at_pos(long self, int x, int y);

    @SuppressWarnings("unused")
    static final FIXME getIconGicon(Entry self, EntryIconPosition iconPos) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GIcon*");
    }

    static final String getIconName(Entry self, EntryIconPosition iconPos) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iconPos == null) {
            throw new IllegalArgumentException("iconPos can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_get_icon_name(pointerOf(self), numOf(iconPos));

            return result;
        }
    }

    private static native final String gtk_entry_get_icon_name(long self, int iconPos);

    static final Pixbuf getIconPixbuf(Entry self, EntryIconPosition iconPos) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iconPos == null) {
            throw new IllegalArgumentException("iconPos can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_get_icon_pixbuf(pointerOf(self), numOf(iconPos));

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long gtk_entry_get_icon_pixbuf(long self, int iconPos);

    static final boolean getIconSensitive(Entry self, EntryIconPosition iconPos) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iconPos == null) {
            throw new IllegalArgumentException("iconPos can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_get_icon_sensitive(pointerOf(self), numOf(iconPos));

            return result;
        }
    }

    private static native final boolean gtk_entry_get_icon_sensitive(long self, int iconPos);

    static final String getIconStock(Entry self, EntryIconPosition iconPos) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iconPos == null) {
            throw new IllegalArgumentException("iconPos can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_get_icon_stock(pointerOf(self), numOf(iconPos));

            return result;
        }
    }

    private static native final String gtk_entry_get_icon_stock(long self, int iconPos);

    static final ImageType getIconStorageType(Entry self, EntryIconPosition iconPos) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iconPos == null) {
            throw new IllegalArgumentException("iconPos can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_get_icon_storage_type(pointerOf(self), numOf(iconPos));

            return (ImageType) enumFor(ImageType.class, result);
        }
    }

    private static native final int gtk_entry_get_icon_storage_type(long self, int iconPos);

    static final String getIconTooltipMarkup(Entry self, EntryIconPosition iconPos) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iconPos == null) {
            throw new IllegalArgumentException("iconPos can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_get_icon_tooltip_markup(pointerOf(self), numOf(iconPos));

            return result;
        }
    }

    private static native final String gtk_entry_get_icon_tooltip_markup(long self, int iconPos);

    static final String getIconTooltipText(Entry self, EntryIconPosition iconPos) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iconPos == null) {
            throw new IllegalArgumentException("iconPos can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_get_icon_tooltip_text(pointerOf(self), numOf(iconPos));

            return result;
        }
    }

    private static native final String gtk_entry_get_icon_tooltip_text(long self, int iconPos);

    static final Border getInnerBorder(Entry self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_get_inner_border(pointerOf(self));

            return (Border) boxedFor(Border.class, result);
        }
    }

    private static native final long gtk_entry_get_inner_border(long self);

    @SuppressWarnings("unused")
    static final FIXME getInputHints(Entry self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkInputHints");
    }

    @SuppressWarnings("unused")
    static final FIXME getInputPurpose(Entry self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkInputPurpose");
    }

    static final int getInvisibleChar(Entry self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_get_invisible_char(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_entry_get_invisible_char(long self);

    static final Layout getLayout(Entry self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_get_layout(pointerOf(self));

            return (Layout) objectFor(result);
        }
    }

    private static native final long gtk_entry_get_layout(long self);

    static final void getLayoutOffsets(Entry self, int[] x, int[] y) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_get_layout_offsets(pointerOf(self), x, y);
        }
    }

    private static native final void gtk_entry_get_layout_offsets(long self, int[] x, int[] y);

    static final int getMaxLength(Entry self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_get_max_length(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_entry_get_max_length(long self);

    static final int getMaxWidthChars(Entry self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_get_max_width_chars(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_entry_get_max_width_chars(long self);

    static final boolean getOverwriteMode(Entry self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_get_overwrite_mode(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_entry_get_overwrite_mode(long self);

    static final String getPlaceholderText(Entry self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_get_placeholder_text(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_entry_get_placeholder_text(long self);

    static final double getProgressFraction(Entry self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_get_progress_fraction(pointerOf(self));

            return result;
        }
    }

    private static native final double gtk_entry_get_progress_fraction(long self);

    static final double getProgressPulseStep(Entry self) {
        double result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_get_progress_pulse_step(pointerOf(self));

            return result;
        }
    }

    private static native final double gtk_entry_get_progress_pulse_step(long self);

    static final TabArray getTabs(Entry self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_get_tabs(pointerOf(self));

            return (TabArray) boxedFor(TabArray.class, result);
        }
    }

    private static native final long gtk_entry_get_tabs(long self);

    static final String getText(Entry self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_get_text(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_entry_get_text(long self);

    static final void getTextArea(Entry self, Rectangle textArea) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_get_text_area(pointerOf(self), pointerOf(textArea));
        }
    }

    private static native final void gtk_entry_get_text_area(long self, long textArea);

    static final char getTextLength(Entry self) {
        char result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_get_text_length(pointerOf(self));

            return result;
        }
    }

    private static native final char gtk_entry_get_text_length(long self);

    static final boolean getVisibility(Entry self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_get_visibility(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_entry_get_visibility(long self);

    static final int getWidthChars(Entry self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_get_width_chars(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_entry_get_width_chars(long self);

    static final void grabFocusWithoutSelecting(Entry self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_grab_focus_without_selecting(pointerOf(self));
        }
    }

    private static native final void gtk_entry_grab_focus_without_selecting(long self);

    static final boolean imContextFilterKeypress(Entry self, EventKey event) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (event == null) {
            throw new IllegalArgumentException("event can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_im_context_filter_keypress(pointerOf(self), pointerOf(event));

            return result;
        }
    }

    private static native final boolean gtk_entry_im_context_filter_keypress(long self, long event);

    static final int layoutIndexToTextIndex(Entry self, int layoutIndex) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_layout_index_to_text_index(pointerOf(self), layoutIndex);

            return result;
        }
    }

    private static native final int gtk_entry_layout_index_to_text_index(long self, int layoutIndex);

    static final void progressPulse(Entry self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_progress_pulse(pointerOf(self));
        }
    }

    private static native final void gtk_entry_progress_pulse(long self);

    static final void resetImContext(Entry self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_reset_im_context(pointerOf(self));
        }
    }

    private static native final void gtk_entry_reset_im_context(long self);

    static final void setActivatesDefault(Entry self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_set_activates_default(pointerOf(self), setting);
        }
    }

    private static native final void gtk_entry_set_activates_default(long self, boolean setting);

    static final void setAlignment(Entry self, float xalign) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_set_alignment(pointerOf(self), xalign);
        }
    }

    private static native final void gtk_entry_set_alignment(long self, float xalign);

    static final void setAttributes(Entry self, AttributeList attrs) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (attrs == null) {
            throw new IllegalArgumentException("attrs can't be null");
        }

        synchronized (lock) {
            gtk_entry_set_attributes(pointerOf(self), pointerOf(attrs));
        }
    }

    private static native final void gtk_entry_set_attributes(long self, long attrs);

    static final void setBuffer(Entry self, EntryBuffer buffer) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (buffer == null) {
            throw new IllegalArgumentException("buffer can't be null");
        }

        synchronized (lock) {
            gtk_entry_set_buffer(pointerOf(self), pointerOf(buffer));
        }
    }

    private static native final void gtk_entry_set_buffer(long self, long buffer);

    static final void setCompletion(Entry self, EntryCompletion completion) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_set_completion(pointerOf(self), pointerOf(completion));
        }
    }

    private static native final void gtk_entry_set_completion(long self, long completion);

    static final void setCursorHadjustment(Entry self, Adjustment adjustment) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_set_cursor_hadjustment(pointerOf(self), pointerOf(adjustment));
        }
    }

    private static native final void gtk_entry_set_cursor_hadjustment(long self, long adjustment);

    static final void setHasFrame(Entry self, boolean setting) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_set_has_frame(pointerOf(self), setting);
        }
    }

    private static native final void gtk_entry_set_has_frame(long self, boolean setting);

    static final void setIconActivatable(Entry self, EntryIconPosition iconPos, boolean activatable) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iconPos == null) {
            throw new IllegalArgumentException("iconPos can't be null");
        }

        synchronized (lock) {
            gtk_entry_set_icon_activatable(pointerOf(self), numOf(iconPos), activatable);
        }
    }

    private static native final void gtk_entry_set_icon_activatable(long self, int iconPos, boolean activatable);

    @SuppressWarnings("unused")
    static final void setIconDragSource(Entry self, EntryIconPosition iconPos, FIXME targetList, DragAction actions) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkTargetList*");
    }

    @SuppressWarnings("unused")
    static final void setIconFromGicon(Entry self, EntryIconPosition iconPos, FIXME icon) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GIcon*");
    }

    static final void setIconFromIconName(Entry self, EntryIconPosition iconPos, String iconName) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iconPos == null) {
            throw new IllegalArgumentException("iconPos can't be null");
        }

        synchronized (lock) {
            gtk_entry_set_icon_from_icon_name(pointerOf(self), numOf(iconPos), iconName);
        }
    }

    private static native final void gtk_entry_set_icon_from_icon_name(long self, int iconPos, String iconName);

    static final void setIconFromPixbuf(Entry self, EntryIconPosition iconPos, Pixbuf pixbuf) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iconPos == null) {
            throw new IllegalArgumentException("iconPos can't be null");
        }

        synchronized (lock) {
            gtk_entry_set_icon_from_pixbuf(pointerOf(self), numOf(iconPos), pointerOf(pixbuf));
        }
    }

    private static native final void gtk_entry_set_icon_from_pixbuf(long self, int iconPos, long pixbuf);

    static final void setIconFromStock(Entry self, EntryIconPosition iconPos, String stockId) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iconPos == null) {
            throw new IllegalArgumentException("iconPos can't be null");
        }

        synchronized (lock) {
            gtk_entry_set_icon_from_stock(pointerOf(self), numOf(iconPos), stockId);
        }
    }

    private static native final void gtk_entry_set_icon_from_stock(long self, int iconPos, String stockId);

    static final void setIconSensitive(Entry self, EntryIconPosition iconPos, boolean sensitive) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iconPos == null) {
            throw new IllegalArgumentException("iconPos can't be null");
        }

        synchronized (lock) {
            gtk_entry_set_icon_sensitive(pointerOf(self), numOf(iconPos), sensitive);
        }
    }

    private static native final void gtk_entry_set_icon_sensitive(long self, int iconPos, boolean sensitive);

    static final void setIconTooltipMarkup(Entry self, EntryIconPosition iconPos, String tooltip) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iconPos == null) {
            throw new IllegalArgumentException("iconPos can't be null");
        }

        synchronized (lock) {
            gtk_entry_set_icon_tooltip_markup(pointerOf(self), numOf(iconPos), tooltip);
        }
    }

    private static native final void gtk_entry_set_icon_tooltip_markup(long self, int iconPos, String tooltip);

    static final void setIconTooltipText(Entry self, EntryIconPosition iconPos, String tooltip) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (iconPos == null) {
            throw new IllegalArgumentException("iconPos can't be null");
        }

        synchronized (lock) {
            gtk_entry_set_icon_tooltip_text(pointerOf(self), numOf(iconPos), tooltip);
        }
    }

    private static native final void gtk_entry_set_icon_tooltip_text(long self, int iconPos, String tooltip);

    static final void setInnerBorder(Entry self, Border border) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_set_inner_border(pointerOf(self), pointerOf(border));
        }
    }

    private static native final void gtk_entry_set_inner_border(long self, long border);

    @SuppressWarnings("unused")
    static final void setInputHints(Entry self, FIXME hints) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkInputHints");
    }

    @SuppressWarnings("unused")
    static final void setInputPurpose(Entry self, FIXME purpose) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkInputPurpose");
    }

    static final void setInvisibleChar(Entry self, int ch) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_set_invisible_char(pointerOf(self), ch);
        }
    }

    private static native final void gtk_entry_set_invisible_char(long self, int ch);

    static final void setMaxLength(Entry self, int max) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_set_max_length(pointerOf(self), max);
        }
    }

    private static native final void gtk_entry_set_max_length(long self, int max);

    static final void setMaxWidthChars(Entry self, int nChars) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_set_max_width_chars(pointerOf(self), nChars);
        }
    }

    private static native final void gtk_entry_set_max_width_chars(long self, int nChars);

    static final void setOverwriteMode(Entry self, boolean overwrite) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_set_overwrite_mode(pointerOf(self), overwrite);
        }
    }

    private static native final void gtk_entry_set_overwrite_mode(long self, boolean overwrite);

    static final void setPlaceholderText(Entry self, String text) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_set_placeholder_text(pointerOf(self), text);
        }
    }

    private static native final void gtk_entry_set_placeholder_text(long self, String text);

    static final void setProgressFraction(Entry self, double fraction) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_set_progress_fraction(pointerOf(self), fraction);
        }
    }

    private static native final void gtk_entry_set_progress_fraction(long self, double fraction);

    static final void setProgressPulseStep(Entry self, double fraction) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_set_progress_pulse_step(pointerOf(self), fraction);
        }
    }

    private static native final void gtk_entry_set_progress_pulse_step(long self, double fraction);

    static final void setTabs(Entry self, TabArray tabs) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (tabs == null) {
            throw new IllegalArgumentException("tabs can't be null");
        }

        synchronized (lock) {
            gtk_entry_set_tabs(pointerOf(self), pointerOf(tabs));
        }
    }

    private static native final void gtk_entry_set_tabs(long self, long tabs);

    static final void setText(Entry self, String text) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (text == null) {
            throw new IllegalArgumentException("text can't be null");
        }

        synchronized (lock) {
            gtk_entry_set_text(pointerOf(self), text);
        }
    }

    private static native final void gtk_entry_set_text(long self, String text);

    static final void setVisibility(Entry self, boolean visible) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_set_visibility(pointerOf(self), visible);
        }
    }

    private static native final void gtk_entry_set_visibility(long self, boolean visible);

    static final void setWidthChars(Entry self, int nChars) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_set_width_chars(pointerOf(self), nChars);
        }
    }

    private static native final void gtk_entry_set_width_chars(long self, int nChars);

    static final int textIndexToLayoutIndex(Entry self, int textIndex) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_entry_text_index_to_layout_index(pointerOf(self), textIndex);

            return result;
        }
    }

    private static native final int gtk_entry_text_index_to_layout_index(long self, int textIndex);

    static final void unsetInvisibleChar(Entry self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_entry_unset_invisible_char(pointerOf(self));
        }
    }

    private static native final void gtk_entry_unset_invisible_char(long self);

    interface ActivateSignal extends Signal
    {
        void onActivate(Entry source);
    }

    static final void connect(Entry self, GtkEntry.ActivateSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkEntry.class, "activate", after);
    }

    protected static final void receiveActivate(Signal handler, long source) {
        ((GtkEntry.ActivateSignal) handler).onActivate((Entry) objectFor(source));
    }

    interface BackspaceSignal extends Signal
    {
        void onBackspace(Entry source);
    }

    static final void connect(Entry self, GtkEntry.BackspaceSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkEntry.class, "backspace", after);
    }

    protected static final void receiveBackspace(Signal handler, long source) {
        ((GtkEntry.BackspaceSignal) handler).onBackspace((Entry) objectFor(source));
    }

    interface CopyClipboardSignal extends Signal
    {
        void onCopyClipboard(Entry source);
    }

    static final void connect(Entry self, GtkEntry.CopyClipboardSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkEntry.class, "copy-clipboard", after);
    }

    protected static final void receiveCopyClipboard(Signal handler, long source) {
        ((GtkEntry.CopyClipboardSignal) handler).onCopyClipboard((Entry) objectFor(source));
    }

    interface CutClipboardSignal extends Signal
    {
        void onCutClipboard(Entry source);
    }

    static final void connect(Entry self, GtkEntry.CutClipboardSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkEntry.class, "cut-clipboard", after);
    }

    protected static final void receiveCutClipboard(Signal handler, long source) {
        ((GtkEntry.CutClipboardSignal) handler).onCutClipboard((Entry) objectFor(source));
    }

    interface DeleteFromCursorSignal extends Signal
    {
        void onDeleteFromCursor(Entry source, DeleteType type, int count);
    }

    static final void connect(Entry self, GtkEntry.DeleteFromCursorSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkEntry.class, "delete-from-cursor", after);
    }

    protected static final void receiveDeleteFromCursor(Signal handler, long source, int type, int count) {
        ((GtkEntry.DeleteFromCursorSignal) handler).onDeleteFromCursor((Entry) objectFor(source), (DeleteType) enumFor(DeleteType.class, type), count);
    }

    interface GetFrameSizeSignal extends Signal
    {
        void onGetFrameSize(Entry source, int[] x, int[] y, int[] width, int[] height);
    }

    static final void connect(Entry self, GtkEntry.GetFrameSizeSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkEntry.class, "get-frame-size", after);
    }

    protected static final void receiveGetFrameSize(Signal handler, long source, int[] x, int[] y, int[] width, int[] height) {
        ((GtkEntry.GetFrameSizeSignal) handler).onGetFrameSize((Entry) objectFor(source), x, y, width, height);
    }

    interface GetTextAreaSizeSignal extends Signal
    {
        void onGetTextAreaSize(Entry source, int[] x, int[] y, int[] width, int[] height);
    }

    static final void connect(Entry self, GtkEntry.GetTextAreaSizeSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkEntry.class, "get-text-area-size", after);
    }

    protected static final void receiveGetTextAreaSize(Signal handler, long source, int[] x, int[] y, int[] width, int[] height) {
        ((GtkEntry.GetTextAreaSizeSignal) handler).onGetTextAreaSize((Entry) objectFor(source), x, y, width, height);
    }

    interface InsertAtCursorSignal extends Signal
    {
        void onInsertAtCursor(Entry source, String str);
    }

    static final void connect(Entry self, GtkEntry.InsertAtCursorSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkEntry.class, "insert-at-cursor", after);
    }

    protected static final void receiveInsertAtCursor(Signal handler, long source, String str) {
        ((GtkEntry.InsertAtCursorSignal) handler).onInsertAtCursor((Entry) objectFor(source), str);
    }

    interface InsertEmojiSignal extends Signal
    {
        void onInsertEmoji(Entry source);
    }

    static final void connect(Entry self, GtkEntry.InsertEmojiSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkEntry.class, "insert-emoji", after);
    }

    protected static final void receiveInsertEmoji(Signal handler, long source) {
        ((GtkEntry.InsertEmojiSignal) handler).onInsertEmoji((Entry) objectFor(source));
    }

    interface MoveCursorSignal extends Signal
    {
        void onMoveCursor(Entry source, MovementStep step, int count, boolean extendSelection);
    }

    static final void connect(Entry self, GtkEntry.MoveCursorSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkEntry.class, "move-cursor", after);
    }

    protected static final void receiveMoveCursor(Signal handler, long source, int step, int count, boolean extendSelection) {
        ((GtkEntry.MoveCursorSignal) handler).onMoveCursor((Entry) objectFor(source), (MovementStep) enumFor(MovementStep.class, step), count, extendSelection);
    }

    interface PasteClipboardSignal extends Signal
    {
        void onPasteClipboard(Entry source);
    }

    static final void connect(Entry self, GtkEntry.PasteClipboardSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkEntry.class, "paste-clipboard", after);
    }

    protected static final void receivePasteClipboard(Signal handler, long source) {
        ((GtkEntry.PasteClipboardSignal) handler).onPasteClipboard((Entry) objectFor(source));
    }

    interface PopulatePopupSignal extends Signal
    {
        void onPopulatePopup(Entry source, Widget popup);
    }

    static final void connect(Entry self, GtkEntry.PopulatePopupSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkEntry.class, "populate-popup", after);
    }

    protected static final void receivePopulatePopup(Signal handler, long source, long popup) {
        ((GtkEntry.PopulatePopupSignal) handler).onPopulatePopup((Entry) objectFor(source), (Widget) objectFor(popup));
    }

    interface ToggleOverwriteSignal extends Signal
    {
        void onToggleOverwrite(Entry source);
    }

    static final void connect(Entry self, GtkEntry.ToggleOverwriteSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkEntry.class, "toggle-overwrite", after);
    }

    protected static final void receiveToggleOverwrite(Signal handler, long source) {
        ((GtkEntry.ToggleOverwriteSignal) handler).onToggleOverwrite((Entry) objectFor(source));
    }

    interface IconPressSignal extends Signal
    {
        void onIconPress(Entry source, EntryIconPosition iconPos, EventButton event);
    }

    static final void connect(Entry self, GtkEntry.IconPressSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkEntry.class, "icon-press", after);
    }

    protected static final void receiveIconPress(Signal handler, long source, int iconPos, long event) {
        ((GtkEntry.IconPressSignal) handler).onIconPress((Entry) objectFor(source), (EntryIconPosition) enumFor(EntryIconPosition.class, iconPos), (EventButton) boxedFor(EventButton.class, event));
    }

    interface IconReleaseSignal extends Signal
    {
        void onIconRelease(Entry source, EntryIconPosition iconPos, EventButton event);
    }

    static final void connect(Entry self, GtkEntry.IconReleaseSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkEntry.class, "icon-release", after);
    }

    protected static final void receiveIconRelease(Signal handler, long source, int iconPos, long event) {
        ((GtkEntry.IconReleaseSignal) handler).onIconRelease((Entry) objectFor(source), (EntryIconPosition) enumFor(EntryIconPosition.class, iconPos), (EventButton) boxedFor(EventButton.class, event));
    }

    interface PreeditChangedSignal extends Signal
    {
        void onPreeditChanged(Entry source, String preedit);
    }

    static final void connect(Entry self, GtkEntry.PreeditChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkEntry.class, "preedit-changed", after);
    }

    protected static final void receivePreeditChanged(Signal handler, long source, String preedit) {
        ((GtkEntry.PreeditChangedSignal) handler).onPreeditChanged((Entry) objectFor(source), preedit);
    }
}

