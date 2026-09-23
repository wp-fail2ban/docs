.. _feature-login-logging:

Login logging
=============

A failed password for a real account can indicate targeted guessing or use of leaked credentials, while an unknown identifier can indicate probing for accounts to target. A successful-login record can help establish whether access was gained. Login logging keeps those outcomes distinct so an operator or jail can recognise the relevant pattern. Its records cover ordinary credential rejections from the normal login form and XML-RPC, failed REST Application Password authentication, and normal-form submissions with a blank username or password. Each syslog message identifies the outcome, the submitted identifier when available, and the :ref:`resolved client address <feature-remote-ips>`.

Authentication outcomes
-----------------------

Successful form authentication produces an ``Accepted password`` Info message when :ref:`WP_FAIL2BAN_LOG_AUTH_SUCCESS` is enabled, as it is by default. It can match :ref:`filters-wordpress-good`. REST and XML-RPC successes have separate controls, :ref:`WP_FAIL2BAN_LOG_AUTH_REST_SUCCESS` and :ref:`WP_FAIL2BAN_LOG_AUTH_XMLRPC_SUCCESS`, both off by default. API clients may authenticate on every request, so enabling either can produce many more success records than form logins. Application Password authentication is included on those interfaces.

Failure messages distinguish an existing account from an unknown identifier. Ordinary credential failures can match :ref:`filters-wordpress-soft`; unknown REST and XML-RPC users can match :ref:`filters-wordpress-hard`. A blank username or blank password on the normal login form produces a separate soft record; if both are blank, the empty-username outcome is used. If an expired authentication cookie accompanies either outcome, the resulting Info message does not match the shipped soft filter. REST and XML-RPC messages identify their interface; repeated authentication within a request is marked ``(repeat)``.

The filters make these records available to fail2ban. A jail must read the messages, count matching failures, and execute a ban action before the firewall can change. See :ref:`configuration__fail2ban`.

Syslog and Premium event data
-----------------------------

Syslog authentication messages do not contain submitted passwords. Premium event data can retain the submitted password in plain text for ordinary credential rejections, blank-username submissions, blocked-user rejections, and email-only rejections. This includes REST and XML-RPC credential failures. Empty-password rows store the submitted identifier but do not retain a password value. Successful-authentication rows do not store the submitted password field. Raw request-body capture, when enabled, can retain another copy.

The event database and its backups therefore contain sensitive authentication evidence independently of syslog. See :ref:`operating_event_storage` for retention and storage consequences.

Facility and retained evidence
------------------------------

Authentication messages use :ref:`WP_FAIL2BAN_AUTH_LOG`, which defaults to ``LOG_AUTHPRIV``. Changing the facility changes where syslog routes the messages, who can normally read them, and which source the jail must follow; it does not move Premium database events. A destination that discards Info messages may retain failures while losing success evidence. See :ref:`facilities`.

The :ref:`quickstart_brute_force_protection` card summarises the default behaviour. The authentication facility and success controls appear on the Logging tab in Advanced settings; Free displays its individual controls as read-only.

.. include:: ../autogen/join/feature-login-logging.rst
   :end-before: Source
