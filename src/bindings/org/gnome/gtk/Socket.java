
package org.gnome.gtk;


public class Socket
    extends Container
{


    public Socket() {
        super(GtkSocket.createSocket());
    }

    protected Socket(long pointer) {
        super(pointer);
    }

}
