
package org.gnome.gtk;

import org.gnome.glib.Object;

public class SymbolicColor
    extends Object
{


    public SymbolicColor(SymbolicColor pcolor, gdouble pfactor) {
        super(org.gnome.gtk.GtkSymbolicColor.createSymbolicColor(pcolor, pfactor));
    }

    public SymbolicColor(dkRGBA pcolor) {
        super(org.gnome.gtk.GtkSymbolicColor.createSymbolicColor(pcolor));
    }

    public SymbolicColor(SymbolicColor pcolor1, SymbolicColor pcolor2, gdouble pfactor) {
        super(org.gnome.gtk.GtkSymbolicColor.createSymbolicColor(pcolor1, pcolor2, pfactor));
    }

    public SymbolicColor(java.lang.String pname) {
        super(org.gnome.gtk.GtkSymbolicColor.createSymbolicColor(pname));
    }

    public SymbolicColor(SymbolicColor pcolor, gdouble pfactor) {
        super(org.gnome.gtk.GtkSymbolicColor.createSymbolicColor(pcolor, pfactor));
    }

    public SymbolicColor(java.lang.String ptheme_class, int pid) {
        super(org.gnome.gtk.GtkSymbolicColor.createSymbolicColor(ptheme_class, pid));
    }

    protected SymbolicColor(long pointer) {
        super(pointer);
    }

}
