
package org.gnome.gtk;

import org.gnome.glib.Object;

public class AccelGroup
    extends Object
{


    public AccelGroup() {
        super(GtkAccelGroup.createAccelGroup());
    }

    protected AccelGroup(long pointer) {
        super(pointer);
    }

}
