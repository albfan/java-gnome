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

import org.gnome.gdk.Keyval;
import org.gnome.gdk.ModifierType;
import org.gnome.gdk.MouseButton;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.Widget;

final class GtkTest extends Plumbing
{
    private GtkTest() {}

    static final boolean widgetClick(Widget self, MouseButton button, ModifierType modifiers) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (button == null) {
            throw new IllegalArgumentException("button can't be null");
        }

        if (modifiers == null) {
            throw new IllegalArgumentException("modifiers can't be null");
        }

        synchronized (lock) {
            result = gtk_test_widget_click(pointerOf(self), numOf(button), numOf(modifiers));

            return result;
        }
    }

    private static native final boolean gtk_test_widget_click(long self, int button, int modifiers);

    static final boolean widgetSendKey(Widget self, Keyval keyval, ModifierType modifiers) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (keyval == null) {
            throw new IllegalArgumentException("keyval can't be null");
        }

        if (modifiers == null) {
            throw new IllegalArgumentException("modifiers can't be null");
        }

        synchronized (lock) {
            result = gtk_test_widget_send_key(pointerOf(self), numOf(keyval), numOf(modifiers));

            return result;
        }
    }

    private static native final boolean gtk_test_widget_send_key(long self, int keyval, int modifiers);
}

