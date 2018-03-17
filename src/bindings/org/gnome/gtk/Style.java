
package org.gnome.gtk;

import org.gnome.glib.Object;

public class Style
    extends Object
{


    public Style() {
        super(GtkStyle.createStyle());
    }

    protected Style(long pointer) {
        super(pointer);
    }

}
