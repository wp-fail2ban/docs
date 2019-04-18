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
  The plugin slug to register. Must be < 256 chars.

`My Plugin Name`
  The display name of the plugin being registered. Must be < 256 chars.

Exceptions
""""""""""

LengthException
   Either the ``slug`` or ``name`` is too long.
