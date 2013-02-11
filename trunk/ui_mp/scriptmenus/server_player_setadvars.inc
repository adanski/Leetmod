#ifdef FILLMENUDVARS
#undef FILLMENUDVARS
#endif

#define FILLMENUDVARS     exec "exec menudvars/player/l/_def.cfg"\
    execOnDvarStringValue menu_cfg_gt ass "exec menudvars/player/l/ass.cfg"\
    execOnDvarStringValue menu_cfg_gt bel "exec menudvars/player/l/bel.cfg"\
    execOnDvarStringValue menu_cfg_gt ch "exec menudvars/player/l/ch.cfg"\
    execOnDvarStringValue menu_cfg_gt ctf "exec menudvars/player/l/ctf.cfg"\
    execOnDvarStringValue menu_cfg_gt dm "exec menudvars/player/l/dm.cfg"\
    execOnDvarStringValue menu_cfg_gt dom "exec menudvars/player/l/dom.cfg"\
    execOnDvarStringValue menu_cfg_gt ftag "exec menudvars/player/l/ftag.cfg"\
    execOnDvarStringValue menu_cfg_gt gg "exec menudvars/player/l/gg.cfg"\
    execOnDvarStringValue menu_cfg_gt gr "exec menudvars/player/l/gr.cfg"\
    execOnDvarStringValue menu_cfg_gt koth "exec menudvars/player/l/koth.cfg"\
    execOnDvarStringValue menu_cfg_gt oitc "exec menudvars/player/l/oitc.cfg"\
    execOnDvarStringValue menu_cfg_gt re "exec menudvars/player/l/re.cfg"\
    execOnDvarStringValue menu_cfg_gt sab "exec menudvars/player/l/sab.cfg"\
    execOnDvarStringValue menu_cfg_gt sd "exec menudvars/player/l/sd.cfg"\
    execOnDvarStringValue menu_cfg_gt ss "exec menudvars/player/l/ss.cfg"\
    execOnDvarStringValue menu_cfg_gt tgr "exec menudvars/player/l/tgr.cfg"\
    execOnDvarStringValue menu_cfg_gt war "exec menudvars/player/l/war.cfg"

#ifdef SAVEMENUDVARS
#undef SAVEMENUDVARS
#endif

#define SAVEMENUDVARS     execOnDvarStringValue menu_cfg_gt _def "exec menudvars/player/s/_def.cfg"\
    execOnDvarStringValue menu_cfg_gt ass "exec menudvars/player/s/ass.cfg"\
    execOnDvarStringValue menu_cfg_gt bel "exec menudvars/player/s/bel.cfg"\
    execOnDvarStringValue menu_cfg_gt ch "exec menudvars/player/s/ch.cfg"\
    execOnDvarStringValue menu_cfg_gt ctf "exec menudvars/player/s/ctf.cfg"\
    execOnDvarStringValue menu_cfg_gt dm "exec menudvars/player/s/dm.cfg"\
    execOnDvarStringValue menu_cfg_gt dom "exec menudvars/player/s/dom.cfg"\
    execOnDvarStringValue menu_cfg_gt ftag "exec menudvars/player/s/ftag.cfg"\
    execOnDvarStringValue menu_cfg_gt gg "exec menudvars/player/s/gg.cfg"\
    execOnDvarStringValue menu_cfg_gt gr "exec menudvars/player/s/gr.cfg"\
    execOnDvarStringValue menu_cfg_gt koth "exec menudvars/player/s/koth.cfg"\
    execOnDvarStringValue menu_cfg_gt oitc "exec menudvars/player/s/oitc.cfg"\
    execOnDvarStringValue menu_cfg_gt re "exec menudvars/player/s/re.cfg"\
    execOnDvarStringValue menu_cfg_gt sab "exec menudvars/player/s/sab.cfg"\
    execOnDvarStringValue menu_cfg_gt sd "exec menudvars/player/s/sd.cfg"\
    execOnDvarStringValue menu_cfg_gt ss "exec menudvars/player/s/ss.cfg"\
    execOnDvarStringValue menu_cfg_gt tgr "exec menudvars/player/s/tgr.cfg"\
    execOnDvarStringValue menu_cfg_gt war "exec menudvars/player/s/war.cfg"


#define SET_SCR_FALLDAMAGEMINHEIGHT \
  execOnDvarStringValue menu_cfg_gt ass "set scr_fallDamageMinHeight_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_fallDamageMinHeight_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_fallDamageMinHeight_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_fallDamageMinHeight_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_fallDamageMinHeight_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_fallDamageMinHeight_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_fallDamageMinHeight_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_fallDamageMinHeight_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_fallDamageMinHeight_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_fallDamageMinHeight_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_fallDamageMinHeight_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_fallDamageMinHeight_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_fallDamageMinHeight_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_fallDamageMinHeight_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_fallDamageMinHeight_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_fallDamageMinHeight_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_fallDamageMinHeight_war _null"

#define SET_SCR_FALLDAMAGEMAXHEIGHT \
  execOnDvarStringValue menu_cfg_gt ass "set scr_fallDamageMaxHeight_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_fallDamageMaxHeight_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_fallDamageMaxHeight_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_fallDamageMaxHeight_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_fallDamageMaxHeight_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_fallDamageMaxHeight_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_fallDamageMaxHeight_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_fallDamageMaxHeight_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_fallDamageMaxHeight_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_fallDamageMaxHeight_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_fallDamageMaxHeight_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_fallDamageMaxHeight_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_fallDamageMaxHeight_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_fallDamageMaxHeight_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_fallDamageMaxHeight_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_fallDamageMaxHeight_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_fallDamageMaxHeight_war _null"

