#ifdef FILLMENUDVARS
#undef FILLMENUDVARS
#endif

#define FILLMENUDVARS     exec "exec menudvars/fairness/l/_def.cfg"\
    execOnDvarStringValue menu_cfg_gt ass "exec menudvars/fairness/l/ass.cfg"\
    execOnDvarStringValue menu_cfg_gt bel "exec menudvars/fairness/l/bel.cfg"\
    execOnDvarStringValue menu_cfg_gt ch "exec menudvars/fairness/l/ch.cfg"\
    execOnDvarStringValue menu_cfg_gt ctf "exec menudvars/fairness/l/ctf.cfg"\
    execOnDvarStringValue menu_cfg_gt dm "exec menudvars/fairness/l/dm.cfg"\
    execOnDvarStringValue menu_cfg_gt dom "exec menudvars/fairness/l/dom.cfg"\
    execOnDvarStringValue menu_cfg_gt ftag "exec menudvars/fairness/l/ftag.cfg"\
    execOnDvarStringValue menu_cfg_gt gg "exec menudvars/fairness/l/gg.cfg"\
    execOnDvarStringValue menu_cfg_gt gr "exec menudvars/fairness/l/gr.cfg"\
    execOnDvarStringValue menu_cfg_gt koth "exec menudvars/fairness/l/koth.cfg"\
    execOnDvarStringValue menu_cfg_gt oitc "exec menudvars/fairness/l/oitc.cfg"\
    execOnDvarStringValue menu_cfg_gt re "exec menudvars/fairness/l/re.cfg"\
    execOnDvarStringValue menu_cfg_gt sab "exec menudvars/fairness/l/sab.cfg"\
    execOnDvarStringValue menu_cfg_gt sd "exec menudvars/fairness/l/sd.cfg"\
    execOnDvarStringValue menu_cfg_gt ss "exec menudvars/fairness/l/ss.cfg"\
    execOnDvarStringValue menu_cfg_gt tgr "exec menudvars/fairness/l/tgr.cfg"\
    execOnDvarStringValue menu_cfg_gt war "exec menudvars/fairness/l/war.cfg"

#ifdef SAVEMENUDVARS
#undef SAVEMENUDVARS
#endif

#define SAVEMENUDVARS     execOnDvarStringValue menu_cfg_gt _def "exec menudvars/fairness/s/_def.cfg"\
    execOnDvarStringValue menu_cfg_gt ass "exec menudvars/fairness/s/ass.cfg"\
    execOnDvarStringValue menu_cfg_gt bel "exec menudvars/fairness/s/bel.cfg"\
    execOnDvarStringValue menu_cfg_gt ch "exec menudvars/fairness/s/ch.cfg"\
    execOnDvarStringValue menu_cfg_gt ctf "exec menudvars/fairness/s/ctf.cfg"\
    execOnDvarStringValue menu_cfg_gt dm "exec menudvars/fairness/s/dm.cfg"\
    execOnDvarStringValue menu_cfg_gt dom "exec menudvars/fairness/s/dom.cfg"\
    execOnDvarStringValue menu_cfg_gt ftag "exec menudvars/fairness/s/ftag.cfg"\
    execOnDvarStringValue menu_cfg_gt gg "exec menudvars/fairness/s/gg.cfg"\
    execOnDvarStringValue menu_cfg_gt gr "exec menudvars/fairness/s/gr.cfg"\
    execOnDvarStringValue menu_cfg_gt koth "exec menudvars/fairness/s/koth.cfg"\
    execOnDvarStringValue menu_cfg_gt oitc "exec menudvars/fairness/s/oitc.cfg"\
    execOnDvarStringValue menu_cfg_gt re "exec menudvars/fairness/s/re.cfg"\
    execOnDvarStringValue menu_cfg_gt sab "exec menudvars/fairness/s/sab.cfg"\
    execOnDvarStringValue menu_cfg_gt sd "exec menudvars/fairness/s/sd.cfg"\
    execOnDvarStringValue menu_cfg_gt ss "exec menudvars/fairness/s/ss.cfg"\
    execOnDvarStringValue menu_cfg_gt tgr "exec menudvars/fairness/s/tgr.cfg"\
    execOnDvarStringValue menu_cfg_gt war "exec menudvars/fairness/s/war.cfg"

#ifdef CLEANMENUDVARS
#undef CLEANMENUDVARS
#endif

#define CLEANMENUDVARS execOnDvarStringValue menu_scr_force_autoassign _null "setfromdvar menu_scr_force_autoassign scr_force_autoassign"\
		execOnDvarStringValue menu_scr_force_autoassign_clan_tags _null "setfromdvar menu_scr_force_autoassign_clan_tags scr_force_autoassign_clan_tags"\
		execOnDvarStringValue menu_scr_switch_teams_at_halftime _null "setfromdvar menu_scr_switch_teams_at_halftime scr_switch_teams_at_halftime"\
		execOnDvarStringValue menu_scr_teambalance _null "setfromdvar menu_scr_teambalance scr_teambalance"\
		execOnDvarStringValue menu_scr_teambalance_show_message _null "setfromdvar menu_scr_teambalance_show_message scr_teambalance_show_message"\
		execOnDvarStringValue menu_scr_teambalance_check_interval _null "setfromdvar menu_scr_teambalance_check_interval scr_teambalance_check_interval"\
		execOnDvarStringValue menu_scr_teambalance_delay _null "setfromdvar menu_scr_teambalance_delay scr_teambalance_delay"\
		execOnDvarStringValue menu_scr_teambalance_protected_clan_tags _null "setfromdvar menu_scr_teambalance_protected_clan_tags scr_teambalance_protected_clan_tags"\
		execOnDvarStringValue menu_scr_team_fftype _null "setfromdvar menu_scr_team_fftype scr_team_fftype"\
		execOnDvarStringValue menu_scr_team_teamkillpointloss _null "setfromdvar menu_scr_team_teamkillpointloss scr_team_teamkillpointloss"\
		execOnDvarStringValue menu_scr_team_teamkillspawndelay _null "setfromdvar menu_scr_team_teamkillspawndelay scr_team_teamkillspawndelay"\
		execOnDvarStringValue menu_scr_game_deathpointloss _null "setfromdvar menu_scr_game_deathpointloss scr_game_deathpointloss"\
		execOnDvarStringValue menu_scr_game_suicidepointloss _null "setfromdvar menu_scr_game_suicidepointloss scr_game_suicidepointloss"\
		execOnDvarStringValue menu_scr_player_suicidespawndelay _null "setfromdvar menu_scr_player_suicidespawndelay scr_player_suicidespawndelay"\
		execOnDvarStringValue menu_scr_tk_limit _null "setfromdvar menu_scr_tk_limit scr_tk_limit"\
		execOnDvarStringValue menu_scr_tk_explosive_countasone _null "setfromdvar menu_scr_tk_explosive_countasone scr_tk_explosive_countasone"\
		execOnDvarStringValue menu_scr_tk_punishment _null "setfromdvar menu_scr_tk_punishment scr_tk_punishment"\
		execOnDvarStringValue menu_scr_tk_punishment_time _null "setfromdvar menu_scr_tk_punishment_time scr_tk_punishment_time"\
		execOnDvarStringValue menu_scr_spawn_protection_enable _null "setfromdvar menu_scr_spawn_protection_enable scr_spawn_protection_enable"\
		execOnDvarStringValue menu_scr_spawn_protection_time _null "setfromdvar menu_scr_spawn_protection_time scr_spawn_protection_time"\
		execOnDvarStringValue menu_scr_spawn_protection_invisible _null "setfromdvar menu_scr_spawn_protection_invisible scr_spawn_protection_invisible"\
		execOnDvarStringValue menu_scr_spawn_protection_hiticon _null "setfromdvar menu_scr_spawn_protection_hiticon scr_spawn_protection_hiticon"\
		execOnDvarStringValue menu_scr_spawn_protection_maxdistance _null "setfromdvar menu_scr_spawn_protection_maxdistance scr_spawn_protection_maxdistance"\
		execOnDvarStringValue menu_scr_spawn_protection_punishment_time _null "setfromdvar menu_scr_spawn_protection_punishment_time scr_spawn_protection_punishment_time"\
		execOnDvarStringValue menu_scr_anti_camping_enable _null "setfromdvar menu_scr_anti_camping_enable scr_anti_camping_enable"\
		execOnDvarStringValue menu_scr_anti_camping_show _null "setfromdvar menu_scr_anti_camping_show scr_anti_camping_show"\
		execOnDvarStringValue menu_scr_anti_camping_message _null "setfromdvar menu_scr_anti_camping_message scr_anti_camping_message"\
		execOnDvarStringValue menu_scr_anti_camping_distance _null "setfromdvar menu_scr_anti_camping_distance scr_anti_camping_distance"\
		execOnDvarStringValue menu_scr_anti_camping_time _null "setfromdvar menu_scr_anti_camping_time scr_anti_camping_time"\
		execOnDvarStringValue menu_scr_anti_bunny_hopping_enable _null "setfromdvar menu_scr_anti_bunny_hopping_enable scr_anti_bunny_hopping_enable"\
		execOnDvarStringValue menu_scr_anti_dolphin_dive_enable _null "setfromdvar menu_scr_anti_dolphin_dive_enable scr_anti_dolphin_dive_enable"\
		execOnDvarStringValue menu_scr_rng_enabled _null "setfromdvar menu_scr_rng_enabled scr_rng_enabled"\
		execOnDvarStringValue menu_scr_rng_distance _null "setfromdvar menu_scr_rng_distance scr_rng_distance"\
		execOnDvarStringValue menu_scr_rng_damage_closer _null "setfromdvar menu_scr_rng_damage_closer scr_rng_damage_closer"\
		execOnDvarStringValue menu_scr_rng_damage_longer _null "setfromdvar menu_scr_rng_damage_longer scr_rng_damage_longer"


