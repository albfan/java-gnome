
package org.gnome.gtk;


public class SearchEntry
    extends Entry
{


    public SearchEntry() {
        super(GtkSearchEntry.createSearchEntry());
    }

    protected SearchEntry(long pointer) {
        super(pointer);
    }

}