#define SET_SCR_JUMP_HEIGHT \
  execOnDvarStringValue menu_cfg_gt ass "set scr_jump_height_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_jump_height_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_jump_height_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_jump_height_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_jump_height_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_jump_height_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_jump_height_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_jump_height_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_jump_height_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_jump_height_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_jump_height_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_jump_height_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_jump_height_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_jump_height_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_jump_height_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_jump_height_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_jump_height_war _null"

#define SET_SCR_JUMP_SLOWDOWN_ENABLE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_jump_slowdown_enable_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_jump_slowdown_enable_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_jump_slowdown_enable_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_jump_slowdown_enable_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_jump_slowdown_enable_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_jump_slowdown_enable_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_jump_slowdown_enable_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_jump_slowdown_enable_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_jump_slowdown_enable_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_jump_slowdown_enable_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_jump_slowdown_enable_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_jump_slowdown_enable_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_jump_slowdown_enable_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_jump_slowdown_enable_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_jump_slowdown_enable_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_jump_slowdown_enable_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_jump_slowdown_enable_war _null"

#define SET_SCR_GAME_ALLOW_KILLCAM \
  execOnDvarStringValue menu_cfg_gt ass "set scr_game_allow_killcam_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_game_allow_killcam_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_game_allow_killcam_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_game_allow_killcam_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_game_allow_killcam_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_game_allow_killcam_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_game_allow_killcam_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_game_allow_killcam_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_game_allow_killcam_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_game_allow_killcam_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_game_allow_killcam_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_game_allow_killcam_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_game_allow_killcam_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_game_allow_killcam_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_game_allow_killcam_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_game_allow_killcam_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_game_allow_killcam_war _null"

#define SET_SCR_PLAYER_FORCERESPAWN \
  execOnDvarStringValue menu_cfg_gt bel "set scr_player_forcerespawn_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_player_forcerespawn_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_player_forcerespawn_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_player_forcerespawn_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_player_forcerespawn_dom _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_player_forcerespawn_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_player_forcerespawn_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_player_forcerespawn_koth _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_player_forcerespawn_sab _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_player_forcerespawn_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_player_forcerespawn_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_player_forcerespawn_war _null"

#define SET_SCR_QUICKACTIONS_ENABLE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_quickactions_enable_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_quickactions_enable_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_quickactions_enable_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_quickactions_enable_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_quickactions_enable_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_quickactions_enable_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_quickactions_enable_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_quickactions_enable_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_quickactions_enable_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_quickactions_enable_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_quickactions_enable_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_quickactions_enable_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_quickactions_enable_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_quickactions_enable_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_quickactions_enable_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_quickactions_enable_war _null"

#define SET_SCR_THIRDPERSON_ENABLE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_thirdperson_enable_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_thirdperson_enable_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_thirdperson_enable_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_thirdperson_enable_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_thirdperson_enable_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_thirdperson_enable_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_thirdperson_enable_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_thirdperson_enable_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_thirdperson_enable_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_thirdperson_enable_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_thirdperson_enable_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_thirdperson_enable_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_thirdperson_enable_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_thirdperson_enable_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_thirdperson_enable_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_thirdperson_enable_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_thirdperson_enable_war _null"

#define SET_SCR_PLAYER_LEAN_FIX \
  execOnDvarStringValue menu_cfg_gt ass "set scr_player_lean_fix_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_player_lean_fix_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_player_lean_fix_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_player_lean_fix_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_player_lean_fix_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_player_lean_fix_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_player_lean_fix_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_player_lean_fix_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_player_lean_fix_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_player_lean_fix_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_player_lean_fix_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_player_lean_fix_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_player_lean_fix_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_player_lean_fix_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_player_lean_fix_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_player_lean_fix_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_player_lean_fix_war _null"

#define SET_SCR_BOB_EFFECT_ENABLE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_bob_effect_enable_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_bob_effect_enable_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_bob_effect_enable_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_bob_effect_enable_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_bob_effect_enable_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_bob_effect_enable_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_bob_effect_enable_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_bob_effect_enable_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_bob_effect_enable_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_bob_effect_enable_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_bob_effect_enable_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_bob_effect_enable_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_bob_effect_enable_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_bob_effect_enable_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_bob_effect_enable_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_bob_effect_enable_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_bob_effect_enable_war _null"

#define SET_SCR_CG_FOOTSTEPS \
  execOnDvarStringValue menu_cfg_gt ass "set scr_cg_footsteps_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_cg_footsteps_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_cg_footsteps_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_cg_footsteps_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_cg_footsteps_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_cg_footsteps_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_cg_footsteps_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_cg_footsteps_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_cg_footsteps_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_cg_footsteps_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_cg_footsteps_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_cg_footsteps_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_cg_footsteps_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_cg_footsteps_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_cg_footsteps_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_cg_footsteps_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_cg_footsteps_war _null"

#define SET_SCR_CAP_ENABLE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_cap_enable_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_cap_enable_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_cap_enable_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_cap_enable_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_cap_enable_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_cap_enable_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_cap_enable_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_cap_enable_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_cap_enable_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_cap_enable_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_cap_enable_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_cap_enable_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_cap_enable_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_cap_enable_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_cap_enable_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_cap_enable_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_cap_enable_war _null"

