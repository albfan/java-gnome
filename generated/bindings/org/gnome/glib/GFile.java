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
package org.gnome.glib;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.freedesktop.bindings.BlacklistedMethodError;
import org.freedesktop.bindings.FIXME;
import org.gnome.glib.File;
import org.gnome.glib.GlibException;
import org.gnome.glib.Object;
import org.gnome.glib.Plumbing;
import org.gnome.glib.Signal;

final class GFile extends Plumbing
{
    private GFile() {}

    @SuppressWarnings("unused")
    static final FIXME appendTo(File self, FIXME flags, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileOutputStream*");
    }

    @SuppressWarnings("unused")
    static final void appendToAsync(File self, FIXME flags, int ioPriority, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileCreateFlags");
    }

    @SuppressWarnings("unused")
    static final FIXME appendToFinish(File self, FIXME res) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileOutputStream*");
    }

    @SuppressWarnings("unused")
    static final boolean copy(File self, File destination, FIXME flags, FIXME cancellable, FIXME progressCallback, FIXME progressCallbackData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileCopyFlags");
    }

    @SuppressWarnings("unused")
    static final void copyAsync(File self, File destination, FIXME flags, int ioPriority, FIXME cancellable, FIXME progressCallback, FIXME progressCallbackData, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileCopyFlags");
    }

    @SuppressWarnings("unused")
    static final boolean copyAttributes(File self, File destination, FIXME flags, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileCopyFlags");
    }

    @SuppressWarnings("unused")
    static final boolean copyFinish(File self, FIXME res) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GAsyncResult*");
    }

    @SuppressWarnings("unused")
    static final FIXME create(File self, FIXME flags, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileOutputStream*");
    }

    @SuppressWarnings("unused")
    static final void createAsync(File self, FIXME flags, int ioPriority, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileCreateFlags");
    }

    @SuppressWarnings("unused")
    static final FIXME createFinish(File self, FIXME res) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileOutputStream*");
    }

    @SuppressWarnings("unused")
    static final FIXME createReadwrite(File self, FIXME flags, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileIOStream*");
    }

    @SuppressWarnings("unused")
    static final void createReadwriteAsync(File self, FIXME flags, int ioPriority, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileCreateFlags");
    }

    @SuppressWarnings("unused")
    static final FIXME createReadwriteFinish(File self, FIXME res) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileIOStream*");
    }

    @SuppressWarnings("unused")
    static final boolean delete(File self, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GCancellable*");
    }

    @SuppressWarnings("unused")
    static final void deleteAsync(File self, int ioPriority, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GCancellable*");
    }

    @SuppressWarnings("unused")
    static final boolean deleteFinish(File self, FIXME result) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GAsyncResult*");
    }

    static final File dup(File self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = g_file_dup(pointerOf((Object) self));

            return (File) objectFor(result);
        }
    }

    private static native final long g_file_dup(long self);

    @SuppressWarnings("unused")
    static final void ejectMountable(File self, FIXME flags, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GMountUnmountFlags");
    }

    @SuppressWarnings("unused")
    static final boolean ejectMountableFinish(File self, FIXME result) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GAsyncResult*");
    }

    @SuppressWarnings("unused")
    static final void ejectMountableWithOperation(File self, FIXME flags, FIXME mountOperation, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GMountUnmountFlags");
    }

    @SuppressWarnings("unused")
    static final boolean ejectMountableWithOperationFinish(File self, FIXME result) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GAsyncResult*");
    }

    @SuppressWarnings("unused")
    static final FIXME enumerateChildren(File self, String attributes, FIXME flags, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileEnumerator*");
    }

    @SuppressWarnings("unused")
    static final void enumerateChildrenAsync(File self, String attributes, FIXME flags, int ioPriority, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileQueryInfoFlags");
    }

    @SuppressWarnings("unused")
    static final FIXME enumerateChildrenFinish(File self, FIXME res) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileEnumerator*");
    }

    static final boolean equal(File self, File file2) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (file2 == null) {
            throw new IllegalArgumentException("file2 can't be null");
        }

        synchronized (lock) {
            result = g_file_equal(pointerOf((Object) self), pointerOf((Object) file2));

            return result;
        }
    }

    private static native final boolean g_file_equal(long self, long file2);

    @SuppressWarnings("unused")
    static final FIXME findEnclosingMount(File self, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GMount*");
    }

    @SuppressWarnings("unused")
    static final void findEnclosingMountAsync(File self, int ioPriority, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GCancellable*");
    }

    @SuppressWarnings("unused")
    static final FIXME findEnclosingMountFinish(File self, FIXME res) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GMount*");
    }

    static final String getBasename(File self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = g_file_get_basename(pointerOf((Object) self));

            return result;
        }
    }

    private static native final String g_file_get_basename(long self);

    static final File getChild(File self, String name) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (name == null) {
            throw new IllegalArgumentException("name can't be null");
        }

        synchronized (lock) {
            result = g_file_get_child(pointerOf((Object) self), name);

            return (File) objectFor(result);
        }
    }

    private static native final long g_file_get_child(long self, String name);

    static final File getChildForDisplayName(File self, String displayName) throws GlibException {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (displayName == null) {
            throw new IllegalArgumentException("displayName can't be null");
        }

        synchronized (lock) {
            result = g_file_get_child_for_display_name(pointerOf((Object) self), displayName);

            return (File) objectFor(result);
        }
    }

    private static native final long g_file_get_child_for_display_name(long self, String displayName) throws GlibException;

    static final File getParent(File self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = g_file_get_parent(pointerOf((Object) self));

            return (File) objectFor(result);
        }
    }

    private static native final long g_file_get_parent(long self);

    static final String getParseName(File self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = g_file_get_parse_name(pointerOf((Object) self));

            return result;
        }
    }

    private static native final String g_file_get_parse_name(long self);

    static final String getPath(File self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = g_file_get_path(pointerOf((Object) self));

            return result;
        }
    }

    private static native final String g_file_get_path(long self);

    static final String getRelativePath(File self, File descendant) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (descendant == null) {
            throw new IllegalArgumentException("descendant can't be null");
        }

        synchronized (lock) {
            result = g_file_get_relative_path(pointerOf((Object) self), pointerOf((Object) descendant));

            return result;
        }
    }

    private static native final String g_file_get_relative_path(long self, long descendant);

    static final String getUri(File self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = g_file_get_uri(pointerOf((Object) self));

            return result;
        }
    }

    private static native final String g_file_get_uri(long self);

    static final String getUriScheme(File self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = g_file_get_uri_scheme(pointerOf((Object) self));

            return result;
        }
    }

    private static native final String g_file_get_uri_scheme(long self);

    static final boolean hasParent(File self, File parent) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = g_file_has_parent(pointerOf((Object) self), pointerOf((Object) parent));

            return result;
        }
    }

    private static native final boolean g_file_has_parent(long self, long parent);

    static final boolean hasPrefix(File self, File prefix) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (prefix == null) {
            throw new IllegalArgumentException("prefix can't be null");
        }

        synchronized (lock) {
            result = g_file_has_prefix(pointerOf((Object) self), pointerOf((Object) prefix));

            return result;
        }
    }

    private static native final boolean g_file_has_prefix(long self, long prefix);

    static final boolean hasUriScheme(File self, String uriScheme) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (uriScheme == null) {
            throw new IllegalArgumentException("uriScheme can't be null");
        }

        synchronized (lock) {
            result = g_file_has_uri_scheme(pointerOf((Object) self), uriScheme);

            return result;
        }
    }

    private static native final boolean g_file_has_uri_scheme(long self, String uriScheme);

    static final int hash(File self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = g_file_hash(pointerOf((Object) self));

            return result;
        }
    }

    private static native final int g_file_hash(long self);

    static final boolean isNative(File self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = g_file_is_native(pointerOf((Object) self));

            return result;
        }
    }

    private static native final boolean g_file_is_native(long self);

    @SuppressWarnings("unused")
    static final FIXME loadBytes(File self, FIXME cancellable, String[] etagOut) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GBytes*");
    }

    @SuppressWarnings("unused")
    static final void loadBytesAsync(File self, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GCancellable*");
    }

    @SuppressWarnings("unused")
    static final FIXME loadBytesFinish(File self, FIXME result, String[] etagOut) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GBytes*");
    }

    @SuppressWarnings("unused")
    static final boolean loadContents(File self, FIXME cancellable, String[] contents, long[] length, String[] etagOut) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GCancellable*");
    }

    @SuppressWarnings("unused")
    static final void loadContentsAsync(File self, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GCancellable*");
    }

    @SuppressWarnings("unused")
    static final boolean loadContentsFinish(File self, FIXME res, String[] contents, long[] length, String[] etagOut) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GAsyncResult*");
    }

    @SuppressWarnings("unused")
    static final void loadPartialContentsAsync(File self, FIXME cancellable, FIXME readMoreCallback, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GCancellable*");
    }

    @SuppressWarnings("unused")
    static final boolean loadPartialContentsFinish(File self, FIXME res, String[] contents, long[] length, String[] etagOut) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GAsyncResult*");
    }

    @SuppressWarnings("unused")
    static final boolean makeDirectory(File self, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GCancellable*");
    }

    @SuppressWarnings("unused")
    static final void makeDirectoryAsync(File self, int ioPriority, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GCancellable*");
    }

    @SuppressWarnings("unused")
    static final boolean makeDirectoryFinish(File self, FIXME result) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GAsyncResult*");
    }

    @SuppressWarnings("unused")
    static final boolean makeDirectoryWithParents(File self, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GCancellable*");
    }

    @SuppressWarnings("unused")
    static final boolean makeSymbolicLink(File self, String symlinkValue, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GCancellable*");
    }

    @SuppressWarnings("unused")
    static final boolean measureDiskUsage(File self, FIXME flags, FIXME cancellable, FIXME progressCallback, FIXME progressData, FIXME diskUsage, FIXME numDirs, FIXME numFiles) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileMeasureFlags");
    }

    @SuppressWarnings("unused")
    static final void measureDiskUsageAsync(File self, FIXME flags, int ioPriority, FIXME cancellable, FIXME progressCallback, FIXME progressData, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileMeasureFlags");
    }

    @SuppressWarnings("unused")
    static final boolean measureDiskUsageFinish(File self, FIXME result, FIXME diskUsage, FIXME numDirs, FIXME numFiles) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GAsyncResult*");
    }

    @SuppressWarnings("unused")
    static final FIXME monitor(File self, FIXME flags, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileMonitor*");
    }

    @SuppressWarnings("unused")
    static final FIXME monitorDirectory(File self, FIXME flags, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileMonitor*");
    }

    @SuppressWarnings("unused")
    static final FIXME monitorFile(File self, FIXME flags, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileMonitor*");
    }

    @SuppressWarnings("unused")
    static final void mountEnclosingVolume(File self, FIXME flags, FIXME mountOperation, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GMountMountFlags");
    }

    @SuppressWarnings("unused")
    static final boolean mountEnclosingVolumeFinish(File self, FIXME result) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GAsyncResult*");
    }

    @SuppressWarnings("unused")
    static final void mountMountable(File self, FIXME flags, FIXME mountOperation, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GMountMountFlags");
    }

    @SuppressWarnings("unused")
    static final File mountMountableFinish(File self, FIXME result) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GAsyncResult*");
    }

    @SuppressWarnings("unused")
    static final boolean move(File self, File destination, FIXME flags, FIXME cancellable, FIXME progressCallback, FIXME progressCallbackData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileCopyFlags");
    }

    @SuppressWarnings("unused")
    static final FIXME openReadwrite(File self, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileIOStream*");
    }

    @SuppressWarnings("unused")
    static final void openReadwriteAsync(File self, int ioPriority, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GCancellable*");
    }

    @SuppressWarnings("unused")
    static final FIXME openReadwriteFinish(File self, FIXME res) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileIOStream*");
    }

    static final String peekPath(File self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = g_file_peek_path(pointerOf((Object) self));

            return result;
        }
    }

    private static native final String g_file_peek_path(long self);

    @SuppressWarnings("unused")
    static final void pollMountable(File self, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GCancellable*");
    }

    @SuppressWarnings("unused")
    static final boolean pollMountableFinish(File self, FIXME result) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GAsyncResult*");
    }

    @SuppressWarnings("unused")
    static final FIXME queryDefaultHandler(File self, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GAppInfo*");
    }

    @SuppressWarnings("unused")
    static final boolean queryExists(File self, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GCancellable*");
    }

    @SuppressWarnings("unused")
    static final FIXME queryFileType(File self, FIXME flags, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileType");
    }

    @SuppressWarnings("unused")
    static final FIXME queryFilesystemInfo(File self, String attributes, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileInfo*");
    }

    @SuppressWarnings("unused")
    static final void queryFilesystemInfoAsync(File self, String attributes, int ioPriority, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GCancellable*");
    }

    @SuppressWarnings("unused")
    static final FIXME queryFilesystemInfoFinish(File self, FIXME res) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileInfo*");
    }

    @SuppressWarnings("unused")
    static final FIXME queryInfo(File self, String attributes, FIXME flags, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileInfo*");
    }

    @SuppressWarnings("unused")
    static final void queryInfoAsync(File self, String attributes, FIXME flags, int ioPriority, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileQueryInfoFlags");
    }

    @SuppressWarnings("unused")
    static final FIXME queryInfoFinish(File self, FIXME res) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileInfo*");
    }

    @SuppressWarnings("unused")
    static final FIXME querySettableAttributes(File self, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileAttributeInfoList*");
    }

    @SuppressWarnings("unused")
    static final FIXME queryWritableNamespaces(File self, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileAttributeInfoList*");
    }

    @SuppressWarnings("unused")
    static final FIXME read(File self, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileInputStream*");
    }

    @SuppressWarnings("unused")
    static final void readAsync(File self, int ioPriority, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GCancellable*");
    }

    @SuppressWarnings("unused")
    static final FIXME readFinish(File self, FIXME res) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileInputStream*");
    }

    @SuppressWarnings("unused")
    static final FIXME replace(File self, String etag, boolean makeBackup, FIXME flags, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileOutputStream*");
    }

    @SuppressWarnings("unused")
    static final void replaceAsync(File self, String etag, boolean makeBackup, FIXME flags, int ioPriority, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileCreateFlags");
    }

    @SuppressWarnings("unused")
    static final boolean replaceContents(File self, String contents, long length, String etag, boolean makeBackup, FIXME flags, String[] newEtag, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileCreateFlags");
    }

    @SuppressWarnings("unused")
    static final void replaceContentsAsync(File self, String contents, long length, String etag, boolean makeBackup, FIXME flags, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileCreateFlags");
    }

    @SuppressWarnings("unused")
    static final void replaceContentsBytesAsync(File self, FIXME contents, String etag, boolean makeBackup, FIXME flags, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GBytes*");
    }

    @SuppressWarnings("unused")
    static final boolean replaceContentsFinish(File self, FIXME res, String[] newEtag) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GAsyncResult*");
    }

    @SuppressWarnings("unused")
    static final FIXME replaceFinish(File self, FIXME res) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileOutputStream*");
    }

    @SuppressWarnings("unused")
    static final FIXME replaceReadwrite(File self, String etag, boolean makeBackup, FIXME flags, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileIOStream*");
    }

    @SuppressWarnings("unused")
    static final void replaceReadwriteAsync(File self, String etag, boolean makeBackup, FIXME flags, int ioPriority, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileCreateFlags");
    }

    @SuppressWarnings("unused")
    static final FIXME replaceReadwriteFinish(File self, FIXME res) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileIOStream*");
    }

    static final File resolveRelativePath(File self, String relativePath) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (relativePath == null) {
            throw new IllegalArgumentException("relativePath can't be null");
        }

        synchronized (lock) {
            result = g_file_resolve_relative_path(pointerOf((Object) self), relativePath);

            return (File) objectFor(result);
        }
    }

    private static native final long g_file_resolve_relative_path(long self, String relativePath);

    @SuppressWarnings("unused")
    static final boolean setAttribute(File self, String attribute, FIXME type, FIXME valueP, FIXME flags, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileAttributeType");
    }

    @SuppressWarnings("unused")
    static final boolean setAttributeByteString(File self, String attribute, String value, FIXME flags, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileQueryInfoFlags");
    }

    @SuppressWarnings("unused")
    static final boolean setAttributeInt32(File self, String attribute, int value, FIXME flags, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileQueryInfoFlags");
    }

    @SuppressWarnings("unused")
    static final boolean setAttributeInt64(File self, String attribute, long value, FIXME flags, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileQueryInfoFlags");
    }

    @SuppressWarnings("unused")
    static final boolean setAttributeString(File self, String attribute, String value, FIXME flags, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileQueryInfoFlags");
    }

    @SuppressWarnings("unused")
    static final boolean setAttributeUint32(File self, String attribute, int value, FIXME flags, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileQueryInfoFlags");
    }

    @SuppressWarnings("unused")
    static final boolean setAttributeUint64(File self, String attribute, long value, FIXME flags, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileQueryInfoFlags");
    }

    @SuppressWarnings("unused")
    static final void setAttributesAsync(File self, FIXME info, FIXME flags, int ioPriority, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileInfo*");
    }

    @SuppressWarnings("unused")
    static final boolean setAttributesFinish(File self, FIXME result, FIXME info) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GAsyncResult*");
    }

    @SuppressWarnings("unused")
    static final boolean setAttributesFromInfo(File self, FIXME info, FIXME flags, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileInfo*");
    }

    @SuppressWarnings("unused")
    static final File setDisplayName(File self, String displayName, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GCancellable*");
    }

    @SuppressWarnings("unused")
    static final void setDisplayNameAsync(File self, String displayName, int ioPriority, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GCancellable*");
    }

    @SuppressWarnings("unused")
    static final File setDisplayNameFinish(File self, FIXME res) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GAsyncResult*");
    }

    @SuppressWarnings("unused")
    static final void startMountable(File self, FIXME flags, FIXME startOperation, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GDriveStartFlags");
    }

    @SuppressWarnings("unused")
    static final boolean startMountableFinish(File self, FIXME result) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GAsyncResult*");
    }

    @SuppressWarnings("unused")
    static final void stopMountable(File self, FIXME flags, FIXME mountOperation, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GMountUnmountFlags");
    }

    @SuppressWarnings("unused")
    static final boolean stopMountableFinish(File self, FIXME result) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GAsyncResult*");
    }

    static final boolean supportsThreadContexts(File self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = g_file_supports_thread_contexts(pointerOf((Object) self));

            return result;
        }
    }

    private static native final boolean g_file_supports_thread_contexts(long self);

    @SuppressWarnings("unused")
    static final boolean trash(File self, FIXME cancellable) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GCancellable*");
    }

    @SuppressWarnings("unused")
    static final void trashAsync(File self, int ioPriority, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GCancellable*");
    }

    @SuppressWarnings("unused")
    static final boolean trashFinish(File self, FIXME result) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GAsyncResult*");
    }

    @SuppressWarnings("unused")
    static final void unmountMountable(File self, FIXME flags, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GMountUnmountFlags");
    }

    @SuppressWarnings("unused")
    static final boolean unmountMountableFinish(File self, FIXME result) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GAsyncResult*");
    }

    @SuppressWarnings("unused")
    static final void unmountMountableWithOperation(File self, FIXME flags, FIXME mountOperation, FIXME cancellable, FIXME callback, FIXME userData) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GMountUnmountFlags");
    }

    @SuppressWarnings("unused")
    static final boolean unmountMountableWithOperationFinish(File self, FIXME result) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GAsyncResult*");
    }

    static final File newBuildFilename(String firstElement) {
        long result;

        if (firstElement == null) {
            throw new IllegalArgumentException("firstElement can't be null");
        }

        synchronized (lock) {
            result = g_file_new_build_filename(firstElement);

            return (File) objectFor(result);
        }
    }

    private static native final long g_file_new_build_filename(String firstElement);

    static final File newForCommandlineArg(String arg) {
        long result;

        if (arg == null) {
            throw new IllegalArgumentException("arg can't be null");
        }

        synchronized (lock) {
            result = g_file_new_for_commandline_arg(arg);

            return (File) objectFor(result);
        }
    }

    private static native final long g_file_new_for_commandline_arg(String arg);

    static final File newForCommandlineArgAndCwd(String arg, String cwd) {
        long result;

        if (arg == null) {
            throw new IllegalArgumentException("arg can't be null");
        }

        if (cwd == null) {
            throw new IllegalArgumentException("cwd can't be null");
        }

        synchronized (lock) {
            result = g_file_new_for_commandline_arg_and_cwd(arg, cwd);

            return (File) objectFor(result);
        }
    }

    private static native final long g_file_new_for_commandline_arg_and_cwd(String arg, String cwd);

    static final long createFileForPath(String path) {
        long result;

        if (path == null) {
            throw new IllegalArgumentException("path can't be null");
        }

        synchronized (lock) {
            result = g_file_new_for_path(path);

            return result;
        }
    }

    private static native final long g_file_new_for_path(String path);

    static final File newForUri(String uri) {
        long result;

        if (uri == null) {
            throw new IllegalArgumentException("uri can't be null");
        }

        synchronized (lock) {
            result = g_file_new_for_uri(uri);

            return (File) objectFor(result);
        }
    }

    private static native final long g_file_new_for_uri(String uri);

    @SuppressWarnings("unused")
    static final File newTmp(String tmpl, FIXME iostream) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GFileIOStream**");
    }

    static final File parseName(String parseName) {
        long result;

        if (parseName == null) {
            throw new IllegalArgumentException("parseName can't be null");
        }

        synchronized (lock) {
            result = g_file_parse_name(parseName);

            return (File) objectFor(result);
        }
    }

    private static native final long g_file_parse_name(String parseName);

    interface AppendToSignal extends Signal
    {
        FIXME onAppendTo(File source, FIXME flags, FIXME cancellable);
    }

    static final void connect(File self, GFile.AppendToSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "append-to", after);
    }

    protected static final java.lang.Object receiveAppendTo(Signal handler, long source, java.lang.Object flags, java.lang.Object cancellable) {
        FIXME result;

        result = ((GFile.AppendToSignal) handler).onAppendTo((File) objectFor(source), (FIXME) flags, (FIXME) cancellable);

        return result;
    }

    interface AppendToAsyncSignal extends Signal
    {
        void onAppendToAsync(File source, FIXME flags, int ioPriority, FIXME cancellable, FIXME callback, FIXME userData);
    }

    static final void connect(File self, GFile.AppendToAsyncSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "append-to-async", after);
    }

    protected static final void receiveAppendToAsync(Signal handler, long source, java.lang.Object flags, int ioPriority, java.lang.Object cancellable, java.lang.Object callback, java.lang.Object userData) {
        ((GFile.AppendToAsyncSignal) handler).onAppendToAsync((File) objectFor(source), (FIXME) flags, ioPriority, (FIXME) cancellable, (FIXME) callback, (FIXME) userData);
    }

    interface AppendToFinishSignal extends Signal
    {
        FIXME onAppendToFinish(File source, FIXME res);
    }

    static final void connect(File self, GFile.AppendToFinishSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "append-to-finish", after);
    }

    protected static final java.lang.Object receiveAppendToFinish(Signal handler, long source, java.lang.Object res) {
        FIXME result;

        result = ((GFile.AppendToFinishSignal) handler).onAppendToFinish((File) objectFor(source), (FIXME) res);

        return result;
    }

    interface CopySignal extends Signal
    {
        boolean onCopy(File source, File destination, FIXME flags, FIXME cancellable, FIXME progressCallback, FIXME progressCallbackData);
    }

    static final void connect(File self, GFile.CopySignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "copy", after);
    }

    protected static final boolean receiveCopy(Signal handler, long source, long destination, java.lang.Object flags, java.lang.Object cancellable, java.lang.Object progressCallback, java.lang.Object progressCallbackData) {
        boolean result;

        result = ((GFile.CopySignal) handler).onCopy((File) objectFor(source), (File) objectFor(destination), (FIXME) flags, (FIXME) cancellable, (FIXME) progressCallback, (FIXME) progressCallbackData);

        return result;
    }

    interface CopyAsyncSignal extends Signal
    {
        void onCopyAsync(File source, File destination, FIXME flags, int ioPriority, FIXME cancellable, FIXME progressCallback, FIXME progressCallbackData, FIXME callback, FIXME userData);
    }

    static final void connect(File self, GFile.CopyAsyncSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "copy-async", after);
    }

    protected static final void receiveCopyAsync(Signal handler, long source, long destination, java.lang.Object flags, int ioPriority, java.lang.Object cancellable, java.lang.Object progressCallback, java.lang.Object progressCallbackData, java.lang.Object callback, java.lang.Object userData) {
        ((GFile.CopyAsyncSignal) handler).onCopyAsync((File) objectFor(source), (File) objectFor(destination), (FIXME) flags, ioPriority, (FIXME) cancellable, (FIXME) progressCallback, (FIXME) progressCallbackData, (FIXME) callback, (FIXME) userData);
    }

    interface CopyFinishSignal extends Signal
    {
        boolean onCopyFinish(File source, FIXME res);
    }

    static final void connect(File self, GFile.CopyFinishSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "copy-finish", after);
    }

    protected static final boolean receiveCopyFinish(Signal handler, long source, java.lang.Object res) {
        boolean result;

        result = ((GFile.CopyFinishSignal) handler).onCopyFinish((File) objectFor(source), (FIXME) res);

        return result;
    }

    interface CreateSignal extends Signal
    {
        FIXME onCreate(File source, FIXME flags, FIXME cancellable);
    }

    static final void connect(File self, GFile.CreateSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "create", after);
    }

    protected static final java.lang.Object receiveCreate(Signal handler, long source, java.lang.Object flags, java.lang.Object cancellable) {
        FIXME result;

        result = ((GFile.CreateSignal) handler).onCreate((File) objectFor(source), (FIXME) flags, (FIXME) cancellable);

        return result;
    }

    interface CreateAsyncSignal extends Signal
    {
        void onCreateAsync(File source, FIXME flags, int ioPriority, FIXME cancellable, FIXME callback, FIXME userData);
    }

    static final void connect(File self, GFile.CreateAsyncSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "create-async", after);
    }

    protected static final void receiveCreateAsync(Signal handler, long source, java.lang.Object flags, int ioPriority, java.lang.Object cancellable, java.lang.Object callback, java.lang.Object userData) {
        ((GFile.CreateAsyncSignal) handler).onCreateAsync((File) objectFor(source), (FIXME) flags, ioPriority, (FIXME) cancellable, (FIXME) callback, (FIXME) userData);
    }

    interface CreateFinishSignal extends Signal
    {
        FIXME onCreateFinish(File source, FIXME res);
    }

    static final void connect(File self, GFile.CreateFinishSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "create-finish", after);
    }

    protected static final java.lang.Object receiveCreateFinish(Signal handler, long source, java.lang.Object res) {
        FIXME result;

        result = ((GFile.CreateFinishSignal) handler).onCreateFinish((File) objectFor(source), (FIXME) res);

        return result;
    }

    interface CreateReadwriteSignal extends Signal
    {
        FIXME onCreateReadwrite(File source, FIXME flags, FIXME cancellable);
    }

    static final void connect(File self, GFile.CreateReadwriteSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "create-readwrite", after);
    }

    protected static final java.lang.Object receiveCreateReadwrite(Signal handler, long source, java.lang.Object flags, java.lang.Object cancellable) {
        FIXME result;

        result = ((GFile.CreateReadwriteSignal) handler).onCreateReadwrite((File) objectFor(source), (FIXME) flags, (FIXME) cancellable);

        return result;
    }

    interface CreateReadwriteAsyncSignal extends Signal
    {
        void onCreateReadwriteAsync(File source, FIXME flags, int ioPriority, FIXME cancellable, FIXME callback, FIXME userData);
    }

    static final void connect(File self, GFile.CreateReadwriteAsyncSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "create-readwrite-async", after);
    }

    protected static final void receiveCreateReadwriteAsync(Signal handler, long source, java.lang.Object flags, int ioPriority, java.lang.Object cancellable, java.lang.Object callback, java.lang.Object userData) {
        ((GFile.CreateReadwriteAsyncSignal) handler).onCreateReadwriteAsync((File) objectFor(source), (FIXME) flags, ioPriority, (FIXME) cancellable, (FIXME) callback, (FIXME) userData);
    }

    interface CreateReadwriteFinishSignal extends Signal
    {
        FIXME onCreateReadwriteFinish(File source, FIXME res);
    }

    static final void connect(File self, GFile.CreateReadwriteFinishSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "create-readwrite-finish", after);
    }

    protected static final java.lang.Object receiveCreateReadwriteFinish(Signal handler, long source, java.lang.Object res) {
        FIXME result;

        result = ((GFile.CreateReadwriteFinishSignal) handler).onCreateReadwriteFinish((File) objectFor(source), (FIXME) res);

        return result;
    }

    interface DeleteFileSignal extends Signal
    {
        boolean onDeleteFile(File source, FIXME cancellable);
    }

    static final void connect(File self, GFile.DeleteFileSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "delete-file", after);
    }

    protected static final boolean receiveDeleteFile(Signal handler, long source, java.lang.Object cancellable) {
        boolean result;

        result = ((GFile.DeleteFileSignal) handler).onDeleteFile((File) objectFor(source), (FIXME) cancellable);

        return result;
    }

    interface DeleteFileAsyncSignal extends Signal
    {
        void onDeleteFileAsync(File source, int ioPriority, FIXME cancellable, FIXME callback, FIXME userData);
    }

    static final void connect(File self, GFile.DeleteFileAsyncSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "delete-file-async", after);
    }

    protected static final void receiveDeleteFileAsync(Signal handler, long source, int ioPriority, java.lang.Object cancellable, java.lang.Object callback, java.lang.Object userData) {
        ((GFile.DeleteFileAsyncSignal) handler).onDeleteFileAsync((File) objectFor(source), ioPriority, (FIXME) cancellable, (FIXME) callback, (FIXME) userData);
    }

    interface DeleteFileFinishSignal extends Signal
    {
        boolean onDeleteFileFinish(File source, FIXME result0);
    }

    static final void connect(File self, GFile.DeleteFileFinishSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "delete-file-finish", after);
    }

    protected static final boolean receiveDeleteFileFinish(Signal handler, long source, java.lang.Object result0) {
        boolean result;

        result = ((GFile.DeleteFileFinishSignal) handler).onDeleteFileFinish((File) objectFor(source), (FIXME) result0);

        return result;
    }

    interface DupSignal extends Signal
    {
        File onDup(File source);
    }

    static final void connect(File self, GFile.DupSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "dup", after);
    }

    protected static final long receiveDup(Signal handler, long source) {
        File result;

        result = ((GFile.DupSignal) handler).onDup((File) objectFor(source));

        return pointerOf((Object) result);
    }

    interface EjectMountableSignal extends Signal
    {
        void onEjectMountable(File source, FIXME flags, FIXME cancellable, FIXME callback, FIXME userData);
    }

    static final void connect(File self, GFile.EjectMountableSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "eject-mountable", after);
    }

    protected static final void receiveEjectMountable(Signal handler, long source, java.lang.Object flags, java.lang.Object cancellable, java.lang.Object callback, java.lang.Object userData) {
        ((GFile.EjectMountableSignal) handler).onEjectMountable((File) objectFor(source), (FIXME) flags, (FIXME) cancellable, (FIXME) callback, (FIXME) userData);
    }

    interface EjectMountableFinishSignal extends Signal
    {
        boolean onEjectMountableFinish(File source, FIXME result0);
    }

    static final void connect(File self, GFile.EjectMountableFinishSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "eject-mountable-finish", after);
    }

    protected static final boolean receiveEjectMountableFinish(Signal handler, long source, java.lang.Object result0) {
        boolean result;

        result = ((GFile.EjectMountableFinishSignal) handler).onEjectMountableFinish((File) objectFor(source), (FIXME) result0);

        return result;
    }

    interface EjectMountableWithOperationSignal extends Signal
    {
        void onEjectMountableWithOperation(File source, FIXME flags, FIXME mountOperation, FIXME cancellable, FIXME callback, FIXME userData);
    }

    static final void connect(File self, GFile.EjectMountableWithOperationSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "eject-mountable-with-operation", after);
    }

    protected static final void receiveEjectMountableWithOperation(Signal handler, long source, java.lang.Object flags, java.lang.Object mountOperation, java.lang.Object cancellable, java.lang.Object callback, java.lang.Object userData) {
        ((GFile.EjectMountableWithOperationSignal) handler).onEjectMountableWithOperation((File) objectFor(source), (FIXME) flags, (FIXME) mountOperation, (FIXME) cancellable, (FIXME) callback, (FIXME) userData);
    }

    interface EjectMountableWithOperationFinishSignal extends Signal
    {
        boolean onEjectMountableWithOperationFinish(File source, FIXME result0);
    }

    static final void connect(File self, GFile.EjectMountableWithOperationFinishSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "eject-mountable-with-operation-finish", after);
    }

    protected static final boolean receiveEjectMountableWithOperationFinish(Signal handler, long source, java.lang.Object result0) {
        boolean result;

        result = ((GFile.EjectMountableWithOperationFinishSignal) handler).onEjectMountableWithOperationFinish((File) objectFor(source), (FIXME) result0);

        return result;
    }

    interface EnumerateChildrenSignal extends Signal
    {
        FIXME onEnumerateChildren(File source, String attributes, FIXME flags, FIXME cancellable);
    }

    static final void connect(File self, GFile.EnumerateChildrenSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "enumerate-children", after);
    }

    protected static final java.lang.Object receiveEnumerateChildren(Signal handler, long source, String attributes, java.lang.Object flags, java.lang.Object cancellable) {
        FIXME result;

        result = ((GFile.EnumerateChildrenSignal) handler).onEnumerateChildren((File) objectFor(source), attributes, (FIXME) flags, (FIXME) cancellable);

        return result;
    }

    interface EnumerateChildrenAsyncSignal extends Signal
    {
        void onEnumerateChildrenAsync(File source, String attributes, FIXME flags, int ioPriority, FIXME cancellable, FIXME callback, FIXME userData);
    }

    static final void connect(File self, GFile.EnumerateChildrenAsyncSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "enumerate-children-async", after);
    }

    protected static final void receiveEnumerateChildrenAsync(Signal handler, long source, String attributes, java.lang.Object flags, int ioPriority, java.lang.Object cancellable, java.lang.Object callback, java.lang.Object userData) {
        ((GFile.EnumerateChildrenAsyncSignal) handler).onEnumerateChildrenAsync((File) objectFor(source), attributes, (FIXME) flags, ioPriority, (FIXME) cancellable, (FIXME) callback, (FIXME) userData);
    }

    interface EnumerateChildrenFinishSignal extends Signal
    {
        FIXME onEnumerateChildrenFinish(File source, FIXME res);
    }

    static final void connect(File self, GFile.EnumerateChildrenFinishSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "enumerate-children-finish", after);
    }

    protected static final java.lang.Object receiveEnumerateChildrenFinish(Signal handler, long source, java.lang.Object res) {
        FIXME result;

        result = ((GFile.EnumerateChildrenFinishSignal) handler).onEnumerateChildrenFinish((File) objectFor(source), (FIXME) res);

        return result;
    }

    interface EqualSignal extends Signal
    {
        boolean onEqual(File source, File file2);
    }

    static final void connect(File self, GFile.EqualSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "equal", after);
    }

    protected static final boolean receiveEqual(Signal handler, long source, long file2) {
        boolean result;

        result = ((GFile.EqualSignal) handler).onEqual((File) objectFor(source), (File) objectFor(file2));

        return result;
    }

    interface FindEnclosingMountSignal extends Signal
    {
        FIXME onFindEnclosingMount(File source, FIXME cancellable);
    }

    static final void connect(File self, GFile.FindEnclosingMountSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "find-enclosing-mount", after);
    }

    protected static final java.lang.Object receiveFindEnclosingMount(Signal handler, long source, java.lang.Object cancellable) {
        FIXME result;

        result = ((GFile.FindEnclosingMountSignal) handler).onFindEnclosingMount((File) objectFor(source), (FIXME) cancellable);

        return result;
    }

    interface FindEnclosingMountAsyncSignal extends Signal
    {
        void onFindEnclosingMountAsync(File source, int ioPriority, FIXME cancellable, FIXME callback, FIXME userData);
    }

    static final void connect(File self, GFile.FindEnclosingMountAsyncSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "find-enclosing-mount-async", after);
    }

    protected static final void receiveFindEnclosingMountAsync(Signal handler, long source, int ioPriority, java.lang.Object cancellable, java.lang.Object callback, java.lang.Object userData) {
        ((GFile.FindEnclosingMountAsyncSignal) handler).onFindEnclosingMountAsync((File) objectFor(source), ioPriority, (FIXME) cancellable, (FIXME) callback, (FIXME) userData);
    }

    interface FindEnclosingMountFinishSignal extends Signal
    {
        FIXME onFindEnclosingMountFinish(File source, FIXME res);
    }

    static final void connect(File self, GFile.FindEnclosingMountFinishSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "find-enclosing-mount-finish", after);
    }

    protected static final java.lang.Object receiveFindEnclosingMountFinish(Signal handler, long source, java.lang.Object res) {
        FIXME result;

        result = ((GFile.FindEnclosingMountFinishSignal) handler).onFindEnclosingMountFinish((File) objectFor(source), (FIXME) res);

        return result;
    }

    interface GetBasenameSignal extends Signal
    {
        String onGetBasename(File source);
    }

    static final void connect(File self, GFile.GetBasenameSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "get-basename", after);
    }

    protected static final String receiveGetBasename(Signal handler, long source) {
        String result;

        result = ((GFile.GetBasenameSignal) handler).onGetBasename((File) objectFor(source));

        return result;
    }

    interface GetChildForDisplayNameSignal extends Signal
    {
        File onGetChildForDisplayName(File source, String displayName);
    }

    static final void connect(File self, GFile.GetChildForDisplayNameSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "get-child-for-display-name", after);
    }

    protected static final long receiveGetChildForDisplayName(Signal handler, long source, String displayName) {
        File result;

        result = ((GFile.GetChildForDisplayNameSignal) handler).onGetChildForDisplayName((File) objectFor(source), displayName);

        return pointerOf((Object) result);
    }

    interface GetParentSignal extends Signal
    {
        File onGetParent(File source);
    }

    static final void connect(File self, GFile.GetParentSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "get-parent", after);
    }

    protected static final long receiveGetParent(Signal handler, long source) {
        File result;

        result = ((GFile.GetParentSignal) handler).onGetParent((File) objectFor(source));

        return pointerOf((Object) result);
    }

    interface GetParseNameSignal extends Signal
    {
        String onGetParseName(File source);
    }

    static final void connect(File self, GFile.GetParseNameSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "get-parse-name", after);
    }

    protected static final String receiveGetParseName(Signal handler, long source) {
        String result;

        result = ((GFile.GetParseNameSignal) handler).onGetParseName((File) objectFor(source));

        return result;
    }

    interface GetPathSignal extends Signal
    {
        String onGetPath(File source);
    }

    static final void connect(File self, GFile.GetPathSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "get-path", after);
    }

    protected static final String receiveGetPath(Signal handler, long source) {
        String result;

        result = ((GFile.GetPathSignal) handler).onGetPath((File) objectFor(source));

        return result;
    }

    interface GetRelativePathSignal extends Signal
    {
        String onGetRelativePath(File source, File descendant);
    }

    static final void connect(File self, GFile.GetRelativePathSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "get-relative-path", after);
    }

    protected static final String receiveGetRelativePath(Signal handler, long source, long descendant) {
        String result;

        result = ((GFile.GetRelativePathSignal) handler).onGetRelativePath((File) objectFor(source), (File) objectFor(descendant));

        return result;
    }

    interface GetUriSignal extends Signal
    {
        String onGetUri(File source);
    }

    static final void connect(File self, GFile.GetUriSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "get-uri", after);
    }

    protected static final String receiveGetUri(Signal handler, long source) {
        String result;

        result = ((GFile.GetUriSignal) handler).onGetUri((File) objectFor(source));

        return result;
    }

    interface GetUriSchemeSignal extends Signal
    {
        String onGetUriScheme(File source);
    }

    static final void connect(File self, GFile.GetUriSchemeSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "get-uri-scheme", after);
    }

    protected static final String receiveGetUriScheme(Signal handler, long source) {
        String result;

        result = ((GFile.GetUriSchemeSignal) handler).onGetUriScheme((File) objectFor(source));

        return result;
    }

    interface HasUriSchemeSignal extends Signal
    {
        boolean onHasUriScheme(File source, String uriScheme);
    }

    static final void connect(File self, GFile.HasUriSchemeSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "has-uri-scheme", after);
    }

    protected static final boolean receiveHasUriScheme(Signal handler, long source, String uriScheme) {
        boolean result;

        result = ((GFile.HasUriSchemeSignal) handler).onHasUriScheme((File) objectFor(source), uriScheme);

        return result;
    }

    interface HashSignal extends Signal
    {
        int onHash(File source);
    }

    static final void connect(File self, GFile.HashSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "hash", after);
    }

    protected static final int receiveHash(Signal handler, long source) {
        int result;

        result = ((GFile.HashSignal) handler).onHash((File) objectFor(source));

        return result;
    }

    interface IsNativeSignal extends Signal
    {
        boolean onIsNative(File source);
    }

    static final void connect(File self, GFile.IsNativeSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "is-native", after);
    }

    protected static final boolean receiveIsNative(Signal handler, long source) {
        boolean result;

        result = ((GFile.IsNativeSignal) handler).onIsNative((File) objectFor(source));

        return result;
    }

    interface MakeDirectorySignal extends Signal
    {
        boolean onMakeDirectory(File source, FIXME cancellable);
    }

    static final void connect(File self, GFile.MakeDirectorySignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "make-directory", after);
    }

    protected static final boolean receiveMakeDirectory(Signal handler, long source, java.lang.Object cancellable) {
        boolean result;

        result = ((GFile.MakeDirectorySignal) handler).onMakeDirectory((File) objectFor(source), (FIXME) cancellable);

        return result;
    }

    interface MakeDirectoryAsyncSignal extends Signal
    {
        void onMakeDirectoryAsync(File source, int ioPriority, FIXME cancellable, FIXME callback, FIXME userData);
    }

    static final void connect(File self, GFile.MakeDirectoryAsyncSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "make-directory-async", after);
    }

    protected static final void receiveMakeDirectoryAsync(Signal handler, long source, int ioPriority, java.lang.Object cancellable, java.lang.Object callback, java.lang.Object userData) {
        ((GFile.MakeDirectoryAsyncSignal) handler).onMakeDirectoryAsync((File) objectFor(source), ioPriority, (FIXME) cancellable, (FIXME) callback, (FIXME) userData);
    }

    interface MakeDirectoryFinishSignal extends Signal
    {
        boolean onMakeDirectoryFinish(File source, FIXME result0);
    }

    static final void connect(File self, GFile.MakeDirectoryFinishSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "make-directory-finish", after);
    }

    protected static final boolean receiveMakeDirectoryFinish(Signal handler, long source, java.lang.Object result0) {
        boolean result;

        result = ((GFile.MakeDirectoryFinishSignal) handler).onMakeDirectoryFinish((File) objectFor(source), (FIXME) result0);

        return result;
    }

    interface MakeSymbolicLinkSignal extends Signal
    {
        boolean onMakeSymbolicLink(File source, String symlinkValue, FIXME cancellable);
    }

    static final void connect(File self, GFile.MakeSymbolicLinkSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "make-symbolic-link", after);
    }

    protected static final boolean receiveMakeSymbolicLink(Signal handler, long source, String symlinkValue, java.lang.Object cancellable) {
        boolean result;

        result = ((GFile.MakeSymbolicLinkSignal) handler).onMakeSymbolicLink((File) objectFor(source), symlinkValue, (FIXME) cancellable);

        return result;
    }

    interface MeasureDiskUsageSignal extends Signal
    {
        boolean onMeasureDiskUsage(File source, FIXME flags, FIXME cancellable, FIXME progressCallback, FIXME progressData, FIXME diskUsage, FIXME numDirs, FIXME numFiles);
    }

    static final void connect(File self, GFile.MeasureDiskUsageSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "measure-disk-usage", after);
    }

    protected static final boolean receiveMeasureDiskUsage(Signal handler, long source, java.lang.Object flags, java.lang.Object cancellable, java.lang.Object progressCallback, java.lang.Object progressData, java.lang.Object diskUsage, java.lang.Object numDirs, java.lang.Object numFiles) {
        boolean result;

        result = ((GFile.MeasureDiskUsageSignal) handler).onMeasureDiskUsage((File) objectFor(source), (FIXME) flags, (FIXME) cancellable, (FIXME) progressCallback, (FIXME) progressData, (FIXME) diskUsage, (FIXME) numDirs, (FIXME) numFiles);

        return result;
    }

    interface MeasureDiskUsageAsyncSignal extends Signal
    {
        void onMeasureDiskUsageAsync(File source, FIXME flags, int ioPriority, FIXME cancellable, FIXME progressCallback, FIXME progressData, FIXME callback, FIXME userData);
    }

    static final void connect(File self, GFile.MeasureDiskUsageAsyncSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "measure-disk-usage-async", after);
    }

    protected static final void receiveMeasureDiskUsageAsync(Signal handler, long source, java.lang.Object flags, int ioPriority, java.lang.Object cancellable, java.lang.Object progressCallback, java.lang.Object progressData, java.lang.Object callback, java.lang.Object userData) {
        ((GFile.MeasureDiskUsageAsyncSignal) handler).onMeasureDiskUsageAsync((File) objectFor(source), (FIXME) flags, ioPriority, (FIXME) cancellable, (FIXME) progressCallback, (FIXME) progressData, (FIXME) callback, (FIXME) userData);
    }

    interface MeasureDiskUsageFinishSignal extends Signal
    {
        boolean onMeasureDiskUsageFinish(File source, FIXME result0, FIXME diskUsage, FIXME numDirs, FIXME numFiles);
    }

    static final void connect(File self, GFile.MeasureDiskUsageFinishSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "measure-disk-usage-finish", after);
    }

    protected static final boolean receiveMeasureDiskUsageFinish(Signal handler, long source, java.lang.Object result0, java.lang.Object diskUsage, java.lang.Object numDirs, java.lang.Object numFiles) {
        boolean result;

        result = ((GFile.MeasureDiskUsageFinishSignal) handler).onMeasureDiskUsageFinish((File) objectFor(source), (FIXME) result0, (FIXME) diskUsage, (FIXME) numDirs, (FIXME) numFiles);

        return result;
    }

    interface MonitorDirSignal extends Signal
    {
        FIXME onMonitorDir(File source, FIXME flags, FIXME cancellable);
    }

    static final void connect(File self, GFile.MonitorDirSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "monitor-dir", after);
    }

    protected static final java.lang.Object receiveMonitorDir(Signal handler, long source, java.lang.Object flags, java.lang.Object cancellable) {
        FIXME result;

        result = ((GFile.MonitorDirSignal) handler).onMonitorDir((File) objectFor(source), (FIXME) flags, (FIXME) cancellable);

        return result;
    }

    interface MonitorFileSignal extends Signal
    {
        FIXME onMonitorFile(File source, FIXME flags, FIXME cancellable);
    }

    static final void connect(File self, GFile.MonitorFileSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "monitor-file", after);
    }

    protected static final java.lang.Object receiveMonitorFile(Signal handler, long source, java.lang.Object flags, java.lang.Object cancellable) {
        FIXME result;

        result = ((GFile.MonitorFileSignal) handler).onMonitorFile((File) objectFor(source), (FIXME) flags, (FIXME) cancellable);

        return result;
    }

    interface MountEnclosingVolumeSignal extends Signal
    {
        void onMountEnclosingVolume(File source, FIXME flags, FIXME mountOperation, FIXME cancellable, FIXME callback, FIXME userData);
    }

    static final void connect(File self, GFile.MountEnclosingVolumeSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "mount-enclosing-volume", after);
    }

    protected static final void receiveMountEnclosingVolume(Signal handler, long source, java.lang.Object flags, java.lang.Object mountOperation, java.lang.Object cancellable, java.lang.Object callback, java.lang.Object userData) {
        ((GFile.MountEnclosingVolumeSignal) handler).onMountEnclosingVolume((File) objectFor(source), (FIXME) flags, (FIXME) mountOperation, (FIXME) cancellable, (FIXME) callback, (FIXME) userData);
    }

    interface MountEnclosingVolumeFinishSignal extends Signal
    {
        boolean onMountEnclosingVolumeFinish(File source, FIXME result0);
    }

    static final void connect(File self, GFile.MountEnclosingVolumeFinishSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "mount-enclosing-volume-finish", after);
    }

    protected static final boolean receiveMountEnclosingVolumeFinish(Signal handler, long source, java.lang.Object result0) {
        boolean result;

        result = ((GFile.MountEnclosingVolumeFinishSignal) handler).onMountEnclosingVolumeFinish((File) objectFor(source), (FIXME) result0);

        return result;
    }

    interface MountMountableSignal extends Signal
    {
        void onMountMountable(File source, FIXME flags, FIXME mountOperation, FIXME cancellable, FIXME callback, FIXME userData);
    }

    static final void connect(File self, GFile.MountMountableSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "mount-mountable", after);
    }

    protected static final void receiveMountMountable(Signal handler, long source, java.lang.Object flags, java.lang.Object mountOperation, java.lang.Object cancellable, java.lang.Object callback, java.lang.Object userData) {
        ((GFile.MountMountableSignal) handler).onMountMountable((File) objectFor(source), (FIXME) flags, (FIXME) mountOperation, (FIXME) cancellable, (FIXME) callback, (FIXME) userData);
    }

    interface MountMountableFinishSignal extends Signal
    {
        File onMountMountableFinish(File source, FIXME result0);
    }

    static final void connect(File self, GFile.MountMountableFinishSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "mount-mountable-finish", after);
    }

    protected static final long receiveMountMountableFinish(Signal handler, long source, java.lang.Object result0) {
        File result;

        result = ((GFile.MountMountableFinishSignal) handler).onMountMountableFinish((File) objectFor(source), (FIXME) result0);

        return pointerOf((Object) result);
    }

    interface MoveSignal extends Signal
    {
        boolean onMove(File source, File destination, FIXME flags, FIXME cancellable, FIXME progressCallback, FIXME progressCallbackData);
    }

    static final void connect(File self, GFile.MoveSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "move", after);
    }

    protected static final boolean receiveMove(Signal handler, long source, long destination, java.lang.Object flags, java.lang.Object cancellable, java.lang.Object progressCallback, java.lang.Object progressCallbackData) {
        boolean result;

        result = ((GFile.MoveSignal) handler).onMove((File) objectFor(source), (File) objectFor(destination), (FIXME) flags, (FIXME) cancellable, (FIXME) progressCallback, (FIXME) progressCallbackData);

        return result;
    }

    interface OpenReadwriteSignal extends Signal
    {
        FIXME onOpenReadwrite(File source, FIXME cancellable);
    }

    static final void connect(File self, GFile.OpenReadwriteSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "open-readwrite", after);
    }

    protected static final java.lang.Object receiveOpenReadwrite(Signal handler, long source, java.lang.Object cancellable) {
        FIXME result;

        result = ((GFile.OpenReadwriteSignal) handler).onOpenReadwrite((File) objectFor(source), (FIXME) cancellable);

        return result;
    }

    interface OpenReadwriteAsyncSignal extends Signal
    {
        void onOpenReadwriteAsync(File source, int ioPriority, FIXME cancellable, FIXME callback, FIXME userData);
    }

    static final void connect(File self, GFile.OpenReadwriteAsyncSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "open-readwrite-async", after);
    }

    protected static final void receiveOpenReadwriteAsync(Signal handler, long source, int ioPriority, java.lang.Object cancellable, java.lang.Object callback, java.lang.Object userData) {
        ((GFile.OpenReadwriteAsyncSignal) handler).onOpenReadwriteAsync((File) objectFor(source), ioPriority, (FIXME) cancellable, (FIXME) callback, (FIXME) userData);
    }

    interface OpenReadwriteFinishSignal extends Signal
    {
        FIXME onOpenReadwriteFinish(File source, FIXME res);
    }

    static final void connect(File self, GFile.OpenReadwriteFinishSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "open-readwrite-finish", after);
    }

    protected static final java.lang.Object receiveOpenReadwriteFinish(Signal handler, long source, java.lang.Object res) {
        FIXME result;

        result = ((GFile.OpenReadwriteFinishSignal) handler).onOpenReadwriteFinish((File) objectFor(source), (FIXME) res);

        return result;
    }

    interface PollMountableSignal extends Signal
    {
        void onPollMountable(File source, FIXME cancellable, FIXME callback, FIXME userData);
    }

    static final void connect(File self, GFile.PollMountableSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "poll-mountable", after);
    }

    protected static final void receivePollMountable(Signal handler, long source, java.lang.Object cancellable, java.lang.Object callback, java.lang.Object userData) {
        ((GFile.PollMountableSignal) handler).onPollMountable((File) objectFor(source), (FIXME) cancellable, (FIXME) callback, (FIXME) userData);
    }

    interface PollMountableFinishSignal extends Signal
    {
        boolean onPollMountableFinish(File source, FIXME result0);
    }

    static final void connect(File self, GFile.PollMountableFinishSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "poll-mountable-finish", after);
    }

    protected static final boolean receivePollMountableFinish(Signal handler, long source, java.lang.Object result0) {
        boolean result;

        result = ((GFile.PollMountableFinishSignal) handler).onPollMountableFinish((File) objectFor(source), (FIXME) result0);

        return result;
    }

    interface PrefixMatchesSignal extends Signal
    {
        boolean onPrefixMatches(File source, File file);
    }

    static final void connect(File self, GFile.PrefixMatchesSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "prefix-matches", after);
    }

    protected static final boolean receivePrefixMatches(Signal handler, long source, long file) {
        boolean result;

        result = ((GFile.PrefixMatchesSignal) handler).onPrefixMatches((File) objectFor(source), (File) objectFor(file));

        return result;
    }

    interface QueryFilesystemInfoSignal extends Signal
    {
        FIXME onQueryFilesystemInfo(File source, String attributes, FIXME cancellable);
    }

    static final void connect(File self, GFile.QueryFilesystemInfoSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "query-filesystem-info", after);
    }

    protected static final java.lang.Object receiveQueryFilesystemInfo(Signal handler, long source, String attributes, java.lang.Object cancellable) {
        FIXME result;

        result = ((GFile.QueryFilesystemInfoSignal) handler).onQueryFilesystemInfo((File) objectFor(source), attributes, (FIXME) cancellable);

        return result;
    }

    interface QueryFilesystemInfoAsyncSignal extends Signal
    {
        void onQueryFilesystemInfoAsync(File source, String attributes, int ioPriority, FIXME cancellable, FIXME callback, FIXME userData);
    }

    static final void connect(File self, GFile.QueryFilesystemInfoAsyncSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "query-filesystem-info-async", after);
    }

    protected static final void receiveQueryFilesystemInfoAsync(Signal handler, long source, String attributes, int ioPriority, java.lang.Object cancellable, java.lang.Object callback, java.lang.Object userData) {
        ((GFile.QueryFilesystemInfoAsyncSignal) handler).onQueryFilesystemInfoAsync((File) objectFor(source), attributes, ioPriority, (FIXME) cancellable, (FIXME) callback, (FIXME) userData);
    }

    interface QueryFilesystemInfoFinishSignal extends Signal
    {
        FIXME onQueryFilesystemInfoFinish(File source, FIXME res);
    }

    static final void connect(File self, GFile.QueryFilesystemInfoFinishSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "query-filesystem-info-finish", after);
    }

    protected static final java.lang.Object receiveQueryFilesystemInfoFinish(Signal handler, long source, java.lang.Object res) {
        FIXME result;

        result = ((GFile.QueryFilesystemInfoFinishSignal) handler).onQueryFilesystemInfoFinish((File) objectFor(source), (FIXME) res);

        return result;
    }

    interface QueryInfoSignal extends Signal
    {
        FIXME onQueryInfo(File source, String attributes, FIXME flags, FIXME cancellable);
    }

    static final void connect(File self, GFile.QueryInfoSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "query-info", after);
    }

    protected static final java.lang.Object receiveQueryInfo(Signal handler, long source, String attributes, java.lang.Object flags, java.lang.Object cancellable) {
        FIXME result;

        result = ((GFile.QueryInfoSignal) handler).onQueryInfo((File) objectFor(source), attributes, (FIXME) flags, (FIXME) cancellable);

        return result;
    }

    interface QueryInfoAsyncSignal extends Signal
    {
        void onQueryInfoAsync(File source, String attributes, FIXME flags, int ioPriority, FIXME cancellable, FIXME callback, FIXME userData);
    }

    static final void connect(File self, GFile.QueryInfoAsyncSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "query-info-async", after);
    }

    protected static final void receiveQueryInfoAsync(Signal handler, long source, String attributes, java.lang.Object flags, int ioPriority, java.lang.Object cancellable, java.lang.Object callback, java.lang.Object userData) {
        ((GFile.QueryInfoAsyncSignal) handler).onQueryInfoAsync((File) objectFor(source), attributes, (FIXME) flags, ioPriority, (FIXME) cancellable, (FIXME) callback, (FIXME) userData);
    }

    interface QueryInfoFinishSignal extends Signal
    {
        FIXME onQueryInfoFinish(File source, FIXME res);
    }

    static final void connect(File self, GFile.QueryInfoFinishSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "query-info-finish", after);
    }

    protected static final java.lang.Object receiveQueryInfoFinish(Signal handler, long source, java.lang.Object res) {
        FIXME result;

        result = ((GFile.QueryInfoFinishSignal) handler).onQueryInfoFinish((File) objectFor(source), (FIXME) res);

        return result;
    }

    interface QuerySettableAttributesSignal extends Signal
    {
        FIXME onQuerySettableAttributes(File source, FIXME cancellable);
    }

    static final void connect(File self, GFile.QuerySettableAttributesSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "query-settable-attributes", after);
    }

    protected static final java.lang.Object receiveQuerySettableAttributes(Signal handler, long source, java.lang.Object cancellable) {
        FIXME result;

        result = ((GFile.QuerySettableAttributesSignal) handler).onQuerySettableAttributes((File) objectFor(source), (FIXME) cancellable);

        return result;
    }

    interface QueryWritableNamespacesSignal extends Signal
    {
        FIXME onQueryWritableNamespaces(File source, FIXME cancellable);
    }

    static final void connect(File self, GFile.QueryWritableNamespacesSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "query-writable-namespaces", after);
    }

    protected static final java.lang.Object receiveQueryWritableNamespaces(Signal handler, long source, java.lang.Object cancellable) {
        FIXME result;

        result = ((GFile.QueryWritableNamespacesSignal) handler).onQueryWritableNamespaces((File) objectFor(source), (FIXME) cancellable);

        return result;
    }

    interface ReadAsyncSignal extends Signal
    {
        void onReadAsync(File source, int ioPriority, FIXME cancellable, FIXME callback, FIXME userData);
    }

    static final void connect(File self, GFile.ReadAsyncSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "read-async", after);
    }

    protected static final void receiveReadAsync(Signal handler, long source, int ioPriority, java.lang.Object cancellable, java.lang.Object callback, java.lang.Object userData) {
        ((GFile.ReadAsyncSignal) handler).onReadAsync((File) objectFor(source), ioPriority, (FIXME) cancellable, (FIXME) callback, (FIXME) userData);
    }

    interface ReadFinishSignal extends Signal
    {
        FIXME onReadFinish(File source, FIXME res);
    }

    static final void connect(File self, GFile.ReadFinishSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "read-finish", after);
    }

    protected static final java.lang.Object receiveReadFinish(Signal handler, long source, java.lang.Object res) {
        FIXME result;

        result = ((GFile.ReadFinishSignal) handler).onReadFinish((File) objectFor(source), (FIXME) res);

        return result;
    }

    interface ReadFnSignal extends Signal
    {
        FIXME onReadFn(File source, FIXME cancellable);
    }

    static final void connect(File self, GFile.ReadFnSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "read-fn", after);
    }

    protected static final java.lang.Object receiveReadFn(Signal handler, long source, java.lang.Object cancellable) {
        FIXME result;

        result = ((GFile.ReadFnSignal) handler).onReadFn((File) objectFor(source), (FIXME) cancellable);

        return result;
    }

    interface ReplaceSignal extends Signal
    {
        FIXME onReplace(File source, String etag, boolean makeBackup, FIXME flags, FIXME cancellable);
    }

    static final void connect(File self, GFile.ReplaceSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "replace", after);
    }

    protected static final java.lang.Object receiveReplace(Signal handler, long source, String etag, boolean makeBackup, java.lang.Object flags, java.lang.Object cancellable) {
        FIXME result;

        result = ((GFile.ReplaceSignal) handler).onReplace((File) objectFor(source), etag, makeBackup, (FIXME) flags, (FIXME) cancellable);

        return result;
    }

    interface ReplaceAsyncSignal extends Signal
    {
        void onReplaceAsync(File source, String etag, boolean makeBackup, FIXME flags, int ioPriority, FIXME cancellable, FIXME callback, FIXME userData);
    }

    static final void connect(File self, GFile.ReplaceAsyncSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "replace-async", after);
    }

    protected static final void receiveReplaceAsync(Signal handler, long source, String etag, boolean makeBackup, java.lang.Object flags, int ioPriority, java.lang.Object cancellable, java.lang.Object callback, java.lang.Object userData) {
        ((GFile.ReplaceAsyncSignal) handler).onReplaceAsync((File) objectFor(source), etag, makeBackup, (FIXME) flags, ioPriority, (FIXME) cancellable, (FIXME) callback, (FIXME) userData);
    }

    interface ReplaceFinishSignal extends Signal
    {
        FIXME onReplaceFinish(File source, FIXME res);
    }

    static final void connect(File self, GFile.ReplaceFinishSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "replace-finish", after);
    }

    protected static final java.lang.Object receiveReplaceFinish(Signal handler, long source, java.lang.Object res) {
        FIXME result;

        result = ((GFile.ReplaceFinishSignal) handler).onReplaceFinish((File) objectFor(source), (FIXME) res);

        return result;
    }

    interface ReplaceReadwriteSignal extends Signal
    {
        FIXME onReplaceReadwrite(File source, String etag, boolean makeBackup, FIXME flags, FIXME cancellable);
    }

    static final void connect(File self, GFile.ReplaceReadwriteSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "replace-readwrite", after);
    }

    protected static final java.lang.Object receiveReplaceReadwrite(Signal handler, long source, String etag, boolean makeBackup, java.lang.Object flags, java.lang.Object cancellable) {
        FIXME result;

        result = ((GFile.ReplaceReadwriteSignal) handler).onReplaceReadwrite((File) objectFor(source), etag, makeBackup, (FIXME) flags, (FIXME) cancellable);

        return result;
    }

    interface ReplaceReadwriteAsyncSignal extends Signal
    {
        void onReplaceReadwriteAsync(File source, String etag, boolean makeBackup, FIXME flags, int ioPriority, FIXME cancellable, FIXME callback, FIXME userData);
    }

    static final void connect(File self, GFile.ReplaceReadwriteAsyncSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "replace-readwrite-async", after);
    }

    protected static final void receiveReplaceReadwriteAsync(Signal handler, long source, String etag, boolean makeBackup, java.lang.Object flags, int ioPriority, java.lang.Object cancellable, java.lang.Object callback, java.lang.Object userData) {
        ((GFile.ReplaceReadwriteAsyncSignal) handler).onReplaceReadwriteAsync((File) objectFor(source), etag, makeBackup, (FIXME) flags, ioPriority, (FIXME) cancellable, (FIXME) callback, (FIXME) userData);
    }

    interface ReplaceReadwriteFinishSignal extends Signal
    {
        FIXME onReplaceReadwriteFinish(File source, FIXME res);
    }

    static final void connect(File self, GFile.ReplaceReadwriteFinishSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "replace-readwrite-finish", after);
    }

    protected static final java.lang.Object receiveReplaceReadwriteFinish(Signal handler, long source, java.lang.Object res) {
        FIXME result;

        result = ((GFile.ReplaceReadwriteFinishSignal) handler).onReplaceReadwriteFinish((File) objectFor(source), (FIXME) res);

        return result;
    }

    interface ResolveRelativePathSignal extends Signal
    {
        File onResolveRelativePath(File source, String relativePath);
    }

    static final void connect(File self, GFile.ResolveRelativePathSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "resolve-relative-path", after);
    }

    protected static final long receiveResolveRelativePath(Signal handler, long source, String relativePath) {
        File result;

        result = ((GFile.ResolveRelativePathSignal) handler).onResolveRelativePath((File) objectFor(source), relativePath);

        return pointerOf((Object) result);
    }

    interface SetAttributeSignal extends Signal
    {
        boolean onSetAttribute(File source, String attribute, FIXME type, FIXME valueP, FIXME flags, FIXME cancellable);
    }

    static final void connect(File self, GFile.SetAttributeSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "set-attribute", after);
    }

    protected static final boolean receiveSetAttribute(Signal handler, long source, String attribute, java.lang.Object type, java.lang.Object valueP, java.lang.Object flags, java.lang.Object cancellable) {
        boolean result;

        result = ((GFile.SetAttributeSignal) handler).onSetAttribute((File) objectFor(source), attribute, (FIXME) type, (FIXME) valueP, (FIXME) flags, (FIXME) cancellable);

        return result;
    }

    interface SetAttributesAsyncSignal extends Signal
    {
        void onSetAttributesAsync(File source, FIXME info, FIXME flags, int ioPriority, FIXME cancellable, FIXME callback, FIXME userData);
    }

    static final void connect(File self, GFile.SetAttributesAsyncSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "set-attributes-async", after);
    }

    protected static final void receiveSetAttributesAsync(Signal handler, long source, java.lang.Object info, java.lang.Object flags, int ioPriority, java.lang.Object cancellable, java.lang.Object callback, java.lang.Object userData) {
        ((GFile.SetAttributesAsyncSignal) handler).onSetAttributesAsync((File) objectFor(source), (FIXME) info, (FIXME) flags, ioPriority, (FIXME) cancellable, (FIXME) callback, (FIXME) userData);
    }

    interface SetAttributesFinishSignal extends Signal
    {
        boolean onSetAttributesFinish(File source, FIXME result0, FIXME info);
    }

    static final void connect(File self, GFile.SetAttributesFinishSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "set-attributes-finish", after);
    }

    protected static final boolean receiveSetAttributesFinish(Signal handler, long source, java.lang.Object result0, java.lang.Object info) {
        boolean result;

        result = ((GFile.SetAttributesFinishSignal) handler).onSetAttributesFinish((File) objectFor(source), (FIXME) result0, (FIXME) info);

        return result;
    }

    interface SetAttributesFromInfoSignal extends Signal
    {
        boolean onSetAttributesFromInfo(File source, FIXME info, FIXME flags, FIXME cancellable);
    }

    static final void connect(File self, GFile.SetAttributesFromInfoSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "set-attributes-from-info", after);
    }

    protected static final boolean receiveSetAttributesFromInfo(Signal handler, long source, java.lang.Object info, java.lang.Object flags, java.lang.Object cancellable) {
        boolean result;

        result = ((GFile.SetAttributesFromInfoSignal) handler).onSetAttributesFromInfo((File) objectFor(source), (FIXME) info, (FIXME) flags, (FIXME) cancellable);

        return result;
    }

    interface SetDisplayNameSignal extends Signal
    {
        File onSetDisplayName(File source, String displayName, FIXME cancellable);
    }

    static final void connect(File self, GFile.SetDisplayNameSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "set-display-name", after);
    }

    protected static final long receiveSetDisplayName(Signal handler, long source, String displayName, java.lang.Object cancellable) {
        File result;

        result = ((GFile.SetDisplayNameSignal) handler).onSetDisplayName((File) objectFor(source), displayName, (FIXME) cancellable);

        return pointerOf((Object) result);
    }

    interface SetDisplayNameAsyncSignal extends Signal
    {
        void onSetDisplayNameAsync(File source, String displayName, int ioPriority, FIXME cancellable, FIXME callback, FIXME userData);
    }

    static final void connect(File self, GFile.SetDisplayNameAsyncSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "set-display-name-async", after);
    }

    protected static final void receiveSetDisplayNameAsync(Signal handler, long source, String displayName, int ioPriority, java.lang.Object cancellable, java.lang.Object callback, java.lang.Object userData) {
        ((GFile.SetDisplayNameAsyncSignal) handler).onSetDisplayNameAsync((File) objectFor(source), displayName, ioPriority, (FIXME) cancellable, (FIXME) callback, (FIXME) userData);
    }

    interface SetDisplayNameFinishSignal extends Signal
    {
        File onSetDisplayNameFinish(File source, FIXME res);
    }

    static final void connect(File self, GFile.SetDisplayNameFinishSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "set-display-name-finish", after);
    }

    protected static final long receiveSetDisplayNameFinish(Signal handler, long source, java.lang.Object res) {
        File result;

        result = ((GFile.SetDisplayNameFinishSignal) handler).onSetDisplayNameFinish((File) objectFor(source), (FIXME) res);

        return pointerOf((Object) result);
    }

    interface StartMountableSignal extends Signal
    {
        void onStartMountable(File source, FIXME flags, FIXME startOperation, FIXME cancellable, FIXME callback, FIXME userData);
    }

    static final void connect(File self, GFile.StartMountableSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "start-mountable", after);
    }

    protected static final void receiveStartMountable(Signal handler, long source, java.lang.Object flags, java.lang.Object startOperation, java.lang.Object cancellable, java.lang.Object callback, java.lang.Object userData) {
        ((GFile.StartMountableSignal) handler).onStartMountable((File) objectFor(source), (FIXME) flags, (FIXME) startOperation, (FIXME) cancellable, (FIXME) callback, (FIXME) userData);
    }

    interface StartMountableFinishSignal extends Signal
    {
        boolean onStartMountableFinish(File source, FIXME result0);
    }

    static final void connect(File self, GFile.StartMountableFinishSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "start-mountable-finish", after);
    }

    protected static final boolean receiveStartMountableFinish(Signal handler, long source, java.lang.Object result0) {
        boolean result;

        result = ((GFile.StartMountableFinishSignal) handler).onStartMountableFinish((File) objectFor(source), (FIXME) result0);

        return result;
    }

    interface StopMountableSignal extends Signal
    {
        void onStopMountable(File source, FIXME flags, FIXME mountOperation, FIXME cancellable, FIXME callback, FIXME userData);
    }

    static final void connect(File self, GFile.StopMountableSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "stop-mountable", after);
    }

    protected static final void receiveStopMountable(Signal handler, long source, java.lang.Object flags, java.lang.Object mountOperation, java.lang.Object cancellable, java.lang.Object callback, java.lang.Object userData) {
        ((GFile.StopMountableSignal) handler).onStopMountable((File) objectFor(source), (FIXME) flags, (FIXME) mountOperation, (FIXME) cancellable, (FIXME) callback, (FIXME) userData);
    }

    interface StopMountableFinishSignal extends Signal
    {
        boolean onStopMountableFinish(File source, FIXME result0);
    }

    static final void connect(File self, GFile.StopMountableFinishSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "stop-mountable-finish", after);
    }

    protected static final boolean receiveStopMountableFinish(Signal handler, long source, java.lang.Object result0) {
        boolean result;

        result = ((GFile.StopMountableFinishSignal) handler).onStopMountableFinish((File) objectFor(source), (FIXME) result0);

        return result;
    }

    interface TrashSignal extends Signal
    {
        boolean onTrash(File source, FIXME cancellable);
    }

    static final void connect(File self, GFile.TrashSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "trash", after);
    }

    protected static final boolean receiveTrash(Signal handler, long source, java.lang.Object cancellable) {
        boolean result;

        result = ((GFile.TrashSignal) handler).onTrash((File) objectFor(source), (FIXME) cancellable);

        return result;
    }

    interface TrashAsyncSignal extends Signal
    {
        void onTrashAsync(File source, int ioPriority, FIXME cancellable, FIXME callback, FIXME userData);
    }

    static final void connect(File self, GFile.TrashAsyncSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "trash-async", after);
    }

    protected static final void receiveTrashAsync(Signal handler, long source, int ioPriority, java.lang.Object cancellable, java.lang.Object callback, java.lang.Object userData) {
        ((GFile.TrashAsyncSignal) handler).onTrashAsync((File) objectFor(source), ioPriority, (FIXME) cancellable, (FIXME) callback, (FIXME) userData);
    }

    interface TrashFinishSignal extends Signal
    {
        boolean onTrashFinish(File source, FIXME result0);
    }

    static final void connect(File self, GFile.TrashFinishSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "trash-finish", after);
    }

    protected static final boolean receiveTrashFinish(Signal handler, long source, java.lang.Object result0) {
        boolean result;

        result = ((GFile.TrashFinishSignal) handler).onTrashFinish((File) objectFor(source), (FIXME) result0);

        return result;
    }

    interface UnmountMountableSignal extends Signal
    {
        void onUnmountMountable(File source, FIXME flags, FIXME cancellable, FIXME callback, FIXME userData);
    }

    static final void connect(File self, GFile.UnmountMountableSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "unmount-mountable", after);
    }

    protected static final void receiveUnmountMountable(Signal handler, long source, java.lang.Object flags, java.lang.Object cancellable, java.lang.Object callback, java.lang.Object userData) {
        ((GFile.UnmountMountableSignal) handler).onUnmountMountable((File) objectFor(source), (FIXME) flags, (FIXME) cancellable, (FIXME) callback, (FIXME) userData);
    }

    interface UnmountMountableFinishSignal extends Signal
    {
        boolean onUnmountMountableFinish(File source, FIXME result0);
    }

    static final void connect(File self, GFile.UnmountMountableFinishSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "unmount-mountable-finish", after);
    }

    protected static final boolean receiveUnmountMountableFinish(Signal handler, long source, java.lang.Object result0) {
        boolean result;

        result = ((GFile.UnmountMountableFinishSignal) handler).onUnmountMountableFinish((File) objectFor(source), (FIXME) result0);

        return result;
    }

    interface UnmountMountableWithOperationSignal extends Signal
    {
        void onUnmountMountableWithOperation(File source, FIXME flags, FIXME mountOperation, FIXME cancellable, FIXME callback, FIXME userData);
    }

    static final void connect(File self, GFile.UnmountMountableWithOperationSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "unmount-mountable-with-operation", after);
    }

    protected static final void receiveUnmountMountableWithOperation(Signal handler, long source, java.lang.Object flags, java.lang.Object mountOperation, java.lang.Object cancellable, java.lang.Object callback, java.lang.Object userData) {
        ((GFile.UnmountMountableWithOperationSignal) handler).onUnmountMountableWithOperation((File) objectFor(source), (FIXME) flags, (FIXME) mountOperation, (FIXME) cancellable, (FIXME) callback, (FIXME) userData);
    }

    interface UnmountMountableWithOperationFinishSignal extends Signal
    {
        boolean onUnmountMountableWithOperationFinish(File source, FIXME result0);
    }

    static final void connect(File self, GFile.UnmountMountableWithOperationFinishSignal handlerInstance, boolean after) {
        connectSignal((Object) self, handlerInstance, GFile.class, "unmount-mountable-with-operation-finish", after);
    }

    protected static final boolean receiveUnmountMountableWithOperationFinish(Signal handler, long source, java.lang.Object result0) {
        boolean result;

        result = ((GFile.UnmountMountableWithOperationFinishSignal) handler).onUnmountMountableWithOperationFinish((File) objectFor(source), (FIXME) result0);

        return result;
    }
}

