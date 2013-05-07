#ifdef FILLMENUDVARS
#undef FILLMENUDVARS
#endif

#define FILLMENUDVARS     exec "exec menudvars/perks/l/_def.cfg"\
    execOnDvarStringValue menu_cfg_gt ass "exec menudvars/perks/l/ass.cfg"\
    execOnDvarStringValue menu_cfg_gt bel "exec menudvars/perks/l/bel.cfg"\
    execOnDvarStringValue menu_cfg_gt ch "exec menudvars/perks/l/ch.cfg"\
    execOnDvarStringValue menu_cfg_gt ctf "exec menudvars/perks/l/ctf.cfg"\
    execOnDvarStringValue menu_cfg_gt dm "exec menudvars/perks/l/dm.cfg"\
    execOnDvarStringValue menu_cfg_gt dom "exec menudvars/perks/l/dom.cfg"\
    execOnDvarStringValue menu_cfg_gt ftag "exec menudvars/perks/l/ftag.cfg"\
    execOnDvarStringValue menu_cfg_gt gg "exec menudvars/perks/l/gg.cfg"\
    execOnDvarStringValue menu_cfg_gt gr "exec menudvars/perks/l/gr.cfg"\
    execOnDvarStringValue menu_cfg_gt koth "exec menudvars/perks/l/koth.cfg"\
    execOnDvarStringValue menu_cfg_gt re "exec menudvars/perks/l/re.cfg"\
    execOnDvarStringValue menu_cfg_gt sab "exec menudvars/perks/l/sab.cfg"\
    execOnDvarStringValue menu_cfg_gt sd "exec menudvars/perks/l/sd.cfg"\
    execOnDvarStringValue menu_cfg_gt ss "exec menudvars/perks/l/ss.cfg"\
    execOnDvarStringValue menu_cfg_gt tgr "exec menudvars/perks/l/tgr.cfg"\
    execOnDvarStringValue menu_cfg_gt war "exec menudvars/perks/l/war.cfg"

#ifdef SAVEMENUDVARS
#undef SAVEMENUDVARS
#endif

#define SAVEMENUDVARS     execOnDvarStringValue menu_cfg_gt _def "exec menudvars/perks/s/_def.cfg"\
    execOnDvarStringValue menu_cfg_gt ass "exec menudvars/perks/s/ass.cfg"\
    execOnDvarStringValue menu_cfg_gt bel "exec menudvars/perks/s/bel.cfg"\
    execOnDvarStringValue menu_cfg_gt ch "exec menudvars/perks/s/ch.cfg"\
    execOnDvarStringValue menu_cfg_gt ctf "exec menudvars/perks/s/ctf.cfg"\
    execOnDvarStringValue menu_cfg_gt dm "exec menudvars/perks/s/dm.cfg"\
    execOnDvarStringValue menu_cfg_gt dom "exec menudvars/perks/s/dom.cfg"\
    execOnDvarStringValue menu_cfg_gt ftag "exec menudvars/perks/s/ftag.cfg"\
    execOnDvarStringValue menu_cfg_gt gg "exec menudvars/perks/s/gg.cfg"\
    execOnDvarStringValue menu_cfg_gt gr "exec menudvars/perks/s/gr.cfg"\
    execOnDvarStringValue menu_cfg_gt koth "exec menudvars/perks/s/koth.cfg"\
    execOnDvarStringValue menu_cfg_gt re "exec menudvars/perks/s/re.cfg"\
    execOnDvarStringValue menu_cfg_gt sab "exec menudvars/perks/s/sab.cfg"\
    execOnDvarStringValue menu_cfg_gt sd "exec menudvars/perks/s/sd.cfg"\
    execOnDvarStringValue menu_cfg_gt ss "exec menudvars/perks/s/ss.cfg"\
    execOnDvarStringValue menu_cfg_gt tgr "exec menudvars/perks/s/tgr.cfg"\
    execOnDvarStringValue menu_cfg_gt war "exec menudvars/perks/s/war.cfg"

#ifdef CLEANMENUDVARS1
#undef CLEANMENUDVARS1
#endif

#define CLEANMENUDVARS1 execOnDvarStringValue menu_perk_allow_c4_mp _null "setfromdvar menu_perk_allow_c4_mp perk_allow_c4_mp"\
		execOnDvarStringValue menu_perk_allow_specialty_specialgrenade _null "setfromdvar menu_perk_allow_specialty_specialgrenade perk_allow_specialty_specialgrenade"\
		execOnDvarStringValue menu_perk_allow_rpg_mp _null "setfromdvar menu_perk_allow_rpg_mp perk_allow_rpg_mp"\
		execOnDvarStringValue menu_perk_allow_claymore_mp _null "setfromdvar menu_perk_allow_claymore_mp perk_allow_claymore_mp"\
		execOnDvarStringValue menu_perk_allow_specialty_fraggrenade _null "setfromdvar menu_perk_allow_specialty_fraggrenade perk_allow_specialty_fraggrenade"\
		execOnDvarStringValue menu_perk_allow_specialty_extraammo _null "setfromdvar menu_perk_allow_specialty_extraammo perk_allow_specialty_extraammo"\
		execOnDvarStringValue menu_perk_allow_specialty_detectexplosive _null "setfromdvar menu_perk_allow_specialty_detectexplosive perk_allow_specialty_detectexplosive"\
		execOnDvarStringValue menu_perk_allow_specialty_bulletdamage _null "setfromdvar menu_perk_allow_specialty_bulletdamage perk_allow_specialty_bulletdamage"\
		execOnDvarStringValue menu_perk_allow_specialty_armorvest _null "setfromdvar menu_perk_allow_specialty_armorvest perk_allow_specialty_armorvest"\
		execOnDvarStringValue menu_perk_allow_specialty_fastreload _null "setfromdvar menu_perk_allow_specialty_fastreload perk_allow_specialty_fastreload"\
		execOnDvarStringValue menu_perk_allow_specialty_rof _null "setfromdvar menu_perk_allow_specialty_rof perk_allow_specialty_rof"\
		execOnDvarStringValue menu_perk_allow_specialty_twoprimaries _null "setfromdvar menu_perk_allow_specialty_twoprimaries perk_allow_specialty_twoprimaries"\
		execOnDvarStringValue menu_perk_allow_specialty_gpsjammer _null "setfromdvar menu_perk_allow_specialty_gpsjammer perk_allow_specialty_gpsjammer"\
		execOnDvarStringValue menu_perk_allow_specialty_explosivedamage _null "setfromdvar menu_perk_allow_specialty_explosivedamage perk_allow_specialty_explosivedamage"\
		execOnDvarStringValue menu_perk_allow_specialty_longersprint _null "setfromdvar menu_perk_allow_specialty_longersprint perk_allow_specialty_longersprint"\
		execOnDvarStringValue menu_perk_allow_specialty_bulletaccuracy _null "setfromdvar menu_perk_allow_specialty_bulletaccuracy perk_allow_specialty_bulletaccuracy"\
		execOnDvarStringValue menu_perk_allow_specialty_pistoldeath _null "setfromdvar menu_perk_allow_specialty_pistoldeath perk_allow_specialty_pistoldeath"\
		execOnDvarStringValue menu_perk_allow_specialty_grenadepulldeath _null "setfromdvar menu_perk_allow_specialty_grenadepulldeath perk_allow_specialty_grenadepulldeath"\
		execOnDvarStringValue menu_perk_allow_specialty_bulletpenetration _null "setfromdvar menu_perk_allow_specialty_bulletpenetration perk_allow_specialty_bulletpenetration"\
		execOnDvarStringValue menu_perk_allow_specialty_holdbreath _null "setfromdvar menu_perk_allow_specialty_holdbreath perk_allow_specialty_holdbreath"\
		execOnDvarStringValue menu_perk_allow_specialty_quieter _null "setfromdvar menu_perk_allow_specialty_quieter perk_allow_specialty_quieter"

#ifdef CLEANMENUDVARS2
#undef CLEANMENUDVARS2
#endif

#define CLEANMENUDVARS2 execOnDvarStringValue menu_perk_allow_specialty_parabolic _null "setfromdvar menu_perk_allow_specialty_parabolic perk_allow_specialty_parabolic"\
		execOnDvarStringValue menu_scr_c4_ammo_count _null "setfromdvar menu_scr_c4_ammo_count scr_c4_ammo_count"\
		execOnDvarStringValue menu_scr_claymore_ammo_count _null "setfromdvar menu_scr_claymore_ammo_count scr_claymore_ammo_count"\
		execOnDvarStringValue menu_scr_rpg_ammo_count _null "setfromdvar menu_scr_rpg_ammo_count scr_rpg_ammo_count"\
		execOnDvarStringValue menu_specialty_fraggrenade_ammo_count _null "setfromdvar menu_specialty_fraggrenade_ammo_count specialty_fraggrenade_ammo_count"\
		execOnDvarStringValue menu_specialty_specialgrenade_ammo_count _null "setfromdvar menu_specialty_specialgrenade_ammo_count specialty_specialgrenade_ammo_count"\
		execOnDvarStringValue menu_perk_armorvest _null "setfromdvar menu_perk_armorvest perk_armorvest"\
		execOnDvarStringValue menu_perk_bulletdamage _null "setfromdvar menu_perk_bulletdamage perk_bulletdamage"\
		execOnDvarStringValue menu_perk_explosivedamage _null "setfromdvar menu_perk_explosivedamage perk_explosivedamage"\
		execOnDvarStringValue menu_scr_claymore_friendly_fire _null "setfromdvar menu_scr_claymore_friendly_fire scr_claymore_friendly_fire"\
		execOnDvarStringValue menu_specialty_grenadepulldeath_check_frags _null "setfromdvar menu_specialty_grenadepulldeath_check_frags specialty_grenadepulldeath_check_frags"\
		execOnDvarStringValue menu_specialty_pistoldeath_check_pistol _null "setfromdvar menu_specialty_pistoldeath_check_pistol specialty_pistoldeath_check_pistol"\
		execOnDvarStringValue menu_scr_claymore_check_plant_distance _null "setfromdvar menu_scr_claymore_check_plant_distance scr_claymore_check_plant_distance"\
		execOnDvarStringValue menu_scr_claymore_add_kill_only_if_directed _null "setfromdvar menu_scr_claymore_add_kill_only_if_directed scr_claymore_add_kill_only_if_directed"\
		execOnDvarStringValue menu_scr_claymore_arm_time _null "setfromdvar menu_scr_claymore_arm_time scr_claymore_arm_time"\
		execOnDvarStringValue menu_scr_explosives_allow_disarm _null "setfromdvar menu_scr_explosives_allow_disarm scr_explosives_allow_disarm"\
		execOnDvarStringValue menu_scr_explosives_disarm_time _null "setfromdvar menu_scr_explosives_disarm_time scr_explosives_disarm_time"\
		execOnDvarStringValue menu_scr_claymore_show_headicon _null "setfromdvar menu_scr_claymore_show_headicon scr_claymore_show_headicon"\
		execOnDvarStringValue menu_scr_claymore_show_laser_beams _null "setfromdvar menu_scr_claymore_show_laser_beams scr_claymore_show_laser_beams"\
		execOnDvarStringValue menu_scr_show_c4_blink_effect _null "setfromdvar menu_scr_show_c4_blink_effect scr_show_c4_blink_effect"


#define SET_PERK_ALLOW_C4_MP \
  execOnDvarStringValue menu_cfg_gt ass "set perk_allow_c4_mp_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set perk_allow_c4_mp_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set perk_allow_c4_mp_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set perk_allow_c4_mp_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set perk_allow_c4_mp_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set perk_allow_c4_mp_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set perk_allow_c4_mp_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gr "set perk_allow_c4_mp_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set perk_allow_c4_mp_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set perk_allow_c4_mp_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set perk_allow_c4_mp_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set perk_allow_c4_mp_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set perk_allow_c4_mp_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set perk_allow_c4_mp_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set perk_allow_c4_mp_war _null"

#define SET_PERK_ALLOW_SPECIALTY_SPECIALGRENADE \
  execOnDvarStringValue menu_cfg_gt ass "set perk_allow_specialty_specialgrenade_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set perk_allow_specialty_specialgrenade_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set perk_allow_specialty_specialgrenade_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set perk_allow_specialty_specialgrenade_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set perk_allow_specialty_specialgrenade_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set perk_allow_specialty_specialgrenade_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set perk_allow_specialty_specialgrenade_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gr "set perk_allow_specialty_specialgrenade_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set perk_allow_specialty_specialgrenade_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set perk_allow_specialty_specialgrenade_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set perk_allow_specialty_specialgrenade_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set perk_allow_specialty_specialgrenade_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set perk_allow_specialty_specialgrenade_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set perk_allow_specialty_specialgrenade_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set perk_allow_specialty_specialgrenade_war _null"

