.. _WP_FAIL2BAN_EX_LOOKUP_TABLE_UPDATE_BATCH:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_EX_LOOKUP_TABLE_UPDATE_BATCH
----------------------------------------

.. rubric:: Batch size for updating the lookup table.
.. rubric:: Default: 10,000
.. rubric:: Minimum: 100

----

Sets the maximum number of missing event classification/index rows that the
hourly lookup-table job fills in one batch. Values below 100 are raised to the
job's minimum of 100. This job does not back-fill country or PTR fields in
stored event rows.

.. code-block:: php
   :caption: Example: Update the lookup table in batches of 75000.

   define('WP_FAIL2BAN_EX_LOOKUP_TABLE_UPDATE_BATCH', 75000);

.. rubric:: History
.. versionadded:: 6.0.0