#define SET_SCR_FORCE_AUTOASSIGN \
  execOnDvarStringValue menu_cfg_gt ass "set scr_force_autoassign_ass _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_force_autoassign_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_force_autoassign_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_force_autoassign_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_force_autoassign_ftag _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_force_autoassign_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_force_autoassign_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_force_autoassign_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_force_autoassign_sd _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_force_autoassign_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_force_autoassign_war _null"

#define SET_SCR_FORCE_AUTOASSIGN_CLAN_TAGS \
  execOnDvarStringValue menu_cfg_gt ass "set scr_force_autoassign_clan_tags_ass _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_force_autoassign_clan_tags_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_force_autoassign_clan_tags_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_force_autoassign_clan_tags_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_force_autoassign_clan_tags_ftag _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_force_autoassign_clan_tags_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_force_autoassign_clan_tags_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_force_autoassign_clan_tags_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_force_autoassign_clan_tags_sd _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_force_autoassign_clan_tags_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_force_autoassign_clan_tags_war _null"

#define SET_SCR_SWITCH_TEAMS_AT_HALFTIME \
  execOnDvarStringValue menu_cfg_gt ass "set scr_switch_teams_at_halftime_ass _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_switch_teams_at_halftime_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_switch_teams_at_halftime_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_switch_teams_at_halftime_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_switch_teams_at_halftime_ftag _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_switch_teams_at_halftime_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_switch_teams_at_halftime_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_switch_teams_at_halftime_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_switch_teams_at_halftime_sd _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_switch_teams_at_halftime_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_switch_teams_at_halftime_war _null"

#define SET_SCR_TEAMBALANCE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_teambalance_ass _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_teambalance_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_teambalance_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_teambalance_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_teambalance_ftag _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_teambalance_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_teambalance_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_teambalance_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_teambalance_sd _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_teambalance_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_teambalance_war _null"

#define SET_SCR_TEAMBALANCE_SHOW_MESSAGE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_teambalance_show_message_ass _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_teambalance_show_message_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_teambalance_show_message_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_teambalance_show_message_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_teambalance_show_message_ftag _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_teambalance_show_message_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_teambalance_show_message_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_teambalance_show_message_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_teambalance_show_message_sd _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_teambalance_show_message_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_teambalance_show_message_war _null"

#define SET_SCR_TEAMBALANCE_CHECK_INTERVAL \
  execOnDvarStringValue menu_cfg_gt ass "set scr_teambalance_check_interval_ass _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_teambalance_check_interval_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_teambalance_check_interval_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_teambalance_check_interval_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_teambalance_check_interval_ftag _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_teambalance_check_interval_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_teambalance_check_interval_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_teambalance_check_interval_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_teambalance_check_interval_sd _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_teambalance_check_interval_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_teambalance_check_interval_war _null"

#define SET_SCR_TEAMBALANCE_DELAY \
  execOnDvarStringValue menu_cfg_gt ass "set scr_teambalance_delay_ass _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_teambalance_delay_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_teambalance_delay_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_teambalance_delay_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_teambalance_delay_ftag _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_teambalance_delay_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_teambalance_delay_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_teambalance_delay_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_teambalance_delay_sd _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_teambalance_delay_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_teambalance_delay_war _null"

#define SET_SCR_TEAMBALANCE_PROTECTED_CLAN_TAGS \
  execOnDvarStringValue menu_cfg_gt ass "set scr_teambalance_protected_clan_tags_ass _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_teambalance_protected_clan_tags_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_teambalance_protected_clan_tags_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_teambalance_protected_clan_tags_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_teambalance_protected_clan_tags_ftag _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_teambalance_protected_clan_tags_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_teambalance_protected_clan_tags_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_teambalance_protected_clan_tags_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_teambalance_protected_clan_tags_sd _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_teambalance_protected_clan_tags_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_teambalance_protected_clan_tags_war _null"

#define SET_SCR_TEAM_FFTYPE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_team_fftype_ass _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_team_fftype_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_team_fftype_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_team_fftype_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_team_fftype_ftag _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_team_fftype_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_team_fftype_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_team_fftype_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_team_fftype_sd _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_team_fftype_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_team_fftype_war _null"

#define SET_SCR_TEAM_TEAMKILLPOINTLOSS \
  execOnDvarStringValue menu_cfg_gt ass "set scr_team_teamkillpointloss_ass _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_team_teamkillpointloss_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_team_teamkillpointloss_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_team_teamkillpointloss_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_team_teamkillpointloss_ftag _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_team_teamkillpointloss_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_team_teamkillpointloss_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_team_teamkillpointloss_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_team_teamkillpointloss_sd _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_team_teamkillpointloss_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_team_teamkillpointloss_war _null"

#define SET_SCR_TEAM_TEAMKILLSPAWNDELAY \
  execOnDvarStringValue menu_cfg_gt ass "set scr_team_teamkillspawndelay_ass _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_team_teamkillspawndelay_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_team_teamkillspawndelay_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_team_teamkillspawndelay_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_team_teamkillspawndelay_ftag _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_team_teamkillspawndelay_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_team_teamkillspawndelay_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_team_teamkillspawndelay_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_team_teamkillspawndelay_sd _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_team_teamkillspawndelay_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_team_teamkillspawndelay_war _null"

#define SET_SCR_GAME_DEATHPOINTLOSS \
  execOnDvarStringValue menu_cfg_gt ass "set scr_game_deathpointloss_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_game_deathpointloss_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_game_deathpointloss_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_game_deathpointloss_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_game_deathpointloss_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_game_deathpointloss_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_game_deathpointloss_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_game_deathpointloss_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_game_deathpointloss_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_game_deathpointloss_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_game_deathpointloss_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_game_deathpointloss_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_game_deathpointloss_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_game_deathpointloss_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_game_deathpointloss_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_game_deathpointloss_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_game_deathpointloss_war _null"

#define SET_SCR_GAME_SUICIDEPOINTLOSS \
  execOnDvarStringValue menu_cfg_gt ass "set scr_game_suicidepointloss_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_game_suicidepointloss_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_game_suicidepointloss_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_game_suicidepointloss_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_game_suicidepointloss_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_game_suicidepointloss_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_game_suicidepointloss_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_game_suicidepointloss_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_game_suicidepointloss_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_game_suicidepointloss_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_game_suicidepointloss_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_game_suicidepointloss_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_game_suicidepointloss_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_game_suicidepointloss_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_game_suicidepointloss_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_game_suicidepointloss_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_game_suicidepointloss_war _null"

