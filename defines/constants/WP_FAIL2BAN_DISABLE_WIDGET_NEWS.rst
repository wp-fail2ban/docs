.. _WP_FAIL2BAN_DISABLE_WIDGET_NEWS:

.. role:: php(code)
  :language: php

WP_FAIL2BAN_DISABLE_WIDGET_NEWS
-------------------------------

.. rubric:: Disable the news widget.
.. include:: default-false.rst.inc

----

Controls whether the News Widget is displayed.

By default [#f1]_, the News Widget makes outbound connections to fetch the latest news about *WP fail2ban*. For security-conscious installations or environments with restricted outbound connectivity, you may want to disable this widget.

When enabled:
  - No outbound connections will be made to fetch news,
  - The News Widget will not appear in the *WP fail2ban* dashboard


.. code-block:: php
   :caption: Example: Disable the News Widget

   define('WP_FAIL2BAN_DISABLE_WIDGET_NEWS', true);

.. rubric:: History
.. versionadded:: 6.0.0

.. rubric:: Footnotes
.. [#f1] For users who have opted in to Freemius.
