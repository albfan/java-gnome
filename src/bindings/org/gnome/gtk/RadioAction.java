
package org.gnome.gtk;


public class RadioAction
    extends ToggleAction
{


    public RadioAction(java.lang.String pname, java.lang.String plabel, java.lang.String ptooltip, java.lang.String pstock_id, int pvalue) {
        super(GtkRadioAction.createRadioAction(pname, plabel, ptooltip, pstock_id, pvalue));
    }

    protected RadioAction(long pointer) {
        super(pointer);
    }

}
