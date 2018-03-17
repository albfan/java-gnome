
package org.gnome.gtk;

import org.gnome.glib.Object;

public class UIManager
    extends Object
{


    public UIManager() {
        super(GtkUIManager.createUIManager());
    }

    protected UIManager(long pointer) {
        super(pointer);
    }

}
