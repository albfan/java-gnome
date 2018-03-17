
package org.gnome.gtk;

import org.gnome.glib.Object;

public class Builder
    extends Object
{


    public Builder() {
        super(org.gnome.gtk.GtkBuilder.createBuilder());
    }

    public Builder(java.lang.String pfilename) {
        super(org.gnome.gtk.GtkBuilder.createBuilder(pfilename));
    }

    public Builder(java.lang.String presource_path) {
        super(org.gnome.gtk.GtkBuilder.createBuilder(presource_path));
    }

    public Builder(java.lang.String pstring, int plength) {
        super(org.gnome.gtk.GtkBuilder.createBuilder(pstring, plength));
    }

    protected Builder(long pointer) {
        super(pointer);
    }

}
