
package org.gnome.gtk;


public class DrawingArea
    extends Widget
{


    public DrawingArea() {
        super(GtkDrawingArea.createDrawingArea());
    }

    protected DrawingArea(long pointer) {
        super(pointer);
    }

}
