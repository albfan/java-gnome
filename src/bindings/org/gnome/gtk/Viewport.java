
package org.gnome.gtk;


public class Viewport
    extends Bin
{


    public Viewport(Adjustment phadjustment, Adjustment pvadjustment) {
        super(GtkViewport.createViewport(phadjustment, pvadjustment));
    }

    protected Viewport(long pointer) {
        super(pointer);
    }

}
