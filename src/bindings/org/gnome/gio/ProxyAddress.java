
package org.gnome.gio;


public class ProxyAddress
    extends InetSocketAddress
{


    public ProxyAddress(InetAddress pinetaddr, guint16 pport, java.lang.String pprotocol, java.lang.String pdest_hostname, guint16 pdest_port, java.lang.String pusername, java.lang.String ppassword) {
        super(GProxyAddress.createProxyAddress(pinetaddr, pport, pprotocol, pdest_hostname, pdest_port, pusername, ppassword));
    }

    protected ProxyAddress(long pointer) {
        super(pointer);
    }

}
