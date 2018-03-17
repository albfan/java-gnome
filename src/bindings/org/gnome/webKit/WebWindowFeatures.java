
package org.gnome.webKit;

import org.gnome.glib.Object;

public class WebWindowFeatures
    extends Object
{


    public WebWindowFeatures() {
        super(WebKitWebWindowFeatures.createWebWindowFeatures());
    }

    protected WebWindowFeatures(long pointer) {
        super(pointer);
    }

}
