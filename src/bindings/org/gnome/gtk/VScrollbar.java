
package org.gnome.gtk;


public class VScrollbar
    extends Scrollbar
{


    public VScrollbar(Adjustment padjustment) {
        super(GtkVScrollbar.createVScrollbar(padjustment));
    }

    protected VScrollbar(long pointer) {
        super(pointer);
    }

}
