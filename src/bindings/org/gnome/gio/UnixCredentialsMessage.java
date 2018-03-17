
package org.gnome.gio;


public class UnixCredentialsMessage
    extends SocketControlMessage
{


    public UnixCredentialsMessage() {
        super(org.gnome.gio.GUnixCredentialsMessage.createUnixCredentialsMessage());
    }

    public UnixCredentialsMessage(Credentials pcredentials) {
        super(org.gnome.gio.GUnixCredentialsMessage.createUnixCredentialsMessage(pcredentials));
    }

    protected UnixCredentialsMessage(long pointer) {
        super(pointer);
    }

}
