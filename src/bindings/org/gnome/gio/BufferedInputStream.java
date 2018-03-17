
package org.gnome.gio;


public class BufferedInputStream
    extends FilterInputStream
{


    public BufferedInputStream(InputStream pbase_stream) {
        super(org.gnome.gio.GBufferedInputStream.createBufferedInputStream(pbase_stream));
    }

    public BufferedInputStream(InputStream pbase_stream, long psize) {
        super(org.gnome.gio.GBufferedInputStream.createBufferedInputStream(pbase_stream, psize));
    }

    protected BufferedInputStream(long pointer) {
        super(pointer);
    }

}
