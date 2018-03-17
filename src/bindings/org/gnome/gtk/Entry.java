
package org.gnome.gtk;


public class Entry
    extends Widget
{


    public Entry() {
        super(org.gnome.gtk.GtkEntry.createEntry());
    }

    public Entry(EntryBuffer pbuffer) {
        super(org.gnome.gtk.GtkEntry.createEntry(pbuffer));
    }

    protected Entry(long pointer) {
        super(pointer);
    }

}
