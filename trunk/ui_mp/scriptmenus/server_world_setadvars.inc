#ifdef FILLMENUDVARS
#undef FILLMENUDVARS
#endif

#define FILLMENUDVARS     exec "exec menudvars/world/l/_def.cfg"\
    execOnDvarStringValue menu_cfg_gt ass "exec menudvars/world/l/ass.cfg"\
    execOnDvarStringValue menu_cfg_gt bel "exec menudvars/world/l/bel.cfg"\
    execOnDvarStringValue menu_cfg_gt ch "exec menudvars/world/l/ch.cfg"\
    execOnDvarStringValue menu_cfg_gt ctf "exec menudvars/world/l/ctf.cfg"\
    execOnDvarStringValue menu_cfg_gt dm "exec menudvars/world/l/dm.cfg"\
    execOnDvarStringValue menu_cfg_gt dom "exec menudvars/world/l/dom.cfg"\
    execOnDvarStringValue menu_cfg_gt ftag "exec menudvars/world/l/ftag.cfg"\
    execOnDvarStringValue menu_cfg_gt gg "exec menudvars/world/l/gg.cfg"\
    execOnDvarStringValue menu_cfg_gt gr "exec menudvars/world/l/gr.cfg"\
    execOnDvarStringValue menu_cfg_gt koth "exec menudvars/world/l/koth.cfg"\
    execOnDvarStringValue menu_cfg_gt oitc "exec menudvars/world/l/oitc.cfg"\
    execOnDvarStringValue menu_cfg_gt re "exec menudvars/world/l/re.cfg"\
    execOnDvarStringValue menu_cfg_gt sab "exec menudvars/world/l/sab.cfg"\
    execOnDvarStringValue menu_cfg_gt sd "exec menudvars/world/l/sd.cfg"\
    execOnDvarStringValue menu_cfg_gt ss "exec menudvars/world/l/ss.cfg"\
    execOnDvarStringValue menu_cfg_gt tgr "exec menudvars/world/l/tgr.cfg"\
    execOnDvarStringValue menu_cfg_gt war "exec menudvars/world/l/war.cfg"

#ifdef SAVEMENUDVARS
#undef SAVEMENUDVARS
#endif

#define SAVEMENUDVARS     execOnDvarStringValue menu_cfg_gt _def "exec menudvars/world/s/_def.cfg"\
    execOnDvarStringValue menu_cfg_gt ass "exec menudvars/world/s/ass.cfg"\
    execOnDvarStringValue menu_cfg_gt bel "exec menudvars/world/s/bel.cfg"\
    execOnDvarStringValue menu_cfg_gt ch "exec menudvars/world/s/ch.cfg"\
    execOnDvarStringValue menu_cfg_gt ctf "exec menudvars/world/s/ctf.cfg"\
    execOnDvarStringValue menu_cfg_gt dm "exec menudvars/world/s/dm.cfg"\
    execOnDvarStringValue menu_cfg_gt dom "exec menudvars/world/s/dom.cfg"\
    execOnDvarStringValue menu_cfg_gt ftag "exec menudvars/world/s/ftag.cfg"\
    execOnDvarStringValue menu_cfg_gt gg "exec menudvars/world/s/gg.cfg"\
    execOnDvarStringValue menu_cfg_gt gr "exec menudvars/world/s/gr.cfg"\
    execOnDvarStringValue menu_cfg_gt koth "exec menudvars/world/s/koth.cfg"\
    execOnDvarStringValue menu_cfg_gt oitc "exec menudvars/world/s/oitc.cfg"\
    execOnDvarStringValue menu_cfg_gt re "exec menudvars/world/s/re.cfg"\
    execOnDvarStringValue menu_cfg_gt sab "exec menudvars/world/s/sab.cfg"\
    execOnDvarStringValue menu_cfg_gt sd "exec menudvars/world/s/sd.cfg"\
    execOnDvarStringValue menu_cfg_gt ss "exec menudvars/world/s/ss.cfg"\
    execOnDvarStringValue menu_cfg_gt tgr "exec menudvars/world/s/tgr.cfg"\
    execOnDvarStringValue menu_cfg_gt war "exec menudvars/world/s/war.cfg"
		
#ifdef STOREMENUDVARS
#undef STOREMENUDVARS
#endif

