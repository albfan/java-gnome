
package org.gnome.gtk;


public class GestureRotate
    extends Gesture
{


    public GestureRotate(Widget pwidget) {
        super(GtkGestureRotate.createGestureRotate(pwidget));
    }

    protected GestureRotate(long pointer) {
        super(pointer);
    }

}
