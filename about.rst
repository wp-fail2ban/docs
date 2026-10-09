.. _about:

About WP fail2ban
=================

WP fail2ban improves WordPress security by letting fail2ban use activity seen inside WordPress to block abusive sources at the host firewall. WordPress supplies the application-level context, fail2ban decides when that activity warrants a ban, and the host firewall enforces it. This gives WordPress the benefit of host-level protection without giving the application control of the firewall itself.

|WPf2b| was created in 2011 because there was no plugin in the WordPress plugin directory that allowed fail2ban to act on activity inside WordPress. The immediate problem was simple: automated login attacks were generating repeated failures inside WordPress, while the host firewall had no visibility of that activity.

WordPress has changed considerably since then. The REST API and Application Passwords did not exist when |WPf2b| was first written, and other public interfaces and authentication paths have appeared or evolved since. |WPf2b| has grown with WordPress, extending the same basic model to those newer surfaces while keeping the division of responsibility intact: WordPress reports what happened; fail2ban and the host decide what to do about it.

Some |WPf2b| protections also act directly inside WordPress, and Premium adds further protections together with structured event history for investigation and reporting. :ref:`about_how_it_works` explains how the parts fit together; :ref:`about_editions` explains the available editions and distributions.

.. toctree::
   :maxdepth: 1

   about/how-it-works
   about/editions
