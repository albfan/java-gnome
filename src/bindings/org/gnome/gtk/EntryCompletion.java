
package org.gnome.gtk;

import org.gnome.glib.Object;

public class EntryCompletion
    extends Object
{


    public EntryCompletion() {
        super(org.gnome.gtk.GtkEntryCompletion.createEntryCompletion());
    }

    public EntryCompletion(CellArea parea) {
        super(org.gnome.gtk.GtkEntryCompletion.createEntryCompletion(parea));
    }

    protected EntryCompletion(long pointer) {
        super(pointer);
    }

}
