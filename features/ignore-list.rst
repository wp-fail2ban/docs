.. _feature-ignore-list:

Ignore list
===========

Premium. Known monitoring systems, internal services, or other trusted sources can generate expected traffic that would otherwise create evidence or be blocked. The Ignore List lets that traffic continue without core WP fail2ban intervention. Matching uses the resolved client address, so listing a shared NAT or egress address also exempts unrelated visitors who share it. Incorrect proxy resolution can broaden the exemption in the same way by making many visitors appear to use one listed address.

If an address is in :ref:`WP_FAIL2BAN_EX_IGNORE_IPS`, core logging, blocking, WAF checks, and Premium event storage are suppressed for requests resolved to that address.

The list does not promise silence from third-party integrations registered through WP fail2ban's extension surfaces. Those integrations control their own actions. Because the list uses the resolved address, its effect depends on correct proxy trust and client-address resolution; see :ref:`feature-trusted-proxies`.

.. include:: ../autogen/join/feature-ignore-list.rst
   :end-before: Source
