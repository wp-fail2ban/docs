.. _maintenance:

===========
Maintenance
===========

While *WPf2b* needs no routine maintenance, from time to time there are changes that will require modifying your configuration.

Updating Filters
################

Keeping your ``fail2ban`` filters up-to-date is critical for the correct operation of *WPf2b*.

When to Update
**************

Knowing when to update your filters has changed since 4.4.x. The release notes, as always, still say whether updating is necessary, but now that *WPf2b* strictly follows SemVer it's trivial to determine when an update is needed. In addition, the WordPress Site Health tool now checks if the filters are up to date.

SemVer
======

From v5.0.1 to v5.0.2
  You will never need to update the filters.

From v5.0.x to v5.1.0
  You may need to update the filters to enable new features; existing configurations will continue to work as before.

From v5.1.x to v6.0.0
  You may need to update the filters for existing features to work.

How to Update
*************
