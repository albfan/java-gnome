
package org.gnome.webKit;

import org.gnome.glib.Object;

public class NetworkResponse
    extends Object
{


    public NetworkResponse(String puri) {
        super(WebKitNetworkResponse.createNetworkResponse(puri));
    }

    protected NetworkResponse(long pointer) {
        super(pointer);
    }

}
