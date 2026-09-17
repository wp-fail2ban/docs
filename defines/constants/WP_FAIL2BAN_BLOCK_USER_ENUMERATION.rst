.. _WP_FAIL2BAN_BLOCK_USER_ENUMERATION:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_BLOCK_USER_ENUMERATION
----------------------------------

.. rubric:: Block user enumeration.
.. include:: default-disabled.rst.inc

----

Blocks attempts to enumerate users via author archives and the REST API.
When enabled, unprivileged requests for the users list and for an individual
user by id are refused and logged as a hard failure.

.. code-block:: php
   :caption: Example: Block user enumeration

   /**
    * Block user enumeration.
    */
   define('WP_FAIL2BAN_BLOCK_USER_ENUMERATION', true);

.. include:: use-wp-config.rst.inc

.. warning::
   If your theme has Author profile pages (e.g. TwentyTwenty) you will need to :ref:`block username logins <WP_FAIL2BAN_BLOCK_USERNAME_LOGIN>` instead.


.. seealso::
   * :ref:`WP_FAIL2BAN_BLOCK_USERNAME_LOGIN`

.. rubric:: History
.. versionchanged:: 6.3.0
   Also blocks unprivileged REST requests for an individual user by id.
.. versionchanged:: 4.0.0
   Now also blocks enumeration via the REST API.
.. versionadded:: 2.1.0
   Based on a suggestion from *@geeklol* and a plugin by *@ROIBOT*.
