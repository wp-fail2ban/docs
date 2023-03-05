.. _developers_api_log-message:

Log Message
^^^^^^^^^^^

.. php:function:: do_action(string $action, string $plugin_slug, string $message_slug, array $vars): void
   :noindex:

   :param string $action: Must be ``wp_fail2ban_log_message``.
   :param string $plugin_slug: The plugin slug used in :ref:`developers_api_register-plugin`.
   :param string $message_slug: The message slug used in :ref:`developers_api_register-message`.
   :param array $vars: The variable substitutions registered with the message.

   :throw \InvalidArgumentException: Plugin or message not registered.


Example
"""""""

.. code-block:: php

   function myplugin_foobar()
   {
       $vars = [
           'VAR1' => 12345,
           'VAR2' => 'xyz'
       ];
       do_action(
           'wp_fail2ban_log_message',
           'my-plugin-slug',
           'my-plugin-msg-slug-1',
           $vars
       );
   }
