
package org.gnome.gio;

import org.gnome.glib.Object;

public class Notification
    extends Object
{


    public Notification(String ptitle) {
        super(GNotification.createNotification(ptitle));
    }

    protected Notification(long pointer) {
        super(pointer);
    }

}
