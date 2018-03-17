
package org.gnome.gtk;

import GObject.InitiallyUnowned;

public class Adjustment
    extends InitiallyUnowned
{


    public Adjustment(gdouble pvalue, gdouble plower, gdouble pupper, gdouble pstep_increment, gdouble ppage_increment, gdouble ppage_size) {
        super(GtkAdjustment.createAdjustment(pvalue, plower, pupper, pstep_increment, ppage_increment, ppage_size));
    }

    protected Adjustment(long pointer) {
        super(pointer);
    }

}
