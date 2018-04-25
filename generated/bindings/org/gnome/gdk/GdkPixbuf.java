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
import org.gnome.gdk.Colorspace;
import org.gnome.gdk.InterpType;
import org.gnome.gdk.Pixbuf;
import org.gnome.gdk.PixbufRotation;
import org.gnome.gdk.Plumbing;
import org.gnome.glib.GlibException;

final class GdkPixbuf extends Plumbing
{
    private GdkPixbuf() {}

    static final long createPixbuf(Colorspace colorspace, boolean hasAlpha, int bitsPerSample, int width, int height) {
        long result;

        if (colorspace == null) {
            throw new IllegalArgumentException("colorspace can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_new(numOf(colorspace), hasAlpha, bitsPerSample, width, height);

            return result;
        }
    }

    private static native final long gdk_pixbuf_new(int colorspace, boolean hasAlpha, int bitsPerSample, int width, int height);

    @SuppressWarnings("unused")
    static final long createPixbufFromBytes(FIXME data, Colorspace colorspace, boolean hasAlpha, int bitsPerSample, int width, int height, int rowstride) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GBytes*");
    }

    @SuppressWarnings("unused")
    static final long createPixbufFromData(FIXME data, Colorspace colorspace, boolean hasAlpha, int bitsPerSample, int width, int height, int rowstride, FIXME destroyFn, FIXME destroyFnData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("guchar*");
    }

