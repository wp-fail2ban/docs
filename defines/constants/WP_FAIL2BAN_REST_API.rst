.. _WP_FAIL2BAN_REST_API:

WP_FAIL2BAN_REST_API
--------------------

.. rubric:: Premium feature.

.. versionadded:: 4.3.0

*WPf2b* now has a RESTful API for remote configuration and monitoring. To enable this feature, add the following to ``wp-config.php``:

.. code-block:: php

	define('WP_FAIL2BAN_REST_API', true);

You must also define :ref:`WP_FAIL2BAN_REST_SECRET`.

.. seealso::
   * :ref:`WP_FAIL2BAN_REST_SECRET`

