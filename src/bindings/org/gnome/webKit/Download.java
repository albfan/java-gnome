
package org.gnome.webKit;

import org.gnome.glib.Object;

public class Download
    extends Object
{


    public Download(NetworkRequest prequest) {
        super(WebKitDownload.createDownload(prequest));
    }

    protected Download(long pointer) {
        super(pointer);
    }

}
