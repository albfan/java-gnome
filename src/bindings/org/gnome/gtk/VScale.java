
package org.gnome.gtk;


public class VScale
    extends Scale
{


    public VScale(Adjustment padjustment) {
        super(org.gnome.gtk.GtkVScale.createVScale(padjustment));
    }

    public VScale(gdouble pmin, gdouble pmax, gdouble pstep) {
        super(org.gnome.gtk.GtkVScale.createVScale(pmin, pmax, pstep));
    }

    protected VScale(long pointer) {
        super(pointer);
    }

}
