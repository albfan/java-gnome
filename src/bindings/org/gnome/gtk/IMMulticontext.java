
package org.gnome.gtk;


public class IMMulticontext
    extends IMContext
{


    public IMMulticontext() {
        super(GtkIMMulticontext.createIMMulticontext());
    }

    protected IMMulticontext(long pointer) {
        super(pointer);
    }

}
