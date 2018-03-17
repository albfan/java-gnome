
package org.gnome.gtk;


public class GesturePan
    extends GestureDrag
{


    public GesturePan(Widget pwidget, Orientation porientation) {
        super(GtkGesturePan.createGesturePan(pwidget, porientation));
    }

    protected GesturePan(long pointer) {
        super(pointer);
    }

}
