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
package org.gnome.rsvg;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.freedesktop.bindings.BlacklistedMethodError;
import org.freedesktop.bindings.FIXME;
import org.freedesktop.cairo.Context;
import org.gnome.gdk.Pixbuf;
import org.gnome.glib.GlibException;
import org.gnome.rsvg.DimensionData;
import org.gnome.rsvg.Handle;
import org.gnome.rsvg.Plumbing;

final class RsvgHandle extends Plumbing
{
    private RsvgHandle() {}

    static final long createHandle() {
        long result;

        synchronized (lock) {
            result = rsvg_handle_new();

            return result;
        }
    }

    private static native final long rsvg_handle_new();

    @SuppressWarnings("unused")
    static final long createHandleFromData(FIXME data, long dataLen) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("guint8*");
    }

    static final long createHandleFromFile(String fileName) throws GlibException {
        long result;

        if (fileName == null) {
            throw new IllegalArgumentException("fileName can't be null");
        }

        synchronized (lock) {
            result = rsvg_handle_new_from_file(fileName);

            return result;
        }
    }

    private static native final long rsvg_handle_new_from_file(String fileName) throws GlibException;

    @SuppressWarnings("unused")
    static final long createHandleWithFlags(FIXME flags) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("RsvgHandleFlags");
    }

    static final boolean close(Handle self) throws GlibException {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = rsvg_handle_close(pointerOf(self));

            return result;
        }
    }

    private static native final boolean rsvg_handle_close(long self) throws GlibException;

    static final String getBaseUri(Handle self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = rsvg_handle_get_base_uri(pointerOf(self));

            return result;
        }
    }

    private static native final String rsvg_handle_get_base_uri(long self);

    static final void getDimensions(Handle self, DimensionData dimensionData) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            rsvg_handle_get_dimensions(pointerOf(self), pointerOf(dimensionData));
        }
    }

    private static native final void rsvg_handle_get_dimensions(long self, long dimensionData);

    static final boolean getDimensionsSub(Handle self, DimensionData dimensionData, String id) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = rsvg_handle_get_dimensions_sub(pointerOf(self), pointerOf(dimensionData), id);

            return result;
        }
    }

    private static native final boolean rsvg_handle_get_dimensions_sub(long self, long dimensionData, String id);

    static final Pixbuf getPixbuf(Handle self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = rsvg_handle_get_pixbuf(pointerOf(self));

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long rsvg_handle_get_pixbuf(long self);

    static final Pixbuf getPixbufSub(Handle self, String id) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = rsvg_handle_get_pixbuf_sub(pointerOf(self), id);

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long rsvg_handle_get_pixbuf_sub(long self, String id);

    @SuppressWarnings("unused")
    static final boolean getPositionSub(Handle self, FIXME positionData, String id) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("RsvgPositionData*");
    }

    static final boolean hasSub(Handle self, String id) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (id == null) {
            throw new IllegalArgumentException("id can't be null");
        }

        synchronized (lock) {
            result = rsvg_handle_has_sub(pointerOf(self), id);

            return result;
        }
    }

    private static native final boolean rsvg_handle_has_sub(long self, String id);

    static final void internalSetTesting(Handle self, boolean testing) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            rsvg_handle_internal_set_testing(pointerOf(self), testing);
        }
    }

    private static native final void rsvg_handle_internal_set_testing(long self, boolean testing);

    @SuppressWarnings("unused")
    static final boolean readStreamSync(Handle self, FIXME stream, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GInputStream*");
    }

    static final boolean renderCairo(Handle self, Context cr) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (cr == null) {
            throw new IllegalArgumentException("cr can't be null");
        }

        synchronized (lock) {
            result = rsvg_handle_render_cairo(pointerOf(self), pointerOf(cr));

            return result;
        }
    }

    private static native final boolean rsvg_handle_render_cairo(long self, long cr);

    static final boolean renderCairoSub(Handle self, Context cr, String id) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (cr == null) {
            throw new IllegalArgumentException("cr can't be null");
        }

        synchronized (lock) {
            result = rsvg_handle_render_cairo_sub(pointerOf(self), pointerOf(cr), id);

            return result;
        }
    }

    private static native final boolean rsvg_handle_render_cairo_sub(long self, long cr, String id);

    static final void setBaseUri(Handle self, String baseUri) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (baseUri == null) {
            throw new IllegalArgumentException("baseUri can't be null");
        }

        synchronized (lock) {
            rsvg_handle_set_base_uri(pointerOf(self), baseUri);
        }
    }

    private static native final void rsvg_handle_set_base_uri(long self, String baseUri);

    static final void setDpi(Handle self, double dpi) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            rsvg_handle_set_dpi(pointerOf(self), dpi);
        }
    }

    private static native final void rsvg_handle_set_dpi(long self, double dpi);

    static final void setDpiXY(Handle self, double dpiX, double dpiY) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            rsvg_handle_set_dpi_x_y(pointerOf(self), dpiX, dpiY);
        }
    }

    private static native final void rsvg_handle_set_dpi_x_y(long self, double dpiX, double dpiY);

    @SuppressWarnings("unused")
    static final boolean write(Handle self, FIXME buf, long count) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("guchar*");
    }
}

