.. _developers_api_register-plugin:

Register Plugin
---------------

.. php:function:: do_action(string $action, string $slug, string $name): void
   :noindex:

   Register plugin.

   :param string $action: Must be ``wp_fail2ban_register_plugin``.
   :param string $slug: Plugin slug. This must be the actual plugin slug. Maximum length is 200.
   :param string $name: Plugin display name. This should be an unescaped string - HTML is allowed.
   :throw \LengthException: Either ``$slug`` or ``$name`` is too long; the ``message`` will say which.
   :throw \RuntimeException: Database error (Premium only).

Example
"""""""

.. code-block:: php

   try {
       do_action('wp_fail2ban_register_plugin', 'my-plugin-slug', 'My Plugin Name');
   } catch(\LengthException $e) {
       // slug or name too long
   } catch(\RuntimeException $e) {
       // database error
   }
