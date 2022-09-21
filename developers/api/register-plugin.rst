.. _developers_api_register-plugin:

Register Plugin
^^^^^^^^^^^^^^^

Description
"""""""""""

Usage
"""""

.. code-block:: php

   try {
       do_action('wp_fail2ban_register_plugin', 'my-plugin-slug', 'My Plugin Name');
   } catch(\LengthException $e) {
       // slug or name too long
   } catch(\RuntimeException $e) {
       // database error
   }

Parameters
""""""""""

wp_fail2ban_register_plugin
  WPf2b action.

`my-plugin-slug`
  Plugin slug. This must be the actual plugin slug. Maximum length is 200 which should be more than enough.

`My Plugin Name`
  Plugin display name. This should be an unescaped string - HTML is allowed.

Exceptions
""""""""""

LengthException
   Either the ``slug`` or ``name`` is too long; the ``message`` will say which.
