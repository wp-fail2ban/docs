.. _features:

========
Features
========

v5.1
  * WAF

v5.0
  * Site heath checks

  Premium
    * Akismet support
    * Event hooks

v4.4.0
  * Add :ref:`WP_FAIL2BAN_USE_AUTHPRIV`.
  * Add :ref:`WP_FAIL2BAN_FREE_ONLY`.
  * Add :ref:`WP_FAIL2BAN_PLUGIN_LOG_OTHER`.

  Premium
    * Add support for Pingbacks while blocking XML‑RPC.

v4.3.2
  * Back-port new :ref:`Block event class <events_BLOCK>`.

  Premium
    * Add cron event to update trusted Cloudflare IP ranges weekly.
    * Add cron event to update trusted Jetpack IP ranges weekly.
    * Add cron event to update MaxMind database weekly.
    * Add support for blocking by Country.
    * Add XML‑RPC blocking; allow trusted IPs and Jetpack.

.. _multisite-support:

NEW - Multisite Support
~~~~~~~~~~~~~~~~~~~~~~~

Version 4.3 introduces `proper support for multisite networks <https://wp-fail2ban.com/features/multisite-networks/?utm_source=docs.wp-fail2ban.com&utm_medium=4.3&utm_campaign=4.3.0>`_.



.. _block-username-login:

NEW - Block username logins
~~~~~~~~~~~~~~~~~~~~~~~~~~~

Sometimes it's not possible to block user enumeration (for example, if your theme provides Author profiles). Version 4.3 adds support for requiring the use of email addresses for login.



.. _empty-usernames:

NEW - Filter for Empty Username Login Attempts
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Some bots will try to login without a username. Version 4.3 logs these attempts and provides an "extra" filter to match them.



.. _syslog_dashboard_widget:

NEW - syslog Dashboard Widget
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Ever wondered what's being logged? The new dashboard widget shows the last 5 messages; the Premium version keeps a full history to help you analyse and prevent attacks.





.. _3rd-party-plugins:

Support for 3rd-party Plugins
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Version 4.2 introduced a simple API for authors to integrate their plugins with *WPf2b*, with 2 *experimental* add-ons:

  * `Contact Form 7 <https://wordpress.org/plugins/wp-fail2ban-addon-contact-form-7/>`_
  * `Gravity Forms <https://wordpress.org/plugins/wp-fail2ban-addon-gravity-forms/>`_



.. _cloudflare-and-proxy-servers:

CloudFlare and Proxy Servers
~~~~~~~~~~~~~~~~~~~~~~~~~~~~

*WPf2b* can be configured to work with CloudFlare and other proxy servers. For a brief overview see :ref:`WP_FAIL2BAN_PROXIES`.



.. _comments:

Comments
~~~~~~~~

*WPf2b* can log both successful comments (see :ref:`WP_FAIL2BAN_LOG_COMMENTS`), and unsuccessful comments (see :ref:`WP_FAIL2BAN_LOG_COMMENTS_EXTRA`).



.. _pingbacks:

Pingbacks
~~~~~~~~~

*WPf2b* logs failed pingbacks, and can log all pingbacks. For a brief overview see :ref:`WP_FAIL2BAN_LOG_PINGBACKS`.



.. _spam:

Spam
~~~~

*WPf2b* can log comments marked as spam. See :ref:`WP_FAIL2BAN_LOG_SPAM`.



.. _user_enumeration:

User Enumeration
~~~~~~~~~~~~~~~~

*WPf2b* can block user enumeration. See :ref:`WP_FAIL2BAN_BLOCK_USER_ENUMERATION`.



.. _work-arounds-for-broken-syslogd:

Work-Arounds for Broken syslogd
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

*WPf2b* can be configured to work around most syslogd weirdness. For a brief overview see :ref:`WP_FAIL2BAN_SYSLOG_SHORT_TAG` and :ref:`WP_FAIL2BAN_HTTP_HOST`.



.. _blocking-users:

Blocking Users
~~~~~~~~~~~~~~

*WPf2b* can be configured to short-cut the login process when the username matches a regex. For a brief overview see :ref:`WP_FAIL2BAN_BLOCKED_USERS`.



.. _mu-plugins_support:

`mu-plugins` Support
~~~~~~~~~~~~~~~~~~~~

*WPf2b* can easily be configured as a must-use plugin. 

