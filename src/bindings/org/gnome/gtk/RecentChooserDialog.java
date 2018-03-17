
package org.gnome.gtk;


public class RecentChooserDialog
    extends Dialog
{


    public RecentChooserDialog(java.lang.String ptitle, Window pparent, java.lang.String pfirst_button_text) {
        super(org.gnome.gtk.GtkRecentChooserDialog.createRecentChooserDialog(ptitle, pparent, pfirst_button_text));
    }

    public RecentChooserDialog(java.lang.String ptitle, Window pparent, RecentManager pmanager, java.lang.String pfirst_button_text) {
        super(org.gnome.gtk.GtkRecentChooserDialog.createRecentChooserDialog(ptitle, pparent, pmanager, pfirst_button_text));
    }

    protected RecentChooserDialog(long pointer) {
        super(pointer);
    }

}
