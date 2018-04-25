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
package org.gnome.gdk;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.freedesktop.bindings.BlacklistedMethodError;
import org.freedesktop.bindings.FIXME;
import org.gnome.gdk.Pixbuf;
import org.gnome.gdk.PixbufAnimation;
import org.gnome.gdk.PixbufLoader;
import org.gnome.gdk.Plumbing;
import org.gnome.glib.GlibException;
import org.gnome.glib.Signal;

final class GdkPixbufLoader extends Plumbing
{
    private GdkPixbufLoader() {}

    static final long createPixbufLoader() {
        long result;

        synchronized (lock) {
            result = gdk_pixbuf_loader_new();

            return result;
        }
    }

    private static native final long gdk_pixbuf_loader_new();

    static final long createPixbufLoaderWithMimeType(String mimeType) throws GlibException {
        long result;

        if (mimeType == null) {
            throw new IllegalArgumentException("mimeType can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_loader_new_with_mime_type(mimeType);

            return result;
        }
    }

    private static native final long gdk_pixbuf_loader_new_with_mime_type(String mimeType) throws GlibException;

    static final long createPixbufLoaderWithType(String imageType) throws GlibException {
        long result;

        if (imageType == null) {
            throw new IllegalArgumentException("imageType can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_loader_new_with_type(imageType);

            return result;
        }
    }

    private static native final long gdk_pixbuf_loader_new_with_type(String imageType) throws GlibException;

    static final boolean close(PixbufLoader self) throws GlibException {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_loader_close(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_pixbuf_loader_close(long self) throws GlibException;

    static final PixbufAnimation getAnimation(PixbufLoader self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_loader_get_animation(pointerOf(self));

            return (PixbufAnimation) objectFor(result);
        }
    }

    private static native final long gdk_pixbuf_loader_get_animation(long self);

    @SuppressWarnings("unused")
    static final FIXME getFormat(PixbufLoader self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkPixbufFormat*");
    }

    static final Pixbuf getPixbuf(PixbufLoader self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_loader_get_pixbuf(pointerOf(self));

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long gdk_pixbuf_loader_get_pixbuf(long self);

    static final void setSize(PixbufLoader self, int width, int height) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_pixbuf_loader_set_size(pointerOf(self), width, height);
        }
    }

    private static native final void gdk_pixbuf_loader_set_size(long self, int width, int height);

    @SuppressWarnings("unused")
    static final boolean write(PixbufLoader self, FIXME buf, long count) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("guchar*");
    }

    @SuppressWarnings("unused")
    static final boolean writeBytes(PixbufLoader self, FIXME buffer) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GBytes*");
    }

    interface AreaPreparedSignal extends Signal
    {
        void onAreaPrepared(PixbufLoader source);
    }

    static final void connect(PixbufLoader self, GdkPixbufLoader.AreaPreparedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GdkPixbufLoader.class, "area-prepared", after);
    }

    protected static final void receiveAreaPrepared(Signal handler, long source) {
        ((GdkPixbufLoader.AreaPreparedSignal) handler).onAreaPrepared((PixbufLoader) objectFor(source));
    }

    interface AreaUpdatedSignal extends Signal
    {
        void onAreaUpdated(PixbufLoader source, int x, int y, int width, int height);
    }

    static final void connect(PixbufLoader self, GdkPixbufLoader.AreaUpdatedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GdkPixbufLoader.class, "area-updated", after);
    }

    protected static final void receiveAreaUpdated(Signal handler, long source, int x, int y, int width, int height) {
        ((GdkPixbufLoader.AreaUpdatedSignal) handler).onAreaUpdated((PixbufLoader) objectFor(source), x, y, width, height);
    }

    interface ClosedSignal extends Signal
    {
        void onClosed(PixbufLoader source);
    }

    static final void connect(PixbufLoader self, GdkPixbufLoader.ClosedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GdkPixbufLoader.class, "closed", after);
    }

    protected static final void receiveClosed(Signal handler, long source) {
        ((GdkPixbufLoader.ClosedSignal) handler).onClosed((PixbufLoader) objectFor(source));
    }

    interface SizePreparedSignal extends Signal
    {
        void onSizePrepared(PixbufLoader source, int width, int height);
    }

    static final void connect(PixbufLoader self, GdkPixbufLoader.SizePreparedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GdkPixbufLoader.class, "size-prepared", after);
    }

    protected static final void receiveSizePrepared(Signal handler, long source, int width, int height) {
        ((GdkPixbufLoader.SizePreparedSignal) handler).onSizePrepared((PixbufLoader) objectFor(source), width, height);
    }
}

