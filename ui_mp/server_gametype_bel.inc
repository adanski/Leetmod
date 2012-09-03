#undef CHOICE_GROUP
#define CHOICE_GROUP bel

#define G_GAMETYPE_BEL (dvarString( "settings_config_gametype" ) == "bel")

CHOICE_DVAREDIT_NUMERIC_VIS( 2, "@OW_TIMELIMIT", scr_bel_timelimit, 5, ;, when(G_GAMETYPE_BEL) )
CHOICE_DVAREDIT_NUMERIC_VIS( 3, "@OW_SCORELIMIT", scr_bel_scorelimit, 3, ;, when(G_GAMETYPE_BEL) )
//CHOICE_DVAREDIT_NUMERIC_VIS( 4, "@OW_ROUNDLIMIT", scr_bel_roundlimit, 3, ;, when(G_GAMETYPE_BEL) )
//CHOICE_DVAREDIT_NUMERIC_VIS( 5, "@OW_ROUND_SWITCH", scr_bel_roundswitch, 3, ;, when(G_GAMETYPE_BEL) )

CHOICE_DVARYESNO_VIS( 4, "@OW_TEAM_BALANCE_EOR", scr_bel_teambalanceendofround, ;, when(G_GAMETYPE_BEL) )

CHOICE_DVAREDIT_NUMERIC_VIS( 5, "@OW_SCR_BEL_ALIVE_POINTS", scr_bel_alive_points, 2, ;, when(G_GAMETYPE_BEL) )
CHOICE_DVAREDIT_NUMERIC_VIS( 6, "@OW_SCR_BEL_ALIVE_POINTS_TIME", scr_bel_alive_points_time, 2, ;, when(G_GAMETYPE_BEL) )
CHOICE_DVARFLOATLIST_VIS( 7, "@OW_SCR_BEL_SHOWONCOMPASS", scr_bel_showoncompass, { "Disabled" 0 "Enabled (shows position but doesn't follow)" 1 "Enabled (show and follow player during the interval)" 2 }, ;, when(G_GAMETYPE_BEL) )
CHOICE_DVAREDIT_NUMERIC_VIS( 8, "@OW_SCR_BEL_SHOWONCOMPASS_POINTS", scr_bel_showoncompass_points, 2, ;, when(G_GAMETYPE_BEL) )

CHOICE_DVAREDIT_NUMERIC_VIS( 9, "@OW_SCR_BEL_SHOWONCOMPASS_INTERVAL", scr_bel_showoncompass_interval, 2, ;, when(G_GAMETYPE_BEL) )
CHOICE_DVAREDIT_NUMERIC_VIS( 10, "@OW_SCR_BEL_SHOWONCOMPASS_TIME", scr_bel_showoncompass_time, 2, ;, when(G_GAMETYPE_BEL) )