#define SET_SCR_PLAYER_SUICIDESPAWNDELAY \
  execOnDvarStringValue menu_cfg_gt ass "set scr_player_suicidespawndelay_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_player_suicidespawndelay_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_player_suicidespawndelay_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_player_suicidespawndelay_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_player_suicidespawndelay_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_player_suicidespawndelay_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_player_suicidespawndelay_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_player_suicidespawndelay_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_player_suicidespawndelay_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_player_suicidespawndelay_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_player_suicidespawndelay_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_player_suicidespawndelay_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_player_suicidespawndelay_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_player_suicidespawndelay_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_player_suicidespawndelay_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_player_suicidespawndelay_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_player_suicidespawndelay_war _null"

#define SET_SCR_TK_LIMIT \
  execOnDvarStringValue menu_cfg_gt ass "set scr_tk_limit_ass _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_tk_limit_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_tk_limit_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_tk_limit_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_tk_limit_ftag _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_tk_limit_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_tk_limit_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_tk_limit_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_tk_limit_sd _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_tk_limit_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_tk_limit_war _null"

#define SET_SCR_TK_EXPLOSIVE_COUNTASONE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_tk_explosive_countasone_ass _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_tk_explosive_countasone_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_tk_explosive_countasone_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_tk_explosive_countasone_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_tk_explosive_countasone_ftag _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_tk_explosive_countasone_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_tk_explosive_countasone_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_tk_explosive_countasone_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_tk_explosive_countasone_sd _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_tk_explosive_countasone_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_tk_explosive_countasone_war _null"

#define SET_SCR_TK_PUNISHMENT \
  execOnDvarStringValue menu_cfg_gt ass "set scr_tk_punishment_ass _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_tk_punishment_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_tk_punishment_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_tk_punishment_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_tk_punishment_ftag _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_tk_punishment_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_tk_punishment_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_tk_punishment_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_tk_punishment_sd _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_tk_punishment_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_tk_punishment_war _null"

#define SET_SCR_TK_PUNISHMENT_TIME \
  execOnDvarStringValue menu_cfg_gt ass "set scr_tk_punishment_time_ass _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_tk_punishment_time_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_tk_punishment_time_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_tk_punishment_time_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_tk_punishment_time_ftag _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_tk_punishment_time_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_tk_punishment_time_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_tk_punishment_time_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_tk_punishment_time_sd _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_tk_punishment_time_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_tk_punishment_time_war _null"

#define SET_SCR_SPAWN_PROTECTION_ENABLE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_spawn_protection_enable_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_spawn_protection_enable_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_spawn_protection_enable_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_spawn_protection_enable_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_spawn_protection_enable_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_spawn_protection_enable_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_spawn_protection_enable_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_spawn_protection_enable_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_spawn_protection_enable_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_spawn_protection_enable_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_spawn_protection_enable_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_spawn_protection_enable_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_spawn_protection_enable_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_spawn_protection_enable_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_spawn_protection_enable_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_spawn_protection_enable_war _null"

#define SET_SCR_SPAWN_PROTECTION_TIME \
  execOnDvarStringValue menu_cfg_gt ass "set scr_spawn_protection_time_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_spawn_protection_time_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_spawn_protection_time_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_spawn_protection_time_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_spawn_protection_time_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_spawn_protection_time_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_spawn_protection_time_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_spawn_protection_time_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_spawn_protection_time_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_spawn_protection_time_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_spawn_protection_time_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_spawn_protection_time_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_spawn_protection_time_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_spawn_protection_time_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_spawn_protection_time_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_spawn_protection_time_war _null"

#define SET_SCR_SPAWN_PROTECTION_INVISIBLE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_spawn_protection_invisible_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_spawn_protection_invisible_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_spawn_protection_invisible_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_spawn_protection_invisible_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_spawn_protection_invisible_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_spawn_protection_invisible_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_spawn_protection_invisible_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_spawn_protection_invisible_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_spawn_protection_invisible_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_spawn_protection_invisible_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_spawn_protection_invisible_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_spawn_protection_invisible_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_spawn_protection_invisible_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_spawn_protection_invisible_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_spawn_protection_invisible_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_spawn_protection_invisible_war _null"

#define SET_SCR_SPAWN_PROTECTION_HITICON \
  execOnDvarStringValue menu_cfg_gt ass "set scr_spawn_protection_hiticon_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_spawn_protection_hiticon_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_spawn_protection_hiticon_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_spawn_protection_hiticon_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_spawn_protection_hiticon_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_spawn_protection_hiticon_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_spawn_protection_hiticon_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_spawn_protection_hiticon_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_spawn_protection_hiticon_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_spawn_protection_hiticon_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_spawn_protection_hiticon_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_spawn_protection_hiticon_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_spawn_protection_hiticon_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_spawn_protection_hiticon_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_spawn_protection_hiticon_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_spawn_protection_hiticon_war _null"

#define SET_SCR_SPAWN_PROTECTION_MAXDISTANCE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_spawn_protection_maxdistance_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_spawn_protection_maxdistance_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_spawn_protection_maxdistance_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_spawn_protection_maxdistance_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_spawn_protection_maxdistance_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_spawn_protection_maxdistance_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_spawn_protection_maxdistance_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_spawn_protection_maxdistance_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_spawn_protection_maxdistance_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_spawn_protection_maxdistance_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_spawn_protection_maxdistance_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_spawn_protection_maxdistance_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_spawn_protection_maxdistance_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_spawn_protection_maxdistance_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_spawn_protection_maxdistance_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_spawn_protection_maxdistance_war _null"

#define SET_SCR_SPAWN_PROTECTION_PUNISHMENT_TIME \
  execOnDvarStringValue menu_cfg_gt ass "set scr_spawn_protection_punishment_time_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_spawn_protection_punishment_time_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_spawn_protection_punishment_time_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_spawn_protection_punishment_time_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_spawn_protection_punishment_time_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_spawn_protection_punishment_time_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_spawn_protection_punishment_time_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_spawn_protection_punishment_time_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_spawn_protection_punishment_time_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_spawn_protection_punishment_time_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_spawn_protection_punishment_time_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_spawn_protection_punishment_time_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_spawn_protection_punishment_time_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_spawn_protection_punishment_time_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_spawn_protection_punishment_time_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_spawn_protection_punishment_time_war _null"

#define SET_SCR_ANTI_CAMPING_ENABLE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_anti_camping_enable_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_anti_camping_enable_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_anti_camping_enable_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_anti_camping_enable_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_anti_camping_enable_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_anti_camping_enable_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_anti_camping_enable_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_anti_camping_enable_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_anti_camping_enable_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_anti_camping_enable_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_anti_camping_enable_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_anti_camping_enable_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_anti_camping_enable_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_anti_camping_enable_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_anti_camping_enable_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_anti_camping_enable_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_anti_camping_enable_war _null"

#define SET_SCR_ANTI_CAMPING_SHOW \
  execOnDvarStringValue menu_cfg_gt ass "set scr_anti_camping_show_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_anti_camping_show_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_anti_camping_show_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_anti_camping_show_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_anti_camping_show_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_anti_camping_show_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_anti_camping_show_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_anti_camping_show_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_anti_camping_show_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_anti_camping_show_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_anti_camping_show_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_anti_camping_show_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_anti_camping_show_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_anti_camping_show_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_anti_camping_show_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_anti_camping_show_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_anti_camping_show_war _null"

#define SET_SCR_ANTI_CAMPING_MESSAGE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_anti_camping_message_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_anti_camping_message_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_anti_camping_message_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_anti_camping_message_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_anti_camping_message_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_anti_camping_message_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_anti_camping_message_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_anti_camping_message_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_anti_camping_message_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_anti_camping_message_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_anti_camping_message_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_anti_camping_message_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_anti_camping_message_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_anti_camping_message_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_anti_camping_message_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_anti_camping_message_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_anti_camping_message_war _null"