#define SET_SCR_CAP_TIME \
  execOnDvarStringValue menu_cfg_gt ass "set scr_cap_time_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_cap_time_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_cap_time_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_cap_time_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_cap_time_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_cap_time_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_cap_time_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_cap_time_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_cap_time_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_cap_time_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_cap_time_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_cap_time_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_cap_time_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_cap_time_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_cap_time_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_cap_time_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_cap_time_war _null"

#define SET_SCR_CAP_TIME_ACTIVATED \
  execOnDvarStringValue menu_cfg_gt ass "set scr_cap_time_activated_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_cap_time_activated_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_cap_time_activated_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_cap_time_activated_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_cap_time_activated_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_cap_time_activated_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_cap_time_activated_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_cap_time_activated_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_cap_time_activated_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_cap_time_activated_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_cap_time_activated_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_cap_time_activated_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_cap_time_activated_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_cap_time_activated_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_cap_time_activated_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_cap_time_activated_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_cap_time_activated_war _null"

#define SET_SCR_CAP_FIRSTSPAWN \
  execOnDvarStringValue menu_cfg_gt ass "set scr_cap_firstspawn_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_cap_firstspawn_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_cap_firstspawn_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_cap_firstspawn_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_cap_firstspawn_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_cap_firstspawn_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_cap_firstspawn_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_cap_firstspawn_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_cap_firstspawn_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_cap_firstspawn_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_cap_firstspawn_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_cap_firstspawn_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_cap_firstspawn_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_cap_firstspawn_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_cap_firstspawn_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_cap_firstspawn_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_cap_firstspawn_war _null"

#define SET_SCR_DE_DROPWEAPON_ON_ARM_HIT \
  execOnDvarStringValue menu_cfg_gt ass "set scr_de_dropweapon_on_arm_hit_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_de_dropweapon_on_arm_hit_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_de_dropweapon_on_arm_hit_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_de_dropweapon_on_arm_hit_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_de_dropweapon_on_arm_hit_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_de_dropweapon_on_arm_hit_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_de_dropweapon_on_arm_hit_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_de_dropweapon_on_arm_hit_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_de_dropweapon_on_arm_hit_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_de_dropweapon_on_arm_hit_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_de_dropweapon_on_arm_hit_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_de_dropweapon_on_arm_hit_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_de_dropweapon_on_arm_hit_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_de_dropweapon_on_arm_hit_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_de_dropweapon_on_arm_hit_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_de_dropweapon_on_arm_hit_war _null"

#define SET_SCR_DE_DROPWEAPON_CHANCE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_de_dropweapon_chance_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_de_dropweapon_chance_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_de_dropweapon_chance_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_de_dropweapon_chance_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_de_dropweapon_chance_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_de_dropweapon_chance_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_de_dropweapon_chance_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_de_dropweapon_chance_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_de_dropweapon_chance_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_de_dropweapon_chance_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_de_dropweapon_chance_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_de_dropweapon_chance_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_de_dropweapon_chance_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_de_dropweapon_chance_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_de_dropweapon_chance_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_de_dropweapon_chance_war _null"

#define SET_SCR_DE_FALLDOWN_ON_LEG_HIT \
  execOnDvarStringValue menu_cfg_gt ass "set scr_de_falldown_on_leg_hit_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_de_falldown_on_leg_hit_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_de_falldown_on_leg_hit_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_de_falldown_on_leg_hit_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_de_falldown_on_leg_hit_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_de_falldown_on_leg_hit_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_de_falldown_on_leg_hit_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_de_falldown_on_leg_hit_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_de_falldown_on_leg_hit_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_de_falldown_on_leg_hit_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_de_falldown_on_leg_hit_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_de_falldown_on_leg_hit_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_de_falldown_on_leg_hit_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_de_falldown_on_leg_hit_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_de_falldown_on_leg_hit_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_de_falldown_on_leg_hit_war _null"

#define SET_SCR_DE_FALLDOWN_CHANCE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_de_falldown_chance_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_de_falldown_chance_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_de_falldown_chance_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_de_falldown_chance_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_de_falldown_chance_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_de_falldown_chance_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_de_falldown_chance_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_de_falldown_chance_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_de_falldown_chance_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_de_falldown_chance_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_de_falldown_chance_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_de_falldown_chance_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_de_falldown_chance_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_de_falldown_chance_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_de_falldown_chance_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_de_falldown_chance_war _null"

#define SET_SCR_DE_SHIFTVIEW_ON_DAMAGE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_de_shiftview_on_damage_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_de_shiftview_on_damage_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_de_shiftview_on_damage_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_de_shiftview_on_damage_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_de_shiftview_on_damage_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_de_shiftview_on_damage_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_de_shiftview_on_damage_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_de_shiftview_on_damage_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_de_shiftview_on_damage_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_de_shiftview_on_damage_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_de_shiftview_on_damage_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_de_shiftview_on_damage_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_de_shiftview_on_damage_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_de_shiftview_on_damage_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_de_shiftview_on_damage_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_de_shiftview_on_damage_war _null"

#define SET_SCR_DE_BREAK_ANKLE_ON_FALL \
  execOnDvarStringValue menu_cfg_gt ass "set scr_de_break_ankle_on_fall_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_de_break_ankle_on_fall_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_de_break_ankle_on_fall_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_de_break_ankle_on_fall_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_de_break_ankle_on_fall_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_de_break_ankle_on_fall_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_de_break_ankle_on_fall_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_de_break_ankle_on_fall_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_de_break_ankle_on_fall_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_de_break_ankle_on_fall_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_de_break_ankle_on_fall_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_de_break_ankle_on_fall_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_de_break_ankle_on_fall_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_de_break_ankle_on_fall_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_de_break_ankle_on_fall_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_de_break_ankle_on_fall_war _null"

