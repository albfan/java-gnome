
package org.gnome.atk;


public class Socket
    extends Object
{


    public Socket() {
        super(AtkSocket.createSocket());
    }

    protected Socket(long pointer) {
        super(pointer);
    }

}
