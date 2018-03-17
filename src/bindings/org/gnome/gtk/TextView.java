
package org.gnome.gtk;


public class TextView
    extends Container
{


    public TextView() {
        super(org.gnome.gtk.GtkTextView.createTextView());
    }

    public TextView(TextBuffer pbuffer) {
        super(org.gnome.gtk.GtkTextView.createTextView(pbuffer));
    }

    protected TextView(long pointer) {
        super(pointer);
    }

}
