.. _feature-waf:

WAF
===

Premium, experimental. The WAF can inspect plugin and WordPress request paths for SQL injection, protect selected option updates, and require the appropriate capability for user deletion. The checks share :ref:`WP_FAIL2BAN_EX_WAF` and the WAF facility. Blocked events match ``wordpress-wpf2b-waf.conf``.

The :ref:`quickstart_web_application_firewall` card enables a predefined combination of all three checks.

.. toctree::
   :maxdepth: 1

   waf-sqli
   waf-update-option
   waf-delete-user
