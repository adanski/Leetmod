#ifdef FILLMENUDVARS
#undef FILLMENUDVARS
#endif

#define FILLMENUDVARS     exec "exec menudvars/healthsystem/l/_def.cfg"\
    execOnDvarStringValue menu_cfg_gt ass "exec menudvars/healthsystem/l/ass.cfg"\
    execOnDvarStringValue menu_cfg_gt bel "exec menudvars/healthsystem/l/bel.cfg"\
    execOnDvarStringValue menu_cfg_gt ch "exec menudvars/healthsystem/l/ch.cfg"\
    execOnDvarStringValue menu_cfg_gt ctf "exec menudvars/healthsystem/l/ctf.cfg"\
    execOnDvarStringValue menu_cfg_gt dm "exec menudvars/healthsystem/l/dm.cfg"\
    execOnDvarStringValue menu_cfg_gt dom "exec menudvars/healthsystem/l/dom.cfg"\
    execOnDvarStringValue menu_cfg_gt ftag "exec menudvars/healthsystem/l/ftag.cfg"\
    execOnDvarStringValue menu_cfg_gt gg "exec menudvars/healthsystem/l/gg.cfg"\
    execOnDvarStringValue menu_cfg_gt gr "exec menudvars/healthsystem/l/gr.cfg"\
    execOnDvarStringValue menu_cfg_gt koth "exec menudvars/healthsystem/l/koth.cfg"\
    execOnDvarStringValue menu_cfg_gt re "exec menudvars/healthsystem/l/re.cfg"\
    execOnDvarStringValue menu_cfg_gt sab "exec menudvars/healthsystem/l/sab.cfg"\
    execOnDvarStringValue menu_cfg_gt sd "exec menudvars/healthsystem/l/sd.cfg"\
    execOnDvarStringValue menu_cfg_gt ss "exec menudvars/healthsystem/l/ss.cfg"\
    execOnDvarStringValue menu_cfg_gt tgr "exec menudvars/healthsystem/l/tgr.cfg"\
    execOnDvarStringValue menu_cfg_gt war "exec menudvars/healthsystem/l/war.cfg"

#ifdef SAVEMENUDVARS
#undef SAVEMENUDVARS
#endif

#define SAVEMENUDVARS     execOnDvarStringValue menu_cfg_gt _def "exec menudvars/healthsystem/s/_def.cfg"\
    execOnDvarStringValue menu_cfg_gt ass "exec menudvars/healthsystem/s/ass.cfg"\
    execOnDvarStringValue menu_cfg_gt bel "exec menudvars/healthsystem/s/bel.cfg"\
    execOnDvarStringValue menu_cfg_gt ch "exec menudvars/healthsystem/s/ch.cfg"\
    execOnDvarStringValue menu_cfg_gt ctf "exec menudvars/healthsystem/s/ctf.cfg"\
    execOnDvarStringValue menu_cfg_gt dm "exec menudvars/healthsystem/s/dm.cfg"\
    execOnDvarStringValue menu_cfg_gt dom "exec menudvars/healthsystem/s/dom.cfg"\
    execOnDvarStringValue menu_cfg_gt ftag "exec menudvars/healthsystem/s/ftag.cfg"\
    execOnDvarStringValue menu_cfg_gt gg "exec menudvars/healthsystem/s/gg.cfg"\
    execOnDvarStringValue menu_cfg_gt gr "exec menudvars/healthsystem/s/gr.cfg"\
    execOnDvarStringValue menu_cfg_gt koth "exec menudvars/healthsystem/s/koth.cfg"\
    execOnDvarStringValue menu_cfg_gt re "exec menudvars/healthsystem/s/re.cfg"\
    execOnDvarStringValue menu_cfg_gt sab "exec menudvars/healthsystem/s/sab.cfg"\
    execOnDvarStringValue menu_cfg_gt sd "exec menudvars/healthsystem/s/sd.cfg"\
    execOnDvarStringValue menu_cfg_gt ss "exec menudvars/healthsystem/s/ss.cfg"\
    execOnDvarStringValue menu_cfg_gt tgr "exec menudvars/healthsystem/s/tgr.cfg"\
    execOnDvarStringValue menu_cfg_gt war "exec menudvars/healthsystem/s/war.cfg"


#define SET_SCR_PLAYER_MAXHEALTH \
  execOnDvarStringValue menu_cfg_gt ass "set scr_player_maxhealth_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_player_maxhealth_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_player_maxhealth_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_player_maxhealth_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_player_maxhealth_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_player_maxhealth_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_player_maxhealth_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_player_maxhealth_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_player_maxhealth_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_player_maxhealth_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_player_maxhealth_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_player_maxhealth_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_player_maxhealth_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_player_maxhealth_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_player_maxhealth_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_player_maxhealth_war _null"

#define SET_SCR_HEALTHREGEN_METHOD \
  execOnDvarStringValue menu_cfg_gt ass "set scr_healthregen_method_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_healthregen_method_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_healthregen_method_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_healthregen_method_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_healthregen_method_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_healthregen_method_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_healthregen_method_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_healthregen_method_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_healthregen_method_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_healthregen_method_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_healthregen_method_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_healthregen_method_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_healthregen_method_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_healthregen_method_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_healthregen_method_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_healthregen_method_war _null"

#define SET_SCR_PLAYER_HEALTHREGENTIME \
  execOnDvarStringValue menu_cfg_gt ass "set scr_player_healthregentime_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_player_healthregentime_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_player_healthregentime_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_player_healthregentime_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_player_healthregentime_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_player_healthregentime_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_player_healthregentime_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_player_healthregentime_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_player_healthregentime_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_player_healthregentime_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_player_healthregentime_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_player_healthregentime_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_player_healthregentime_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_player_healthregentime_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_player_healthregentime_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_player_healthregentime_war _null"

#define SET_SCR_HEALTH_PAIN_SOUND \
  execOnDvarStringValue menu_cfg_gt ass "set scr_health_pain_sound_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_health_pain_sound_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_health_pain_sound_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_health_pain_sound_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_health_pain_sound_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_health_pain_sound_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_health_pain_sound_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_health_pain_sound_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_health_pain_sound_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_health_pain_sound_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_health_pain_sound_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_health_pain_sound_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_health_pain_sound_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_health_pain_sound_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_health_pain_sound_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_health_pain_sound_war _null"

