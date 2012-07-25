#define G_GAMETYPE_SS (dvarString( "settings_config_gametype" ) == "ss")

CHOICE_DVAREDIT_NUMERIC_VIS( 2, "@OW_TIMELIMIT", scr_ss_timelimit, 5, ;, when(G_GAMETYPE_SS) )
CHOICE_DVAREDIT_NUMERIC_VIS( 3, "@OW_SCORELIMIT", scr_ss_scorelimit, 3, ;, when(G_GAMETYPE_SS) )
CHOICE_DVAREDIT_NUMERIC_VIS( 4, "@OW_ROUNDLIMIT", scr_ss_roundlimit, 3, ;, when(G_GAMETYPE_SS) )
CHOICE_DVAREDIT_NUMERIC_VIS( 5, "@OW_PLAYER_RESPAWN_DELAY", scr_ss_playerrespawndelay, 3, ;, when(G_GAMETYPE_SS) )

//SS
CHOICE_DVAREDIT_NUMERIC_VIS( 6, "@OW_SS_SWITCH_TIME", scr_ss_weapon_switch_time, 4, ;, when(G_GAMETYPE_SS) )
CHOICE_DVAREDIT_VIS( 7, "@OW_SS_OITC_AVAILABLE_WEAPONS", scr_ss_available_weapons, 1000, 60, ;, when(G_GAMETYPE_SS) )
CHOICE_DVARFLOATLIST_VIS( 8, "@OW_GG_SS_EXPLOSIVE_SPECIAL", scr_ss_explosives_special, { "Disabled" 0 "Smoke grenade" 1 "Flash grenade" 2 "Concussion grenade" 3 }, ;, when(G_GAMETYPE_SS) )

CHOICE_DVARSTRINGLIST_VIS( 9, "@OW_PERK_SLOT1", scr_ss_specialty_slot1, { "None" specialty_null "@PERKS_STOPPING_POWER" specialty_bulletdamage "@PERKS_JUGGERNAUT" specialty_armorvest "@PERKS_SLEIGHT_OF_HAND" specialty_fastreload "@PERKS_DOUBLE_TAP" specialty_rof "@PERKS_UAV_JAMMER" specialty_gpsjammer "@PERKS_SONIC_BOOM" specialty_explosivedamage }, ;, when(G_GAMETYPE_SS) )

CHOICE_DVARSTRINGLIST_VIS( 10, "@OW_PERK_SLOT2", scr_ss_specialty_slot2, { "None" specialty_null "@PERKS_EXTREME_CONDITIONING" specialty_longersprint "@PERKS_STEADY_AIM" perk_allow_specialty_bulletaccuracy "@PERKS_LAST_STAND" perk_allow_specialty_pistoldeath "@PERKS_MARTYRDOM" perk_allow_specialty_grenadepulldeath "@PERKS_DEEP_IMPACT" perk_allow_specialty_bulletpenetration "@PERKS_IRON_LUNGS" perk_allow_specialty_holdbreath "@PERKS_DEAD_SILENCE" perk_allow_specialty_quieter }, ;, when(G_GAMETYPE_SS) )

CHOICE_DVARYESNO_VIS( 11, "@OW_SS_SHOTGUN_3RD_P", scr_ss_shotguns_tp, ;, when(G_GAMETYPE_SS) )
