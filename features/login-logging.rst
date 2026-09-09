.. _feature-login-logging:

Login logging
=============

|WPf2b| always records authentication handled by WordPress. There is no switch
for this core evidence. Each syslog message contains the authentication outcome,
the submitted username where one is available, and the :ref:`resolved client
address <feature-remote-ips>`.

Authentication outcomes
-----------------------

Successful authentication produces an ``Accepted password`` message at Info
level. The shipped :ref:`filters-wordpress-good` filter recognises it. REST and
XML-RPC successes use the same syslog message as other logins.

Failed authentication produces a Notice-level message. The message distinguishes
an existing account from an unknown username. Ordinary failures match
:ref:`filters-wordpress-soft`. REST and XML-RPC messages carry a ``REST`` or
``XML-RPC`` prefix; a failure for an existing account is soft, while an attempt
for an unknown account matches :ref:`filters-wordpress-hard`. A login-form POST
whose ``log`` field contains an empty username produces a distinct empty-username
record. The ordinary case is a Notice-level soft failure. If an expired
authentication cookie was also presented, the record instead notes that fact at
Info level and does not match the shipped soft filter.

These classifications make the events available to different fail2ban filters;
they do not impose a ban by themselves. A jail determines how many matches cause
a ban and reads the client address from the syslog message. See
:ref:`configuration__fail2ban` for that relationship.

Syslog and Premium event data
-----------------------------

The syslog messages do not contain submitted passwords. Premium additionally
stores a structured row for each authentication event and uses distinct
:ref:`REST <WPF2B_EVENT_REST_AUTH_FAIL>` and
:ref:`XML-RPC <WPF2B_EVENT_XMLRPC_AUTH_FAIL>` event names even where the syslog
wording is shared.

For failed authentication, including REST and XML-RPC failures, Premium stores
the submitted password in plain text in EventData. The distinct empty-username
event also contains the submitted password. Successful-authentication rows do
not contain it. Authentication controls that reject a blocked user or a
username-based login have their own events and also store the password supplied
to that attempt.

The event database, its backups, and integrations which receive EventData can
therefore expose submitted authentication secrets. Enabling
:ref:`WP_FAIL2BAN_EX_LOG_POST_DATA` may retain another copy within the raw request
body. This database storage is separate from syslog and is not protected by the
syslog facility.

Facility and retained evidence
------------------------------

Authentication syslog messages use :ref:`WP_FAIL2BAN_AUTH_LOG`, which defaults
to ``LOG_AUTHPRIV``. This facility is conventionally routed with restricted
access because authentication records are sensitive; the restriction limits
ordinary readership but does not make the records non-sensitive. See
:ref:`facilities` for facility selection and defaults.

Changing the facility changes where syslog writes the messages, which processes
can normally read them, and which log source the fail2ban jail must follow. It
does not move or remove Premium's database events. Facility routing can also
affect retention: in particular, a destination which discards Info messages
loses the successful-authentication evidence while Notice-level failures may
remain.

The :ref:`quickstart_brute_force_protection` card summarises this always-on
behaviour. The authentication facility is configured on the Logging tab in
Advanced settings.

.. include:: ../autogen/join/feature-login-logging.rst
   :end-before: Source
