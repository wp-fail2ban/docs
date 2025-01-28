.. _features:

========
Features
========

Core Features
-------------

All versions of WP fail2ban include these essential security features:

* Block and log failed login attempts
   - Including empty username attempts
   - Support for blocking specific usernames via regex
* XML-RPC Protection
   - Block and log attacks
   - Log failed pingbacks
* User Security
   - Block user enumeration
   - Block username-based logins (force email login)
* Comment Protection
   - Log spam comments
   - Log successful and unsuccessful comments
   - Configurable logging levels
* System Integration
   - Support for CloudFlare and proxy servers
   - Configurable logging facilities and locations
   - Support for broken syslogd configurations
   - Can be configured as a must-use plugin
* Monitoring
   - Basic syslog dashboard widget
   - Site health checks
* Developer Features
   - API for 3rd-party plugin integration
   - Supported plugins include Contact Form 7 and Gravity Forms
* Multisite Support
   - Full network compatibility
   - Network-wide configuration options

.. _version-specific-features:

Version-Specific Features
-------------------------

Canonical Flavour (GitHub)
~~~~~~~~~~~~~~~~~~~~~~~~~~

Additional features available in the Canonical flavour:

* Enhanced Security
   - Software Bill of Materials (SBOM)
   - Signed releases
   - Direct distribution from GitHub for supply chain security
   - Advanced logging options
* XML-RPC Features
   - Optional logging of all pingbacks
* Development Features
   - Built-in GitHub updater
   - Composer support

Premium Flavour
~~~~~~~~~~~~~~~

The Premium flavour includes all Canonical features plus:

* Advanced Security
   - Web Application Firewall (WAF)
   - Honeypot functionality
   - Country blocking
   - Advanced XML-RPC protection
* Integration
   - Akismet integration
   - Event hooks for custom integration
* Automated Updates
   - Cloudflare IP ranges
   - Jetpack IP ranges
   - MaxMind database
* Enhanced Monitoring
   - Full logging history
   - Advanced dashboard widgets
   - Detailed attack analysis
* Premium Support
   - Priority assistance
   - Configuration guidance
   - Security recommendations

