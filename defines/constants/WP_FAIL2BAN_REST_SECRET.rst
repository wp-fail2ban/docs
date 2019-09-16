.. _WP_FAIL2BAN_REST_SECRET:

WP_FAIL2BAN_REST_SECRET
-----------------------

.. rubric:: Premium feature.

.. versionadded:: 4.3.0

*WPf2b* now has a RESTful API for remote configuration and monitoring. To enable this feature, add the following to ``wp-config.php``:

.. code-block:: php

	define('WP_FAIL2BAN_REST_SECRET', 'N&w}80wPp3[p}=>reU;+&|G.*Rn!(g.z=UG5,68^tE}03{3gRYWR^m/Mg-Fu?G<W');

.. warning::
   1. The Secret **must be random data**.

   2. The Secret **must be at least 64 characters long**.

   3. The Secret **must be unique**.

   **You will compromise the security of your site if you fail to follow these rules**.

.. seealso::
   * :ref:`WP_FAIL2BAN_REST_API`

