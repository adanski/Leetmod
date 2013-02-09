#ifdef FILLMENUDVARS
#undef FILLMENUDVARS
#endif

#define FILLMENUDVARS     exec "exec menudvars/spectate/l/_def.cfg"\
    execOnDvarStringValue menu_cfg_gt ass "exec menudvars/spectate/l/ass.cfg"\
    execOnDvarStringValue menu_cfg_gt bel "exec menudvars/spectate/l/bel.cfg"\
    execOnDvarStringValue menu_cfg_gt ch "exec menudvars/spectate/l/ch.cfg"\
    execOnDvarStringValue menu_cfg_gt ctf "exec menudvars/spectate/l/ctf.cfg"\
    execOnDvarStringValue menu_cfg_gt dm "exec menudvars/spectate/l/dm.cfg"\
    execOnDvarStringValue menu_cfg_gt dom "exec menudvars/spectate/l/dom.cfg"\
    execOnDvarStringValue menu_cfg_gt ftag "exec menudvars/spectate/l/ftag.cfg"\
    execOnDvarStringValue menu_cfg_gt gg "exec menudvars/spectate/l/gg.cfg"\
    execOnDvarStringValue menu_cfg_gt gr "exec menudvars/spectate/l/gr.cfg"\
    execOnDvarStringValue menu_cfg_gt koth "exec menudvars/spectate/l/koth.cfg"\
    execOnDvarStringValue menu_cfg_gt oitc "exec menudvars/spectate/l/oitc.cfg"\
    execOnDvarStringValue menu_cfg_gt re "exec menudvars/spectate/l/re.cfg"\
    execOnDvarStringValue menu_cfg_gt sab "exec menudvars/spectate/l/sab.cfg"\
    execOnDvarStringValue menu_cfg_gt sd "exec menudvars/spectate/l/sd.cfg"\
    execOnDvarStringValue menu_cfg_gt ss "exec menudvars/spectate/l/ss.cfg"\
    execOnDvarStringValue menu_cfg_gt tgr "exec menudvars/spectate/l/tgr.cfg"\
    execOnDvarStringValue menu_cfg_gt war "exec menudvars/spectate/l/war.cfg"

#ifdef SAVEMENUDVARS
#undef SAVEMENUDVARS
#endif

#define SAVEMENUDVARS     execOnDvarStringValue menu_cfg_gt _def "exec menudvars/spectate/s/_def.cfg"\
    execOnDvarStringValue menu_cfg_gt ass "exec menudvars/spectate/s/ass.cfg"\
    execOnDvarStringValue menu_cfg_gt bel "exec menudvars/spectate/s/bel.cfg"\
    execOnDvarStringValue menu_cfg_gt ch "exec menudvars/spectate/s/ch.cfg"\
    execOnDvarStringValue menu_cfg_gt ctf "exec menudvars/spectate/s/ctf.cfg"\
    execOnDvarStringValue menu_cfg_gt dm "exec menudvars/spectate/s/dm.cfg"\
    execOnDvarStringValue menu_cfg_gt dom "exec menudvars/spectate/s/dom.cfg"\
    execOnDvarStringValue menu_cfg_gt ftag "exec menudvars/spectate/s/ftag.cfg"\
    execOnDvarStringValue menu_cfg_gt gg "exec menudvars/spectate/s/gg.cfg"\
    execOnDvarStringValue menu_cfg_gt gr "exec menudvars/spectate/s/gr.cfg"\
    execOnDvarStringValue menu_cfg_gt koth "exec menudvars/spectate/s/koth.cfg"\
    execOnDvarStringValue menu_cfg_gt oitc "exec menudvars/spectate/s/oitc.cfg"\
    execOnDvarStringValue menu_cfg_gt re "exec menudvars/spectate/s/re.cfg"\
    execOnDvarStringValue menu_cfg_gt sab "exec menudvars/spectate/s/sab.cfg"\
    execOnDvarStringValue menu_cfg_gt sd "exec menudvars/spectate/s/sd.cfg"\
    execOnDvarStringValue menu_cfg_gt ss "exec menudvars/spectate/s/ss.cfg"\
    execOnDvarStringValue menu_cfg_gt tgr "exec menudvars/spectate/s/tgr.cfg"\
    execOnDvarStringValue menu_cfg_gt war "exec menudvars/spectate/s/war.cfg"

#ifdef STOREMENUDVARS
#undef STOREMENUDVARS
#endif

