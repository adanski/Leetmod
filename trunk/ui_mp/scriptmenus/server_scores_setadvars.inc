#ifdef FILLMENUDVARS
#undef FILLMENUDVARS
#endif

#define FILLMENUDVARS     exec "exec menudvars/scores/l/_def.cfg"\
    execOnDvarStringValue menu_cfg_gt ass "exec menudvars/scores/l/ass.cfg"\
    execOnDvarStringValue menu_cfg_gt bel "exec menudvars/scores/l/bel.cfg"\
    execOnDvarStringValue menu_cfg_gt ch "exec menudvars/scores/l/ch.cfg"\
    execOnDvarStringValue menu_cfg_gt ctf "exec menudvars/scores/l/ctf.cfg"\
    execOnDvarStringValue menu_cfg_gt dm "exec menudvars/scores/l/dm.cfg"\
    execOnDvarStringValue menu_cfg_gt dom "exec menudvars/scores/l/dom.cfg"\
    execOnDvarStringValue menu_cfg_gt ftag "exec menudvars/scores/l/ftag.cfg"\
    execOnDvarStringValue menu_cfg_gt gg "exec menudvars/scores/l/gg.cfg"\
    execOnDvarStringValue menu_cfg_gt koth "exec menudvars/scores/l/koth.cfg"\
    execOnDvarStringValue menu_cfg_gt oitc "exec menudvars/scores/l/oitc.cfg"\
    execOnDvarStringValue menu_cfg_gt re "exec menudvars/scores/l/re.cfg"\
    execOnDvarStringValue menu_cfg_gt sab "exec menudvars/scores/l/sab.cfg"\
    execOnDvarStringValue menu_cfg_gt sd "exec menudvars/scores/l/sd.cfg"\
    execOnDvarStringValue menu_cfg_gt ss "exec menudvars/scores/l/ss.cfg"\
    execOnDvarStringValue menu_cfg_gt war "exec menudvars/scores/l/war.cfg"

#ifdef SAVEMENUDVARS
#undef SAVEMENUDVARS
#endif

#define SAVEMENUDVARS     execOnDvarStringValue menu_cfg_gt _def "exec menudvars/scores/s/_def.cfg"\
    execOnDvarStringValue menu_cfg_gt ass "exec menudvars/scores/s/ass.cfg"\
    execOnDvarStringValue menu_cfg_gt bel "exec menudvars/scores/s/bel.cfg"\
    execOnDvarStringValue menu_cfg_gt ch "exec menudvars/scores/s/ch.cfg"\
    execOnDvarStringValue menu_cfg_gt ctf "exec menudvars/scores/s/ctf.cfg"\
    execOnDvarStringValue menu_cfg_gt dm "exec menudvars/scores/s/dm.cfg"\
    execOnDvarStringValue menu_cfg_gt dom "exec menudvars/scores/s/dom.cfg"\
    execOnDvarStringValue menu_cfg_gt ftag "exec menudvars/scores/s/ftag.cfg"\
    execOnDvarStringValue menu_cfg_gt gg "exec menudvars/scores/s/gg.cfg"\
    execOnDvarStringValue menu_cfg_gt koth "exec menudvars/scores/s/koth.cfg"\
    execOnDvarStringValue menu_cfg_gt oitc "exec menudvars/scores/s/oitc.cfg"\
    execOnDvarStringValue menu_cfg_gt re "exec menudvars/scores/s/re.cfg"\
    execOnDvarStringValue menu_cfg_gt sab "exec menudvars/scores/s/sab.cfg"\
    execOnDvarStringValue menu_cfg_gt sd "exec menudvars/scores/s/sd.cfg"\
    execOnDvarStringValue menu_cfg_gt ss "exec menudvars/scores/s/ss.cfg"\
    execOnDvarStringValue menu_cfg_gt war "exec menudvars/scores/s/war.cfg"


#define SETA_SCR_ENABLE_SCORESYSTEM \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_enable_scoresystem_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "seta scr_enable_scoresystem_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_enable_scoresystem_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_enable_scoresystem_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "seta scr_enable_scoresystem_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "seta scr_enable_scoresystem_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_enable_scoresystem_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "seta scr_enable_scoresystem_gg _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_enable_scoresystem_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "seta scr_enable_scoresystem_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_enable_scoresystem_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_enable_scoresystem_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_enable_scoresystem_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "seta scr_enable_scoresystem_ss _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_enable_scoresystem_war _null"

