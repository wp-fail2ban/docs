.. _developers_api_register-message:

Register Message
^^^^^^^^^^^^^^^^

.. php:function:: do_action(string $action, string $slug, array $args): void
   :noindex:

   :param string $action: Must be ``wp_fail2ban_register_message``.
   :param string $slug: The plugin slug used in :ref:`developers_api_register-plugin`.
   :param string $args['slug']: The message slug.
   :param string $args['fail']: Recommended action.
   :param int $args['priority']: *syslog* priority to use. Only the following priorities are supported:

            * LOG_CRIT
            * LOG_ERR
            * LOG_WARNING
            * LOG_NOTICE
            * LOG_INFO
            * LOG_DEBUG
   :param string $args['event_class']: Class of Event. This is one of:

            Auth
               Authentication-related Events.
            Block
               Blocking Events.
            Comment
               Comment-related Events.
            XMLRPC
               XML-RPC-related Events.
            Password
               Password-related Events.
            REST
               REST API-related Events.
            Spam
               Spam-related Events. 

   :param int $args['event_id']: Event ID - 16 bits you may do with as you please.
   :param string $args['message']: Message with substitutions. Note that " from *<IP>*" is appended.
   :param string[] $args['vars']: An array of substitutions mapped to regular expressions.

         When logging a message the substitutions are checked and substituted if present. The regex will be used to generate a matching rule for `fail2ban`.

   :throw \InvalidArgumentException: Missing entry or invalid type. The ``message`` will give details.
   :throw \UnexpectedValueException: Invalid value. The ``message`` will say which.


.. _developers_api_register-message_example:

Example
"""""""

.. code-block:: php
   :linenos:

   $args = [
       'slug'        => 'my-plugin-msg-slug-1',
       'fail'        => 'hard',
       'priority'    => LOG_NOTICE,
       'event_class' => 'Password',
       'event_id'    => 0x001F,
       'message'     => 'Message with ___VAR1___ and ___VAR2___',
       'vars'        => [
           'VAR1' => '\d+',
           'VAR2' => '*.'
       ]
   ];
   try {
       do_action('wp_fail2ban_register_message', 'my-plugin-slug', $args);
   } catch(\InvalidArgumentException $e) {
       // Missing entry or invalid type
   } catch(\UnexpectedValueException $e) {
       // Invalid value
   }
