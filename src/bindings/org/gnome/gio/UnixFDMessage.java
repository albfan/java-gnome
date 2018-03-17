
package org.gnome.gio;


public class UnixFDMessage
    extends SocketControlMessage
{


    public UnixFDMessage() {
        super(org.gnome.gio.GUnixFDMessage.createUnixFDMessage());
    }

    public UnixFDMessage(UnixFDList pfd_list) {
        super(org.gnome.gio.GUnixFDMessage.createUnixFDMessage(pfd_list));
    }

    protected UnixFDMessage(long pointer) {
        super(pointer);
    }

}
