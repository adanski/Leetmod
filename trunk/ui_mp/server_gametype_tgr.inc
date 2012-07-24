#define G_GAMETYPE_TGR (dvarString( "settings_config_gametype" ) == "tgr")

//CHECK
CHOICE_DVAREDIT_NUMERIC_VIS( 2, "@OW_TIMELIMIT", scr_tgr_timelimit, 5, ;, when(G_GAMETYPE_TGR) )
CHOICE_DVAREDIT_NUMERIC_VIS( 3, "@OW_SCORELIMIT", scr_tgr_scorelimit, 3, ;, when(G_GAMETYPE_TGR) )
CHOICE_DVAREDIT_NUMERIC_VIS( 4, "@OW_ROUNDLIMIT", scr_tgr_roundlimit, 3, ;, when(G_GAMETYPE_TGR) )
CHOICE_DVAREDIT_NUMERIC_VIS( 5, "@OW_ROUND_SWITCH", scr_tgr_roundswitch, 3, ;, when(G_GAMETYPE_TGR) )
CHOICE_DVAREDIT_NUMERIC_VIS( 6, "@OW_PLAYER_RESPAWN_DELAY", scr_tgr_playerrespawndelay, 3, ;, when(G_GAMETYPE_TGR) )
CHOICE_DVAREDIT_NUMERIC_VIS( 7, "@OW_WAVE_RESPAWN_DELAY", scr_tgr_waverespawndelay, 3, ;, when(G_GAMETYPE_TGR) )
CHOICE_DVAREDIT_NUMERIC_VIS( 8, "@OW_NUMBER_OF_LIVES", scr_tgr_numlives, 3, ;, when(G_GAMETYPE_TGR) )
CHOICE_DVARYESNO_VIS( 9, "@OW_TEAM_BALANCE_EOR", scr_tgr_teambalanceendofround, ;, when(G_GAMETYPE_TGR) )
CHOICE_DVARYESNO_VIS( 10, "@OW_FORCE_START_SPAWNS", scr_tgr_forcestartspawns, ;, when(G_GAMETYPE_TGR) )

//TEAM GREED
CHOICE_DVAREDIT_NUMERIC_VIS( 11, "@OW_GR_BASE_DOGTAG_SCORE", scr_tgr_base_dogtag_score, 4, ;, when(G_GAMETYPE_TGR) )
CHOICE_DVAREDIT_NUMERIC_VIS( 12, "@OW_GR_DOGTAG_AUTOREMOVAL_TIME", scr_tgr_dogtag_autoremoval_time, 4, ;, when(G_GAMETYPE_TGR) )
CHOICE_DVARYESNO_VIS( 13, "@OW_GR_MINIMAP_MARK_RED_DROPS", scr_tgr_minimap_mark_red_drops, ;, when(G_GAMETYPE_TGR) )