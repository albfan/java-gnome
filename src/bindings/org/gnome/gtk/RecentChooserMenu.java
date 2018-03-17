
package org.gnome.gtk;


public class RecentChooserMenu
    extends Menu
{


    public RecentChooserMenu() {
        super(org.gnome.gtk.GtkRecentChooserMenu.createRecentChooserMenu());
    }

    public RecentChooserMenu(RecentManager pmanager) {
        super(org.gnome.gtk.GtkRecentChooserMenu.createRecentChooserMenu(pmanager));
    }

    protected RecentChooserMenu(long pointer) {
        super(pointer);
    }

}
