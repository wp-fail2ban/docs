.. role:: php(code)
  :language: php

.. _developers_events_event-data:

EventData Class
---------------

.. versionadded:: 5.1.0

.. versionchanged:: 6.0.0
   New namespace.
   Added :php:attr:`waf_data`, :php:meth:`getWafData()`.

.. versionchanged:: 6.3.0
   Documented the readable :php:attr:`ptr` field and the success/WAF field-selection rules.

.. code-block:: php

   final class EventData implements \ArrayAccess, \Iterator, \Countable
   {
       /**
        * Database fields; read-only
        */
       int     $blog_id;
       int     $event;
       string  $ipv6;
       ?string $ptr;
       ?string $username;
       ?string $password;
       ?int    $ref_id;
       ?string $iso;
       ?int    $plugin;
       ?string $request_method;
       ?string $url;
       ?string $content_type;
       ?string $referer;
       ?string $user_agent;
       ?string $post;
       ?string $headers;
       ?array  $waf_data;

       /**
        * Getters
        */
       function getBlogId(): int;
       function getEventId(): int;
       function getIp(): string;
       function getUsername(): ?string;
       function getPassword(): ?string;
       function getRefId(): ?int;
       function getIsoCountryCode(): ?string;
       function getPluginId(): ?int;
       function getRequestMethod(): ?string;
       function getUrl(): ?string;
       function getContentType(): ?string;
       function getReferer(): ?string;
       function getUserAgent(): ?string;
       function getPostData(): ?string;
       function getHttpHeaders(): ?string;
       function getWafData(): ?array;
   }

.. php:namespace:: WP_fail2ban\Plugin\premium\lib

