
package org.gnome.gtk;


public class HScrollbar
    extends Scrollbar
{


    public HScrollbar(Adjustment padjustment) {
        super(GtkHScrollbar.createHScrollbar(padjustment));
    }

    protected HScrollbar(long pointer) {
        super(pointer);
    }

}
