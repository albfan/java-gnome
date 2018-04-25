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

import org.gnome.gdk.Window;
import org.gnome.glib.Signal;
import org.gnome.gtk.Button;
import org.gnome.gtk.IconSize;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.PositionType;
import org.gnome.gtk.ReliefStyle;
import org.gnome.gtk.Widget;

final class GtkButton extends Plumbing
{
    private GtkButton() {}

    static final long createButton() {
        long result;

        synchronized (lock) {
            result = gtk_button_new();

            return result;
        }
    }

    private static native final long gtk_button_new();

    static final long createButtonFromIconName(String iconName, IconSize size) {
        long result;

        if (size == null) {
            throw new IllegalArgumentException("size can't be null");
        }

        synchronized (lock) {
            result = gtk_button_new_from_icon_name(iconName, numOf(size));

            return result;
        }
    }

    private static native final long gtk_button_new_from_icon_name(String iconName, int size);

    static final long createButtonFromStock(String stockId) {
        long result;

        if (stockId == null) {
            throw new IllegalArgumentException("stockId can't be null");
        }

        synchronized (lock) {
            result = gtk_button_new_from_stock(stockId);

            return result;
        }
    }

    private static native final long gtk_button_new_from_stock(String stockId);

    static final long createButtonWithLabel(String label) {
        long result;

        if (label == null) {
            throw new IllegalArgumentException("label can't be null");
        }

        synchronized (lock) {
            result = gtk_button_new_with_label(label);

            return result;
        }
    }

    private static native final long gtk_button_new_with_label(String label);

    static final long createButtonWithMnemonic(String label) {
        long result;

        if (label == null) {
            throw new IllegalArgumentException("label can't be null");
        }

        synchronized (lock) {
            result = gtk_button_new_with_mnemonic(label);

            return result;
        }
    }

    private static native final long gtk_button_new_with_mnemonic(String label);

