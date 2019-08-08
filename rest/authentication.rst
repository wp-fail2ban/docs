.. _request-authentication:

Request Authentication
======================

HMAC256


.. code-block:: txt

   Authenitication: WPf2b tcfyvgubhinj
   Date: Tue, 16 Aug 2019 12:34:45 +0000

.. code-block:: sh

   Signature = URL-Encode( Base64( HMAC-SHA256( WPf2bRestSecret, StringToSign ) ) );

Where ``StringToSign`` is:

    For GET requests:

    .. code-block:: sh

       StringToSign =
          HTTP-VERB + "\n" +
          REST-Route;

    For PATCH, POST, or PUT requests:

    .. code-block:: sh

       StringToSign =
          HTTP-VERB + "\n" +
          REST-Route + "\n" +
          Date + "\n" +
          Message;

HTTP-VERB
   One of:

      * GET
      * PATCH
      * POST
      * PUT

REST-Route
   :ref:`rest-api_routes`

Date
   



Date Header
   RFC 2616 date

