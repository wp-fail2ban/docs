.. _feature-syslog:

syslog
======

|WPf2b| uses human-readable syslog messages as a one-way evidence channel to fail2ban, allowing WordPress to report what happened without gaining control of the host firewall. The installed filters decide which complete message forms are recognised; jails decide how matches are counted and which configured action may follow. This limits even a compromised WordPress process to effects already permitted by the host's filters, jails, and actions rather than giving it a general firewall-command channel.

The same boundary means |WPf2b| does not emit a log instruction to remove a ban. Unbanning remains a host-administration operation. A record of an event or the reason an address was seen does not give WordPress authority to reverse fail2ban's state.

fail2ban can act on WP fail2ban evidence only when messages reach a source its jail reads and carry the identifier expected by its journal or log selection. The syslog controls align messages with the host's logging setup by selecting facilities, adjusting the identifier, detecting journald, and placing the site name in the identifier or message body. A mismatched route or identifier can leave WordPress producing evidence that the intended jail never sees. See :ref:`operating_syslog` and :ref:`configuration__fail2ban`. The :ref:`quickstart_journald_support` card enables the inline-host layout.

.. include:: ../autogen/join/feature-syslog.rst
   :end-before: Source
