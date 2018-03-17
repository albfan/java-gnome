
package org.gnome.gtk;


public class GLArea
    extends Widget
{


    public GLArea() {
        super(GtkGLArea.createGLArea());
    }

    protected GLArea(long pointer) {
        super(pointer);
    }

}
