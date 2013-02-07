#undef CHOICE_GROUP
#define CHOICE_GROUP gg

#define G_GAMETYPE_GG (dvarString( "settings_config_gametype" ) == "gg")

CHOICE_DVAREDIT_NUMERIC_VIS( 2, "@OW_TIMELIMIT", scr_gg_timelimit, 5, ; , when(G_GAMETYPE_GG) )
CHOICE_DVAREDIT_NUMERIC_VIS( 3, "@OW_PLAYER_RESPAWN_DELAY", scr_gg_playerrespawndelay, 3, ; , when(G_GAMETYPE_GG) )
//GG

CHOICE_DVAREDIT_VIS( 4, "@OW_GG_WEAPON_ORDER", scr_gg_weapon_order, 1000, 60, ; , when(G_GAMETYPE_GG) )

CHOICE_DVARSTRINGLIST_VIS( 5, "@OW_PERK_SLOT1", scr_gg_specialty_slot1, { "None" specialty_null "@PERKS_STOPPING_POWER" specialty_bulletdamage "@PERKS_JUGGERNAUT" specialty_armorvest "@PERKS_SLEIGHT_OF_HAND" specialty_fastreload "@PERKS_DOUBLE_TAP" specialty_rof "@PERKS_UAV_JAMMER" specialty_gpsjammer "@PERKS_SONIC_BOOM" specialty_explosivedamage }, ; , when(G_GAMETYPE_GG) )

CHOICE_DVARSTRINGLIST_VIS( 6, "@OW_PERK_SLOT2", scr_gg_specialty_slot2, { "None" specialty_null "@PERKS_EXTREME_CONDITIONING" specialty_longersprint "@PERKS_STEADY_AIM" perk_allow_specialty_bulletaccuracy "@PERKS_LAST_STAND" perk_allow_specialty_pistoldeath "@PERKS_MARTYRDOM" perk_allow_specialty_grenadepulldeath "@PERKS_DEEP_IMPACT" perk_allow_specialty_bulletpenetration "@PERKS_IRON_LUNGS" perk_allow_specialty_holdbreath "@PERKS_DEAD_SILENCE" perk_allow_specialty_quieter }, ; , when(G_GAMETYPE_GG) )

CHOICE_DVARFLOATLIST_VIS( 7, "@OW_GG_KNIFE_BEHAVIOR", scr_gg_knife_pro, { "Disabled" 0 "Increase 1 level" 3 "Increase level only if victim has equal or higher level" 2 "Steal victim's level" 1 }, ; , when(G_GAMETYPE_GG) )

CHOICE_DVAREDIT_NUMERIC_VIS( 8, "@OW_GG_KILLS_INC", scr_gg_kills_per_lvl, 3, ; , when(G_GAMETYPE_GG) )
CHOICE_DVAREDIT_NUMERIC_VIS( 9, "@OW_GG_DEATHS_DEC", scr_gg_death_penalty, 3, ; , when(G_GAMETYPE_GG) )

CHOICE_DVARFLOATLIST_VIS( 10, "@OW_GG_KNIFED_BEHAVIOR", scr_gg_knifed_penalty, { "Disabled" 0 "Decrease 1 level" 1 "Decrease only if attacker has equal or lower level" 2 }, ; , when(G_GAMETYPE_GG) )

CHOICE_DVARFLOATLIST_VIS( 11, "@OW_GG_HANDICAP", scr_gg_handicap_on, { "Disabled" 0 "Same as lowest leveled player" 2 "Average level in the server" 1 }, ; , when(G_GAMETYPE_GG) )
CHOICE_DVAREDIT_VIS( 12, "@OW_GG_NADE_KNIFE_WEAPON", scr_gg_nade_knife_weapon, 32, 32, ; , when(G_GAMETYPE_GG) )
// for SS too
CHOICE_DVARFLOATLIST_VIS( 13, "@OW_GG_SS_EXPLOSIVE_SPECIAL", scr_gg_explosives_special, { "Disabled" 0 "Smoke grenade" 1 "Flash grenade" 2 "Concussion grenade" 3 }, ; , when(G_GAMETYPE_GG) )
CHOICE_DVARYESNO_VIS( 14, "@OW_GG_EXPLOSIVE_GIVE_AFTER_KILL", scr_gg_extra_explosives, ; , when(G_GAMETYPE_GG) )

CHOICE_DVAREDIT_NUMERIC_VIS( 15, "@OW_GG_SS_EXPLOSIVE_REFRESH", scr_gg_explosives_refresh, 3, ; , when(G_GAMETYPE_GG) )
CHOICE_DVARYESNO_VIS( 16, "@OW_GG_BACKPACK_REFRESH", scr_gg_refill_on_kill, ; , when(G_GAMETYPE_GG) )
CHOICE_DVARFLOATLIST_VIS( 17, "@OW_GG_AUTOLEVELUP", scr_gg_auto_levelup, { "Disabled" 0 "Increase level every so often" 1 "Increase to level of next least leveled player" 2 }, ; , when(G_GAMETYPE_GG) )
CHOICE_DVAREDIT_NUMERIC_VIS( 18, "@OW_GG_AUTOLEVELUP_TIME", scr_gg_auto_levelup_time, 4, ; , when(G_GAMETYPE_GG) )