.. _operating_filters:

Filters and compatibility
=========================

Shipped filters use Semantic Versioning relative to the plugin:

* Patch (6.3.x → 6.3.y): you will **not** need to update filters.
* Minor (6.3 → 6.4): you **may** need new rules to use **new** features; existing jails keep working.
* Major (6.x → 7.0): you **may** need to update filters for **existing** features.

Release notes always say when a copy into fail2ban’s directory is required. Site Health also compares versions.

How to update: copy ``wp-content/plugins/wp-fail2ban/filters.d/*.conf`` (or ``wp-fail2ban-premium/filters.d``) over the files fail2ban is using, then ``fail2ban-client reload``. Back up first. Typical fail2ban directories are ``/etc/fail2ban/`` and ``/usr/local/etc/fail2ban/``.

Filter **contents** are in :ref:`reference_filters`. Do not edit the plugin copies.