#define SET_SCR_HEALTH_DEATH_SOUND \
  execOnDvarStringValue menu_cfg_gt ass "set scr_health_death_sound_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_health_death_sound_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_health_death_sound_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_health_death_sound_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_health_death_sound_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_health_death_sound_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_health_death_sound_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_health_death_sound_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_health_death_sound_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_health_death_sound_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_health_death_sound_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_health_death_sound_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_health_death_sound_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_health_death_sound_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_health_death_sound_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_health_death_sound_war _null"

#define SET_SCR_HEALTH_HURT_SOUND \
  execOnDvarStringValue menu_cfg_gt ass "set scr_health_hurt_sound_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_health_hurt_sound_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_health_hurt_sound_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_health_hurt_sound_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_health_hurt_sound_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_health_hurt_sound_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_health_hurt_sound_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_health_hurt_sound_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_health_hurt_sound_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_health_hurt_sound_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_health_hurt_sound_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_health_hurt_sound_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_health_hurt_sound_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_health_hurt_sound_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_health_hurt_sound_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_health_hurt_sound_war _null"

#define SET_SCR_HEALTHSYSTEM_SHOW_HEALTHBAR \
  execOnDvarStringValue menu_cfg_gt ass "set scr_healthsystem_show_healthbar_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_healthsystem_show_healthbar_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_healthsystem_show_healthbar_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_healthsystem_show_healthbar_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_healthsystem_show_healthbar_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_healthsystem_show_healthbar_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_healthsystem_show_healthbar_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_healthsystem_show_healthbar_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_healthsystem_show_healthbar_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_healthsystem_show_healthbar_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_healthsystem_show_healthbar_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_healthsystem_show_healthbar_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_healthsystem_show_healthbar_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_healthsystem_show_healthbar_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_healthsystem_show_healthbar_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_healthsystem_show_healthbar_war _null"

#define SET_SCR_HEALTHSYSTEM_BLEEDING_ENABLE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_healthsystem_bleeding_enable_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_healthsystem_bleeding_enable_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_healthsystem_bleeding_enable_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_healthsystem_bleeding_enable_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_healthsystem_bleeding_enable_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_healthsystem_bleeding_enable_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_healthsystem_bleeding_enable_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_healthsystem_bleeding_enable_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_healthsystem_bleeding_enable_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_healthsystem_bleeding_enable_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_healthsystem_bleeding_enable_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_healthsystem_bleeding_enable_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_healthsystem_bleeding_enable_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_healthsystem_bleeding_enable_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_healthsystem_bleeding_enable_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_healthsystem_bleeding_enable_war _null"

#define SET_SCR_HEALTHSYSTEM_BLEEDING_START_PERCENTAGE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_healthsystem_bleeding_start_percentage_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_healthsystem_bleeding_start_percentage_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_healthsystem_bleeding_start_percentage_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_healthsystem_bleeding_start_percentage_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_healthsystem_bleeding_start_percentage_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_healthsystem_bleeding_start_percentage_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_healthsystem_bleeding_start_percentage_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_healthsystem_bleeding_start_percentage_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_healthsystem_bleeding_start_percentage_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_healthsystem_bleeding_start_percentage_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_healthsystem_bleeding_start_percentage_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_healthsystem_bleeding_start_percentage_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_healthsystem_bleeding_start_percentage_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_healthsystem_bleeding_start_percentage_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_healthsystem_bleeding_start_percentage_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_healthsystem_bleeding_start_percentage_war _null"

#define SET_SCR_HEALTHSYSTEM_BLEEDING_ICON \
  execOnDvarStringValue menu_cfg_gt ass "set scr_healthsystem_bleeding_icon_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_healthsystem_bleeding_icon_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_healthsystem_bleeding_icon_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_healthsystem_bleeding_icon_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_healthsystem_bleeding_icon_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_healthsystem_bleeding_icon_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_healthsystem_bleeding_icon_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_healthsystem_bleeding_icon_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_healthsystem_bleeding_icon_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_healthsystem_bleeding_icon_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_healthsystem_bleeding_icon_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_healthsystem_bleeding_icon_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_healthsystem_bleeding_icon_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_healthsystem_bleeding_icon_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_healthsystem_bleeding_icon_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_healthsystem_bleeding_icon_war _null"

#define SET_SCR_HEALTHSYSTEM_BANDAGE_START \
  execOnDvarStringValue menu_cfg_gt ass "set scr_healthsystem_bandage_start_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_healthsystem_bandage_start_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_healthsystem_bandage_start_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_healthsystem_bandage_start_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_healthsystem_bandage_start_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_healthsystem_bandage_start_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_healthsystem_bandage_start_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_healthsystem_bandage_start_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_healthsystem_bandage_start_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_healthsystem_bandage_start_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_healthsystem_bandage_start_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_healthsystem_bandage_start_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_healthsystem_bandage_start_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_healthsystem_bandage_start_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_healthsystem_bandage_start_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_healthsystem_bandage_start_war _null"

#define SET_SCR_HEALTHSYSTEM_BANDAGE_MAX \
  execOnDvarStringValue menu_cfg_gt ass "set scr_healthsystem_bandage_max_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_healthsystem_bandage_max_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_healthsystem_bandage_max_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_healthsystem_bandage_max_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_healthsystem_bandage_max_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_healthsystem_bandage_max_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_healthsystem_bandage_max_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_healthsystem_bandage_max_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_healthsystem_bandage_max_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_healthsystem_bandage_max_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_healthsystem_bandage_max_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_healthsystem_bandage_max_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_healthsystem_bandage_max_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_healthsystem_bandage_max_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_healthsystem_bandage_max_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_healthsystem_bandage_max_war _null"

#define SET_SCR_HEALTHSYSTEM_BANDAGE_SELF \
  execOnDvarStringValue menu_cfg_gt ass "set scr_healthsystem_bandage_self_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_healthsystem_bandage_self_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_healthsystem_bandage_self_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_healthsystem_bandage_self_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_healthsystem_bandage_self_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_healthsystem_bandage_self_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_healthsystem_bandage_self_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_healthsystem_bandage_self_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_healthsystem_bandage_self_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_healthsystem_bandage_self_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_healthsystem_bandage_self_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_healthsystem_bandage_self_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_healthsystem_bandage_self_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_healthsystem_bandage_self_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_healthsystem_bandage_self_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_healthsystem_bandage_self_war _null"

