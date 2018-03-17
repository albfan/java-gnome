
package org.gnome.gtk;


public class Switch
    extends Widget
{


    public Switch() {
        super(GtkSwitch.createSwitch());
    }

    protected Switch(long pointer) {
        super(pointer);
    }

}
