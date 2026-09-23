.. _feature-waf-sqli:

SQL injection protection
========================

SQL injection uses requester-controlled input to change the structure of a database query, potentially exposing or changing data beyond the operation the site intended. SQL injection protection gives the operator a final check at the point that consequence becomes concrete: |WPf2b| examines SQL immediately before WordPress executes it and determines whether request input has affected its structure. :ref:`WP_FAIL2BAN_EX_WAF_SQLI_PLUGINS` and :ref:`WP_FAIL2BAN_EX_WAF_SQLI_WORDPRESS` select which query origins are covered within WordPress's normal database layer. Code that opens a direct database connection and bypasses that layer can execute SQL without this protection seeing it.

In logging mode, a detection creates WAF evidence without blocking the query. In enabled mode, it blocks the detected query and records evidence. If |WPf2b| cannot complete its analysis of a query, it records a WAF error and lets the query continue. The error means the check could not determine whether request input changed the SQL structure; it is not an SQL injection detection. The event may retain the full SQL, request body, and headers, including sensitive values; see :ref:`feature-waf` and :ref:`operating_event_storage`.

The individual controls are on the WAF tab in Advanced settings.

.. include:: ../autogen/join/feature-waf-sqli.rst
   :end-before: Source
