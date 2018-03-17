
package org.gnome.gtk;


public class RendererCellAccessible
    extends CellAccessible
{


    public RendererCellAccessible(CellRenderer prenderer) {
        super(GtkRendererCellAccessible.createRendererCellAccessible(prenderer));
    }

    protected RendererCellAccessible(long pointer) {
        super(pointer);
    }

}
