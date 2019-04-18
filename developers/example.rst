.. _developers_example:

Example
-------

.. code-block:: php
   :linenos:

   /**
    *
    */
   function myplugin_wpf2b_register()
   {
       // Register the plugin
       try {
           do_action('wp_fail2ban_register_plugin', 'my-plugin-slug', 'My Plugin Name');
       } catch(\LengthException $e) {
           // slug or name too long
       } catch(\RuntimeException $e) {
           // database error
       }

       // Register a message
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
   }
   add_action('wp_fail2ban_register', __NAMESPACE__.'\myplugin_wpf2b_register');

   /**
    *
    */
   function myplugin_foobar()
   {
       $vars = [
           'VAR1' => 12345,
           'VAR2' => 'xyz'
       ];
       do_action('my-plugin-slug', 'my-plugin-msg-slug-1', $vars);
   }

