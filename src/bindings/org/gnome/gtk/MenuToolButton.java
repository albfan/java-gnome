
package org.gnome.gtk;


public class MenuToolButton
    extends ToolButton
{


    public MenuToolButton(Widget picon_widget, java.lang.String plabel) {
        super(org.gnome.gtk.GtkMenuToolButton.createMenuToolButton(picon_widget, plabel));
    }

    public MenuToolButton(java.lang.String pstock_id) {
        super(org.gnome.gtk.GtkMenuToolButton.createMenuToolButton(pstock_id));
    }

    protected MenuToolButton(long pointer) {
        super(pointer);
    }

}
