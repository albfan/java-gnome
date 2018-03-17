
package org.gnome.gtk;

import GObject.InitiallyUnowned;

public class RecentFilter
    extends InitiallyUnowned
{


    public RecentFilter() {
        super(GtkRecentFilter.createRecentFilter());
    }

    protected RecentFilter(long pointer) {
        super(pointer);
    }

}
