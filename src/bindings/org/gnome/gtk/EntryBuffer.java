
package org.gnome.gtk;

import org.gnome.glib.Object;

public class EntryBuffer
    extends Object
{


    public EntryBuffer(String pinitial_chars, int pn_initial_chars) {
        super(GtkEntryBuffer.createEntryBuffer(pinitial_chars, pn_initial_chars));
    }

    protected EntryBuffer(long pointer) {
        super(pointer);
    }

}
