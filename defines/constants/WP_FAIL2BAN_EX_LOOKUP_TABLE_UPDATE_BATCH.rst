.. _WP_FAIL2BAN_EX_LOOKUP_TABLE_UPDATE_BATCH:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_LOOKUP_TABLE_UPDATE_BATCH
----------------------------------------

.. rubric:: Batch size for updating the lookup table.
.. rubric:: Default: 1000
.. rubric:: Minimum: 100

.. versionadded:: 6.0.0

----

.. code-block:: php
   :caption: Example: Update the lookup table in batches of 75000.

   define('WP_FAIL2BAN_EX_LOOKUP_TABLE_UPDATE_BATCH', 75000);