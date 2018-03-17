
package org.gnome.gtk;


public class ToolButton
    extends ToolItem
{


    public ToolButton(Widget picon_widget, java.lang.String plabel) {
        super(org.gnome.gtk.GtkToolButton.createToolButton(picon_widget, plabel));
    }

    public ToolButton(java.lang.String pstock_id) {
        super(org.gnome.gtk.GtkToolButton.createToolButton(pstock_id));
    }

    protected ToolButton(long pointer) {
        super(pointer);
    }

}
