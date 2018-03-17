
package org.gnome.gtk;


public class SearchBar
    extends Bin
{


    public SearchBar() {
        super(GtkSearchBar.createSearchBar());
    }

    protected SearchBar(long pointer) {
        super(pointer);
    }

}
