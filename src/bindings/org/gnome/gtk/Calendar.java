
package org.gnome.gtk;


public class Calendar
    extends Widget
{


    public Calendar() {
        super(GtkCalendar.createCalendar());
    }

    protected Calendar(long pointer) {
        super(pointer);
    }

}
