.. _WP_FAIL2BAN_EX_WAF_USERS_DELETE:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_WAF_USERS_DELETE
-------------------------------

.. rubric:: Enable capability checking for deleting users.
.. include:: default-true.rst.inc
.. include:: premium-only.rst.inc

----

Enables capability checking when users are deleted. When enabled, verifies that
the current user has the appropriate ``delete_users`` capability before
allowing deletion. The global WAF state is separately disabled by default; this
individual default applies when WAF is enabled or set to logging.

.. code-block:: php
   :caption: Example: Enable capability checking when users are deleted

   define('WP_FAIL2BAN_EX_WAF_USERS_DELETE', true);

.. rubric:: History
.. versionadded:: 6.0.0
