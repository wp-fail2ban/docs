.. _reference_filters:

=======
Filters
=======

.. _fail2ban_filters_tags:

Tags
====

.. list-table::
   :header-rows: 1

   * - Tag
     - Description

   * - F-SITE
     - The site name in the syslog identifier (FQDN or *<domain-name>/<site-name>* for multisite).
   * - F-SITE_INLINE
     - The site name in the message body (FQDN or *<domain-name>/<site-name>* for multisite).
   * - F-ALT_USER
     - The username.
   * - F-HTTP_STATUS
     - The HTTP status code.
   * - F-ISO_CODE
     - The ISO 3166-1 alpha-2 code of the country.
   * - F-POST_ID
     - The ID of the post.
   * - F-POST_STATUS
     - The status of the post: ``non-existent``, ``closed``, ``trashed``, ``draft``, ``password-protected``.
   * - F-COMMENT_ID
     - The ID of the Comment, Pingback, or Trackback.
   * - F-REQUEST_PATH
     - The path of the request.
   * - F-ERRCODE
     - The error code.
   * - F-TRACKBACK_URL
     - The URL of the Trackback sent.
   * - F-PINGBACK_URL
     - The URL of the Pingback sent.
   * - F-PINGBACK_FROM_URL
     - The URL of the Pingback sender.
   * - F-PINGBACK_TO_URL
     - The URL of the Pingback receiver.

.. rubric:: History
.. versionadded:: 6.0.0


Files
=====

.. include:: autogen/filters.d/wordpress-hard.inc
.. include:: autogen/filters.d/wordpress-soft.inc
.. include:: autogen/filters.d/wordpress-extra.inc
.. include:: autogen/filters.d/wordpress-wpf2b-waf.inc
