
package org.gnome.gio;

import org.gnome.glib.Object;

public class Task
    extends Object
{


    public Task(org.freedesktop.bindings.Pointer psource_object, Cancellable pcancellable, AsyncReadyCallback pcallback, org.freedesktop.bindings.Pointer pcallback_data) {
        super(GTask.createTask(psource_object, pcancellable, pcallback, pcallback_data));
    }

    protected Task(long pointer) {
        super(pointer);
    }

}
