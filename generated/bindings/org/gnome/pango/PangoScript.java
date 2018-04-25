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
package org.gnome.pango;

/*
 * THIS FILE IS GENERATED CODE!
 *
 * To modify its contents or behaviour, either update the generation program,
 * change the information in the source defs file, or implement an override for
 * this class.
 */

import org.gnome.pango.Plumbing;

final class PangoScript extends Plumbing
{
    private PangoScript() {}

    static final int INVALID_CODE = -1;

    static final int COMMON = 0;

    static final int INHERITED = 1;

    static final int ARABIC = 2;

    static final int ARMENIAN = 3;

    static final int BENGALI = 4;

    static final int BOPOMOFO = 5;

    static final int CHEROKEE = 6;

    static final int COPTIC = 7;

    static final int CYRILLIC = 8;

    static final int DESERET = 9;

    static final int DEVANAGARI = 10;

    static final int ETHIOPIC = 11;

    static final int GEORGIAN = 12;

    static final int GOTHIC = 13;

    static final int GREEK = 14;

    static final int GUJARATI = 15;

    static final int GURMUKHI = 16;

    static final int HAN = 17;

    static final int HANGUL = 18;

    static final int HEBREW = 19;

    static final int HIRAGANA = 20;

    static final int KANNADA = 21;

    static final int KATAKANA = 22;

    static final int KHMER = 23;

    static final int LAO = 24;

    static final int LATIN = 25;

    static final int MALAYALAM = 26;

    static final int MONGOLIAN = 27;

    static final int MYANMAR = 28;

    static final int OGHAM = 29;

    static final int OLD_ITALIC = 30;

    static final int ORIYA = 31;

    static final int RUNIC = 32;

    static final int SINHALA = 33;

    static final int SYRIAC = 34;

    static final int TAMIL = 35;

    static final int TELUGU = 36;

    static final int THAANA = 37;

    static final int THAI = 38;

    static final int TIBETAN = 39;

    static final int CANADIAN_ABORIGINAL = 40;

    static final int YI = 41;

    static final int TAGALOG = 42;

    static final int HANUNOO = 43;

    static final int BUHID = 44;

    static final int TAGBANWA = 45;

    static final int BRAILLE = 46;

    static final int CYPRIOT = 47;

    static final int LIMBU = 48;

    static final int OSMANYA = 49;

    static final int SHAVIAN = 50;

    static final int LINEAR_B = 51;

    static final int TAI_LE = 52;

    static final int UGARITIC = 53;

    static final int NEW_TAI_LUE = 54;

    static final int BUGINESE = 55;

    static final int GLAGOLITIC = 56;

    static final int TIFINAGH = 57;

    static final int SYLOTI_NAGRI = 58;

    static final int OLD_PERSIAN = 59;

    static final int KHAROSHTHI = 60;

    static final int UNKNOWN = 61;

    static final int BALINESE = 62;

    static final int CUNEIFORM = 63;

    static final int PHOENICIAN = 64;

    static final int PHAGS_PA = 65;

    static final int NKO = 66;

    static final int KAYAH_LI = 67;

    static final int LEPCHA = 68;

    static final int REJANG = 69;

    static final int SUNDANESE = 70;

    static final int SAURASHTRA = 71;

    static final int CHAM = 72;

    static final int OL_CHIKI = 73;

    static final int VAI = 74;

    static final int CARIAN = 75;

    static final int LYCIAN = 76;

    static final int LYDIAN = 77;

    static final int BATAK = 78;

    static final int BRAHMI = 79;

    static final int MANDAIC = 80;

    static final int CHAKMA = 81;

    static final int MEROITIC_CURSIVE = 82;

    static final int MEROITIC_HIEROGLYPHS = 83;

    static final int MIAO = 84;

    static final int SHARADA = 85;

    static final int SORA_SOMPENG = 86;

    static final int TAKRI = 87;

    static final int BASSA_VAH = 88;

    static final int CAUCASIAN_ALBANIAN = 89;

    static final int DUPLOYAN = 90;

    static final int ELBASAN = 91;

    static final int GRANTHA = 92;

    static final int KHOJKI = 93;

    static final int KHUDAWADI = 94;

    static final int LINEAR_A = 95;

    static final int MAHAJANI = 96;

    static final int MANICHAEAN = 97;

    static final int MENDE_KIKAKUI = 98;

    static final int MODI = 99;

    static final int MRO = 100;

    static final int NABATAEAN = 101;

    static final int OLD_NORTH_ARABIAN = 102;

    static final int OLD_PERMIC = 103;

    static final int PAHAWH_HMONG = 104;

    static final int PALMYRENE = 105;

    static final int PAU_CIN_HAU = 106;

    static final int PSALTER_PAHLAVI = 107;

    static final int SIDDHAM = 108;

    static final int TIRHUTA = 109;

    static final int WARANG_CITI = 110;

    static final int AHOM = 111;

    static final int ANATOLIAN_HIEROGLYPHS = 112;

    static final int HATRAN = 113;

    static final int MULTANI = 114;

    static final int OLD_HUNGARIAN = 115;

    static final int SIGNWRITING = 116;
}

