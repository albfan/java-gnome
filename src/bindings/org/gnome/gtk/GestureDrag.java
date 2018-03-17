
package org.gnome.gtk;


public class GestureDrag
    extends GestureSingle
{


    public GestureDrag(Widget pwidget) {
        super(GtkGestureDrag.createGestureDrag(pwidget));
    }

    protected GestureDrag(long pointer) {
        super(pointer);
    }

}
