
package org.gnome.gtk;


public class ToolItemGroup
    extends Container
{


    public ToolItemGroup(String plabel) {
        super(GtkToolItemGroup.createToolItemGroup(plabel));
    }

    protected ToolItemGroup(long pointer) {
        super(pointer);
    }

}
