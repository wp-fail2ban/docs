.. _quickstart_web_application_firewall:

Web Application Firewall
========================

**Edition:** Premium. Experimental.

Selecting the card enables the WAF with SQL injection protection for plugin queries, protection for selected core options, and an authorisation check before user deletion.

The WAF can retain request bodies, headers, SQL, and option values in Premium events even when general extra-field controls are off. Those values can be sensitive and increase database storage. See :ref:`feature-waf` and :ref:`operating_event_storage`.

Blocked WAF messages can match ``wordpress-wpf2b-waf.conf``; a jail must be configured to act on them.

Bundle settings
---------------

.. list-table::
   :header-rows: 1
   :widths: 75 25

   * - Setting
     - Value applied
   * - :ref:`WP_FAIL2BAN_EX_WAF`
     - ``enabled``
   * - :ref:`WP_FAIL2BAN_EX_WAF_SQLI_PLUGINS`
     - ``true``
   * - :ref:`WP_FAIL2BAN_EX_WAF_USERS_DELETE`
     - ``true``
   * - :ref:`WP_FAIL2BAN_EX_WAF_UPDATE_OPTION`
     - ``theme``

An existing ``all`` option-protection policy already satisfies the bundle and
remains ``all``. That difference matters because ``theme`` permits recognised
theme setup changes and ``all`` does not. The individual controls are on the
WAF tab in Advanced settings.

.. include:: card-settings.rst.inc

.. include:: ../../autogen/join/card-web-application-firewall.rst

.. seealso::
   :ref:`feature-waf-sqli`
   :ref:`feature-waf-update-option`
   :ref:`feature-waf-delete-user`
