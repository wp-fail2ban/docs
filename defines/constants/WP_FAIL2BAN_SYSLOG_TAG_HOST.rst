.. _WP_FAIL2BAN_SYSLOG_TAG_HOST:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_SYSLOG_TAG_HOST
---------------------------

.. rubric:: Put hostname in syslog tag.
.. include:: default-true.rst

.. deprecated:: 6.0.0
.. versionadded:: 5.3.0

----

Useful if your distro uses journald.

By default *WPf2b* includes the virtual host in the syslog tag so that the target can easily be identified. Unfortunately, journald cannot match the "syslog identifier" with a regex, so the next best option is to omit the host and match "wordpress".

.. warning::
   For future compatibility, make sure you're **not** using the short tag ("wp").

.. code-block:: php

    /*
     * Use plain "wordpress" tag.
     */
    define('WP_FAIL2BAN_SYSLOG_SHORT_TAG', false);
    define('WP_FAIL2BAN_SYSLOG_TAG_HOST', false);

.. seealso::
  * :ref:`WP_FAIL2BAN_SYSLOG_SHORT_TAG`

Then in your ``jail.conf`` you can do something like this:

.. code-block:: ini

   [wordpress-hard]
   enabled = true
   filter = wordpress-hard.conf
   journalmatch = SYSLOG_IDENTIFIER=wordpress
   maxretry = 1
   port = http, https