#define SET_PERK_ALLOW_RPG_MP \
  execOnDvarStringValue menu_cfg_gt ass "set perk_allow_rpg_mp_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set perk_allow_rpg_mp_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set perk_allow_rpg_mp_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set perk_allow_rpg_mp_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set perk_allow_rpg_mp_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set perk_allow_rpg_mp_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set perk_allow_rpg_mp_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gr "set perk_allow_rpg_mp_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set perk_allow_rpg_mp_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set perk_allow_rpg_mp_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set perk_allow_rpg_mp_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set perk_allow_rpg_mp_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set perk_allow_rpg_mp_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set perk_allow_rpg_mp_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set perk_allow_rpg_mp_war _null"

#define SET_PERK_ALLOW_CLAYMORE_MP \
  execOnDvarStringValue menu_cfg_gt ass "set perk_allow_claymore_mp_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set perk_allow_claymore_mp_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set perk_allow_claymore_mp_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set perk_allow_claymore_mp_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set perk_allow_claymore_mp_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set perk_allow_claymore_mp_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set perk_allow_claymore_mp_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gr "set perk_allow_claymore_mp_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set perk_allow_claymore_mp_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set perk_allow_claymore_mp_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set perk_allow_claymore_mp_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set perk_allow_claymore_mp_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set perk_allow_claymore_mp_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set perk_allow_claymore_mp_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set perk_allow_claymore_mp_war _null"

#define SET_PERK_ALLOW_SPECIALTY_FRAGGRENADE \
  execOnDvarStringValue menu_cfg_gt ass "set perk_allow_specialty_fraggrenade_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set perk_allow_specialty_fraggrenade_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set perk_allow_specialty_fraggrenade_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set perk_allow_specialty_fraggrenade_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set perk_allow_specialty_fraggrenade_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set perk_allow_specialty_fraggrenade_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set perk_allow_specialty_fraggrenade_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gr "set perk_allow_specialty_fraggrenade_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set perk_allow_specialty_fraggrenade_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set perk_allow_specialty_fraggrenade_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set perk_allow_specialty_fraggrenade_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set perk_allow_specialty_fraggrenade_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set perk_allow_specialty_fraggrenade_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set perk_allow_specialty_fraggrenade_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set perk_allow_specialty_fraggrenade_war _null"

#define SET_PERK_ALLOW_SPECIALTY_EXTRAAMMO \
  execOnDvarStringValue menu_cfg_gt ass "set perk_allow_specialty_extraammo_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set perk_allow_specialty_extraammo_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set perk_allow_specialty_extraammo_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set perk_allow_specialty_extraammo_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set perk_allow_specialty_extraammo_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set perk_allow_specialty_extraammo_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set perk_allow_specialty_extraammo_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gr "set perk_allow_specialty_extraammo_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set perk_allow_specialty_extraammo_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set perk_allow_specialty_extraammo_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set perk_allow_specialty_extraammo_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set perk_allow_specialty_extraammo_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set perk_allow_specialty_extraammo_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set perk_allow_specialty_extraammo_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set perk_allow_specialty_extraammo_war _null"

#define SET_PERK_ALLOW_SPECIALTY_DETECTEXPLOSIVE \
  execOnDvarStringValue menu_cfg_gt ass "set perk_allow_specialty_detectexplosive_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set perk_allow_specialty_detectexplosive_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set perk_allow_specialty_detectexplosive_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set perk_allow_specialty_detectexplosive_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set perk_allow_specialty_detectexplosive_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set perk_allow_specialty_detectexplosive_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set perk_allow_specialty_detectexplosive_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gr "set perk_allow_specialty_detectexplosive_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set perk_allow_specialty_detectexplosive_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set perk_allow_specialty_detectexplosive_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set perk_allow_specialty_detectexplosive_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set perk_allow_specialty_detectexplosive_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set perk_allow_specialty_detectexplosive_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set perk_allow_specialty_detectexplosive_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set perk_allow_specialty_detectexplosive_war _null"

#define SET_PERK_ALLOW_SPECIALTY_BULLETDAMAGE \
  execOnDvarStringValue menu_cfg_gt ass "set perk_allow_specialty_bulletdamage_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set perk_allow_specialty_bulletdamage_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set perk_allow_specialty_bulletdamage_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set perk_allow_specialty_bulletdamage_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set perk_allow_specialty_bulletdamage_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set perk_allow_specialty_bulletdamage_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set perk_allow_specialty_bulletdamage_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gr "set perk_allow_specialty_bulletdamage_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set perk_allow_specialty_bulletdamage_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set perk_allow_specialty_bulletdamage_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set perk_allow_specialty_bulletdamage_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set perk_allow_specialty_bulletdamage_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set perk_allow_specialty_bulletdamage_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set perk_allow_specialty_bulletdamage_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set perk_allow_specialty_bulletdamage_war _null"

#define SET_PERK_ALLOW_SPECIALTY_ARMORVEST \
  execOnDvarStringValue menu_cfg_gt ass "set perk_allow_specialty_armorvest_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set perk_allow_specialty_armorvest_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set perk_allow_specialty_armorvest_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set perk_allow_specialty_armorvest_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set perk_allow_specialty_armorvest_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set perk_allow_specialty_armorvest_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set perk_allow_specialty_armorvest_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gr "set perk_allow_specialty_armorvest_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set perk_allow_specialty_armorvest_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set perk_allow_specialty_armorvest_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set perk_allow_specialty_armorvest_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set perk_allow_specialty_armorvest_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set perk_allow_specialty_armorvest_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set perk_allow_specialty_armorvest_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set perk_allow_specialty_armorvest_war _null"

#define SET_PERK_ALLOW_SPECIALTY_FASTRELOAD \
  execOnDvarStringValue menu_cfg_gt ass "set perk_allow_specialty_fastreload_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set perk_allow_specialty_fastreload_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set perk_allow_specialty_fastreload_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set perk_allow_specialty_fastreload_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set perk_allow_specialty_fastreload_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set perk_allow_specialty_fastreload_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set perk_allow_specialty_fastreload_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gr "set perk_allow_specialty_fastreload_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set perk_allow_specialty_fastreload_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set perk_allow_specialty_fastreload_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set perk_allow_specialty_fastreload_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set perk_allow_specialty_fastreload_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set perk_allow_specialty_fastreload_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set perk_allow_specialty_fastreload_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set perk_allow_specialty_fastreload_war _null"

#define SET_PERK_ALLOW_SPECIALTY_ROF \
  execOnDvarStringValue menu_cfg_gt ass "set perk_allow_specialty_rof_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set perk_allow_specialty_rof_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set perk_allow_specialty_rof_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set perk_allow_specialty_rof_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set perk_allow_specialty_rof_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set perk_allow_specialty_rof_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set perk_allow_specialty_rof_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gr "set perk_allow_specialty_rof_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set perk_allow_specialty_rof_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set perk_allow_specialty_rof_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set perk_allow_specialty_rof_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set perk_allow_specialty_rof_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set perk_allow_specialty_rof_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set perk_allow_specialty_rof_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set perk_allow_specialty_rof_war _null"

#define SET_PERK_ALLOW_SPECIALTY_TWOPRIMARIES \
  execOnDvarStringValue menu_cfg_gt ass "set perk_allow_specialty_twoprimaries_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set perk_allow_specialty_twoprimaries_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set perk_allow_specialty_twoprimaries_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set perk_allow_specialty_twoprimaries_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set perk_allow_specialty_twoprimaries_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set perk_allow_specialty_twoprimaries_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set perk_allow_specialty_twoprimaries_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gr "set perk_allow_specialty_twoprimaries_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set perk_allow_specialty_twoprimaries_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set perk_allow_specialty_twoprimaries_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set perk_allow_specialty_twoprimaries_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set perk_allow_specialty_twoprimaries_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set perk_allow_specialty_twoprimaries_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set perk_allow_specialty_twoprimaries_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set perk_allow_specialty_twoprimaries_war _null"

#define SET_PERK_ALLOW_SPECIALTY_GPSJAMMER \
  execOnDvarStringValue menu_cfg_gt ass "set perk_allow_specialty_gpsjammer_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set perk_allow_specialty_gpsjammer_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set perk_allow_specialty_gpsjammer_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set perk_allow_specialty_gpsjammer_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set perk_allow_specialty_gpsjammer_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set perk_allow_specialty_gpsjammer_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set perk_allow_specialty_gpsjammer_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gr "set perk_allow_specialty_gpsjammer_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set perk_allow_specialty_gpsjammer_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set perk_allow_specialty_gpsjammer_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set perk_allow_specialty_gpsjammer_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set perk_allow_specialty_gpsjammer_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set perk_allow_specialty_gpsjammer_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set perk_allow_specialty_gpsjammer_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set perk_allow_specialty_gpsjammer_war _null"

#define SET_PERK_ALLOW_SPECIALTY_EXPLOSIVEDAMAGE \
  execOnDvarStringValue menu_cfg_gt ass "set perk_allow_specialty_explosivedamage_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set perk_allow_specialty_explosivedamage_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set perk_allow_specialty_explosivedamage_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set perk_allow_specialty_explosivedamage_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set perk_allow_specialty_explosivedamage_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set perk_allow_specialty_explosivedamage_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set perk_allow_specialty_explosivedamage_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gr "set perk_allow_specialty_explosivedamage_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set perk_allow_specialty_explosivedamage_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set perk_allow_specialty_explosivedamage_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set perk_allow_specialty_explosivedamage_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set perk_allow_specialty_explosivedamage_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set perk_allow_specialty_explosivedamage_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set perk_allow_specialty_explosivedamage_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set perk_allow_specialty_explosivedamage_war _null"

#define SET_PERK_ALLOW_SPECIALTY_LONGERSPRINT \
  execOnDvarStringValue menu_cfg_gt ass "set perk_allow_specialty_longersprint_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set perk_allow_specialty_longersprint_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set perk_allow_specialty_longersprint_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set perk_allow_specialty_longersprint_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set perk_allow_specialty_longersprint_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set perk_allow_specialty_longersprint_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set perk_allow_specialty_longersprint_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gr "set perk_allow_specialty_longersprint_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set perk_allow_specialty_longersprint_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set perk_allow_specialty_longersprint_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set perk_allow_specialty_longersprint_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set perk_allow_specialty_longersprint_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set perk_allow_specialty_longersprint_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set perk_allow_specialty_longersprint_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set perk_allow_specialty_longersprint_war _null"

#define SET_PERK_ALLOW_SPECIALTY_BULLETACCURACY \
  execOnDvarStringValue menu_cfg_gt ass "set perk_allow_specialty_bulletaccuracy_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set perk_allow_specialty_bulletaccuracy_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set perk_allow_specialty_bulletaccuracy_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set perk_allow_specialty_bulletaccuracy_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set perk_allow_specialty_bulletaccuracy_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set perk_allow_specialty_bulletaccuracy_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set perk_allow_specialty_bulletaccuracy_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gr "set perk_allow_specialty_bulletaccuracy_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set perk_allow_specialty_bulletaccuracy_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set perk_allow_specialty_bulletaccuracy_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set perk_allow_specialty_bulletaccuracy_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set perk_allow_specialty_bulletaccuracy_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set perk_allow_specialty_bulletaccuracy_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set perk_allow_specialty_bulletaccuracy_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set perk_allow_specialty_bulletaccuracy_war _null"

#define SET_PERK_ALLOW_SPECIALTY_PISTOLDEATH \
  execOnDvarStringValue menu_cfg_gt ass "set perk_allow_specialty_pistoldeath_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set perk_allow_specialty_pistoldeath_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set perk_allow_specialty_pistoldeath_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set perk_allow_specialty_pistoldeath_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set perk_allow_specialty_pistoldeath_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set perk_allow_specialty_pistoldeath_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set perk_allow_specialty_pistoldeath_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gr "set perk_allow_specialty_pistoldeath_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set perk_allow_specialty_pistoldeath_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set perk_allow_specialty_pistoldeath_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set perk_allow_specialty_pistoldeath_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set perk_allow_specialty_pistoldeath_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set perk_allow_specialty_pistoldeath_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set perk_allow_specialty_pistoldeath_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set perk_allow_specialty_pistoldeath_war _null"

