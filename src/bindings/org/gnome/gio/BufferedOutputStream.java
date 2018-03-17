
package org.gnome.gio;


public class BufferedOutputStream
    extends FilterOutputStream
{


    public BufferedOutputStream(OutputStream pbase_stream) {
        super(org.gnome.gio.GBufferedOutputStream.createBufferedOutputStream(pbase_stream));
    }

    public BufferedOutputStream(OutputStream pbase_stream, long psize) {
        super(org.gnome.gio.GBufferedOutputStream.createBufferedOutputStream(pbase_stream, psize));
    }

    protected BufferedOutputStream(long pointer) {
        super(pointer);
    }

}
