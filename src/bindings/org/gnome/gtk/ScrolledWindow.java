
package org.gnome.gtk;


public class ScrolledWindow
    extends Bin
{


    public ScrolledWindow(Adjustment phadjustment, Adjustment pvadjustment) {
        super(GtkScrolledWindow.createScrolledWindow(phadjustment, pvadjustment));
    }

    protected ScrolledWindow(long pointer) {
        super(pointer);
    }

}
