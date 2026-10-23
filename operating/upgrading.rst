.. _operating_upgrading:

Upgrading WP fail2ban
=====================

|WPf2b| follows Semantic Versioning (SemVer): its ``major.minor.patch`` version indicates the kind of change. A major release may include incompatible changes, a minor release adds compatible functionality, and a patch release contains compatible fixes. [#semver]_

WordPress's automatic plugin updates do not treat a major version as a compatibility boundary, so |WPf2b| prevents those automatic updates from crossing one. It leaves the ordinary automatic-update choice in place for releases within the same major version. Review a major upgrade before installing it deliberately.

Before a major upgrade, make a restorable backup of the plugin files, the WordPress database, and the installed host filters. Premium event history remains in its database tables through deactivation and upgrades, so include those tables in the backup; see :ref:`operating_event_storage`.

Use the update route chosen for the installation: the Canonical self-updater, Composer, Git Updater, WordPress.org LTS, Freemius Premium, or the Premium Composer channel. An ended Freemius trial with no Premium entitlement receives a later Canonical release as the ``wp-fail2ban`` plugin; the trial copy stays on disk but inactive. If ``wp-fail2ban`` is already occupied, that installation is not overwritten and WordPress shows an error until the path is free. Check the release notes for changes to shipped filters. The host copies used by fail2ban are separate from plugin files, so have a privileged administrator update them when required, validate fail2ban, and reload the jails. See :ref:`operating_filters`.

After the upgrade, confirm that a known |WPf2b| message reaches the expected host log and that its jail counts it. If the upgrade changed a filter, facility, identifier, or jail, repeat :ref:`installation_verifying` through the firewall action. Site Health can help expose some local mistakes when the host permits PHP to inspect them; see :ref:`operating_site_health`.

If restoring an earlier plugin release, restore its corresponding host filter copies as well. On Premium, schema migrations may also require the matching database backup. Repeat the verification after the plugin, database, and privileged fail2ban copies are compatible with the active release.

.. [#semver] `Semantic Versioning 2.0.0 <https://semver.org/>`_.