#define SET_PERK_ALLOW_SPECIALTY_GRENADEPULLDEATH \
  execOnDvarStringValue menu_cfg_gt ass "set perk_allow_specialty_grenadepulldeath_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set perk_allow_specialty_grenadepulldeath_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set perk_allow_specialty_grenadepulldeath_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set perk_allow_specialty_grenadepulldeath_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set perk_allow_specialty_grenadepulldeath_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set perk_allow_specialty_grenadepulldeath_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set perk_allow_specialty_grenadepulldeath_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gr "set perk_allow_specialty_grenadepulldeath_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set perk_allow_specialty_grenadepulldeath_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set perk_allow_specialty_grenadepulldeath_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set perk_allow_specialty_grenadepulldeath_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set perk_allow_specialty_grenadepulldeath_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set perk_allow_specialty_grenadepulldeath_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set perk_allow_specialty_grenadepulldeath_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set perk_allow_specialty_grenadepulldeath_war _null"

#define SET_PERK_ALLOW_SPECIALTY_BULLETPENETRATION \
  execOnDvarStringValue menu_cfg_gt ass "set perk_allow_specialty_bulletpenetration_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set perk_allow_specialty_bulletpenetration_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set perk_allow_specialty_bulletpenetration_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set perk_allow_specialty_bulletpenetration_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set perk_allow_specialty_bulletpenetration_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set perk_allow_specialty_bulletpenetration_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set perk_allow_specialty_bulletpenetration_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gr "set perk_allow_specialty_bulletpenetration_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set perk_allow_specialty_bulletpenetration_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set perk_allow_specialty_bulletpenetration_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set perk_allow_specialty_bulletpenetration_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set perk_allow_specialty_bulletpenetration_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set perk_allow_specialty_bulletpenetration_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set perk_allow_specialty_bulletpenetration_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set perk_allow_specialty_bulletpenetration_war _null"

#define SET_PERK_ALLOW_SPECIALTY_HOLDBREATH \
  execOnDvarStringValue menu_cfg_gt ass "set perk_allow_specialty_holdbreath_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set perk_allow_specialty_holdbreath_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set perk_allow_specialty_holdbreath_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set perk_allow_specialty_holdbreath_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set perk_allow_specialty_holdbreath_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set perk_allow_specialty_holdbreath_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set perk_allow_specialty_holdbreath_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gr "set perk_allow_specialty_holdbreath_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set perk_allow_specialty_holdbreath_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set perk_allow_specialty_holdbreath_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set perk_allow_specialty_holdbreath_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set perk_allow_specialty_holdbreath_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set perk_allow_specialty_holdbreath_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set perk_allow_specialty_holdbreath_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set perk_allow_specialty_holdbreath_war _null"

#define SET_PERK_ALLOW_SPECIALTY_QUIETER \
  execOnDvarStringValue menu_cfg_gt ass "set perk_allow_specialty_quieter_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set perk_allow_specialty_quieter_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set perk_allow_specialty_quieter_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set perk_allow_specialty_quieter_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set perk_allow_specialty_quieter_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set perk_allow_specialty_quieter_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set perk_allow_specialty_quieter_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gr "set perk_allow_specialty_quieter_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set perk_allow_specialty_quieter_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set perk_allow_specialty_quieter_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set perk_allow_specialty_quieter_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set perk_allow_specialty_quieter_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set perk_allow_specialty_quieter_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set perk_allow_specialty_quieter_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set perk_allow_specialty_quieter_war _null"

#define SET_PERK_ALLOW_SPECIALTY_PARABOLIC \
  execOnDvarStringValue menu_cfg_gt ass "set perk_allow_specialty_parabolic_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set perk_allow_specialty_parabolic_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set perk_allow_specialty_parabolic_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set perk_allow_specialty_parabolic_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set perk_allow_specialty_parabolic_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set perk_allow_specialty_parabolic_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set perk_allow_specialty_parabolic_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gr "set perk_allow_specialty_parabolic_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set perk_allow_specialty_parabolic_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set perk_allow_specialty_parabolic_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set perk_allow_specialty_parabolic_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set perk_allow_specialty_parabolic_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set perk_allow_specialty_parabolic_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set perk_allow_specialty_parabolic_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set perk_allow_specialty_parabolic_war _null"

#define SET_SCR_C4_AMMO_COUNT \
  execOnDvarStringValue menu_cfg_gt ass "set scr_c4_ammo_count_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_c4_ammo_count_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_c4_ammo_count_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_c4_ammo_count_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_c4_ammo_count_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_c4_ammo_count_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_c4_ammo_count_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_c4_ammo_count_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_c4_ammo_count_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_c4_ammo_count_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_c4_ammo_count_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_c4_ammo_count_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_c4_ammo_count_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_c4_ammo_count_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_c4_ammo_count_war _null"

#define SET_SCR_CLAYMORE_AMMO_COUNT \
  execOnDvarStringValue menu_cfg_gt ass "set scr_claymore_ammo_count_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_claymore_ammo_count_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_claymore_ammo_count_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_claymore_ammo_count_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_claymore_ammo_count_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_claymore_ammo_count_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_claymore_ammo_count_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_claymore_ammo_count_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_claymore_ammo_count_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_claymore_ammo_count_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_claymore_ammo_count_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_claymore_ammo_count_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_claymore_ammo_count_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_claymore_ammo_count_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_claymore_ammo_count_war _null"

#define SET_SCR_RPG_AMMO_COUNT \
  execOnDvarStringValue menu_cfg_gt ass "set scr_rpg_ammo_count_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_rpg_ammo_count_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_rpg_ammo_count_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_rpg_ammo_count_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_rpg_ammo_count_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_rpg_ammo_count_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_rpg_ammo_count_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_rpg_ammo_count_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_rpg_ammo_count_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_rpg_ammo_count_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_rpg_ammo_count_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_rpg_ammo_count_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_rpg_ammo_count_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_rpg_ammo_count_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_rpg_ammo_count_war _null"

#define SET_SPECIALTY_FRAGGRENADE_AMMO_COUNT \
  execOnDvarStringValue menu_cfg_gt ass "set specialty_fraggrenade_ammo_count_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set specialty_fraggrenade_ammo_count_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set specialty_fraggrenade_ammo_count_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set specialty_fraggrenade_ammo_count_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set specialty_fraggrenade_ammo_count_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set specialty_fraggrenade_ammo_count_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set specialty_fraggrenade_ammo_count_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gr "set specialty_fraggrenade_ammo_count_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set specialty_fraggrenade_ammo_count_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set specialty_fraggrenade_ammo_count_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set specialty_fraggrenade_ammo_count_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set specialty_fraggrenade_ammo_count_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set specialty_fraggrenade_ammo_count_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set specialty_fraggrenade_ammo_count_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set specialty_fraggrenade_ammo_count_war _null"

#define SET_SPECIALTY_SPECIALGRENADE_AMMO_COUNT \
  execOnDvarStringValue menu_cfg_gt ass "set specialty_specialgrenade_ammo_count_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set specialty_specialgrenade_ammo_count_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set specialty_specialgrenade_ammo_count_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set specialty_specialgrenade_ammo_count_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set specialty_specialgrenade_ammo_count_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set specialty_specialgrenade_ammo_count_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set specialty_specialgrenade_ammo_count_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gr "set specialty_specialgrenade_ammo_count_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set specialty_specialgrenade_ammo_count_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set specialty_specialgrenade_ammo_count_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set specialty_specialgrenade_ammo_count_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set specialty_specialgrenade_ammo_count_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set specialty_specialgrenade_ammo_count_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set specialty_specialgrenade_ammo_count_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set specialty_specialgrenade_ammo_count_war _null"

#define SET_PERK_ARMORVEST \
  execOnDvarStringValue menu_cfg_gt ass "set perk_armorvest_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set perk_armorvest_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set perk_armorvest_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set perk_armorvest_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set perk_armorvest_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set perk_armorvest_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set perk_armorvest_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set perk_armorvest_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set perk_armorvest_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set perk_armorvest_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set perk_armorvest_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set perk_armorvest_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set perk_armorvest_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set perk_armorvest_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set perk_armorvest_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set perk_armorvest_war _null"

#define SET_PERK_BULLETDAMAGE \
  execOnDvarStringValue menu_cfg_gt ass "set perk_bulletdamage_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set perk_bulletdamage_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set perk_bulletdamage_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set perk_bulletdamage_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set perk_bulletdamage_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set perk_bulletdamage_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set perk_bulletdamage_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set perk_bulletdamage_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set perk_bulletdamage_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set perk_bulletdamage_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set perk_bulletdamage_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set perk_bulletdamage_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set perk_bulletdamage_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set perk_bulletdamage_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set perk_bulletdamage_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set perk_bulletdamage_war _null"

#define SET_PERK_EXPLOSIVEDAMAGE \
  execOnDvarStringValue menu_cfg_gt ass "set perk_explosivedamage_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set perk_explosivedamage_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set perk_explosivedamage_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set perk_explosivedamage_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set perk_explosivedamage_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set perk_explosivedamage_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set perk_explosivedamage_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set perk_explosivedamage_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set perk_explosivedamage_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set perk_explosivedamage_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set perk_explosivedamage_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set perk_explosivedamage_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set perk_explosivedamage_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set perk_explosivedamage_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set perk_explosivedamage_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set perk_explosivedamage_war _null"

#define SET_SCR_CLAYMORE_FRIENDLY_FIRE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_claymore_friendly_fire_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_claymore_friendly_fire_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_claymore_friendly_fire_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_claymore_friendly_fire_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_claymore_friendly_fire_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_claymore_friendly_fire_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_claymore_friendly_fire_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_claymore_friendly_fire_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_claymore_friendly_fire_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_claymore_friendly_fire_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_claymore_friendly_fire_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_claymore_friendly_fire_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_claymore_friendly_fire_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_claymore_friendly_fire_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_claymore_friendly_fire_war _null"

#define SET_SPECIALTY_GRENADEPULLDEATH_CHECK_FRAGS \
  execOnDvarStringValue menu_cfg_gt ass "set specialty_grenadepulldeath_check_frags_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set specialty_grenadepulldeath_check_frags_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set specialty_grenadepulldeath_check_frags_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set specialty_grenadepulldeath_check_frags_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set specialty_grenadepulldeath_check_frags_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set specialty_grenadepulldeath_check_frags_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set specialty_grenadepulldeath_check_frags_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set specialty_grenadepulldeath_check_frags_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set specialty_grenadepulldeath_check_frags_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set specialty_grenadepulldeath_check_frags_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set specialty_grenadepulldeath_check_frags_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set specialty_grenadepulldeath_check_frags_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set specialty_grenadepulldeath_check_frags_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set specialty_grenadepulldeath_check_frags_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set specialty_grenadepulldeath_check_frags_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set specialty_grenadepulldeath_check_frags_war _null"

#define SET_SPECIALTY_PISTOLDEATH_CHECK_PISTOL \
  execOnDvarStringValue menu_cfg_gt ass "set specialty_pistoldeath_check_pistol_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set specialty_pistoldeath_check_pistol_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set specialty_pistoldeath_check_pistol_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set specialty_pistoldeath_check_pistol_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set specialty_pistoldeath_check_pistol_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set specialty_pistoldeath_check_pistol_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set specialty_pistoldeath_check_pistol_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set specialty_pistoldeath_check_pistol_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set specialty_pistoldeath_check_pistol_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set specialty_pistoldeath_check_pistol_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set specialty_pistoldeath_check_pistol_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set specialty_pistoldeath_check_pistol_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set specialty_pistoldeath_check_pistol_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set specialty_pistoldeath_check_pistol_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set specialty_pistoldeath_check_pistol_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set specialty_pistoldeath_check_pistol_war _null"

#define SET_SCR_CLAYMORE_CHECK_PLANT_DISTANCE \
  execOnDvarStringValue menu_cfg_gt ass "set scr_claymore_check_plant_distance_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_claymore_check_plant_distance_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_claymore_check_plant_distance_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_claymore_check_plant_distance_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_claymore_check_plant_distance_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_claymore_check_plant_distance_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_claymore_check_plant_distance_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_claymore_check_plant_distance_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_claymore_check_plant_distance_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_claymore_check_plant_distance_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_claymore_check_plant_distance_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_claymore_check_plant_distance_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_claymore_check_plant_distance_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_claymore_check_plant_distance_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_claymore_check_plant_distance_war _null"

