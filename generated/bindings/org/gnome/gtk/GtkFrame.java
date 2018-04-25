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
import org.gnome.gtk.Allocation;
import org.gnome.gtk.Frame;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.ShadowType;
import org.gnome.gtk.Widget;

final class GtkFrame extends Plumbing
{
    private GtkFrame() {}

    static final long createFrame(String label) {
        long result;

        synchronized (lock) {
            result = gtk_frame_new(label);

            return result;
        }
    }

    private static native final long gtk_frame_new(String label);

    static final String getLabel(Frame self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_frame_get_label(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_frame_get_label(long self);

    static final void getLabelAlign(Frame self, float[] xalign, float[] yalign) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_frame_get_label_align(pointerOf(self), xalign, yalign);
        }
    }

    private static native final void gtk_frame_get_label_align(long self, float[] xalign, float[] yalign);

    static final Widget getLabelWidget(Frame self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_frame_get_label_widget(pointerOf(self));

            return (Widget) objectFor(result);
        }
    }

    private static native final long gtk_frame_get_label_widget(long self);

    static final ShadowType getShadowType(Frame self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_frame_get_shadow_type(pointerOf(self));

            return (ShadowType) enumFor(ShadowType.class, result);
        }
    }

    private static native final int gtk_frame_get_shadow_type(long self);

    static final void setLabel(Frame self, String label) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_frame_set_label(pointerOf(self), label);
        }
    }

    private static native final void gtk_frame_set_label(long self, String label);

    static final void setLabelAlign(Frame self, float xalign, float yalign) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_frame_set_label_align(pointerOf(self), xalign, yalign);
        }
    }

    private static native final void gtk_frame_set_label_align(long self, float xalign, float yalign);

    static final void setLabelWidget(Frame self, Widget labelWidget) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_frame_set_label_widget(pointerOf(self), pointerOf(labelWidget));
        }
    }

    private static native final void gtk_frame_set_label_widget(long self, long labelWidget);

    static final void setShadowType(Frame self, ShadowType type) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (type == null) {
            throw new IllegalArgumentException("type can't be null");
        }

        synchronized (lock) {
            gtk_frame_set_shadow_type(pointerOf(self), numOf(type));
        }
    }

    private static native final void gtk_frame_set_shadow_type(long self, int type);

    interface ComputeChildAllocationSignal extends Signal
    {
        void onComputeChildAllocation(Frame source, Allocation allocation);
    }

    static final void connect(Frame self, GtkFrame.ComputeChildAllocationSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkFrame.class, "compute-child-allocation", after);
    }

    protected static final void receiveComputeChildAllocation(Signal handler, long source, long allocation) {
        ((GtkFrame.ComputeChildAllocationSignal) handler).onComputeChildAllocation((Frame) objectFor(source), (Allocation) boxedFor(Allocation.class, allocation));
    }
}

