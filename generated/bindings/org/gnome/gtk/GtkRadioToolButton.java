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
import org.gnome.gtk.RadioButton;
import org.gnome.gtk.RadioToolButton;

final class GtkRadioToolButton extends Plumbing
{
    private GtkRadioToolButton() {}

    static final long createRadioToolButton(RadioToolButton[] group) {
        long result;
        long[] _group;

        _group = pointersOf(group);

        synchronized (lock) {
            result = gtk_radio_tool_button_new(_group);
            fillObjectArray(group, _group);

            return result;
        }
    }

    private static native final long gtk_radio_tool_button_new(long[] group);

    static final long createRadioToolButtonFromStock(RadioToolButton[] group, String stockId) {
        long result;
        long[] _group;

        if (stockId == null) {
            throw new IllegalArgumentException("stockId can't be null");
        }

        _group = pointersOf(group);

        synchronized (lock) {
            result = gtk_radio_tool_button_new_from_stock(_group, stockId);
            fillObjectArray(group, _group);

            return result;
        }
    }

    private static native final long gtk_radio_tool_button_new_from_stock(long[] group, String stockId);

    static final long createRadioToolButtonFromWidget(RadioToolButton group) {
        long result;

        synchronized (lock) {
            result = gtk_radio_tool_button_new_from_widget(pointerOf(group));

            return result;
        }
    }

    private static native final long gtk_radio_tool_button_new_from_widget(long group);

    static final long createRadioToolButtonWithStockFromWidget(RadioToolButton group, String stockId) {
        long result;

        if (stockId == null) {
            throw new IllegalArgumentException("stockId can't be null");
        }

        synchronized (lock) {
            result = gtk_radio_tool_button_new_with_stock_from_widget(pointerOf(group), stockId);

            return result;
        }
    }

    private static native final long gtk_radio_tool_button_new_with_stock_from_widget(long group, String stockId);

    static final RadioButton[] getGroup(RadioToolButton self) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_radio_tool_button_get_group(pointerOf(self));

            return (RadioButton[]) objectArrayFor(result, new RadioButton[result.length]);
        }
    }

    private static native final long[] gtk_radio_tool_button_get_group(long self);

    static final void setGroup(RadioToolButton self, RadioButton[] group) {
        long[] _group;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _group = pointersOf(group);

        synchronized (lock) {
            gtk_radio_tool_button_set_group(pointerOf(self), _group);
            fillObjectArray(group, _group);
        }
    }

    private static native final void gtk_radio_tool_button_set_group(long self, long[] group);
}

