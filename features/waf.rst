.. _feature-waf:

WAF
===

The Premium WAF adds a final check inside WordPress for selected sensitive operations immediately before they take effect. Its checks see the SQL query or privileged change after WordPress and its plugins have processed the request, then record a detection or stop the operation. This places protection at the point where the operation WordPress is about to perform is known.

The WAF covers selected SQL queries, changes to protected core options, and user deletion. The pages below explain what each protection checks and where its coverage ends.

:ref:`WP_FAIL2BAN_EX_WAF` sets the overall mode. ``disabled`` leaves the selected checks inactive, ``logging`` records detections without preventing the operation, and ``enabled`` records and blocks them. The WAF is experimental in 6.3, and its global mode is disabled by default; individual protection settings do not become active until the global mode is set to ``logging`` or ``enabled``.

In enabled mode, the WAF stops a detected operation directly inside WordPress. Its message can also match ``wordpress-wpf2b-waf.conf``, but any host ban still depends on a configured jail and ban action. These are separate responses to the same detection.

WAF events can retain request content and details of the detected operation independently of the general extra-field controls. This data can be sensitive; see :ref:`operating_privacy_and_stored_data` for what can be stored and :ref:`operating_event_storage` for retention and deletion.

.. toctree::
   :maxdepth: 1

   waf-sqli
   waf-update-option
   waf-delete-user
