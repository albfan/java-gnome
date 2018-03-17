
package org.gnome.webKit;

import org.gnome.glib.Object;

public class WebBackForwardList
    extends Object
{


    public WebBackForwardList(WebView pweb_view) {
        super(WebKitWebBackForwardList.createWebBackForwardList(pweb_view));
    }

    protected WebBackForwardList(long pointer) {
        super(pointer);
    }

}
