
package org.gnome.gtk;


public class GestureMultiPress
    extends GestureSingle
{


    public GestureMultiPress(Widget pwidget) {
        super(GtkGestureMultiPress.createGestureMultiPress(pwidget));
    }

    protected GestureMultiPress(long pointer) {
        super(pointer);
    }

}
