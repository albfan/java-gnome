
package org.gnome.gdk;


public class AppLaunchContext
    extends Gio.AppLaunchContext
{


    public AppLaunchContext() {
        super(GdkAppLaunchContext.createAppLaunchContext());
    }

    protected AppLaunchContext(long pointer) {
        super(pointer);
    }

}
