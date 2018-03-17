
package org.gnome.gio;

import org.gnome.glib.Object;

public class MenuItem
    extends Object
{


    public MenuItem(java.lang.String plabel, java.lang.String pdetailed_action) {
        super(org.gnome.gio.GMenuItem.createMenuItem(plabel, pdetailed_action));
    }

    public MenuItem(MenuModel pmodel, int pitem_index) {
        super(org.gnome.gio.GMenuItem.createMenuItem(pmodel, pitem_index));
    }

    public MenuItem(java.lang.String plabel, MenuModel psection) {
        super(org.gnome.gio.GMenuItem.createMenuItem(plabel, psection));
    }

    public MenuItem(java.lang.String plabel, MenuModel psubmenu) {
        super(org.gnome.gio.GMenuItem.createMenuItem(plabel, psubmenu));
    }

    protected MenuItem(long pointer) {
        super(pointer);
    }

}
