#ifdef FILLMENUDVARS
#undef FILLMENUDVARS
#endif

#define FILLMENUDVARS     exec "exec menudvars/hardpoints/l/_def.cfg"\
    execOnDvarStringValue menu_cfg_gt ass "exec menudvars/hardpoints/l/ass.cfg"\
    execOnDvarStringValue menu_cfg_gt bel "exec menudvars/hardpoints/l/bel.cfg"\
    execOnDvarStringValue menu_cfg_gt ch "exec menudvars/hardpoints/l/ch.cfg"\
    execOnDvarStringValue menu_cfg_gt ctf "exec menudvars/hardpoints/l/ctf.cfg"\
    execOnDvarStringValue menu_cfg_gt dm "exec menudvars/hardpoints/l/dm.cfg"\
    execOnDvarStringValue menu_cfg_gt dom "exec menudvars/hardpoints/l/dom.cfg"\
    execOnDvarStringValue menu_cfg_gt ftag "exec menudvars/hardpoints/l/ftag.cfg"\
    execOnDvarStringValue menu_cfg_gt gg "exec menudvars/hardpoints/l/gg.cfg"\
    execOnDvarStringValue menu_cfg_gt gr "exec menudvars/hardpoints/l/gr.cfg"\
    execOnDvarStringValue menu_cfg_gt koth "exec menudvars/hardpoints/l/koth.cfg"\
    execOnDvarStringValue menu_cfg_gt re "exec menudvars/hardpoints/l/re.cfg"\
    execOnDvarStringValue menu_cfg_gt sab "exec menudvars/hardpoints/l/sab.cfg"\
    execOnDvarStringValue menu_cfg_gt sd "exec menudvars/hardpoints/l/sd.cfg"\
    execOnDvarStringValue menu_cfg_gt ss "exec menudvars/hardpoints/l/ss.cfg"\
    execOnDvarStringValue menu_cfg_gt tgr "exec menudvars/hardpoints/l/tgr.cfg"\
    execOnDvarStringValue menu_cfg_gt war "exec menudvars/hardpoints/l/war.cfg"

#ifdef SAVEMENUDVARS
#undef SAVEMENUDVARS
#endif

#define SAVEMENUDVARS     execOnDvarStringValue menu_cfg_gt _def "exec menudvars/hardpoints/s/_def.cfg"\
    execOnDvarStringValue menu_cfg_gt ass "exec menudvars/hardpoints/s/ass.cfg"\
    execOnDvarStringValue menu_cfg_gt bel "exec menudvars/hardpoints/s/bel.cfg"\
    execOnDvarStringValue menu_cfg_gt ch "exec menudvars/hardpoints/s/ch.cfg"\
    execOnDvarStringValue menu_cfg_gt ctf "exec menudvars/hardpoints/s/ctf.cfg"\
    execOnDvarStringValue menu_cfg_gt dm "exec menudvars/hardpoints/s/dm.cfg"\
    execOnDvarStringValue menu_cfg_gt dom "exec menudvars/hardpoints/s/dom.cfg"\
    execOnDvarStringValue menu_cfg_gt ftag "exec menudvars/hardpoints/s/ftag.cfg"\
    execOnDvarStringValue menu_cfg_gt gg "exec menudvars/hardpoints/s/gg.cfg"\
    execOnDvarStringValue menu_cfg_gt gr "exec menudvars/hardpoints/s/gr.cfg"\
    execOnDvarStringValue menu_cfg_gt koth "exec menudvars/hardpoints/s/koth.cfg"\
    execOnDvarStringValue menu_cfg_gt re "exec menudvars/hardpoints/s/re.cfg"\
    execOnDvarStringValue menu_cfg_gt sab "exec menudvars/hardpoints/s/sab.cfg"\
    execOnDvarStringValue menu_cfg_gt sd "exec menudvars/hardpoints/s/sd.cfg"\
    execOnDvarStringValue menu_cfg_gt ss "exec menudvars/hardpoints/s/ss.cfg"\
    execOnDvarStringValue menu_cfg_gt tgr "exec menudvars/hardpoints/s/tgr.cfg"\
    execOnDvarStringValue menu_cfg_gt war "exec menudvars/hardpoints/s/war.cfg"


#define SET_SCR_GAME_HARDPOINTS \
  execOnDvarStringValue menu_cfg_gt ass "set scr_game_hardpoints_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_game_hardpoints_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_game_hardpoints_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_game_hardpoints_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_game_hardpoints_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_game_hardpoints_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_game_hardpoints_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_game_hardpoints_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_game_hardpoints_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_game_hardpoints_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_game_hardpoints_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_game_hardpoints_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_game_hardpoints_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_game_hardpoints_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_game_hardpoints_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_game_hardpoints_war _null"

#define SET_SCR_HARDPOINT_SHOW_REMINDER \
  execOnDvarStringValue menu_cfg_gt ass "set scr_hardpoint_show_reminder_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_hardpoint_show_reminder_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_hardpoint_show_reminder_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_hardpoint_show_reminder_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_hardpoint_show_reminder_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_hardpoint_show_reminder_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_hardpoint_show_reminder_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_hardpoint_show_reminder_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_hardpoint_show_reminder_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_hardpoint_show_reminder_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_hardpoint_show_reminder_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_hardpoint_show_reminder_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_hardpoint_show_reminder_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_hardpoint_show_reminder_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_hardpoint_show_reminder_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_hardpoint_show_reminder_war _null"

#define SET_SCR_REMOVE_HARDPOINT_ON_DEATH \
  execOnDvarStringValue menu_cfg_gt ass "set scr_remove_hardpoint_on_death_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_remove_hardpoint_on_death_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_remove_hardpoint_on_death_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_remove_hardpoint_on_death_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_remove_hardpoint_on_death_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_remove_hardpoint_on_death_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_remove_hardpoint_on_death_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_remove_hardpoint_on_death_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_remove_hardpoint_on_death_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_remove_hardpoint_on_death_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_remove_hardpoint_on_death_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_remove_hardpoint_on_death_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_remove_hardpoint_on_death_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_remove_hardpoint_on_death_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_remove_hardpoint_on_death_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_remove_hardpoint_on_death_war _null"

#define SET_SCR_GAME_HARDPOINTS_CYCLE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_game_hardpoints_cycle_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_game_hardpoints_cycle_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_game_hardpoints_cycle_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_game_hardpoints_cycle_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_game_hardpoints_cycle_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_game_hardpoints_cycle_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_game_hardpoints_cycle_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_game_hardpoints_cycle_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_game_hardpoints_cycle_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_game_hardpoints_cycle_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_game_hardpoints_cycle_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_game_hardpoints_cycle_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_game_hardpoints_cycle_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_game_hardpoints_cycle_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_game_hardpoints_cycle_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_game_hardpoints_cycle_war _null"