#define SET_SCR_HEALTHSYSTEM_BANDAGE_TIME \
  execOnDvarStringValue menu_cfg_gt ass "set scr_healthsystem_bandage_time_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_healthsystem_bandage_time_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_healthsystem_bandage_time_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_healthsystem_bandage_time_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_healthsystem_bandage_time_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_healthsystem_bandage_time_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_healthsystem_bandage_time_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_healthsystem_bandage_time_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_healthsystem_bandage_time_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_healthsystem_bandage_time_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_healthsystem_bandage_time_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_healthsystem_bandage_time_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_healthsystem_bandage_time_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_healthsystem_bandage_time_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_healthsystem_bandage_time_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_healthsystem_bandage_time_war _null"

#define SET_SCR_HEALTHSYSTEM_MEDIC_ENABLE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_healthsystem_medic_enable_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_healthsystem_medic_enable_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_healthsystem_medic_enable_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_healthsystem_medic_enable_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_healthsystem_medic_enable_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_healthsystem_medic_enable_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_healthsystem_medic_enable_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_healthsystem_medic_enable_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_healthsystem_medic_enable_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_healthsystem_medic_enable_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_healthsystem_medic_enable_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_healthsystem_medic_enable_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_healthsystem_medic_enable_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_healthsystem_medic_enable_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_healthsystem_medic_enable_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_healthsystem_medic_enable_war _null"

#define SET_SCR_HEALTHSYSTEM_MEDIC_BANDAGING \
  execOnDvarStringValue menu_cfg_gt ass "set scr_healthsystem_medic_bandaging_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_healthsystem_medic_bandaging_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_healthsystem_medic_bandaging_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_healthsystem_medic_bandaging_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_healthsystem_medic_bandaging_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_healthsystem_medic_bandaging_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_healthsystem_medic_bandaging_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_healthsystem_medic_bandaging_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_healthsystem_medic_bandaging_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_healthsystem_medic_bandaging_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_healthsystem_medic_bandaging_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_healthsystem_medic_bandaging_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_healthsystem_medic_bandaging_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_healthsystem_medic_bandaging_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_healthsystem_medic_bandaging_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_healthsystem_medic_bandaging_war _null"

#define SET_SCR_HEALTHSYSTEM_MEDIC_HEALING \
  execOnDvarStringValue menu_cfg_gt ass "set scr_healthsystem_medic_healing_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_healthsystem_medic_healing_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_healthsystem_medic_healing_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_healthsystem_medic_healing_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_healthsystem_medic_healing_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_healthsystem_medic_healing_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_healthsystem_medic_healing_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_healthsystem_medic_healing_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_healthsystem_medic_healing_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_healthsystem_medic_healing_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_healthsystem_medic_healing_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_healthsystem_medic_healing_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_healthsystem_medic_healing_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_healthsystem_medic_healing_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_healthsystem_medic_healing_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_healthsystem_medic_healing_war _null"

#define SET_SCR_HEALTHSYSTEM_MEDIC_HEALING_SELF \
  execOnDvarStringValue menu_cfg_gt ass "set scr_healthsystem_medic_healing_self_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_healthsystem_medic_healing_self_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_healthsystem_medic_healing_self_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_healthsystem_medic_healing_self_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_healthsystem_medic_healing_self_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_healthsystem_medic_healing_self_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_healthsystem_medic_healing_self_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_healthsystem_medic_healing_self_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_healthsystem_medic_healing_self_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_healthsystem_medic_healing_self_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_healthsystem_medic_healing_self_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_healthsystem_medic_healing_self_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_healthsystem_medic_healing_self_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_healthsystem_medic_healing_self_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_healthsystem_medic_healing_self_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_healthsystem_medic_healing_self_war _null"

#define SET_SCR_HEALTHSYSTEM_MEDIC_HEALING_HEALTH \
  execOnDvarStringValue menu_cfg_gt ass "set scr_healthsystem_medic_healing_health_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_healthsystem_medic_healing_health_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_healthsystem_medic_healing_health_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_healthsystem_medic_healing_health_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_healthsystem_medic_healing_health_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_healthsystem_medic_healing_health_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_healthsystem_medic_healing_health_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_healthsystem_medic_healing_health_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_healthsystem_medic_healing_health_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_healthsystem_medic_healing_health_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_healthsystem_medic_healing_health_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_healthsystem_medic_healing_health_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_healthsystem_medic_healing_health_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_healthsystem_medic_healing_health_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_healthsystem_medic_healing_health_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_healthsystem_medic_healing_health_war _null"

#define SET_SCR_HEALTHSYSTEM_MEDIC_HEALING_TIME \
  execOnDvarStringValue menu_cfg_gt ass "set scr_healthsystem_medic_healing_time_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_healthsystem_medic_healing_time_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_healthsystem_medic_healing_time_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_healthsystem_medic_healing_time_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_healthsystem_medic_healing_time_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_healthsystem_medic_healing_time_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_healthsystem_medic_healing_time_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_healthsystem_medic_healing_time_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_healthsystem_medic_healing_time_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_healthsystem_medic_healing_time_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_healthsystem_medic_healing_time_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_healthsystem_medic_healing_time_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_healthsystem_medic_healing_time_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_healthsystem_medic_healing_time_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_healthsystem_medic_healing_time_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_healthsystem_medic_healing_time_war _null"

#define SET_SCR_HEALTHSYSTEM_MEDIC_TAKE_BANDAGE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_healthsystem_medic_take_bandage_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_healthsystem_medic_take_bandage_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_healthsystem_medic_take_bandage_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_healthsystem_medic_take_bandage_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_healthsystem_medic_take_bandage_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_healthsystem_medic_take_bandage_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_healthsystem_medic_take_bandage_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_healthsystem_medic_take_bandage_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_healthsystem_medic_take_bandage_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_healthsystem_medic_take_bandage_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_healthsystem_medic_take_bandage_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_healthsystem_medic_take_bandage_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_healthsystem_medic_take_bandage_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_healthsystem_medic_take_bandage_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_healthsystem_medic_take_bandage_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_healthsystem_medic_take_bandage_war _null"

