
package org.gnome.gtk;


public class ToolPalette
    extends Container
{


    public ToolPalette() {
        super(GtkToolPalette.createToolPalette());
    }

    protected ToolPalette(long pointer) {
        super(pointer);
    }

}
