.. _feature-waf-sqli:

SQL injection protection
========================

SQL injection protection examines SQL immediately before WordPress sends it to the database. It detects whether request data has been injected into the SQL in a way that changes the query's structure. This gives the operator a final check before an unsafe query can expose or change data beyond the operation the site intended.

The protection covers queries sent through WordPress's database interface. Code that opens its own database connection bypasses that interface and is outside its reach. This boundary is deliberate: direct database connections are comparatively easy to find during a code audit, while proving that every query assembled by WordPress, its themes, and its plugins is safe is much harder. |WPf2b| therefore concentrates its runtime protection on the actual queries passing through the normal WordPress interface.

:ref:`WP_FAIL2BAN_EX_WAF_SQLI_PLUGINS` and :ref:`WP_FAIL2BAN_EX_WAF_SQLI_WORDPRESS` select whether queries from plugins and WordPress itself are examined. In logging mode, a detection writes a WAF message and event but lets the query run. In enabled mode, it writes the same records and blocks the query.

If |WPf2b| cannot determine whether request data was injected into a query, it writes a WAF error and lets the query continue. This is an analysis failure, not an SQL injection detection. A SQL injection event may retain the full SQL, request body, and headers, including sensitive values; see :ref:`feature-waf` and :ref:`operating_privacy_and_stored_data`.

.. include:: ../autogen/join/feature-waf-sqli.rst
   :end-before: Source
