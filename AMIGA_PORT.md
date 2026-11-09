Heroes 0.21 for AmigaOS 3.x
===========================

Heroes (Alexandre Duret-Lutz and the Heroes team,
http://heroes.sourceforge.net), the light-cycle game after Tron and Nibbles:
up to four vehicles race through big scrolling levels, each leaving a wall
behind it, with bonuses, teleports, and five ways to play (quest, death
match, kill 'em all, time cash and colors), a level editor and jukebox. For
AmigaOS 3.x on a 68040 or 68060 with an FPU and an RTG screen, on OpenGPU's
SDL 1.2 (sdl12-compat).

Base: heroes_0.21.orig.tar.gz from Debian (sha256
1264981d37d0fa12905ca627e6329c22ae6db10a1abaf3ec9b9c7357d391b54f), the
game's data, sound effects and music from Debian's heroes-data 1.5,
heroes-sound-effects 1.0 and heroes-sound-tracks 1.0 orig tarballs
(datapacks/, the second commit), and Debian's patches (0.21-24) as the
third. Branch team2/heroes-amiga.

Status: plays in the lab (Instance-45 on GFOpenUp 0.8.19, 6 November
2026): the demo with four players, the menu, Play, a game (the vehicle
steered with the cursor keys, the level scrolling, the radar), Escape and
"Quit this game?", the menu, and Quit with its question back to the Shell;
user/.heroes has the preferences, scores and saved games. In a 640x400
window (and in 320x200 with an earlier build) it ran smoothly. The lab is
muted, so the music and sounds were not heard there.


What you need
-------------

- A 68040 or 68060 with an FPU, AmigaOS 3.x, an RTG card (or the
  AmigaChrome lab).
- GFOpenUp 0.8.18 or later (LIBS:OpenGPU/SDL2.module). Everything else is
  in the program.


How to play
-----------

Open the Heroes icon, or run Heroes from a Shell. It opens a 640x400
window (the game's 320x200, doubled); from a Shell, Heroes -3 or -4 makes it
bigger, Heroes -F full screen, and Alt+Return switches between them. The
cursor keys choose in the menus and steer, Return picks, Escape goes back;
Options has the keys for each player and the sound. heroes.html in the
drawer is upstream's manual. The levels, pictures, sounds and music are in
the drawer's data/; the settings, scores and saved games in user/.heroes.



Standard keys
-------------

Every AmiCradle game has the same keys on Right Amiga (GFOpenUp's
SDL2.module, after 0.8.26):

- Right Amiga + F: window or full screen, remembered for next time
- Right Amiga + P: pause (Right Amiga + P again goes on)
- Right Amiga + Q: quit
- Right Amiga + M: free the mouse pointer, or let the game take it again
- Right Amiga + S: a screenshot in the drawer's Screenshots
- Help: this game's keys (the drawer's Controls file)
- Right Amiga + F1, F2: F11, F12; Right Amiga + cursor keys: Page Up,
  Page Down, Home, End

The FULLSCREEN tooltype on the game's icon (take the brackets off) starts
it full screen.


Building
--------

    make -f amiga/Makefile.amigaos -j2 dist

with GFOpenAmigaGCC 16.2.0-open4, the OpenNDK headers and the OpenGPU kit
(see the Makefile's head). The drawer is dist/Heroes (and dist/Heroes.info).


What was changed
----------------

- src/argv.c: the display is doubled (640x400) by default on AmigaOS.
- amiga/amiga_env.c (-Wl,--wrap=getenv, from the GNU Robbo port): Heroes
  finds its files through the environment (src/relocate.c); here its prefix
  is the drawer, HEROES_DATA_DIR the drawer's data/, and $HOME the drawer's
  user/.
- amiga/amiga_paths.c (-Wl,--wrap=fopen, open, opendir, stat and mkdir):
  Heroes joins its directories (which end in "/") and names with another
  "/", and to AmigaDOS "//" is the parent drawer; the "//" is folded.
- amiga/Makefile.amigaos builds src/Makefile.am's heroes with the SDL video,
  keyboard and joystick drivers and the SDL_mixer sound driver, with
  amiga/config.h for configure's (no gettext: English), and makes
  src/media/sdl/keysdef.c from the kit's SDL_keysym.h as upstream's makefile
  does. libnix's stpcpy, strndup and memrchr are used for lib/'s.
- No SDL_mixer 1.2 for OpenGPU's SDL 1.2: the Team's amiga/sdl_mixer_lite.c
  (WAV, with libmikmod 3.3.16 for the FastTracker music: amiga/libmikmod,
  its player, XM loader and no-sound driver), from the Critical Mass port.
- amiga/stack.c: 512 KB of stack.


Licences
--------

Heroes, its levels, pictures, sounds and music: GPL 2 or later
(COPYING.txt). libmikmod: LGPL 2 or later (COPYING-libmikmod.txt). The
Amiga files (amiga/): the AmiCradle Team; the mixer comes from the Team's
Wizznic port and is GPL 3 or later, so the program as built here is GPL 3
or later.