#define SET_SCR_CLAYMORE_ADD_KILL_ONLY_IF_DIRECTED \
  execOnDvarStringValue menu_cfg_gt ass "set scr_claymore_add_kill_only_if_directed_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_claymore_add_kill_only_if_directed_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_claymore_add_kill_only_if_directed_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_claymore_add_kill_only_if_directed_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_claymore_add_kill_only_if_directed_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_claymore_add_kill_only_if_directed_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_claymore_add_kill_only_if_directed_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_claymore_add_kill_only_if_directed_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_claymore_add_kill_only_if_directed_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_claymore_add_kill_only_if_directed_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_claymore_add_kill_only_if_directed_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_claymore_add_kill_only_if_directed_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_claymore_add_kill_only_if_directed_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_claymore_add_kill_only_if_directed_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_claymore_add_kill_only_if_directed_war _null"

#define SET_SCR_CLAYMORE_ARM_TIME \
  execOnDvarStringValue menu_cfg_gt ass "set scr_claymore_arm_time_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_claymore_arm_time_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_claymore_arm_time_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_claymore_arm_time_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_claymore_arm_time_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_claymore_arm_time_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_claymore_arm_time_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_claymore_arm_time_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_claymore_arm_time_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_claymore_arm_time_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_claymore_arm_time_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_claymore_arm_time_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_claymore_arm_time_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_claymore_arm_time_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_claymore_arm_time_war _null"

#define SET_SCR_EXPLOSIVES_ALLOW_DISARM \
  execOnDvarStringValue menu_cfg_gt ass "set scr_explosives_allow_disarm_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_explosives_allow_disarm_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_explosives_allow_disarm_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_explosives_allow_disarm_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_explosives_allow_disarm_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_explosives_allow_disarm_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_explosives_allow_disarm_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_explosives_allow_disarm_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_explosives_allow_disarm_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_explosives_allow_disarm_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_explosives_allow_disarm_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_explosives_allow_disarm_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_explosives_allow_disarm_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_explosives_allow_disarm_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_explosives_allow_disarm_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_explosives_allow_disarm_war _null"

#define SET_SCR_EXPLOSIVES_DISARM_TIME \
  execOnDvarStringValue menu_cfg_gt ass "set scr_explosives_disarm_time_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_explosives_disarm_time_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_explosives_disarm_time_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_explosives_disarm_time_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_explosives_disarm_time_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_explosives_disarm_time_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_explosives_disarm_time_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_explosives_disarm_time_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_explosives_disarm_time_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_explosives_disarm_time_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_explosives_disarm_time_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_explosives_disarm_time_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_explosives_disarm_time_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_explosives_disarm_time_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_explosives_disarm_time_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_explosives_disarm_time_war _null"

#define SET_SCR_CLAYMORE_SHOW_HEADICON \
  execOnDvarStringValue menu_cfg_gt ass "set scr_claymore_show_headicon_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_claymore_show_headicon_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_claymore_show_headicon_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_claymore_show_headicon_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_claymore_show_headicon_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_claymore_show_headicon_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_claymore_show_headicon_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_claymore_show_headicon_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_claymore_show_headicon_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_claymore_show_headicon_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_claymore_show_headicon_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_claymore_show_headicon_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_claymore_show_headicon_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_claymore_show_headicon_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_claymore_show_headicon_war _null"

#define SET_SCR_CLAYMORE_SHOW_LASER_BEAMS \
  execOnDvarStringValue menu_cfg_gt ass "set scr_claymore_show_laser_beams_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_claymore_show_laser_beams_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_claymore_show_laser_beams_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_claymore_show_laser_beams_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_claymore_show_laser_beams_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_claymore_show_laser_beams_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_claymore_show_laser_beams_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_claymore_show_laser_beams_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_claymore_show_laser_beams_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_claymore_show_laser_beams_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_claymore_show_laser_beams_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_claymore_show_laser_beams_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_claymore_show_laser_beams_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_claymore_show_laser_beams_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_claymore_show_laser_beams_war _null"

#define SET_SCR_SHOW_C4_BLINK_EFFECT \
  execOnDvarStringValue menu_cfg_gt ass "set scr_show_c4_blink_effect_ass _null" \
  execOnDvarStringValue menu_cfg_gt bel "set scr_show_c4_blink_effect_bel _null" \
  execOnDvarStringValue menu_cfg_gt ch "set scr_show_c4_blink_effect_ch _null" \
  execOnDvarStringValue menu_cfg_gt ctf "set scr_show_c4_blink_effect_ctf _null" \
  execOnDvarStringValue menu_cfg_gt dm "set scr_show_c4_blink_effect_dm _null" \
  execOnDvarStringValue menu_cfg_gt dom "set scr_show_c4_blink_effect_dom _null" \
  execOnDvarStringValue menu_cfg_gt ftag "set scr_show_c4_blink_effect_ftag _null" \
  execOnDvarStringValue menu_cfg_gt gg "set scr_show_c4_blink_effect_gg _null" \
  execOnDvarStringValue menu_cfg_gt gr "set scr_show_c4_blink_effect_gr _null" \
  execOnDvarStringValue menu_cfg_gt koth "set scr_show_c4_blink_effect_koth _null" \
  execOnDvarStringValue menu_cfg_gt re "set scr_show_c4_blink_effect_re _null" \
  execOnDvarStringValue menu_cfg_gt sab "set scr_show_c4_blink_effect_sab _null" \
  execOnDvarStringValue menu_cfg_gt sd "set scr_show_c4_blink_effect_sd _null" \
  execOnDvarStringValue menu_cfg_gt ss "set scr_show_c4_blink_effect_ss _null" \
  execOnDvarStringValue menu_cfg_gt tgr "set scr_show_c4_blink_effect_tgr _null" \
  execOnDvarStringValue menu_cfg_gt war "set scr_show_c4_blink_effect_war _null"


// Setas
#define SETA_PERK_ALLOW_C4_MP \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue perk_allow_c4_mp_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta perk_allow_c4_mp_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue perk_allow_c4_mp_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta perk_allow_c4_mp_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue perk_allow_c4_mp_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta perk_allow_c4_mp_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue perk_allow_c4_mp_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta perk_allow_c4_mp_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue perk_allow_c4_mp_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta perk_allow_c4_mp_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue perk_allow_c4_mp_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta perk_allow_c4_mp_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue perk_allow_c4_mp_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta perk_allow_c4_mp_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue perk_allow_c4_mp_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta perk_allow_c4_mp_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue perk_allow_c4_mp_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta perk_allow_c4_mp_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue perk_allow_c4_mp_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta perk_allow_c4_mp_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue perk_allow_c4_mp_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta perk_allow_c4_mp_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue perk_allow_c4_mp_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta perk_allow_c4_mp_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue perk_allow_c4_mp_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta perk_allow_c4_mp_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue perk_allow_c4_mp_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta perk_allow_c4_mp_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue perk_allow_c4_mp_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta perk_allow_c4_mp_war _null"

#define SETA_PERK_ALLOW_SPECIALTY_SPECIALGRENADE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue perk_allow_specialty_specialgrenade_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta perk_allow_specialty_specialgrenade_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue perk_allow_specialty_specialgrenade_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta perk_allow_specialty_specialgrenade_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue perk_allow_specialty_specialgrenade_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta perk_allow_specialty_specialgrenade_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue perk_allow_specialty_specialgrenade_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta perk_allow_specialty_specialgrenade_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue perk_allow_specialty_specialgrenade_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta perk_allow_specialty_specialgrenade_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue perk_allow_specialty_specialgrenade_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta perk_allow_specialty_specialgrenade_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue perk_allow_specialty_specialgrenade_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta perk_allow_specialty_specialgrenade_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue perk_allow_specialty_specialgrenade_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta perk_allow_specialty_specialgrenade_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue perk_allow_specialty_specialgrenade_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta perk_allow_specialty_specialgrenade_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue perk_allow_specialty_specialgrenade_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta perk_allow_specialty_specialgrenade_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue perk_allow_specialty_specialgrenade_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta perk_allow_specialty_specialgrenade_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue perk_allow_specialty_specialgrenade_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta perk_allow_specialty_specialgrenade_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue perk_allow_specialty_specialgrenade_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta perk_allow_specialty_specialgrenade_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue perk_allow_specialty_specialgrenade_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta perk_allow_specialty_specialgrenade_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue perk_allow_specialty_specialgrenade_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta perk_allow_specialty_specialgrenade_war _null"

#define SETA_PERK_ALLOW_RPG_MP \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue perk_allow_rpg_mp_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta perk_allow_rpg_mp_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue perk_allow_rpg_mp_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta perk_allow_rpg_mp_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue perk_allow_rpg_mp_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta perk_allow_rpg_mp_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue perk_allow_rpg_mp_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta perk_allow_rpg_mp_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue perk_allow_rpg_mp_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta perk_allow_rpg_mp_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue perk_allow_rpg_mp_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta perk_allow_rpg_mp_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue perk_allow_rpg_mp_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta perk_allow_rpg_mp_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue perk_allow_rpg_mp_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta perk_allow_rpg_mp_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue perk_allow_rpg_mp_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta perk_allow_rpg_mp_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue perk_allow_rpg_mp_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta perk_allow_rpg_mp_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue perk_allow_rpg_mp_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta perk_allow_rpg_mp_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue perk_allow_rpg_mp_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta perk_allow_rpg_mp_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue perk_allow_rpg_mp_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta perk_allow_rpg_mp_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue perk_allow_rpg_mp_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta perk_allow_rpg_mp_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue perk_allow_rpg_mp_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta perk_allow_rpg_mp_war _null"

#define SETA_PERK_ALLOW_CLAYMORE_MP \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue perk_allow_claymore_mp_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta perk_allow_claymore_mp_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue perk_allow_claymore_mp_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta perk_allow_claymore_mp_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue perk_allow_claymore_mp_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta perk_allow_claymore_mp_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue perk_allow_claymore_mp_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta perk_allow_claymore_mp_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue perk_allow_claymore_mp_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta perk_allow_claymore_mp_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue perk_allow_claymore_mp_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta perk_allow_claymore_mp_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue perk_allow_claymore_mp_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta perk_allow_claymore_mp_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue perk_allow_claymore_mp_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta perk_allow_claymore_mp_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue perk_allow_claymore_mp_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta perk_allow_claymore_mp_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue perk_allow_claymore_mp_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta perk_allow_claymore_mp_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue perk_allow_claymore_mp_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta perk_allow_claymore_mp_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue perk_allow_claymore_mp_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta perk_allow_claymore_mp_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue perk_allow_claymore_mp_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta perk_allow_claymore_mp_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue perk_allow_claymore_mp_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta perk_allow_claymore_mp_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue perk_allow_claymore_mp_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta perk_allow_claymore_mp_war _null"

#define SETA_PERK_ALLOW_SPECIALTY_FRAGGRENADE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue perk_allow_specialty_fraggrenade_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta perk_allow_specialty_fraggrenade_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue perk_allow_specialty_fraggrenade_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta perk_allow_specialty_fraggrenade_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue perk_allow_specialty_fraggrenade_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta perk_allow_specialty_fraggrenade_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue perk_allow_specialty_fraggrenade_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta perk_allow_specialty_fraggrenade_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue perk_allow_specialty_fraggrenade_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta perk_allow_specialty_fraggrenade_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue perk_allow_specialty_fraggrenade_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta perk_allow_specialty_fraggrenade_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue perk_allow_specialty_fraggrenade_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta perk_allow_specialty_fraggrenade_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue perk_allow_specialty_fraggrenade_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta perk_allow_specialty_fraggrenade_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue perk_allow_specialty_fraggrenade_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta perk_allow_specialty_fraggrenade_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue perk_allow_specialty_fraggrenade_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta perk_allow_specialty_fraggrenade_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue perk_allow_specialty_fraggrenade_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta perk_allow_specialty_fraggrenade_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue perk_allow_specialty_fraggrenade_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta perk_allow_specialty_fraggrenade_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue perk_allow_specialty_fraggrenade_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta perk_allow_specialty_fraggrenade_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue perk_allow_specialty_fraggrenade_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta perk_allow_specialty_fraggrenade_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue perk_allow_specialty_fraggrenade_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta perk_allow_specialty_fraggrenade_war _null"