#define STOREMENUDVARS     execOnDvarStringValue menu_cfg_gt _def "exec menudvars/world/z/_def.cfg"\
    execOnDvarStringValue menu_cfg_gt ass "exec menudvars/world/z/ass.cfg"\
    execOnDvarStringValue menu_cfg_gt bel "exec menudvars/world/z/bel.cfg"\
    execOnDvarStringValue menu_cfg_gt ch "exec menudvars/world/z/ch.cfg"\
    execOnDvarStringValue menu_cfg_gt ctf "exec menudvars/world/z/ctf.cfg"\
    execOnDvarStringValue menu_cfg_gt dm "exec menudvars/world/z/dm.cfg"\
    execOnDvarStringValue menu_cfg_gt dom "exec menudvars/world/z/dom.cfg"\
    execOnDvarStringValue menu_cfg_gt ftag "exec menudvars/world/z/ftag.cfg"\
    execOnDvarStringValue menu_cfg_gt gg "exec menudvars/world/z/gg.cfg"\
    execOnDvarStringValue menu_cfg_gt gr "exec menudvars/world/z/gr.cfg"\
    execOnDvarStringValue menu_cfg_gt koth "exec menudvars/world/z/koth.cfg"\
    execOnDvarStringValue menu_cfg_gt oitc "exec menudvars/world/z/oitc.cfg"\
    execOnDvarStringValue menu_cfg_gt re "exec menudvars/world/z/re.cfg"\
    execOnDvarStringValue menu_cfg_gt sab "exec menudvars/world/z/sab.cfg"\
    execOnDvarStringValue menu_cfg_gt sd "exec menudvars/world/z/sd.cfg"\
    execOnDvarStringValue menu_cfg_gt ss "exec menudvars/world/z/ss.cfg"\
    execOnDvarStringValue menu_cfg_gt tgr "exec menudvars/world/z/tgr.cfg"\
    execOnDvarStringValue menu_cfg_gt war "exec menudvars/world/z/war.cfg"


#define SET_SCR_G_GRAVITY \
  execOnDvarStringValue menu_cfg_gt ass "set scr_g_gravity_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_g_gravity_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_g_gravity_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_g_gravity_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_g_gravity_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_g_gravity_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_g_gravity_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_g_gravity_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_g_gravity_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_g_gravity_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_g_gravity_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_g_gravity_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_g_gravity_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_g_gravity_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_g_gravity_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_g_gravity_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_g_gravity_war _null"

#define SET_SCR_MAP_SPECIAL_FX_ENABLE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_map_special_fx_enable_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_map_special_fx_enable_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_map_special_fx_enable_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_map_special_fx_enable_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_map_special_fx_enable_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_map_special_fx_enable_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_map_special_fx_enable_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_map_special_fx_enable_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_map_special_fx_enable_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_map_special_fx_enable_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_map_special_fx_enable_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_map_special_fx_enable_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_map_special_fx_enable_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_map_special_fx_enable_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_map_special_fx_enable_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_map_special_fx_enable_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_map_special_fx_enable_war _null"

#define SET_SCR_MAP_SPECIAL_FX_RAIN \
  execOnDvarStringValue menu_cfg_gt ass "set scr_map_special_fx_rain_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_map_special_fx_rain_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_map_special_fx_rain_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_map_special_fx_rain_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_map_special_fx_rain_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_map_special_fx_rain_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_map_special_fx_rain_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_map_special_fx_rain_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_map_special_fx_rain_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_map_special_fx_rain_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_map_special_fx_rain_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_map_special_fx_rain_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_map_special_fx_rain_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_map_special_fx_rain_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_map_special_fx_rain_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_map_special_fx_rain_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_map_special_fx_rain_war _null"

#define SET_SCR_MAP_SPECIAL_FX_PARTICLES \
  execOnDvarStringValue menu_cfg_gt ass "set scr_map_special_fx_particles_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_map_special_fx_particles_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_map_special_fx_particles_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_map_special_fx_particles_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_map_special_fx_particles_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_map_special_fx_particles_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_map_special_fx_particles_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_map_special_fx_particles_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_map_special_fx_particles_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_map_special_fx_particles_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_map_special_fx_particles_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_map_special_fx_particles_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_map_special_fx_particles_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_map_special_fx_particles_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_map_special_fx_particles_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_map_special_fx_particles_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_map_special_fx_particles_war _null"

#define SET_SCR_MAP_SPECIAL_FX_BGSOUND \
  execOnDvarStringValue menu_cfg_gt ass "set scr_map_special_fx_bgsound_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_map_special_fx_bgsound_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_map_special_fx_bgsound_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_map_special_fx_bgsound_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_map_special_fx_bgsound_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_map_special_fx_bgsound_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_map_special_fx_bgsound_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_map_special_fx_bgsound_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_map_special_fx_bgsound_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_map_special_fx_bgsound_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_map_special_fx_bgsound_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_map_special_fx_bgsound_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_map_special_fx_bgsound_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_map_special_fx_bgsound_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_map_special_fx_bgsound_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_map_special_fx_bgsound_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_map_special_fx_bgsound_war _null"

#define SET_SCR_SHOW_FOG \
  execOnDvarStringValue menu_cfg_gt ass "set scr_show_fog_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_show_fog_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_show_fog_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_show_fog_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_show_fog_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_show_fog_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_show_fog_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_show_fog_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_show_fog_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_show_fog_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_show_fog_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_show_fog_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_show_fog_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_show_fog_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_show_fog_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_show_fog_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_show_fog_war _null"

