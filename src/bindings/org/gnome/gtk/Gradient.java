
package org.gnome.gtk;

import org.gnome.glib.Object;

public class Gradient
    extends Object
{


    public Gradient(gdouble px0, gdouble py0, gdouble px1, gdouble py1) {
        super(org.gnome.gtk.GtkGradient.createGradient(px0, py0, px1, py1));
    }

    public Gradient(gdouble px0, gdouble py0, gdouble pradius0, gdouble px1, gdouble py1, gdouble pradius1) {
        super(org.gnome.gtk.GtkGradient.createGradient(px0, py0, pradius0, px1, py1, pradius1));
    }

    protected Gradient(long pointer) {
        super(pointer);
    }

}
