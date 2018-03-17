
package org.gnome.gio;


public class MemoryInputStream
    extends InputStream
{


    public MemoryInputStream() {
        super(org.gnome.gio.GMemoryInputStream.createMemoryInputStream());
    }

    public MemoryInputStream(Bytes pbytes) {
        super(org.gnome.gio.GMemoryInputStream.createMemoryInputStream(pbytes));
    }

    public MemoryInputStream(int plen, DestroyNotify pdestroy) {
        super(org.gnome.gio.GMemoryInputStream.createMemoryInputStream(plen, pdestroy));
    }

    protected MemoryInputStream(long pointer) {
        super(pointer);
    }

}
