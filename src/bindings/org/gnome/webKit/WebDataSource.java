
package org.gnome.webKit;

import org.gnome.glib.Object;

public class WebDataSource
    extends Object
{


    public WebDataSource() {
        super(org.gnome.webKit.WebKitWebDataSource.createWebDataSource());
    }

    public WebDataSource(NetworkRequest prequest) {
        super(org.gnome.webKit.WebKitWebDataSource.createWebDataSource(prequest));
    }

    protected WebDataSource(long pointer) {
        super(pointer);
    }

}
