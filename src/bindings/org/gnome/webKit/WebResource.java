
package org.gnome.webKit;

import org.gnome.glib.Object;

public class WebResource
    extends Object
{


    public WebResource(java.lang.String pdata, int psize, java.lang.String puri, java.lang.String pmime_type, java.lang.String pencoding, java.lang.String pframe_name) {
        super(WebKitWebResource.createWebResource(pdata, psize, puri, pmime_type, pencoding, pframe_name));
    }

    protected WebResource(long pointer) {
        super(pointer);
    }

}
