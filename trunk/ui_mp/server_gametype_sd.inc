#undef CHOICE_GROUP
#define CHOICE_GROUP sd

#define G_GAMETYPE_SD (dvarString( "settings_config_gametype" ) == "sd")

CHOICE_DVAREDIT_NUMERIC_VIS( 2, "@OW_TIMELIMIT", scr_sd_timelimit, 5, ; , when(G_GAMETYPE_SD) )
CHOICE_DVAREDIT_NUMERIC_VIS( 3, "@OW_SCORELIMIT", scr_sd_scorelimit, 3, ; , when(G_GAMETYPE_SD) )
CHOICE_DVAREDIT_NUMERIC_VIS( 4, "@OW_ROUNDLIMIT", scr_sd_roundlimit, 3, ; , when(G_GAMETYPE_SD) )
CHOICE_DVAREDIT_NUMERIC_VIS( 5, "@OW_ROUND_SWITCH", scr_sd_roundswitch, 3, ; , when(G_GAMETYPE_SD) )

//SD
CHOICE_DVARYESNO_VIS( 6, "@OW_SD_MODE", scr_sd_sdmode, ; , when(G_GAMETYPE_SD) )

CHOICE_DVAREDIT_NUMERIC_VIS( 7, "@OW_BOMB_TIME", scr_sd_bombtimer, 3, ; , when(G_GAMETYPE_SD) )
CHOICE_DVAREDIT_NUMERIC_VIS( 8, "@OW_PLANT_TIME", scr_sd_planttime, 3, ; , when(G_GAMETYPE_SD) )
CHOICE_DVAREDIT_NUMERIC_VIS( 9, "@OW_DEFUSE_TIME", scr_sd_defusetime, 3, ; , when(G_GAMETYPE_SD) )
CHOICE_DVARYESNO_VIS( 10, "@OW_PLANTING_SOUND", scr_sd_planting_sound, ; , when(G_GAMETYPE_SD) )
CHOICE_DVARYESNO_VIS( 11, "@OW_DEFUSING_SOUND", scr_sd_defusing_sound, ; , when(G_GAMETYPE_SD) )
CHOICE_DVARYESNO_VIS( 12, "@OW_SD_MULTIBOMB", scr_sd_multibomb, ; , when(G_GAMETYPE_SD) )

CHOICE_DVAREDIT_NUMERIC_VIS( 13, "@OW_SD_BOMBTIMER_MODIFIER", scr_sd_bombtimer_modifier, 3, ; , when(G_GAMETYPE_SD) )
CHOICE_DVARYESNO_VIS( 14, "@OW_SD_NONHC_SHOW_BOMBTIMER", scr_sd_bombtimer_show, ; , when(G_GAMETYPE_SD) )

CHOICE_DVARFLOATLIST_VIS( 15, "@OW_SD_BOMBSITES_ENABLED", scr_sd_bombsites_enabled, { "Normal (A+B)" 0 "Only A" 3 "Only B" 4 "Randomly A or B" 2 "Randomly X or A+B" 1 }, ; , when(G_GAMETYPE_SD) )
CHOICE_DVARYESNO_VIS( 16, "@OW_SD_DEFENDERS_SHOW_BOTH", scr_sd_defenders_show_both, ; , when(G_GAMETYPE_SD) )
CHOICE_DVARYESNO_VIS( 17, "@OW_SD_BOMBPLANTED_NOTIFICATION", scr_sd_bomb_notification_enable, ; , when(G_GAMETYPE_SD) )

CHOICE_DVARYESNO_VIS( 18, "@OW_SD_DEFENDER_EXPLOSIVE_PICKUP", scr_sd_allow_defender_explosivepickup, ; , when(G_GAMETYPE_SD) )
CHOICE_DVARYESNO_VIS( 19, "@OW_SD_DEFENDER_EXPLOSIVE_DESTROY", scr_sd_allow_defender_explosivedestroy, ; , when(G_GAMETYPE_SD) )

CHOICE_DVAREDIT_NUMERIC_VIS( 21, "@OW_SD_DEFENDER_EXPLOSIVE_DESTROY_TIME", scr_sd_allow_defender_explosivedestroy_time, 3, ; , when(G_GAMETYPE_SD) )
CHOICE_DVARYESNO_VIS( 22, "@OW_SD_DEFENDER_EXPLOSIVE_DESTROY_WIN", scr_sd_allow_defender_explosivedestroy_win, ; , when(G_GAMETYPE_SD) )
CHOICE_DVARYESNO_VIS( 23, "@OW_SD_DEFENDER_EXPLOSIVE_DESTROY_SOUND", scr_sd_allow_defender_explosivedestroy_sound, ; , when(G_GAMETYPE_SD) )
CHOICE_DVARYESNO_VIS( 24, "@OW_SD_QUICK_DEFUSE_WIRES", scr_sd_allow_quickdefuse, ; , when(G_GAMETYPE_SD) )
CHOICE_DVARYESNO_VIS( 25, "@OW_SD_OBJ_TAKE_DAMAGE_ENABLE", scr_sd_objective_takedamage_enable, ; , when(G_GAMETYPE_SD) )
CHOICE_DVARFLOATLIST_VIS( 26, "@OW_SD_OBJ_TAKE_DAMAGE_OPTION", scr_sd_objective_takedamage_option, { "Counter" 0 "Damage" 1 }, ; , when(G_GAMETYPE_SD) )
CHOICE_DVAREDIT_NUMERIC_VIS( 27, "@OW_SD_OBJ_TAKE_DAMAGE_COUNTER_TIME", scr_sd_objective_takedamage_counter, 3, ; , when(G_GAMETYPE_SD) )
CHOICE_DVAREDIT_NUMERIC_VIS( 28, "@OW_SD_OBJ_TAKE_DAMAGE_HEALTH", scr_sd_objective_takedamage_health, 3, ; , when(G_GAMETYPE_SD) )

CHOICE_DVARYESNO_VIS( 29, "@OW_SHOW_BRIEFCASE_MODEL", scr_sd_show_briefcase, ; , when(G_GAMETYPE_SD) )
CHOICE_DVARYESNO_VIS( 30, "@OW_SHOW_SCOREBOARD_BOMBER", scr_sd_scoreboard_bomb_carrier, ; , when(G_GAMETYPE_SD) )

CHOICE_DVARYESNO_VIS( 31, "@OW_SD_HQ_TEAM_DEAD_SPECTATE_3RD_P", scr_sd_teamdeadspectate_tp, ; , when(G_GAMETYPE_SD) )