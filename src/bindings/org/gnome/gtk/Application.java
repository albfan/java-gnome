
package org.gnome.gtk;


public class Application
    extends Gio.Application
{


    public Application(String papplication_id, ApplicationFlags pflags) {
        super(GtkApplication.createApplication(papplication_id, pflags));
    }

    protected Application(long pointer) {
        super(pointer);
    }

}
