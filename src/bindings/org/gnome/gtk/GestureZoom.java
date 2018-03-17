
package org.gnome.gtk;


public class GestureZoom
    extends Gesture
{


    public GestureZoom(Widget pwidget) {
        super(GtkGestureZoom.createGestureZoom(pwidget));
    }

    protected GestureZoom(long pointer) {
        super(pointer);
    }

}
