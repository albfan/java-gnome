
package org.gnome.gtk;

import GObject.InitiallyUnowned;

public class Widget
    extends InitiallyUnowned
{


    public Widget(Type ptype, String pfirst_property_name) {
        super(GtkWidget.createWidget(ptype, pfirst_property_name));
    }

    protected Widget(long pointer) {
        super(pointer);
    }

}