#define SET_SCR_HEALTHSYSTEM_HEALING_ICON \
  execOnDvarStringValue menu_cfg_gt ass "set scr_healthsystem_healing_icon_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_healthsystem_healing_icon_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_healthsystem_healing_icon_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_healthsystem_healing_icon_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_healthsystem_healing_icon_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_healthsystem_healing_icon_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_healthsystem_healing_icon_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_healthsystem_healing_icon_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_healthsystem_healing_icon_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_healthsystem_healing_icon_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_healthsystem_healing_icon_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_healthsystem_healing_icon_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_healthsystem_healing_icon_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_healthsystem_healing_icon_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_healthsystem_healing_icon_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_healthsystem_healing_icon_war _null"

#define SET_SCR_HEALTHSYSTEM_HEALTHPACKS_ENABLE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_healthsystem_healthpacks_enable_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_healthsystem_healthpacks_enable_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_healthsystem_healthpacks_enable_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_healthsystem_healthpacks_enable_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_healthsystem_healthpacks_enable_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_healthsystem_healthpacks_enable_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_healthsystem_healthpacks_enable_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_healthsystem_healthpacks_enable_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_healthsystem_healthpacks_enable_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_healthsystem_healthpacks_enable_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_healthsystem_healthpacks_enable_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_healthsystem_healthpacks_enable_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_healthsystem_healthpacks_enable_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_healthsystem_healthpacks_enable_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_healthsystem_healthpacks_enable_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_healthsystem_healthpacks_enable_war _null"

#define SET_SCR_HEALTHSYSTEM_HEALTHPACKS_TIMEOUT \
  execOnDvarStringValue menu_cfg_gt ass "set scr_healthsystem_healthpacks_timeout_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_healthsystem_healthpacks_timeout_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_healthsystem_healthpacks_timeout_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_healthsystem_healthpacks_timeout_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_healthsystem_healthpacks_timeout_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_healthsystem_healthpacks_timeout_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_healthsystem_healthpacks_timeout_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_healthsystem_healthpacks_timeout_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_healthsystem_healthpacks_timeout_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_healthsystem_healthpacks_timeout_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_healthsystem_healthpacks_timeout_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_healthsystem_healthpacks_timeout_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_healthsystem_healthpacks_timeout_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_healthsystem_healthpacks_timeout_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_healthsystem_healthpacks_timeout_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_healthsystem_healthpacks_timeout_war _null"

#define SET_SCR_HEALTHSYSTEM_HEALTHPACKS_HEALTH \
  execOnDvarStringValue menu_cfg_gt ass "set scr_healthsystem_healthpacks_health_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_healthsystem_healthpacks_health_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_healthsystem_healthpacks_health_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_healthsystem_healthpacks_health_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_healthsystem_healthpacks_health_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_healthsystem_healthpacks_health_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_healthsystem_healthpacks_health_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_healthsystem_healthpacks_health_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_healthsystem_healthpacks_health_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_healthsystem_healthpacks_health_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_healthsystem_healthpacks_health_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_healthsystem_healthpacks_health_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_healthsystem_healthpacks_health_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_healthsystem_healthpacks_health_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_healthsystem_healthpacks_health_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_healthsystem_healthpacks_health_war _null"

#define SET_SCR_HEALTHSYSTEM_HEALTHPACKS_RANDOM_HEALTH \
  execOnDvarStringValue menu_cfg_gt ass "set scr_healthsystem_healthpacks_random_health_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_healthsystem_healthpacks_random_health_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_healthsystem_healthpacks_random_health_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_healthsystem_healthpacks_random_health_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_healthsystem_healthpacks_random_health_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_healthsystem_healthpacks_random_health_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_healthsystem_healthpacks_random_health_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_healthsystem_healthpacks_random_health_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_healthsystem_healthpacks_random_health_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_healthsystem_healthpacks_random_health_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_healthsystem_healthpacks_random_health_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_healthsystem_healthpacks_random_health_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_healthsystem_healthpacks_random_health_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_healthsystem_healthpacks_random_health_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_healthsystem_healthpacks_random_health_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_healthsystem_healthpacks_random_health_war _null"

#define SET_SCR_BARREL_DAMAGE_ENABLE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_barrel_damage_enable_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_barrel_damage_enable_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_barrel_damage_enable_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_barrel_damage_enable_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_barrel_damage_enable_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_barrel_damage_enable_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_barrel_damage_enable_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_barrel_damage_enable_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_barrel_damage_enable_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_barrel_damage_enable_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_barrel_damage_enable_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_barrel_damage_enable_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_barrel_damage_enable_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_barrel_damage_enable_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_barrel_damage_enable_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_barrel_damage_enable_war _null"

#define SET_SCR_VEHICLE_DAMAGE_ENABLE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_vehicle_damage_enable_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_vehicle_damage_enable_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_vehicle_damage_enable_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_vehicle_damage_enable_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_vehicle_damage_enable_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_vehicle_damage_enable_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_vehicle_damage_enable_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_vehicle_damage_enable_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_vehicle_damage_enable_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_vehicle_damage_enable_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_vehicle_damage_enable_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_vehicle_damage_enable_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_vehicle_damage_enable_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_vehicle_damage_enable_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_vehicle_damage_enable_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_vehicle_damage_enable_war _null"


// Setas
#define SETA_SCR_PLAYER_MAXHEALTH \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_player_maxhealth_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_player_maxhealth_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_player_maxhealth_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_player_maxhealth_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_player_maxhealth_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_player_maxhealth_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_player_maxhealth_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_player_maxhealth_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_player_maxhealth_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_player_maxhealth_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_player_maxhealth_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_player_maxhealth_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_player_maxhealth_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_player_maxhealth_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_player_maxhealth_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_player_maxhealth_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_player_maxhealth_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_player_maxhealth_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_player_maxhealth_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_player_maxhealth_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_player_maxhealth_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_player_maxhealth_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_player_maxhealth_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_player_maxhealth_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_player_maxhealth_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_player_maxhealth_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_player_maxhealth_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_player_maxhealth_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_player_maxhealth_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_player_maxhealth_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_player_maxhealth_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_player_maxhealth_war _null"

#define SETA_SCR_HEALTHREGEN_METHOD \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_healthregen_method_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_healthregen_method_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_healthregen_method_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_healthregen_method_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_healthregen_method_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_healthregen_method_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_healthregen_method_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_healthregen_method_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_healthregen_method_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_healthregen_method_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_healthregen_method_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_healthregen_method_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_healthregen_method_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_healthregen_method_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_healthregen_method_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_healthregen_method_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_healthregen_method_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_healthregen_method_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_healthregen_method_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_healthregen_method_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_healthregen_method_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_healthregen_method_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_healthregen_method_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_healthregen_method_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_healthregen_method_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_healthregen_method_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_healthregen_method_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_healthregen_method_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_healthregen_method_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_healthregen_method_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_healthregen_method_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_healthregen_method_war _null"

