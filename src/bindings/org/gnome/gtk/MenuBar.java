
package org.gnome.gtk;


public class MenuBar
    extends MenuShell
{


    public MenuBar() {
        super(org.gnome.gtk.GtkMenuBar.createMenuBar());
    }

    public MenuBar(MenuModel pmodel) {
        super(org.gnome.gtk.GtkMenuBar.createMenuBar(pmodel));
    }

    protected MenuBar(long pointer) {
        super(pointer);
    }

}