#define SET_SCR_GAME_HARDPOINTS_MODE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_game_hardpoints_mode_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_game_hardpoints_mode_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_game_hardpoints_mode_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_game_hardpoints_mode_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_game_hardpoints_mode_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_game_hardpoints_mode_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_game_hardpoints_mode_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_game_hardpoints_mode_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_game_hardpoints_mode_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_game_hardpoints_mode_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_game_hardpoints_mode_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_game_hardpoints_mode_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_game_hardpoints_mode_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_game_hardpoints_mode_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_game_hardpoints_mode_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_game_hardpoints_mode_war _null"

#define SET_SCR_ANNOUNCE_KILLSTREAK \
  execOnDvarStringValue menu_cfg_gt ass "set scr_announce_killstreak_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_announce_killstreak_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_announce_killstreak_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_announce_killstreak_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_announce_killstreak_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_announce_killstreak_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_announce_killstreak_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_announce_killstreak_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_announce_killstreak_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_announce_killstreak_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_announce_killstreak_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_announce_killstreak_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_announce_killstreak_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_announce_killstreak_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_announce_killstreak_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_announce_killstreak_war _null"

#define SET_SCR_HARDPOINT_ALLOW_UAV \
  execOnDvarStringValue menu_cfg_gt ass "set scr_hardpoint_allow_uav_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_hardpoint_allow_uav_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_hardpoint_allow_uav_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_hardpoint_allow_uav_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_hardpoint_allow_uav_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_hardpoint_allow_uav_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_hardpoint_allow_uav_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_hardpoint_allow_uav_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_hardpoint_allow_uav_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_hardpoint_allow_uav_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_hardpoint_allow_uav_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_hardpoint_allow_uav_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_hardpoint_allow_uav_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_hardpoint_allow_uav_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_hardpoint_allow_uav_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_hardpoint_allow_uav_war _null"

#define SET_SCR_GAME_FORCEUAV \
  execOnDvarStringValue menu_cfg_gt ass "set scr_game_forceuav_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_game_forceuav_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_game_forceuav_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_game_forceuav_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_game_forceuav_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_game_forceuav_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_game_forceuav_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_game_forceuav_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_game_forceuav_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_game_forceuav_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_game_forceuav_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_game_forceuav_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_game_forceuav_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_game_forceuav_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_game_forceuav_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_game_forceuav_war _null"

#define SET_SCR_HARDPOINT_UAV_STREAK \
  execOnDvarStringValue menu_cfg_gt ass "set scr_hardpoint_uav_streak_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_hardpoint_uav_streak_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_hardpoint_uav_streak_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_hardpoint_uav_streak_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_hardpoint_uav_streak_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_hardpoint_uav_streak_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_hardpoint_uav_streak_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_hardpoint_uav_streak_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_hardpoint_uav_streak_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_hardpoint_uav_streak_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_hardpoint_uav_streak_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_hardpoint_uav_streak_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_hardpoint_uav_streak_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_hardpoint_uav_streak_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_hardpoint_uav_streak_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_hardpoint_uav_streak_war _null"

#define SET_SCR_UAV_VIEW_TIME \
  execOnDvarStringValue menu_cfg_gt ass "set scr_uav_view_time_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_uav_view_time_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_uav_view_time_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_uav_view_time_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_uav_view_time_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_uav_view_time_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_uav_view_time_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_uav_view_time_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_uav_view_time_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_uav_view_time_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_uav_view_time_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_uav_view_time_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_uav_view_time_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_uav_view_time_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_uav_view_time_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_uav_view_time_war _null"

#define SET_SCR_ANNOUNCE_ENEMY_UAV_ONLINE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_announce_enemy_uav_online_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_announce_enemy_uav_online_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_announce_enemy_uav_online_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_announce_enemy_uav_online_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_announce_enemy_uav_online_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_announce_enemy_uav_online_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_announce_enemy_uav_online_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_announce_enemy_uav_online_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_announce_enemy_uav_online_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_announce_enemy_uav_online_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_announce_enemy_uav_online_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_announce_enemy_uav_online_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_announce_enemy_uav_online_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_announce_enemy_uav_online_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_announce_enemy_uav_online_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_announce_enemy_uav_online_war _null"

#define SET_SCR_UAV_SHOW_HARDPOINTS \
  execOnDvarStringValue menu_cfg_gt ass "set scr_uav_show_hardpoints_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_uav_show_hardpoints_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_uav_show_hardpoints_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_uav_show_hardpoints_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_uav_show_hardpoints_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_uav_show_hardpoints_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_uav_show_hardpoints_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_uav_show_hardpoints_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_uav_show_hardpoints_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_uav_show_hardpoints_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_uav_show_hardpoints_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_uav_show_hardpoints_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_uav_show_hardpoints_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_uav_show_hardpoints_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_uav_show_hardpoints_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_uav_show_hardpoints_war _null"

#define SET_SCR_HARDPOINT_ALLOW_AIRSTRIKE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_hardpoint_allow_airstrike_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_hardpoint_allow_airstrike_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_hardpoint_allow_airstrike_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_hardpoint_allow_airstrike_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_hardpoint_allow_airstrike_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_hardpoint_allow_airstrike_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_hardpoint_allow_airstrike_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_hardpoint_allow_airstrike_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_hardpoint_allow_airstrike_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_hardpoint_allow_airstrike_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_hardpoint_allow_airstrike_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_hardpoint_allow_airstrike_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_hardpoint_allow_airstrike_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_hardpoint_allow_airstrike_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_hardpoint_allow_airstrike_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_hardpoint_allow_airstrike_war _null"

#define SET_SCR_HARDPOINT_AIRSTRIKE_STREAK \
  execOnDvarStringValue menu_cfg_gt ass "set scr_hardpoint_airstrike_streak_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_hardpoint_airstrike_streak_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_hardpoint_airstrike_streak_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_hardpoint_airstrike_streak_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_hardpoint_airstrike_streak_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_hardpoint_airstrike_streak_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_hardpoint_airstrike_streak_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_hardpoint_airstrike_streak_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_hardpoint_airstrike_streak_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_hardpoint_airstrike_streak_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_hardpoint_airstrike_streak_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_hardpoint_airstrike_streak_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_hardpoint_airstrike_streak_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_hardpoint_airstrike_streak_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_hardpoint_airstrike_streak_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_hardpoint_airstrike_streak_war _null"

#define SET_SCR_AIRSTRIKE_HARDPOINT_INTERVAL \
  execOnDvarStringValue menu_cfg_gt ass "set scr_airstrike_hardpoint_interval_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_airstrike_hardpoint_interval_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_airstrike_hardpoint_interval_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_airstrike_hardpoint_interval_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_airstrike_hardpoint_interval_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_airstrike_hardpoint_interval_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_airstrike_hardpoint_interval_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_airstrike_hardpoint_interval_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_airstrike_hardpoint_interval_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_airstrike_hardpoint_interval_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_airstrike_hardpoint_interval_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_airstrike_hardpoint_interval_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_airstrike_hardpoint_interval_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_airstrike_hardpoint_interval_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_airstrike_hardpoint_interval_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_airstrike_hardpoint_interval_war _null"