#define SETA_SCR_PLAYER_HEALTHREGENTIME \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_player_healthregentime_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_player_healthregentime_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_player_healthregentime_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_player_healthregentime_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_player_healthregentime_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_player_healthregentime_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_player_healthregentime_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_player_healthregentime_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_player_healthregentime_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_player_healthregentime_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_player_healthregentime_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_player_healthregentime_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_player_healthregentime_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_player_healthregentime_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_player_healthregentime_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_player_healthregentime_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_player_healthregentime_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_player_healthregentime_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_player_healthregentime_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_player_healthregentime_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_player_healthregentime_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_player_healthregentime_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_player_healthregentime_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_player_healthregentime_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_player_healthregentime_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_player_healthregentime_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_player_healthregentime_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_player_healthregentime_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_player_healthregentime_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_player_healthregentime_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_player_healthregentime_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_player_healthregentime_war _null"

#define SETA_SCR_HEALTH_PAIN_SOUND \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_health_pain_sound_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_health_pain_sound_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_health_pain_sound_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_health_pain_sound_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_health_pain_sound_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_health_pain_sound_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_health_pain_sound_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_health_pain_sound_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_health_pain_sound_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_health_pain_sound_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_health_pain_sound_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_health_pain_sound_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_health_pain_sound_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_health_pain_sound_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_health_pain_sound_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_health_pain_sound_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_health_pain_sound_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_health_pain_sound_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_health_pain_sound_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_health_pain_sound_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_health_pain_sound_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_health_pain_sound_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_health_pain_sound_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_health_pain_sound_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_health_pain_sound_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_health_pain_sound_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_health_pain_sound_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_health_pain_sound_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_health_pain_sound_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_health_pain_sound_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_health_pain_sound_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_health_pain_sound_war _null"

#define SETA_SCR_HEALTH_DEATH_SOUND \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_health_death_sound_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_health_death_sound_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_health_death_sound_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_health_death_sound_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_health_death_sound_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_health_death_sound_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_health_death_sound_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_health_death_sound_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_health_death_sound_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_health_death_sound_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_health_death_sound_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_health_death_sound_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_health_death_sound_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_health_death_sound_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_health_death_sound_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_health_death_sound_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_health_death_sound_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_health_death_sound_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_health_death_sound_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_health_death_sound_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_health_death_sound_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_health_death_sound_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_health_death_sound_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_health_death_sound_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_health_death_sound_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_health_death_sound_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_health_death_sound_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_health_death_sound_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_health_death_sound_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_health_death_sound_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_health_death_sound_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_health_death_sound_war _null"

#define SETA_SCR_HEALTH_HURT_SOUND \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_health_hurt_sound_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_health_hurt_sound_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_health_hurt_sound_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_health_hurt_sound_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_health_hurt_sound_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_health_hurt_sound_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_health_hurt_sound_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_health_hurt_sound_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_health_hurt_sound_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_health_hurt_sound_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_health_hurt_sound_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_health_hurt_sound_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_health_hurt_sound_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_health_hurt_sound_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_health_hurt_sound_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_health_hurt_sound_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_health_hurt_sound_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_health_hurt_sound_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_health_hurt_sound_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_health_hurt_sound_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_health_hurt_sound_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_health_hurt_sound_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_health_hurt_sound_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_health_hurt_sound_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_health_hurt_sound_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_health_hurt_sound_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_health_hurt_sound_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_health_hurt_sound_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_health_hurt_sound_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_health_hurt_sound_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_health_hurt_sound_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_health_hurt_sound_war _null"

#define SETA_SCR_HEALTHSYSTEM_SHOW_HEALTHBAR \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_healthsystem_show_healthbar_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_healthsystem_show_healthbar_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_healthsystem_show_healthbar_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_healthsystem_show_healthbar_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_healthsystem_show_healthbar_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_healthsystem_show_healthbar_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_healthsystem_show_healthbar_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_healthsystem_show_healthbar_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_healthsystem_show_healthbar_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_healthsystem_show_healthbar_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_healthsystem_show_healthbar_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_healthsystem_show_healthbar_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_healthsystem_show_healthbar_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_healthsystem_show_healthbar_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_healthsystem_show_healthbar_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_healthsystem_show_healthbar_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_healthsystem_show_healthbar_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_healthsystem_show_healthbar_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_healthsystem_show_healthbar_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_healthsystem_show_healthbar_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_healthsystem_show_healthbar_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_healthsystem_show_healthbar_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_healthsystem_show_healthbar_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_healthsystem_show_healthbar_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_healthsystem_show_healthbar_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_healthsystem_show_healthbar_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_healthsystem_show_healthbar_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_healthsystem_show_healthbar_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_healthsystem_show_healthbar_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_healthsystem_show_healthbar_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_healthsystem_show_healthbar_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_healthsystem_show_healthbar_war _null"

#define SETA_SCR_HEALTHSYSTEM_BLEEDING_ENABLE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_enable_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_healthsystem_bleeding_enable_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_enable_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_healthsystem_bleeding_enable_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_enable_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_healthsystem_bleeding_enable_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_enable_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_healthsystem_bleeding_enable_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_enable_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_healthsystem_bleeding_enable_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_enable_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_healthsystem_bleeding_enable_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_enable_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_healthsystem_bleeding_enable_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_enable_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_healthsystem_bleeding_enable_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_enable_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_healthsystem_bleeding_enable_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_enable_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_healthsystem_bleeding_enable_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_enable_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_healthsystem_bleeding_enable_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_enable_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_healthsystem_bleeding_enable_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_enable_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_healthsystem_bleeding_enable_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_enable_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_healthsystem_bleeding_enable_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_enable_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_healthsystem_bleeding_enable_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_enable_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_healthsystem_bleeding_enable_war _null"

