.. _WP_FAIL2BAN_EX_WAF_USERS_DELETE:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_WAF_USERS_DELETE
-------------------------------

.. rubric:: Enable capability checking for deleting users.
.. include:: default-disabled.rst.inc
.. include:: premium-only.rst.inc

----

Enables capability checking when users are deleted. When enabled, verifies that the current user has the appropriate capabilities (delete_users) before allowing deletion of users.

.. code-block:: php
   :caption: Example: Enable capability checking when users are deleted

   define('WP_FAIL2BAN_EX_WAF_USERS_DELETE', true);

.. rubric:: History
.. versionadded:: 6.0.0