#define SETA_PERK_ALLOW_SPECIALTY_EXTRAAMMO \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue perk_allow_specialty_extraammo_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta perk_allow_specialty_extraammo_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue perk_allow_specialty_extraammo_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta perk_allow_specialty_extraammo_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue perk_allow_specialty_extraammo_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta perk_allow_specialty_extraammo_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue perk_allow_specialty_extraammo_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta perk_allow_specialty_extraammo_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue perk_allow_specialty_extraammo_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta perk_allow_specialty_extraammo_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue perk_allow_specialty_extraammo_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta perk_allow_specialty_extraammo_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue perk_allow_specialty_extraammo_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta perk_allow_specialty_extraammo_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue perk_allow_specialty_extraammo_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta perk_allow_specialty_extraammo_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue perk_allow_specialty_extraammo_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta perk_allow_specialty_extraammo_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue perk_allow_specialty_extraammo_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta perk_allow_specialty_extraammo_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue perk_allow_specialty_extraammo_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta perk_allow_specialty_extraammo_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue perk_allow_specialty_extraammo_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta perk_allow_specialty_extraammo_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue perk_allow_specialty_extraammo_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta perk_allow_specialty_extraammo_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue perk_allow_specialty_extraammo_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta perk_allow_specialty_extraammo_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue perk_allow_specialty_extraammo_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta perk_allow_specialty_extraammo_war _null"

#define SETA_PERK_ALLOW_SPECIALTY_DETECTEXPLOSIVE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue perk_allow_specialty_detectexplosive_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta perk_allow_specialty_detectexplosive_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue perk_allow_specialty_detectexplosive_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta perk_allow_specialty_detectexplosive_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue perk_allow_specialty_detectexplosive_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta perk_allow_specialty_detectexplosive_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue perk_allow_specialty_detectexplosive_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta perk_allow_specialty_detectexplosive_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue perk_allow_specialty_detectexplosive_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta perk_allow_specialty_detectexplosive_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue perk_allow_specialty_detectexplosive_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta perk_allow_specialty_detectexplosive_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue perk_allow_specialty_detectexplosive_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta perk_allow_specialty_detectexplosive_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue perk_allow_specialty_detectexplosive_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta perk_allow_specialty_detectexplosive_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue perk_allow_specialty_detectexplosive_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta perk_allow_specialty_detectexplosive_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue perk_allow_specialty_detectexplosive_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta perk_allow_specialty_detectexplosive_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue perk_allow_specialty_detectexplosive_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta perk_allow_specialty_detectexplosive_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue perk_allow_specialty_detectexplosive_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta perk_allow_specialty_detectexplosive_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue perk_allow_specialty_detectexplosive_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta perk_allow_specialty_detectexplosive_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue perk_allow_specialty_detectexplosive_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta perk_allow_specialty_detectexplosive_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue perk_allow_specialty_detectexplosive_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta perk_allow_specialty_detectexplosive_war _null"

#define SETA_PERK_ALLOW_SPECIALTY_BULLETDAMAGE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletdamage_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta perk_allow_specialty_bulletdamage_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletdamage_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta perk_allow_specialty_bulletdamage_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletdamage_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta perk_allow_specialty_bulletdamage_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletdamage_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta perk_allow_specialty_bulletdamage_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletdamage_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta perk_allow_specialty_bulletdamage_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletdamage_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta perk_allow_specialty_bulletdamage_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletdamage_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta perk_allow_specialty_bulletdamage_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletdamage_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta perk_allow_specialty_bulletdamage_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletdamage_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta perk_allow_specialty_bulletdamage_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletdamage_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta perk_allow_specialty_bulletdamage_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletdamage_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta perk_allow_specialty_bulletdamage_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletdamage_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta perk_allow_specialty_bulletdamage_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletdamage_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta perk_allow_specialty_bulletdamage_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletdamage_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta perk_allow_specialty_bulletdamage_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletdamage_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta perk_allow_specialty_bulletdamage_war _null"

#define SETA_PERK_ALLOW_SPECIALTY_ARMORVEST \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue perk_allow_specialty_armorvest_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta perk_allow_specialty_armorvest_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue perk_allow_specialty_armorvest_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta perk_allow_specialty_armorvest_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue perk_allow_specialty_armorvest_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta perk_allow_specialty_armorvest_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue perk_allow_specialty_armorvest_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta perk_allow_specialty_armorvest_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue perk_allow_specialty_armorvest_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta perk_allow_specialty_armorvest_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue perk_allow_specialty_armorvest_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta perk_allow_specialty_armorvest_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue perk_allow_specialty_armorvest_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta perk_allow_specialty_armorvest_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue perk_allow_specialty_armorvest_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta perk_allow_specialty_armorvest_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue perk_allow_specialty_armorvest_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta perk_allow_specialty_armorvest_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue perk_allow_specialty_armorvest_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta perk_allow_specialty_armorvest_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue perk_allow_specialty_armorvest_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta perk_allow_specialty_armorvest_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue perk_allow_specialty_armorvest_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta perk_allow_specialty_armorvest_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue perk_allow_specialty_armorvest_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta perk_allow_specialty_armorvest_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue perk_allow_specialty_armorvest_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta perk_allow_specialty_armorvest_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue perk_allow_specialty_armorvest_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta perk_allow_specialty_armorvest_war _null"

#define SETA_PERK_ALLOW_SPECIALTY_FASTRELOAD \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue perk_allow_specialty_fastreload_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta perk_allow_specialty_fastreload_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue perk_allow_specialty_fastreload_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta perk_allow_specialty_fastreload_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue perk_allow_specialty_fastreload_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta perk_allow_specialty_fastreload_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue perk_allow_specialty_fastreload_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta perk_allow_specialty_fastreload_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue perk_allow_specialty_fastreload_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta perk_allow_specialty_fastreload_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue perk_allow_specialty_fastreload_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta perk_allow_specialty_fastreload_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue perk_allow_specialty_fastreload_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta perk_allow_specialty_fastreload_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue perk_allow_specialty_fastreload_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta perk_allow_specialty_fastreload_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue perk_allow_specialty_fastreload_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta perk_allow_specialty_fastreload_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue perk_allow_specialty_fastreload_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta perk_allow_specialty_fastreload_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue perk_allow_specialty_fastreload_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta perk_allow_specialty_fastreload_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue perk_allow_specialty_fastreload_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta perk_allow_specialty_fastreload_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue perk_allow_specialty_fastreload_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta perk_allow_specialty_fastreload_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue perk_allow_specialty_fastreload_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta perk_allow_specialty_fastreload_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue perk_allow_specialty_fastreload_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta perk_allow_specialty_fastreload_war _null"

#define SETA_PERK_ALLOW_SPECIALTY_ROF \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue perk_allow_specialty_rof_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta perk_allow_specialty_rof_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue perk_allow_specialty_rof_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta perk_allow_specialty_rof_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue perk_allow_specialty_rof_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta perk_allow_specialty_rof_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue perk_allow_specialty_rof_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta perk_allow_specialty_rof_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue perk_allow_specialty_rof_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta perk_allow_specialty_rof_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue perk_allow_specialty_rof_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta perk_allow_specialty_rof_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue perk_allow_specialty_rof_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta perk_allow_specialty_rof_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue perk_allow_specialty_rof_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta perk_allow_specialty_rof_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue perk_allow_specialty_rof_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta perk_allow_specialty_rof_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue perk_allow_specialty_rof_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta perk_allow_specialty_rof_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue perk_allow_specialty_rof_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta perk_allow_specialty_rof_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue perk_allow_specialty_rof_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta perk_allow_specialty_rof_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue perk_allow_specialty_rof_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta perk_allow_specialty_rof_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue perk_allow_specialty_rof_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta perk_allow_specialty_rof_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue perk_allow_specialty_rof_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta perk_allow_specialty_rof_war _null"

#define SETA_PERK_ALLOW_SPECIALTY_TWOPRIMARIES \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue perk_allow_specialty_twoprimaries_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta perk_allow_specialty_twoprimaries_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue perk_allow_specialty_twoprimaries_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta perk_allow_specialty_twoprimaries_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue perk_allow_specialty_twoprimaries_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta perk_allow_specialty_twoprimaries_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue perk_allow_specialty_twoprimaries_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta perk_allow_specialty_twoprimaries_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue perk_allow_specialty_twoprimaries_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta perk_allow_specialty_twoprimaries_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue perk_allow_specialty_twoprimaries_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta perk_allow_specialty_twoprimaries_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue perk_allow_specialty_twoprimaries_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta perk_allow_specialty_twoprimaries_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue perk_allow_specialty_twoprimaries_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta perk_allow_specialty_twoprimaries_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue perk_allow_specialty_twoprimaries_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta perk_allow_specialty_twoprimaries_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue perk_allow_specialty_twoprimaries_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta perk_allow_specialty_twoprimaries_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue perk_allow_specialty_twoprimaries_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta perk_allow_specialty_twoprimaries_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue perk_allow_specialty_twoprimaries_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta perk_allow_specialty_twoprimaries_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue perk_allow_specialty_twoprimaries_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta perk_allow_specialty_twoprimaries_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue perk_allow_specialty_twoprimaries_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta perk_allow_specialty_twoprimaries_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue perk_allow_specialty_twoprimaries_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta perk_allow_specialty_twoprimaries_war _null"

#define SETA_PERK_ALLOW_SPECIALTY_GPSJAMMER \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue perk_allow_specialty_gpsjammer_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta perk_allow_specialty_gpsjammer_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue perk_allow_specialty_gpsjammer_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta perk_allow_specialty_gpsjammer_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue perk_allow_specialty_gpsjammer_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta perk_allow_specialty_gpsjammer_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue perk_allow_specialty_gpsjammer_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta perk_allow_specialty_gpsjammer_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue perk_allow_specialty_gpsjammer_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta perk_allow_specialty_gpsjammer_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue perk_allow_specialty_gpsjammer_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta perk_allow_specialty_gpsjammer_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue perk_allow_specialty_gpsjammer_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta perk_allow_specialty_gpsjammer_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue perk_allow_specialty_gpsjammer_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta perk_allow_specialty_gpsjammer_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue perk_allow_specialty_gpsjammer_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta perk_allow_specialty_gpsjammer_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue perk_allow_specialty_gpsjammer_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta perk_allow_specialty_gpsjammer_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue perk_allow_specialty_gpsjammer_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta perk_allow_specialty_gpsjammer_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue perk_allow_specialty_gpsjammer_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta perk_allow_specialty_gpsjammer_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue perk_allow_specialty_gpsjammer_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta perk_allow_specialty_gpsjammer_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue perk_allow_specialty_gpsjammer_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta perk_allow_specialty_gpsjammer_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue perk_allow_specialty_gpsjammer_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta perk_allow_specialty_gpsjammer_war _null"

#define SETA_PERK_ALLOW_SPECIALTY_EXPLOSIVEDAMAGE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue perk_allow_specialty_explosivedamage_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta perk_allow_specialty_explosivedamage_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue perk_allow_specialty_explosivedamage_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta perk_allow_specialty_explosivedamage_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue perk_allow_specialty_explosivedamage_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta perk_allow_specialty_explosivedamage_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue perk_allow_specialty_explosivedamage_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta perk_allow_specialty_explosivedamage_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue perk_allow_specialty_explosivedamage_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta perk_allow_specialty_explosivedamage_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue perk_allow_specialty_explosivedamage_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta perk_allow_specialty_explosivedamage_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue perk_allow_specialty_explosivedamage_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta perk_allow_specialty_explosivedamage_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue perk_allow_specialty_explosivedamage_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta perk_allow_specialty_explosivedamage_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue perk_allow_specialty_explosivedamage_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta perk_allow_specialty_explosivedamage_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue perk_allow_specialty_explosivedamage_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta perk_allow_specialty_explosivedamage_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue perk_allow_specialty_explosivedamage_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta perk_allow_specialty_explosivedamage_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue perk_allow_specialty_explosivedamage_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta perk_allow_specialty_explosivedamage_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue perk_allow_specialty_explosivedamage_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta perk_allow_specialty_explosivedamage_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue perk_allow_specialty_explosivedamage_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta perk_allow_specialty_explosivedamage_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue perk_allow_specialty_explosivedamage_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta perk_allow_specialty_explosivedamage_war _null"

