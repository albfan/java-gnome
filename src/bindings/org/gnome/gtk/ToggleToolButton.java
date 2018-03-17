
package org.gnome.gtk;


public class ToggleToolButton
    extends ToolButton
{


    public ToggleToolButton() {
        super(org.gnome.gtk.GtkToggleToolButton.createToggleToolButton());
    }

    public ToggleToolButton(String pstock_id) {
        super(org.gnome.gtk.GtkToggleToolButton.createToggleToolButton(pstock_id));
    }

    protected ToggleToolButton(long pointer) {
        super(pointer);
    }

}
