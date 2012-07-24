#define G_GAMETYPE_KOTH (dvarString( "settings_config_gametype" ) == "koth")

CHOICE_DVAREDIT_NUMERIC_VIS( 2, "@OW_TIMELIMIT", scr_koth_timelimit, 5, ;, when(G_GAMETYPE_KOTH) )
CHOICE_DVAREDIT_NUMERIC_VIS( 3, "@OW_SCORELIMIT", scr_koth_scorelimit, 3, ;, when(G_GAMETYPE_KOTH) )
CHOICE_DVAREDIT_NUMERIC_VIS( 4, "@OW_ROUNDLIMIT", scr_koth_roundlimit, 3, ;, when(G_GAMETYPE_KOTH) )
CHOICE_DVAREDIT_NUMERIC_VIS( 5, "@OW_ROUND_SWITCH", scr_koth_roundswitch, 3, ;, when(G_GAMETYPE_KOTH) )
CHOICE_DVAREDIT_NUMERIC_VIS( 6, "@OW_PLAYER_RESPAWN_DELAY", scr_koth_playerrespawndelay, 3, ;, when(G_GAMETYPE_KOTH) )
CHOICE_DVAREDIT_NUMERIC_VIS( 7, "@OW_WAVE_RESPAWN_DELAY", scr_koth_waverespawndelay, 3, ;, when(G_GAMETYPE_KOTH) )
CHOICE_DVAREDIT_NUMERIC_VIS( 8, "@OW_NUMBER_OF_LIVES", scr_koth_numlives, 3, ;, when(G_GAMETYPE_KOTH) )
CHOICE_DVARYESNO_VIS( 9, "@OW_TEAM_BALANCE_EOR", scr_koth_teambalanceendofround, ;, when(G_GAMETYPE_KOTH) )

//HQ
CHOICE_DVARFLOATLIST_VIS( 10, "@OW_HQ_MODE", scr_koth_kothmode, { "COD4" 0 "WW/MW2" 1 }, ;, when(G_GAMETYPE_KOTH) )
CHOICE_DVAREDIT_NUMERIC_VIS( 11, "@OW_HQ_AUTODESTROY_TIME", scr_koth_autodestroytime, 3, ;, when(G_GAMETYPE_KOTH) )
CHOICE_DVAREDIT_NUMERIC_VIS( 12, "@OW_HQ_CAPTURE_TIME", scr_koth_capturetime, 3, ;, when(G_GAMETYPE_KOTH) )
CHOICE_DVAREDIT_NUMERIC_VIS( 13, "@OW_HQ_DELAY_PLAYER", scr_koth_delayPlayer, 3, ;, when(G_GAMETYPE_KOTH) )
CHOICE_DVAREDIT_NUMERIC_VIS( 14, "@OW_HQ_DESTROY_TIME", scr_koth_destroytime, 3, ;, when(G_GAMETYPE_KOTH) )
CHOICE_DVAREDIT_NUMERIC_VIS( 15, "@OW_HQ_SPAWN_TIME", scr_koth_spawntime, 3, ;, when(G_GAMETYPE_KOTH) )
CHOICE_DVARYESNO_VIS( 16, "@OW_FLASH_ON_CAPTURE", scr_koth_flash_on_capture, ;, when(G_GAMETYPE_KOTH) )
CHOICE_DVARYESNO_VIS( 17, "@OW_HQ_FLASH_ON_DESTROY", scr_koth_flash_on_destroy, ;, when(G_GAMETYPE_KOTH) )

CHOICE_DVARYESNO_VIS( 18, "@OW_SD_HQ_TEAM_DEAD_SPECTATE_3RD_P", scr_koth_teamdeadspectate_tp, ;, when(G_GAMETYPE_KOTH) )