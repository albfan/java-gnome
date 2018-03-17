
package org.gnome.gtk;

import org.gnome.glib.Object;

public class Action
    extends Object
{


    public Action(java.lang.String pname, java.lang.String plabel, java.lang.String ptooltip, java.lang.String pstock_id) {
        super(GtkAction.createAction(pname, plabel, ptooltip, pstock_id));
    }

    protected Action(long pointer) {
        super(pointer);
    }

}