    static final void clicked(Button self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_button_clicked(pointerOf(self));
        }
    }

    private static native final void gtk_button_clicked(long self);

    static final void enter(Button self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_button_enter(pointerOf(self));
        }
    }

    private static native final void gtk_button_enter(long self);

    static final void getAlignment(Button self, float[] xalign, float[] yalign) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_button_get_alignment(pointerOf(self), xalign, yalign);
        }
    }

    private static native final void gtk_button_get_alignment(long self, float[] xalign, float[] yalign);

    static final boolean getAlwaysShowImage(Button self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_button_get_always_show_image(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_button_get_always_show_image(long self);

    static final Window getEventWindow(Button self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_button_get_event_window(pointerOf(self));

            return (Window) objectFor(result);
        }
    }

    private static native final long gtk_button_get_event_window(long self);

    static final boolean getFocusOnClick(Button self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_button_get_focus_on_click(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_button_get_focus_on_click(long self);

    static final Widget getImage(Button self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_button_get_image(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_button_get_image(long self);

    static final PositionType getImagePosition(Button self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_button_get_image_position(pointerOf(self));

            return (PositionType) enumFor(PositionType.class, result);
        }
    }

    private static native final int gtk_button_get_image_position(long self);

    static final String getLabel(Button self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_button_get_label(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_button_get_label(long self);

    static final ReliefStyle getRelief(Button self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_button_get_relief(pointerOf(self));

            return (ReliefStyle) enumFor(ReliefStyle.class, result);
        }
    }

    private static native final int gtk_button_get_relief(long self);

    static final boolean getUseStock(Button self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_button_get_use_stock(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_button_get_use_stock(long self);

    static final boolean getUseUnderline(Button self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_button_get_use_underline(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_button_get_use_underline(long self);

    static final void leave(Button self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_button_leave(pointerOf(self));
        }
    }

    private static native final void gtk_button_leave(long self);

    static final void pressed(Button self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_button_pressed(pointerOf(self));
        }
    }

    private static native final void gtk_button_pressed(long self);

    static final void released(Button self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_button_released(pointerOf(self));
        }
    }

    private static native final void gtk_button_released(long self);

    static final void setAlignment(Button self, float xalign, float yalign) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_button_set_alignment(pointerOf(self), xalign, yalign);
        }
    }

    private static native final void gtk_button_set_alignment(long self, float xalign, float yalign);

    static final void setAlwaysShowImage(Button self, boolean alwaysShow) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_button_set_always_show_image(pointerOf(self), alwaysShow);
        }
    }

    private static native final void gtk_button_set_always_show_image(long self, boolean alwaysShow);

    static final void setFocusOnClick(Button self, boolean focusOnClick) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_button_set_focus_on_click(pointerOf(self), focusOnClick);
        }
    }

    private static native final void gtk_button_set_focus_on_click(long self, boolean focusOnClick);

    static final void setImage(Button self, Widget image) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_button_set_image(pointerOf(self), pointerOf(image));
        }
    }

    private static native final void gtk_button_set_image(long self, long image);

    static final void setImagePosition(Button self, PositionType position) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (position == null) {
            throw new IllegalArgumentException("position can't be null");
        }

        synchronized (lock) {
            gtk_button_set_image_position(pointerOf(self), numOf(position));
        }
    }

    private static native final void gtk_button_set_image_position(long self, int position);

    static final void setLabel(Button self, String label) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (label == null) {
            throw new IllegalArgumentException("label can't be null");
        }

        synchronized (lock) {
            gtk_button_set_label(pointerOf(self), label);
        }
    }

    private static native final void gtk_button_set_label(long self, String label);

    static final void setRelief(Button self, ReliefStyle relief) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (relief == null) {
            throw new IllegalArgumentException("relief can't be null");
        }

        synchronized (lock) {
            gtk_button_set_relief(pointerOf(self), numOf(relief));
        }
    }

    private static native final void gtk_button_set_relief(long self, int relief);

    static final void setUseStock(Button self, boolean useStock) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_button_set_use_stock(pointerOf(self), useStock);
        }
    }

    private static native final void gtk_button_set_use_stock(long self, boolean useStock);

    static final void setUseUnderline(Button self, boolean useUnderline) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_button_set_use_underline(pointerOf(self), useUnderline);
        }
    }

    private static native final void gtk_button_set_use_underline(long self, boolean useUnderline);

    interface ActivateSignal extends Signal
    {
        void onActivate(Button source);
    }

    static final void connect(Button self, GtkButton.ActivateSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkButton.class, "activate", after);
    }

    protected static final void receiveActivate(Signal handler, long source) {
        ((GtkButton.ActivateSignal) handler).onActivate((Button) objectFor(source));
    }

    interface ClickedSignal extends Signal
    {
        void onClicked(Button source);
    }

    static final void connect(Button self, GtkButton.ClickedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkButton.class, "clicked", after);
    }

    protected static final void receiveClicked(Signal handler, long source) {
        ((GtkButton.ClickedSignal) handler).onClicked((Button) objectFor(source));
    }

    interface EnterSignal extends Signal
    {
        void onEnter(Button source);
    }

    static final void connect(Button self, GtkButton.EnterSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkButton.class, "enter", after);
    }

    protected static final void receiveEnter(Signal handler, long source) {
        ((GtkButton.EnterSignal) handler).onEnter((Button) objectFor(source));
    }

    interface LeaveSignal extends Signal
    {
        void onLeave(Button source);
    }

    static final void connect(Button self, GtkButton.LeaveSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkButton.class, "leave", after);
    }

    protected static final void receiveLeave(Signal handler, long source) {
        ((GtkButton.LeaveSignal) handler).onLeave((Button) objectFor(source));
    }

    interface PressedSignal extends Signal
    {
        void onPressed(Button source);
    }

    static final void connect(Button self, GtkButton.PressedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkButton.class, "pressed", after);
    }

    protected static final void receivePressed(Signal handler, long source) {
        ((GtkButton.PressedSignal) handler).onPressed((Button) objectFor(source));
    }

    interface ReleasedSignal extends Signal
    {
        void onReleased(Button source);
    }

    static final void connect(Button self, GtkButton.ReleasedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkButton.class, "released", after);
    }

    protected static final void receiveReleased(Signal handler, long source) {
        ((GtkButton.ReleasedSignal) handler).onReleased((Button) objectFor(source));
    }
}

