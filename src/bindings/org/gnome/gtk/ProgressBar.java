
package org.gnome.gtk;


public class ProgressBar
    extends Widget
{


    public ProgressBar() {
        super(GtkProgressBar.createProgressBar());
    }

    protected ProgressBar(long pointer) {
        super(pointer);
    }

}
