
package org.gnome.gtk;


public class HeaderBar
    extends Container
{


    public HeaderBar() {
        super(GtkHeaderBar.createHeaderBar());
    }

    protected HeaderBar(long pointer) {
        super(pointer);
    }

}
