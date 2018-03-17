
package org.gnome.gtk;


public class MenuButton
    extends ToggleButton
{


    public MenuButton() {
        super(GtkMenuButton.createMenuButton());
    }

    protected MenuButton(long pointer) {
        super(pointer);
    }

}
