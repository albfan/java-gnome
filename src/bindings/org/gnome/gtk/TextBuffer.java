
package org.gnome.gtk;

import org.gnome.glib.Object;

public class TextBuffer
    extends Object
{


    public TextBuffer(TextTagTable ptable) {
        super(GtkTextBuffer.createTextBuffer(ptable));
    }

    protected TextBuffer(long pointer) {
        super(pointer);
    }

}
