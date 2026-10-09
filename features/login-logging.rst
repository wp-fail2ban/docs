.. _feature-login-logging:

Login logging
=============

Login logging records authentication through the WordPress login form, XML-RPC, and the REST API. Its messages distinguish the route and result, identify the submitted login when available, and include the :ref:`resolved client address <feature-remote-ips>`. This lets an operator or jail recognise targeted password guessing, broader account probing, and successful access.

Login form
----------

Failed form logins distinguish a wrong password for an existing account from an attempt using an unknown identifier. Both message forms can match :ref:`filters-wordpress-soft`. A submission with a blank username or password produces a separate soft message; if both fields are blank, |WPf2b| uses the empty-username message. If an expired authentication cookie accompanies either blank-field result, the resulting Info message does not match the shipped soft filter.

Successful form authentication produces an ``Accepted password`` Info message when :ref:`WP_FAIL2BAN_LOG_AUTH_SUCCESS` is enabled, as it is by default. It can match :ref:`filters-wordpress-good`.

XML-RPC
-------

XML-RPC authentication messages identify the interface. A failed password for an existing account can match :ref:`filters-wordpress-soft`, while an unknown identifier can match :ref:`filters-wordpress-hard`.

Successful XML-RPC authentication can match :ref:`filters-wordpress-good` when :ref:`WP_FAIL2BAN_LOG_AUTH_XMLRPC_SUCCESS` is enabled. The control is off by default because XML-RPC clients may authenticate on every request, producing many more success records than form logins. Application Password authentication over XML-RPC uses the same XML-RPC messages and control. See :ref:`feature-xmlrpc` for blocking and other XML-RPC behaviour.

REST API
--------

REST authentication messages also distinguish failures for existing accounts from attempts using unknown identifiers. Existing-account failures can match :ref:`filters-wordpress-soft`; unknown identifiers can match :ref:`filters-wordpress-hard`. These messages include failed Application Password authentication.

Successful REST authentication can match :ref:`filters-wordpress-good` when :ref:`WP_FAIL2BAN_LOG_AUTH_REST_SUCCESS` is enabled. The control is off by default because REST clients may authenticate on every request, producing many more success records than form logins. Application Password authentication over REST uses the same REST messages and control.

Repeated authentication
-----------------------

Custom code can run authentication again inside an already authenticated request, for example when it needs to perform an action on behalf of a user who could not authenticate before the request began. This is unusual, so |WPf2b| marks a later authentication message ``(repeat)`` to keep the additional attempt visible.

From messages to bans
---------------------

The filters make these records available to fail2ban. A jail must read the messages, count matching failures, and execute a ban action before the firewall can change. See :ref:`configuration__fail2ban`.

Passwords and Premium events
----------------------------

Syslog authentication messages do not contain submitted passwords. Premium failed-login events store the submitted password in plain text when one was provided; successful-login events do not. Raw request-body capture, when enabled, can retain another copy.

The event database and its backups can therefore contain submitted passwords even though the syslog messages do not. See :ref:`operating_event_storage` for retention and storage consequences.

Facility and message retention
------------------------------

Authentication messages use :ref:`WP_FAIL2BAN_AUTH_LOG`, which defaults to ``LOG_AUTHPRIV``. Changing the facility changes where syslog sends the messages, who can normally read them, and which source the jail must follow; it does not move Premium database events. A destination that discards Info messages may retain failure messages while losing successful-login messages. See :ref:`facilities`.

.. include:: ../autogen/join/feature-login-logging.rst
   :end-before: Source
