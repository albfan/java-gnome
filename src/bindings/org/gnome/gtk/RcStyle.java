
package org.gnome.gtk;

import org.gnome.glib.Object;

public class RcStyle
    extends Object
{


    public RcStyle() {
        super(GtkRcStyle.createRcStyle());
    }

    protected RcStyle(long pointer) {
        super(pointer);
    }

}
