# Changelog

## 1.9 (Oct 8th, 2013)

- enable console in options was flipped
- sharp shooter is now working
- `scr_sd_defusetime` from `7` to `5`
- full console options were flipped wrong
- more options to show info on full console
- `scr_ch_suddendeath_show_enemies` default value was `0`
- create server: `Bots enable` option is disabled if PB is enabled and vice-versa
- ctf - if you enter your flag zone it says capturing even if you don't have enemy flag / have but your flag isn't at the base
- ctf - returning flag by taking it to own base is now instant (before it was scr_ctf_capture_time too)
- ctf - enable anti-flag camping by default (`scr_ctf_show_flag_carrier_time` from `5` to `9` and `scr_ctf_show_flag_carrier_distance` to `750`)
- ch - when timelimit/scorelimit was reached, points would still be counting
- ch - changed default value of `scr_ch_scorelimit` from `275` to `250`
- end of game statistics - fixing biggest camper (hopefully) and showing avg speed and avg speed when not using sniper separately
- new menu option - objective icons size: default, small, tiny, hidden
- healthsystem - despite `scr_player_maxhealth` being `50` by default, it wasn't applied on the first run. overriding.
- hud - despite `scr_hardcore` being `1` by default, it wasn't applied on the first run. overriding.
(Note: `scr_hardcore` now only changes hud, it does not affect the health)
- installer now detects if older Leetmod versions are installed and if the user wants to copy over and update their `configs`

## 1.8 (May 13th, 2013)

initial version
