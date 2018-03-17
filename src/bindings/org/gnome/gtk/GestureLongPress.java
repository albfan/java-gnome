
package org.gnome.gtk;


public class GestureLongPress
    extends GestureSingle
{


    public GestureLongPress(Widget pwidget) {
        super(GtkGestureLongPress.createGestureLongPress(pwidget));
    }

    protected GestureLongPress(long pointer) {
        super(pointer);
    }

}
