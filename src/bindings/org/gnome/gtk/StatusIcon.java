
package org.gnome.gtk;

import org.gnome.glib.Object;

public class StatusIcon
    extends Object
{


    public StatusIcon() {
        super(org.gnome.gtk.GtkStatusIcon.createStatusIcon());
    }

    public StatusIcon(java.lang.String pfilename) {
        super(org.gnome.gtk.GtkStatusIcon.createStatusIcon(pfilename));
    }

    public StatusIcon(Icon picon) {
        super(org.gnome.gtk.GtkStatusIcon.createStatusIcon(picon));
    }

    public StatusIcon(java.lang.String picon_name) {
        super(org.gnome.gtk.GtkStatusIcon.createStatusIcon(picon_name));
    }

    public StatusIcon(dkPixbuf ppixbuf) {
        super(org.gnome.gtk.GtkStatusIcon.createStatusIcon(ppixbuf));
    }

    public StatusIcon(java.lang.String pstock_id) {
        super(org.gnome.gtk.GtkStatusIcon.createStatusIcon(pstock_id));
    }

    protected StatusIcon(long pointer) {
        super(pointer);
    }

}