    static final long createPixbufFromFile(String filename) throws GlibException {
        long result;

        if (filename == null) {
            throw new IllegalArgumentException("filename can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_new_from_file(filename);

            return result;
        }
    }

    private static native final long gdk_pixbuf_new_from_file(String filename) throws GlibException;

    static final long createPixbufFromFileAtScale(String filename, int width, int height, boolean preserveAspectRatio) throws GlibException {
        long result;

        if (filename == null) {
            throw new IllegalArgumentException("filename can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_new_from_file_at_scale(filename, width, height, preserveAspectRatio);

            return result;
        }
    }

    private static native final long gdk_pixbuf_new_from_file_at_scale(String filename, int width, int height, boolean preserveAspectRatio) throws GlibException;

    static final long createPixbufFromFileAtSize(String filename, int width, int height) throws GlibException {
        long result;

        if (filename == null) {
            throw new IllegalArgumentException("filename can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_new_from_file_at_size(filename, width, height);

            return result;
        }
    }

    private static native final long gdk_pixbuf_new_from_file_at_size(String filename, int width, int height) throws GlibException;

    @SuppressWarnings("unused")
    static final long createPixbufFromInline(int dataLength, FIXME data, boolean copyPixels) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("guint8*");
    }

    static final long createPixbufFromResource(String resourcePath) throws GlibException {
        long result;

        if (resourcePath == null) {
            throw new IllegalArgumentException("resourcePath can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_new_from_resource(resourcePath);

            return result;
        }
    }

    private static native final long gdk_pixbuf_new_from_resource(String resourcePath) throws GlibException;

    static final long createPixbufFromResourceAtScale(String resourcePath, int width, int height, boolean preserveAspectRatio) throws GlibException {
        long result;

        if (resourcePath == null) {
            throw new IllegalArgumentException("resourcePath can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_new_from_resource_at_scale(resourcePath, width, height, preserveAspectRatio);

            return result;
        }
    }

    private static native final long gdk_pixbuf_new_from_resource_at_scale(String resourcePath, int width, int height, boolean preserveAspectRatio) throws GlibException;

    @SuppressWarnings("unused")
    static final long createPixbufFromStream(FIXME stream, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GInputStream*");
    }

    @SuppressWarnings("unused")
    static final long createPixbufFromStreamAtScale(FIXME stream, int width, int height, boolean preserveAspectRatio, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GInputStream*");
    }

    @SuppressWarnings("unused")
    static final long createPixbufFromStreamFinish(FIXME asyncResult) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GAsyncResult*");
    }

    static final long createPixbufFromXpmData(String[] data) {
        long result;

        if (data == null) {
            throw new IllegalArgumentException("data can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_new_from_xpm_data(data);

            return result;
        }
    }

    private static native final long gdk_pixbuf_new_from_xpm_data(String[] data);

    static final Pixbuf addAlpha(Pixbuf self, boolean substituteColor, char r, char g, char b) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_add_alpha(pointerOf(self), substituteColor, r, g, b);

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long gdk_pixbuf_add_alpha(long self, boolean substituteColor, char r, char g, char b);

    static final Pixbuf applyEmbeddedOrientation(Pixbuf self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_apply_embedded_orientation(pointerOf(self));

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long gdk_pixbuf_apply_embedded_orientation(long self);

    static final void composite(Pixbuf self, Pixbuf dest, int destX, int destY, int destWidth, int destHeight, double offsetX, double offsetY, double scaleX, double scaleY, InterpType interpType, int overallAlpha) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (dest == null) {
            throw new IllegalArgumentException("dest can't be null");
        }

        if (interpType == null) {
            throw new IllegalArgumentException("interpType can't be null");
        }

        synchronized (lock) {
            gdk_pixbuf_composite(pointerOf(self), pointerOf(dest), destX, destY, destWidth, destHeight, offsetX, offsetY, scaleX, scaleY, numOf(interpType), overallAlpha);
        }
    }

    private static native final void gdk_pixbuf_composite(long self, long dest, int destX, int destY, int destWidth, int destHeight, double offsetX, double offsetY, double scaleX, double scaleY, int interpType, int overallAlpha);

    static final void compositeColor(Pixbuf self, Pixbuf dest, int destX, int destY, int destWidth, int destHeight, double offsetX, double offsetY, double scaleX, double scaleY, InterpType interpType, int overallAlpha, int checkX, int checkY, int checkSize, int color1, int color2) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (dest == null) {
            throw new IllegalArgumentException("dest can't be null");
        }

        if (interpType == null) {
            throw new IllegalArgumentException("interpType can't be null");
        }

        synchronized (lock) {
            gdk_pixbuf_composite_color(pointerOf(self), pointerOf(dest), destX, destY, destWidth, destHeight, offsetX, offsetY, scaleX, scaleY, numOf(interpType), overallAlpha, checkX, checkY, checkSize, color1, color2);
        }
    }

    private static native final void gdk_pixbuf_composite_color(long self, long dest, int destX, int destY, int destWidth, int destHeight, double offsetX, double offsetY, double scaleX, double scaleY, int interpType, int overallAlpha, int checkX, int checkY, int checkSize, int color1, int color2);

    static final Pixbuf compositeColorSimple(Pixbuf self, int destWidth, int destHeight, InterpType interpType, int overallAlpha, int checkSize, int color1, int color2) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (interpType == null) {
            throw new IllegalArgumentException("interpType can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_composite_color_simple(pointerOf(self), destWidth, destHeight, numOf(interpType), overallAlpha, checkSize, color1, color2);

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long gdk_pixbuf_composite_color_simple(long self, int destWidth, int destHeight, int interpType, int overallAlpha, int checkSize, int color1, int color2);

    static final Pixbuf copy(Pixbuf self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_copy(pointerOf(self));

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long gdk_pixbuf_copy(long self);

    static final void copyArea(Pixbuf self, int srcX, int srcY, int width, int height, Pixbuf destPixbuf, int destX, int destY) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (destPixbuf == null) {
            throw new IllegalArgumentException("destPixbuf can't be null");
        }

        synchronized (lock) {
            gdk_pixbuf_copy_area(pointerOf(self), srcX, srcY, width, height, pointerOf(destPixbuf), destX, destY);
        }
    }

    private static native final void gdk_pixbuf_copy_area(long self, int srcX, int srcY, int width, int height, long destPixbuf, int destX, int destY);

    static final boolean copyOptions(Pixbuf self, Pixbuf destPixbuf) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (destPixbuf == null) {
            throw new IllegalArgumentException("destPixbuf can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_copy_options(pointerOf(self), pointerOf(destPixbuf));

            return result;
        }
    }

    private static native final boolean gdk_pixbuf_copy_options(long self, long destPixbuf);

    static final void fill(Pixbuf self, int pixel) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_pixbuf_fill(pointerOf(self), pixel);
        }
    }

    private static native final void gdk_pixbuf_fill(long self, int pixel);

    static final Pixbuf flip(Pixbuf self, boolean horizontal) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_flip(pointerOf(self), horizontal);

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long gdk_pixbuf_flip(long self, boolean horizontal);

    static final int getBitsPerSample(Pixbuf self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_get_bits_per_sample(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_pixbuf_get_bits_per_sample(long self);

    static final long getByteLength(Pixbuf self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_get_byte_length(pointerOf(self));

            return result;
        }
    }

    private static native final long gdk_pixbuf_get_byte_length(long self);

    static final Colorspace getColorspace(Pixbuf self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_get_colorspace(pointerOf(self));

            return (Colorspace) enumFor(Colorspace.class, result);
        }
    }

    private static native final int gdk_pixbuf_get_colorspace(long self);

    static final boolean getHasAlpha(Pixbuf self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_get_has_alpha(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gdk_pixbuf_get_has_alpha(long self);

    static final int getHeight(Pixbuf self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_get_height(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_pixbuf_get_height(long self);

    static final int getNChannels(Pixbuf self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_get_n_channels(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_pixbuf_get_n_channels(long self);

    static final String getOption(Pixbuf self, String key) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (key == null) {
            throw new IllegalArgumentException("key can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_get_option(pointerOf(self), key);

            return result;
        }
    }

    private static native final String gdk_pixbuf_get_option(long self, String key);

    @SuppressWarnings("unused")
    static final FIXME getOptions(Pixbuf self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GHashTable*");
    }

    @SuppressWarnings("unused")
    static final FIXME getPixels(Pixbuf self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("guchar*");
    }

    @SuppressWarnings("unused")
    static final FIXME getPixelsWithLength(Pixbuf self, int[] length) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("guchar*");
    }

    static final int getRowstride(Pixbuf self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_get_rowstride(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_pixbuf_get_rowstride(long self);

    static final int getWidth(Pixbuf self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_get_width(pointerOf(self));

            return result;
        }
    }

    private static native final int gdk_pixbuf_get_width(long self);

    static final Pixbuf newSubpixbuf(Pixbuf self, int srcX, int srcY, int width, int height) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_new_subpixbuf(pointerOf(self), srcX, srcY, width, height);

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long gdk_pixbuf_new_subpixbuf(long self, int srcX, int srcY, int width, int height);

    @SuppressWarnings("unused")
    static final FIXME readPixelBytes(Pixbuf self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GBytes*");
    }

    @SuppressWarnings("unused")
    static final FIXME readPixels(Pixbuf self) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("const-guint8*");
    }

    static final Pixbuf ref(Pixbuf self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_ref(pointerOf(self));

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long gdk_pixbuf_ref(long self);

    static final boolean removeOption(Pixbuf self, String key) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (key == null) {
            throw new IllegalArgumentException("key can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_remove_option(pointerOf(self), key);

            return result;
        }
    }

    private static native final boolean gdk_pixbuf_remove_option(long self, String key);

    static final Pixbuf rotateSimple(Pixbuf self, PixbufRotation angle) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (angle == null) {
            throw new IllegalArgumentException("angle can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_rotate_simple(pointerOf(self), numOf(angle));

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long gdk_pixbuf_rotate_simple(long self, int angle);

    static final void saturateAndPixelate(Pixbuf self, Pixbuf dest, float saturation, boolean pixelate) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (dest == null) {
            throw new IllegalArgumentException("dest can't be null");
        }

        synchronized (lock) {
            gdk_pixbuf_saturate_and_pixelate(pointerOf(self), pointerOf(dest), saturation, pixelate);
        }
    }

    private static native final void gdk_pixbuf_saturate_and_pixelate(long self, long dest, float saturation, boolean pixelate);

    static final boolean save(Pixbuf self, String filename, String type) throws GlibException {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (filename == null) {
            throw new IllegalArgumentException("filename can't be null");
        }

        if (type == null) {
            throw new IllegalArgumentException("type can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_save(pointerOf(self), filename, type);

            return result;
        }
    }

    private static native final boolean gdk_pixbuf_save(long self, String filename, String type) throws GlibException;

    static final boolean saveToBuffer(Pixbuf self, String[] buffer, long[] bufferSize, String type) throws GlibException {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (type == null) {
            throw new IllegalArgumentException("type can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_save_to_buffer(pointerOf(self), buffer, bufferSize, type);

            return result;
        }
    }

    private static native final boolean gdk_pixbuf_save_to_buffer(long self, String[] buffer, long[] bufferSize, String type) throws GlibException;

    static final boolean saveToBufferv(Pixbuf self, String[] buffer, long[] bufferSize, String type, String[] optionKeys, String[] optionValues) throws GlibException {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (type == null) {
            throw new IllegalArgumentException("type can't be null");
        }

        if (optionKeys == null) {
            throw new IllegalArgumentException("optionKeys can't be null");
        }

        if (optionValues == null) {
            throw new IllegalArgumentException("optionValues can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_save_to_bufferv(pointerOf(self), buffer, bufferSize, type, optionKeys, optionValues);

            return result;
        }
    }

    private static native final boolean gdk_pixbuf_save_to_bufferv(long self, String[] buffer, long[] bufferSize, String type, String[] optionKeys, String[] optionValues) throws GlibException;

    @SuppressWarnings("unused")
    static final boolean saveToCallback(Pixbuf self, FIXME saveFunc, FIXME userData, String type) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkPixbufSaveFunc");
    }

    @SuppressWarnings("unused")
    static final boolean saveToCallbackv(Pixbuf self, FIXME saveFunc, FIXME userData, String type, String[] optionKeys, String[] optionValues) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkPixbufSaveFunc");
    }

    @SuppressWarnings("unused")
    static final boolean saveToStream(Pixbuf self, FIXME stream, String type, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GOutputStream*");
    }

    @SuppressWarnings("unused")
    static final void saveToStreamAsync(Pixbuf self, FIXME stream, String type, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GOutputStream*");
    }

    @SuppressWarnings("unused")
    static final boolean saveToStreamv(Pixbuf self, FIXME stream, String type, String[] optionKeys, String[] optionValues, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GOutputStream*");
    }

    @SuppressWarnings("unused")
    static final void saveToStreamvAsync(Pixbuf self, FIXME stream, String type, String[] optionKeys, String[] optionValues, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GOutputStream*");
    }

    static final boolean savev(Pixbuf self, String filename, String type, String[] optionKeys, String[] optionValues) throws GlibException {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (filename == null) {
            throw new IllegalArgumentException("filename can't be null");
        }

        if (type == null) {
            throw new IllegalArgumentException("type can't be null");
        }

        if (optionKeys == null) {
            throw new IllegalArgumentException("optionKeys can't be null");
        }

        if (optionValues == null) {
            throw new IllegalArgumentException("optionValues can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_savev(pointerOf(self), filename, type, optionKeys, optionValues);

            return result;
        }
    }

    private static native final boolean gdk_pixbuf_savev(long self, String filename, String type, String[] optionKeys, String[] optionValues) throws GlibException;

    static final void scale(Pixbuf self, Pixbuf dest, int destX, int destY, int destWidth, int destHeight, double offsetX, double offsetY, double scaleX, double scaleY, InterpType interpType) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (dest == null) {
            throw new IllegalArgumentException("dest can't be null");
        }

        if (interpType == null) {
            throw new IllegalArgumentException("interpType can't be null");
        }

        synchronized (lock) {
            gdk_pixbuf_scale(pointerOf(self), pointerOf(dest), destX, destY, destWidth, destHeight, offsetX, offsetY, scaleX, scaleY, numOf(interpType));
        }
    }

    private static native final void gdk_pixbuf_scale(long self, long dest, int destX, int destY, int destWidth, int destHeight, double offsetX, double offsetY, double scaleX, double scaleY, int interpType);

    static final Pixbuf scaleSimple(Pixbuf self, int destWidth, int destHeight, InterpType interpType) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (interpType == null) {
            throw new IllegalArgumentException("interpType can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_scale_simple(pointerOf(self), destWidth, destHeight, numOf(interpType));

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long gdk_pixbuf_scale_simple(long self, int destWidth, int destHeight, int interpType);

    static final boolean setOption(Pixbuf self, String key, String value) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (key == null) {
            throw new IllegalArgumentException("key can't be null");
        }

        if (value == null) {
            throw new IllegalArgumentException("value can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_set_option(pointerOf(self), key, value);

            return result;
        }
    }

    private static native final boolean gdk_pixbuf_set_option(long self, String key, String value);

    static final void unref(Pixbuf self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gdk_pixbuf_unref(pointerOf(self));
        }
    }

    private static native final void gdk_pixbuf_unref(long self);

    static final int calculateRowstride(Colorspace colorspace, boolean hasAlpha, int bitsPerSample, int width, int height) {
        int result;

        if (colorspace == null) {
            throw new IllegalArgumentException("colorspace can't be null");
        }

        synchronized (lock) {
            result = gdk_pixbuf_calculate_rowstride(numOf(colorspace), hasAlpha, bitsPerSample, width, height);

            return result;
        }
    }

    private static native final int gdk_pixbuf_calculate_rowstride(int colorspace, boolean hasAlpha, int bitsPerSample, int width, int height);

    @SuppressWarnings("unused")
    static final Pixbuf fromPixdata(FIXME pixdata, boolean copyPixels) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("const-GdkPixdata*");
    }

    @SuppressWarnings("unused")
    static final FIXME getFileInfo(String filename, int[] width, int[] height) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkPixbufFormat*");
    }

    @SuppressWarnings("unused")
    static final void getFileInfoAsync(String filename, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GCancellable*");
    }

    @SuppressWarnings("unused")
    static final FIXME getFileInfoFinish(FIXME asyncResult, int[] width, int[] height) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GdkPixbufFormat*");
    }

    @SuppressWarnings("unused")
    static final FIXME getFormats() throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GSList-GdkPixbufFormat*");
    }

    @SuppressWarnings("unused")
    static final void newFromStreamAsync(FIXME stream, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GInputStream*");
    }

    @SuppressWarnings("unused")
    static final void newFromStreamAtScaleAsync(FIXME stream, int width, int height, boolean preserveAspectRatio, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GInputStream*");
    }

    @SuppressWarnings("unused")
    static final boolean saveToStreamFinish(FIXME asyncResult) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GAsyncResult*");
    }
}

