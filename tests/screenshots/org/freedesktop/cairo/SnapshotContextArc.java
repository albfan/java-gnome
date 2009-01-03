/*
 * SnapshotContextArc.java
 *
 * Copyright (c) 2008 Operational Dynamics Consulting Pty Ltd
 * 
 * The code in this file, and the program it is a part of, are made available
 * to you by the authors under the terms of the "GNU General Public Licence,
 * version 2" See the LICENCE file for the terms governing usage and
 * redistribution.
 */
package org.freedesktop.cairo;

import org.gnome.gtk.Gtk;

/**
 * @author Andrew Cowie
 */
public class SnapshotContextArc extends SnapshotCairoAxis
{
    public SnapshotContextArc() {
        super(Context.class, "arc");
    }

    protected void draw(Context cr) {
        final double x, y;

        super.drawAxis(cr);

        // arc positive
        cr.setSourceRGB(0, 0, 1);
        cr.setLineWidth(2.0);

        cr.moveTo(50 + 30, 50);
        cr.arc(50, 50, 30, 0, Math.PI / 3);

        x = cr.getCurrentPointX();
        y = cr.getCurrentPointY();
        cr.stroke();

        cr.moveTo(x, y + 0.2);
        cr.lineRelative(2, -6);
        cr.lineRelative(4.5, 5.5);
        cr.fill();
    }

    public static void main(String[] args) {
        Gtk.init(args);
        runExample(new SnapshotContextArc());
        Gtk.main();
    }
}