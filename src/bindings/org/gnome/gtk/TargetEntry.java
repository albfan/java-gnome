
package org.gnome.gtk;

import org.gnome.glib.Object;

public class TargetEntry
    extends Object
{


    public TargetEntry(String ptarget, int pflags, int pinfo) {
        super(GtkTargetEntry.createTargetEntry(ptarget, pflags, pinfo));
    }

    protected TargetEntry(long pointer) {
        super(pointer);
    }

}