#define SET_SCR_ANNOUNCE_ENEMY_AIRSTRIKE_INBOUND \
  execOnDvarStringValue menu_cfg_gt ass "set scr_announce_enemy_airstrike_inbound_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_announce_enemy_airstrike_inbound_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_announce_enemy_airstrike_inbound_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_announce_enemy_airstrike_inbound_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_announce_enemy_airstrike_inbound_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_announce_enemy_airstrike_inbound_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_announce_enemy_airstrike_inbound_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_announce_enemy_airstrike_inbound_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_announce_enemy_airstrike_inbound_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_announce_enemy_airstrike_inbound_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_announce_enemy_airstrike_inbound_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_announce_enemy_airstrike_inbound_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_announce_enemy_airstrike_inbound_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_announce_enemy_airstrike_inbound_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_announce_enemy_airstrike_inbound_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_announce_enemy_airstrike_inbound_war _null"

#define SET_SCR_AIRSTRIKE_ADD_KILLS \
  execOnDvarStringValue menu_cfg_gt ass "set scr_airstrike_add_kills_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_airstrike_add_kills_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_airstrike_add_kills_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_airstrike_add_kills_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_airstrike_add_kills_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_airstrike_add_kills_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_airstrike_add_kills_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_airstrike_add_kills_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_airstrike_add_kills_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_airstrike_add_kills_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_airstrike_add_kills_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_airstrike_add_kills_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_airstrike_add_kills_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_airstrike_add_kills_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_airstrike_add_kills_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_airstrike_add_kills_war _null"

#define SET_SCR_AIRSTRIKE_KILLS_TOWARD_STREAK \
  execOnDvarStringValue menu_cfg_gt ass "set scr_airstrike_kills_toward_streak_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_airstrike_kills_toward_streak_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_airstrike_kills_toward_streak_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_airstrike_kills_toward_streak_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_airstrike_kills_toward_streak_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_airstrike_kills_toward_streak_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_airstrike_kills_toward_streak_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_airstrike_kills_toward_streak_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_airstrike_kills_toward_streak_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_airstrike_kills_toward_streak_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_airstrike_kills_toward_streak_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_airstrike_kills_toward_streak_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_airstrike_kills_toward_streak_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_airstrike_kills_toward_streak_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_airstrike_kills_toward_streak_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_airstrike_kills_toward_streak_war _null"

#define SET_SCR_AIRSTRIKE_DELAY \
  execOnDvarStringValue menu_cfg_gt ass "set scr_airstrike_delay_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_airstrike_delay_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_airstrike_delay_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_airstrike_delay_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_airstrike_delay_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_airstrike_delay_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_airstrike_delay_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_airstrike_delay_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_airstrike_delay_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_airstrike_delay_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_airstrike_delay_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_airstrike_delay_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_airstrike_delay_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_airstrike_delay_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_airstrike_delay_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_airstrike_delay_war _null"

#define SET_SCR_HARDPOINT_ALLOW_HELICOPTER \
  execOnDvarStringValue menu_cfg_gt ass "set scr_hardpoint_allow_helicopter_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_hardpoint_allow_helicopter_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_hardpoint_allow_helicopter_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_hardpoint_allow_helicopter_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_hardpoint_allow_helicopter_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_hardpoint_allow_helicopter_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_hardpoint_allow_helicopter_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_hardpoint_allow_helicopter_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_hardpoint_allow_helicopter_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_hardpoint_allow_helicopter_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_hardpoint_allow_helicopter_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_hardpoint_allow_helicopter_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_hardpoint_allow_helicopter_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_hardpoint_allow_helicopter_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_hardpoint_allow_helicopter_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_hardpoint_allow_helicopter_war _null"

#define SET_SCR_HARDPOINT_HELICOPTER_STREAK \
  execOnDvarStringValue menu_cfg_gt ass "set scr_hardpoint_helicopter_streak_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_hardpoint_helicopter_streak_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_hardpoint_helicopter_streak_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_hardpoint_helicopter_streak_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_hardpoint_helicopter_streak_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_hardpoint_helicopter_streak_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_hardpoint_helicopter_streak_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_hardpoint_helicopter_streak_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_hardpoint_helicopter_streak_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_hardpoint_helicopter_streak_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_hardpoint_helicopter_streak_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_hardpoint_helicopter_streak_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_hardpoint_helicopter_streak_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_hardpoint_helicopter_streak_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_hardpoint_helicopter_streak_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_hardpoint_helicopter_streak_war _null"

#define SET_SCR_HELI_HARDPOINT_INTERVAL \
  execOnDvarStringValue menu_cfg_gt ass "set scr_heli_hardpoint_interval_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_heli_hardpoint_interval_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_heli_hardpoint_interval_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_heli_hardpoint_interval_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_heli_hardpoint_interval_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_heli_hardpoint_interval_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_heli_hardpoint_interval_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_heli_hardpoint_interval_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_heli_hardpoint_interval_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_heli_hardpoint_interval_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_heli_hardpoint_interval_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_heli_hardpoint_interval_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_heli_hardpoint_interval_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_heli_hardpoint_interval_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_heli_hardpoint_interval_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_heli_hardpoint_interval_war _null"

#define SET_SCR_ANNOUNCE_ENEMY_HELI_INBOUND \
  execOnDvarStringValue menu_cfg_gt ass "set scr_announce_enemy_heli_inbound_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_announce_enemy_heli_inbound_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_announce_enemy_heli_inbound_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_announce_enemy_heli_inbound_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_announce_enemy_heli_inbound_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_announce_enemy_heli_inbound_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_announce_enemy_heli_inbound_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_announce_enemy_heli_inbound_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_announce_enemy_heli_inbound_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_announce_enemy_heli_inbound_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_announce_enemy_heli_inbound_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_announce_enemy_heli_inbound_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_announce_enemy_heli_inbound_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_announce_enemy_heli_inbound_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_announce_enemy_heli_inbound_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_announce_enemy_heli_inbound_war _null"

#define SET_SCR_HELICOPTER_ADD_KILLS \
  execOnDvarStringValue menu_cfg_gt ass "set scr_helicopter_add_kills_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_helicopter_add_kills_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_helicopter_add_kills_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_helicopter_add_kills_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_helicopter_add_kills_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_helicopter_add_kills_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_helicopter_add_kills_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_helicopter_add_kills_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_helicopter_add_kills_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_helicopter_add_kills_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_helicopter_add_kills_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_helicopter_add_kills_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_helicopter_add_kills_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_helicopter_add_kills_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_helicopter_add_kills_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_helicopter_add_kills_war _null"

