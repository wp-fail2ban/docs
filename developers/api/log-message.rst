.. _developers_api_log-message:

Log Message
^^^^^^^^^^^

.. php:function:: do_action(string $action, string $plugin_slug, string $message_slug, array $vars = []): void
   :noindex:

   :param string $action: Must be ``wp_fail2ban_log_message``.
   :param string $plugin_slug: The plugin slug used in :ref:`developers_api_register-plugin`.
   :param string $message_slug: The message slug used in :ref:`developers_api_register-message`.
   :param array $vars: String values for the substitutions registered with the message. Defaults to an empty array.

   :throw \InvalidArgumentException: Plugin or message not registered.

Substitutions are literal, and only names registered with the message are
considered. A registered placeholder without a supplied value remains
unchanged; an unregistered supplied name is ignored. The caller must supply
correct string values because |WPf2b| does not validate them against the
regular-expression metadata recorded during registration.

|WPf2b| first attempts to write the resulting message to the syslog facility
selected by the registered event class. On Premium, it then attempts to store
the corresponding plugin event and finally dispatches that event's action. A
failed event-row insert is not reported through this API and does not suppress
the action. The integration must provide its own fail2ban filter.


Example
"""""""

.. code-block:: php

   function myplugin_foobar()
   {
       $vars = [
           'VAR1' => '12345',
           'VAR2' => 'xyz'
       ];
       do_action(
           'wp_fail2ban_log_message',
           'my-plugin-slug',
           'my-plugin-msg-slug-1',
           $vars
       );
   }
