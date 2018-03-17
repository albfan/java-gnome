
package org.gnome.gio;

import org.gnome.glib.Object;

public class DBusConnection
    extends Object
{


    public DBusConnection(AsyncResult pres) {
        super(org.gnome.gio.GDBusConnection.createDBusConnection(pres));
    }

    public DBusConnection(AsyncResult pres) {
        super(org.gnome.gio.GDBusConnection.createDBusConnection(pres));
    }

    public DBusConnection(java.lang.String paddress, DBusConnectionFlags pflags, DBusAuthObserver pobserver, Cancellable pcancellable) {
        super(org.gnome.gio.GDBusConnection.createDBusConnection(paddress, pflags, pobserver, pcancellable));
    }

    public DBusConnection(IOStream pstream, java.lang.String pguid, DBusConnectionFlags pflags, DBusAuthObserver pobserver, Cancellable pcancellable) {
        super(org.gnome.gio.GDBusConnection.createDBusConnection(pstream, pguid, pflags, pobserver, pcancellable));
    }

    protected DBusConnection(long pointer) {
        super(pointer);
    }

}
