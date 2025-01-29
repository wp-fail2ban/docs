.. _WP_FAIL2BAN_EX_LOG_REFERER:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_LOG_REFERER
--------------------------

.. rubric:: Enable logging of HTTP referer.
.. include:: default-disabled.rst
.. include:: premium-only.rst

.. versionadded:: 4.3.0

----

Enables logging of the HTTP referer header for blocked requests. [#]_

.. code-block:: php
   :caption: Example: Enable referer logging

   /**
    * Enable logging of HTTP referer.
    */
   define('WP_FAIL2BAN_EX_LOG_REFERER', true);

.. seealso::
   * :ref:`WP_FAIL2BAN_EX_LOG_HEADERS`
   * :ref:`WP_FAIL2BAN_EX_LOG_USER_AGENT`

.. [#] The misspelling of "referer" is intentional and matches the HTTP specification where it was originally misspelled.

