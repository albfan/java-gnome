
package org.gnome.webKit;

import org.gnome.glib.Object;

public class WebSettings
    extends Object
{


    public WebSettings() {
        super(WebKitWebSettings.createWebSettings());
    }

    protected WebSettings(long pointer) {
        super(pointer);
    }

}
