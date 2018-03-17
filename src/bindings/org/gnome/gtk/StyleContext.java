
package org.gnome.gtk;

import org.gnome.glib.Object;

public class StyleContext
    extends Object
{


    public StyleContext() {
        super(GtkStyleContext.createStyleContext());
    }

    protected StyleContext(long pointer) {
        super(pointer);
    }

}