#define SET_SCR_HELICOPTER_KILLS_TOWARD_STREAK \
  execOnDvarStringValue menu_cfg_gt ass "set scr_helicopter_kills_toward_streak_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_helicopter_kills_toward_streak_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_helicopter_kills_toward_streak_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_helicopter_kills_toward_streak_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_helicopter_kills_toward_streak_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_helicopter_kills_toward_streak_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_helicopter_kills_toward_streak_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_helicopter_kills_toward_streak_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_helicopter_kills_toward_streak_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_helicopter_kills_toward_streak_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_helicopter_kills_toward_streak_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_helicopter_kills_toward_streak_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_helicopter_kills_toward_streak_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_helicopter_kills_toward_streak_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_helicopter_kills_toward_streak_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_helicopter_kills_toward_streak_war _null"

#define SET_SCR_HELICOPTER_DELAY \
  execOnDvarStringValue menu_cfg_gt ass "set scr_helicopter_delay_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_helicopter_delay_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_helicopter_delay_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_helicopter_delay_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_helicopter_delay_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_helicopter_delay_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_helicopter_delay_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_helicopter_delay_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_helicopter_delay_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_helicopter_delay_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_helicopter_delay_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_helicopter_delay_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_helicopter_delay_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_helicopter_delay_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_helicopter_delay_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_helicopter_delay_war _null"

#define SET_SCR_HELI_MAXHEALTH \
  execOnDvarStringValue menu_cfg_gt ass "set scr_heli_maxhealth_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_heli_maxhealth_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_heli_maxhealth_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_heli_maxhealth_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_heli_maxhealth_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_heli_maxhealth_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_heli_maxhealth_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_heli_maxhealth_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_heli_maxhealth_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_heli_maxhealth_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_heli_maxhealth_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_heli_maxhealth_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_heli_maxhealth_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_heli_maxhealth_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_heli_maxhealth_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_heli_maxhealth_war _null"

#define SET_SCR_HELI_TARGET_RECOGNITION \
  execOnDvarStringValue menu_cfg_gt ass "set scr_heli_target_recognition_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_heli_target_recognition_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_heli_target_recognition_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_heli_target_recognition_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_heli_target_recognition_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_heli_target_recognition_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_heli_target_recognition_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_heli_target_recognition_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_heli_target_recognition_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_heli_target_recognition_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_heli_target_recognition_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_heli_target_recognition_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_heli_target_recognition_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_heli_target_recognition_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_heli_target_recognition_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_heli_target_recognition_war _null"


// Setas
#define SETA_SCR_GAME_HARDPOINTS \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_game_hardpoints_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_game_hardpoints_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_game_hardpoints_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_game_hardpoints_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_game_hardpoints_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_game_hardpoints_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_game_hardpoints_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_game_hardpoints_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_game_hardpoints_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_game_hardpoints_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_game_hardpoints_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_game_hardpoints_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_game_hardpoints_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_game_hardpoints_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_game_hardpoints_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_game_hardpoints_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_game_hardpoints_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_game_hardpoints_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_game_hardpoints_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_game_hardpoints_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_game_hardpoints_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_game_hardpoints_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_game_hardpoints_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_game_hardpoints_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_game_hardpoints_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_game_hardpoints_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_game_hardpoints_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_game_hardpoints_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_game_hardpoints_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_game_hardpoints_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_game_hardpoints_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_game_hardpoints_war _null"

#define SETA_SCR_HARDPOINT_SHOW_REMINDER \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_hardpoint_show_reminder_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_hardpoint_show_reminder_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_hardpoint_show_reminder_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_hardpoint_show_reminder_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_hardpoint_show_reminder_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_hardpoint_show_reminder_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_hardpoint_show_reminder_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_hardpoint_show_reminder_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_hardpoint_show_reminder_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_hardpoint_show_reminder_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_hardpoint_show_reminder_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_hardpoint_show_reminder_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_hardpoint_show_reminder_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_hardpoint_show_reminder_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_hardpoint_show_reminder_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_hardpoint_show_reminder_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_hardpoint_show_reminder_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_hardpoint_show_reminder_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_hardpoint_show_reminder_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_hardpoint_show_reminder_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_hardpoint_show_reminder_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_hardpoint_show_reminder_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_hardpoint_show_reminder_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_hardpoint_show_reminder_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_hardpoint_show_reminder_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_hardpoint_show_reminder_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_hardpoint_show_reminder_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_hardpoint_show_reminder_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_hardpoint_show_reminder_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_hardpoint_show_reminder_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_hardpoint_show_reminder_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_hardpoint_show_reminder_war _null"

#define SETA_SCR_REMOVE_HARDPOINT_ON_DEATH \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_remove_hardpoint_on_death_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_remove_hardpoint_on_death_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_remove_hardpoint_on_death_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_remove_hardpoint_on_death_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_remove_hardpoint_on_death_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_remove_hardpoint_on_death_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_remove_hardpoint_on_death_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_remove_hardpoint_on_death_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_remove_hardpoint_on_death_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_remove_hardpoint_on_death_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_remove_hardpoint_on_death_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_remove_hardpoint_on_death_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_remove_hardpoint_on_death_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_remove_hardpoint_on_death_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_remove_hardpoint_on_death_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_remove_hardpoint_on_death_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_remove_hardpoint_on_death_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_remove_hardpoint_on_death_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_remove_hardpoint_on_death_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_remove_hardpoint_on_death_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_remove_hardpoint_on_death_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_remove_hardpoint_on_death_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_remove_hardpoint_on_death_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_remove_hardpoint_on_death_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_remove_hardpoint_on_death_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_remove_hardpoint_on_death_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_remove_hardpoint_on_death_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_remove_hardpoint_on_death_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_remove_hardpoint_on_death_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_remove_hardpoint_on_death_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_remove_hardpoint_on_death_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_remove_hardpoint_on_death_war _null"

#define SETA_SCR_GAME_HARDPOINTS_CYCLE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_game_hardpoints_cycle_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_game_hardpoints_cycle_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_game_hardpoints_cycle_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_game_hardpoints_cycle_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_game_hardpoints_cycle_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_game_hardpoints_cycle_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_game_hardpoints_cycle_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_game_hardpoints_cycle_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_game_hardpoints_cycle_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_game_hardpoints_cycle_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_game_hardpoints_cycle_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_game_hardpoints_cycle_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_game_hardpoints_cycle_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_game_hardpoints_cycle_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_game_hardpoints_cycle_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_game_hardpoints_cycle_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_game_hardpoints_cycle_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_game_hardpoints_cycle_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_game_hardpoints_cycle_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_game_hardpoints_cycle_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_game_hardpoints_cycle_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_game_hardpoints_cycle_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_game_hardpoints_cycle_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_game_hardpoints_cycle_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_game_hardpoints_cycle_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_game_hardpoints_cycle_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_game_hardpoints_cycle_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_game_hardpoints_cycle_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_game_hardpoints_cycle_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_game_hardpoints_cycle_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_game_hardpoints_cycle_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_game_hardpoints_cycle_war _null"