#define SETA_SCR_SCORE_TK_AFFECTS_TEAMSCORE \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_score_tk_affects_teamscore_ass _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_score_tk_affects_teamscore_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_score_tk_affects_teamscore_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dom "seta scr_score_tk_affects_teamscore_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_score_tk_affects_teamscore_ftag _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_score_tk_affects_teamscore_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_score_tk_affects_teamscore_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_score_tk_affects_teamscore_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_score_tk_affects_teamscore_sd _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_score_tk_affects_teamscore_war _null"

#define SETA_SCR_SCORE_STANDARD_KILL \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_score_standard_kill_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "seta scr_score_standard_kill_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_score_standard_kill_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_score_standard_kill_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "seta scr_score_standard_kill_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "seta scr_score_standard_kill_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_score_standard_kill_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "seta scr_score_standard_kill_gg _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_score_standard_kill_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "seta scr_score_standard_kill_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_score_standard_kill_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_score_standard_kill_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_score_standard_kill_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "seta scr_score_standard_kill_ss _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_score_standard_kill_war _null"

#define SETA_SCR_SCORE_HEADSHOT_KILL \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_score_headshot_kill_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "seta scr_score_headshot_kill_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_score_headshot_kill_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_score_headshot_kill_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "seta scr_score_headshot_kill_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "seta scr_score_headshot_kill_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_score_headshot_kill_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "seta scr_score_headshot_kill_gg _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_score_headshot_kill_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "seta scr_score_headshot_kill_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_score_headshot_kill_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_score_headshot_kill_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_score_headshot_kill_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "seta scr_score_headshot_kill_ss _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_score_headshot_kill_war _null"

#define SETA_SCR_SCORE_MELEE_KILL \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_score_melee_kill_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "seta scr_score_melee_kill_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_score_melee_kill_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_score_melee_kill_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "seta scr_score_melee_kill_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "seta scr_score_melee_kill_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_score_melee_kill_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "seta scr_score_melee_kill_gg _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_score_melee_kill_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "seta scr_score_melee_kill_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_score_melee_kill_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_score_melee_kill_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_score_melee_kill_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "seta scr_score_melee_kill_ss _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_score_melee_kill_war _null"

#define SETA_SCR_SCORE_GRENADE_KILL \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_score_grenade_kill_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "seta scr_score_grenade_kill_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_score_grenade_kill_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_score_grenade_kill_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "seta scr_score_grenade_kill_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "seta scr_score_grenade_kill_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_score_grenade_kill_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "seta scr_score_grenade_kill_gg _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_score_grenade_kill_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "seta scr_score_grenade_kill_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_score_grenade_kill_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_score_grenade_kill_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_score_grenade_kill_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "seta scr_score_grenade_kill_ss _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_score_grenade_kill_war _null"

#define SETA_SCR_SCORE_C4_KILL \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_score_c4_kill_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "seta scr_score_c4_kill_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_score_c4_kill_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_score_c4_kill_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "seta scr_score_c4_kill_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "seta scr_score_c4_kill_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_score_c4_kill_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "seta scr_score_c4_kill_gg _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_score_c4_kill_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "seta scr_score_c4_kill_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_score_c4_kill_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_score_c4_kill_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_score_c4_kill_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "seta scr_score_c4_kill_ss _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_score_c4_kill_war _null"

#define SETA_SCR_SCORE_CLAYMORE_KILL \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_score_claymore_kill_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "seta scr_score_claymore_kill_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_score_claymore_kill_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_score_claymore_kill_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "seta scr_score_claymore_kill_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "seta scr_score_claymore_kill_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_score_claymore_kill_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "seta scr_score_claymore_kill_gg _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_score_claymore_kill_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "seta scr_score_claymore_kill_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_score_claymore_kill_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_score_claymore_kill_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_score_claymore_kill_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "seta scr_score_claymore_kill_ss _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_score_claymore_kill_war _null"

#define SETA_SCR_SCORE_RPG_KILL \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_score_rpg_kill_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "seta scr_score_rpg_kill_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_score_rpg_kill_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_score_rpg_kill_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "seta scr_score_rpg_kill_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "seta scr_score_rpg_kill_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_score_rpg_kill_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "seta scr_score_rpg_kill_gg _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_score_rpg_kill_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "seta scr_score_rpg_kill_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_score_rpg_kill_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_score_rpg_kill_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_score_rpg_kill_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "seta scr_score_rpg_kill_ss _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_score_rpg_kill_war _null"

