
package org.gnome.gtk;


public class Scale
    extends Range
{


    public Scale(Orientation porientation, Adjustment padjustment) {
        super(org.gnome.gtk.GtkScale.createScale(porientation, padjustment));
    }

    public Scale(Orientation porientation, gdouble pmin, gdouble pmax, gdouble pstep) {
        super(org.gnome.gtk.GtkScale.createScale(porientation, pmin, pmax, pstep));
    }

    protected Scale(long pointer) {
        super(pointer);
    }

}
