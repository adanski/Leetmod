#undef CHOICE_GROUP
#define CHOICE_GROUP dom

#define G_GAMETYPE_DOM (dvarString( "settings_config_gametype" ) == "dom")

CHOICE_DVAREDIT_NUMERIC_VIS( 2, "@OW_TIMELIMIT", scr_dom_timelimit, 5, ; , when(G_GAMETYPE_DOM) )
CHOICE_DVAREDIT_NUMERIC_VIS( 3, "@OW_SCORELIMIT", scr_dom_scorelimit, 3, ; , when(G_GAMETYPE_DOM) )
CHOICE_DVAREDIT_NUMERIC_VIS( 4, "@OW_ROUNDLIMIT", scr_dom_roundlimit, 3, ; , when(G_GAMETYPE_DOM) )
CHOICE_DVAREDIT_NUMERIC_VIS( 5, "@OW_ROUND_SWITCH", scr_dom_roundswitch, 3, ; , when(G_GAMETYPE_DOM) )
CHOICE_DVAREDIT_NUMERIC_VIS( 6, "@OW_PLAYER_RESPAWN_DELAY", scr_dom_playerrespawndelay, 3, ; , when(G_GAMETYPE_DOM) )
CHOICE_DVAREDIT_NUMERIC_VIS( 7, "@OW_WAVE_RESPAWN_DELAY", scr_dom_waverespawndelay, 3, ; , when(G_GAMETYPE_DOM) )
CHOICE_DVAREDIT_NUMERIC_VIS( 8, "@OW_NUMBER_OF_LIVES", scr_dom_numlives, 3, ; , when(G_GAMETYPE_DOM) )
CHOICE_DVARYESNO_VIS( 9, "@OW_TEAM_BALANCE_EOR", scr_dom_teambalanceendofround, ; , when(G_GAMETYPE_DOM) )

//DOM
CHOICE_DVARYESNO_VIS( 10, "@OW_FLASH_ON_CAPTURE", scr_dom_flash_on_capture, ; , when(G_GAMETYPE_DOM) )
CHOICE_DVARYESNO_VIS( 11, "@OW_ANNOUNCE_ON_CAPTURE", scr_dom_announce_on_capture, ; , when(G_GAMETYPE_DOM) )
CHOICE_DVAREDIT_NUMERIC_VIS( 12, "@OW_DOM_GIVE_BONUS_AFTER", scr_dom_secured_all_bonus_time, 2, ; , when(G_GAMETYPE_DOM) )
CHOICE_DVAREDIT_NUMERIC_VIS( 13, "@OW_DOM_FLAG_CAPTURE_TIME", scr_dom_flag_capture_time, 2, ; , when(G_GAMETYPE_DOM) )