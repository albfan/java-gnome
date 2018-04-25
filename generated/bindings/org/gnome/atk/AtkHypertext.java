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
package org.gnome.atk;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.gnome.atk.Hyperlink;
import org.gnome.atk.Hypertext;
import org.gnome.atk.Plumbing;
import org.gnome.glib.Object;
import org.gnome.glib.Signal;

final class AtkHypertext extends Plumbing
{
    private AtkHypertext() {}

    static final Hyperlink getLink(Hypertext self, int linkIndex) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_hypertext_get_link(pointerOf((Object) self), linkIndex);

            return (Hyperlink) objectFor(result);
        }
    }

    private static native final long atk_hypertext_get_link(long self, int linkIndex);

    static final int getLinkIndex(Hypertext self, int charIndex) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_hypertext_get_link_index(pointerOf((Object) self), charIndex);

            return result;
        }
    }

    private static native final int atk_hypertext_get_link_index(long self, int charIndex);

    static final int getNLinks(Hypertext self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_hypertext_get_n_links(pointerOf((Object) self));

            return result;
        }
    }

    private static native final int atk_hypertext_get_n_links(long self);

    interface GetLinkSignal extends Signal
    {
        Hyperlink onGetLink(Hypertext source, int linkIndex);
    }

    static final void connect(Hypertext self, AtkHypertext.GetLinkSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkHypertext.class, "get-link", after);
    }

    protected static final long receiveGetLink(Signal handler, long source, int linkIndex) {
        Hyperlink result;

        result = ((AtkHypertext.GetLinkSignal) handler).onGetLink((Hypertext) objectFor(source), linkIndex);

        return pointerOf(result);
    }

    interface GetLinkIndexSignal extends Signal
    {
        int onGetLinkIndex(Hypertext source, int charIndex);
    }

    static final void connect(Hypertext self, AtkHypertext.GetLinkIndexSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkHypertext.class, "get-link-index", after);
    }

    protected static final int receiveGetLinkIndex(Signal handler, long source, int charIndex) {
        int result;

        result = ((AtkHypertext.GetLinkIndexSignal) handler).onGetLinkIndex((Hypertext) objectFor(source), charIndex);

        return result;
    }

    interface GetNLinksSignal extends Signal
    {
        int onGetNLinks(Hypertext source);
    }

    static final void connect(Hypertext self, AtkHypertext.GetNLinksSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkHypertext.class, "get-n-links", after);
    }

    protected static final int receiveGetNLinks(Signal handler, long source) {
        int result;

        result = ((AtkHypertext.GetNLinksSignal) handler).onGetNLinks((Hypertext) objectFor(source));

        return result;
    }

    interface LinkSelectedSignal extends Signal
    {
        void onLinkSelected(Hypertext source, int linkIndex);
    }

    static final void connect(Hypertext self, AtkHypertext.LinkSelectedSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkHypertext.class, "link-selected", after);
    }

    protected static final void receiveLinkSelected(Signal handler, long source, int linkIndex) {
        ((AtkHypertext.LinkSelectedSignal) handler).onLinkSelected((Hypertext) objectFor(source), linkIndex);
    }
}