#define SETA_SCR_GAME_HARDPOINTS_MODE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_game_hardpoints_mode_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_game_hardpoints_mode_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_game_hardpoints_mode_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_game_hardpoints_mode_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_game_hardpoints_mode_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_game_hardpoints_mode_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_game_hardpoints_mode_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_game_hardpoints_mode_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_game_hardpoints_mode_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_game_hardpoints_mode_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_game_hardpoints_mode_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_game_hardpoints_mode_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_game_hardpoints_mode_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_game_hardpoints_mode_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_game_hardpoints_mode_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_game_hardpoints_mode_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_game_hardpoints_mode_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_game_hardpoints_mode_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_game_hardpoints_mode_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_game_hardpoints_mode_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_game_hardpoints_mode_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_game_hardpoints_mode_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_game_hardpoints_mode_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_game_hardpoints_mode_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_game_hardpoints_mode_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_game_hardpoints_mode_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_game_hardpoints_mode_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_game_hardpoints_mode_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_game_hardpoints_mode_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_game_hardpoints_mode_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_game_hardpoints_mode_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_game_hardpoints_mode_war _null"

#define SETA_SCR_ANNOUNCE_KILLSTREAK \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_announce_killstreak_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_announce_killstreak_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_announce_killstreak_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_announce_killstreak_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_announce_killstreak_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_announce_killstreak_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_announce_killstreak_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_announce_killstreak_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_announce_killstreak_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_announce_killstreak_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_announce_killstreak_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_announce_killstreak_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_announce_killstreak_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_announce_killstreak_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_announce_killstreak_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_announce_killstreak_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_announce_killstreak_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_announce_killstreak_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_announce_killstreak_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_announce_killstreak_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_announce_killstreak_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_announce_killstreak_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_announce_killstreak_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_announce_killstreak_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_announce_killstreak_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_announce_killstreak_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_announce_killstreak_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_announce_killstreak_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_announce_killstreak_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_announce_killstreak_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_announce_killstreak_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_announce_killstreak_war _null"

#define SETA_SCR_HARDPOINT_ALLOW_UAV \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_uav_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_hardpoint_allow_uav_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_uav_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_hardpoint_allow_uav_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_uav_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_hardpoint_allow_uav_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_uav_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_hardpoint_allow_uav_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_uav_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_hardpoint_allow_uav_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_uav_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_hardpoint_allow_uav_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_uav_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_hardpoint_allow_uav_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_uav_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_hardpoint_allow_uav_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_uav_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_hardpoint_allow_uav_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_uav_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_hardpoint_allow_uav_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_uav_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_hardpoint_allow_uav_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_uav_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_hardpoint_allow_uav_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_uav_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_hardpoint_allow_uav_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_uav_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_hardpoint_allow_uav_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_uav_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_hardpoint_allow_uav_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_uav_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_hardpoint_allow_uav_war _null"

#define SETA_SCR_GAME_FORCEUAV \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_game_forceuav_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_game_forceuav_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_game_forceuav_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_game_forceuav_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_game_forceuav_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_game_forceuav_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_game_forceuav_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_game_forceuav_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_game_forceuav_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_game_forceuav_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_game_forceuav_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_game_forceuav_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_game_forceuav_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_game_forceuav_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_game_forceuav_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_game_forceuav_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_game_forceuav_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_game_forceuav_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_game_forceuav_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_game_forceuav_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_game_forceuav_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_game_forceuav_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_game_forceuav_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_game_forceuav_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_game_forceuav_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_game_forceuav_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_game_forceuav_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_game_forceuav_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_game_forceuav_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_game_forceuav_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_game_forceuav_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_game_forceuav_war _null"

#define SETA_SCR_HARDPOINT_UAV_STREAK \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_hardpoint_uav_streak_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_hardpoint_uav_streak_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_hardpoint_uav_streak_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_hardpoint_uav_streak_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_hardpoint_uav_streak_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_hardpoint_uav_streak_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_hardpoint_uav_streak_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_hardpoint_uav_streak_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_hardpoint_uav_streak_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_hardpoint_uav_streak_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_hardpoint_uav_streak_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_hardpoint_uav_streak_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_hardpoint_uav_streak_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_hardpoint_uav_streak_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_hardpoint_uav_streak_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_hardpoint_uav_streak_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_hardpoint_uav_streak_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_hardpoint_uav_streak_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_hardpoint_uav_streak_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_hardpoint_uav_streak_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_hardpoint_uav_streak_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_hardpoint_uav_streak_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_hardpoint_uav_streak_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_hardpoint_uav_streak_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_hardpoint_uav_streak_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_hardpoint_uav_streak_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_hardpoint_uav_streak_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_hardpoint_uav_streak_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_hardpoint_uav_streak_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_hardpoint_uav_streak_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_hardpoint_uav_streak_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_hardpoint_uav_streak_war _null"

#define SETA_SCR_UAV_VIEW_TIME \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_uav_view_time_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_uav_view_time_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_uav_view_time_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_uav_view_time_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_uav_view_time_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_uav_view_time_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_uav_view_time_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_uav_view_time_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_uav_view_time_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_uav_view_time_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_uav_view_time_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_uav_view_time_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_uav_view_time_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_uav_view_time_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_uav_view_time_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_uav_view_time_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_uav_view_time_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_uav_view_time_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_uav_view_time_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_uav_view_time_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_uav_view_time_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_uav_view_time_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_uav_view_time_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_uav_view_time_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_uav_view_time_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_uav_view_time_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_uav_view_time_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_uav_view_time_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_uav_view_time_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_uav_view_time_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_uav_view_time_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_uav_view_time_war _null"

#define SETA_SCR_ANNOUNCE_ENEMY_UAV_ONLINE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_announce_enemy_uav_online_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_announce_enemy_uav_online_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_announce_enemy_uav_online_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_announce_enemy_uav_online_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_announce_enemy_uav_online_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_announce_enemy_uav_online_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_announce_enemy_uav_online_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_announce_enemy_uav_online_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_announce_enemy_uav_online_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_announce_enemy_uav_online_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_announce_enemy_uav_online_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_announce_enemy_uav_online_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_announce_enemy_uav_online_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_announce_enemy_uav_online_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_announce_enemy_uav_online_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_announce_enemy_uav_online_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_announce_enemy_uav_online_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_announce_enemy_uav_online_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_announce_enemy_uav_online_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_announce_enemy_uav_online_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_announce_enemy_uav_online_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_announce_enemy_uav_online_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_announce_enemy_uav_online_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_announce_enemy_uav_online_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_announce_enemy_uav_online_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_announce_enemy_uav_online_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_announce_enemy_uav_online_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_announce_enemy_uav_online_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_announce_enemy_uav_online_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_announce_enemy_uav_online_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_announce_enemy_uav_online_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_announce_enemy_uav_online_war _null"

