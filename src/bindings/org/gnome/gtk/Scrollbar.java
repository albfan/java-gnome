
package org.gnome.gtk;


public class Scrollbar
    extends Range
{


    public Scrollbar(Orientation porientation, Adjustment padjustment) {
        super(GtkScrollbar.createScrollbar(porientation, padjustment));
    }

    protected Scrollbar(long pointer) {
        super(pointer);
    }

}