#define SETA_SCR_HEALTHSYSTEM_BLEEDING_START_PERCENTAGE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_start_percentage_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_healthsystem_bleeding_start_percentage_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_start_percentage_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_healthsystem_bleeding_start_percentage_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_start_percentage_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_healthsystem_bleeding_start_percentage_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_start_percentage_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_healthsystem_bleeding_start_percentage_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_start_percentage_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_healthsystem_bleeding_start_percentage_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_start_percentage_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_healthsystem_bleeding_start_percentage_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_start_percentage_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_healthsystem_bleeding_start_percentage_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_start_percentage_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_healthsystem_bleeding_start_percentage_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_start_percentage_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_healthsystem_bleeding_start_percentage_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_start_percentage_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_healthsystem_bleeding_start_percentage_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_start_percentage_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_healthsystem_bleeding_start_percentage_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_start_percentage_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_healthsystem_bleeding_start_percentage_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_start_percentage_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_healthsystem_bleeding_start_percentage_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_start_percentage_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_healthsystem_bleeding_start_percentage_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_start_percentage_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_healthsystem_bleeding_start_percentage_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_start_percentage_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_healthsystem_bleeding_start_percentage_war _null"

#define SETA_SCR_HEALTHSYSTEM_BLEEDING_ICON \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_icon_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_healthsystem_bleeding_icon_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_icon_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_healthsystem_bleeding_icon_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_icon_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_healthsystem_bleeding_icon_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_icon_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_healthsystem_bleeding_icon_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_icon_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_healthsystem_bleeding_icon_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_icon_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_healthsystem_bleeding_icon_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_icon_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_healthsystem_bleeding_icon_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_icon_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_healthsystem_bleeding_icon_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_icon_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_healthsystem_bleeding_icon_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_icon_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_healthsystem_bleeding_icon_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_icon_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_healthsystem_bleeding_icon_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_icon_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_healthsystem_bleeding_icon_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_icon_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_healthsystem_bleeding_icon_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_icon_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_healthsystem_bleeding_icon_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_icon_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_healthsystem_bleeding_icon_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_healthsystem_bleeding_icon_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_healthsystem_bleeding_icon_war _null"

#define SETA_SCR_HEALTHSYSTEM_BANDAGE_START \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_start_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_healthsystem_bandage_start_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_start_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_healthsystem_bandage_start_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_start_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_healthsystem_bandage_start_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_start_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_healthsystem_bandage_start_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_start_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_healthsystem_bandage_start_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_start_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_healthsystem_bandage_start_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_start_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_healthsystem_bandage_start_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_start_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_healthsystem_bandage_start_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_start_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_healthsystem_bandage_start_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_start_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_healthsystem_bandage_start_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_start_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_healthsystem_bandage_start_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_start_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_healthsystem_bandage_start_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_start_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_healthsystem_bandage_start_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_start_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_healthsystem_bandage_start_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_start_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_healthsystem_bandage_start_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_start_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_healthsystem_bandage_start_war _null"

#define SETA_SCR_HEALTHSYSTEM_BANDAGE_MAX \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_max_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_healthsystem_bandage_max_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_max_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_healthsystem_bandage_max_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_max_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_healthsystem_bandage_max_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_max_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_healthsystem_bandage_max_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_max_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_healthsystem_bandage_max_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_max_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_healthsystem_bandage_max_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_max_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_healthsystem_bandage_max_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_max_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_healthsystem_bandage_max_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_max_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_healthsystem_bandage_max_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_max_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_healthsystem_bandage_max_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_max_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_healthsystem_bandage_max_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_max_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_healthsystem_bandage_max_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_max_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_healthsystem_bandage_max_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_max_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_healthsystem_bandage_max_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_max_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_healthsystem_bandage_max_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_max_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_healthsystem_bandage_max_war _null"

#define SETA_SCR_HEALTHSYSTEM_BANDAGE_SELF \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_self_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_healthsystem_bandage_self_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_self_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_healthsystem_bandage_self_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_self_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_healthsystem_bandage_self_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_self_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_healthsystem_bandage_self_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_self_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_healthsystem_bandage_self_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_self_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_healthsystem_bandage_self_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_self_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_healthsystem_bandage_self_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_self_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_healthsystem_bandage_self_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_self_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_healthsystem_bandage_self_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_self_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_healthsystem_bandage_self_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_self_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_healthsystem_bandage_self_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_self_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_healthsystem_bandage_self_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_self_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_healthsystem_bandage_self_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_self_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_healthsystem_bandage_self_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_self_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_healthsystem_bandage_self_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_self_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_healthsystem_bandage_self_war _null"

#define SETA_SCR_HEALTHSYSTEM_BANDAGE_TIME \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_time_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_healthsystem_bandage_time_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_time_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_healthsystem_bandage_time_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_time_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_healthsystem_bandage_time_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_time_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_healthsystem_bandage_time_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_time_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_healthsystem_bandage_time_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_time_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_healthsystem_bandage_time_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_time_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_healthsystem_bandage_time_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_time_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_healthsystem_bandage_time_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_time_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_healthsystem_bandage_time_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_time_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_healthsystem_bandage_time_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_time_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_healthsystem_bandage_time_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_time_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_healthsystem_bandage_time_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_time_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_healthsystem_bandage_time_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_time_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_healthsystem_bandage_time_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_time_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_healthsystem_bandage_time_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_healthsystem_bandage_time_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_healthsystem_bandage_time_war _null"

#define SETA_SCR_HEALTHSYSTEM_MEDIC_ENABLE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_enable_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_healthsystem_medic_enable_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_enable_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_healthsystem_medic_enable_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_enable_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_healthsystem_medic_enable_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_enable_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_healthsystem_medic_enable_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_enable_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_healthsystem_medic_enable_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_enable_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_healthsystem_medic_enable_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_enable_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_healthsystem_medic_enable_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_enable_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_healthsystem_medic_enable_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_enable_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_healthsystem_medic_enable_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_enable_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_healthsystem_medic_enable_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_enable_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_healthsystem_medic_enable_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_enable_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_healthsystem_medic_enable_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_enable_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_healthsystem_medic_enable_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_enable_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_healthsystem_medic_enable_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_enable_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_healthsystem_medic_enable_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_enable_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_healthsystem_medic_enable_war _null"

