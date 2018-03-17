
package org.gnome.webKit;

import org.gnome.glib.Object;

public class WebFrame
    extends Object
{


    public WebFrame(WebView pweb_view) {
        super(WebKitWebFrame.createWebFrame(pweb_view));
    }

    protected WebFrame(long pointer) {
        super(pointer);
    }

}