#define SETA_PERK_ALLOW_SPECIALTY_LONGERSPRINT \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue perk_allow_specialty_longersprint_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta perk_allow_specialty_longersprint_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue perk_allow_specialty_longersprint_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta perk_allow_specialty_longersprint_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue perk_allow_specialty_longersprint_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta perk_allow_specialty_longersprint_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue perk_allow_specialty_longersprint_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta perk_allow_specialty_longersprint_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue perk_allow_specialty_longersprint_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta perk_allow_specialty_longersprint_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue perk_allow_specialty_longersprint_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta perk_allow_specialty_longersprint_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue perk_allow_specialty_longersprint_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta perk_allow_specialty_longersprint_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue perk_allow_specialty_longersprint_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta perk_allow_specialty_longersprint_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue perk_allow_specialty_longersprint_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta perk_allow_specialty_longersprint_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue perk_allow_specialty_longersprint_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta perk_allow_specialty_longersprint_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue perk_allow_specialty_longersprint_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta perk_allow_specialty_longersprint_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue perk_allow_specialty_longersprint_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta perk_allow_specialty_longersprint_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue perk_allow_specialty_longersprint_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta perk_allow_specialty_longersprint_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue perk_allow_specialty_longersprint_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta perk_allow_specialty_longersprint_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue perk_allow_specialty_longersprint_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta perk_allow_specialty_longersprint_war _null"

#define SETA_PERK_ALLOW_SPECIALTY_BULLETACCURACY \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletaccuracy_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta perk_allow_specialty_bulletaccuracy_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletaccuracy_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta perk_allow_specialty_bulletaccuracy_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletaccuracy_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta perk_allow_specialty_bulletaccuracy_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletaccuracy_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta perk_allow_specialty_bulletaccuracy_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletaccuracy_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta perk_allow_specialty_bulletaccuracy_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletaccuracy_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta perk_allow_specialty_bulletaccuracy_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletaccuracy_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta perk_allow_specialty_bulletaccuracy_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletaccuracy_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta perk_allow_specialty_bulletaccuracy_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletaccuracy_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta perk_allow_specialty_bulletaccuracy_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletaccuracy_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta perk_allow_specialty_bulletaccuracy_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletaccuracy_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta perk_allow_specialty_bulletaccuracy_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletaccuracy_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta perk_allow_specialty_bulletaccuracy_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletaccuracy_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta perk_allow_specialty_bulletaccuracy_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletaccuracy_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta perk_allow_specialty_bulletaccuracy_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletaccuracy_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta perk_allow_specialty_bulletaccuracy_war _null"

#define SETA_PERK_ALLOW_SPECIALTY_PISTOLDEATH \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue perk_allow_specialty_pistoldeath_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta perk_allow_specialty_pistoldeath_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue perk_allow_specialty_pistoldeath_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta perk_allow_specialty_pistoldeath_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue perk_allow_specialty_pistoldeath_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta perk_allow_specialty_pistoldeath_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue perk_allow_specialty_pistoldeath_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta perk_allow_specialty_pistoldeath_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue perk_allow_specialty_pistoldeath_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta perk_allow_specialty_pistoldeath_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue perk_allow_specialty_pistoldeath_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta perk_allow_specialty_pistoldeath_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue perk_allow_specialty_pistoldeath_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta perk_allow_specialty_pistoldeath_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue perk_allow_specialty_pistoldeath_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta perk_allow_specialty_pistoldeath_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue perk_allow_specialty_pistoldeath_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta perk_allow_specialty_pistoldeath_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue perk_allow_specialty_pistoldeath_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta perk_allow_specialty_pistoldeath_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue perk_allow_specialty_pistoldeath_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta perk_allow_specialty_pistoldeath_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue perk_allow_specialty_pistoldeath_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta perk_allow_specialty_pistoldeath_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue perk_allow_specialty_pistoldeath_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta perk_allow_specialty_pistoldeath_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue perk_allow_specialty_pistoldeath_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta perk_allow_specialty_pistoldeath_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue perk_allow_specialty_pistoldeath_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta perk_allow_specialty_pistoldeath_war _null"

#define SETA_PERK_ALLOW_SPECIALTY_GRENADEPULLDEATH \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue perk_allow_specialty_grenadepulldeath_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta perk_allow_specialty_grenadepulldeath_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue perk_allow_specialty_grenadepulldeath_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta perk_allow_specialty_grenadepulldeath_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue perk_allow_specialty_grenadepulldeath_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta perk_allow_specialty_grenadepulldeath_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue perk_allow_specialty_grenadepulldeath_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta perk_allow_specialty_grenadepulldeath_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue perk_allow_specialty_grenadepulldeath_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta perk_allow_specialty_grenadepulldeath_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue perk_allow_specialty_grenadepulldeath_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta perk_allow_specialty_grenadepulldeath_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue perk_allow_specialty_grenadepulldeath_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta perk_allow_specialty_grenadepulldeath_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue perk_allow_specialty_grenadepulldeath_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta perk_allow_specialty_grenadepulldeath_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue perk_allow_specialty_grenadepulldeath_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta perk_allow_specialty_grenadepulldeath_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue perk_allow_specialty_grenadepulldeath_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta perk_allow_specialty_grenadepulldeath_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue perk_allow_specialty_grenadepulldeath_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta perk_allow_specialty_grenadepulldeath_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue perk_allow_specialty_grenadepulldeath_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta perk_allow_specialty_grenadepulldeath_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue perk_allow_specialty_grenadepulldeath_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta perk_allow_specialty_grenadepulldeath_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue perk_allow_specialty_grenadepulldeath_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta perk_allow_specialty_grenadepulldeath_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue perk_allow_specialty_grenadepulldeath_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta perk_allow_specialty_grenadepulldeath_war _null"

#define SETA_PERK_ALLOW_SPECIALTY_BULLETPENETRATION \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletpenetration_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta perk_allow_specialty_bulletpenetration_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletpenetration_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta perk_allow_specialty_bulletpenetration_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletpenetration_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta perk_allow_specialty_bulletpenetration_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletpenetration_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta perk_allow_specialty_bulletpenetration_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletpenetration_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta perk_allow_specialty_bulletpenetration_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletpenetration_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta perk_allow_specialty_bulletpenetration_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletpenetration_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta perk_allow_specialty_bulletpenetration_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletpenetration_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta perk_allow_specialty_bulletpenetration_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletpenetration_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta perk_allow_specialty_bulletpenetration_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletpenetration_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta perk_allow_specialty_bulletpenetration_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletpenetration_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta perk_allow_specialty_bulletpenetration_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletpenetration_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta perk_allow_specialty_bulletpenetration_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletpenetration_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta perk_allow_specialty_bulletpenetration_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletpenetration_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta perk_allow_specialty_bulletpenetration_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue perk_allow_specialty_bulletpenetration_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta perk_allow_specialty_bulletpenetration_war _null"

#define SETA_PERK_ALLOW_SPECIALTY_HOLDBREATH \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue perk_allow_specialty_holdbreath_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta perk_allow_specialty_holdbreath_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue perk_allow_specialty_holdbreath_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta perk_allow_specialty_holdbreath_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue perk_allow_specialty_holdbreath_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta perk_allow_specialty_holdbreath_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue perk_allow_specialty_holdbreath_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta perk_allow_specialty_holdbreath_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue perk_allow_specialty_holdbreath_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta perk_allow_specialty_holdbreath_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue perk_allow_specialty_holdbreath_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta perk_allow_specialty_holdbreath_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue perk_allow_specialty_holdbreath_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta perk_allow_specialty_holdbreath_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue perk_allow_specialty_holdbreath_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta perk_allow_specialty_holdbreath_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue perk_allow_specialty_holdbreath_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta perk_allow_specialty_holdbreath_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue perk_allow_specialty_holdbreath_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta perk_allow_specialty_holdbreath_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue perk_allow_specialty_holdbreath_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta perk_allow_specialty_holdbreath_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue perk_allow_specialty_holdbreath_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta perk_allow_specialty_holdbreath_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue perk_allow_specialty_holdbreath_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta perk_allow_specialty_holdbreath_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue perk_allow_specialty_holdbreath_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta perk_allow_specialty_holdbreath_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue perk_allow_specialty_holdbreath_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta perk_allow_specialty_holdbreath_war _null"

#define SETA_PERK_ALLOW_SPECIALTY_QUIETER \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue perk_allow_specialty_quieter_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta perk_allow_specialty_quieter_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue perk_allow_specialty_quieter_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta perk_allow_specialty_quieter_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue perk_allow_specialty_quieter_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta perk_allow_specialty_quieter_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue perk_allow_specialty_quieter_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta perk_allow_specialty_quieter_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue perk_allow_specialty_quieter_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta perk_allow_specialty_quieter_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue perk_allow_specialty_quieter_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta perk_allow_specialty_quieter_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue perk_allow_specialty_quieter_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta perk_allow_specialty_quieter_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue perk_allow_specialty_quieter_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta perk_allow_specialty_quieter_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue perk_allow_specialty_quieter_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta perk_allow_specialty_quieter_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue perk_allow_specialty_quieter_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta perk_allow_specialty_quieter_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue perk_allow_specialty_quieter_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta perk_allow_specialty_quieter_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue perk_allow_specialty_quieter_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta perk_allow_specialty_quieter_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue perk_allow_specialty_quieter_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta perk_allow_specialty_quieter_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue perk_allow_specialty_quieter_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta perk_allow_specialty_quieter_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue perk_allow_specialty_quieter_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta perk_allow_specialty_quieter_war _null"

#define SETA_PERK_ALLOW_SPECIALTY_PARABOLIC \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue perk_allow_specialty_parabolic_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta perk_allow_specialty_parabolic_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue perk_allow_specialty_parabolic_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta perk_allow_specialty_parabolic_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue perk_allow_specialty_parabolic_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta perk_allow_specialty_parabolic_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue perk_allow_specialty_parabolic_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta perk_allow_specialty_parabolic_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue perk_allow_specialty_parabolic_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta perk_allow_specialty_parabolic_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue perk_allow_specialty_parabolic_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta perk_allow_specialty_parabolic_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue perk_allow_specialty_parabolic_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta perk_allow_specialty_parabolic_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue perk_allow_specialty_parabolic_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta perk_allow_specialty_parabolic_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue perk_allow_specialty_parabolic_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta perk_allow_specialty_parabolic_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue perk_allow_specialty_parabolic_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta perk_allow_specialty_parabolic_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue perk_allow_specialty_parabolic_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta perk_allow_specialty_parabolic_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue perk_allow_specialty_parabolic_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta perk_allow_specialty_parabolic_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue perk_allow_specialty_parabolic_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta perk_allow_specialty_parabolic_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue perk_allow_specialty_parabolic_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta perk_allow_specialty_parabolic_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue perk_allow_specialty_parabolic_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta perk_allow_specialty_parabolic_war _null"

#define SETA_SCR_C4_AMMO_COUNT \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_c4_ammo_count_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_c4_ammo_count_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_c4_ammo_count_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_c4_ammo_count_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_c4_ammo_count_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_c4_ammo_count_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_c4_ammo_count_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_c4_ammo_count_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_c4_ammo_count_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_c4_ammo_count_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_c4_ammo_count_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_c4_ammo_count_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_c4_ammo_count_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_c4_ammo_count_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_c4_ammo_count_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_c4_ammo_count_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_c4_ammo_count_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_c4_ammo_count_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_c4_ammo_count_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_c4_ammo_count_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_c4_ammo_count_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_c4_ammo_count_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_c4_ammo_count_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_c4_ammo_count_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_c4_ammo_count_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_c4_ammo_count_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_c4_ammo_count_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_c4_ammo_count_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_c4_ammo_count_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_c4_ammo_count_war _null"