#define STOREMENUDVARS     execOnDvarStringValue menu_cfg_gt _def "exec menudvars/spectate/z/_def.cfg"\
    execOnDvarStringValue menu_cfg_gt ass "exec menudvars/spectate/z/ass.cfg"\
    execOnDvarStringValue menu_cfg_gt bel "exec menudvars/spectate/z/bel.cfg"\
    execOnDvarStringValue menu_cfg_gt ch "exec menudvars/spectate/z/ch.cfg"\
    execOnDvarStringValue menu_cfg_gt ctf "exec menudvars/spectate/z/ctf.cfg"\
    execOnDvarStringValue menu_cfg_gt dm "exec menudvars/spectate/z/dm.cfg"\
    execOnDvarStringValue menu_cfg_gt dom "exec menudvars/spectate/z/dom.cfg"\
    execOnDvarStringValue menu_cfg_gt ftag "exec menudvars/spectate/z/ftag.cfg"\
    execOnDvarStringValue menu_cfg_gt gg "exec menudvars/spectate/z/gg.cfg"\
    execOnDvarStringValue menu_cfg_gt gr "exec menudvars/spectate/z/gr.cfg"\
    execOnDvarStringValue menu_cfg_gt koth "exec menudvars/spectate/z/koth.cfg"\
    execOnDvarStringValue menu_cfg_gt oitc "exec menudvars/spectate/z/oitc.cfg"\
    execOnDvarStringValue menu_cfg_gt re "exec menudvars/spectate/z/re.cfg"\
    execOnDvarStringValue menu_cfg_gt sab "exec menudvars/spectate/z/sab.cfg"\
    execOnDvarStringValue menu_cfg_gt sd "exec menudvars/spectate/z/sd.cfg"\
    execOnDvarStringValue menu_cfg_gt ss "exec menudvars/spectate/z/ss.cfg"\
    execOnDvarStringValue menu_cfg_gt tgr "exec menudvars/spectate/z/tgr.cfg"\
    execOnDvarStringValue menu_cfg_gt war "exec menudvars/spectate/z/war.cfg"

#define SET_SCR_GAME_SPECTATETYPE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_game_spectatetype_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_game_spectatetype_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_game_spectatetype_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_game_spectatetype_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_game_spectatetype_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_game_spectatetype_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_game_spectatetype_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_game_spectatetype_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_game_spectatetype_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_game_spectatetype_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_game_spectatetype_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_game_spectatetype_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_game_spectatetype_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_game_spectatetype_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_game_spectatetype_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_game_spectatetype_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_game_spectatetype_war _null"


#define SET_SCR_GAME_SPECTATETYPE_SPECTATORS \
  execOnDvarStringValue menu_cfg_gt ass "set scr_game_spectatetype_spectators_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_game_spectatetype_spectators_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_game_spectatetype_spectators_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_game_spectatetype_spectators_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_game_spectatetype_spectators_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_game_spectatetype_spectators_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_game_spectatetype_spectators_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_game_spectatetype_spectators_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_game_spectatetype_spectators_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_game_spectatetype_spectators_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_game_spectatetype_spectators_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_game_spectatetype_spectators_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_game_spectatetype_spectators_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_game_spectatetype_spectators_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_game_spectatetype_spectators_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_game_spectatetype_spectators_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_game_spectatetype_spectators_war _null"

#define SET_SCR_GAME_SPECTATORS_GUIDS \
  execOnDvarStringValue menu_cfg_gt ass "set scr_game_spectators_guids_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_game_spectators_guids_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_game_spectators_guids_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_game_spectators_guids_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_game_spectators_guids_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_game_spectators_guids_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_game_spectators_guids_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_game_spectators_guids_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_game_spectators_guids_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_game_spectators_guids_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_game_spectators_guids_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_game_spectators_guids_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_game_spectators_guids_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_game_spectators_guids_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_game_spectators_guids_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_game_spectators_guids_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_game_spectators_guids_war _null"

#define SET_SCR_ALLOW_THIRDPERSON \
  execOnDvarStringValue menu_cfg_gt ass "set scr_allow_thirdperson_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_allow_thirdperson_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_allow_thirdperson_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_allow_thirdperson_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_allow_thirdperson_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_allow_thirdperson_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_allow_thirdperson_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_allow_thirdperson_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_allow_thirdperson_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_allow_thirdperson_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_allow_thirdperson_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_allow_thirdperson_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_allow_thirdperson_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_allow_thirdperson_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_allow_thirdperson_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_allow_thirdperson_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_allow_thirdperson_war _null"

#define SET_SCR_ALLOW_THIRDPERSON_GUIDS \
  execOnDvarStringValue menu_cfg_gt ass "set scr_allow_thirdperson_guids_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_allow_thirdperson_guids_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_allow_thirdperson_guids_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_allow_thirdperson_guids_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_allow_thirdperson_guids_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_allow_thirdperson_guids_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_allow_thirdperson_guids_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_allow_thirdperson_guids_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_allow_thirdperson_guids_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_allow_thirdperson_guids_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_allow_thirdperson_guids_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_allow_thirdperson_guids_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_allow_thirdperson_guids_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_allow_thirdperson_guids_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_allow_thirdperson_guids_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_allow_thirdperson_guids_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_allow_thirdperson_guids_war _null"

