
package org.gnome.gtk;


public class PlacesSidebar
    extends ScrolledWindow
{


    public PlacesSidebar() {
        super(GtkPlacesSidebar.createPlacesSidebar());
    }

    protected PlacesSidebar(long pointer) {
        super(pointer);
    }

}