#define SETA_SCR_UAV_SHOW_HARDPOINTS \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_uav_show_hardpoints_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_uav_show_hardpoints_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_uav_show_hardpoints_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_uav_show_hardpoints_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_uav_show_hardpoints_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_uav_show_hardpoints_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_uav_show_hardpoints_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_uav_show_hardpoints_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_uav_show_hardpoints_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_uav_show_hardpoints_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_uav_show_hardpoints_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_uav_show_hardpoints_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_uav_show_hardpoints_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_uav_show_hardpoints_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_uav_show_hardpoints_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_uav_show_hardpoints_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_uav_show_hardpoints_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_uav_show_hardpoints_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_uav_show_hardpoints_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_uav_show_hardpoints_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_uav_show_hardpoints_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_uav_show_hardpoints_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_uav_show_hardpoints_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_uav_show_hardpoints_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_uav_show_hardpoints_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_uav_show_hardpoints_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_uav_show_hardpoints_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_uav_show_hardpoints_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_uav_show_hardpoints_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_uav_show_hardpoints_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_uav_show_hardpoints_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_uav_show_hardpoints_war _null"

#define SETA_SCR_HARDPOINT_ALLOW_AIRSTRIKE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_airstrike_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_hardpoint_allow_airstrike_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_airstrike_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_hardpoint_allow_airstrike_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_airstrike_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_hardpoint_allow_airstrike_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_airstrike_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_hardpoint_allow_airstrike_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_airstrike_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_hardpoint_allow_airstrike_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_airstrike_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_hardpoint_allow_airstrike_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_airstrike_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_hardpoint_allow_airstrike_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_airstrike_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_hardpoint_allow_airstrike_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_airstrike_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_hardpoint_allow_airstrike_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_airstrike_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_hardpoint_allow_airstrike_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_airstrike_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_hardpoint_allow_airstrike_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_airstrike_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_hardpoint_allow_airstrike_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_airstrike_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_hardpoint_allow_airstrike_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_airstrike_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_hardpoint_allow_airstrike_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_airstrike_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_hardpoint_allow_airstrike_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_airstrike_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_hardpoint_allow_airstrike_war _null"

#define SETA_SCR_HARDPOINT_AIRSTRIKE_STREAK \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_hardpoint_airstrike_streak_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_hardpoint_airstrike_streak_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_hardpoint_airstrike_streak_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_hardpoint_airstrike_streak_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_hardpoint_airstrike_streak_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_hardpoint_airstrike_streak_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_hardpoint_airstrike_streak_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_hardpoint_airstrike_streak_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_hardpoint_airstrike_streak_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_hardpoint_airstrike_streak_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_hardpoint_airstrike_streak_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_hardpoint_airstrike_streak_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_hardpoint_airstrike_streak_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_hardpoint_airstrike_streak_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_hardpoint_airstrike_streak_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_hardpoint_airstrike_streak_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_hardpoint_airstrike_streak_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_hardpoint_airstrike_streak_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_hardpoint_airstrike_streak_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_hardpoint_airstrike_streak_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_hardpoint_airstrike_streak_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_hardpoint_airstrike_streak_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_hardpoint_airstrike_streak_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_hardpoint_airstrike_streak_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_hardpoint_airstrike_streak_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_hardpoint_airstrike_streak_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_hardpoint_airstrike_streak_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_hardpoint_airstrike_streak_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_hardpoint_airstrike_streak_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_hardpoint_airstrike_streak_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_hardpoint_airstrike_streak_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_hardpoint_airstrike_streak_war _null"

#define SETA_SCR_AIRSTRIKE_HARDPOINT_INTERVAL \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_airstrike_hardpoint_interval_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_airstrike_hardpoint_interval_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_airstrike_hardpoint_interval_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_airstrike_hardpoint_interval_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_airstrike_hardpoint_interval_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_airstrike_hardpoint_interval_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_airstrike_hardpoint_interval_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_airstrike_hardpoint_interval_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_airstrike_hardpoint_interval_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_airstrike_hardpoint_interval_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_airstrike_hardpoint_interval_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_airstrike_hardpoint_interval_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_airstrike_hardpoint_interval_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_airstrike_hardpoint_interval_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_airstrike_hardpoint_interval_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_airstrike_hardpoint_interval_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_airstrike_hardpoint_interval_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_airstrike_hardpoint_interval_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_airstrike_hardpoint_interval_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_airstrike_hardpoint_interval_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_airstrike_hardpoint_interval_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_airstrike_hardpoint_interval_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_airstrike_hardpoint_interval_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_airstrike_hardpoint_interval_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_airstrike_hardpoint_interval_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_airstrike_hardpoint_interval_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_airstrike_hardpoint_interval_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_airstrike_hardpoint_interval_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_airstrike_hardpoint_interval_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_airstrike_hardpoint_interval_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_airstrike_hardpoint_interval_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_airstrike_hardpoint_interval_war _null"

#define SETA_SCR_ANNOUNCE_ENEMY_AIRSTRIKE_INBOUND \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_announce_enemy_airstrike_inbound_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_announce_enemy_airstrike_inbound_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_announce_enemy_airstrike_inbound_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_announce_enemy_airstrike_inbound_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_announce_enemy_airstrike_inbound_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_announce_enemy_airstrike_inbound_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_announce_enemy_airstrike_inbound_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_announce_enemy_airstrike_inbound_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_announce_enemy_airstrike_inbound_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_announce_enemy_airstrike_inbound_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_announce_enemy_airstrike_inbound_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_announce_enemy_airstrike_inbound_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_announce_enemy_airstrike_inbound_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_announce_enemy_airstrike_inbound_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_announce_enemy_airstrike_inbound_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_announce_enemy_airstrike_inbound_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_announce_enemy_airstrike_inbound_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_announce_enemy_airstrike_inbound_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_announce_enemy_airstrike_inbound_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_announce_enemy_airstrike_inbound_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_announce_enemy_airstrike_inbound_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_announce_enemy_airstrike_inbound_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_announce_enemy_airstrike_inbound_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_announce_enemy_airstrike_inbound_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_announce_enemy_airstrike_inbound_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_announce_enemy_airstrike_inbound_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_announce_enemy_airstrike_inbound_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_announce_enemy_airstrike_inbound_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_announce_enemy_airstrike_inbound_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_announce_enemy_airstrike_inbound_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_announce_enemy_airstrike_inbound_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_announce_enemy_airstrike_inbound_war _null"

