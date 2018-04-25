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

import org.gnome.gdk.Pixbuf;
import org.gnome.glib.Signal;
import org.gnome.gtk.AboutDialog;
import org.gnome.gtk.License;
import org.gnome.gtk.Plumbing;

final class GtkAboutDialog extends Plumbing
{
    private GtkAboutDialog() {}

    static final long createAboutDialog() {
        long result;

        synchronized (lock) {
            result = gtk_about_dialog_new();

            return result;
        }
    }

    private static native final long gtk_about_dialog_new();

    static final void addCreditSection(AboutDialog self, String sectionName, String[] people) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (sectionName == null) {
            throw new IllegalArgumentException("sectionName can't be null");
        }

        if (people == null) {
            throw new IllegalArgumentException("people can't be null");
        }

        synchronized (lock) {
            gtk_about_dialog_add_credit_section(pointerOf(self), sectionName, people);
        }
    }

    private static native final void gtk_about_dialog_add_credit_section(long self, String sectionName, String[] people);

    static final String[] getArtists(AboutDialog self) {
        String[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_about_dialog_get_artists(pointerOf(self));

            return result;
        }
    }

    private static native final String[] gtk_about_dialog_get_artists(long self);

    static final String[] getAuthors(AboutDialog self) {
        String[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_about_dialog_get_authors(pointerOf(self));

            return result;
        }
    }

    private static native final String[] gtk_about_dialog_get_authors(long self);

    static final String getComments(AboutDialog self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_about_dialog_get_comments(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_about_dialog_get_comments(long self);

    static final String getCopyright(AboutDialog self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_about_dialog_get_copyright(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_about_dialog_get_copyright(long self);

    static final String[] getDocumenters(AboutDialog self) {
        String[] result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_about_dialog_get_documenters(pointerOf(self));

            return result;
        }
    }

    private static native final String[] gtk_about_dialog_get_documenters(long self);

    static final String getLicense(AboutDialog self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_about_dialog_get_license(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_about_dialog_get_license(long self);

    static final License getLicenseType(AboutDialog self) {
        int result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_about_dialog_get_license_type(pointerOf(self));

            return (License) enumFor(License.class, result);
        }
    }

    private static native final int gtk_about_dialog_get_license_type(long self);

    static final Pixbuf getLogo(AboutDialog self) {
        long result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_about_dialog_get_logo(pointerOf(self));

            return (Pixbuf) objectFor(result);
        }
    }

    private static native final long gtk_about_dialog_get_logo(long self);

    static final String getLogoIconName(AboutDialog self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_about_dialog_get_logo_icon_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_about_dialog_get_logo_icon_name(long self);

    static final String getProgramName(AboutDialog self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_about_dialog_get_program_name(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_about_dialog_get_program_name(long self);

    static final String getTranslatorCredits(AboutDialog self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_about_dialog_get_translator_credits(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_about_dialog_get_translator_credits(long self);

    static final String getVersion(AboutDialog self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_about_dialog_get_version(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_about_dialog_get_version(long self);

    static final String getWebsite(AboutDialog self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_about_dialog_get_website(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_about_dialog_get_website(long self);

    static final String getWebsiteLabel(AboutDialog self) {
        String result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_about_dialog_get_website_label(pointerOf(self));

            return result;
        }
    }

    private static native final String gtk_about_dialog_get_website_label(long self);

    static final boolean getWrapLicense(AboutDialog self) {
        boolean result;

        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            result = gtk_about_dialog_get_wrap_license(pointerOf(self));

            return result;
        }
    }

    private static native final boolean gtk_about_dialog_get_wrap_license(long self);

    static final void setArtists(AboutDialog self, String[] artists) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (artists == null) {
            throw new IllegalArgumentException("artists can't be null");
        }

        synchronized (lock) {
            gtk_about_dialog_set_artists(pointerOf(self), artists);
        }
    }

    private static native final void gtk_about_dialog_set_artists(long self, String[] artists);

    static final void setAuthors(AboutDialog self, String[] authors) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (authors == null) {
            throw new IllegalArgumentException("authors can't be null");
        }

        synchronized (lock) {
            gtk_about_dialog_set_authors(pointerOf(self), authors);
        }
    }

    private static native final void gtk_about_dialog_set_authors(long self, String[] authors);

    static final void setComments(AboutDialog self, String comments) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_about_dialog_set_comments(pointerOf(self), comments);
        }
    }

    private static native final void gtk_about_dialog_set_comments(long self, String comments);

    static final void setCopyright(AboutDialog self, String copyright) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_about_dialog_set_copyright(pointerOf(self), copyright);
        }
    }

    private static native final void gtk_about_dialog_set_copyright(long self, String copyright);

    static final void setDocumenters(AboutDialog self, String[] documenters) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (documenters == null) {
            throw new IllegalArgumentException("documenters can't be null");
        }

        synchronized (lock) {
            gtk_about_dialog_set_documenters(pointerOf(self), documenters);
        }
    }

    private static native final void gtk_about_dialog_set_documenters(long self, String[] documenters);

    static final void setLicense(AboutDialog self, String license) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_about_dialog_set_license(pointerOf(self), license);
        }
    }

    private static native final void gtk_about_dialog_set_license(long self, String license);

    static final void setLicenseType(AboutDialog self, License licenseType) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (licenseType == null) {
            throw new IllegalArgumentException("licenseType can't be null");
        }

        synchronized (lock) {
            gtk_about_dialog_set_license_type(pointerOf(self), numOf(licenseType));
        }
    }

    private static native final void gtk_about_dialog_set_license_type(long self, int licenseType);

    static final void setLogo(AboutDialog self, Pixbuf logo) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_about_dialog_set_logo(pointerOf(self), pointerOf(logo));
        }
    }

    private static native final void gtk_about_dialog_set_logo(long self, long logo);

    static final void setLogoIconName(AboutDialog self, String iconName) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_about_dialog_set_logo_icon_name(pointerOf(self), iconName);
        }
    }

    private static native final void gtk_about_dialog_set_logo_icon_name(long self, String iconName);

    static final void setProgramName(AboutDialog self, String name) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (name == null) {
            throw new IllegalArgumentException("name can't be null");
        }

        synchronized (lock) {
            gtk_about_dialog_set_program_name(pointerOf(self), name);
        }
    }

    private static native final void gtk_about_dialog_set_program_name(long self, String name);

    static final void setTranslatorCredits(AboutDialog self, String translatorCredits) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_about_dialog_set_translator_credits(pointerOf(self), translatorCredits);
        }
    }

    private static native final void gtk_about_dialog_set_translator_credits(long self, String translatorCredits);

    static final void setVersion(AboutDialog self, String version) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_about_dialog_set_version(pointerOf(self), version);
        }
    }

    private static native final void gtk_about_dialog_set_version(long self, String version);

    static final void setWebsite(AboutDialog self, String website) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_about_dialog_set_website(pointerOf(self), website);
        }
    }

    private static native final void gtk_about_dialog_set_website(long self, String website);

    static final void setWebsiteLabel(AboutDialog self, String websiteLabel) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        if (websiteLabel == null) {
            throw new IllegalArgumentException("websiteLabel can't be null");
        }

        synchronized (lock) {
            gtk_about_dialog_set_website_label(pointerOf(self), websiteLabel);
        }
    }

    private static native final void gtk_about_dialog_set_website_label(long self, String websiteLabel);

    static final void setWrapLicense(AboutDialog self, boolean wrapLicense) {
        if (self == null) {
            throw new IllegalArgumentException("self can't be null");
        }

        synchronized (lock) {
            gtk_about_dialog_set_wrap_license(pointerOf(self), wrapLicense);
        }
    }

    private static native final void gtk_about_dialog_set_wrap_license(long self, boolean wrapLicense);

    interface ActivateLinkSignal extends Signal
    {
        boolean onActivateLink(AboutDialog source, String uri);
    }

    static final void connect(AboutDialog self, GtkAboutDialog.ActivateLinkSignal handlerInstance, boolean after) {
        connectSignal(self, handlerInstance, GtkAboutDialog.class, "activate-link", after);
    }

    protected static final boolean receiveActivateLink(Signal handler, long source, String uri) {
        boolean result;

        result = ((GtkAboutDialog.ActivateLinkSignal) handler).onActivateLink((AboutDialog) objectFor(source), uri);

        return result;
    }
}

