
package org.gnome.gtk;


public class ActionBar
    extends Bin
{


    public ActionBar() {
        super(GtkActionBar.createActionBar());
    }

    protected ActionBar(long pointer) {
        super(pointer);
    }

}
