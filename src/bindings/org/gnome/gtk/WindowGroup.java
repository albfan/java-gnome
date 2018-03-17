
package org.gnome.gtk;

import org.gnome.glib.Object;

public class WindowGroup
    extends Object
{


    public WindowGroup() {
        super(GtkWindowGroup.createWindowGroup());
    }

    protected WindowGroup(long pointer) {
        super(pointer);
    }

}
