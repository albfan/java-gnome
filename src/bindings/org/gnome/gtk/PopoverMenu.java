
package org.gnome.gtk;


public class PopoverMenu
    extends Popover
{


    public PopoverMenu() {
        super(GtkPopoverMenu.createPopoverMenu());
    }

    protected PopoverMenu(long pointer) {
        super(pointer);
    }

}
