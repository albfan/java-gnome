
package org.gnome.gtk;

import org.gnome.glib.Object;

public class TextTagTable
    extends Object
{


    public TextTagTable() {
        super(GtkTextTagTable.createTextTagTable());
    }

    protected TextTagTable(long pointer) {
        super(pointer);
    }

}
