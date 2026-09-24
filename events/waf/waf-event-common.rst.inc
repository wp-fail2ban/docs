WAF messages use ``WAF[blocked]`` when enforcing a block,
``WAF[detected]`` in logging-only mode, and ``WAF[error]`` for diagnostic
errors. All use WARNING. The shipped WAF filter matches blocked messages only.

Premium records the available raw request body and HTTP headers with every WAF
event, independently of the general extra-field controls; see
:ref:`operating_event_storage`.