#define SET_SCR_ANTI_CAMPING_DISTANCE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_anti_camping_distance_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_anti_camping_distance_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_anti_camping_distance_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_anti_camping_distance_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_anti_camping_distance_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_anti_camping_distance_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_anti_camping_distance_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_anti_camping_distance_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_anti_camping_distance_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_anti_camping_distance_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_anti_camping_distance_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_anti_camping_distance_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_anti_camping_distance_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_anti_camping_distance_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_anti_camping_distance_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_anti_camping_distance_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_anti_camping_distance_war _null"

#define SET_SCR_ANTI_CAMPING_TIME \
  execOnDvarStringValue menu_cfg_gt ass "set scr_anti_camping_time_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_anti_camping_time_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_anti_camping_time_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_anti_camping_time_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_anti_camping_time_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_anti_camping_time_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_anti_camping_time_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_anti_camping_time_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_anti_camping_time_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_anti_camping_time_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_anti_camping_time_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_anti_camping_time_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_anti_camping_time_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_anti_camping_time_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_anti_camping_time_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_anti_camping_time_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_anti_camping_time_war _null"

#define SET_SCR_ANTI_BUNNY_HOPPING_ENABLE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_anti_bunny_hopping_enable_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_anti_bunny_hopping_enable_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_anti_bunny_hopping_enable_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_anti_bunny_hopping_enable_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_anti_bunny_hopping_enable_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_anti_bunny_hopping_enable_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_anti_bunny_hopping_enable_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_anti_bunny_hopping_enable_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_anti_bunny_hopping_enable_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_anti_bunny_hopping_enable_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_anti_bunny_hopping_enable_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_anti_bunny_hopping_enable_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_anti_bunny_hopping_enable_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_anti_bunny_hopping_enable_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_anti_bunny_hopping_enable_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_anti_bunny_hopping_enable_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_anti_bunny_hopping_enable_war _null"

#define SET_SCR_ANTI_DOLPHIN_DIVE_ENABLE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_anti_dolphin_dive_enable_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_anti_dolphin_dive_enable_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_anti_dolphin_dive_enable_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_anti_dolphin_dive_enable_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_anti_dolphin_dive_enable_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_anti_dolphin_dive_enable_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_anti_dolphin_dive_enable_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_anti_dolphin_dive_enable_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_anti_dolphin_dive_enable_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_anti_dolphin_dive_enable_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_anti_dolphin_dive_enable_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_anti_dolphin_dive_enable_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_anti_dolphin_dive_enable_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_anti_dolphin_dive_enable_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_anti_dolphin_dive_enable_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_anti_dolphin_dive_enable_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_anti_dolphin_dive_enable_war _null"

#define SET_SCR_RNG_ENABLED \
  execOnDvarStringValue menu_cfg_gt ass "set scr_rng_enabled_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_rng_enabled_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_rng_enabled_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_rng_enabled_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_rng_enabled_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_rng_enabled_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_rng_enabled_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_rng_enabled_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_rng_enabled_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_rng_enabled_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_rng_enabled_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_rng_enabled_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_rng_enabled_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_rng_enabled_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_rng_enabled_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_rng_enabled_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_rng_enabled_war _null"

#define SET_SCR_RNG_DISTANCE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_rng_distance_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_rng_distance_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_rng_distance_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_rng_distance_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_rng_distance_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_rng_distance_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_rng_distance_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_rng_distance_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_rng_distance_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_rng_distance_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_rng_distance_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_rng_distance_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_rng_distance_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_rng_distance_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_rng_distance_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_rng_distance_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_rng_distance_war _null"

#define SET_SCR_RNG_DAMAGE_CLOSER \
  execOnDvarStringValue menu_cfg_gt ass "set scr_rng_damage_closer_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_rng_damage_closer_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_rng_damage_closer_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_rng_damage_closer_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_rng_damage_closer_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_rng_damage_closer_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_rng_damage_closer_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_rng_damage_closer_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_rng_damage_closer_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_rng_damage_closer_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_rng_damage_closer_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_rng_damage_closer_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_rng_damage_closer_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_rng_damage_closer_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_rng_damage_closer_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_rng_damage_closer_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_rng_damage_closer_war _null"

#define SET_SCR_RNG_DAMAGE_LONGER \
  execOnDvarStringValue menu_cfg_gt ass "set scr_rng_damage_longer_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_rng_damage_longer_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_rng_damage_longer_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_rng_damage_longer_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_rng_damage_longer_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_rng_damage_longer_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_rng_damage_longer_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_rng_damage_longer_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_rng_damage_longer_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_rng_damage_longer_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_rng_damage_longer_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_rng_damage_longer_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_rng_damage_longer_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_rng_damage_longer_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_rng_damage_longer_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_rng_damage_longer_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_rng_damage_longer_war _null"


// SETAS
#define SETA_SCR_FORCE_AUTOASSIGN \
	execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
	execNowOnDvarStringValue scr_force_autoassign_ass _null "toggle tmp_gt_ass 0 1 2" \
	execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_force_autoassign_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_force_autoassign_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_force_autoassign_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_force_autoassign_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_force_autoassign_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_force_autoassign_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_force_autoassign_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_force_autoassign_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_force_autoassign_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_force_autoassign_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_force_autoassign_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_force_autoassign_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_force_autoassign_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_force_autoassign_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_force_autoassign_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_force_autoassign_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_force_autoassign_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_force_autoassign_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_force_autoassign_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_force_autoassign_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_force_autoassign_war _null"

#define SETA_SCR_FORCE_AUTOASSIGN_CLAN_TAGS \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_force_autoassign_clan_tags_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_force_autoassign_clan_tags_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_force_autoassign_clan_tags_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_force_autoassign_clan_tags_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_force_autoassign_clan_tags_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_force_autoassign_clan_tags_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_force_autoassign_clan_tags_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_force_autoassign_clan_tags_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_force_autoassign_clan_tags_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_force_autoassign_clan_tags_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_force_autoassign_clan_tags_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_force_autoassign_clan_tags_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_force_autoassign_clan_tags_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_force_autoassign_clan_tags_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_force_autoassign_clan_tags_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_force_autoassign_clan_tags_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_force_autoassign_clan_tags_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_force_autoassign_clan_tags_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_force_autoassign_clan_tags_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_force_autoassign_clan_tags_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_force_autoassign_clan_tags_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_force_autoassign_clan_tags_war _null"

#define SETA_SCR_SWITCH_TEAMS_AT_HALFTIME \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_switch_teams_at_halftime_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_switch_teams_at_halftime_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_switch_teams_at_halftime_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_switch_teams_at_halftime_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_switch_teams_at_halftime_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_switch_teams_at_halftime_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_switch_teams_at_halftime_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_switch_teams_at_halftime_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_switch_teams_at_halftime_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_switch_teams_at_halftime_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_switch_teams_at_halftime_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_switch_teams_at_halftime_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_switch_teams_at_halftime_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_switch_teams_at_halftime_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_switch_teams_at_halftime_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_switch_teams_at_halftime_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_switch_teams_at_halftime_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_switch_teams_at_halftime_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_switch_teams_at_halftime_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_switch_teams_at_halftime_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_switch_teams_at_halftime_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_switch_teams_at_halftime_war _null"

#define SETA_SCR_TEAMBALANCE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_teambalance_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_teambalance_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_teambalance_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_teambalance_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_teambalance_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_teambalance_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_teambalance_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_teambalance_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_teambalance_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_teambalance_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_teambalance_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_teambalance_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_teambalance_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_teambalance_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_teambalance_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_teambalance_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_teambalance_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_teambalance_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_teambalance_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_teambalance_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_teambalance_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_teambalance_war _null"

