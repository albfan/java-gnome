
package org.gnome.gtk;

import org.gnome.glib.Object;

public class TextChildAnchor
    extends Object
{


    public TextChildAnchor() {
        super(GtkTextChildAnchor.createTextChildAnchor());
    }

    protected TextChildAnchor(long pointer) {
        super(pointer);
    }

}
