
package org.gnome.gtk;

import org.gnome.glib.Object;

public class WidgetPath
    extends Object
{


    public WidgetPath() {
        super(GtkWidgetPath.createWidgetPath());
    }

    protected WidgetPath(long pointer) {
        super(pointer);
    }

}
