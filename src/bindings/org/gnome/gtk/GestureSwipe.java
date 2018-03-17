
package org.gnome.gtk;


public class GestureSwipe
    extends GestureSingle
{


    public GestureSwipe(Widget pwidget) {
        super(GtkGestureSwipe.createGestureSwipe(pwidget));
    }

    protected GestureSwipe(long pointer) {
        super(pointer);
    }

}
