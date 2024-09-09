Action Quake: Edition
Version 1.24 as of January 22, 2000

by Ruediger Bund ("PG Bund[Rock]"), Benjamin Greiner ("=DIE=TempFile")
and Sven Herrmann ("=DIE=Woodoo").


Changes 1.23 -> 1.24 (01/22/2000)

* Several bug fixes

+ sv_allowcrlf server cvar: if 0, clients are not allowed to issue CR/LF
  control characters in chat messages. This is done by proxies to hide the
  chatter's name in order to replace it with an abbreviation, e.g. in a
  clanwar, but very often misused in normal games. The default setting is 1,
  so if you want to disable the CR/LF use just set it to 0.

+ The M4 spread has been slighty increased so there shouldn't be far too
  much headshots now.

Changes 1.22 -> 1.23 (11/02/1999)

+ Notification when a player changes name

* Soundlist overflow bug fixed

+ Server-side cvar "sv_gib" toggles gibbing, this can improve lagginess


Changes 1.21 -> 1.22 (8/25/1999)

* RADIO: When you survived a round, the kill count wasn't reset when the
  new round started. Led to wrong autonumbering when reporting enemyd. Fixed.

* LCA time increased by .2 sec.

* Fixed format string bug in kicklist and maplist commands.

* "game type" MOTD entry always reported tourney even in normal teamplay; fixed.

* Team kills no longer add to damage points.


Changes 1.20b2 -> 1.21 (8/17/1999)

+ TEAMPLAY: If you kill several enemies before doing "radio enemyd", the
  number of enemies killed is prefixed to your radio message.


Fixes 1.20b1 -> b2

* Live players don't get death messages anymore if they aren't involved in the
  killing

* Ignore Spamming is no longer possible

* "You'll get to your weapon after bandaging" flood bug fixed


Changes 1.10 -> 1.20b1

* Updated codebase to Action 1.52, that implies all changes done by the
  A-Team in that revision.

* Listen servers didn't work because the local IP "loopback" was treated as 
  invalid and got banned; fixed.

- Friendly Fire: Because this feature is now in original Action Quake, all ff-related
  cvars including banning and suicide limits were transformed to the format introduced
  by the A-Team. See the Action 1.52 CHANGES file.

* Improved location detection

* With a script, one was able to suppress the gun firing sound using the punch
  command; fixed.
  The way this bug was fixed also makes "punchspamming" impossible, there is now
  a .65 sec delay after each punch.

* Locations are now defined by cubes. See adf.txt.

- Completely dropped support for .pg files.

* Gibbing is back for the sniper rifle! See for yourself. :)

* Fixed smaller bugs.

+ Emotions: If the message begins with "%me", this sequence is replaced by
  the player's name and the "name:" part is cut off, just like in IRC.
  Note that this works with %, since / is ignored by Quake.

* Various detail improvements.

+ The lens command is back, and it comes with arguments (Sniper Rifle only):
  lens		zooms in (with overflow, means 6x will become 1x)
  lens in	zooms in as well, but without overflow
  lens out	zooms out, no overflow
  lens 1	unzooms
  lens 2	zooms to 2x
  lens 4	zooms to 4x
  lens 6	zooms to 6x

+ If you reload while using dual pistols and carrying only one pistol clip,
  you automatically change to single pistol, then reload.
