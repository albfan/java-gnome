
package org.gnome.gtk;


public class ScaleButton
    extends Button
{


    public ScaleButton(IconSize psize, gdouble pmin, gdouble pmax, gdouble pstep) {
        super(GtkScaleButton.createScaleButton(psize, pmin, pmax, pstep));
    }

    protected ScaleButton(long pointer) {
        super(pointer);
    }

}
