.. _WP_FAIL2BAN_USING_JOURNALD:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_USING_JOURNALD
--------------------------

.. rubric:: Configure journald installation detection.
.. include:: default-disabled.rst

.. versionadded:: 6.0.0

Controls how WPf2b detects if journald is being used.

By default, WPf2b will try to connect to the journald socket and check if it's running. However, if you are using a different socket or have a custom setup, you can specify the socket path here.

.. code-block:: php
   :caption: Example: Set path to journald socket

   define('WP_FAIL2BAN_USING_JOURNALD', 'unix:///path/to/journal.socket');

or for a remote socket:

.. code-block:: php
   :caption: Example: Set remote journald socket

   define('WP_FAIL2BAN_USING_JOURNALD', 'tcp://192.168.1.100:19531');

You can also explicitly disable journald detection:

.. code-block:: php
   :caption: Example: Disable journald detection

   define('WP_FAIL2BAN_USING_JOURNALD', false);
