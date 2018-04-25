/*
 * java-gnome, a UI library for writing GTK and GNOME programs from Java!
 *
 * Copyright © 2006-2012 Operational Dynamics Consulting, Pty Ltd and Others
 *
 * The code in this file, and the program it is a part of, is made available
 * to you by its authors as open source software: you can redistribute it
 * and/or modify it under the terms of the GNU General Public License version
 * 2 ("GPL") as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GPL for more details.
 *
 * You should have received a copy of the GPL along with this program. If not,
 * see http://www.gnu.org/licenses/. The authors of this program may be
 * contacted through http://java-gnome.sourceforge.net/.
 *
 * Linking this library statically or dynamically with other modules is making
 * a combined work based on this library. Thus, the terms and conditions of
 * the GPL cover the whole combination. As a special exception (the
 * "Classpath Exception"), the copyright holders of this library give you
 * permission to link this library with independent modules to produce an
 * executable, regardless of the license terms of these independent modules,
 * and to copy and distribute the resulting executable under terms of your
 * choice, provided that you also meet, for each linked independent module,
 * the terms and conditions of the license of that module. An independent
 * module is a module which is not derived from or based on this library. If
 * you modify this library, you may extend the Classpath Exception to your
 * version of the library, but you are not obligated to do so. If you do not
 * wish to do so, delete this exception statement from your version.
 */
package org.gnome.gtk;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.freedesktop.bindings.BlacklistedMethodError;
import org.freedesktop.bindings.FIXME;
import org.gnome.glib.Signal;
import org.gnome.gtk.Calendar;
import org.gnome.gtk.CalendarDisplayOptions;
import org.gnome.gtk.Plumbing;

final class GtkCalendar extends Plumbing
{
    private GtkCalendar() {}

    static final long createCalendar() {
        long result;

        synchronized (lock) {
            result = gtk_calendar_new();

            return result;
        }
    }

    private static native final long gtk_calendar_new();

