
package org.gnome.gtk;


public class LinkButton
    extends Button
{


    public LinkButton(java.lang.String puri) {
        super(org.gnome.gtk.GtkLinkButton.createLinkButton(puri));
    }

    public LinkButton(java.lang.String puri, java.lang.String plabel) {
        super(org.gnome.gtk.GtkLinkButton.createLinkButton(puri, plabel));
    }

    protected LinkButton(long pointer) {
        super(pointer);
    }

}
