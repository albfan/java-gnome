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
import org.gnome.gtk.RadioAction;

final class GtkRadioAction extends Plumbing
{
    private GtkRadioAction() {}

    static final long createRadioAction(String name, String label, String tooltip, String stockId, int value) {
        long result;

        if (name == null) {
            throw new IllegalArgumentException("name can't be null");
        }

        synchronized (lock) {
            result = gtk_radio_action_new(name, label, tooltip, stockId, value);

            return result;
        }
    }

    private static native final long gtk_radio_action_new(String name, String label, String tooltip, String stockId, int value);

    static final int getCurrentValue(RadioAction self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_radio_action_get_current_value(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_radio_action_get_current_value(long self);

    static final RadioAction[] getGroup(RadioAction self) {
        long[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_radio_action_get_group(pointerOf(self));

            return (RadioAction[]) objectArrayFor(result, new RadioAction[result.length]);
        }
    }

    private static native final long[] gtk_radio_action_get_group(long self);

    static final void joinGroup(RadioAction self, RadioAction groupSource) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_radio_action_join_group(pointerOf(self), pointerOf(groupSource));
        }
    }

    private static native final void gtk_radio_action_join_group(long self, long groupSource);

    static final void setCurrentValue(RadioAction self, int currentValue) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_radio_action_set_current_value(pointerOf(self), currentValue);
        }
    }

    private static native final void gtk_radio_action_set_current_value(long self, int currentValue);

    static final void setGroup(RadioAction self, RadioAction[] group) {
        long[] _group;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        _group = pointersOf(group);

        synchronized (lock) {
            gtk_radio_action_set_group(pointerOf(self), _group);
            fillObjectArray(group, _group);
        }
    }

    private static native final void gtk_radio_action_set_group(long self, long[] group);

    interface ChangedSignal extends Signal
    {
        void onChanged(RadioAction source, RadioAction current);
    }

    static final void connect(RadioAction self, GtkRadioAction.ChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkRadioAction.class, "changed", after);
    }

    protected static final void receiveChanged(Signal handler, long source, long current) {
        ((GtkRadioAction.ChangedSignal) handler).onChanged((RadioAction) objectFor(source), (RadioAction) objectFor(current));
    }
}