#define SET_SCR_DE_SLOWDOWN_ON_LEG_HIT \
  execOnDvarStringValue menu_cfg_gt ass "set scr_de_slowdown_on_leg_hit_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_de_slowdown_on_leg_hit_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_de_slowdown_on_leg_hit_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_de_slowdown_on_leg_hit_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_de_slowdown_on_leg_hit_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_de_slowdown_on_leg_hit_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_de_slowdown_on_leg_hit_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_de_slowdown_on_leg_hit_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_de_slowdown_on_leg_hit_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_de_slowdown_on_leg_hit_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_de_slowdown_on_leg_hit_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_de_slowdown_on_leg_hit_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_de_slowdown_on_leg_hit_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_de_slowdown_on_leg_hit_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_de_slowdown_on_leg_hit_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_de_slowdown_on_leg_hit_war _null"


// Setas
#define SETA_SCR_FALLDAMAGEMINHEIGHT \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_fallDamageMinHeight_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_fallDamageMinHeight_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_fallDamageMinHeight_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_fallDamageMinHeight_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_fallDamageMinHeight_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_fallDamageMinHeight_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_fallDamageMinHeight_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_fallDamageMinHeight_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_fallDamageMinHeight_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_fallDamageMinHeight_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_fallDamageMinHeight_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_fallDamageMinHeight_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_fallDamageMinHeight_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_fallDamageMinHeight_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_fallDamageMinHeight_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_fallDamageMinHeight_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_fallDamageMinHeight_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_fallDamageMinHeight_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_fallDamageMinHeight_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_fallDamageMinHeight_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt oitc "set tmp_gt_oitc 1" \
  execNowOnDvarStringValue scr_fallDamageMinHeight_oitc _null "toggle tmp_gt_oitc 0 1 2" \
  execNowOnDvarStringValue tmp_gt_oitc 2 "seta scr_fallDamageMinHeight_oitc _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_fallDamageMinHeight_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_fallDamageMinHeight_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_fallDamageMinHeight_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_fallDamageMinHeight_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_fallDamageMinHeight_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_fallDamageMinHeight_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_fallDamageMinHeight_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_fallDamageMinHeight_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_fallDamageMinHeight_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_fallDamageMinHeight_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_fallDamageMinHeight_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_fallDamageMinHeight_war _null"

#define SETA_SCR_FALLDAMAGEMAXHEIGHT \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_fallDamageMaxHeight_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_fallDamageMaxHeight_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_fallDamageMaxHeight_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_fallDamageMaxHeight_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_fallDamageMaxHeight_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_fallDamageMaxHeight_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_fallDamageMaxHeight_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_fallDamageMaxHeight_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_fallDamageMaxHeight_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_fallDamageMaxHeight_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_fallDamageMaxHeight_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_fallDamageMaxHeight_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_fallDamageMaxHeight_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_fallDamageMaxHeight_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_fallDamageMaxHeight_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_fallDamageMaxHeight_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_fallDamageMaxHeight_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_fallDamageMaxHeight_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_fallDamageMaxHeight_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_fallDamageMaxHeight_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt oitc "set tmp_gt_oitc 1" \
  execNowOnDvarStringValue scr_fallDamageMaxHeight_oitc _null "toggle tmp_gt_oitc 0 1 2" \
  execNowOnDvarStringValue tmp_gt_oitc 2 "seta scr_fallDamageMaxHeight_oitc _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_fallDamageMaxHeight_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_fallDamageMaxHeight_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_fallDamageMaxHeight_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_fallDamageMaxHeight_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_fallDamageMaxHeight_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_fallDamageMaxHeight_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_fallDamageMaxHeight_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_fallDamageMaxHeight_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_fallDamageMaxHeight_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_fallDamageMaxHeight_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_fallDamageMaxHeight_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_fallDamageMaxHeight_war _null"

#define SETA_SCR_JUMP_HEIGHT \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_jump_height_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_jump_height_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_jump_height_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_jump_height_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_jump_height_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_jump_height_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_jump_height_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_jump_height_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_jump_height_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_jump_height_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_jump_height_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_jump_height_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_jump_height_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_jump_height_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_jump_height_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_jump_height_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_jump_height_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_jump_height_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_jump_height_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_jump_height_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt oitc "set tmp_gt_oitc 1" \
  execNowOnDvarStringValue scr_jump_height_oitc _null "toggle tmp_gt_oitc 0 1 2" \
  execNowOnDvarStringValue tmp_gt_oitc 2 "seta scr_jump_height_oitc _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_jump_height_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_jump_height_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_jump_height_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_jump_height_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_jump_height_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_jump_height_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_jump_height_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_jump_height_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_jump_height_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_jump_height_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_jump_height_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_jump_height_war _null"

