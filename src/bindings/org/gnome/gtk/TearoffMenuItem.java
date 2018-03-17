
package org.gnome.gtk;


public class TearoffMenuItem
    extends MenuItem
{


    public TearoffMenuItem() {
        super(GtkTearoffMenuItem.createTearoffMenuItem());
    }

    protected TearoffMenuItem(long pointer) {
        super(pointer);
    }

}
