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
import org.gnome.atk.Object;
import org.gnome.atk.Plumbing;
import org.gnome.glib.Signal;

final class AtkHyperlink extends Plumbing
{
    private AtkHyperlink() {}

    static final int getEndIndex(Hyperlink self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_hyperlink_get_end_index(pointerOf(self));

            return result;
        }
    }

    private static native final int atk_hyperlink_get_end_index(long self);

    static final int getNAnchors(Hyperlink self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_hyperlink_get_n_anchors(pointerOf(self));

            return result;
        }
    }

    private static native final int atk_hyperlink_get_n_anchors(long self);

    static final Object getObject(Hyperlink self, int i) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_hyperlink_get_object(pointerOf(self), i);

            return (Object) objectFor(result);
        }
    }

    private static native final long atk_hyperlink_get_object(long self, int i);

    static final int getStartIndex(Hyperlink self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_hyperlink_get_start_index(pointerOf(self));

            return result;
        }
    }

    private static native final int atk_hyperlink_get_start_index(long self);

    static final String getUri(Hyperlink self, int i) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_hyperlink_get_uri(pointerOf(self), i);

            return result;
        }
    }

    private static native final String atk_hyperlink_get_uri(long self, int i);

    static final boolean isInline(Hyperlink self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_hyperlink_is_inline(pointerOf(self));

            return result;
        }
    }

    private static native final boolean atk_hyperlink_is_inline(long self);

    static final boolean isSelectedLink(Hyperlink self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_hyperlink_is_selected_link(pointerOf(self));

            return result;
        }
    }

    private static native final boolean atk_hyperlink_is_selected_link(long self);

    static final boolean isValid(Hyperlink self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_hyperlink_is_valid(pointerOf(self));

            return result;
        }
    }

    private static native final boolean atk_hyperlink_is_valid(long self);

    interface GetEndIndexSignal extends Signal
    {
        int onGetEndIndex(Hyperlink source);
    }

    static final void connect(Hyperlink self, AtkHyperlink.GetEndIndexSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkHyperlink.class, "get-end-index", after);
    }

    protected static final int receiveGetEndIndex(Signal handler, long source) {
        int result;

        result = ((AtkHyperlink.GetEndIndexSignal) handler).onGetEndIndex((Hyperlink) objectFor(source));

        return result;
    }

    interface GetNAnchorsSignal extends Signal
    {
        int onGetNAnchors(Hyperlink source);
    }

    static final void connect(Hyperlink self, AtkHyperlink.GetNAnchorsSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkHyperlink.class, "get-n-anchors", after);
    }

    protected static final int receiveGetNAnchors(Signal handler, long source) {
        int result;

        result = ((AtkHyperlink.GetNAnchorsSignal) handler).onGetNAnchors((Hyperlink) objectFor(source));

        return result;
    }

    interface GetObjectSignal extends Signal
    {
        Object onGetObject(Hyperlink source, int i);
    }

    static final void connect(Hyperlink self, AtkHyperlink.GetObjectSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkHyperlink.class, "get-object", after);
    }

    protected static final long receiveGetObject(Signal handler, long source, int i) {
        Object result;

        result = ((AtkHyperlink.GetObjectSignal) handler).onGetObject((Hyperlink) objectFor(source), i);

        return pointerOf(result);
    }

    interface GetStartIndexSignal extends Signal
    {
        int onGetStartIndex(Hyperlink source);
    }

    static final void connect(Hyperlink self, AtkHyperlink.GetStartIndexSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkHyperlink.class, "get-start-index", after);
    }

    protected static final int receiveGetStartIndex(Signal handler, long source) {
        int result;

        result = ((AtkHyperlink.GetStartIndexSignal) handler).onGetStartIndex((Hyperlink) objectFor(source));

        return result;
    }

    interface GetUriSignal extends Signal
    {
        String onGetUri(Hyperlink source, int i);
    }

    static final void connect(Hyperlink self, AtkHyperlink.GetUriSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkHyperlink.class, "get-uri", after);
    }

    protected static final String receiveGetUri(Signal handler, long source, int i) {
        String result;

        result = ((AtkHyperlink.GetUriSignal) handler).onGetUri((Hyperlink) objectFor(source), i);

        return result;
    }

    interface IsSelectedLinkSignal extends Signal
    {
        boolean onIsSelectedLink(Hyperlink source);
    }

    static final void connect(Hyperlink self, AtkHyperlink.IsSelectedLinkSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkHyperlink.class, "is-selected-link", after);
    }

    protected static final boolean receiveIsSelectedLink(Signal handler, long source) {
        boolean result;

        result = ((AtkHyperlink.IsSelectedLinkSignal) handler).onIsSelectedLink((Hyperlink) objectFor(source));

        return result;
    }

    interface IsValidSignal extends Signal
    {
        boolean onIsValid(Hyperlink source);
    }

    static final void connect(Hyperlink self, AtkHyperlink.IsValidSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkHyperlink.class, "is-valid", after);
    }

    protected static final boolean receiveIsValid(Signal handler, long source) {
        boolean result;

        result = ((AtkHyperlink.IsValidSignal) handler).onIsValid((Hyperlink) objectFor(source));

        return result;
    }

    interface LinkActivatedSignal extends Signal
    {
        void onLinkActivated(Hyperlink source);
    }

    static final void connect(Hyperlink self, AtkHyperlink.LinkActivatedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkHyperlink.class, "link-activated", after);
    }

    protected static final void receiveLinkActivated(Signal handler, long source) {
        ((AtkHyperlink.LinkActivatedSignal) handler).onLinkActivated((Hyperlink) objectFor(source));
    }

    interface LinkStateSignal extends Signal
    {
        int onLinkState(Hyperlink source);
    }

    static final void connect(Hyperlink self, AtkHyperlink.LinkStateSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, AtkHyperlink.class, "link-state", after);
    }

    protected static final int receiveLinkState(Signal handler, long source) {
        int result;

        result = ((AtkHyperlink.LinkStateSignal) handler).onLinkState((Hyperlink) objectFor(source));

        return result;
    }
}

