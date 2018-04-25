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
import org.gnome.gtk.LinkButton;
import org.gnome.gtk.Plumbing;

final class GtkLinkButton extends Plumbing
{
    private GtkLinkButton() {}

    static final long createLinkButton(String uri) {
        long result;

        if (uri == null) {
            throw new IllegalArgumentException("uri can't be null");
        }

        synchronized (lock) {
            result = gtk_link_button_new(uri);

            return result;
        }
    }

    private static native final long gtk_link_button_new(String uri);

    static final long createLinkButtonWithLabel(String uri, String label) {
        long result;

        if (uri == null) {
            throw new IllegalArgumentException("uri can't be null");
        }

        synchronized (lock) {
            result = gtk_link_button_new_with_label(uri, label);

            return result;
        }
    }

    private static native final long gtk_link_button_new_with_label(String uri, String label);

    static final String getUri(LinkButton self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_link_button_get_uri(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_link_button_get_uri(long self);

    static final boolean getVisited(LinkButton self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_link_button_get_visited(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_link_button_get_visited(long self);

    static final void setUri(LinkButton self, String uri) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (uri == null) {
            throw new IllegalArgumentException("uri can't be null");
        }

        synchronized (lock) {
            gtk_link_button_set_uri(pointerOf(self), uri);
        }
    }

    private static native final void gtk_link_button_set_uri(long self, String uri);

    static final void setVisited(LinkButton self, boolean visited) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_link_button_set_visited(pointerOf(self), visited);
        }
    }

    private static native final void gtk_link_button_set_visited(long self, boolean visited);

    interface ActivateLinkSignal extends Signal
    {
        boolean onActivateLink(LinkButton source);
    }

    static final void connect(LinkButton self, GtkLinkButton.ActivateLinkSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkLinkButton.class, "activate-link", after);
    }

    protected static final boolean receiveActivateLink(Signal handler, long source) {
        boolean result;

        result = ((GtkLinkButton.ActivateLinkSignal) handler).onActivateLink((LinkButton) objectFor(source));

        return result;
    }
}

