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

import org.gnome.gdk.ModifierType;
import org.gnome.glib.Signal;
import org.gnome.gtk.Plumbing;

final class GtkCellRendererAccel extends Plumbing
{
    private GtkCellRendererAccel() {}

    static final long createCellRendererAccel() {
        long result;

        synchronized (lock) {
            result = gtk_cell_renderer_accel_new();

            return result;
        }
    }

    private static native final long gtk_cell_renderer_accel_new();

    interface AccelClearedSignal extends Signal
    {
        void onAccelCleared(CellRendererAccel source, String pathString);
    }

    static final void connect(CellRendererAccel self, GtkCellRendererAccel.AccelClearedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkCellRendererAccel.class, "accel-cleared", after);
    }

    protected static final void receiveAccelCleared(Signal handler, long source, String pathString) {
        ((GtkCellRendererAccel.AccelClearedSignal) handler).onAccelCleared((CellRendererAccel) objectFor(source), pathString);
    }

    interface AccelEditedSignal extends Signal
    {
        void onAccelEdited(CellRendererAccel source, String pathString, int accelKey, ModifierType accelMods, int hardwareKeycode);
    }

    static final void connect(CellRendererAccel self, GtkCellRendererAccel.AccelEditedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkCellRendererAccel.class, "accel-edited", after);
    }

    protected static final void receiveAccelEdited(Signal handler, long source, String pathString, int accelKey, int accelMods, int hardwareKeycode) {
        ((GtkCellRendererAccel.AccelEditedSignal) handler).onAccelEdited((CellRendererAccel) objectFor(source), pathString, accelKey, (ModifierType) flagFor(ModifierType.class, accelMods), hardwareKeycode);
    }
}

