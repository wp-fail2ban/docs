.. _reference_filters:

=======
Filters
=======

This reference lists the fail2ban capture tags and filter expressions
maintained for this release. A filter match identifies a message; the jail
using that filter decides how matches are counted and which action follows.
See :ref:`operating_filters` for maintaining installed copies and
:ref:`configuration__fail2ban` for jail setup.

.. _fail2ban_filters_tags:

Tags
====

.. include:: autogen/filter-tags.rst

.. rubric:: History
.. versionadded:: 6.0.0


Files
=====

``wordpress-wpf2b-waf.conf`` is available only in Premium.

.. include:: autogen/filters.d/wordpress-hard.inc
.. include:: autogen/filters.d/wordpress-soft.inc
.. include:: autogen/filters.d/wordpress-extra.inc
.. include:: autogen/filters.d/wordpress-good.inc
.. include:: autogen/filters.d/wordpress-wpf2b-waf.inc