#define SETA_SCR_JUMP_SLOWDOWN_ENABLE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_jump_slowdown_enable_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_jump_slowdown_enable_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_jump_slowdown_enable_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_jump_slowdown_enable_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_jump_slowdown_enable_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_jump_slowdown_enable_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_jump_slowdown_enable_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_jump_slowdown_enable_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_jump_slowdown_enable_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_jump_slowdown_enable_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_jump_slowdown_enable_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_jump_slowdown_enable_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_jump_slowdown_enable_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_jump_slowdown_enable_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_jump_slowdown_enable_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_jump_slowdown_enable_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_jump_slowdown_enable_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_jump_slowdown_enable_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_jump_slowdown_enable_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_jump_slowdown_enable_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt oitc "set tmp_gt_oitc 1" \
  execNowOnDvarStringValue scr_jump_slowdown_enable_oitc _null "toggle tmp_gt_oitc 0 1 2" \
  execNowOnDvarStringValue tmp_gt_oitc 2 "seta scr_jump_slowdown_enable_oitc _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_jump_slowdown_enable_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_jump_slowdown_enable_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_jump_slowdown_enable_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_jump_slowdown_enable_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_jump_slowdown_enable_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_jump_slowdown_enable_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_jump_slowdown_enable_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_jump_slowdown_enable_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_jump_slowdown_enable_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_jump_slowdown_enable_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_jump_slowdown_enable_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_jump_slowdown_enable_war _null"

#define SETA_SCR_GAME_ALLOW_KILLCAM \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_game_allow_killcam_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_game_allow_killcam_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_game_allow_killcam_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_game_allow_killcam_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_game_allow_killcam_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_game_allow_killcam_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_game_allow_killcam_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_game_allow_killcam_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_game_allow_killcam_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_game_allow_killcam_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_game_allow_killcam_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_game_allow_killcam_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_game_allow_killcam_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_game_allow_killcam_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_game_allow_killcam_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_game_allow_killcam_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_game_allow_killcam_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_game_allow_killcam_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_game_allow_killcam_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_game_allow_killcam_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt oitc "set tmp_gt_oitc 1" \
  execNowOnDvarStringValue scr_game_allow_killcam_oitc _null "toggle tmp_gt_oitc 0 1 2" \
  execNowOnDvarStringValue tmp_gt_oitc 2 "seta scr_game_allow_killcam_oitc _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_game_allow_killcam_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_game_allow_killcam_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_game_allow_killcam_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_game_allow_killcam_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_game_allow_killcam_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_game_allow_killcam_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_game_allow_killcam_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_game_allow_killcam_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_game_allow_killcam_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_game_allow_killcam_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_game_allow_killcam_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_game_allow_killcam_war _null"

#define SETA_SCR_PLAYER_FORCERESPAWN \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_player_forcerespawn_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_player_forcerespawn_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_player_forcerespawn_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_player_forcerespawn_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_player_forcerespawn_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_player_forcerespawn_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_player_forcerespawn_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_player_forcerespawn_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_player_forcerespawn_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_player_forcerespawn_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_player_forcerespawn_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_player_forcerespawn_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_player_forcerespawn_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_player_forcerespawn_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_player_forcerespawn_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_player_forcerespawn_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_player_forcerespawn_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_player_forcerespawn_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_player_forcerespawn_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_player_forcerespawn_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_player_forcerespawn_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_player_forcerespawn_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_player_forcerespawn_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_player_forcerespawn_war _null"

#define SETA_SCR_QUICKACTIONS_ENABLE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_quickactions_enable_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_quickactions_enable_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_quickactions_enable_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_quickactions_enable_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_quickactions_enable_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_quickactions_enable_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_quickactions_enable_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_quickactions_enable_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_quickactions_enable_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_quickactions_enable_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_quickactions_enable_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_quickactions_enable_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_quickactions_enable_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_quickactions_enable_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_quickactions_enable_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_quickactions_enable_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_quickactions_enable_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_quickactions_enable_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_quickactions_enable_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_quickactions_enable_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_quickactions_enable_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_quickactions_enable_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_quickactions_enable_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_quickactions_enable_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_quickactions_enable_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_quickactions_enable_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_quickactions_enable_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_quickactions_enable_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_quickactions_enable_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_quickactions_enable_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_quickactions_enable_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_quickactions_enable_war _null"

#define SETA_SCR_THIRDPERSON_ENABLE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_thirdperson_enable_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_thirdperson_enable_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_thirdperson_enable_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_thirdperson_enable_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_thirdperson_enable_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_thirdperson_enable_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_thirdperson_enable_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_thirdperson_enable_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_thirdperson_enable_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_thirdperson_enable_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_thirdperson_enable_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_thirdperson_enable_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_thirdperson_enable_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_thirdperson_enable_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_thirdperson_enable_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_thirdperson_enable_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_thirdperson_enable_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_thirdperson_enable_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_thirdperson_enable_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_thirdperson_enable_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt oitc "set tmp_gt_oitc 1" \
  execNowOnDvarStringValue scr_thirdperson_enable_oitc _null "toggle tmp_gt_oitc 0 1 2" \
  execNowOnDvarStringValue tmp_gt_oitc 2 "seta scr_thirdperson_enable_oitc _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_thirdperson_enable_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_thirdperson_enable_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_thirdperson_enable_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_thirdperson_enable_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_thirdperson_enable_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_thirdperson_enable_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_thirdperson_enable_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_thirdperson_enable_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_thirdperson_enable_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_thirdperson_enable_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_thirdperson_enable_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_thirdperson_enable_war _null"

