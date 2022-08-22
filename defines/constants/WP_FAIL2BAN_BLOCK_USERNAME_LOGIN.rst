.. _WP_FAIL2BAN_BLOCK_USERNAME_LOGIN:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_BLOCK_USERNAME_LOGIN
--------------------------------

.. rubric:: Force login with email address/prevent login with username.
.. include:: default-disabled.rst

.. versionadded:: 4.3.0

----

.. code-block:: php

   /**
    * Force login with email address/prevent login with username.
    */
   define('WP_FAIL2BAN_BLOCK_USERNAME_LOGIN', true);

.. include:: use-wp-config.rst

.. seealso::
   * :ref:`WP_FAIL2BAN_BLOCK_USER_ENUMERATION`
