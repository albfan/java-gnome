
package org.gnome.gio;


public class SimpleIOStream
    extends IOStream
{


    public SimpleIOStream(InputStream pinput_stream, OutputStream poutput_stream) {
        super(GSimpleIOStream.createSimpleIOStream(pinput_stream, poutput_stream));
    }

    protected SimpleIOStream(long pointer) {
        super(pointer);
    }

}