#define SETA_SCR_AIRSTRIKE_ADD_KILLS \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_airstrike_add_kills_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_airstrike_add_kills_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_airstrike_add_kills_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_airstrike_add_kills_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_airstrike_add_kills_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_airstrike_add_kills_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_airstrike_add_kills_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_airstrike_add_kills_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_airstrike_add_kills_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_airstrike_add_kills_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_airstrike_add_kills_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_airstrike_add_kills_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_airstrike_add_kills_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_airstrike_add_kills_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_airstrike_add_kills_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_airstrike_add_kills_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_airstrike_add_kills_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_airstrike_add_kills_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_airstrike_add_kills_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_airstrike_add_kills_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_airstrike_add_kills_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_airstrike_add_kills_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_airstrike_add_kills_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_airstrike_add_kills_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_airstrike_add_kills_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_airstrike_add_kills_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_airstrike_add_kills_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_airstrike_add_kills_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_airstrike_add_kills_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_airstrike_add_kills_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_airstrike_add_kills_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_airstrike_add_kills_war _null"

#define SETA_SCR_AIRSTRIKE_KILLS_TOWARD_STREAK \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_airstrike_kills_toward_streak_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_airstrike_kills_toward_streak_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_airstrike_kills_toward_streak_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_airstrike_kills_toward_streak_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_airstrike_kills_toward_streak_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_airstrike_kills_toward_streak_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_airstrike_kills_toward_streak_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_airstrike_kills_toward_streak_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_airstrike_kills_toward_streak_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_airstrike_kills_toward_streak_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_airstrike_kills_toward_streak_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_airstrike_kills_toward_streak_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_airstrike_kills_toward_streak_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_airstrike_kills_toward_streak_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_airstrike_kills_toward_streak_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_airstrike_kills_toward_streak_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_airstrike_kills_toward_streak_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_airstrike_kills_toward_streak_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_airstrike_kills_toward_streak_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_airstrike_kills_toward_streak_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_airstrike_kills_toward_streak_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_airstrike_kills_toward_streak_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_airstrike_kills_toward_streak_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_airstrike_kills_toward_streak_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_airstrike_kills_toward_streak_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_airstrike_kills_toward_streak_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_airstrike_kills_toward_streak_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_airstrike_kills_toward_streak_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_airstrike_kills_toward_streak_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_airstrike_kills_toward_streak_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_airstrike_kills_toward_streak_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_airstrike_kills_toward_streak_war _null"

#define SETA_SCR_AIRSTRIKE_DELAY \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_airstrike_delay_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_airstrike_delay_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_airstrike_delay_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_airstrike_delay_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_airstrike_delay_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_airstrike_delay_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_airstrike_delay_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_airstrike_delay_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_airstrike_delay_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_airstrike_delay_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_airstrike_delay_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_airstrike_delay_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_airstrike_delay_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_airstrike_delay_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_airstrike_delay_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_airstrike_delay_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_airstrike_delay_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_airstrike_delay_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_airstrike_delay_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_airstrike_delay_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_airstrike_delay_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_airstrike_delay_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_airstrike_delay_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_airstrike_delay_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_airstrike_delay_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_airstrike_delay_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_airstrike_delay_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_airstrike_delay_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_airstrike_delay_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_airstrike_delay_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_airstrike_delay_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_airstrike_delay_war _null"

#define SETA_SCR_HARDPOINT_ALLOW_HELICOPTER \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_helicopter_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_hardpoint_allow_helicopter_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_helicopter_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_hardpoint_allow_helicopter_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_helicopter_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_hardpoint_allow_helicopter_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_helicopter_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_hardpoint_allow_helicopter_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_helicopter_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_hardpoint_allow_helicopter_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_helicopter_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_hardpoint_allow_helicopter_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_helicopter_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_hardpoint_allow_helicopter_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_helicopter_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_hardpoint_allow_helicopter_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_helicopter_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_hardpoint_allow_helicopter_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_helicopter_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_hardpoint_allow_helicopter_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_helicopter_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_hardpoint_allow_helicopter_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_helicopter_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_hardpoint_allow_helicopter_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_helicopter_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_hardpoint_allow_helicopter_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_helicopter_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_hardpoint_allow_helicopter_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_helicopter_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_hardpoint_allow_helicopter_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_hardpoint_allow_helicopter_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_hardpoint_allow_helicopter_war _null"

#define SETA_SCR_HARDPOINT_HELICOPTER_STREAK \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_hardpoint_helicopter_streak_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_hardpoint_helicopter_streak_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_hardpoint_helicopter_streak_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_hardpoint_helicopter_streak_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_hardpoint_helicopter_streak_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_hardpoint_helicopter_streak_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_hardpoint_helicopter_streak_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_hardpoint_helicopter_streak_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_hardpoint_helicopter_streak_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_hardpoint_helicopter_streak_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_hardpoint_helicopter_streak_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_hardpoint_helicopter_streak_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_hardpoint_helicopter_streak_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_hardpoint_helicopter_streak_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_hardpoint_helicopter_streak_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_hardpoint_helicopter_streak_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_hardpoint_helicopter_streak_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_hardpoint_helicopter_streak_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_hardpoint_helicopter_streak_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_hardpoint_helicopter_streak_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_hardpoint_helicopter_streak_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_hardpoint_helicopter_streak_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_hardpoint_helicopter_streak_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_hardpoint_helicopter_streak_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_hardpoint_helicopter_streak_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_hardpoint_helicopter_streak_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_hardpoint_helicopter_streak_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_hardpoint_helicopter_streak_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_hardpoint_helicopter_streak_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_hardpoint_helicopter_streak_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_hardpoint_helicopter_streak_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_hardpoint_helicopter_streak_war _null"

#define SETA_SCR_HELI_HARDPOINT_INTERVAL \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_heli_hardpoint_interval_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_heli_hardpoint_interval_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_heli_hardpoint_interval_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_heli_hardpoint_interval_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_heli_hardpoint_interval_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_heli_hardpoint_interval_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_heli_hardpoint_interval_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_heli_hardpoint_interval_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_heli_hardpoint_interval_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_heli_hardpoint_interval_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_heli_hardpoint_interval_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_heli_hardpoint_interval_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_heli_hardpoint_interval_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_heli_hardpoint_interval_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_heli_hardpoint_interval_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_heli_hardpoint_interval_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_heli_hardpoint_interval_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_heli_hardpoint_interval_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_heli_hardpoint_interval_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_heli_hardpoint_interval_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_heli_hardpoint_interval_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_heli_hardpoint_interval_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_heli_hardpoint_interval_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_heli_hardpoint_interval_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_heli_hardpoint_interval_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_heli_hardpoint_interval_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_heli_hardpoint_interval_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_heli_hardpoint_interval_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_heli_hardpoint_interval_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_heli_hardpoint_interval_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_heli_hardpoint_interval_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_heli_hardpoint_interval_war _null"

