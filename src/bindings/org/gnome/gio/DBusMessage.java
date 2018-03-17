
package org.gnome.gio;

import org.gnome.glib.Object;

public class DBusMessage
    extends Object
{


    public DBusMessage() {
        super(org.gnome.gio.GDBusMessage.createDBusMessage());
    }

    public DBusMessage(long pblob_len, DBusCapabilityFlags pcapabilities) {
        super(org.gnome.gio.GDBusMessage.createDBusMessage(pblob_len, pcapabilities));
    }

    public DBusMessage(java.lang.String pname, java.lang.String ppath, java.lang.String pinterface_, java.lang.String pmethod) {
        super(org.gnome.gio.GDBusMessage.createDBusMessage(pname, ppath, pinterface_, pmethod));
    }

    public DBusMessage(java.lang.String ppath, java.lang.String pinterface_, java.lang.String psignal) {
        super(org.gnome.gio.GDBusMessage.createDBusMessage(ppath, pinterface_, psignal));
    }

    protected DBusMessage(long pointer) {
        super(pointer);
    }

}
