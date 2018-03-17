
package org.gnome.gtk;


public class Overlay
    extends Bin
{


    public Overlay() {
        super(GtkOverlay.createOverlay());
    }

    protected Overlay(long pointer) {
        super(pointer);
    }

}
