.. _quickstart_web_application_firewall:

Web Application Firewall
========================

**Edition:** Premium. Experimental.

Turns on the three shipped WAF checks together: SQLi on plugin/WordPress paths, ``update_option`` tampering, and ``wp_delete_user`` capability checks. They share :ref:`WP_FAIL2BAN_EX_WAF` and the WAF facility; the extra constants exist so you can disable one check without abandoning the others.

The card is the canned “protect the PHP surface” set. It does not include country blocking or the honeypot. Events go to ``wordpress-wpf2b-waf.conf``, not the hard/soft WordPress filters.

In 6.3 the WAF controls are on the Block tab.

.. include:: ../../autogen/join/card-web-application-firewall.rst

.. seealso::
   :ref:`feature-waf-sqli`
   :ref:`feature-waf-update-option`
   :ref:`feature-waf-delete-user`