#define SET_SCR_DCS_ENABLED \
  execOnDvarStringValue menu_cfg_gt ass "set scr_dcs_enabled_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_dcs_enabled_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_dcs_enabled_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_dcs_enabled_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_dcs_enabled_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_dcs_enabled_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_dcs_enabled_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_dcs_enabled_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_dcs_enabled_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_dcs_enabled_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_dcs_enabled_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_dcs_enabled_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_dcs_enabled_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_dcs_enabled_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_dcs_enabled_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_dcs_enabled_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_dcs_enabled_war _null"

#define SET_SCR_DCS_DAY_LENGTH \
  execOnDvarStringValue menu_cfg_gt ass "set scr_dcs_day_length_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_dcs_day_length_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_dcs_day_length_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_dcs_day_length_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_dcs_day_length_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_dcs_day_length_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_dcs_day_length_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_dcs_day_length_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_dcs_day_length_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_dcs_day_length_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_dcs_day_length_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_dcs_day_length_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_dcs_day_length_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_dcs_day_length_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_dcs_day_length_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_dcs_day_length_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_dcs_day_length_war _null"

#define SET_SCR_DCS_DUSK_LENGTH \
  execOnDvarStringValue menu_cfg_gt ass "set scr_dcs_dusk_length_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_dcs_dusk_length_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_dcs_dusk_length_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_dcs_dusk_length_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_dcs_dusk_length_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_dcs_dusk_length_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_dcs_dusk_length_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_dcs_dusk_length_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_dcs_dusk_length_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_dcs_dusk_length_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_dcs_dusk_length_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_dcs_dusk_length_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_dcs_dusk_length_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_dcs_dusk_length_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_dcs_dusk_length_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_dcs_dusk_length_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_dcs_dusk_length_war _null"

#define SET_SCR_DCS_NIGHT_LENGTH \
  execOnDvarStringValue menu_cfg_gt ass "set scr_dcs_night_length_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_dcs_night_length_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_dcs_night_length_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_dcs_night_length_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_dcs_night_length_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_dcs_night_length_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_dcs_night_length_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_dcs_night_length_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_dcs_night_length_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_dcs_night_length_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_dcs_night_length_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_dcs_night_length_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_dcs_night_length_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_dcs_night_length_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_dcs_night_length_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_dcs_night_length_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_dcs_night_length_war _null"

#define SET_SCR_DCS_DAWN_LENGTH \
  execOnDvarStringValue menu_cfg_gt ass "set scr_dcs_dawn_length_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_dcs_dawn_length_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_dcs_dawn_length_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_dcs_dawn_length_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_dcs_dawn_length_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_dcs_dawn_length_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_dcs_dawn_length_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_dcs_dawn_length_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_dcs_dawn_length_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_dcs_dawn_length_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_dcs_dawn_length_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_dcs_dawn_length_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_dcs_dawn_length_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_dcs_dawn_length_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_dcs_dawn_length_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_dcs_dawn_length_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_dcs_dawn_length_war _null"

#define SET_SCR_DCS_FIRST_CYCLE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_dcs_first_cycle_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_dcs_first_cycle_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_dcs_first_cycle_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_dcs_first_cycle_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_dcs_first_cycle_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_dcs_first_cycle_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_dcs_first_cycle_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_dcs_first_cycle_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_dcs_first_cycle_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_dcs_first_cycle_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_dcs_first_cycle_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_dcs_first_cycle_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_dcs_first_cycle_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_dcs_first_cycle_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_dcs_first_cycle_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_dcs_first_cycle_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_dcs_first_cycle_war _null"

#define SET_SCR_DCS_SOUNDS_ENABLE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_dcs_sounds_enable_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_dcs_sounds_enable_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_dcs_sounds_enable_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_dcs_sounds_enable_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_dcs_sounds_enable_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_dcs_sounds_enable_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_dcs_sounds_enable_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_dcs_sounds_enable_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_dcs_sounds_enable_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_dcs_sounds_enable_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_dcs_sounds_enable_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_dcs_sounds_enable_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_dcs_sounds_enable_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_dcs_sounds_enable_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_dcs_sounds_enable_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_dcs_sounds_enable_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_dcs_sounds_enable_war _null"

#define SET_SCR_DCS_RESET_CYCLE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_dcs_reset_cycle_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_dcs_reset_cycle_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_dcs_reset_cycle_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_dcs_reset_cycle_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_dcs_reset_cycle_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_dcs_reset_cycle_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_dcs_reset_cycle_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_dcs_reset_cycle_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_dcs_reset_cycle_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_dcs_reset_cycle_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "set scr_dcs_reset_cycle_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_dcs_reset_cycle_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_dcs_reset_cycle_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_dcs_reset_cycle_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_dcs_reset_cycle_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_dcs_reset_cycle_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_dcs_reset_cycle_war _null"