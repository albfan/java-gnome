
package org.gnome.gtk;

import org.gnome.glib.Object;

public class TextMark
    extends Object
{


    public TextMark(String pname, boolean pleft_gravity) {
        super(GtkTextMark.createTextMark(pname, pleft_gravity));
    }

    protected TextMark(long pointer) {
        super(pointer);
    }

}
