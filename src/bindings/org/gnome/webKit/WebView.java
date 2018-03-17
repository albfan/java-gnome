
package org.gnome.webKit;

import org.gnome.gtk.Container;

public class WebView
    extends Container
{


    public WebView() {
        super(WebKitWebView.createWebView());
    }

    protected WebView(long pointer) {
        super(pointer);
    }

}