#define SETA_SCR_CLAYMORE_AMMO_COUNT \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_claymore_ammo_count_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_claymore_ammo_count_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_claymore_ammo_count_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_claymore_ammo_count_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_claymore_ammo_count_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_claymore_ammo_count_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_claymore_ammo_count_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_claymore_ammo_count_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_claymore_ammo_count_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_claymore_ammo_count_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_claymore_ammo_count_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_claymore_ammo_count_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_claymore_ammo_count_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_claymore_ammo_count_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_claymore_ammo_count_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_claymore_ammo_count_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_claymore_ammo_count_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_claymore_ammo_count_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_claymore_ammo_count_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_claymore_ammo_count_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_claymore_ammo_count_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_claymore_ammo_count_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_claymore_ammo_count_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_claymore_ammo_count_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_claymore_ammo_count_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_claymore_ammo_count_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_claymore_ammo_count_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_claymore_ammo_count_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_claymore_ammo_count_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_claymore_ammo_count_war _null"

#define SETA_SCR_RPG_AMMO_COUNT \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_rpg_ammo_count_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_rpg_ammo_count_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_rpg_ammo_count_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_rpg_ammo_count_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_rpg_ammo_count_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_rpg_ammo_count_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_rpg_ammo_count_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_rpg_ammo_count_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_rpg_ammo_count_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_rpg_ammo_count_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_rpg_ammo_count_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_rpg_ammo_count_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_rpg_ammo_count_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_rpg_ammo_count_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_rpg_ammo_count_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_rpg_ammo_count_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_rpg_ammo_count_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_rpg_ammo_count_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_rpg_ammo_count_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_rpg_ammo_count_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_rpg_ammo_count_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_rpg_ammo_count_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_rpg_ammo_count_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_rpg_ammo_count_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_rpg_ammo_count_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_rpg_ammo_count_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_rpg_ammo_count_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_rpg_ammo_count_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_rpg_ammo_count_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_rpg_ammo_count_war _null"

#define SETA_SPECIALTY_FRAGGRENADE_AMMO_COUNT \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue specialty_fraggrenade_ammo_count_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta specialty_fraggrenade_ammo_count_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue specialty_fraggrenade_ammo_count_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta specialty_fraggrenade_ammo_count_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue specialty_fraggrenade_ammo_count_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta specialty_fraggrenade_ammo_count_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue specialty_fraggrenade_ammo_count_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta specialty_fraggrenade_ammo_count_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue specialty_fraggrenade_ammo_count_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta specialty_fraggrenade_ammo_count_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue specialty_fraggrenade_ammo_count_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta specialty_fraggrenade_ammo_count_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue specialty_fraggrenade_ammo_count_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta specialty_fraggrenade_ammo_count_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue specialty_fraggrenade_ammo_count_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta specialty_fraggrenade_ammo_count_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue specialty_fraggrenade_ammo_count_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta specialty_fraggrenade_ammo_count_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue specialty_fraggrenade_ammo_count_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta specialty_fraggrenade_ammo_count_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue specialty_fraggrenade_ammo_count_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta specialty_fraggrenade_ammo_count_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue specialty_fraggrenade_ammo_count_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta specialty_fraggrenade_ammo_count_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue specialty_fraggrenade_ammo_count_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta specialty_fraggrenade_ammo_count_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue specialty_fraggrenade_ammo_count_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta specialty_fraggrenade_ammo_count_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue specialty_fraggrenade_ammo_count_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta specialty_fraggrenade_ammo_count_war _null"

#define SETA_SPECIALTY_SPECIALGRENADE_AMMO_COUNT \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue specialty_specialgrenade_ammo_count_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta specialty_specialgrenade_ammo_count_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue specialty_specialgrenade_ammo_count_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta specialty_specialgrenade_ammo_count_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue specialty_specialgrenade_ammo_count_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta specialty_specialgrenade_ammo_count_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue specialty_specialgrenade_ammo_count_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta specialty_specialgrenade_ammo_count_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue specialty_specialgrenade_ammo_count_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta specialty_specialgrenade_ammo_count_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue specialty_specialgrenade_ammo_count_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta specialty_specialgrenade_ammo_count_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue specialty_specialgrenade_ammo_count_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta specialty_specialgrenade_ammo_count_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue specialty_specialgrenade_ammo_count_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta specialty_specialgrenade_ammo_count_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue specialty_specialgrenade_ammo_count_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta specialty_specialgrenade_ammo_count_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue specialty_specialgrenade_ammo_count_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta specialty_specialgrenade_ammo_count_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue specialty_specialgrenade_ammo_count_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta specialty_specialgrenade_ammo_count_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue specialty_specialgrenade_ammo_count_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta specialty_specialgrenade_ammo_count_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue specialty_specialgrenade_ammo_count_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta specialty_specialgrenade_ammo_count_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue specialty_specialgrenade_ammo_count_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta specialty_specialgrenade_ammo_count_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue specialty_specialgrenade_ammo_count_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta specialty_specialgrenade_ammo_count_war _null"

#define SETA_PERK_ARMORVEST \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue perk_armorvest_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta perk_armorvest_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue perk_armorvest_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta perk_armorvest_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue perk_armorvest_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta perk_armorvest_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue perk_armorvest_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta perk_armorvest_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue perk_armorvest_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta perk_armorvest_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue perk_armorvest_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta perk_armorvest_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue perk_armorvest_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta perk_armorvest_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue perk_armorvest_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta perk_armorvest_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue perk_armorvest_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta perk_armorvest_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue perk_armorvest_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta perk_armorvest_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue perk_armorvest_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta perk_armorvest_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue perk_armorvest_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta perk_armorvest_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue perk_armorvest_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta perk_armorvest_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue perk_armorvest_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta perk_armorvest_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue perk_armorvest_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta perk_armorvest_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue perk_armorvest_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta perk_armorvest_war _null"

#define SETA_PERK_BULLETDAMAGE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue perk_bulletdamage_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta perk_bulletdamage_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue perk_bulletdamage_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta perk_bulletdamage_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue perk_bulletdamage_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta perk_bulletdamage_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue perk_bulletdamage_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta perk_bulletdamage_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue perk_bulletdamage_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta perk_bulletdamage_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue perk_bulletdamage_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta perk_bulletdamage_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue perk_bulletdamage_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta perk_bulletdamage_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue perk_bulletdamage_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta perk_bulletdamage_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue perk_bulletdamage_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta perk_bulletdamage_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue perk_bulletdamage_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta perk_bulletdamage_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue perk_bulletdamage_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta perk_bulletdamage_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue perk_bulletdamage_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta perk_bulletdamage_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue perk_bulletdamage_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta perk_bulletdamage_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue perk_bulletdamage_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta perk_bulletdamage_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue perk_bulletdamage_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta perk_bulletdamage_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue perk_bulletdamage_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta perk_bulletdamage_war _null"

#define SETA_PERK_EXPLOSIVEDAMAGE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue perk_explosivedamage_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta perk_explosivedamage_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue perk_explosivedamage_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta perk_explosivedamage_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue perk_explosivedamage_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta perk_explosivedamage_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue perk_explosivedamage_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta perk_explosivedamage_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue perk_explosivedamage_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta perk_explosivedamage_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue perk_explosivedamage_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta perk_explosivedamage_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue perk_explosivedamage_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta perk_explosivedamage_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue perk_explosivedamage_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta perk_explosivedamage_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue perk_explosivedamage_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta perk_explosivedamage_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue perk_explosivedamage_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta perk_explosivedamage_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue perk_explosivedamage_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta perk_explosivedamage_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue perk_explosivedamage_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta perk_explosivedamage_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue perk_explosivedamage_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta perk_explosivedamage_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue perk_explosivedamage_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta perk_explosivedamage_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue perk_explosivedamage_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta perk_explosivedamage_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue perk_explosivedamage_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta perk_explosivedamage_war _null"

#define SETA_SCR_CLAYMORE_FRIENDLY_FIRE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_claymore_friendly_fire_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_claymore_friendly_fire_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_claymore_friendly_fire_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_claymore_friendly_fire_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_claymore_friendly_fire_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_claymore_friendly_fire_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_claymore_friendly_fire_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_claymore_friendly_fire_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_claymore_friendly_fire_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_claymore_friendly_fire_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_claymore_friendly_fire_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_claymore_friendly_fire_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_claymore_friendly_fire_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_claymore_friendly_fire_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_claymore_friendly_fire_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_claymore_friendly_fire_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_claymore_friendly_fire_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_claymore_friendly_fire_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_claymore_friendly_fire_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_claymore_friendly_fire_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_claymore_friendly_fire_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_claymore_friendly_fire_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_claymore_friendly_fire_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_claymore_friendly_fire_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_claymore_friendly_fire_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_claymore_friendly_fire_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_claymore_friendly_fire_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_claymore_friendly_fire_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_claymore_friendly_fire_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_claymore_friendly_fire_war _null"

#define SETA_SPECIALTY_GRENADEPULLDEATH_CHECK_FRAGS \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue specialty_grenadepulldeath_check_frags_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta specialty_grenadepulldeath_check_frags_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue specialty_grenadepulldeath_check_frags_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta specialty_grenadepulldeath_check_frags_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue specialty_grenadepulldeath_check_frags_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta specialty_grenadepulldeath_check_frags_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue specialty_grenadepulldeath_check_frags_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta specialty_grenadepulldeath_check_frags_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue specialty_grenadepulldeath_check_frags_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta specialty_grenadepulldeath_check_frags_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue specialty_grenadepulldeath_check_frags_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta specialty_grenadepulldeath_check_frags_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue specialty_grenadepulldeath_check_frags_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta specialty_grenadepulldeath_check_frags_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue specialty_grenadepulldeath_check_frags_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta specialty_grenadepulldeath_check_frags_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue specialty_grenadepulldeath_check_frags_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta specialty_grenadepulldeath_check_frags_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue specialty_grenadepulldeath_check_frags_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta specialty_grenadepulldeath_check_frags_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue specialty_grenadepulldeath_check_frags_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta specialty_grenadepulldeath_check_frags_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue specialty_grenadepulldeath_check_frags_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta specialty_grenadepulldeath_check_frags_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue specialty_grenadepulldeath_check_frags_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta specialty_grenadepulldeath_check_frags_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue specialty_grenadepulldeath_check_frags_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta specialty_grenadepulldeath_check_frags_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue specialty_grenadepulldeath_check_frags_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta specialty_grenadepulldeath_check_frags_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue specialty_grenadepulldeath_check_frags_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta specialty_grenadepulldeath_check_frags_war _null"

#define SETA_SPECIALTY_PISTOLDEATH_CHECK_PISTOL \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue specialty_pistoldeath_check_pistol_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta specialty_pistoldeath_check_pistol_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue specialty_pistoldeath_check_pistol_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta specialty_pistoldeath_check_pistol_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue specialty_pistoldeath_check_pistol_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta specialty_pistoldeath_check_pistol_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue specialty_pistoldeath_check_pistol_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta specialty_pistoldeath_check_pistol_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue specialty_pistoldeath_check_pistol_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta specialty_pistoldeath_check_pistol_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue specialty_pistoldeath_check_pistol_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta specialty_pistoldeath_check_pistol_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue specialty_pistoldeath_check_pistol_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta specialty_pistoldeath_check_pistol_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue specialty_pistoldeath_check_pistol_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta specialty_pistoldeath_check_pistol_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue specialty_pistoldeath_check_pistol_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta specialty_pistoldeath_check_pistol_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue specialty_pistoldeath_check_pistol_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta specialty_pistoldeath_check_pistol_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue specialty_pistoldeath_check_pistol_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta specialty_pistoldeath_check_pistol_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue specialty_pistoldeath_check_pistol_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta specialty_pistoldeath_check_pistol_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue specialty_pistoldeath_check_pistol_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta specialty_pistoldeath_check_pistol_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue specialty_pistoldeath_check_pistol_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta specialty_pistoldeath_check_pistol_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue specialty_pistoldeath_check_pistol_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta specialty_pistoldeath_check_pistol_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue specialty_pistoldeath_check_pistol_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta specialty_pistoldeath_check_pistol_war _null"

