
package org.gnome.gio;

import org.gnome.glib.Object;

public class Emblem
    extends Object
{


    public Emblem(Icon picon) {
        super(org.gnome.gio.GEmblem.createEmblem(picon));
    }

    public Emblem(Icon picon, EmblemOrigin porigin) {
        super(org.gnome.gio.GEmblem.createEmblem(picon, porigin));
    }

    protected Emblem(long pointer) {
        super(pointer);
    }

}
