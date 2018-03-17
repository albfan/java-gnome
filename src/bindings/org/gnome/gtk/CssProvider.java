
package org.gnome.gtk;

import org.gnome.glib.Object;

public class CssProvider
    extends Object
{


    public CssProvider() {
        super(GtkCssProvider.createCssProvider());
    }

    protected CssProvider(long pointer) {
        super(pointer);
    }

}