#define SETA_SCR_SCORE_GRENADE_LAUNCHER_KILL \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_score_grenade_launcher_kill_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "seta scr_score_grenade_launcher_kill_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_score_grenade_launcher_kill_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_score_grenade_launcher_kill_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "seta scr_score_grenade_launcher_kill_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "seta scr_score_grenade_launcher_kill_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_score_grenade_launcher_kill_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "seta scr_score_grenade_launcher_kill_gg _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_score_grenade_launcher_kill_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "seta scr_score_grenade_launcher_kill_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_score_grenade_launcher_kill_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_score_grenade_launcher_kill_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_score_grenade_launcher_kill_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "seta scr_score_grenade_launcher_kill_ss _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_score_grenade_launcher_kill_war _null"

#define SETA_SCR_SCORE_AIRSTRIKE_KILL \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_score_airstrike_kill_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "seta scr_score_airstrike_kill_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_score_airstrike_kill_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_score_airstrike_kill_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "seta scr_score_airstrike_kill_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "seta scr_score_airstrike_kill_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_score_airstrike_kill_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "seta scr_score_airstrike_kill_gg _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_score_airstrike_kill_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "seta scr_score_airstrike_kill_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_score_airstrike_kill_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_score_airstrike_kill_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_score_airstrike_kill_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "seta scr_score_airstrike_kill_ss _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_score_airstrike_kill_war _null"

#define SETA_SCR_SCORE_HELICOPTER_KILL \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_score_helicopter_kill_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "seta scr_score_helicopter_kill_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_score_helicopter_kill_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_score_helicopter_kill_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "seta scr_score_helicopter_kill_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "seta scr_score_helicopter_kill_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_score_helicopter_kill_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "seta scr_score_helicopter_kill_gg _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_score_helicopter_kill_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "seta scr_score_helicopter_kill_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_score_helicopter_kill_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_score_helicopter_kill_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_score_helicopter_kill_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "seta scr_score_helicopter_kill_ss _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_score_helicopter_kill_war _null"

#define SETA_SCR_SCORE_VEHICLE_EXPLOSION_KILL \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_score_vehicle_explosion_kill_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "seta scr_score_vehicle_explosion_kill_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_score_vehicle_explosion_kill_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_score_vehicle_explosion_kill_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "seta scr_score_vehicle_explosion_kill_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "seta scr_score_vehicle_explosion_kill_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_score_vehicle_explosion_kill_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "seta scr_score_vehicle_explosion_kill_gg _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_score_vehicle_explosion_kill_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "seta scr_score_vehicle_explosion_kill_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_score_vehicle_explosion_kill_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_score_vehicle_explosion_kill_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_score_vehicle_explosion_kill_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "seta scr_score_vehicle_explosion_kill_ss _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_score_vehicle_explosion_kill_war _null"

#define SETA_SCR_SCORE_BARREL_EXPLOSION_KILL \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_score_barrel_explosion_kill_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "seta scr_score_barrel_explosion_kill_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_score_barrel_explosion_kill_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_score_barrel_explosion_kill_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "seta scr_score_barrel_explosion_kill_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "seta scr_score_barrel_explosion_kill_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_score_barrel_explosion_kill_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "seta scr_score_barrel_explosion_kill_gg _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_score_barrel_explosion_kill_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "seta scr_score_barrel_explosion_kill_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_score_barrel_explosion_kill_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_score_barrel_explosion_kill_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_score_barrel_explosion_kill_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "seta scr_score_barrel_explosion_kill_ss _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_score_barrel_explosion_kill_war _null"

#define SETA_SCR_SCORE_ASSIST_KILL \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_score_assist_kill_ass _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_score_assist_kill_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_score_assist_kill_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dom "seta scr_score_assist_kill_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_score_assist_kill_ftag _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_score_assist_kill_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_score_assist_kill_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_score_assist_kill_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_score_assist_kill_sd _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_score_assist_kill_war _null"

#define SETA_SCR_SCORE_ASSIST_25_KILL \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_score_assist_25_kill_ass _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_score_assist_25_kill_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_score_assist_25_kill_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dom "seta scr_score_assist_25_kill_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_score_assist_25_kill_ftag _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_score_assist_25_kill_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_score_assist_25_kill_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_score_assist_25_kill_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_score_assist_25_kill_sd _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_score_assist_25_kill_war _null"

#define SETA_SCR_SCORE_ASSIST_50_KILL \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_score_assist_50_kill_ass _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_score_assist_50_kill_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_score_assist_50_kill_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dom "seta scr_score_assist_50_kill_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_score_assist_50_kill_ftag _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_score_assist_50_kill_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_score_assist_50_kill_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_score_assist_50_kill_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_score_assist_50_kill_sd _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_score_assist_50_kill_war _null"