#define SETA_SCR_TEAMBALANCE_SHOW_MESSAGE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_teambalance_show_message_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_teambalance_show_message_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_teambalance_show_message_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_teambalance_show_message_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_teambalance_show_message_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_teambalance_show_message_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_teambalance_show_message_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_teambalance_show_message_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_teambalance_show_message_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_teambalance_show_message_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_teambalance_show_message_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_teambalance_show_message_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_teambalance_show_message_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_teambalance_show_message_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_teambalance_show_message_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_teambalance_show_message_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_teambalance_show_message_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_teambalance_show_message_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_teambalance_show_message_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_teambalance_show_message_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_teambalance_show_message_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_teambalance_show_message_war _null"

#define SETA_SCR_TEAMBALANCE_CHECK_INTERVAL \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_teambalance_check_interval_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_teambalance_check_interval_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_teambalance_check_interval_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_teambalance_check_interval_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_teambalance_check_interval_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_teambalance_check_interval_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_teambalance_check_interval_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_teambalance_check_interval_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_teambalance_check_interval_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_teambalance_check_interval_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_teambalance_check_interval_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_teambalance_check_interval_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_teambalance_check_interval_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_teambalance_check_interval_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_teambalance_check_interval_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_teambalance_check_interval_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_teambalance_check_interval_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_teambalance_check_interval_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_teambalance_check_interval_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_teambalance_check_interval_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_teambalance_check_interval_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_teambalance_check_interval_war _null"

#define SETA_SCR_TEAMBALANCE_DELAY \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_teambalance_delay_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_teambalance_delay_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_teambalance_delay_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_teambalance_delay_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_teambalance_delay_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_teambalance_delay_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_teambalance_delay_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_teambalance_delay_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_teambalance_delay_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_teambalance_delay_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_teambalance_delay_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_teambalance_delay_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_teambalance_delay_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_teambalance_delay_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_teambalance_delay_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_teambalance_delay_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_teambalance_delay_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_teambalance_delay_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_teambalance_delay_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_teambalance_delay_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_teambalance_delay_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_teambalance_delay_war _null"

#define SETA_SCR_TEAMBALANCE_PROTECTED_CLAN_TAGS \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_teambalance_protected_clan_tags_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_teambalance_protected_clan_tags_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_teambalance_protected_clan_tags_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_teambalance_protected_clan_tags_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_teambalance_protected_clan_tags_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_teambalance_protected_clan_tags_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_teambalance_protected_clan_tags_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_teambalance_protected_clan_tags_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_teambalance_protected_clan_tags_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_teambalance_protected_clan_tags_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_teambalance_protected_clan_tags_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_teambalance_protected_clan_tags_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_teambalance_protected_clan_tags_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_teambalance_protected_clan_tags_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_teambalance_protected_clan_tags_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_teambalance_protected_clan_tags_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_teambalance_protected_clan_tags_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_teambalance_protected_clan_tags_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_teambalance_protected_clan_tags_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_teambalance_protected_clan_tags_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_teambalance_protected_clan_tags_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_teambalance_protected_clan_tags_war _null"

#define SETA_SCR_TEAM_FFTYPE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_team_fftype_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_team_fftype_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_team_fftype_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_team_fftype_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_team_fftype_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_team_fftype_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_team_fftype_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_team_fftype_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_team_fftype_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_team_fftype_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_team_fftype_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_team_fftype_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_team_fftype_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_team_fftype_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_team_fftype_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_team_fftype_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_team_fftype_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_team_fftype_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_team_fftype_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_team_fftype_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_team_fftype_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_team_fftype_war _null"

#define SETA_SCR_TEAM_TEAMKILLPOINTLOSS \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_team_teamkillpointloss_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_team_teamkillpointloss_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_team_teamkillpointloss_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_team_teamkillpointloss_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_team_teamkillpointloss_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_team_teamkillpointloss_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_team_teamkillpointloss_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_team_teamkillpointloss_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_team_teamkillpointloss_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_team_teamkillpointloss_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_team_teamkillpointloss_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_team_teamkillpointloss_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_team_teamkillpointloss_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_team_teamkillpointloss_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_team_teamkillpointloss_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_team_teamkillpointloss_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_team_teamkillpointloss_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_team_teamkillpointloss_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_team_teamkillpointloss_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_team_teamkillpointloss_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_team_teamkillpointloss_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_team_teamkillpointloss_war _null"

#define SETA_SCR_TEAM_TEAMKILLSPAWNDELAY \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_team_teamkillspawndelay_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_team_teamkillspawndelay_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_team_teamkillspawndelay_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_team_teamkillspawndelay_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_team_teamkillspawndelay_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_team_teamkillspawndelay_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_team_teamkillspawndelay_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_team_teamkillspawndelay_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_team_teamkillspawndelay_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_team_teamkillspawndelay_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_team_teamkillspawndelay_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_team_teamkillspawndelay_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_team_teamkillspawndelay_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_team_teamkillspawndelay_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_team_teamkillspawndelay_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_team_teamkillspawndelay_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_team_teamkillspawndelay_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_team_teamkillspawndelay_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_team_teamkillspawndelay_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_team_teamkillspawndelay_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_team_teamkillspawndelay_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_team_teamkillspawndelay_war _null"

#define SETA_SCR_GAME_DEATHPOINTLOSS \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_game_deathpointloss_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_game_deathpointloss_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_game_deathpointloss_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_game_deathpointloss_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_game_deathpointloss_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_game_deathpointloss_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_game_deathpointloss_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_game_deathpointloss_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_game_deathpointloss_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_game_deathpointloss_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_game_deathpointloss_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_game_deathpointloss_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_game_deathpointloss_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_game_deathpointloss_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_game_deathpointloss_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_game_deathpointloss_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_game_deathpointloss_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_game_deathpointloss_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_game_deathpointloss_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_game_deathpointloss_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt oitc "set tmp_gt_oitc 1" \
  execNowOnDvarStringValue scr_game_deathpointloss_oitc _null "toggle tmp_gt_oitc 0 1 2" \
  execNowOnDvarStringValue tmp_gt_oitc 2 "seta scr_game_deathpointloss_oitc _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_game_deathpointloss_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_game_deathpointloss_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_game_deathpointloss_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_game_deathpointloss_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_game_deathpointloss_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_game_deathpointloss_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_game_deathpointloss_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_game_deathpointloss_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_game_deathpointloss_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_game_deathpointloss_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_game_deathpointloss_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_game_deathpointloss_war _null"

#define SETA_SCR_GAME_SUICIDEPOINTLOSS \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_game_suicidepointloss_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_game_suicidepointloss_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_game_suicidepointloss_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_game_suicidepointloss_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_game_suicidepointloss_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_game_suicidepointloss_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_game_suicidepointloss_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_game_suicidepointloss_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_game_suicidepointloss_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_game_suicidepointloss_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_game_suicidepointloss_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_game_suicidepointloss_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_game_suicidepointloss_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_game_suicidepointloss_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_game_suicidepointloss_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_game_suicidepointloss_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_game_suicidepointloss_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_game_suicidepointloss_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_game_suicidepointloss_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_game_suicidepointloss_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt oitc "set tmp_gt_oitc 1" \
  execNowOnDvarStringValue scr_game_suicidepointloss_oitc _null "toggle tmp_gt_oitc 0 1 2" \
  execNowOnDvarStringValue tmp_gt_oitc 2 "seta scr_game_suicidepointloss_oitc _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_game_suicidepointloss_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_game_suicidepointloss_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_game_suicidepointloss_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_game_suicidepointloss_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_game_suicidepointloss_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_game_suicidepointloss_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_game_suicidepointloss_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_game_suicidepointloss_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_game_suicidepointloss_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_game_suicidepointloss_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_game_suicidepointloss_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_game_suicidepointloss_war _null"