#define SETA_SCR_PLAYER_LEAN_FIX \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_player_lean_fix_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_player_lean_fix_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_player_lean_fix_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_player_lean_fix_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_player_lean_fix_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_player_lean_fix_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_player_lean_fix_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_player_lean_fix_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_player_lean_fix_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_player_lean_fix_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_player_lean_fix_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_player_lean_fix_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_player_lean_fix_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_player_lean_fix_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_player_lean_fix_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_player_lean_fix_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_player_lean_fix_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_player_lean_fix_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_player_lean_fix_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_player_lean_fix_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt oitc "set tmp_gt_oitc 1" \
  execNowOnDvarStringValue scr_player_lean_fix_oitc _null "toggle tmp_gt_oitc 0 1 2" \
  execNowOnDvarStringValue tmp_gt_oitc 2 "seta scr_player_lean_fix_oitc _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_player_lean_fix_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_player_lean_fix_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_player_lean_fix_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_player_lean_fix_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_player_lean_fix_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_player_lean_fix_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_player_lean_fix_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_player_lean_fix_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_player_lean_fix_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_player_lean_fix_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_player_lean_fix_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_player_lean_fix_war _null"

#define SETA_SCR_BOB_EFFECT_ENABLE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_bob_effect_enable_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_bob_effect_enable_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_bob_effect_enable_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_bob_effect_enable_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_bob_effect_enable_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_bob_effect_enable_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_bob_effect_enable_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_bob_effect_enable_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_bob_effect_enable_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_bob_effect_enable_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_bob_effect_enable_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_bob_effect_enable_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_bob_effect_enable_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_bob_effect_enable_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_bob_effect_enable_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_bob_effect_enable_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_bob_effect_enable_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_bob_effect_enable_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_bob_effect_enable_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_bob_effect_enable_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt oitc "set tmp_gt_oitc 1" \
  execNowOnDvarStringValue scr_bob_effect_enable_oitc _null "toggle tmp_gt_oitc 0 1 2" \
  execNowOnDvarStringValue tmp_gt_oitc 2 "seta scr_bob_effect_enable_oitc _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_bob_effect_enable_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_bob_effect_enable_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_bob_effect_enable_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_bob_effect_enable_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_bob_effect_enable_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_bob_effect_enable_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_bob_effect_enable_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_bob_effect_enable_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_bob_effect_enable_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_bob_effect_enable_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_bob_effect_enable_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_bob_effect_enable_war _null"

#define SETA_SCR_CG_FOOTSTEPS \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_cg_footsteps_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_cg_footsteps_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_cg_footsteps_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_cg_footsteps_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_cg_footsteps_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_cg_footsteps_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_cg_footsteps_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_cg_footsteps_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_cg_footsteps_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_cg_footsteps_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_cg_footsteps_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_cg_footsteps_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_cg_footsteps_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_cg_footsteps_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_cg_footsteps_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_cg_footsteps_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_cg_footsteps_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_cg_footsteps_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_cg_footsteps_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_cg_footsteps_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt oitc "set tmp_gt_oitc 1" \
  execNowOnDvarStringValue scr_cg_footsteps_oitc _null "toggle tmp_gt_oitc 0 1 2" \
  execNowOnDvarStringValue tmp_gt_oitc 2 "seta scr_cg_footsteps_oitc _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_cg_footsteps_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_cg_footsteps_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_cg_footsteps_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_cg_footsteps_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_cg_footsteps_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_cg_footsteps_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_cg_footsteps_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_cg_footsteps_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_cg_footsteps_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_cg_footsteps_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_cg_footsteps_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_cg_footsteps_war _null"

#define SETA_SCR_CAP_ENABLE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_cap_enable_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_cap_enable_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_cap_enable_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_cap_enable_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_cap_enable_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_cap_enable_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_cap_enable_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_cap_enable_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_cap_enable_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_cap_enable_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_cap_enable_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_cap_enable_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_cap_enable_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_cap_enable_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_cap_enable_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_cap_enable_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_cap_enable_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_cap_enable_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_cap_enable_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_cap_enable_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt oitc "set tmp_gt_oitc 1" \
  execNowOnDvarStringValue scr_cap_enable_oitc _null "toggle tmp_gt_oitc 0 1 2" \
  execNowOnDvarStringValue tmp_gt_oitc 2 "seta scr_cap_enable_oitc _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_cap_enable_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_cap_enable_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_cap_enable_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_cap_enable_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_cap_enable_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_cap_enable_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_cap_enable_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_cap_enable_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_cap_enable_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_cap_enable_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_cap_enable_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_cap_enable_war _null"

#define SETA_SCR_CAP_TIME \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_cap_time_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_cap_time_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_cap_time_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_cap_time_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_cap_time_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_cap_time_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_cap_time_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_cap_time_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_cap_time_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_cap_time_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_cap_time_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_cap_time_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_cap_time_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_cap_time_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_cap_time_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_cap_time_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_cap_time_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_cap_time_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_cap_time_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_cap_time_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt oitc "set tmp_gt_oitc 1" \
  execNowOnDvarStringValue scr_cap_time_oitc _null "toggle tmp_gt_oitc 0 1 2" \
  execNowOnDvarStringValue tmp_gt_oitc 2 "seta scr_cap_time_oitc _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_cap_time_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_cap_time_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_cap_time_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_cap_time_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_cap_time_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_cap_time_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_cap_time_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_cap_time_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_cap_time_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_cap_time_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_cap_time_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_cap_time_war _null"

