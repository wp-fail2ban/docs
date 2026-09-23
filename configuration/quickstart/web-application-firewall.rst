.. _quickstart_web_application_firewall:

Web Application Firewall
========================

**Edition:** Premium. Experimental.

Selecting the card enables the WAF, SQL injection inspection for plugin SQL about to execute, option protection, and the capability check for user deletion.

The bundle applies :ref:`WP_FAIL2BAN_EX_WAF` as ``enabled``, :ref:`WP_FAIL2BAN_EX_WAF_SQLI_PLUGINS` and :ref:`WP_FAIL2BAN_EX_WAF_USERS_DELETE` as ``true``, and :ref:`WP_FAIL2BAN_EX_WAF_UPDATE_OPTION` as ``theme``. An existing ``all`` option-protection policy already satisfies the bundle and remains ``all``. That difference matters because ``theme`` permits recognised theme setup changes and ``all`` does not.

The WAF can retain request bodies, headers, SQL, and option values in Premium events even when general extra-field controls are off. Those values can be sensitive and increase database storage. See :ref:`feature-waf` and :ref:`operating_event_storage`.

Blocked WAF messages can match ``wordpress-wpf2b-waf.conf``; a jail must be configured to act on them. The individual controls are on the WAF tab in Advanced settings.

.. include:: card-settings.rst.inc

.. include:: ../../autogen/join/card-web-application-firewall.rst

.. seealso::
   :ref:`feature-waf-sqli`
   :ref:`feature-waf-update-option`
   :ref:`feature-waf-delete-user`
