
package org.gnome.gtk;


public class StackSidebar
    extends Bin
{


    public StackSidebar() {
        super(GtkStackSidebar.createStackSidebar());
    }

    protected StackSidebar(long pointer) {
        super(pointer);
    }

}
