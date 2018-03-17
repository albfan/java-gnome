
package org.gnome.gio;

import org.freedesktop.bindings.Pointer;

public class MemoryOutputStream
    extends OutputStream
{


    public MemoryOutputStream(Pointer pdata, long psize, ReallocFunc prealloc_function, DestroyNotify pdestroy_function) {
        super(org.gnome.gio.GMemoryOutputStream.createMemoryOutputStream(pdata, psize, prealloc_function, pdestroy_function));
    }

    public MemoryOutputStream() {
        super(org.gnome.gio.GMemoryOutputStream.createMemoryOutputStream());
    }

    protected MemoryOutputStream(long pointer) {
        super(pointer);
    }

}
