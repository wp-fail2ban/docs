.. _developers_api_register-message:

Register Message
^^^^^^^^^^^^^^^^

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
       'message'     => 'My message with ___VAR1___ and ___VAR2___',
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


Details
"""""""

do_action
   wp_fail2ban_register_message
      *WPf2b* action.

   `my-plugin-slug`
      The plugin slug used in :ref:`developers_api_register-plugin`.

   $args
      slug
         Message slug.

      fail
         Recommended action.

      priority
         *syslog* priority to use. Only the following priorities are supported:

            * LOG_CRIT
            * LOG_ERR
            * LOG_WARNING
            * LOG_NOTICE
            * LOG_INFO
            * LOG_DEBUG

      event_class
         Class of Event. This is one of:

            Auth
               Authentication-related Events. Note that Blocking Events will have their own class in the future.
            Comment
               Comment-related Events.
            XMLRPC
               XML-RPC-related Events.
            Password
               Password-releated Events.
            REST
               REST API-related Events.
            Spam
               Spam-related Events. 

      event_id
         Event ID - 16 bits you can do with as you please.

      message
         Message with substitutions. Note that " from *<IP>*" is appended.

      vars
         An array of substitutions mapped to regular expressions.

         When logging a message the substitutions are checked and substituted if present. The regex will be used to generate a matching rule for `fail2ban`.