#define SETA_SCR_CAP_TIME_ACTIVATED \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_cap_time_activated_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_cap_time_activated_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_cap_time_activated_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_cap_time_activated_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_cap_time_activated_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_cap_time_activated_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_cap_time_activated_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_cap_time_activated_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_cap_time_activated_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_cap_time_activated_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_cap_time_activated_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_cap_time_activated_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_cap_time_activated_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_cap_time_activated_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_cap_time_activated_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_cap_time_activated_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_cap_time_activated_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_cap_time_activated_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_cap_time_activated_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_cap_time_activated_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt oitc "set tmp_gt_oitc 1" \
  execNowOnDvarStringValue scr_cap_time_activated_oitc _null "toggle tmp_gt_oitc 0 1 2" \
  execNowOnDvarStringValue tmp_gt_oitc 2 "seta scr_cap_time_activated_oitc _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_cap_time_activated_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_cap_time_activated_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_cap_time_activated_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_cap_time_activated_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_cap_time_activated_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_cap_time_activated_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_cap_time_activated_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_cap_time_activated_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_cap_time_activated_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_cap_time_activated_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_cap_time_activated_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_cap_time_activated_war _null"

#define SETA_SCR_CAP_FIRSTSPAWN \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_cap_firstspawn_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_cap_firstspawn_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_cap_firstspawn_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_cap_firstspawn_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_cap_firstspawn_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_cap_firstspawn_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_cap_firstspawn_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_cap_firstspawn_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_cap_firstspawn_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_cap_firstspawn_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_cap_firstspawn_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_cap_firstspawn_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_cap_firstspawn_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_cap_firstspawn_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_cap_firstspawn_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_cap_firstspawn_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_cap_firstspawn_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_cap_firstspawn_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_cap_firstspawn_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_cap_firstspawn_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt oitc "set tmp_gt_oitc 1" \
  execNowOnDvarStringValue scr_cap_firstspawn_oitc _null "toggle tmp_gt_oitc 0 1 2" \
  execNowOnDvarStringValue tmp_gt_oitc 2 "seta scr_cap_firstspawn_oitc _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_cap_firstspawn_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_cap_firstspawn_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_cap_firstspawn_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_cap_firstspawn_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_cap_firstspawn_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_cap_firstspawn_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_cap_firstspawn_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_cap_firstspawn_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_cap_firstspawn_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_cap_firstspawn_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_cap_firstspawn_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_cap_firstspawn_war _null"

#define SETA_SCR_DE_DROPWEAPON_ON_ARM_HIT \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_de_dropweapon_on_arm_hit_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_de_dropweapon_on_arm_hit_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_de_dropweapon_on_arm_hit_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_de_dropweapon_on_arm_hit_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_de_dropweapon_on_arm_hit_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_de_dropweapon_on_arm_hit_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_de_dropweapon_on_arm_hit_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_de_dropweapon_on_arm_hit_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_de_dropweapon_on_arm_hit_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_de_dropweapon_on_arm_hit_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_de_dropweapon_on_arm_hit_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_de_dropweapon_on_arm_hit_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_de_dropweapon_on_arm_hit_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_de_dropweapon_on_arm_hit_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_de_dropweapon_on_arm_hit_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_de_dropweapon_on_arm_hit_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_de_dropweapon_on_arm_hit_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_de_dropweapon_on_arm_hit_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_de_dropweapon_on_arm_hit_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_de_dropweapon_on_arm_hit_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_de_dropweapon_on_arm_hit_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_de_dropweapon_on_arm_hit_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_de_dropweapon_on_arm_hit_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_de_dropweapon_on_arm_hit_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_de_dropweapon_on_arm_hit_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_de_dropweapon_on_arm_hit_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_de_dropweapon_on_arm_hit_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_de_dropweapon_on_arm_hit_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_de_dropweapon_on_arm_hit_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_de_dropweapon_on_arm_hit_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_de_dropweapon_on_arm_hit_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_de_dropweapon_on_arm_hit_war _null"

#define SETA_SCR_DE_DROPWEAPON_CHANCE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_de_dropweapon_chance_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_de_dropweapon_chance_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_de_dropweapon_chance_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_de_dropweapon_chance_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_de_dropweapon_chance_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_de_dropweapon_chance_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_de_dropweapon_chance_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_de_dropweapon_chance_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_de_dropweapon_chance_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_de_dropweapon_chance_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_de_dropweapon_chance_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_de_dropweapon_chance_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_de_dropweapon_chance_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_de_dropweapon_chance_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_de_dropweapon_chance_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_de_dropweapon_chance_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_de_dropweapon_chance_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_de_dropweapon_chance_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_de_dropweapon_chance_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_de_dropweapon_chance_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_de_dropweapon_chance_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_de_dropweapon_chance_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_de_dropweapon_chance_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_de_dropweapon_chance_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_de_dropweapon_chance_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_de_dropweapon_chance_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_de_dropweapon_chance_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_de_dropweapon_chance_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_de_dropweapon_chance_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_de_dropweapon_chance_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_de_dropweapon_chance_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_de_dropweapon_chance_war _null"

#define SETA_SCR_DE_FALLDOWN_ON_LEG_HIT \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_de_falldown_on_leg_hit_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_de_falldown_on_leg_hit_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_de_falldown_on_leg_hit_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_de_falldown_on_leg_hit_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_de_falldown_on_leg_hit_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_de_falldown_on_leg_hit_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_de_falldown_on_leg_hit_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_de_falldown_on_leg_hit_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_de_falldown_on_leg_hit_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_de_falldown_on_leg_hit_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_de_falldown_on_leg_hit_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_de_falldown_on_leg_hit_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_de_falldown_on_leg_hit_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_de_falldown_on_leg_hit_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_de_falldown_on_leg_hit_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_de_falldown_on_leg_hit_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_de_falldown_on_leg_hit_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_de_falldown_on_leg_hit_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_de_falldown_on_leg_hit_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_de_falldown_on_leg_hit_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_de_falldown_on_leg_hit_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_de_falldown_on_leg_hit_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_de_falldown_on_leg_hit_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_de_falldown_on_leg_hit_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_de_falldown_on_leg_hit_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_de_falldown_on_leg_hit_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_de_falldown_on_leg_hit_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_de_falldown_on_leg_hit_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_de_falldown_on_leg_hit_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_de_falldown_on_leg_hit_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_de_falldown_on_leg_hit_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_de_falldown_on_leg_hit_war _null"

