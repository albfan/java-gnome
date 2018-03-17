
package org.gnome.gtk;


public class HScale
    extends Scale
{


    public HScale(Adjustment padjustment) {
        super(org.gnome.gtk.GtkHScale.createHScale(padjustment));
    }

    public HScale(gdouble pmin, gdouble pmax, gdouble pstep) {
        super(org.gnome.gtk.GtkHScale.createHScale(pmin, pmax, pstep));
    }

    protected HScale(long pointer) {
        super(pointer);
    }

}
