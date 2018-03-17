
package org.gnome.gtk;


public class Popover
    extends Bin
{


    public Popover(Widget prelative_to) {
        super(org.gnome.gtk.GtkPopover.createPopover(prelative_to));
    }

    public Popover(Widget prelative_to, MenuModel pmodel) {
        super(org.gnome.gtk.GtkPopover.createPopover(prelative_to, pmodel));
    }

    protected Popover(long pointer) {
        super(pointer);
    }

}
