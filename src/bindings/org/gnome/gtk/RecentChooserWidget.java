
package org.gnome.gtk;


public class RecentChooserWidget
    extends Box
{


    public RecentChooserWidget() {
        super(org.gnome.gtk.GtkRecentChooserWidget.createRecentChooserWidget());
    }

    public RecentChooserWidget(RecentManager pmanager) {
        super(org.gnome.gtk.GtkRecentChooserWidget.createRecentChooserWidget(pmanager));
    }

    protected RecentChooserWidget(long pointer) {
        super(pointer);
    }

}
