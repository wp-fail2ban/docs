.. _introduction:

============
Introduction
============


.. _history:

History
-------



.. _features:

Features
--------


.. _cloudflare-and-proxy-servers:

CloudFlare and Proxy Servers
^^^^^^^^^^^^^^^^^^^^^^^^^^^^

*WPf2b* can be configured to work with CloudFlare and other proxy servers. For a brief overview see :ref:`WP_FAIL2BAN_PROXIES`.



.. _comments:

Comments
^^^^^^^^

*WPf2b* can log comments. See :ref:`WP_FAIL2BAN_LOG_COMMENTS`.



.. _pingbacks:

Pingbacks
^^^^^^^^^

*WPf2b* logs failed pingbacks, and can log all pingbacks. For a brief overview see :ref:`WP_FAIL2BAN_LOG_PINGBACKS`.



.. _spam:

Spam
^^^^

*WPf2b* can log comments marked as spam. See :ref:`WP_FAIL2BAN_LOG_SPAM`.



.. _user_enumeration:

User Enumeration
^^^^^^^^^^^^^^^^

*WPf2b* can block user enumeration. See :ref:`WP_FAIL2BAN_BLOCK_USER_ENUMERATION`.



.. _work-arounds-for-broken-syslogd:

Work-Arounds for Broken syslogd
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

*WPf2b* can be configured to work around most syslogd weirdness. For a brief overview see :ref:`WP_FAIL2BAN_SYSLOG_SHORT_TAG` and :ref:`WP_FAIL2BAN_HTTP_HOST`.



.. _blocking-users:

Blocking Users
^^^^^^^^^^^^^^

*WPf2b* can be configured to short-cut the login process when the username matches a regex. For a brief overview see :ref:`WP_FAIL2BAN_BLOCKED_USERS`.



.. _mu-plugins_support:

``mu-plugins`` Support
^^^^^^^^^^^^^^^^^^^^^^

*WPf2b* can easily be configured as a must-use plugin. One of the better ways is to install *WPf2b* as usual and then create a symlink in ``mu-plugins``:

.. code-block:: sh

	lrwxr-xr-x  1  www  www  38  4 Nov 16:24 wp-fail2ban.php -> ../plugins/wp-fail2ban/wp-fail2ban.php

This has the advantage that you can update *WPf2b* as usual without having to update ``mu-plugins`` directly.  You don't need to activate *WPf2b*, but it won't hurt if you do.

