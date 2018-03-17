
package org.gnome.gtk;


public class RecentAction
    extends Action
{


    public RecentAction(java.lang.String pname, java.lang.String plabel, java.lang.String ptooltip, java.lang.String pstock_id) {
        super(org.gnome.gtk.GtkRecentAction.createRecentAction(pname, plabel, ptooltip, pstock_id));
    }

    public RecentAction(java.lang.String pname, java.lang.String plabel, java.lang.String ptooltip, java.lang.String pstock_id, RecentManager pmanager) {
        super(org.gnome.gtk.GtkRecentAction.createRecentAction(pname, plabel, ptooltip, pstock_id, pmanager));
    }

    protected RecentAction(long pointer) {
        super(pointer);
    }

}
