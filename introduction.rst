.. _introduction:

============
Introduction
============


.. _history:

History
-------

As with many open source projects, `ẀP fail2ban` started as way to scratch a particular itch. I had a dedicated server that was getting some unwelcome attention from various bots, and while it was trivial to configure `fail2ban` for ``ssh`` etc, WordPress was another story. Thus `WP fail2ban` was born late November 2011.

Since then it's slowly but steadily accumulated features, and much to my surprise, gained a considerable number of installs (30,000+ at the time of writing) - I really had no idea so many other people would be interested!

Between versions 3.5 and 3.6 there was a bit of a delay. I switched my development environment from Windows 10 [#f1]_ to a FreeBSD workstation and a Linux laptop, life then decided to take its turn and get in the way for a bit, all while the shadow of Gutenberg loomed large over the future of WordPress. With the advent of `ClassicPress <https://classicpress.net/>`_ [#f2]_ things started to look sunnier, so I dusted off the repo, put together some better documentation, braved the horrors of ``svn``, and got 3.6 out the door as a pseudo 7th anniversary present in November 2018.


.. _future:

Future
------

Version 4 was born from a desire to visualise the things *WPf2b* was logging; being entirely separate and distinct from the core functionality, adding this as freemium features seemed like a good plan. Time will tell.

This logical separation will continue for all future versions - if you were happy with the way 3.6 worked you'll be happy with future versions too.


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

*WPf2b* can log both successful comments (see :ref:`WP_FAIL2BAN_LOG_COMMENTS`), and unsuccessful comments (see :ref:`WP_FAIL2BAN_LOG_COMMENTS_EXTRA`).



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

`mu-plugins` Support
^^^^^^^^^^^^^^^^^^^^

*WPf2b* can easily be configured as a must-use plugin. 


.. rubric:: Footnotes

.. [#f1] It took me a while to realise that Microsoft really do want to turn Windows 10 into a toy, but I got there eventually.
.. [#f2] In the interests of full disclosure: I'm a Founding Committee Member and at the time of writing, Security Team Lead.

