# NewLTK Action Quake 2 Bot

## Description
NewLTK is a modified version of LTK, which in itself is a modification of ACEbot. This is a bot AI for Action Quake 2.
Except for the stealth slippers, nothing was changed in terms of gameplay. The server operator has the possibility to set a different spreading value for the M4. 
The bots themselves have been improved to the point where they almost never get stuck at doors anymore. This is especially great for maps like "Actcity3" and even "Airport", since in the original version the game would be actually stopped since the bots hung at the doors forever.

## Normal version vs. PG Bund version
NewLTK comes in two variants: The normal Action Quake 2 bot, and a version that includes PGBund's Action Quake 2 mod.
PG Bund basically refines the Action Quake 2 experience with several new features, like variable mouse sensitivity depending on scope zoom level, added sniper gibbing, some bugfixes and patching of scripting exploits.

## Compatibility
This modification was developed during the days of Action Quake 1.52, so in other words, about 4000 years ago.
It will not work with [AQtion](https://store.steampowered.com/app/1978800/AQtion/) but perhaps it could be ported to it.

## Console Variables
Note: These variables can only be set by the server.

`announcer [0/1]`
Toggles the announcement voice on or off

`newsounds [0/1]`
Toggles the new weapon sounds on or off

`placenode`
This is more of a command rather than a cvar, and can be used to manually place nodes at strategic positions. Use this if your bots fall off small walkways or such, and manually add nodes to where the bots should go. This only works while ltk_routing is set to "1"

`placetrigger`
Another command similar to "placenode", only that this is intended to be placed in front of pushbuttons. When a bot gets to this place he will run forward, thus triggering whatever pushbutton is in front of him. May be of help in elevators and stuff.

`ltk_jumpy [1]`
Toggle (0 or 1) variable that sets whether the bots should jump around more or not.

`mk23_spread [140]`
Sets spreading for the H&K MK23 pistol.

`dual_spread [300]`
Spreading of the Akimbo Pistols.

`mp5_spread [250]`
Spreading of the H&K MP5.


`m4_spread [300]`
Spreading of the Colt M4 

## Changelog
### Revision 6:

- Improved fleeing AI a bit.
- Improved Jumping
- Added toggleable new weapon sounds (cvar "newsounds")

### Revision 5:
- Added announcer voice. Toggleable via cvar "announcer"

### Revision 4:
- Bots now also retreat if possible
- Bots crouch while firing, given that they have either the MP5, M4 and NO lasersight. Improves their accuracy with these weapons greatly. Crouching is only active if ltk_skill is greater than 4.
- Added "placetrigger" command.
- Tried to improve jump code. May reintroduce the flying... 

### Revision 3:
- Fixed bot's "flying" around
- Added "placenode" command
- Added jump on stuck.

### Revision 2:
- Made bots use grenades. This took me a lot of work, they even throw them a bit higher to achieve longer ranges. Sometimes they still walk into them though.
- Added crouching while climbing down ladders.
- Added cvar for jumpy behaviour
- Added cvar for adjusting aim spread for the MP5, MK23 and the Akimbos.

### Revision 1:
- Fixed door behaviour for bots. Works 90% of the time, however *sometimes* bots still do spend some time at doors. IMHO it's a vast improvement over the original code. Here's what I did in detail:
- Added many checks for possible doors
- Made the bots walk backwards more after opening.
- Inhibited the "door retrigger", i.e. you can't manually close a door anymore. Sorry I really had to do this.
- Made doors "non-solid" during their opening animation. This allows groups of bots to pass through a single door without problems. It really is a hack however, and sometimes doesn't look pretty. But at least it works for a difference.
- Improved roaming code, almost no random walkaround anymore.
- Added friendly fire check. Bots won't accidentally kill teammates all the time anymore
- Added cvar "m4_spread" for setting M4 bullet spreading. Defaults to the standard 300 value
- Beefed up Stealth slippers: Players won't get the crippled walk when they wear these. I think that's ok with game balance, since it gives people more incentive to use stealth slippers. Idea from the ETE AQ mod.
- Increased bot sniper accuracy, made snipers of skill level 10 *very* lethal
- Bots use sniper zoom
- Changed default ltk_skill to 5
- Dead Bots don't hog CPU time anymore
- Start delay changed 10 seconds from the original 20 seconds
- Decreased delay between teamplay rounds a little

One final game killer remains: complex elevators with switches and multiple floors, like in "Chriscity3". The bots just don't know how to deal with them. However, I hope you find this version more playable than the original. At least I do :)

## Call for Contributors
It would be cool if someone could make the neccessary modifications for this to work with AQtion. Pull requests and forks are welcome!
