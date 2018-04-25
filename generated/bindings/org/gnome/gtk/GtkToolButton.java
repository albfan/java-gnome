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
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.ToolButton;
import org.gnome.gtk.Widget;

final class GtkToolButton extends Plumbing
{
    private GtkToolButton() {}

    static final long createToolButton(Widget iconWidget, String label) {
        long result;

        synchronized (lock) {
            result = gtk_tool_button_new(pointerOf(iconWidget), label);

            return result;
        }
    }

    private static native final long gtk_tool_button_new(long iconWidget, String label);

    static final long createToolButtonFromStock(String stockId) {
        long result;

        if (stockId == null) {
            throw new IllegalArgumentException("stockId can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_button_new_from_stock(stockId);

            return result;
        }
    }

    private static native final long gtk_tool_button_new_from_stock(String stockId);

    static final String getIconName(ToolButton self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_button_get_icon_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_tool_button_get_icon_name(long self);

    static final Widget getIconWidget(ToolButton self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_button_get_icon_widget(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_tool_button_get_icon_widget(long self);

    static final String getLabel(ToolButton self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_button_get_label(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_tool_button_get_label(long self);

    static final Widget getLabelWidget(ToolButton self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_button_get_label_widget(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_tool_button_get_label_widget(long self);

    static final String getStockId(ToolButton self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_button_get_stock_id(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_tool_button_get_stock_id(long self);

    static final boolean getUseUnderline(ToolButton self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_tool_button_get_use_underline(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_tool_button_get_use_underline(long self);

    static final void setIconName(ToolButton self, String iconName) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tool_button_set_icon_name(pointerOf(self), iconName);
        }
    }

    private static native final void gtk_tool_button_set_icon_name(long self, String iconName);

    static final void setIconWidget(ToolButton self, Widget iconWidget) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tool_button_set_icon_widget(pointerOf(self), pointerOf(iconWidget));
        }
    }

    private static native final void gtk_tool_button_set_icon_widget(long self, long iconWidget);

    static final void setLabel(ToolButton self, String label) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tool_button_set_label(pointerOf(self), label);
        }
    }

    private static native final void gtk_tool_button_set_label(long self, String label);

    static final void setLabelWidget(ToolButton self, Widget labelWidget) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tool_button_set_label_widget(pointerOf(self), pointerOf(labelWidget));
        }
    }

    private static native final void gtk_tool_button_set_label_widget(long self, long labelWidget);

    static final void setStockId(ToolButton self, String stockId) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tool_button_set_stock_id(pointerOf(self), stockId);
        }
    }

    private static native final void gtk_tool_button_set_stock_id(long self, String stockId);

    static final void setUseUnderline(ToolButton self, boolean useUnderline) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_tool_button_set_use_underline(pointerOf(self), useUnderline);
        }
    }

    private static native final void gtk_tool_button_set_use_underline(long self, boolean useUnderline);

    interface ClickedSignal extends Signal
    {
        void onClicked(ToolButton source);
    }

    static final void connect(ToolButton self, GtkToolButton.ClickedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkToolButton.class, "clicked", after);
    }

    protected static final void receiveClicked(Signal handler, long source) {
        ((GtkToolButton.ClickedSignal) handler).onClicked((ToolButton) objectFor(source));
    }
}

