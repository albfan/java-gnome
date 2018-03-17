
package org.gnome.webKit;

import org.gnome.glib.Object;

public class NetworkRequest
    extends Object
{


    public NetworkRequest(String puri) {
        super(WebKitNetworkRequest.createNetworkRequest(puri));
    }

    protected NetworkRequest(long pointer) {
        super(pointer);
    }

}
