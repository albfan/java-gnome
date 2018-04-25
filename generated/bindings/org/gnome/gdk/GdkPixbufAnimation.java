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
import org.gnome.gdk.PixbufAnimationIter;
import org.gnome.gdk.Plumbing;
import org.gnome.glib.GlibException;

final class GdkPixbufAnimation extends Plumbing
{
    private GdkPixbufAnimation() {}

    static final long createPixbufAnimationFromFile(String filename) throws GlibException {
        long result;

        if (filename == null) {
            throw new IllegalArgumentException("filename can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_animation_new_from_file(filename);

            return result;
        }
    }

    private static native final long gdk_pixbuf_animation_new_from_file(String filename) throws GlibException;

    static final long createPixbufAnimationFromResource(String resourcePath) throws GlibException {
        long result;

        if (resourcePath == null) {
            throw new IllegalArgumentException("resourcePath can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_animation_new_from_resource(resourcePath);

            return result;
        }
    }

    private static native final long gdk_pixbuf_animation_new_from_resource(String resourcePath) throws GlibException;

    @SuppressWarnings("unused")
    static final long createPixbufAnimationFromStream(FIXME stream, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GInputStream*");
    }

    @SuppressWarnings("unused")
    static final long createPixbufAnimationFromStreamFinish(FIXME asyncResult) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GAsyncResult*");
    }

    static final int getHeight(PixbufAnimation self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_animation_get_height(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_pixbuf_animation_get_height(long self);

    @SuppressWarnings("unused")
    static final PixbufAnimationIter getIter(PixbufAnimation self, FIXME startTime) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("const-GTimeVal*");
    }

    static final Pixbuf getStaticImage(PixbufAnimation self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_animation_get_static_image(pointerOf(self));

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long gdk_pixbuf_animation_get_static_image(long self);

    static final int getWidth(PixbufAnimation self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_animation_get_width(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_pixbuf_animation_get_width(long self);

    static final boolean isStaticImage(PixbufAnimation self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_animation_is_static_image(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_pixbuf_animation_is_static_image(long self);

    static final PixbufAnimation ref(PixbufAnimation self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_animation_ref(pointerOf(self));

            return (PixbufAnimation) objectFor(result);
        }
    }

    private static native final long gdk_pixbuf_animation_ref(long self);

    static final void unref(PixbufAnimation self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_pixbuf_animation_unref(pointerOf(self));
        }
    }

    private static native final void gdk_pixbuf_animation_unref(long self);

    @SuppressWarnings("unused")
    static final void newFromStreamAsync(FIXME stream, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GInputStream*");
    }
}

