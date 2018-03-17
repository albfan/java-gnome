
package org.gnome.gtk;


public class SeparatorToolItem
    extends ToolItem
{


    public SeparatorToolItem() {
        super(GtkSeparatorToolItem.createSeparatorToolItem());
    }

    protected SeparatorToolItem(long pointer) {
        super(pointer);
    }

}
