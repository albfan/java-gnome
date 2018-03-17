
package org.gnome.webKit;

import org.gnome.glib.Object;

public class WebHistoryItem
    extends Object
{


    public WebHistoryItem() {
        super(org.gnome.webKit.WebKitWebHistoryItem.createWebHistoryItem());
    }

    public WebHistoryItem(java.lang.String puri, java.lang.String ptitle) {
        super(org.gnome.webKit.WebKitWebHistoryItem.createWebHistoryItem(puri, ptitle));
    }

    protected WebHistoryItem(long pointer) {
        super(pointer);
    }

}
