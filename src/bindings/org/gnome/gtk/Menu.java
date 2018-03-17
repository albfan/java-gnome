
package org.gnome.gtk;


public class Menu
    extends MenuShell
{


    public Menu() {
        super(org.gnome.gtk.GtkMenu.createMenu());
    }

    public Menu(MenuModel pmodel) {
        super(org.gnome.gtk.GtkMenu.createMenu(pmodel));
    }

    protected Menu(long pointer) {
        super(pointer);
    }

}
