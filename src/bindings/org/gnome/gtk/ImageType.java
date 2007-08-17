/*
 * ImageType.java
 *
 * Copyright (c) 2007 Operational Dynamics Consulting Pty Ltd, and Others
 *
 * The code in this file, and the library it is a part of, are made available
 * to you by the authors under the terms of the "GNU General Public Licence,
 * version 2" plus the "Classpath Exception" (you may link to this code as a
 * library into other programs provided you don't make a derivation of it).
 * See the LICENCE file for the terms governing usage and redistribution.
 */
package org.gnome.gtk;

import org.freedesktop.bindings.Constant;
import org.gnome.gdk.PixbufAnimation;

/**
 * The type of image in a {@link Image} or a {@link StatusIcon}.
 * 
 * @author Nat Pryce
 * @since 4.0.4
 */
public final class ImageType extends Constant
{
    /**
     * There is no image displayed by the widget.
     */
    public static final ImageType EMPTY = new ImageType(GtkImageType.EMPTY, "EMPTY");

    /**
     * The widget contains a {@link org.gnome.gdk.Pixmap}.
     */
    public static final ImageType PIXMAP = new ImageType(GtkImageType.PIXMAP, "PIXMAP");

    /**
     * The widget contains a  {@link org.gnome.gdk.Image}.
     */
    public static final ImageType IMAGE = new ImageType(GtkImageType.IMAGE, "IMAGE");

    /**
     * The widget contains a {@link org.gnome.gdk.Pixbuf}.
     */
    public static final ImageType PIXBUF = new ImageType(GtkImageType.PIXBUF, "PIXBUF");

    /**
     * The widget contains a stock icon name.
     */
    public static final ImageType STOCK = new ImageType(GtkImageType.STOCK, "STOCK");

    /**
     * The widget contains a {@link IconSet}.
     */
    public static final ImageType ICON_SET = new ImageType(GtkImageType.ICON_SET, "ICON_SET");

    /**
     * The widget contains a {@link PixbufAnimation}.
     */
    public static final ImageType ANIMATION = new ImageType(GtkImageType.ANIMATION, "ANIMATION");

    private ImageType(int ordinal, String nickname) {
        super(ordinal, nickname);
    }
}
