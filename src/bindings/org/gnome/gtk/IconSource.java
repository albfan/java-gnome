
package org.gnome.gtk;

import org.gnome.glib.Object;

public class IconSource
    extends Object
{


    public IconSource() {
        super(GtkIconSource.createIconSource());
    }

    protected IconSource(long pointer) {
        super(pointer);
    }

}
