
package org.gnome.gtk;


public class SeparatorMenuItem
    extends MenuItem
{


    public SeparatorMenuItem() {
        super(GtkSeparatorMenuItem.createSeparatorMenuItem());
    }

    protected SeparatorMenuItem(long pointer) {
        super(pointer);
    }

}
