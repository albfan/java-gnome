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
import org.gnome.gtk.Expander;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.Widget;

final class GtkExpander extends Plumbing
{
    private GtkExpander() {}

    static final long createExpander(String label) {
        long result;

        synchronized (lock) {
            result = gtk_expander_new(label);

            return result;
        }
    }

    private static native final long gtk_expander_new(String label);

    static final long createExpanderWithMnemonic(String label) {
        long result;

        synchronized (lock) {
            result = gtk_expander_new_with_mnemonic(label);

            return result;
        }
    }

    private static native final long gtk_expander_new_with_mnemonic(String label);

    static final boolean getExpanded(Expander self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_expander_get_expanded(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_expander_get_expanded(long self);

    static final String getLabel(Expander self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_expander_get_label(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_expander_get_label(long self);

    static final boolean getLabelFill(Expander self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_expander_get_label_fill(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_expander_get_label_fill(long self);

    static final Widget getLabelWidget(Expander self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_expander_get_label_widget(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_expander_get_label_widget(long self);

    static final boolean getResizeToplevel(Expander self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_expander_get_resize_toplevel(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_expander_get_resize_toplevel(long self);

    static final int getSpacing(Expander self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_expander_get_spacing(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_expander_get_spacing(long self);

    static final boolean getUseMarkup(Expander self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_expander_get_use_markup(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_expander_get_use_markup(long self);

    static final boolean getUseUnderline(Expander self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_expander_get_use_underline(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_expander_get_use_underline(long self);

    static final void setExpanded(Expander self, boolean expanded) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_expander_set_expanded(pointerOf(self), expanded);
        }
    }

    private static native final void gtk_expander_set_expanded(long self, boolean expanded);

    static final void setLabel(Expander self, String label) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_expander_set_label(pointerOf(self), label);
        }
    }

    private static native final void gtk_expander_set_label(long self, String label);

    static final void setLabelFill(Expander self, boolean labelFill) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_expander_set_label_fill(pointerOf(self), labelFill);
        }
    }

    private static native final void gtk_expander_set_label_fill(long self, boolean labelFill);

    static final void setLabelWidget(Expander self, Widget labelWidget) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_expander_set_label_widget(pointerOf(self), pointerOf(labelWidget));
        }
    }

    private static native final void gtk_expander_set_label_widget(long self, long labelWidget);

    static final void setResizeToplevel(Expander self, boolean resizeToplevel) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_expander_set_resize_toplevel(pointerOf(self), resizeToplevel);
        }
    }

    private static native final void gtk_expander_set_resize_toplevel(long self, boolean resizeToplevel);

    static final void setSpacing(Expander self, int spacing) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_expander_set_spacing(pointerOf(self), spacing);
        }
    }

    private static native final void gtk_expander_set_spacing(long self, int spacing);

    static final void setUseMarkup(Expander self, boolean useMarkup) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_expander_set_use_markup(pointerOf(self), useMarkup);
        }
    }

    private static native final void gtk_expander_set_use_markup(long self, boolean useMarkup);

    static final void setUseUnderline(Expander self, boolean useUnderline) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_expander_set_use_underline(pointerOf(self), useUnderline);
        }
    }

    private static native final void gtk_expander_set_use_underline(long self, boolean useUnderline);

    interface ActivateSignal extends Signal
    {
        void onActivate(Expander source);
    }

    static final void connect(Expander self, GtkExpander.ActivateSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkExpander.class, "activate", after);
    }

    protected static final void receiveActivate(Signal handler, long source) {
        ((GtkExpander.ActivateSignal) handler).onActivate((Expander) objectFor(source));
    }
}