#define SETA_SCR_SCORE_ASSIST_75_KILL \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_score_assist_75_kill_ass _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_score_assist_75_kill_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_score_assist_75_kill_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dom "seta scr_score_assist_75_kill_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_score_assist_75_kill_ftag _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_score_assist_75_kill_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_score_assist_75_kill_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_score_assist_75_kill_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_score_assist_75_kill_sd _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_score_assist_75_kill_war _null"

#define SETA_SCR_SCORE_PLAYER_DEATH \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_score_player_death_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "seta scr_score_player_death_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_score_player_death_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_score_player_death_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "seta scr_score_player_death_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "seta scr_score_player_death_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_score_player_death_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "seta scr_score_player_death_gg _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_score_player_death_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "seta scr_score_player_death_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_score_player_death_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_score_player_death_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_score_player_death_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "seta scr_score_player_death_ss _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_score_player_death_war _null"

#define SETA_SCR_SCORE_PLAYER_SUICIDE \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_score_player_suicide_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "seta scr_score_player_suicide_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_score_player_suicide_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_score_player_suicide_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "seta scr_score_player_suicide_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "seta scr_score_player_suicide_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_score_player_suicide_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "seta scr_score_player_suicide_gg _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_score_player_suicide_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "seta scr_score_player_suicide_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_score_player_suicide_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_score_player_suicide_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_score_player_suicide_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "seta scr_score_player_suicide_ss _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_score_player_suicide_war _null"

#define SETA_SCR_SCORE_PLAYER_TEAMKILL \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_score_player_teamkill_ass _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_score_player_teamkill_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_score_player_teamkill_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dom "seta scr_score_player_teamkill_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_score_player_teamkill_ftag _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_score_player_teamkill_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_score_player_teamkill_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_score_player_teamkill_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_score_player_teamkill_sd _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_score_player_teamkill_war _null"

#define SETA_SCR_SCORE_HARDPOINT_USED \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_score_hardpoint_used_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "seta scr_score_hardpoint_used_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_score_hardpoint_used_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_score_hardpoint_used_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "seta scr_score_hardpoint_used_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "seta scr_score_hardpoint_used_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_score_hardpoint_used_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "seta scr_score_hardpoint_used_gg _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_score_hardpoint_used_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "seta scr_score_hardpoint_used_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_score_hardpoint_used_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_score_hardpoint_used_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_score_hardpoint_used_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "seta scr_score_hardpoint_used_ss _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_score_hardpoint_used_war _null"

#define SETA_SCR_SCORE_SHOT_DOWN_HELICOPTER \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_score_shot_down_helicopter_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "seta scr_score_shot_down_helicopter_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_score_shot_down_helicopter_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_score_shot_down_helicopter_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "seta scr_score_shot_down_helicopter_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "seta scr_score_shot_down_helicopter_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_score_shot_down_helicopter_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "seta scr_score_shot_down_helicopter_gg _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_score_shot_down_helicopter_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "seta scr_score_shot_down_helicopter_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_score_shot_down_helicopter_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_score_shot_down_helicopter_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_score_shot_down_helicopter_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "seta scr_score_shot_down_helicopter_ss _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_score_shot_down_helicopter_war _null"

#define SETA_SCR_SCORE_CAPTURE_OBJECTIVE \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_score_capture_objective_ass _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_score_capture_objective_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_score_capture_objective_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dom "seta scr_score_capture_objective_dom _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_score_capture_objective_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_score_capture_objective_re _null"

#define SETA_SCR_SCORE_TAKE_OBJECTIVE \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_score_take_objective_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_score_take_objective_ctf _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_score_take_objective_re _null"

#define SETA_SCR_SCORE_RETURN_OBJECTIVE \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_score_return_objective_ctf _null"

#define SETA_SCR_SCORE_DEFEND_OBJECTIVE \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_score_defend_objective_ass _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_score_defend_objective_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_score_defend_objective_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dom "seta scr_score_defend_objective_dom _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_score_defend_objective_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_score_defend_objective_re _null"

#define SETA_SCR_SCORE_HOLDING_OBJECTIVE \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_score_holding_objective_ch _null"

#define SETA_SCR_SCORE_KILL_OBJECTIVE_CARRIER \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_score_kill_objective_carrier_ch _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_score_kill_objective_carrier_re _null"

#define SETA_SCR_SCORE_ASSAULT_OBJECTIVE \
  execOnDvarStringValue menu_cfg_gt dom "seta scr_score_assault_objective_dom _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_score_assault_objective_koth _null"

#define SETA_SCR_SCORE_PLANT_BOMB \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_score_plant_bomb_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_score_plant_bomb_sd _null"

#define SETA_SCR_SCORE_DEFUSE_BOMB \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_score_defuse_bomb_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_score_defuse_bomb_sd _null"
