
package org.gnome.gtk;


public class Layout
    extends Container
{


    public Layout(Adjustment phadjustment, Adjustment pvadjustment) {
        super(GtkLayout.createLayout(phadjustment, pvadjustment));
    }

    protected Layout(long pointer) {
        super(pointer);
    }

}