#define SETA_SCR_HEALTHSYSTEM_MEDIC_BANDAGING \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_bandaging_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_healthsystem_medic_bandaging_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_bandaging_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_healthsystem_medic_bandaging_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_bandaging_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_healthsystem_medic_bandaging_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_bandaging_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_healthsystem_medic_bandaging_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_bandaging_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_healthsystem_medic_bandaging_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_bandaging_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_healthsystem_medic_bandaging_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_bandaging_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_healthsystem_medic_bandaging_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_bandaging_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_healthsystem_medic_bandaging_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_bandaging_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_healthsystem_medic_bandaging_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_bandaging_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_healthsystem_medic_bandaging_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_bandaging_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_healthsystem_medic_bandaging_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_bandaging_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_healthsystem_medic_bandaging_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_bandaging_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_healthsystem_medic_bandaging_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_bandaging_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_healthsystem_medic_bandaging_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_bandaging_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_healthsystem_medic_bandaging_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_bandaging_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_healthsystem_medic_bandaging_war _null"

#define SETA_SCR_HEALTHSYSTEM_MEDIC_HEALING \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_healthsystem_medic_healing_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_healthsystem_medic_healing_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_healthsystem_medic_healing_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_healthsystem_medic_healing_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_healthsystem_medic_healing_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_healthsystem_medic_healing_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_healthsystem_medic_healing_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_healthsystem_medic_healing_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_healthsystem_medic_healing_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_healthsystem_medic_healing_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_healthsystem_medic_healing_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_healthsystem_medic_healing_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_healthsystem_medic_healing_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_healthsystem_medic_healing_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_healthsystem_medic_healing_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_healthsystem_medic_healing_war _null"

#define SETA_SCR_HEALTHSYSTEM_MEDIC_HEALING_SELF \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_self_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_healthsystem_medic_healing_self_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_self_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_healthsystem_medic_healing_self_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_self_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_healthsystem_medic_healing_self_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_self_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_healthsystem_medic_healing_self_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_self_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_healthsystem_medic_healing_self_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_self_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_healthsystem_medic_healing_self_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_self_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_healthsystem_medic_healing_self_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_self_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_healthsystem_medic_healing_self_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_self_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_healthsystem_medic_healing_self_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_self_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_healthsystem_medic_healing_self_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_self_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_healthsystem_medic_healing_self_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_self_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_healthsystem_medic_healing_self_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_self_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_healthsystem_medic_healing_self_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_self_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_healthsystem_medic_healing_self_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_self_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_healthsystem_medic_healing_self_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_self_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_healthsystem_medic_healing_self_war _null"

#define SETA_SCR_HEALTHSYSTEM_MEDIC_HEALING_HEALTH \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_health_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_healthsystem_medic_healing_health_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_health_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_healthsystem_medic_healing_health_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_health_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_healthsystem_medic_healing_health_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_health_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_healthsystem_medic_healing_health_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_health_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_healthsystem_medic_healing_health_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_health_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_healthsystem_medic_healing_health_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_health_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_healthsystem_medic_healing_health_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_health_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_healthsystem_medic_healing_health_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_health_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_healthsystem_medic_healing_health_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_health_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_healthsystem_medic_healing_health_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_health_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_healthsystem_medic_healing_health_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_health_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_healthsystem_medic_healing_health_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_health_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_healthsystem_medic_healing_health_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_health_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_healthsystem_medic_healing_health_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_health_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_healthsystem_medic_healing_health_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_health_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_healthsystem_medic_healing_health_war _null"

#define SETA_SCR_HEALTHSYSTEM_MEDIC_HEALING_TIME \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_time_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_healthsystem_medic_healing_time_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_time_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_healthsystem_medic_healing_time_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_time_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_healthsystem_medic_healing_time_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_time_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_healthsystem_medic_healing_time_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_time_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_healthsystem_medic_healing_time_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_time_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_healthsystem_medic_healing_time_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_time_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_healthsystem_medic_healing_time_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_time_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_healthsystem_medic_healing_time_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_time_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_healthsystem_medic_healing_time_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_time_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_healthsystem_medic_healing_time_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_time_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_healthsystem_medic_healing_time_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_time_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_healthsystem_medic_healing_time_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_time_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_healthsystem_medic_healing_time_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_time_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_healthsystem_medic_healing_time_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_time_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_healthsystem_medic_healing_time_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_healing_time_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_healthsystem_medic_healing_time_war _null"

#define SETA_SCR_HEALTHSYSTEM_MEDIC_TAKE_BANDAGE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_take_bandage_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_healthsystem_medic_take_bandage_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_take_bandage_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_healthsystem_medic_take_bandage_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_take_bandage_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_healthsystem_medic_take_bandage_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_take_bandage_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_healthsystem_medic_take_bandage_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_take_bandage_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_healthsystem_medic_take_bandage_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_take_bandage_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_healthsystem_medic_take_bandage_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_take_bandage_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_healthsystem_medic_take_bandage_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_take_bandage_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_healthsystem_medic_take_bandage_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_take_bandage_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_healthsystem_medic_take_bandage_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_take_bandage_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_healthsystem_medic_take_bandage_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_take_bandage_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_healthsystem_medic_take_bandage_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_take_bandage_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_healthsystem_medic_take_bandage_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_take_bandage_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_healthsystem_medic_take_bandage_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_take_bandage_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_healthsystem_medic_take_bandage_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_take_bandage_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_healthsystem_medic_take_bandage_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_healthsystem_medic_take_bandage_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_healthsystem_medic_take_bandage_war _null"

#define SETA_SCR_HEALTHSYSTEM_HEALING_ICON \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_healthsystem_healing_icon_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_healthsystem_healing_icon_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_healthsystem_healing_icon_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_healthsystem_healing_icon_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_healthsystem_healing_icon_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_healthsystem_healing_icon_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_healthsystem_healing_icon_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_healthsystem_healing_icon_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_healthsystem_healing_icon_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_healthsystem_healing_icon_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_healthsystem_healing_icon_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_healthsystem_healing_icon_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_healthsystem_healing_icon_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_healthsystem_healing_icon_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_healthsystem_healing_icon_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_healthsystem_healing_icon_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_healthsystem_healing_icon_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_healthsystem_healing_icon_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_healthsystem_healing_icon_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_healthsystem_healing_icon_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_healthsystem_healing_icon_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_healthsystem_healing_icon_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_healthsystem_healing_icon_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_healthsystem_healing_icon_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_healthsystem_healing_icon_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_healthsystem_healing_icon_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_healthsystem_healing_icon_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_healthsystem_healing_icon_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_healthsystem_healing_icon_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_healthsystem_healing_icon_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_healthsystem_healing_icon_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_healthsystem_healing_icon_war _null"

