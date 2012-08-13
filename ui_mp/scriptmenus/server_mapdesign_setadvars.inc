#ifdef FILLMENUDVARS
  #undef FILLMENUDVARS
#endif

#define FILLMENUDVARS     exec "exec menudvars/mapdesign/l/_def.cfg"\
    execOnDvarStringValue menu_cfg_gt ass "exec menudvars/mapdesign/l/ass.cfg"\
    execOnDvarStringValue menu_cfg_gt bel "exec menudvars/mapdesign/l/bel.cfg"\
    execOnDvarStringValue menu_cfg_gt ch "exec menudvars/mapdesign/l/ch.cfg"\
    execOnDvarStringValue menu_cfg_gt ctf "exec menudvars/mapdesign/l/ctf.cfg"\
    execOnDvarStringValue menu_cfg_gt dm "exec menudvars/mapdesign/l/dm.cfg"\
    execOnDvarStringValue menu_cfg_gt dom "exec menudvars/mapdesign/l/dom.cfg"\
    execOnDvarStringValue menu_cfg_gt ftag "exec menudvars/mapdesign/l/ftag.cfg"\
    execOnDvarStringValue menu_cfg_gt gg "exec menudvars/mapdesign/l/gg.cfg"\
    execOnDvarStringValue menu_cfg_gt gr "exec menudvars/mapdesign/l/gr.cfg"\
    execOnDvarStringValue menu_cfg_gt koth "exec menudvars/mapdesign/l/koth.cfg"\
    execOnDvarStringValue menu_cfg_gt oitc "exec menudvars/mapdesign/l/oitc.cfg"\
    execOnDvarStringValue menu_cfg_gt re "exec menudvars/mapdesign/l/re.cfg"\
    execOnDvarStringValue menu_cfg_gt sab "exec menudvars/mapdesign/l/sab.cfg"\
    execOnDvarStringValue menu_cfg_gt sd "exec menudvars/mapdesign/l/sd.cfg"\
    execOnDvarStringValue menu_cfg_gt ss "exec menudvars/mapdesign/l/ss.cfg"\
    execOnDvarStringValue menu_cfg_gt tgr "exec menudvars/mapdesign/l/tgr.cfg"\
    execOnDvarStringValue menu_cfg_gt war "exec menudvars/mapdesign/l/war.cfg"

#ifdef SAVEMENUDVARS
  #undef SAVEMENUDVARS
#endif
    
#define SAVEMENUDVARS     execOnDvarStringValue menu_cfg_gt _def  "exec menudvars/mapdesign/s/_def.cfg"\
    execOnDvarStringValue menu_cfg_gt ass "exec menudvars/mapdesign/s/ass.cfg"\
    execOnDvarStringValue menu_cfg_gt bel "exec menudvars/mapdesign/s/bel.cfg"\
    execOnDvarStringValue menu_cfg_gt ch "exec menudvars/mapdesign/s/ch.cfg"\
    execOnDvarStringValue menu_cfg_gt ctf "exec menudvars/mapdesign/s/ctf.cfg"\
    execOnDvarStringValue menu_cfg_gt dm "exec menudvars/mapdesign/s/dm.cfg"\
    execOnDvarStringValue menu_cfg_gt dom "exec menudvars/mapdesign/s/dom.cfg"\
    execOnDvarStringValue menu_cfg_gt ftag "exec menudvars/mapdesign/s/ftag.cfg"\
    execOnDvarStringValue menu_cfg_gt gg "exec menudvars/mapdesign/s/gg.cfg"\
    execOnDvarStringValue menu_cfg_gt gr "exec menudvars/mapdesign/s/gr.cfg"\
    execOnDvarStringValue menu_cfg_gt koth "exec menudvars/mapdesign/s/koth.cfg"\
    execOnDvarStringValue menu_cfg_gt oitc "exec menudvars/mapdesign/s/oitc.cfg"\
    execOnDvarStringValue menu_cfg_gt re "exec menudvars/mapdesign/s/re.cfg"\
    execOnDvarStringValue menu_cfg_gt sab "exec menudvars/mapdesign/s/sab.cfg"\
    execOnDvarStringValue menu_cfg_gt sd "exec menudvars/mapdesign/s/sd.cfg"\
    execOnDvarStringValue menu_cfg_gt ss "exec menudvars/mapdesign/s/ss.cfg"\
    execOnDvarStringValue menu_cfg_gt tgr "exec menudvars/mapdesign/s/tgr.cfg"\
    execOnDvarStringValue menu_cfg_gt war "exec menudvars/mapdesign/s/war.cfg"

    
    