#define SETA_SCR_PLAYER_SUICIDESPAWNDELAY \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_player_suicidespawndelay_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_player_suicidespawndelay_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_player_suicidespawndelay_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_player_suicidespawndelay_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_player_suicidespawndelay_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_player_suicidespawndelay_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_player_suicidespawndelay_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_player_suicidespawndelay_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_player_suicidespawndelay_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_player_suicidespawndelay_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_player_suicidespawndelay_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_player_suicidespawndelay_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_player_suicidespawndelay_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_player_suicidespawndelay_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_player_suicidespawndelay_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_player_suicidespawndelay_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_player_suicidespawndelay_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_player_suicidespawndelay_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_player_suicidespawndelay_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_player_suicidespawndelay_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt oitc "set tmp_gt_oitc 1" \
  execNowOnDvarStringValue scr_player_suicidespawndelay_oitc _null "toggle tmp_gt_oitc 0 1 2" \
  execNowOnDvarStringValue tmp_gt_oitc 2 "seta scr_player_suicidespawndelay_oitc _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_player_suicidespawndelay_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_player_suicidespawndelay_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_player_suicidespawndelay_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_player_suicidespawndelay_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_player_suicidespawndelay_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_player_suicidespawndelay_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_player_suicidespawndelay_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_player_suicidespawndelay_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_player_suicidespawndelay_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_player_suicidespawndelay_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_player_suicidespawndelay_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_player_suicidespawndelay_war _null"

#define SETA_SCR_TK_LIMIT \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_tk_limit_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_tk_limit_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_tk_limit_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_tk_limit_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_tk_limit_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_tk_limit_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_tk_limit_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_tk_limit_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_tk_limit_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_tk_limit_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_tk_limit_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_tk_limit_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_tk_limit_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_tk_limit_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_tk_limit_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_tk_limit_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_tk_limit_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_tk_limit_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_tk_limit_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_tk_limit_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_tk_limit_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_tk_limit_war _null"

#define SETA_SCR_TK_EXPLOSIVE_COUNTASONE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_tk_explosive_countasone_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_tk_explosive_countasone_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_tk_explosive_countasone_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_tk_explosive_countasone_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_tk_explosive_countasone_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_tk_explosive_countasone_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_tk_explosive_countasone_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_tk_explosive_countasone_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_tk_explosive_countasone_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_tk_explosive_countasone_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_tk_explosive_countasone_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_tk_explosive_countasone_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_tk_explosive_countasone_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_tk_explosive_countasone_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_tk_explosive_countasone_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_tk_explosive_countasone_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_tk_explosive_countasone_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_tk_explosive_countasone_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_tk_explosive_countasone_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_tk_explosive_countasone_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_tk_explosive_countasone_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_tk_explosive_countasone_war _null"

#define SETA_SCR_TK_PUNISHMENT \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_tk_punishment_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_tk_punishment_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_tk_punishment_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_tk_punishment_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_tk_punishment_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_tk_punishment_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_tk_punishment_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_tk_punishment_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_tk_punishment_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_tk_punishment_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_tk_punishment_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_tk_punishment_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_tk_punishment_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_tk_punishment_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_tk_punishment_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_tk_punishment_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_tk_punishment_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_tk_punishment_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_tk_punishment_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_tk_punishment_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_tk_punishment_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_tk_punishment_war _null"

#define SETA_SCR_TK_PUNISHMENT_TIME \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_tk_punishment_time_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_tk_punishment_time_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_tk_punishment_time_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_tk_punishment_time_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_tk_punishment_time_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_tk_punishment_time_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_tk_punishment_time_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_tk_punishment_time_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_tk_punishment_time_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_tk_punishment_time_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_tk_punishment_time_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_tk_punishment_time_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_tk_punishment_time_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_tk_punishment_time_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_tk_punishment_time_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_tk_punishment_time_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_tk_punishment_time_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_tk_punishment_time_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_tk_punishment_time_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_tk_punishment_time_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_tk_punishment_time_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_tk_punishment_time_war _null"

#define SETA_SCR_SPAWN_PROTECTION_ENABLE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_spawn_protection_enable_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_spawn_protection_enable_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_spawn_protection_enable_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_spawn_protection_enable_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_spawn_protection_enable_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_spawn_protection_enable_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_spawn_protection_enable_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_spawn_protection_enable_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_spawn_protection_enable_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_spawn_protection_enable_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_spawn_protection_enable_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_spawn_protection_enable_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_spawn_protection_enable_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_spawn_protection_enable_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_spawn_protection_enable_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_spawn_protection_enable_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_spawn_protection_enable_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_spawn_protection_enable_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_spawn_protection_enable_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_spawn_protection_enable_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_spawn_protection_enable_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_spawn_protection_enable_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_spawn_protection_enable_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_spawn_protection_enable_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_spawn_protection_enable_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_spawn_protection_enable_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_spawn_protection_enable_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_spawn_protection_enable_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_spawn_protection_enable_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_spawn_protection_enable_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_spawn_protection_enable_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_spawn_protection_enable_war _null"

#define SETA_SCR_SPAWN_PROTECTION_TIME \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_spawn_protection_time_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_spawn_protection_time_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_spawn_protection_time_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_spawn_protection_time_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_spawn_protection_time_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_spawn_protection_time_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_spawn_protection_time_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_spawn_protection_time_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_spawn_protection_time_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_spawn_protection_time_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_spawn_protection_time_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_spawn_protection_time_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_spawn_protection_time_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_spawn_protection_time_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_spawn_protection_time_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_spawn_protection_time_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_spawn_protection_time_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_spawn_protection_time_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_spawn_protection_time_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_spawn_protection_time_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_spawn_protection_time_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_spawn_protection_time_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_spawn_protection_time_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_spawn_protection_time_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_spawn_protection_time_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_spawn_protection_time_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_spawn_protection_time_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_spawn_protection_time_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_spawn_protection_time_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_spawn_protection_time_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_spawn_protection_time_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_spawn_protection_time_war _null"

#define SETA_SCR_SPAWN_PROTECTION_INVISIBLE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_spawn_protection_invisible_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_spawn_protection_invisible_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_spawn_protection_invisible_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_spawn_protection_invisible_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_spawn_protection_invisible_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_spawn_protection_invisible_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_spawn_protection_invisible_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_spawn_protection_invisible_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_spawn_protection_invisible_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_spawn_protection_invisible_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_spawn_protection_invisible_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_spawn_protection_invisible_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_spawn_protection_invisible_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_spawn_protection_invisible_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_spawn_protection_invisible_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_spawn_protection_invisible_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_spawn_protection_invisible_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_spawn_protection_invisible_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_spawn_protection_invisible_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_spawn_protection_invisible_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_spawn_protection_invisible_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_spawn_protection_invisible_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_spawn_protection_invisible_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_spawn_protection_invisible_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_spawn_protection_invisible_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_spawn_protection_invisible_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_spawn_protection_invisible_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_spawn_protection_invisible_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_spawn_protection_invisible_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_spawn_protection_invisible_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_spawn_protection_invisible_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_spawn_protection_invisible_war _null"

#define SETA_SCR_SPAWN_PROTECTION_HITICON \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_spawn_protection_hiticon_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_spawn_protection_hiticon_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_spawn_protection_hiticon_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_spawn_protection_hiticon_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_spawn_protection_hiticon_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_spawn_protection_hiticon_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_spawn_protection_hiticon_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_spawn_protection_hiticon_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_spawn_protection_hiticon_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_spawn_protection_hiticon_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_spawn_protection_hiticon_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_spawn_protection_hiticon_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_spawn_protection_hiticon_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_spawn_protection_hiticon_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_spawn_protection_hiticon_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_spawn_protection_hiticon_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_spawn_protection_hiticon_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_spawn_protection_hiticon_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_spawn_protection_hiticon_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_spawn_protection_hiticon_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_spawn_protection_hiticon_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_spawn_protection_hiticon_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_spawn_protection_hiticon_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_spawn_protection_hiticon_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_spawn_protection_hiticon_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_spawn_protection_hiticon_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_spawn_protection_hiticon_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_spawn_protection_hiticon_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_spawn_protection_hiticon_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_spawn_protection_hiticon_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_spawn_protection_hiticon_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_spawn_protection_hiticon_war _null"

