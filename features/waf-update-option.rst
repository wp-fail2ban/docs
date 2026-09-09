.. _feature-waf-update-option:

Option protection
=================

Checks updates to WordPress core options and records attempts made without the required capability. ``all`` protects every listed option, ``theme`` also permits recognised image-size changes during theme setup, and ``disabled`` turns the check off. The global WAF mode determines whether a detected attempt is logged or blocked.

.. include:: ../autogen/join/feature-waf-update-option.rst
   :end-before: Source