#define SETA_SCR_MAP_SPECIAL_FX_ENABLE \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_map_special_fx_enable_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "seta scr_map_special_fx_enable_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_map_special_fx_enable_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_map_special_fx_enable_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "seta scr_map_special_fx_enable_dm _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_map_special_fx_enable_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "seta scr_map_special_fx_enable_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "seta scr_map_special_fx_enable_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_map_special_fx_enable_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "seta scr_map_special_fx_enable_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_map_special_fx_enable_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_map_special_fx_enable_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_map_special_fx_enable_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "seta scr_map_special_fx_enable_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "seta scr_map_special_fx_enable_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_map_special_fx_enable_war _null"
  
#define SETA_SCR_MAP_SPECIAL_FX_RAIN \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_map_special_fx_rain_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "seta scr_map_special_fx_rain_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_map_special_fx_rain_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_map_special_fx_rain_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "seta scr_map_special_fx_rain_dm _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_map_special_fx_rain_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "seta scr_map_special_fx_rain_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "seta scr_map_special_fx_rain_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_map_special_fx_rain_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "seta scr_map_special_fx_rain_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_map_special_fx_rain_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_map_special_fx_rain_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_map_special_fx_rain_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "seta scr_map_special_fx_rain_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "seta scr_map_special_fx_rain_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_map_special_fx_rain_war _null"
  
#define SETA_SCR_MAP_SPECIAL_FX_PARTICLES \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_map_special_fx_particles_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "seta scr_map_special_fx_particles_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_map_special_fx_particles_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_map_special_fx_particles_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "seta scr_map_special_fx_particles_dm _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_map_special_fx_particles_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "seta scr_map_special_fx_particles_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "seta scr_map_special_fx_particles_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_map_special_fx_particles_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "seta scr_map_special_fx_particles_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_map_special_fx_particles_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_map_special_fx_particles_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_map_special_fx_particles_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "seta scr_map_special_fx_particles_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "seta scr_map_special_fx_particles_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_map_special_fx_particles_war _null"

#define SETA_SCR_MAP_SPECIAL_FX_BGSOUND \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_map_special_fx_bgsound_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "seta scr_map_special_fx_bgsound_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_map_special_fx_bgsound_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_map_special_fx_bgsound_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "seta scr_map_special_fx_bgsound_dm _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_map_special_fx_bgsound_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "seta scr_map_special_fx_bgsound_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "seta scr_map_special_fx_bgsound_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_map_special_fx_bgsound_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "seta scr_map_special_fx_bgsound_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_map_special_fx_bgsound_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_map_special_fx_bgsound_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_map_special_fx_bgsound_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "seta scr_map_special_fx_bgsound_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "seta scr_map_special_fx_bgsound_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_map_special_fx_bgsound_war _null"
  
#define SETA_SCR_SHOW_FOG \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_show_fog_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "seta scr_show_fog_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_show_fog_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_show_fog_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "seta scr_show_fog_dm _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_show_fog_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "seta scr_show_fog_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "seta scr_show_fog_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_show_fog_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "seta scr_show_fog_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_show_fog_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_show_fog_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_show_fog_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "seta scr_show_fog_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "seta scr_show_fog_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_show_fog_war _null"
  
#define SETA_SCR_DCS_ENABLED \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_dcs_enabled_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "seta scr_dcs_enabled_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_dcs_enabled_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_dcs_enabled_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "seta scr_dcs_enabled_dm _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_dcs_enabled_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "seta scr_dcs_enabled_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "seta scr_dcs_enabled_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_dcs_enabled_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "seta scr_dcs_enabled_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_dcs_enabled_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_dcs_enabled_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_dcs_enabled_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "seta scr_dcs_enabled_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "seta scr_dcs_enabled_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_dcs_enabled_war _null"
  
#define SETA_SCR_DCS_DAY_LENGTH \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_dcs_day_length_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "seta scr_dcs_day_length_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_dcs_day_length_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_dcs_day_length_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "seta scr_dcs_day_length_dm _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_dcs_day_length_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "seta scr_dcs_day_length_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "seta scr_dcs_day_length_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_dcs_day_length_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "seta scr_dcs_day_length_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_dcs_day_length_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_dcs_day_length_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_dcs_day_length_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "seta scr_dcs_day_length_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "seta scr_dcs_day_length_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_dcs_day_length_war _null"
  
