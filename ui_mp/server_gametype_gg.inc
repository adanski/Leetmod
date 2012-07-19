//GG
CHOICE_DVAREDIT( 24, "@OW_GG_WEAPON_ORDER", scr_gg_weapon_order, ; )

//CHOICE_DVARFLOATLIST( 28, "@OW_PERK_SLOT1", scr_gg_specialty_slot1, { "None" specialty_null "@PERKS_C4_X_2" 3 "@PERKS_SPECIAL_GRENADES_X_3" specialty_specialgrenade "@PERKS_RPG7_X_2" 2 "@PERKS_CLAYMORE_X_2" 1 "@PERKS_FRAG_X_3" specialty_fraggrenade "@PERKS_BANDOLIER" specialty_extraammo "@PERKS_BOMB_SQUAD" specialty_detectexplosive }, ; )

CHOICE_DVARFLOATLIST( 28, "@OW_PERK_SLOT2", scr_gg_specialty_slot1, { "None" specialty_null "@PERKS_STOPPING_POWER" specialty_bulletdamage "@PERKS_JUGGERNAUT" specialty_armorvest "@PERKS_SLEIGHT_OF_HAND" specialty_fastreload "@PERKS_DOUBLE_TAP" specialty_rof "@PERKS_OVERKILL" specialty_twoprimaries "@PERKS_UAV_JAMMER" specialty_gpsjammer "@PERKS_SONIC_BOOM" specialty_explosivedamage }, ; )

CHOICE_DVARFLOATLIST( 28, "@OW_PERK_SLOT3", scr_gg_specialty_slot1, { "None" specialty_null "@PERKS_EXTREME_CONDITIONING" specialty_longersprint "@PERKS_STEADY_AIM" perk_allow_specialty_bulletaccuracy "@PERKS_LAST_STAND" perk_allow_specialty_pistoldeath "@PERKS_MARTYRDOM" perk_allow_specialty_grenadepulldeath "@PERKS_DEEP_IMPACT" perk_allow_specialty_bulletpenetration "@PERKS_IRON_LUNGS" perk_allow_specialty_holdbreath "@PERKS_DEAD_SILENCE" perk_allow_specialty_quieter }, ; )

CHOICE_DVARFLOATLIST( 28, "@OW_GG_KNIFE_BEHAVIOR", scr_gg_knife_pro, { "Disabled" 0 "Increase 1 level" 3 "Increase level only if victim has equal or higher level" 2 "Steal victim's level" 1 }, ; )

CHOICE_DVAREDIT_NUMERIC( 28, "@OW_GG_KILLS_INC", scr_gg_kills_per_lvl, 3, ; )
CHOICE_DVAREDIT_NUMERIC( 28, "@OW_GG_DEATHS_DEC", scr_gg_death_penalty, 3, ; )

CHOICE_DVARFLOATLIST( 28, "@OW_GG_KNIFED_BEHAVIOR", scr_gg_knifed_penalty, { "Disabled" 0 "Decrease 1 level" 1 "Decrease only if attacker has equal or lower level" 2 }, ; )

CHOICE_DVARFLOATLIST( 28, "@OW_GG_HANDICAP", scr_gg_knifed_penalty, { "Disabled" 0 "Same as lowest leveled player" 2 "Average level in the server" 1 }, ; )
CHOICE_DVAREDIT( 24, "@OW_GG_NADE_KNIFE_WEAPON", scr_gg_nade_knife_weapon, ; )
// for SS too
CHOICE_DVARFLOATLIST( 28, "@OW_SS_EXPLOSIVE_SPECIAL", scr_gg_explosives_special, { "Disabled" 0 "Smoke grenade" 1 "Flash grenade" 2 "Concussion grenade" 3 }, ; )
CHOICE_DVARYESNO( 28, "@OW_EXPLOSIVE_GIVE_AFTER_KILL", scr_gg_extra_explosives, ; )

CHOICE_DVAREDIT_NUMERIC( 28, "@OW_EXPLOSIVE_REFRESH", scr_gg_explosives_refresh, 3, ; )
CHOICE_DVARYESNO( 28, "@OW_BACKPACK_REFRESH", scr_gg_refill_on_kill, ; )
CHOICE_DVARFLOATLIST( 28, "@OW_GG_AUTOLEVELUP", scr_gg_auto_levelup, { "Disabled" 0 "Increase level every so often" 1 "Increase to level of next least leveled player" 2 }, ; )
CHOICE_DVAREDIT_NUMERIC( 28, "@OW_GG_AUTOLEVELUP_TIME", scr_gg_auto_levelup_time, 4, ; )