#define SETA_SCR_SPAWN_PROTECTION_MAXDISTANCE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_spawn_protection_maxdistance_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_spawn_protection_maxdistance_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_spawn_protection_maxdistance_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_spawn_protection_maxdistance_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_spawn_protection_maxdistance_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_spawn_protection_maxdistance_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_spawn_protection_maxdistance_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_spawn_protection_maxdistance_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_spawn_protection_maxdistance_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_spawn_protection_maxdistance_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_spawn_protection_maxdistance_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_spawn_protection_maxdistance_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_spawn_protection_maxdistance_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_spawn_protection_maxdistance_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_spawn_protection_maxdistance_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_spawn_protection_maxdistance_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_spawn_protection_maxdistance_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_spawn_protection_maxdistance_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_spawn_protection_maxdistance_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_spawn_protection_maxdistance_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_spawn_protection_maxdistance_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_spawn_protection_maxdistance_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_spawn_protection_maxdistance_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_spawn_protection_maxdistance_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_spawn_protection_maxdistance_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_spawn_protection_maxdistance_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_spawn_protection_maxdistance_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_spawn_protection_maxdistance_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_spawn_protection_maxdistance_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_spawn_protection_maxdistance_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_spawn_protection_maxdistance_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_spawn_protection_maxdistance_war _null"

#define SETA_SCR_SPAWN_PROTECTION_PUNISHMENT_TIME \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_spawn_protection_punishment_time_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_spawn_protection_punishment_time_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_spawn_protection_punishment_time_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_spawn_protection_punishment_time_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_spawn_protection_punishment_time_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_spawn_protection_punishment_time_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_spawn_protection_punishment_time_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_spawn_protection_punishment_time_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_spawn_protection_punishment_time_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_spawn_protection_punishment_time_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_spawn_protection_punishment_time_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_spawn_protection_punishment_time_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_spawn_protection_punishment_time_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_spawn_protection_punishment_time_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_spawn_protection_punishment_time_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_spawn_protection_punishment_time_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_spawn_protection_punishment_time_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_spawn_protection_punishment_time_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_spawn_protection_punishment_time_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_spawn_protection_punishment_time_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_spawn_protection_punishment_time_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_spawn_protection_punishment_time_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_spawn_protection_punishment_time_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_spawn_protection_punishment_time_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_spawn_protection_punishment_time_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_spawn_protection_punishment_time_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_spawn_protection_punishment_time_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_spawn_protection_punishment_time_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_spawn_protection_punishment_time_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_spawn_protection_punishment_time_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_spawn_protection_punishment_time_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_spawn_protection_punishment_time_war _null"

#define SETA_SCR_ANTI_CAMPING_ENABLE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_anti_camping_enable_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_anti_camping_enable_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_anti_camping_enable_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_anti_camping_enable_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_anti_camping_enable_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_anti_camping_enable_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_anti_camping_enable_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_anti_camping_enable_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_anti_camping_enable_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_anti_camping_enable_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_anti_camping_enable_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_anti_camping_enable_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_anti_camping_enable_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_anti_camping_enable_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_anti_camping_enable_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_anti_camping_enable_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_anti_camping_enable_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_anti_camping_enable_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_anti_camping_enable_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_anti_camping_enable_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt oitc "set tmp_gt_oitc 1" \
  execNowOnDvarStringValue scr_anti_camping_enable_oitc _null "toggle tmp_gt_oitc 0 1 2" \
  execNowOnDvarStringValue tmp_gt_oitc 2 "seta scr_anti_camping_enable_oitc _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_anti_camping_enable_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_anti_camping_enable_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_anti_camping_enable_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_anti_camping_enable_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_anti_camping_enable_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_anti_camping_enable_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_anti_camping_enable_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_anti_camping_enable_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_anti_camping_enable_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_anti_camping_enable_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_anti_camping_enable_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_anti_camping_enable_war _null"

#define SETA_SCR_ANTI_CAMPING_SHOW \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_anti_camping_show_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_anti_camping_show_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_anti_camping_show_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_anti_camping_show_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_anti_camping_show_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_anti_camping_show_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_anti_camping_show_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_anti_camping_show_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_anti_camping_show_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_anti_camping_show_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_anti_camping_show_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_anti_camping_show_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_anti_camping_show_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_anti_camping_show_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_anti_camping_show_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_anti_camping_show_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_anti_camping_show_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_anti_camping_show_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_anti_camping_show_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_anti_camping_show_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt oitc "set tmp_gt_oitc 1" \
  execNowOnDvarStringValue scr_anti_camping_show_oitc _null "toggle tmp_gt_oitc 0 1 2" \
  execNowOnDvarStringValue tmp_gt_oitc 2 "seta scr_anti_camping_show_oitc _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_anti_camping_show_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_anti_camping_show_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_anti_camping_show_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_anti_camping_show_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_anti_camping_show_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_anti_camping_show_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_anti_camping_show_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_anti_camping_show_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_anti_camping_show_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_anti_camping_show_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_anti_camping_show_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_anti_camping_show_war _null"

#define SETA_SCR_ANTI_CAMPING_MESSAGE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_anti_camping_message_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_anti_camping_message_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_anti_camping_message_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_anti_camping_message_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_anti_camping_message_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_anti_camping_message_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_anti_camping_message_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_anti_camping_message_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_anti_camping_message_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_anti_camping_message_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_anti_camping_message_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_anti_camping_message_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_anti_camping_message_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_anti_camping_message_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_anti_camping_message_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_anti_camping_message_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_anti_camping_message_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_anti_camping_message_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_anti_camping_message_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_anti_camping_message_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt oitc "set tmp_gt_oitc 1" \
  execNowOnDvarStringValue scr_anti_camping_message_oitc _null "toggle tmp_gt_oitc 0 1 2" \
  execNowOnDvarStringValue tmp_gt_oitc 2 "seta scr_anti_camping_message_oitc _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_anti_camping_message_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_anti_camping_message_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_anti_camping_message_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_anti_camping_message_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_anti_camping_message_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_anti_camping_message_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_anti_camping_message_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_anti_camping_message_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_anti_camping_message_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_anti_camping_message_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_anti_camping_message_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_anti_camping_message_war _null"

#define SETA_SCR_ANTI_CAMPING_DISTANCE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_anti_camping_distance_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_anti_camping_distance_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_anti_camping_distance_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_anti_camping_distance_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_anti_camping_distance_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_anti_camping_distance_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_anti_camping_distance_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_anti_camping_distance_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_anti_camping_distance_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_anti_camping_distance_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_anti_camping_distance_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_anti_camping_distance_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_anti_camping_distance_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_anti_camping_distance_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_anti_camping_distance_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_anti_camping_distance_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_anti_camping_distance_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_anti_camping_distance_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_anti_camping_distance_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_anti_camping_distance_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt oitc "set tmp_gt_oitc 1" \
  execNowOnDvarStringValue scr_anti_camping_distance_oitc _null "toggle tmp_gt_oitc 0 1 2" \
  execNowOnDvarStringValue tmp_gt_oitc 2 "seta scr_anti_camping_distance_oitc _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_anti_camping_distance_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_anti_camping_distance_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_anti_camping_distance_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_anti_camping_distance_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_anti_camping_distance_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_anti_camping_distance_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_anti_camping_distance_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_anti_camping_distance_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_anti_camping_distance_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_anti_camping_distance_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_anti_camping_distance_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_anti_camping_distance_war _null"

#define SETA_SCR_ANTI_CAMPING_TIME \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_anti_camping_time_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_anti_camping_time_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_anti_camping_time_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_anti_camping_time_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_anti_camping_time_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_anti_camping_time_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_anti_camping_time_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_anti_camping_time_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_anti_camping_time_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_anti_camping_time_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_anti_camping_time_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_anti_camping_time_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_anti_camping_time_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_anti_camping_time_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_anti_camping_time_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_anti_camping_time_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_anti_camping_time_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_anti_camping_time_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_anti_camping_time_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_anti_camping_time_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt oitc "set tmp_gt_oitc 1" \
  execNowOnDvarStringValue scr_anti_camping_time_oitc _null "toggle tmp_gt_oitc 0 1 2" \
  execNowOnDvarStringValue tmp_gt_oitc 2 "seta scr_anti_camping_time_oitc _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_anti_camping_time_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_anti_camping_time_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_anti_camping_time_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_anti_camping_time_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_anti_camping_time_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_anti_camping_time_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_anti_camping_time_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_anti_camping_time_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_anti_camping_time_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_anti_camping_time_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_anti_camping_time_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_anti_camping_time_war _null"

