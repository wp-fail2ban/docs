.. _feature-syslog:

syslog
======

|WPf2b| reports WordPress events to fail2ban as human-readable syslog messages. WordPress can describe a failed login or blocked request, but it cannot tell the firewall directly what to do. Installed filters decide which complete messages fail2ban recognises, and jails decide how matches are counted and which configured action follows. Even a compromised WordPress process can therefore trigger only the message forms and actions that the host administrator has already allowed.

Because the messages report what happened rather than telling the host what to do, |WPf2b| has no message that removes a ban. An administrator must unban the address with host-side fail2ban or firewall tools; WordPress cannot reverse that host state.

fail2ban can act only when a |WPf2b| message reaches the log or journal its jail reads and carries the identifier selected by its journal match. The syslog controls select facilities, adjust the identifier, detect journald, and place the site name in the identifier or message body. If the route or identifier is wrong, the message may exist on the host while the intended jail never reads it. See :ref:`operating_syslog` and :ref:`configuration__fail2ban`. The :ref:`quickstart_journald_support` card enables the inline-host layout.

.. include:: ../autogen/join/feature-syslog.rst
   :end-before: Source
