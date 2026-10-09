.. _feature-ignore-list:

Ignore list
===========

The Premium Ignore List is |WPf2b|'s WordPress-side equivalent of fail2ban's ``ignoreip``. It lets you add selected addresses to an allowlist without changing the host's fail2ban configuration, which is particularly useful in managed hosting environments where that configuration is not available to you.

When a request matches the Ignore List, |WPf2b| skips its core logging, blocking, WAF checks, and event storage. No core |WPf2b| message is written, so fail2ban has nothing from |WPf2b| to act on for that request. This can also keep expected requests from monitoring systems, internal services, or other trusted sources out of the logs and database.

Matching uses the resolved client address. Listing a shared NAT or egress address therefore also exempts unrelated visitors who share it, while incorrect proxy resolution can broaden the exemption by making many visitors appear to use one listed address. See :ref:`feature-trusted-proxies` for client-address resolution.

Third-party plugins registered through the Developer API can still run their own actions and write their own messages. Select the ignored addresses with :ref:`WP_FAIL2BAN_EX_IGNORE_IPS`.

.. include:: ../autogen/join/feature-ignore-list.rst
   :end-before: Source