#define SETA_SCR_ANTI_BUNNY_HOPPING_ENABLE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_anti_bunny_hopping_enable_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_anti_bunny_hopping_enable_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_anti_bunny_hopping_enable_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_anti_bunny_hopping_enable_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_anti_bunny_hopping_enable_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_anti_bunny_hopping_enable_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_anti_bunny_hopping_enable_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_anti_bunny_hopping_enable_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_anti_bunny_hopping_enable_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_anti_bunny_hopping_enable_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_anti_bunny_hopping_enable_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_anti_bunny_hopping_enable_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_anti_bunny_hopping_enable_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_anti_bunny_hopping_enable_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_anti_bunny_hopping_enable_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_anti_bunny_hopping_enable_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_anti_bunny_hopping_enable_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_anti_bunny_hopping_enable_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_anti_bunny_hopping_enable_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_anti_bunny_hopping_enable_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt oitc "set tmp_gt_oitc 1" \
  execNowOnDvarStringValue scr_anti_bunny_hopping_enable_oitc _null "toggle tmp_gt_oitc 0 1 2" \
  execNowOnDvarStringValue tmp_gt_oitc 2 "seta scr_anti_bunny_hopping_enable_oitc _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_anti_bunny_hopping_enable_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_anti_bunny_hopping_enable_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_anti_bunny_hopping_enable_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_anti_bunny_hopping_enable_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_anti_bunny_hopping_enable_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_anti_bunny_hopping_enable_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_anti_bunny_hopping_enable_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_anti_bunny_hopping_enable_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_anti_bunny_hopping_enable_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_anti_bunny_hopping_enable_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_anti_bunny_hopping_enable_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_anti_bunny_hopping_enable_war _null"

#define SETA_SCR_ANTI_DOLPHIN_DIVE_ENABLE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_anti_dolphin_dive_enable_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_anti_dolphin_dive_enable_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_anti_dolphin_dive_enable_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_anti_dolphin_dive_enable_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_anti_dolphin_dive_enable_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_anti_dolphin_dive_enable_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_anti_dolphin_dive_enable_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_anti_dolphin_dive_enable_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_anti_dolphin_dive_enable_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_anti_dolphin_dive_enable_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_anti_dolphin_dive_enable_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_anti_dolphin_dive_enable_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_anti_dolphin_dive_enable_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_anti_dolphin_dive_enable_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_anti_dolphin_dive_enable_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_anti_dolphin_dive_enable_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_anti_dolphin_dive_enable_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_anti_dolphin_dive_enable_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_anti_dolphin_dive_enable_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_anti_dolphin_dive_enable_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt oitc "set tmp_gt_oitc 1" \
  execNowOnDvarStringValue scr_anti_dolphin_dive_enable_oitc _null "toggle tmp_gt_oitc 0 1 2" \
  execNowOnDvarStringValue tmp_gt_oitc 2 "seta scr_anti_dolphin_dive_enable_oitc _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_anti_dolphin_dive_enable_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_anti_dolphin_dive_enable_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_anti_dolphin_dive_enable_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_anti_dolphin_dive_enable_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_anti_dolphin_dive_enable_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_anti_dolphin_dive_enable_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_anti_dolphin_dive_enable_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_anti_dolphin_dive_enable_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_anti_dolphin_dive_enable_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_anti_dolphin_dive_enable_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_anti_dolphin_dive_enable_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_anti_dolphin_dive_enable_war _null"

#define SETA_SCR_RNG_ENABLED \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_rng_enabled_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_rng_enabled_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_rng_enabled_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_rng_enabled_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_rng_enabled_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_rng_enabled_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_rng_enabled_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_rng_enabled_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_rng_enabled_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_rng_enabled_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_rng_enabled_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_rng_enabled_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_rng_enabled_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_rng_enabled_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_rng_enabled_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_rng_enabled_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_rng_enabled_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_rng_enabled_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_rng_enabled_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_rng_enabled_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt oitc "set tmp_gt_oitc 1" \
  execNowOnDvarStringValue scr_rng_enabled_oitc _null "toggle tmp_gt_oitc 0 1 2" \
  execNowOnDvarStringValue tmp_gt_oitc 2 "seta scr_rng_enabled_oitc _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_rng_enabled_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_rng_enabled_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_rng_enabled_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_rng_enabled_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_rng_enabled_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_rng_enabled_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_rng_enabled_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_rng_enabled_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_rng_enabled_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_rng_enabled_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_rng_enabled_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_rng_enabled_war _null"

#define SETA_SCR_RNG_DISTANCE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_rng_distance_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_rng_distance_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_rng_distance_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_rng_distance_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_rng_distance_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_rng_distance_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_rng_distance_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_rng_distance_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_rng_distance_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_rng_distance_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_rng_distance_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_rng_distance_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_rng_distance_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_rng_distance_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_rng_distance_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_rng_distance_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_rng_distance_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_rng_distance_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_rng_distance_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_rng_distance_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt oitc "set tmp_gt_oitc 1" \
  execNowOnDvarStringValue scr_rng_distance_oitc _null "toggle tmp_gt_oitc 0 1 2" \
  execNowOnDvarStringValue tmp_gt_oitc 2 "seta scr_rng_distance_oitc _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_rng_distance_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_rng_distance_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_rng_distance_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_rng_distance_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_rng_distance_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_rng_distance_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_rng_distance_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_rng_distance_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_rng_distance_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_rng_distance_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_rng_distance_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_rng_distance_war _null"

#define SETA_SCR_RNG_DAMAGE_CLOSER \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_rng_damage_closer_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_rng_damage_closer_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_rng_damage_closer_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_rng_damage_closer_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_rng_damage_closer_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_rng_damage_closer_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_rng_damage_closer_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_rng_damage_closer_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_rng_damage_closer_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_rng_damage_closer_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_rng_damage_closer_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_rng_damage_closer_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_rng_damage_closer_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_rng_damage_closer_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_rng_damage_closer_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_rng_damage_closer_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_rng_damage_closer_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_rng_damage_closer_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_rng_damage_closer_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_rng_damage_closer_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt oitc "set tmp_gt_oitc 1" \
  execNowOnDvarStringValue scr_rng_damage_closer_oitc _null "toggle tmp_gt_oitc 0 1 2" \
  execNowOnDvarStringValue tmp_gt_oitc 2 "seta scr_rng_damage_closer_oitc _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_rng_damage_closer_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_rng_damage_closer_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_rng_damage_closer_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_rng_damage_closer_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_rng_damage_closer_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_rng_damage_closer_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_rng_damage_closer_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_rng_damage_closer_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_rng_damage_closer_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_rng_damage_closer_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_rng_damage_closer_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_rng_damage_closer_war _null"

#define SETA_SCR_RNG_DAMAGE_LONGER \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_rng_damage_longer_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_rng_damage_longer_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_rng_damage_longer_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_rng_damage_longer_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_rng_damage_longer_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_rng_damage_longer_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_rng_damage_longer_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_rng_damage_longer_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_rng_damage_longer_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_rng_damage_longer_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_rng_damage_longer_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_rng_damage_longer_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_rng_damage_longer_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_rng_damage_longer_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_rng_damage_longer_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_rng_damage_longer_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_rng_damage_longer_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_rng_damage_longer_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_rng_damage_longer_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_rng_damage_longer_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt oitc "set tmp_gt_oitc 1" \
  execNowOnDvarStringValue scr_rng_damage_longer_oitc _null "toggle tmp_gt_oitc 0 1 2" \
  execNowOnDvarStringValue tmp_gt_oitc 2 "seta scr_rng_damage_longer_oitc _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_rng_damage_longer_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_rng_damage_longer_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_rng_damage_longer_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_rng_damage_longer_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_rng_damage_longer_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_rng_damage_longer_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_rng_damage_longer_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_rng_damage_longer_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_rng_damage_longer_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_rng_damage_longer_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_rng_damage_longer_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_rng_damage_longer_war _null"