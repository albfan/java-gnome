
package org.gnome.gtk;

import org.gnome.glib.Object;

public class Requisition
    extends Object
{


    public Requisition() {
        super(GtkRequisition.createRequisition());
    }

    protected Requisition(long pointer) {
        super(pointer);
    }

}
