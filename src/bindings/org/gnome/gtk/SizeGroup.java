
package org.gnome.gtk;

import org.gnome.glib.Object;

public class SizeGroup
    extends Object
{


    public SizeGroup(SizeGroupMode pmode) {
        super(GtkSizeGroup.createSizeGroup(pmode));
    }

    protected SizeGroup(long pointer) {
        super(pointer);
    }

}
