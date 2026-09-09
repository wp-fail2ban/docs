.. _feature-password-reset:

Password reset
==============

Logs successful password-reset requests with the extra filter and failed requests with the soft filter. It is off by default; enable it when password reset is an enumeration or flooding path on the site.

Successful requests emit ``WPF2B_EVENT_PASSWORD_REQUEST_OK``. Failed requests emit ``WPF2B_EVENT_PASSWORD_REQUEST_FAIL``.

The individual control is on the Logging tab in Advanced settings.

.. include:: ../autogen/join/feature-password-reset.rst
   :end-before: Source
