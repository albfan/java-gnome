
package org.gnome.gdk;

import org.gnome.glib.Object;

public class Cursor
    extends Object
{


    public Cursor(CursorType pcursor_type) {
        super(org.gnome.gdk.GdkCursor.createCursor(pcursor_type));
    }

    public Cursor(Display pdisplay, CursorType pcursor_type) {
        super(org.gnome.gdk.GdkCursor.createCursor(pdisplay, pcursor_type));
    }

    public Cursor(Display pdisplay, String pname) {
        super(org.gnome.gdk.GdkCursor.createCursor(pdisplay, pname));
    }

    public Cursor(Display pdisplay, Pixbuf ppixbuf, int px, int py) {
        super(org.gnome.gdk.GdkCursor.createCursor(pdisplay, ppixbuf, px, py));
    }

    public Cursor(Display pdisplay, cairo_surface_t psurface, gdouble px, gdouble py) {
        super(org.gnome.gdk.GdkCursor.createCursor(pdisplay, psurface, px, py));
    }

    protected Cursor(long pointer) {
        super(pointer);
    }

}
