.. _WP_FAIL2BAN_LOG_PINGBACKS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_LOG_PINGBACKS
-------------------------

.. versionadded:: 2.2.0

*WPf2b* can log pingbacks. To enable this feature, add the following to ``wp-config.php``:

.. code-block:: php

	define('WP_FAIL2BAN_LOG_PINGBACKS', true);

**Default:** ``false``

.. seealso::
	* :ref:`WP_FAIL2BAN_PINGBACK_LOG`

.. rubric:: History

Based on a suggestion from *@maghe*.
