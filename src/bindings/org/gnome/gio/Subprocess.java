
package org.gnome.gio;

import org.gnome.glib.Object;

public class Subprocess
    extends Object
{


    public Subprocess(SubprocessFlags pflags, Error perror, String pargv0) {
        super(org.gnome.gio.GSubprocess.createSubprocess(pflags, perror, pargv0));
    }

    public Subprocess(SubprocessFlags pflags) {
        super(org.gnome.gio.GSubprocess.createSubprocess(pflags));
    }

    protected Subprocess(long pointer) {
        super(pointer);
    }

}