#define SETA_SCR_DE_FALLDOWN_CHANCE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_de_falldown_chance_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_de_falldown_chance_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_de_falldown_chance_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_de_falldown_chance_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_de_falldown_chance_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_de_falldown_chance_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_de_falldown_chance_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_de_falldown_chance_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_de_falldown_chance_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_de_falldown_chance_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_de_falldown_chance_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_de_falldown_chance_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_de_falldown_chance_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_de_falldown_chance_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_de_falldown_chance_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_de_falldown_chance_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_de_falldown_chance_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_de_falldown_chance_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_de_falldown_chance_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_de_falldown_chance_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_de_falldown_chance_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_de_falldown_chance_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_de_falldown_chance_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_de_falldown_chance_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_de_falldown_chance_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_de_falldown_chance_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_de_falldown_chance_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_de_falldown_chance_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_de_falldown_chance_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_de_falldown_chance_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_de_falldown_chance_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_de_falldown_chance_war _null"

#define SETA_SCR_DE_SHIFTVIEW_ON_DAMAGE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_de_shiftview_on_damage_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_de_shiftview_on_damage_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_de_shiftview_on_damage_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_de_shiftview_on_damage_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_de_shiftview_on_damage_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_de_shiftview_on_damage_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_de_shiftview_on_damage_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_de_shiftview_on_damage_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_de_shiftview_on_damage_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_de_shiftview_on_damage_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_de_shiftview_on_damage_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_de_shiftview_on_damage_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_de_shiftview_on_damage_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_de_shiftview_on_damage_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_de_shiftview_on_damage_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_de_shiftview_on_damage_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_de_shiftview_on_damage_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_de_shiftview_on_damage_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_de_shiftview_on_damage_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_de_shiftview_on_damage_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_de_shiftview_on_damage_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_de_shiftview_on_damage_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_de_shiftview_on_damage_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_de_shiftview_on_damage_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_de_shiftview_on_damage_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_de_shiftview_on_damage_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_de_shiftview_on_damage_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_de_shiftview_on_damage_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_de_shiftview_on_damage_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_de_shiftview_on_damage_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_de_shiftview_on_damage_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_de_shiftview_on_damage_war _null"

#define SETA_SCR_DE_BREAK_ANKLE_ON_FALL \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_de_break_ankle_on_fall_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_de_break_ankle_on_fall_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_de_break_ankle_on_fall_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_de_break_ankle_on_fall_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_de_break_ankle_on_fall_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_de_break_ankle_on_fall_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_de_break_ankle_on_fall_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_de_break_ankle_on_fall_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_de_break_ankle_on_fall_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_de_break_ankle_on_fall_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_de_break_ankle_on_fall_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_de_break_ankle_on_fall_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_de_break_ankle_on_fall_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_de_break_ankle_on_fall_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_de_break_ankle_on_fall_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_de_break_ankle_on_fall_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_de_break_ankle_on_fall_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_de_break_ankle_on_fall_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_de_break_ankle_on_fall_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_de_break_ankle_on_fall_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_de_break_ankle_on_fall_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_de_break_ankle_on_fall_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_de_break_ankle_on_fall_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_de_break_ankle_on_fall_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_de_break_ankle_on_fall_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_de_break_ankle_on_fall_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_de_break_ankle_on_fall_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_de_break_ankle_on_fall_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_de_break_ankle_on_fall_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_de_break_ankle_on_fall_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_de_break_ankle_on_fall_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_de_break_ankle_on_fall_war _null"

#define SETA_SCR_DE_SLOWDOWN_ON_LEG_HIT \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_de_slowdown_on_leg_hit_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_de_slowdown_on_leg_hit_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_de_slowdown_on_leg_hit_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_de_slowdown_on_leg_hit_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_de_slowdown_on_leg_hit_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_de_slowdown_on_leg_hit_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_de_slowdown_on_leg_hit_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_de_slowdown_on_leg_hit_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_de_slowdown_on_leg_hit_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_de_slowdown_on_leg_hit_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_de_slowdown_on_leg_hit_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_de_slowdown_on_leg_hit_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_de_slowdown_on_leg_hit_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_de_slowdown_on_leg_hit_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_de_slowdown_on_leg_hit_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_de_slowdown_on_leg_hit_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_de_slowdown_on_leg_hit_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_de_slowdown_on_leg_hit_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_de_slowdown_on_leg_hit_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_de_slowdown_on_leg_hit_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_de_slowdown_on_leg_hit_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_de_slowdown_on_leg_hit_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_de_slowdown_on_leg_hit_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_de_slowdown_on_leg_hit_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_de_slowdown_on_leg_hit_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_de_slowdown_on_leg_hit_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_de_slowdown_on_leg_hit_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_de_slowdown_on_leg_hit_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_de_slowdown_on_leg_hit_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_de_slowdown_on_leg_hit_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_de_slowdown_on_leg_hit_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_de_slowdown_on_leg_hit_war _null"