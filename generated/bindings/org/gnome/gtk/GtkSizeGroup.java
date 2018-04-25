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

import org.gnome.gtk.Plumbing;
import org.gnome.gtk.SizeGroup;
import org.gnome.gtk.SizeGroupMode;
import org.gnome.gtk.Widget;

final class GtkSizeGroup extends Plumbing
{
    private GtkSizeGroup() {}

    static final long createSizeGroup(SizeGroupMode mode) {
        long result;

        if (mode == null) {
            throw new IllegalArgumentException("mode can't be null");
        }

        synchronized (lock) {
            result = gtk_size_group_new(numOf(mode));

            return result;
        }
    }

    private static native final long gtk_size_group_new(int mode);

    static final void addWidget(SizeGroup self, Widget widget) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (widget == null) {
            throw new IllegalArgumentException("widget can't be null");
        }

        synchronized (lock) {
            gtk_size_group_add_widget(pointerOf(self), pointerOf(widget));
        }
    }

    private static native final void gtk_size_group_add_widget(long self, long widget);

    static final boolean getIgnoreHidden(SizeGroup self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_size_group_get_ignore_hidden(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_size_group_get_ignore_hidden(long self);

    static final SizeGroupMode getMode(SizeGroup self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_size_group_get_mode(pointerOf(self));

            return (SizeGroupMode) enumFor(SizeGroupMode.class, result);
        }
    }

    private static native final int gtk_size_group_get_mode(long self);

    static final Widget[] getWidgets(SizeGroup self) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_size_group_get_widgets(pointerOf(self));

            return (Widget[]) objectArrayFor(result, new Widget[result.length]);
        }
    }

    private static native final long[] gtk_size_group_get_widgets(long self);

    static final void removeWidget(SizeGroup self, Widget widget) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (widget == null) {
            throw new IllegalArgumentException("widget can't be null");
        }

        synchronized (lock) {
            gtk_size_group_remove_widget(pointerOf(self), pointerOf(widget));
        }
    }

    private static native final void gtk_size_group_remove_widget(long self, long widget);

    static final void setIgnoreHidden(SizeGroup self, boolean ignoreHidden) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_size_group_set_ignore_hidden(pointerOf(self), ignoreHidden);
        }
    }

    private static native final void gtk_size_group_set_ignore_hidden(long self, boolean ignoreHidden);

    static final void setMode(SizeGroup self, SizeGroupMode mode) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (mode == null) {
            throw new IllegalArgumentException("mode can't be null");
        }

        synchronized (lock) {
            gtk_size_group_set_mode(pointerOf(self), numOf(mode));
        }
    }

    private static native final void gtk_size_group_set_mode(long self, int mode);
}

