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

import org.freedesktop.bindings.BlacklistedMethodError;
import org.freedesktop.bindings.FIXME;
import org.gnome.atk.Plumbing;
import org.gnome.atk.StreamableContent;
import org.gnome.glib.Object;
import org.gnome.glib.Signal;

final class AtkStreamableContent extends Plumbing
{
    private AtkStreamableContent() {}

    static final String getMimeType(StreamableContent self, int i) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_streamable_content_get_mime_type(pointerOf((Object) self), i);

            return result;
        }
    }

    private static native final String atk_streamable_content_get_mime_type(long self, int i);

    static final int getNMimeTypes(StreamableContent self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = atk_streamable_content_get_n_mime_types(pointerOf((Object) self));

            return result;
        }
    }

    private static native final int atk_streamable_content_get_n_mime_types(long self);

    @SuppressWarnings("unused")
    static final FIXME getStream(StreamableContent self, String mimeType) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GIOChannel*");
    }

    static final String getUri(StreamableContent self, String mimeType) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (mimeType == null) {
            throw new IllegalArgumentException("mimeType can't be null");
        }

        synchronized (lock) {
            result = atk_streamable_content_get_uri(pointerOf((Object) self), mimeType);

            return result;
        }
    }

    private static native final String atk_streamable_content_get_uri(long self, String mimeType);

    interface GetMimeTypeSignal extends Signal
    {
        String onGetMimeType(StreamableContent source, int i);
    }

    static final void connect(StreamableContent self, AtkStreamableContent.GetMimeTypeSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkStreamableContent.class, "get-mime-type", after);
    }

    protected static final String receiveGetMimeType(Signal handler, long source, int i) {
        String result;

        result = ((AtkStreamableContent.GetMimeTypeSignal) handler).onGetMimeType((StreamableContent) objectFor(source), i);

        return result;
    }

    interface GetNMimeTypesSignal extends Signal
    {
        int onGetNMimeTypes(StreamableContent source);
    }

    static final void connect(StreamableContent self, AtkStreamableContent.GetNMimeTypesSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkStreamableContent.class, "get-n-mime-types", after);
    }

    protected static final int receiveGetNMimeTypes(Signal handler, long source) {
        int result;

        result = ((AtkStreamableContent.GetNMimeTypesSignal) handler).onGetNMimeTypes((StreamableContent) objectFor(source));

        return result;
    }

    interface GetStreamSignal extends Signal
    {
        FIXME onGetStream(StreamableContent source, String mimeType);
    }

    static final void connect(StreamableContent self, AtkStreamableContent.GetStreamSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkStreamableContent.class, "get-stream", after);
    }

    protected static final java.lang.Object receiveGetStream(Signal handler, long source, String mimeType) {
        FIXME result;

        result = ((AtkStreamableContent.GetStreamSignal) handler).onGetStream((StreamableContent) objectFor(source), mimeType);

        return result;
    }

    interface GetUriSignal extends Signal
    {
        String onGetUri(StreamableContent source, String mimeType);
    }

    static final void connect(StreamableContent self, AtkStreamableContent.GetUriSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, AtkStreamableContent.class, "get-uri", after);
    }

    protected static final String receiveGetUri(Signal handler, long source, String mimeType) {
        String result;

        result = ((AtkStreamableContent.GetUriSignal) handler).onGetUri((StreamableContent) objectFor(source), mimeType);

        return result;
    }
}

