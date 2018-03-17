
package org.gnome.gtk;


public class StackSwitcher
    extends Box
{


    public StackSwitcher() {
        super(GtkStackSwitcher.createStackSwitcher());
    }

    protected StackSwitcher(long pointer) {
        super(pointer);
    }

}