#define SETA_SCR_HEALTHSYSTEM_HEALTHPACKS_ENABLE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_enable_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_healthsystem_healthpacks_enable_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_enable_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_healthsystem_healthpacks_enable_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_enable_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_healthsystem_healthpacks_enable_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_enable_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_healthsystem_healthpacks_enable_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_enable_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_healthsystem_healthpacks_enable_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_enable_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_healthsystem_healthpacks_enable_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_enable_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_healthsystem_healthpacks_enable_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_enable_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_healthsystem_healthpacks_enable_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_enable_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_healthsystem_healthpacks_enable_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_enable_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_healthsystem_healthpacks_enable_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_enable_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_healthsystem_healthpacks_enable_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_enable_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_healthsystem_healthpacks_enable_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_enable_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_healthsystem_healthpacks_enable_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_enable_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_healthsystem_healthpacks_enable_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_enable_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_healthsystem_healthpacks_enable_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_enable_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_healthsystem_healthpacks_enable_war _null"

#define SETA_SCR_HEALTHSYSTEM_HEALTHPACKS_TIMEOUT \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_timeout_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_healthsystem_healthpacks_timeout_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_timeout_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_healthsystem_healthpacks_timeout_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_timeout_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_healthsystem_healthpacks_timeout_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_timeout_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_healthsystem_healthpacks_timeout_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_timeout_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_healthsystem_healthpacks_timeout_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_timeout_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_healthsystem_healthpacks_timeout_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_timeout_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_healthsystem_healthpacks_timeout_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_timeout_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_healthsystem_healthpacks_timeout_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_timeout_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_healthsystem_healthpacks_timeout_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_timeout_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_healthsystem_healthpacks_timeout_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_timeout_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_healthsystem_healthpacks_timeout_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_timeout_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_healthsystem_healthpacks_timeout_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_timeout_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_healthsystem_healthpacks_timeout_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_timeout_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_healthsystem_healthpacks_timeout_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_timeout_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_healthsystem_healthpacks_timeout_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_timeout_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_healthsystem_healthpacks_timeout_war _null"

#define SETA_SCR_HEALTHSYSTEM_HEALTHPACKS_HEALTH \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_health_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_healthsystem_healthpacks_health_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_health_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_healthsystem_healthpacks_health_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_health_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_healthsystem_healthpacks_health_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_health_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_healthsystem_healthpacks_health_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_health_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_healthsystem_healthpacks_health_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_health_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_healthsystem_healthpacks_health_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_health_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_healthsystem_healthpacks_health_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_health_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_healthsystem_healthpacks_health_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_health_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_healthsystem_healthpacks_health_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_health_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_healthsystem_healthpacks_health_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_health_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_healthsystem_healthpacks_health_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_health_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_healthsystem_healthpacks_health_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_health_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_healthsystem_healthpacks_health_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_health_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_healthsystem_healthpacks_health_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_health_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_healthsystem_healthpacks_health_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_health_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_healthsystem_healthpacks_health_war _null"

#define SETA_SCR_HEALTHSYSTEM_HEALTHPACKS_RANDOM_HEALTH \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_random_health_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_healthsystem_healthpacks_random_health_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_random_health_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_healthsystem_healthpacks_random_health_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_random_health_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_healthsystem_healthpacks_random_health_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_random_health_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_healthsystem_healthpacks_random_health_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_random_health_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_healthsystem_healthpacks_random_health_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_random_health_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_healthsystem_healthpacks_random_health_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_random_health_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_healthsystem_healthpacks_random_health_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_random_health_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_healthsystem_healthpacks_random_health_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_random_health_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_healthsystem_healthpacks_random_health_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_random_health_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_healthsystem_healthpacks_random_health_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_random_health_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_healthsystem_healthpacks_random_health_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_random_health_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_healthsystem_healthpacks_random_health_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_random_health_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_healthsystem_healthpacks_random_health_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_random_health_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_healthsystem_healthpacks_random_health_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_random_health_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_healthsystem_healthpacks_random_health_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_healthsystem_healthpacks_random_health_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_healthsystem_healthpacks_random_health_war _null"

#define SETA_SCR_BARREL_DAMAGE_ENABLE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_barrel_damage_enable_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_barrel_damage_enable_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_barrel_damage_enable_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_barrel_damage_enable_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_barrel_damage_enable_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_barrel_damage_enable_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_barrel_damage_enable_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_barrel_damage_enable_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_barrel_damage_enable_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_barrel_damage_enable_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_barrel_damage_enable_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_barrel_damage_enable_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_barrel_damage_enable_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_barrel_damage_enable_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_barrel_damage_enable_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_barrel_damage_enable_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_barrel_damage_enable_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_barrel_damage_enable_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_barrel_damage_enable_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_barrel_damage_enable_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_barrel_damage_enable_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_barrel_damage_enable_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_barrel_damage_enable_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_barrel_damage_enable_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_barrel_damage_enable_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_barrel_damage_enable_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_barrel_damage_enable_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_barrel_damage_enable_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_barrel_damage_enable_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_barrel_damage_enable_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_barrel_damage_enable_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_barrel_damage_enable_war _null"

#define SETA_SCR_VEHICLE_DAMAGE_ENABLE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_vehicle_damage_enable_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_vehicle_damage_enable_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_vehicle_damage_enable_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_vehicle_damage_enable_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_vehicle_damage_enable_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_vehicle_damage_enable_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_vehicle_damage_enable_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_vehicle_damage_enable_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_vehicle_damage_enable_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_vehicle_damage_enable_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_vehicle_damage_enable_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_vehicle_damage_enable_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_vehicle_damage_enable_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_vehicle_damage_enable_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_vehicle_damage_enable_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_vehicle_damage_enable_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_vehicle_damage_enable_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_vehicle_damage_enable_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_vehicle_damage_enable_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_vehicle_damage_enable_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_vehicle_damage_enable_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_vehicle_damage_enable_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_vehicle_damage_enable_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_vehicle_damage_enable_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_vehicle_damage_enable_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_vehicle_damage_enable_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_vehicle_damage_enable_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_vehicle_damage_enable_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_vehicle_damage_enable_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_vehicle_damage_enable_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_vehicle_damage_enable_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_vehicle_damage_enable_war _null"