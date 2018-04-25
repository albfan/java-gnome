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
package org.gnome.atk;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.gnome.atk.Plumbing;

final class AtkRole extends Plumbing
{
    private AtkRole() {}

    static final int INVALID = 0;

    static final int ACCELERATOR_LABEL = 1;

    static final int ALERT = 2;

    static final int ANIMATION = 3;

    static final int ARROW = 4;

    static final int CALENDAR = 5;

    static final int CANVAS = 6;

    static final int CHECK_BOX = 7;

    static final int CHECK_MENU_ITEM = 8;

    static final int COLOR_CHOOSER = 9;

    static final int COLUMN_HEADER = 10;

    static final int COMBO_BOX = 11;

    static final int DATE_EDITOR = 12;

    static final int DESKTOP_ICON = 13;

    static final int DESKTOP_FRAME = 14;

    static final int DIAL = 15;

    static final int DIALOG = 16;

    static final int DIRECTORY_PANE = 17;

    static final int DRAWING_AREA = 18;

    static final int FILE_CHOOSER = 19;

    static final int FILLER = 20;

    static final int FONT_CHOOSER = 21;

    static final int FRAME = 22;

    static final int GLASS_PANE = 23;

    static final int HTML_CONTAINER = 24;

    static final int ICON = 25;

    static final int IMAGE = 26;

    static final int INTERNAL_FRAME = 27;

    static final int LABEL = 28;

    static final int LAYERED_PANE = 29;

    static final int LIST = 30;

    static final int LIST_ITEM = 31;

    static final int MENU = 32;

    static final int MENU_BAR = 33;

    static final int MENU_ITEM = 34;

    static final int OPTION_PANE = 35;

    static final int PAGE_TAB = 36;

    static final int PAGE_TAB_LIST = 37;

    static final int PANEL = 38;

    static final int PASSWORD_TEXT = 39;

    static final int POPUP_MENU = 40;

    static final int PROGRESS_BAR = 41;

    static final int PUSH_BUTTON = 42;

    static final int RADIO_BUTTON = 43;

    static final int RADIO_MENU_ITEM = 44;

    static final int ROOT_PANE = 45;

    static final int ROW_HEADER = 46;

    static final int SCROLL_BAR = 47;

    static final int SCROLL_PANE = 48;

    static final int SEPARATOR = 49;

    static final int SLIDER = 50;

    static final int SPLIT_PANE = 51;

    static final int SPIN_BUTTON = 52;

    static final int STATUSBAR = 53;

    static final int TABLE = 54;

    static final int TABLE_CELL = 55;

    static final int TABLE_COLUMN_HEADER = 56;

    static final int TABLE_ROW_HEADER = 57;

    static final int TEAR_OFF_MENU_ITEM = 58;

    static final int TERMINAL = 59;

    static final int TEXT = 60;

    static final int TOGGLE_BUTTON = 61;

    static final int TOOL_BAR = 62;

    static final int TOOL_TIP = 63;

    static final int TREE = 64;

    static final int TREE_TABLE = 65;

    static final int UNKNOWN = 66;

    static final int VIEWPORT = 67;

    static final int WINDOW = 68;

    static final int HEADER = 69;

    static final int FOOTER = 70;

    static final int PARAGRAPH = 71;

    static final int RULER = 72;

    static final int APPLICATION = 73;

    static final int AUTOCOMPLETE = 74;

    static final int EDIT_BAR = 75;

    static final int EMBEDDED = 76;

    static final int ENTRY = 77;

    static final int CHART = 78;

    static final int CAPTION = 79;

    static final int DOCUMENT_FRAME = 80;

    static final int HEADING = 81;

    static final int PAGE = 82;

    static final int SECTION = 83;

    static final int REDUNDANT_OBJECT = 84;

    static final int FORM = 85;

    static final int LINK = 86;

    static final int INPUT_METHOD_WINDOW = 87;

    static final int TABLE_ROW = 88;

    static final int TREE_ITEM = 89;

    static final int DOCUMENT_SPREADSHEET = 90;

    static final int DOCUMENT_PRESENTATION = 91;

    static final int DOCUMENT_TEXT = 92;

    static final int DOCUMENT_WEB = 93;

    static final int DOCUMENT_EMAIL = 94;

    static final int COMMENT = 95;

    static final int LIST_BOX = 96;

    static final int GROUPING = 97;

    static final int IMAGE_MAP = 98;

    static final int NOTIFICATION = 99;

    static final int INFO_BAR = 100;

    static final int LEVEL_BAR = 101;

    static final int TITLE_BAR = 102;

    static final int BLOCK_QUOTE = 103;

    static final int AUDIO = 104;

    static final int VIDEO = 105;

    static final int DEFINITION = 106;

    static final int ARTICLE = 107;

    static final int LANDMARK = 108;

    static final int LOG = 109;

    static final int MARQUEE = 110;

    static final int MATH = 111;

    static final int RATING = 112;

    static final int TIMER = 113;

    static final int DESCRIPTION_LIST = 114;

    static final int DESCRIPTION_TERM = 115;

    static final int DESCRIPTION_VALUE = 116;

    static final int STATIC = 117;

    static final int MATH_FRACTION = 118;

    static final int MATH_ROOT = 119;

    static final int SUBSCRIPT = 120;

    static final int SUPERSCRIPT = 121;

    static final int FOOTNOTE = 122;

    static final int LAST_DEFINED = 123;
}

