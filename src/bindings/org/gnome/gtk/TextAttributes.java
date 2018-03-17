
package org.gnome.gtk;

import org.gnome.glib.Object;

public class TextAttributes
    extends Object
{


    public TextAttributes() {
        super(GtkTextAttributes.createTextAttributes());
    }

    protected TextAttributes(long pointer) {
        super(pointer);
    }

}
