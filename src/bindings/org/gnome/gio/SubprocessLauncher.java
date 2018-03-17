
package org.gnome.gio;

import org.gnome.glib.Object;

public class SubprocessLauncher
    extends Object
{


    public SubprocessLauncher(SubprocessFlags pflags) {
        super(GSubprocessLauncher.createSubprocessLauncher(pflags));
    }

    protected SubprocessLauncher(long pointer) {
        super(pointer);
    }

}
