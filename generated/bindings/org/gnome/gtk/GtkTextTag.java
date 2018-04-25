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

import org.gnome.gdk.Event;
import org.gnome.glib.Object;
import org.gnome.glib.Signal;
import org.gnome.gtk.Plumbing;
import org.gnome.gtk.TextIter;
import org.gnome.gtk.TextTag;

final class GtkTextTag extends Plumbing
{
    private GtkTextTag() {}

    static final long createTextTag(String name) {
        long result;

        synchronized (lock) {
            result = gtk_text_tag_new(name);

            return result;
        }
    }

    private static native final long gtk_text_tag_new(String name);

    static final void changed(TextTag self, boolean sizeChanged) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_tag_changed(pointerOf(self), sizeChanged);
        }
    }

    private static native final void gtk_text_tag_changed(long self, boolean sizeChanged);

    static final boolean event(TextTag self, Object eventObject, Event event, TextIter iter) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (eventObject == null) {
            throw new IllegalArgumentException("eventObject can't be null");
        }

        if (event == null) {
            throw new IllegalArgumentException("event can't be null");
        }

        if (iter == null) {
            throw new IllegalArgumentException("iter can't be null");
        }

        synchronized (lock) {
            result = gtk_text_tag_event(pointerOf(self), pointerOf(eventObject), pointerOf(event), pointerOf(iter));

            return result;
        }
    }

    private static native final boolean gtk_text_tag_event(long self, long eventObject, long event, long iter);

    static final int getPriority(TextTag self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_text_tag_get_priority(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_text_tag_get_priority(long self);

    static final void setPriority(TextTag self, int priority) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_text_tag_set_priority(pointerOf(self), priority);
        }
    }

    private static native final void gtk_text_tag_set_priority(long self, int priority);

    interface EventSignal extends Signal
    {
        boolean onEvent(TextTag source, Object eventObject, Event event, TextIter iter);
    }

    static final void connect(TextTag self, GtkTextTag.EventSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkTextTag.class, "event", after);
    }

    protected static final boolean receiveEvent(Signal handler, long source, long eventObject, long event, long iter) {
        boolean result;

        result = ((GtkTextTag.EventSignal) handler).onEvent((TextTag) objectFor(source), (Object) objectFor(eventObject), (Event) boxedFor(Event.class, event), (TextIter) boxedFor(TextIter.class, iter));

        return result;
    }
}

