.. _quickstart_web_application_firewall:

Web Application Firewall
========================

**Edition:** Premium. Experimental.

Selecting the card applies this configuration:

* :ref:`WP_FAIL2BAN_EX_WAF` is set to ``enabled``;
* :ref:`WP_FAIL2BAN_EX_WAF_SQLI_PLUGINS` is set to ``true``;
* :ref:`WP_FAIL2BAN_EX_WAF_UPDATE_OPTION` is set to ``theme``;
* :ref:`WP_FAIL2BAN_EX_WAF_USERS_DELETE` is set to ``true``.

This enables SQL-injection checks on plugin paths, protects core option updates while allowing recognised theme setup changes, and requires the ``delete_users`` capability for user deletion. SQL-injection checks on WordPress paths remain at the :ref:`WP_FAIL2BAN_EX_WAF_SQLI_WORDPRESS` default. Country blocking and the honeypot are unaffected.

Blocked events match ``wordpress-wpf2b-waf.conf``; configure a jail for that filter to ban their source addresses. If any requested setting is fixed to a conflicting value in ``wp-config.php``, the card cannot apply the complete configuration and Site Health reports the conflict. The equivalent individual controls are on the Block tab in Advanced settings.

.. include:: ../../autogen/join/card-web-application-firewall.rst

.. seealso::
   :ref:`feature-waf-sqli`
   :ref:`feature-waf-update-option`
   :ref:`feature-waf-delete-user`
