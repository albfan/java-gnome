
package org.gnome.gio;

import org.gnome.glib.Object;

public class Application
    extends Object
{


    public Application(String papplication_id, ApplicationFlags pflags) {
        super(GApplication.createApplication(papplication_id, pflags));
    }

    protected Application(long pointer) {
        super(pointer);
    }

}
