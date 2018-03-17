
package org.gnome.gtk;


public class SpinButton
    extends Entry
{


    public SpinButton(Adjustment padjustment, gdouble pclimb_rate, int pdigits) {
        super(org.gnome.gtk.GtkSpinButton.createSpinButton(padjustment, pclimb_rate, pdigits));
    }

    public SpinButton(gdouble pmin, gdouble pmax, gdouble pstep) {
        super(org.gnome.gtk.GtkSpinButton.createSpinButton(pmin, pmax, pstep));
    }

    protected SpinButton(long pointer) {
        super(pointer);
    }

}
