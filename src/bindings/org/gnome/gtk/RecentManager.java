
package org.gnome.gtk;

import org.gnome.glib.Object;

public class RecentManager
    extends Object
{


    public RecentManager() {
        super(GtkRecentManager.createRecentManager());
    }

    protected RecentManager(long pointer) {
        super(pointer);
    }

}
