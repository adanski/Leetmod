#define G_GAMETYPE_GR (dvarString( "settings_config_gametype" ) == "gr")

CHOICE_DVAREDIT_NUMERIC_VIS( 2, "@OW_TIMELIMIT", scr_gr_timelimit, 5, ;, when(G_GAMETYPE_GR) )
CHOICE_DVAREDIT_NUMERIC_VIS( 3, "@OW_SCORELIMIT", scr_gr_scorelimit, 3, ;, when(G_GAMETYPE_GR) )
CHOICE_DVAREDIT_NUMERIC_VIS( 4, "@OW_ROUNDLIMIT", scr_gr_roundlimit, 3, ;, when(G_GAMETYPE_GR) )
CHOICE_DVAREDIT_NUMERIC_VIS( 5, "@OW_PLAYER_RESPAWN_DELAY", scr_gr_playerrespawndelay, 3, ;, when(G_GAMETYPE_GR) )

//GREED
CHOICE_DVARFLOATLIST_VIS( 6, "@OW_GR_ACTIVE_DROP_ZONES", scr_gr_active_drop_zones, { "1" 1 "2" 2 "3" 3 }, ;, when(G_GAMETYPE_GR) )
CHOICE_DVAREDIT_NUMERIC_VIS( 7, "@OW_GR_DROP_ZONES_RELOCATION_TIME", scr_gr_drop_zones_relocation_time, 4, ;, when(G_GAMETYPE_GR) )
CHOICE_DVAREDIT_NUMERIC_VIS( 8, "@OW_GR_BASE_DOGTAG_SCORE", scr_gr_base_dogtag_score, 4, ;, when(G_GAMETYPE_GR) )
CHOICE_DVAREDIT_NUMERIC_VIS( 9, "@OW_GR_DOGTAG_AUTOREMOVAL_TIME", scr_gr_dogtag_autoremoval_time, 4, ;, when(G_GAMETYPE_GR) )
CHOICE_DVARYESNO_VIS( 10, "@OW_GR_MINIMAP_MARK_RED_DROPS", scr_gr_minimap_mark_red_drops, ;, when(G_GAMETYPE_GR) )