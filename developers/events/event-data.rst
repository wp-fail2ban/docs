.. role:: php(code)
  :language: php

.. _developers_events_event-data:

EventData Class
---------------

.. code-block:: php

   final class EventData implements \ArrayAccess, \Iterator, \Countable
   {
       /**
        * Database fields; read-only
        */
       int     $blog_id;
       int     $event;
       string  $ipv6;
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
   }

.. php:namespace:: org\lecklider\charles\wordpress\wp_fail2ban\premium

.. php:class:: final EventData

   *WPf2b* Event data.

   .. php:attr:: $blog_id: int
         
      Database field: ``blog_id``

   .. php:attr:: $event: int

      Database field: ``event``

   .. php:attr:: $ipv6: string

      Database field: ``ipv6``

   .. php:attr:: $username: ?string

      Database field: ``username``

   .. php:attr:: $password: ?string

      Database field: ``password``

   .. php:attr:: $ref_id: ?int

      Database field: ``ref_id``

   .. php:attr:: $iso: ?string

      Database field: ``iso``

   .. php:attr:: $plugin: ?int

      Database field: ``plugin``

   .. php:attr:: $request_method: ?string

      Database field: ``request_method``

   .. php:attr:: $url: ?string

      Database field: ``url``

   .. php:attr:: $content_type: ?string

      Database field: ``content_type``

   .. php:attr:: $referer: ?string

      Database field: ``referer``

   .. php:attr:: $user_agent: ?string

      Database field: ``user_agent``

   .. php:attr:: $post: ?string

      Database field: ``post``

   .. php:attr:: $headers: ?string

      Database field: ``headers``

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
      * :ref:`WPF2B_EVENT_AUTH_FAIL`
      * :ref:`WPF2B_EVENT_AUTH_OK`
      * :ref:`WPF2B_EVENT_PASSWORD_REQUEST`

      :returns: The username as a string, or ``null`` if not set.

   .. php:method:: public getPassword(): ?string

      Get the password used to trigger the Event. Set by;

      * :ref:`WPF2B_EVENT_AUTH_BLOCK_USER`
      * :ref:`WPF2B_EVENT_AUTH_BLOCK_USERNAME_LOGIN`
      * :ref:`WPF2B_EVENT_AUTH_FAIL`

      :returns: The password as a string, or ``null`` if not set.

   .. php:method:: public getRefId(): ?int

      Get the referenced ID for the Event. Set by:

      * :ref:`WPF2B_EVENT_COMMENT_CLOSED`
      * :ref:`WPF2B_EVENT_COMMENT_DRAFT`
      * :ref:`WPF2B_EVENT_COMMENT_NOT_FOUND`
      * :ref:`WPF2B_EVENT_COMMENT_PASSWORD`
      * :ref:`WPF2B_EVENT_COMMENT_SPAM`
      * :ref:`WPF2B_EVENT_COMMENT_TRASH`
      * :ref:`WPF2B_EVENT_COMMENT`

      :returns: The Reference ID as an integer, or ``null`` if not set.

   .. php:method:: public getIsoCountryCode(): ?string

      Get the 2-letter ISO country code for the Event.

      :returns: The country code as a string, or ``null`` if unknown.

   .. php:method:: public getPluginId(): ?int

      Get the registered plugin ID. See :ref:`developers_api_register-plugin`.

      :returns: The plugin ID as an integer, or ``null`` for core Events.
      
   .. php:method:: public getRequestMethod(): ?string

      Get the HTTP Request Method for the Event. See :ref:`WP_FAIL2BAN_EX_LOG_URL`.

      :returns: The request method as a string, or ``null`` if URL logging is not enabled.

   .. php:method:: public getUrl(): ?string

      Get the HTTP URL for the Event. See :ref:`WP_FAIL2BAN_EX_LOG_URL`.

      :returns: The URL as a string, or ``null`` if URL logging is not enabled.

   .. php:method:: public getContentType(): ?string

      Get the HTTP Content Type for the Event. See :ref:`WP_FAIL2BAN_EX_LOG_POST_DATA`.

      :returns: The content type as a string, or ``null`` if POST data logging is not enabled.

   .. php:method:: public getReferer(): ?string

      Get the HTTP Referer for the Event. See :ref:`WP_FAIL2BAN_EX_LOG_REFERER`.

      :returns: The Referer as a string, or ``null`` if Referer logging is not enabled.

   .. php:method:: public getUserAgent(): ?string

      Get the HTTP User Agent for the Event. See :ref:`WP_FAIL2BAN_EX_LOG_USER_AGENT`.

      :returns: The user agent as a string, or ``null`` if User Agent logging is not enabled.

   .. php:method:: public getPostData(): ?string

      Get the HTTP POST data for the Event. See :ref:`WP_FAIL2BAN_EX_LOG_POST_DATA`.

      :returns: The POST data as a string, or ``null`` if POST data logging is not enabled.

   .. php:method:: public getHttpHeaders(): ?string

      Get the HTTP headers for the Event. See :ref:`WP_FAIL2BAN_EX_LOG_HEADERS`.

      :returns: The HTTP headers as a string, or ``null`` if header logging is not enabled.
