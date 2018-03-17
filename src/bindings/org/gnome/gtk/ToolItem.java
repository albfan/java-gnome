
package org.gnome.gtk;


public class ToolItem
    extends Bin
{


    public ToolItem() {
        super(GtkToolItem.createToolItem());
    }

    protected ToolItem(long pointer) {
        super(pointer);
    }

}
