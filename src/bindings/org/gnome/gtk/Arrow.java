
package org.gnome.gtk;


public class Arrow
    extends Misc
{


    public Arrow(ArrowType parrow_type, ShadowType pshadow_type) {
        super(GtkArrow.createArrow(parrow_type, pshadow_type));
    }

    protected Arrow(long pointer) {
        super(pointer);
    }

}
