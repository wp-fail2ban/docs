.. _operating_scheduled:

Scheduled maintenance
=====================

Premium uses WordPress cron to keep its reporting lookup data and selected external data current. The hourly lookup job fills missing classification and index rows for events already in the main history. This supports Dashboard and reporting queries. It does not enrich older event rows: country is chosen when an event is built, and optional PTR resolution happens during the event request, where it can add request-time DNS work.

A weekly job checks enabled managed Cloudflare and Jetpack address lists and the licensed MaxMind database for updates. These sources affect features that use trusted or allowed address data and country information. Manually supplied data or disabled integrations do not need that managed refresh. See the relevant feature settings before changing an external-data source.

WordPress normally invokes ``wp-cron.php`` to run due jobs. If automatic cron spawning is disabled and nothing else invokes that file, |WPf2b|'s hourly and weekly work waits: new events can remain without lookup rows, and managed external data can become stale. Arrange for the host scheduler to invoke ``wp-cron.php`` as part of the site's normal WordPress operation. Once cron resumes, inspect WordPress's scheduled events and the resulting lookup or external-data state to confirm that due maintenance ran. Site Health has selected Cloudflare and missing-lookup checks, but it does not certify every weekly source or prove that the scheduler is running.