.. php:class:: final EventData

   *WPf2b* Event data.

   .. php:attr:: blog_id: int
         
      Database field: ``blog_id``

   .. php:attr:: event: int

      Database field: ``event``

   .. php:attr:: ipv6: string

      Database field: ``ipv6``

   .. php:attr:: ptr: ?string

      Reverse-DNS name resolved synchronously while the event is created when
      :ref:`WP_FAIL2BAN_EX_LOG_PTR` is enabled, or ``null`` when none is stored.

   .. php:attr:: username: ?string

      Database field: ``username``

   .. php:attr:: password: ?string

      Database field: ``password``

   .. php:attr:: ref_id: ?int

      Database field: ``ref_id``

   .. php:attr:: iso: ?string

      Database field: ``iso``

   .. php:attr:: plugin: ?int

      Database field: ``plugin``

   .. php:attr:: request_method: ?string

      Database field: ``request_method``

   .. php:attr:: url: ?string

      Database field: ``url``

   .. php:attr:: content_type: ?string

      Database field: ``content_type``

   .. php:attr:: referer: ?string

      Database field: ``referer``

   .. php:attr:: user_agent: ?string

      Database field: ``user_agent``

   .. php:attr:: post: ?string

      Database field: ``post``

   .. php:attr:: headers: ?string

      Database field: ``headers``

   .. php:attr:: waf_data: ?array

      Database field: ``waf_data``

   Fields describe the data selected for this occurrence. Optional
   controls are not global retention barriers: success-class events select the
   request method, request target, Referer, and User-Agent when available, and
   WAF-class events also select body and headers independently of the general
   controls. ``content_type`` is selected whenever the server supplies it.
   Conversely, enabling a control cannot create a value the server did not
   provide. See :ref:`operating_event_storage` for the aggregate storage and
   confidentiality consequences.

   .. php:method:: public getBlogId(): int

      Get the ID of the blog that generated the event.

      :returns: The Blog ID as an integer.

   .. php:method:: public getEventId(): int

      Get the ID of the Event.

      :returns: Returns the Event ID as an integer.

   .. php:method:: public getIp(): string

      Get the IP address of the host that caused the Event.

      :returns: Returns the IP address as a string.

   .. php:method:: public getUsername(): ?string

      Get the username used to trigger the Event. Set by:

      * :ref:`WPF2B_EVENT_AUTH_BLOCK_USER`
      * :ref:`WPF2B_EVENT_AUTH_BLOCK_USERNAME_LOGIN`
      * :ref:`WPF2B_EVENT_AUTH_EMPTY_PASS`
      * :ref:`WPF2B_EVENT_AUTH_FAIL`
      * :ref:`WPF2B_EVENT_AUTH_OK`
      * :ref:`WPF2B_EVENT_PASSWORD_REQUEST`
      * :ref:`WPF2B_EVENT_PASSWORD_REQUEST_FAIL`
      * :ref:`WPF2B_EVENT_REST_AUTH_FAIL`
      * :ref:`WPF2B_EVENT_REST_AUTH_OK`
      * :ref:`WPF2B_EVENT_XMLRPC_AUTH_FAIL`
      * :ref:`WPF2B_EVENT_XMLRPC_AUTH_OK`

      :returns: The username as a string, or ``null`` if not set.

   .. php:method:: public getPassword(): ?string

      Get the password used to trigger the Event. Set by;

      * :ref:`WPF2B_EVENT_AUTH_BLOCK_USER`
      * :ref:`WPF2B_EVENT_AUTH_BLOCK_USERNAME_LOGIN`
      * :ref:`WPF2B_EVENT_AUTH_EMPTY_USER`
      * :ref:`WPF2B_EVENT_AUTH_FAIL`
      * :ref:`WPF2B_EVENT_REST_AUTH_FAIL`
      * :ref:`WPF2B_EVENT_XMLRPC_AUTH_FAIL`

      :returns: The password as a string, or ``null`` if not set.

   .. php:method:: public getRefId(): ?int

      Get the referenced ID for the Event. Set by:

      * :ref:`WPF2B_EVENT_COMMENT_CLOSED`
      * :ref:`WPF2B_EVENT_COMMENT_DRAFT`
      * :ref:`WPF2B_EVENT_COMMENT_NOT_FOUND`
      * :ref:`WPF2B_EVENT_COMMENT_PASSWORD`
      * :ref:`WPF2B_EVENT_COMMENT_SPAM`
      * :ref:`WPF2B_EVENT_COMMENT_TRASH`
      * :ref:`WPF2B_EVENT_COMMENT_UNAPPROVED_COMMENT`
      * :ref:`WPF2B_EVENT_COMMENT`
      * :ref:`WPF2B_EVENT_OTHER_TRACKBACK`
      * :ref:`WPF2B_EVENT_OTHER_TRACKBACK_ERROR`
      * :ref:`WPF2B_EVENT_XMLRPC_PINGBACK`
      * :ref:`WPF2B_EVENT_XMLRPC_PINGBACK_ERROR`

      :returns: The Reference ID as an integer, or ``null`` if not set.

   .. php:method:: public getIsoCountryCode(): ?string

      Get the 2-letter ISO country code for the Event.

      :returns: The country code as a string, or ``null`` if unknown.

   .. php:method:: public getPluginId(): ?int

      Get the registered plugin ID. See :ref:`developers_api_register-plugin`.

      :returns: The plugin ID as an integer, or ``null`` for core Events.
      
   .. php:method:: public getRequestMethod(): ?string

      Get the HTTP Request Method for the Event. See :ref:`WP_FAIL2BAN_EX_LOG_URL`.

      :returns: The request method as a string, or ``null`` when it was not selected or supplied.

   .. php:method:: public getUrl(): ?string

      Get the request target (``REQUEST_URI``), which can include a query string
      but is not an absolute scheme-and-host URL. See :ref:`WP_FAIL2BAN_EX_LOG_URL`.

      :returns: The request target as a string, or ``null`` when it was not selected or supplied.

   .. php:method:: public getContentType(): ?string

      Get the HTTP Content Type for the Event. See :ref:`WP_FAIL2BAN_EX_LOG_POST_DATA`.

      :returns: The content type as a string, or ``null`` when the server did not supply it.

   .. php:method:: public getReferer(): ?string

      Get the HTTP Referer for the Event. See :ref:`WP_FAIL2BAN_EX_LOG_REFERER`.

      :returns: The Referer as a string, or ``null`` when it was not selected or supplied.

   .. php:method:: public getUserAgent(): ?string

      Get the HTTP User Agent for the Event. See :ref:`WP_FAIL2BAN_EX_LOG_USER_AGENT`.

      :returns: The user agent as a string, or ``null`` when it was not selected or supplied.

   .. php:method:: public getPostData(): ?string

      Get the raw request body made available by PHP. See :ref:`WP_FAIL2BAN_EX_LOG_POST_DATA`.

      :returns: The request body as a string, or ``null`` when it was not selected or available.

   .. php:method:: public getHttpHeaders(): ?string

      Get the HTTP headers for the Event. See :ref:`WP_FAIL2BAN_EX_LOG_HEADERS`.

      :returns: The selected HTTP headers as a string, or ``null`` when they were not selected or available.

   .. php:method:: public getWafData(): ?array

      Get event-specific detail data. WAF and Honeypot events can supply it, as
      can authentication, comment, pingback, and trackback events.

      :returns: Event-specific detail as an array, or ``null`` when the producer supplied none.