#define SETA_SCR_DCS_DUSK_LENGTH \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_dcs_dusk_length_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "seta scr_dcs_dusk_length_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_dcs_dusk_length_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_dcs_dusk_length_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "seta scr_dcs_dusk_length_dm _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_dcs_dusk_length_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "seta scr_dcs_dusk_length_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "seta scr_dcs_dusk_length_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_dcs_dusk_length_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "seta scr_dcs_dusk_length_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_dcs_dusk_length_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_dcs_dusk_length_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_dcs_dusk_length_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "seta scr_dcs_dusk_length_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "seta scr_dcs_dusk_length_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_dcs_dusk_length_war _null"
  
#define SETA_SCR_DCS_NIGHT_LENGTH \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_dcs_night_length_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "seta scr_dcs_night_length_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_dcs_night_length_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_dcs_night_length_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "seta scr_dcs_night_length_dm _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_dcs_night_length_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "seta scr_dcs_night_length_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "seta scr_dcs_night_length_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_dcs_night_length_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "seta scr_dcs_night_length_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_dcs_night_length_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_dcs_night_length_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_dcs_night_length_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "seta scr_dcs_night_length_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "seta scr_dcs_night_length_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_dcs_night_length_war _null"
  
#define SETA_SCR_DCS_DAWN_LENGTH \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_dcs_dawn_length_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "seta scr_dcs_dawn_length_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_dcs_dawn_length_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_dcs_dawn_length_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "seta scr_dcs_dawn_length_dm _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_dcs_dawn_length_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "seta scr_dcs_dawn_length_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "seta scr_dcs_dawn_length_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_dcs_dawn_length_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "seta scr_dcs_dawn_length_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_dcs_dawn_length_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_dcs_dawn_length_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_dcs_dawn_length_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "seta scr_dcs_dawn_length_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "seta scr_dcs_dawn_length_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_dcs_dawn_length_war _null"
  
#define SETA_SCR_DCS_FIRST_CYCLE \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_dcs_first_cycle_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "seta scr_dcs_first_cycle_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_dcs_first_cycle_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_dcs_first_cycle_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "seta scr_dcs_first_cycle_dm _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_dcs_first_cycle_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "seta scr_dcs_first_cycle_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "seta scr_dcs_first_cycle_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_dcs_first_cycle_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "seta scr_dcs_first_cycle_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_dcs_first_cycle_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_dcs_first_cycle_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_dcs_first_cycle_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "seta scr_dcs_first_cycle_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "seta scr_dcs_first_cycle_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_dcs_first_cycle_war _null"
  
#define SETA_SCR_DCS_SOUNDS_ENABLE \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_dcs_sounds_enable_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "seta scr_dcs_sounds_enable_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_dcs_sounds_enable_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_dcs_sounds_enable_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "seta scr_dcs_sounds_enable_dm _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_dcs_sounds_enable_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "seta scr_dcs_sounds_enable_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "seta scr_dcs_sounds_enable_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_dcs_sounds_enable_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "seta scr_dcs_sounds_enable_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_dcs_sounds_enable_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_dcs_sounds_enable_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_dcs_sounds_enable_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "seta scr_dcs_sounds_enable_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "seta scr_dcs_sounds_enable_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_dcs_sounds_enable_war _null"
  
#define SETA_SCR_DCS_RESET_CYCLE \
  execOnDvarStringValue menu_cfg_gt ass "seta scr_dcs_reset_cycle_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "seta scr_dcs_reset_cycle_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "seta scr_dcs_reset_cycle_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "seta scr_dcs_reset_cycle_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "seta scr_dcs_reset_cycle_dm _null" \
  execOnDvarStringValue menu_cfg_gt ftag "seta scr_dcs_reset_cycle_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "seta scr_dcs_reset_cycle_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "seta scr_dcs_reset_cycle_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "seta scr_dcs_reset_cycle_koth _null" \
  execOnDvarStringValue menu_cfg_gt oitc "seta scr_dcs_reset_cycle_oitc _null" \
  execOnDvarStringValue menu_cfg_gt re "seta scr_dcs_reset_cycle_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "seta scr_dcs_reset_cycle_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "seta scr_dcs_reset_cycle_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "seta scr_dcs_reset_cycle_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "seta scr_dcs_reset_cycle_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "seta scr_dcs_reset_cycle_war _null"