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
import org.gnome.gtk.RadioButton;

final class GtkRadioButton extends Plumbing
{
    private GtkRadioButton() {}

    static final long createRadioButton(RadioButton[] group) {
        long result;
        long[] _group;

        _group = pointersOf(group);

        synchronized (lock) {
            result = gtk_radio_button_new(_group);
            fillObjectArray(group, _group);

            return result;
        }
    }

    private static native final long gtk_radio_button_new(long[] group);

    static final long createRadioButtonFromWidget(RadioButton radioGroupMember) {
        long result;

        synchronized (lock) {
            result = gtk_radio_button_new_from_widget(pointerOf(radioGroupMember));

            return result;
        }
    }

    private static native final long gtk_radio_button_new_from_widget(long radioGroupMember);

    static final long createRadioButtonWithLabel(RadioButton[] group, String label) {
        long result;
        long[] _group;

        if (label == null) {
            throw new IllegalArgumentException("label can't be null");
        }

        _group = pointersOf(group);

        synchronized (lock) {
            result = gtk_radio_button_new_with_label(_group, label);
            fillObjectArray(group, _group);

            return result;
        }
    }

    private static native final long gtk_radio_button_new_with_label(long[] group, String label);

    static final long createRadioButtonWithLabelFromWidget(RadioButton radioGroupMember, String label) {
        long result;

        if (label == null) {
            throw new IllegalArgumentException("label can't be null");
        }

        synchronized (lock) {
            result = gtk_radio_button_new_with_label_from_widget(pointerOf(radioGroupMember), label);

            return result;
        }
    }

    private static native final long gtk_radio_button_new_with_label_from_widget(long radioGroupMember, String label);

    static final long createRadioButtonWithMnemonic(RadioButton[] group, String label) {
        long result;
        long[] _group;

        if (label == null) {
            throw new IllegalArgumentException("label can't be null");
        }

        _group = pointersOf(group);

        synchronized (lock) {
            result = gtk_radio_button_new_with_mnemonic(_group, label);
            fillObjectArray(group, _group);

            return result;
        }
    }

    private static native final long gtk_radio_button_new_with_mnemonic(long[] group, String label);

    static final long createRadioButtonWithMnemonicFromWidget(RadioButton radioGroupMember, String label) {
        long result;

        if (label == null) {
            throw new IllegalArgumentException("label can't be null");
        }

        synchronized (lock) {
            result = gtk_radio_button_new_with_mnemonic_from_widget(pointerOf(radioGroupMember), label);

            return result;
        }
    }

    private static native final long gtk_radio_button_new_with_mnemonic_from_widget(long radioGroupMember, String label);

    static final RadioButton[] getGroup(RadioButton self) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_radio_button_get_group(pointerOf(self));

            return (RadioButton[]) objectArrayFor(result, new RadioButton[result.length]);
        }
    }

    private static native final long[] gtk_radio_button_get_group(long self);

    static final void joinGroup(RadioButton self, RadioButton groupSource) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_radio_button_join_group(pointerOf(self), pointerOf(groupSource));
        }
    }

    private static native final void gtk_radio_button_join_group(long self, long groupSource);

    static final void setGroup(RadioButton self, RadioButton[] group) {
        long[] _group;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _group = pointersOf(group);

        synchronized (lock) {
            gtk_radio_button_set_group(pointerOf(self), _group);
            fillObjectArray(group, _group);
        }
    }

    private static native final void gtk_radio_button_set_group(long self, long[] group);

    interface GroupChangedSignal extends Signal
    {
        void onGroupChanged(RadioButton source);
    }

    static final void connect(RadioButton self, GtkRadioButton.GroupChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkRadioButton.class, "group-changed", after);
    }

    protected static final void receiveGroupChanged(Signal handler, long source) {
        ((GtkRadioButton.GroupChangedSignal) handler).onGroupChanged((RadioButton) objectFor(source));
    }
}

