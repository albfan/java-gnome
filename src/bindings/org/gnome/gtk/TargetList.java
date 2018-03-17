
package org.gnome.gtk;

import org.gnome.glib.Object;

public class TargetList
    extends Object
{


    public TargetList(int pntargets) {
        super(GtkTargetList.createTargetList(pntargets));
    }

    protected TargetList(long pointer) {
        super(pointer);
    }

}
