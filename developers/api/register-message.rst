.. _developers_api_register-message:

Register Message
^^^^^^^^^^^^^^^^

Register one message with::

   do_action('wp_fail2ban_register_message', $plugin_slug, $message);

Register several messages with::

   do_action('wp_fail2ban_register_messages', $plugin_slug, $messages);

``$message`` is one message array. ``$messages`` is a list of message arrays;
each element has the same shape as ``$message``. The plugin must already have
been registered with :ref:`developers_api_register-plugin`.

Message shape
"""""""""""""

.. list-table::
   :header-rows: 1
   :widths: 20 16 64

   * - Key
     - Type
     - Meaning
   * - ``slug``
     - ``string``
     - Message slug, used again when logging the message.
   * - ``fail``
     - ``string``
     - Registration metadata. The accepted values are ``hard``, ``soft``, and
       ``extra``.
   * - ``priority``
     - ``int``
     - Syslog priority: ``LOG_CRIT``, ``LOG_ERR``, ``LOG_WARNING``,
       ``LOG_NOTICE``, ``LOG_INFO``, or ``LOG_DEBUG``.
   * - ``event_class``
     - ``string``
     - One of ``Auth``, ``Block``, ``Comment``, ``XMLRPC``, ``Password``,
       ``REST``, ``Spam``, ``Other``, ``WAF``, or ``Honeypot``. Matching is
       case-insensitive.
   * - ``event_desc``
     - ``string``
     - Optional description recorded with the registration.
   * - ``event_id``
     - ``int``
     - Integration-defined 16-bit event ID.
   * - ``message``
     - ``string``
     - Message template. `` from <IP>`` is appended by |WPf2b|.
   * - ``vars``
     - ``array<string, string>``
     - Placeholder names mapped to regular-expression metadata.

At log time, |WPf2b| literally replaces supplied ``___NAME___`` placeholders
and logs the resulting message to the configured syslog facility. On Premium,
it also records the corresponding plugin event. |WPf2b| does not validate
supplied values against ``vars`` regular expressions, and the ``fail`` and
``vars`` values do not generate an integration-specific fail2ban rule. The
integration is responsible for supplying and maintaining that rule and for
passing correct substitutions.

The actions can throw ``InvalidArgumentException`` for an unregistered plugin,
a missing entry, or an invalid type, and ``UnexpectedValueException`` for an
invalid accepted value.

.. _developers_api_register-message_example:

Example
"""""""

.. code-block:: php
   :linenos:

   $message = [
       'slug'        => 'my-plugin-msg-slug-1',
       'fail'        => 'hard',
       'priority'    => LOG_NOTICE,
       'event_class' => 'Password',
       'event_desc'  => 'Rejected password operation',
       'event_id'    => 0x001F,
       'message'     => 'Message with ___VAR1___ and ___VAR2___',
       'vars'        => [
           'VAR1' => '\\d+',
           'VAR2' => '.*',
       ],
   ];

   try {
       do_action(
           'wp_fail2ban_register_message',
           'my-plugin-slug',
           $message
       );
   } catch (\InvalidArgumentException $e) {
       // Missing entry, invalid type, or plugin not registered.
   } catch (\UnexpectedValueException $e) {
       // Invalid accepted value.
   }
