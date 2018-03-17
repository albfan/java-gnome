
package org.gnome.gio;

import org.gnome.glib.Object;

public class ThemedIcon
    extends Object
{


    public ThemedIcon(java.lang.String piconname) {
        super(org.gnome.gio.GThemedIcon.createThemedIcon(piconname));
    }

    public ThemedIcon(int plen) {
        super(org.gnome.gio.GThemedIcon.createThemedIcon(plen));
    }

    public ThemedIcon(java.lang.String piconname) {
        super(org.gnome.gio.GThemedIcon.createThemedIcon(piconname));
    }

    protected ThemedIcon(long pointer) {
        super(pointer);
    }

}