#define SET_SCR_LIVEBROADCAST_ENABLE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_livebroadcast_enable_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_livebroadcast_enable_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_livebroadcast_enable_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_livebroadcast_enable_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_livebroadcast_enable_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_livebroadcast_enable_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_livebroadcast_enable_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_livebroadcast_enable_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_livebroadcast_enable_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_livebroadcast_enable_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_livebroadcast_enable_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_livebroadcast_enable_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_livebroadcast_enable_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_livebroadcast_enable_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_livebroadcast_enable_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_livebroadcast_enable_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_livebroadcast_enable_war _null"

#define SET_SCR_LIVEBROADCAST_GUIDS \
  execOnDvarStringValue menu_cfg_gt ass "set scr_livebroadcast_guids_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_livebroadcast_guids_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_livebroadcast_guids_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_livebroadcast_guids_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_livebroadcast_guids_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_livebroadcast_guids_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_livebroadcast_guids_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_livebroadcast_guids_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_livebroadcast_guids_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_livebroadcast_guids_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_livebroadcast_guids_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_livebroadcast_guids_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_livebroadcast_guids_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_livebroadcast_guids_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_livebroadcast_guids_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_livebroadcast_guids_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_livebroadcast_guids_war _null"

#define SET_SCR_IDLE_SWITCH_SPECTATOR \
  execOnDvarStringValue menu_cfg_gt ass "set scr_idle_switch_spectator_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_idle_switch_spectator_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_idle_switch_spectator_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_idle_switch_spectator_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_idle_switch_spectator_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_idle_switch_spectator_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_idle_switch_spectator_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_idle_switch_spectator_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_idle_switch_spectator_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_idle_switch_spectator_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_idle_switch_spectator_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_idle_switch_spectator_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_idle_switch_spectator_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_idle_switch_spectator_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_idle_switch_spectator_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_idle_switch_spectator_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_idle_switch_spectator_war _null"

#define SET_SCR_IDLE_SPECTATOR_TIMEOUT \
  execOnDvarStringValue menu_cfg_gt ass "set scr_idle_spectator_timeout_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_idle_spectator_timeout_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_idle_spectator_timeout_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_idle_spectator_timeout_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_idle_spectator_timeout_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_idle_spectator_timeout_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_idle_spectator_timeout_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_idle_spectator_timeout_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_idle_spectator_timeout_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_idle_spectator_timeout_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_idle_spectator_timeout_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_idle_spectator_timeout_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_idle_spectator_timeout_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_idle_spectator_timeout_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_idle_spectator_timeout_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_idle_spectator_timeout_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_idle_spectator_timeout_war _null"

#define SET_SCR_IDLE_SHOW_WARNING \
  execOnDvarStringValue menu_cfg_gt ass "set scr_idle_show_warning_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_idle_show_warning_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_idle_show_warning_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_idle_show_warning_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_idle_show_warning_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_idle_show_warning_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_idle_show_warning_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_idle_show_warning_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_idle_show_warning_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_idle_show_warning_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_idle_show_warning_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_idle_show_warning_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_idle_show_warning_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_idle_show_warning_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_idle_show_warning_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_idle_show_warning_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_idle_show_warning_war _null"

#define SET_SCR_IDLE_PROTECTED_TAGS \
  execOnDvarStringValue menu_cfg_gt ass "set scr_idle_protected_tags_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_idle_protected_tags_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_idle_protected_tags_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_idle_protected_tags_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_idle_protected_tags_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_idle_protected_tags_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_idle_protected_tags_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_idle_protected_tags_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_idle_protected_tags_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_idle_protected_tags_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_idle_protected_tags_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_idle_protected_tags_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_idle_protected_tags_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_idle_protected_tags_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_idle_protected_tags_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_idle_protected_tags_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_idle_protected_tags_war _null"

#define SET_SCR_IDLE_PROTECTED_GUIDS \
  execOnDvarStringValue menu_cfg_gt ass "set scr_idle_protected_guids_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_idle_protected_guids_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_idle_protected_guids_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_idle_protected_guids_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_idle_protected_guids_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_idle_protected_guids_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_idle_protected_guids_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_idle_protected_guids_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_idle_protected_guids_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_idle_protected_guids_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_idle_protected_guids_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_idle_protected_guids_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_idle_protected_guids_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_idle_protected_guids_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_idle_protected_guids_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_idle_protected_guids_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_idle_protected_guids_war _null"