#define SETA_SCR_ANNOUNCE_ENEMY_HELI_INBOUND \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_announce_enemy_heli_inbound_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_announce_enemy_heli_inbound_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_announce_enemy_heli_inbound_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_announce_enemy_heli_inbound_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_announce_enemy_heli_inbound_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_announce_enemy_heli_inbound_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_announce_enemy_heli_inbound_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_announce_enemy_heli_inbound_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_announce_enemy_heli_inbound_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_announce_enemy_heli_inbound_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_announce_enemy_heli_inbound_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_announce_enemy_heli_inbound_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_announce_enemy_heli_inbound_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_announce_enemy_heli_inbound_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_announce_enemy_heli_inbound_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_announce_enemy_heli_inbound_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_announce_enemy_heli_inbound_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_announce_enemy_heli_inbound_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_announce_enemy_heli_inbound_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_announce_enemy_heli_inbound_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_announce_enemy_heli_inbound_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_announce_enemy_heli_inbound_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_announce_enemy_heli_inbound_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_announce_enemy_heli_inbound_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_announce_enemy_heli_inbound_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_announce_enemy_heli_inbound_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_announce_enemy_heli_inbound_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_announce_enemy_heli_inbound_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_announce_enemy_heli_inbound_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_announce_enemy_heli_inbound_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_announce_enemy_heli_inbound_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_announce_enemy_heli_inbound_war _null"

#define SETA_SCR_HELICOPTER_ADD_KILLS \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_helicopter_add_kills_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_helicopter_add_kills_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_helicopter_add_kills_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_helicopter_add_kills_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_helicopter_add_kills_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_helicopter_add_kills_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_helicopter_add_kills_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_helicopter_add_kills_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_helicopter_add_kills_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_helicopter_add_kills_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_helicopter_add_kills_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_helicopter_add_kills_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_helicopter_add_kills_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_helicopter_add_kills_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_helicopter_add_kills_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_helicopter_add_kills_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_helicopter_add_kills_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_helicopter_add_kills_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_helicopter_add_kills_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_helicopter_add_kills_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_helicopter_add_kills_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_helicopter_add_kills_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_helicopter_add_kills_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_helicopter_add_kills_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_helicopter_add_kills_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_helicopter_add_kills_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_helicopter_add_kills_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_helicopter_add_kills_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_helicopter_add_kills_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_helicopter_add_kills_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_helicopter_add_kills_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_helicopter_add_kills_war _null"

#define SETA_SCR_HELICOPTER_KILLS_TOWARD_STREAK \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_helicopter_kills_toward_streak_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_helicopter_kills_toward_streak_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_helicopter_kills_toward_streak_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_helicopter_kills_toward_streak_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_helicopter_kills_toward_streak_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_helicopter_kills_toward_streak_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_helicopter_kills_toward_streak_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_helicopter_kills_toward_streak_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_helicopter_kills_toward_streak_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_helicopter_kills_toward_streak_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_helicopter_kills_toward_streak_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_helicopter_kills_toward_streak_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_helicopter_kills_toward_streak_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_helicopter_kills_toward_streak_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_helicopter_kills_toward_streak_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_helicopter_kills_toward_streak_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_helicopter_kills_toward_streak_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_helicopter_kills_toward_streak_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_helicopter_kills_toward_streak_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_helicopter_kills_toward_streak_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_helicopter_kills_toward_streak_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_helicopter_kills_toward_streak_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_helicopter_kills_toward_streak_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_helicopter_kills_toward_streak_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_helicopter_kills_toward_streak_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_helicopter_kills_toward_streak_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_helicopter_kills_toward_streak_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_helicopter_kills_toward_streak_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_helicopter_kills_toward_streak_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_helicopter_kills_toward_streak_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_helicopter_kills_toward_streak_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_helicopter_kills_toward_streak_war _null"

#define SETA_SCR_HELICOPTER_DELAY \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_helicopter_delay_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_helicopter_delay_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_helicopter_delay_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_helicopter_delay_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_helicopter_delay_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_helicopter_delay_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_helicopter_delay_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_helicopter_delay_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_helicopter_delay_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_helicopter_delay_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_helicopter_delay_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_helicopter_delay_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_helicopter_delay_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_helicopter_delay_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_helicopter_delay_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_helicopter_delay_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_helicopter_delay_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_helicopter_delay_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_helicopter_delay_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_helicopter_delay_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_helicopter_delay_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_helicopter_delay_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_helicopter_delay_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_helicopter_delay_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_helicopter_delay_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_helicopter_delay_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_helicopter_delay_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_helicopter_delay_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_helicopter_delay_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_helicopter_delay_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_helicopter_delay_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_helicopter_delay_war _null"

#define SETA_SCR_HELI_MAXHEALTH \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_heli_maxhealth_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_heli_maxhealth_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_heli_maxhealth_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_heli_maxhealth_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_heli_maxhealth_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_heli_maxhealth_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_heli_maxhealth_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_heli_maxhealth_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_heli_maxhealth_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_heli_maxhealth_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_heli_maxhealth_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_heli_maxhealth_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_heli_maxhealth_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_heli_maxhealth_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_heli_maxhealth_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_heli_maxhealth_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_heli_maxhealth_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_heli_maxhealth_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_heli_maxhealth_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_heli_maxhealth_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_heli_maxhealth_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_heli_maxhealth_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_heli_maxhealth_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_heli_maxhealth_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_heli_maxhealth_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_heli_maxhealth_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_heli_maxhealth_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_heli_maxhealth_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_heli_maxhealth_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_heli_maxhealth_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_heli_maxhealth_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_heli_maxhealth_war _null"

#define SETA_SCR_HELI_TARGET_RECOGNITION \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_heli_target_recognition_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_heli_target_recognition_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_heli_target_recognition_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_heli_target_recognition_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_heli_target_recognition_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_heli_target_recognition_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_heli_target_recognition_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_heli_target_recognition_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_heli_target_recognition_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_heli_target_recognition_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_heli_target_recognition_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_heli_target_recognition_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_heli_target_recognition_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_heli_target_recognition_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_heli_target_recognition_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_heli_target_recognition_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_heli_target_recognition_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_heli_target_recognition_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_heli_target_recognition_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_heli_target_recognition_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_heli_target_recognition_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_heli_target_recognition_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_heli_target_recognition_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_heli_target_recognition_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_heli_target_recognition_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_heli_target_recognition_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_heli_target_recognition_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_heli_target_recognition_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_heli_target_recognition_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_heli_target_recognition_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_heli_target_recognition_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_heli_target_recognition_war _null"