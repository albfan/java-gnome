
package org.gnome.gtk;


public class AccelLabel
    extends Label
{


    public AccelLabel(String pstring) {
        super(GtkAccelLabel.createAccelLabel(pstring));
    }

    protected AccelLabel(long pointer) {
        super(pointer);
    }

}
