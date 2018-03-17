
package org.gnome.gio;

import org.gnome.glib.Object;

public class TestDBus
    extends Object
{


    public TestDBus(TestDBusFlags pflags) {
        super(GTestDBus.createTestDBus(pflags));
    }

    protected TestDBus(long pointer) {
        super(pointer);
    }

}
