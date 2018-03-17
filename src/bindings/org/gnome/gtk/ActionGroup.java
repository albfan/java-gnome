
package org.gnome.gtk;

import org.gnome.glib.Object;

public class ActionGroup
    extends Object
{


    public ActionGroup(String pname) {
        super(GtkActionGroup.createActionGroup(pname));
    }

    protected ActionGroup(long pointer) {
        super(pointer);
    }

}
