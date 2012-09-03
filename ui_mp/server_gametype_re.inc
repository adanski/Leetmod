#undef CHOICE_GROUP
#define CHOICE_GROUP re

#define G_GAMETYPE_RE (dvarString( "settings_config_gametype" ) == "re")

CHOICE_DVAREDIT_NUMERIC_VIS( 2, "@OW_TIMELIMIT", scr_re_timelimit, 5, ;, when(G_GAMETYPE_RE) )
CHOICE_DVAREDIT_NUMERIC_VIS( 3, "@OW_SCORELIMIT", scr_re_scorelimit, 3, ;, when(G_GAMETYPE_RE) )
CHOICE_DVAREDIT_NUMERIC_VIS( 4, "@OW_ROUNDLIMIT", scr_re_roundlimit, 3, ;, when(G_GAMETYPE_RE) )
CHOICE_DVAREDIT_NUMERIC_VIS( 5, "@OW_ROUND_SWITCH", scr_re_roundswitch, 3, ;, when(G_GAMETYPE_RE) )
CHOICE_DVAREDIT_NUMERIC_VIS( 6, "@OW_PLAYER_RESPAWN_DELAY", scr_re_playerrespawndelay, 3, ;, when(G_GAMETYPE_RE) )
CHOICE_DVAREDIT_NUMERIC_VIS( 7, "@OW_WAVE_RESPAWN_DELAY", scr_re_waverespawndelay, 3, ;, when(G_GAMETYPE_RE) )
CHOICE_DVAREDIT_NUMERIC_VIS( 8, "@OW_NUMBER_OF_LIVES", scr_re_numlives, 3, ;, when(G_GAMETYPE_RE) )
CHOICE_DVARYESNO_VIS( 9, "@OW_TEAM_BALANCE_EOR", scr_re_teambalanceendofround, ;, when(G_GAMETYPE_RE) )


CHOICE_DVARFLOATLIST_VIS( 10, "@OW_SCR_RE_OBJECTIVES_ENABLED", scr_re_objectives_enabled, { "Normal (A+B)" 0 "Only A" 3 "Only B" 4 "Randomly A or B" 2 "Randomly X or A+B" 1 }, ;, when(G_GAMETYPE_RE) )
CHOICE_DVARYESNO_VIS( 11, "@OW_SCR_RE_DEFENDERS_SHOW_BOTH", scr_re_defenders_show_both, ;, when(G_GAMETYPE_RE) )
CHOICE_DVARYESNO_VIS( 12, "@OW_SCR_RE_SCOREBOARD_OBJECTIVE_CARRIER", scr_re_scoreboard_objective_carrier, ;, when(G_GAMETYPE_RE) )
CHOICE_DVARYESNO_VIS( 13, "@OW_SCR_RE_ONE_RETRIEVE", scr_re_one_retrieve, ;, when(G_GAMETYPE_RE) )
CHOICE_DVAREDIT_NUMERIC_VIS( 14, "@OW_SCR_RE_OBJECTIVE_AUTORESETTIME", scr_re_objective_autoresettime, 3, ;, when(G_GAMETYPE_RE) )
CHOICE_DVAREDIT_NUMERIC_VIS( 15, "@OW_SCR_RE_DEFENDERS_SPAWNDELAY", scr_re_defenders_spawndelay, 3, ;, when(G_GAMETYPE_RE) )