#define SETA_SCR_CLAYMORE_CHECK_PLANT_DISTANCE \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_claymore_check_plant_distance_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_claymore_check_plant_distance_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_claymore_check_plant_distance_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_claymore_check_plant_distance_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_claymore_check_plant_distance_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_claymore_check_plant_distance_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_claymore_check_plant_distance_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_claymore_check_plant_distance_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_claymore_check_plant_distance_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_claymore_check_plant_distance_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_claymore_check_plant_distance_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_claymore_check_plant_distance_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_claymore_check_plant_distance_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_claymore_check_plant_distance_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_claymore_check_plant_distance_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_claymore_check_plant_distance_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_claymore_check_plant_distance_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_claymore_check_plant_distance_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_claymore_check_plant_distance_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_claymore_check_plant_distance_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_claymore_check_plant_distance_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_claymore_check_plant_distance_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_claymore_check_plant_distance_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_claymore_check_plant_distance_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_claymore_check_plant_distance_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_claymore_check_plant_distance_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_claymore_check_plant_distance_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_claymore_check_plant_distance_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_claymore_check_plant_distance_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_claymore_check_plant_distance_war _null"

#define SETA_SCR_CLAYMORE_ADD_KILL_ONLY_IF_DIRECTED \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_claymore_add_kill_only_if_directed_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_claymore_add_kill_only_if_directed_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_claymore_add_kill_only_if_directed_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_claymore_add_kill_only_if_directed_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_claymore_add_kill_only_if_directed_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_claymore_add_kill_only_if_directed_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_claymore_add_kill_only_if_directed_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_claymore_add_kill_only_if_directed_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_claymore_add_kill_only_if_directed_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_claymore_add_kill_only_if_directed_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_claymore_add_kill_only_if_directed_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_claymore_add_kill_only_if_directed_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_claymore_add_kill_only_if_directed_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_claymore_add_kill_only_if_directed_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_claymore_add_kill_only_if_directed_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_claymore_add_kill_only_if_directed_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_claymore_add_kill_only_if_directed_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_claymore_add_kill_only_if_directed_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_claymore_add_kill_only_if_directed_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_claymore_add_kill_only_if_directed_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_claymore_add_kill_only_if_directed_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_claymore_add_kill_only_if_directed_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_claymore_add_kill_only_if_directed_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_claymore_add_kill_only_if_directed_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_claymore_add_kill_only_if_directed_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_claymore_add_kill_only_if_directed_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_claymore_add_kill_only_if_directed_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_claymore_add_kill_only_if_directed_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_claymore_add_kill_only_if_directed_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_claymore_add_kill_only_if_directed_war _null"

#define SETA_SCR_CLAYMORE_ARM_TIME \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_claymore_arm_time_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_claymore_arm_time_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_claymore_arm_time_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_claymore_arm_time_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_claymore_arm_time_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_claymore_arm_time_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_claymore_arm_time_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_claymore_arm_time_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_claymore_arm_time_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_claymore_arm_time_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_claymore_arm_time_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_claymore_arm_time_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_claymore_arm_time_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_claymore_arm_time_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_claymore_arm_time_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_claymore_arm_time_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_claymore_arm_time_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_claymore_arm_time_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_claymore_arm_time_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_claymore_arm_time_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_claymore_arm_time_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_claymore_arm_time_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_claymore_arm_time_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_claymore_arm_time_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_claymore_arm_time_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_claymore_arm_time_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_claymore_arm_time_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_claymore_arm_time_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_claymore_arm_time_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_claymore_arm_time_war _null"

#define SETA_SCR_EXPLOSIVES_ALLOW_DISARM \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_explosives_allow_disarm_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_explosives_allow_disarm_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_explosives_allow_disarm_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_explosives_allow_disarm_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_explosives_allow_disarm_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_explosives_allow_disarm_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_explosives_allow_disarm_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_explosives_allow_disarm_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_explosives_allow_disarm_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_explosives_allow_disarm_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_explosives_allow_disarm_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_explosives_allow_disarm_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_explosives_allow_disarm_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_explosives_allow_disarm_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_explosives_allow_disarm_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_explosives_allow_disarm_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_explosives_allow_disarm_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_explosives_allow_disarm_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_explosives_allow_disarm_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_explosives_allow_disarm_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_explosives_allow_disarm_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_explosives_allow_disarm_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_explosives_allow_disarm_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_explosives_allow_disarm_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_explosives_allow_disarm_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_explosives_allow_disarm_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_explosives_allow_disarm_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_explosives_allow_disarm_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_explosives_allow_disarm_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_explosives_allow_disarm_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_explosives_allow_disarm_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_explosives_allow_disarm_war _null"

#define SETA_SCR_EXPLOSIVES_DISARM_TIME \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_explosives_disarm_time_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_explosives_disarm_time_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_explosives_disarm_time_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_explosives_disarm_time_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_explosives_disarm_time_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_explosives_disarm_time_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_explosives_disarm_time_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_explosives_disarm_time_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_explosives_disarm_time_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_explosives_disarm_time_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_explosives_disarm_time_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_explosives_disarm_time_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_explosives_disarm_time_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_explosives_disarm_time_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_explosives_disarm_time_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_explosives_disarm_time_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_explosives_disarm_time_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_explosives_disarm_time_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_explosives_disarm_time_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_explosives_disarm_time_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_explosives_disarm_time_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_explosives_disarm_time_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_explosives_disarm_time_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_explosives_disarm_time_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_explosives_disarm_time_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_explosives_disarm_time_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_explosives_disarm_time_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_explosives_disarm_time_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_explosives_disarm_time_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_explosives_disarm_time_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_explosives_disarm_time_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_explosives_disarm_time_war _null"

#define SETA_SCR_CLAYMORE_SHOW_HEADICON \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_claymore_show_headicon_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_claymore_show_headicon_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_claymore_show_headicon_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_claymore_show_headicon_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_claymore_show_headicon_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_claymore_show_headicon_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_claymore_show_headicon_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_claymore_show_headicon_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_claymore_show_headicon_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_claymore_show_headicon_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_claymore_show_headicon_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_claymore_show_headicon_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_claymore_show_headicon_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_claymore_show_headicon_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_claymore_show_headicon_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_claymore_show_headicon_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_claymore_show_headicon_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_claymore_show_headicon_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_claymore_show_headicon_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_claymore_show_headicon_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_claymore_show_headicon_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_claymore_show_headicon_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_claymore_show_headicon_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_claymore_show_headicon_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_claymore_show_headicon_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_claymore_show_headicon_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_claymore_show_headicon_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_claymore_show_headicon_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_claymore_show_headicon_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_claymore_show_headicon_war _null"

#define SETA_SCR_CLAYMORE_SHOW_LASER_BEAMS \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_claymore_show_laser_beams_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_claymore_show_laser_beams_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_claymore_show_laser_beams_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_claymore_show_laser_beams_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_claymore_show_laser_beams_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_claymore_show_laser_beams_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_claymore_show_laser_beams_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_claymore_show_laser_beams_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_claymore_show_laser_beams_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_claymore_show_laser_beams_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_claymore_show_laser_beams_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_claymore_show_laser_beams_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_claymore_show_laser_beams_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_claymore_show_laser_beams_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_claymore_show_laser_beams_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_claymore_show_laser_beams_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_claymore_show_laser_beams_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_claymore_show_laser_beams_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_claymore_show_laser_beams_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_claymore_show_laser_beams_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_claymore_show_laser_beams_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_claymore_show_laser_beams_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_claymore_show_laser_beams_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_claymore_show_laser_beams_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_claymore_show_laser_beams_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_claymore_show_laser_beams_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_claymore_show_laser_beams_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_claymore_show_laser_beams_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_claymore_show_laser_beams_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_claymore_show_laser_beams_war _null"

#define SETA_SCR_SHOW_C4_BLINK_EFFECT \
  execNowOnDvarStringValue menu_cfg_gt ass "set tmp_gt_ass 1" \
  execNowOnDvarStringValue scr_show_c4_blink_effect_ass _null "toggle tmp_gt_ass 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ass 2 "seta scr_show_c4_blink_effect_ass _null" \
  execNowOnDvarStringValue menu_cfg_gt bel "set tmp_gt_bel 1" \
  execNowOnDvarStringValue scr_show_c4_blink_effect_bel _null "toggle tmp_gt_bel 0 1 2" \
  execNowOnDvarStringValue tmp_gt_bel 2 "seta scr_show_c4_blink_effect_bel _null" \
  execNowOnDvarStringValue menu_cfg_gt ch "set tmp_gt_ch 1" \
  execNowOnDvarStringValue scr_show_c4_blink_effect_ch _null "toggle tmp_gt_ch 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ch 2 "seta scr_show_c4_blink_effect_ch _null" \
  execNowOnDvarStringValue menu_cfg_gt ctf "set tmp_gt_ctf 1" \
  execNowOnDvarStringValue scr_show_c4_blink_effect_ctf _null "toggle tmp_gt_ctf 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ctf 2 "seta scr_show_c4_blink_effect_ctf _null" \
  execNowOnDvarStringValue menu_cfg_gt dm "set tmp_gt_dm 1" \
  execNowOnDvarStringValue scr_show_c4_blink_effect_dm _null "toggle tmp_gt_dm 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dm 2 "seta scr_show_c4_blink_effect_dm _null" \
  execNowOnDvarStringValue menu_cfg_gt dom "set tmp_gt_dom 1" \
  execNowOnDvarStringValue scr_show_c4_blink_effect_dom _null "toggle tmp_gt_dom 0 1 2" \
  execNowOnDvarStringValue tmp_gt_dom 2 "seta scr_show_c4_blink_effect_dom _null" \
  execNowOnDvarStringValue menu_cfg_gt ftag "set tmp_gt_ftag 1" \
  execNowOnDvarStringValue scr_show_c4_blink_effect_ftag _null "toggle tmp_gt_ftag 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ftag 2 "seta scr_show_c4_blink_effect_ftag _null" \
  execNowOnDvarStringValue menu_cfg_gt gg "set tmp_gt_gg 1" \
  execNowOnDvarStringValue scr_show_c4_blink_effect_gg _null "toggle tmp_gt_gg 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gg 2 "seta scr_show_c4_blink_effect_gg _null" \
  execNowOnDvarStringValue menu_cfg_gt gr "set tmp_gt_gr 1" \
  execNowOnDvarStringValue scr_show_c4_blink_effect_gr _null "toggle tmp_gt_gr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_gr 2 "seta scr_show_c4_blink_effect_gr _null" \
  execNowOnDvarStringValue menu_cfg_gt koth "set tmp_gt_koth 1" \
  execNowOnDvarStringValue scr_show_c4_blink_effect_koth _null "toggle tmp_gt_koth 0 1 2" \
  execNowOnDvarStringValue tmp_gt_koth 2 "seta scr_show_c4_blink_effect_koth _null" \
  execNowOnDvarStringValue menu_cfg_gt re "set tmp_gt_re 1" \
  execNowOnDvarStringValue scr_show_c4_blink_effect_re _null "toggle tmp_gt_re 0 1 2" \
  execNowOnDvarStringValue tmp_gt_re 2 "seta scr_show_c4_blink_effect_re _null" \
  execNowOnDvarStringValue menu_cfg_gt sab "set tmp_gt_sab 1" \
  execNowOnDvarStringValue scr_show_c4_blink_effect_sab _null "toggle tmp_gt_sab 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sab 2 "seta scr_show_c4_blink_effect_sab _null" \
  execNowOnDvarStringValue menu_cfg_gt sd "set tmp_gt_sd 1" \
  execNowOnDvarStringValue scr_show_c4_blink_effect_sd _null "toggle tmp_gt_sd 0 1 2" \
  execNowOnDvarStringValue tmp_gt_sd 2 "seta scr_show_c4_blink_effect_sd _null" \
  execNowOnDvarStringValue menu_cfg_gt ss "set tmp_gt_ss 1" \
  execNowOnDvarStringValue scr_show_c4_blink_effect_ss _null "toggle tmp_gt_ss 0 1 2" \
  execNowOnDvarStringValue tmp_gt_ss 2 "seta scr_show_c4_blink_effect_ss _null" \
  execNowOnDvarStringValue menu_cfg_gt tgr "set tmp_gt_tgr 1" \
  execNowOnDvarStringValue scr_show_c4_blink_effect_tgr _null "toggle tmp_gt_tgr 0 1 2" \
  execNowOnDvarStringValue tmp_gt_tgr 2 "seta scr_show_c4_blink_effect_tgr _null" \
  execNowOnDvarStringValue menu_cfg_gt war "set tmp_gt_war 1" \
  execNowOnDvarStringValue scr_show_c4_blink_effect_war _null "toggle tmp_gt_war 0 1 2" \
  execNowOnDvarStringValue tmp_gt_war 2 "seta scr_show_c4_blink_effect_war _null"