#undef CHOICE_GROUP
#define CHOICE_GROUP sab

#define G_GAMETYPE_SAB (dvarString( "settings_config_gametype" ) == "sab")

CHOICE_DVAREDIT_NUMERIC_VIS( 2, "@OW_TIMELIMIT", scr_sab_timelimit, 5, ; , when(G_GAMETYPE_SAB) )
CHOICE_DVAREDIT_NUMERIC_VIS( 3, "@OW_SCORELIMIT", scr_sab_scorelimit, 3, ; , when(G_GAMETYPE_SAB) )
CHOICE_DVAREDIT_NUMERIC_VIS( 4, "@OW_ROUNDLIMIT", scr_sab_roundlimit, 3, ; , when(G_GAMETYPE_SAB) )
CHOICE_DVAREDIT_NUMERIC_VIS( 5, "@OW_ROUND_SWITCH", scr_sab_roundswitch, 3, ; , when(G_GAMETYPE_SAB) )
CHOICE_DVAREDIT_NUMERIC_VIS( 6, "@OW_PLAYER_RESPAWN_DELAY", scr_sab_playerrespawndelay, 3, ; , when(G_GAMETYPE_SAB) )
CHOICE_DVAREDIT_NUMERIC_VIS( 7, "@OW_WAVE_RESPAWN_DELAY", scr_sab_waverespawndelay, 3, ; , when(G_GAMETYPE_SAB) )
CHOICE_DVAREDIT_NUMERIC_VIS( 8, "@OW_NUMBER_OF_LIVES", scr_sab_numlives, 3, ; , when(G_GAMETYPE_SAB) )
CHOICE_DVARYESNO_VIS( 9, "@OW_TEAM_BALANCE_EOR", scr_sab_teambalanceendofround, ; , when(G_GAMETYPE_SAB) )

//SAB
CHOICE_DVAREDIT_NUMERIC_VIS( 10, "@OW_BOMB_TIME", scr_sab_bombtimer, 3, ; , when(G_GAMETYPE_SAB) )
CHOICE_DVAREDIT_NUMERIC_VIS( 11, "@OW_PLANT_TIME", scr_sab_planttime, 3, ; , when(G_GAMETYPE_SAB) )
CHOICE_DVAREDIT_NUMERIC_VIS( 12, "@OW_DEFUSE_TIME", scr_sab_defusetime, 3, ; , when(G_GAMETYPE_SAB) )
CHOICE_DVARYESNO_VIS( 13, "@OW_MANTAIN_TIMER", scr_sab_hotpotato, ; , when(G_GAMETYPE_SAB) )
// for oitc too
CHOICE_DVARYESNO_VIS( 14, "@OW_SUDDEN_SHOW_ENEMIES", scr_sab_suddendeath_show_enemies, ; , when(G_GAMETYPE_SAB) )
CHOICE_DVAREDIT_NUMERIC_VIS( 15, "@OW_SUDDEN_TIMELIMIT", scr_sab_suddendeath_timelimit, 3, ; , when(G_GAMETYPE_SAB) )
// for /
CHOICE_DVARYESNO_VIS( 16, "@OW_PLANTING_SOUND", scr_sab_planting_sound, ; , when(G_GAMETYPE_SAB) )
CHOICE_DVARYESNO_VIS( 17, "@OW_SHOW_BRIEFCASE_MODEL", scr_sab_show_briefcase, ; , when(G_GAMETYPE_SAB) )

//for SD CTF and CH too
CHOICE_DVARYESNO_VIS( 18, "@OW_SHOW_SCOREBOARD_BOMBER", scr_sab_scoreboard_bomb_carrier, ; , when(G_GAMETYPE_SAB) )
//for CTF and CAH too
CHOICE_DVARFLOATLIST_VIS( 20, "@OW_SHOW_BOMB_CARRIER", scr_sab_show_bomb_carrier, { "Disabled" 0 "Always enabled" 1 "Anti Flag-Camping" 2 }, ; , when(G_GAMETYPE_SAB) )
CHOICE_DVAREDIT_NUMERIC_VIS( 21, "@OW_SHOW_BOMB_CARRIER_TIME", scr_sab_show_bomb_carrier_time, 3, ; , when(G_GAMETYPE_SAB && dvarInt(scr_sab_show_bomb_carrier) == 1) )
CHOICE_DVAREDIT_NUMERIC_VIS( 21, "@OW_SHOW_BOMB_CARRIER_TIME_DISTANCE", scr_sab_show_bomb_carrier_time, 3, ; , when(G_GAMETYPE_SAB && dvarInt(scr_sab_show_bomb_carrier) == 2) )
CHOICE_DVAREDIT_NUMERIC_VIS( 22, "@OW_SHOW_BOMB_CARRIER_DISTANCE", scr_sab_show_bomb_carrier_distance, 5, ; , when(G_GAMETYPE_SAB) )