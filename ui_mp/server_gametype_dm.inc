#undef CHOICE_GROUP
#define CHOICE_GROUP dm

#define G_GAMETYPE_DM (dvarString( "settings_config_gametype" ) == "dm")

//DM
CHOICE_DVAREDIT_NUMERIC_VIS( 2, "@OW_TIMELIMIT", scr_dm_timelimit, 5, ;, when(G_GAMETYPE_DM) )
CHOICE_DVAREDIT_NUMERIC_VIS( 3, "@OW_SCORELIMIT", scr_dm_scorelimit, 3, ;, when(G_GAMETYPE_DM) )
CHOICE_DVAREDIT_NUMERIC_VIS( 4, "@OW_ROUNDLIMIT", scr_dm_roundlimit, 3, ;, when(G_GAMETYPE_DM) )
CHOICE_DVAREDIT_NUMERIC_VIS( 5, "@OW_PLAYER_RESPAWN_DELAY", scr_dm_playerrespawndelay, 3, ;, when(G_GAMETYPE_DM) )
CHOICE_DVAREDIT_NUMERIC_VIS( 6, "@OW_NUMBER_OF_LIVES", scr_dm_numlives, 3, ;, when(G_GAMETYPE_DM) )