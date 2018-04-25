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
package org.freedesktop.cairo;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.freedesktop.cairo.Content;
import org.freedesktop.cairo.Format;
import org.freedesktop.cairo.Plumbing;
import org.freedesktop.cairo.Status;
import org.freedesktop.cairo.Surface;

final class CairoSurface extends Plumbing
{
    private CairoSurface() {}

    static final void destroy(Surface self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_surface_destroy(pointerOf(self));
        }
    }

    private static native final void cairo_surface_destroy(long self);

    static final void flush(Surface self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_surface_flush(pointerOf(self));
        }
    }

    private static native final void cairo_surface_flush(long self);

    static final void finish(Surface self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_surface_finish(pointerOf(self));
        }
    }

    private static native final void cairo_surface_finish(long self);

    static final Status writeToPng(Surface self, String filename) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (filename == null) {
            throw new IllegalArgumentException("filename can't be null");
        }

        synchronized (lock) {
            result = cairo_surface_write_to_png(pointerOf(self), filename);

            return (Status) enumFor(Status.class, result);
        }
    }

    private static native final int cairo_surface_write_to_png(long self, String filename);

    static final Surface createSimilar(Surface other, Content content, int width, int height) {
        long result;

        if (other == null) {
            throw new IllegalArgumentException("other can't be null");
        }

        if (content == null) {
            throw new IllegalArgumentException("content can't be null");
        }

        synchronized (lock) {
            result = cairo_surface_create_similar(pointerOf(other), numOf(content), width, height);

            return (Surface) entityFor(Surface.class,  result);
        }
    }

    private static native final long cairo_surface_create_similar(long other, int content, int width, int height);

    static final Status status(Surface self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = cairo_surface_status(pointerOf(self));

            return (Status) enumFor(Status.class, result);
        }
    }

    private static native final int cairo_surface_status(long self);

    static final long createSurface(Format format, int width, int height) {
        long result;

        if (format == null) {
            throw new IllegalArgumentException("format can't be null");
        }

        synchronized (lock) {
            result = cairo_image_surface_create(numOf(format), width, height);

            return result;
        }
    }

    private static native final long cairo_image_surface_create(int format, int width, int height);

    static final long createSurfaceSvg(String filename, double widthInPoints, double heightInPoints) {
        long result;

        if (filename == null) {
            throw new IllegalArgumentException("filename can't be null");
        }

        synchronized (lock) {
            result = cairo_svg_surface_create(filename, widthInPoints, heightInPoints);

            return result;
        }
    }

    private static native final long cairo_svg_surface_create(String filename, double widthInPoints, double heightInPoints);

    static final long createSurfacePdf(String filename, double widthInPoints, double heightInPoints) {
        long result;

        synchronized (lock) {
            result = cairo_pdf_surface_create(filename, widthInPoints, heightInPoints);

            return result;
        }
    }

    private static native final long cairo_pdf_surface_create(String filename, double widthInPoints, double heightInPoints);

    static final void showPage(Surface self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_surface_show_page(pointerOf(self));
        }
    }

    private static native final void cairo_surface_show_page(long self);

    static final void copyPage(Surface self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            cairo_surface_copy_page(pointerOf(self));
        }
    }

    private static native final void cairo_surface_copy_page(long self);
}