    static final void clearMarks(Calendar self) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_calendar_clear_marks(pointerOf(self));
        }
    }

    private static native final void gtk_calendar_clear_marks(long self);

    static final void getDate(Calendar self, int[] year, int[] month, int[] day) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_calendar_get_date(pointerOf(self), year, month, day);
        }
    }

    private static native final void gtk_calendar_get_date(long self, int[] year, int[] month, int[] day);

    static final boolean getDayIsMarked(Calendar self, int day) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_calendar_get_day_is_marked(pointerOf(self), day);

            return result;
        }
    }

    private static native final boolean gtk_calendar_get_day_is_marked(long self, int day);

    static final int getDetailHeightRows(Calendar self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_calendar_get_detail_height_rows(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_calendar_get_detail_height_rows(long self);

    static final int getDetailWidthChars(Calendar self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_calendar_get_detail_width_chars(pointerOf(self));

            return result;
        }
    }

    private static native final int gtk_calendar_get_detail_width_chars(long self);

    static final CalendarDisplayOptions getDisplayOptions(Calendar self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_calendar_get_display_options(pointerOf(self));

            return (CalendarDisplayOptions) flagFor(CalendarDisplayOptions.class, result);
        }
    }

    private static native final int gtk_calendar_get_display_options(long self);

    static final void markDay(Calendar self, int day) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_calendar_mark_day(pointerOf(self), day);
        }
    }

    private static native final void gtk_calendar_mark_day(long self, int day);

    static final void selectDay(Calendar self, int day) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_calendar_select_day(pointerOf(self), day);
        }
    }

    private static native final void gtk_calendar_select_day(long self, int day);

    static final void selectMonth(Calendar self, int month, int year) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_calendar_select_month(pointerOf(self), month, year);
        }
    }

    private static native final void gtk_calendar_select_month(long self, int month, int year);

    @SuppressWarnings("unused")
    static final void setDetailFunc(Calendar self, FIXME func, FIXME data, FIXME destroy) throws BlacklistedMethodError {
        throw new BlacklistedMethodError("GtkCalendarDetailFunc");
    }

    static final void setDetailHeightRows(Calendar self, int rows) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_calendar_set_detail_height_rows(pointerOf(self), rows);
        }
    }

    private static native final void gtk_calendar_set_detail_height_rows(long self, int rows);

    static final void setDetailWidthChars(Calendar self, int chars) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_calendar_set_detail_width_chars(pointerOf(self), chars);
        }
    }

    private static native final void gtk_calendar_set_detail_width_chars(long self, int chars);

    static final void setDisplayOptions(Calendar self, CalendarDisplayOptions flags) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (flags == null) {
            throw new IllegalArgumentException("flags can't be null");
        }

        synchronized (lock) {
            gtk_calendar_set_display_options(pointerOf(self), numOf(flags));
        }
    }

    private static native final void gtk_calendar_set_display_options(long self, int flags);

    static final void unmarkDay(Calendar self, int day) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_calendar_unmark_day(pointerOf(self), day);
        }
    }

    private static native final void gtk_calendar_unmark_day(long self, int day);

    interface DaySelectedSignal extends Signal
    {
        void onDaySelected(Calendar source);
    }

    static final void connect(Calendar self, GtkCalendar.DaySelectedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkCalendar.class, "day-selected", after);
    }

    protected static final void receiveDaySelected(Signal handler, long source) {
        ((GtkCalendar.DaySelectedSignal) handler).onDaySelected((Calendar) objectFor(source));
    }

    interface DaySelectedDoubleClickSignal extends Signal
    {
        void onDaySelectedDoubleClick(Calendar source);
    }

    static final void connect(Calendar self, GtkCalendar.DaySelectedDoubleClickSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkCalendar.class, "day-selected-double-click", after);
    }

    protected static final void receiveDaySelectedDoubleClick(Signal handler, long source) {
        ((GtkCalendar.DaySelectedDoubleClickSignal) handler).onDaySelectedDoubleClick((Calendar) objectFor(source));
    }

    interface MonthChangedSignal extends Signal
    {
        void onMonthChanged(Calendar source);
    }

    static final void connect(Calendar self, GtkCalendar.MonthChangedSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkCalendar.class, "month-changed", after);
    }

    protected static final void receiveMonthChanged(Signal handler, long source) {
        ((GtkCalendar.MonthChangedSignal) handler).onMonthChanged((Calendar) objectFor(source));
    }

    interface NextMonthSignal extends Signal
    {
        void onNextMonth(Calendar source);
    }

    static final void connect(Calendar self, GtkCalendar.NextMonthSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkCalendar.class, "next-month", after);
    }

    protected static final void receiveNextMonth(Signal handler, long source) {
        ((GtkCalendar.NextMonthSignal) handler).onNextMonth((Calendar) objectFor(source));
    }

    interface NextYearSignal extends Signal
    {
        void onNextYear(Calendar source);
    }

    static final void connect(Calendar self, GtkCalendar.NextYearSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkCalendar.class, "next-year", after);
    }

    protected static final void receiveNextYear(Signal handler, long source) {
        ((GtkCalendar.NextYearSignal) handler).onNextYear((Calendar) objectFor(source));
    }

    interface PrevMonthSignal extends Signal
    {
        void onPrevMonth(Calendar source);
    }

    static final void connect(Calendar self, GtkCalendar.PrevMonthSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkCalendar.class, "prev-month", after);
    }

    protected static final void receivePrevMonth(Signal handler, long source) {
        ((GtkCalendar.PrevMonthSignal) handler).onPrevMonth((Calendar) objectFor(source));
    }

    interface PrevYearSignal extends Signal
    {
        void onPrevYear(Calendar source);
    }

    static final void connect(Calendar self, GtkCalendar.PrevYearSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkCalendar.class, "prev-year", after);
    }

    protected static final void receivePrevYear(Signal handler, long source) {
        ((GtkCalendar.PrevYearSignal) handler).onPrevYear((Calendar) objectFor(source));
    }
}

