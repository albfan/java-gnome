
package org.gnome.gtk;


public class ToggleAction
    extends Action
{


    public ToggleAction(java.lang.String pname, java.lang.String plabel, java.lang.String ptooltip, java.lang.String pstock_id) {
        super(GtkToggleAction.createToggleAction(pname, plabel, ptooltip, pstock_id));
    }

    protected ToggleAction(long pointer) {
        super(pointer);
    }

}
