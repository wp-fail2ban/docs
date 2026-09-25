.. _feature-waf:

WAF
===

Premium, experimental. Some harmful requests become clear only when WordPress is about to execute SQL or perform a privileged change. The WAF checks selected operations at that point, giving an operator evidence of the attempt or preventing the operation before it takes effect. It covers SQL about to execute, changes to protected core options, and user deletion. :ref:`WP_FAIL2BAN_EX_WAF` governs those selected checks as a whole: ``disabled`` leaves them inactive, ``logging`` records detections without preventing the operation, and ``enabled`` records and blocks detections. The global mode is disabled by default, even though individual protection settings can have enabled defaults. Blocked messages can match ``wordpress-wpf2b-waf.conf``; a configured jail and ban action are separate from the direct WordPress decision.

WAF evidence can retain the raw request body and most available HTTP headers even when the general extra-field controls are off. SQL injection events can retain full SQL, and option-protection events can retain the full proposed value. These fields may contain credentials or other sensitive values, and repeated events increase database storage. Premium event data is stored unencrypted in the WordPress database in 6.3; see :ref:`operating_privacy_and_stored_data` for the complete data boundary and :ref:`operating_event_storage` for retention operations.

The :ref:`quickstart_web_application_firewall` card enables a predefined combination of the checks. Individual controls are on the Premium WAF tab in Advanced settings.

.. toctree::
   :maxdepth: 1

   waf-sqli
   waf-update-option
   waf-delete-user
