
package org.gnome.gtk;

import org.gnome.glib.Object;

public class Border
    extends Object
{


    public Border() {
        super(GtkBorder.createBorder());
    }

    protected Border(long pointer) {
        super(pointer);
    }

}
