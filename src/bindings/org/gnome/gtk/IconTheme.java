
package org.gnome.gtk;

import org.gnome.glib.Object;

public class IconTheme
    extends Object
{


    public IconTheme() {
        super(GtkIconTheme.createIconTheme());
    }

    protected IconTheme(long pointer) {
        super(pointer);
    }

}
