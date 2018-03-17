
package org.gnome.gtk;

import org.gnome.glib.Object;

public class TextTag
    extends Object
{


    public TextTag(String pname) {
        super(GtkTextTag.createTextTag(pname));
    }

    protected TextTag(long pointer) {
        super(pointer);
    }

}
