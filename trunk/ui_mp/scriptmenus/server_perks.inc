#include "ui_mp/menustyle.inc"

#include "ui_mp/scriptmenus/server_perks_setadvars.inc"

menuDef 
{
  name			"settings_quick_war_@MPUI_RULES_TIME_LIMIT"
  fullScreen		0
  rect			0 0 640 480
  focusColor		COLOR_FOCUSED
  //soundloop		""
  onOpen
  {
    
  }
  onClose
  {
    
  }
  onESC 
  { 
    close self;
  }
  #include "ui/blurredbg.inc"
  #include "ui_mp/navcontrols.inc"
  
  CHOICE_MENU_TITLE("@OW_SERVER_PERKS" )
  
  #undef TEXTSIZE_BUTTON_PC
  #define TEXTSIZE_BUTTON_PC	0.33

  #undef CHOICE_SIZE_Y
  #define CHOICE_SIZE_Y 		20

  #undef	CHOICE_SIZE_X
  #define CHOICE_SIZE_X		150

  #undef CHOICE_X_SPACING
  #define CHOICE_X_SPACING 200
  
  #undef CHOICE_X_START
  #define CHOICE_X_START 0

  #undef CHOICE_Y_START
  #define CHOICE_Y_START 34

  #undef CHOICE_Y_COUNT
  #define CHOICE_Y_COUNT			8

  CHOICE_DVARYESNO( 1, "@PERKS_C4_X_2", menu_perk_allow_c4_mp, SETA_PERK_ALLOW_C4_MP; )
  CHOICE_DVARYESNO( 2, "@PERKS_SPECIAL_GRENADES_X_3", menu_perk_allow_specialty_specialgrenade, SETA_PERK_ALLOW_SPECIALTY_SPECIALGRENADE; )
  CHOICE_DVARYESNO( 3, "@PERKS_RPG7_X_2", menu_perk_allow_rpg_mp, SETA_PERK_ALLOW_RPG_MP; )
  CHOICE_DVARYESNO( 4, "@PERKS_CLAYMORE_X_2", menu_perk_allow_claymore_mp, SETA_PERK_ALLOW_CLAYMORE_MP; )
  CHOICE_DVARYESNO( 5, "@PERKS_FRAG_X_3", menu_perk_allow_specialty_fraggrenade, SETA_PERK_ALLOW_SPECIALTY_FRAGGRENADE; )
  CHOICE_DVARYESNO( 6, "@PERKS_BANDOLIER", menu_perk_allow_specialty_extraammo, SETA_PERK_ALLOW_SPECIALTY_EXTRAAMMO; )
  CHOICE_DVARYESNO( 7, "@PERKS_BOMB_SQUAD", menu_perk_allow_specialty_detectexplosive, SETA_PERK_ALLOW_SPECIALTY_DETECTEXPLOSIVE; )

  CHOICE_DVARYESNO( 9, "@PERKS_STOPPING_POWER", menu_perk_allow_specialty_bulletdamage, SETA_PERK_ALLOW_SPECIALTY_BULLETDAMAGE; )
  CHOICE_DVARYESNO( 10, "@PERKS_JUGGERNAUT", menu_perk_allow_specialty_armorvest, SETA_PERK_ALLOW_SPECIALTY_ARMORVEST; )
  CHOICE_DVARYESNO( 11, "@PERKS_SLEIGHT_OF_HAND", menu_perk_allow_specialty_fastreload, SETA_PERK_ALLOW_SPECIALTY_FASTRELOAD; )
  CHOICE_DVARYESNO( 12, "@PERKS_DOUBLE_TAP", menu_perk_allow_specialty_rof, SETA_PERK_ALLOW_SPECIALTY_ROF; )
  CHOICE_DVARYESNO( 13, "@PERKS_OVERKILL", menu_perk_allow_specialty_twoprimaries, SETA_PERK_ALLOW_SPECIALTY_TWOPRIMARIES; )
  CHOICE_DVARYESNO( 14, "@PERKS_UAV_JAMMER", menu_perk_allow_specialty_gpsjammer, SETA_PERK_ALLOW_SPECIALTY_GPSJAMMER; )
  CHOICE_DVARYESNO( 15, "@PERKS_SONIC_BOOM", menu_perk_allow_specialty_explosivedamage, SETA_PERK_ALLOW_SPECIALTY_EXPLOSIVEDAMAGE; )

  CHOICE_DVARYESNO( 17, "@PERKS_EXTREME_CONDITIONING", menu_perk_allow_specialty_longersprint, SETA_PERK_ALLOW_SPECIALTY_LONGERSPRINT; )
  CHOICE_DVARYESNO( 18, "@PERKS_STEADY_AIM", menu_perk_allow_specialty_bulletaccuracy, SETA_PERK_ALLOW_SPECIALTY_BULLETACCURACY; )
  CHOICE_DVARYESNO( 19, "@PERKS_LAST_STAND", menu_perk_allow_specialty_pistoldeath, SETA_PERK_ALLOW_SPECIALTY_PISTOLDEATH; )
  CHOICE_DVARYESNO( 20, "@PERKS_MARTYRDOM", menu_perk_allow_specialty_grenadepulldeath, SETA_PERK_ALLOW_SPECIALTY_GRENADEPULLDEATH; )
  CHOICE_DVARYESNO( 21, "@PERKS_DEEP_IMPACT", menu_perk_allow_specialty_bulletpenetration, SETA_PERK_ALLOW_SPECIALTY_BULLETPENETRATION; )
  CHOICE_DVARYESNO( 22, "@PERKS_IRON_LUNGS", menu_perk_allow_specialty_holdbreath, SETA_PERK_ALLOW_SPECIALTY_HOLDBREATH; )
  CHOICE_DVARYESNO( 23, "@PERKS_DEAD_SILENCE", menu_perk_allow_specialty_quieter, SETA_PERK_ALLOW_SPECIALTY_QUIETER; )
  CHOICE_DVARYESNO( 24, "@PERKS_EAVESDROP", menu_perk_allow_specialty_parabolic, SETA_PERK_ALLOW_SPECIALTY_PARABOLIC; )

  #undef	CHOICE_X_START
  #define CHOICE_X_START			-150

  #undef CHOICE_Y_START
  #define CHOICE_Y_START 130

  #undef CHOICE_Y_COUNT
  #define CHOICE_Y_COUNT 20

  CHOICE_DVAREDIT_NUMERIC( 25, "@OW_SCR_C4_AMMO_COUNT", menu_scr_c4_ammo_count, 2, SETA_SCR_C4_AMMO_COUNT; )
  CHOICE_DVAREDIT_NUMERIC( 26, "@OW_SCR_CLAYMORE_AMMO_COUNT", menu_scr_claymore_ammo_count, 2, SETA_SCR_CLAYMORE_AMMO_COUNT; )
  CHOICE_DVAREDIT_NUMERIC( 27, "@OW_SCR_RPG_AMMO_COUNT", menu_scr_rpg_ammo_count, 2, SETA_SCR_RPG_AMMO_COUNT; )

  CHOICE_DVAREDIT_NUMERIC( 28, "@OW_SPECIALTY_FRAGGRENADE_AMMO_COUNT", menu_specialty_fraggrenade_ammo_count, 2, SETA_SPECIALTY_FRAGGRENADE_AMMO_COUNT; )
  CHOICE_DVAREDIT_NUMERIC( 29, "@OW_SPECIALTY_SPECIALGRENADE_AMMO_COUNT", menu_specialty_specialgrenade_ammo_count, 2, SETA_SPECIALTY_SPECIALGRENADE_AMMO_COUNT; )

  CHOICE_DVAREDIT_NUMERIC( 30, "@OW_ARMOR_VEST_VALUE", menu_perk_armorvest, 3, SETA_PERK_ARMORVEST; )
  CHOICE_DVAREDIT_NUMERIC( 31, "@OW_BULLET_DAMAGE_VALUE", menu_perk_bulletdamage, 3, SETA_PERK_BULLETDAMAGE; )
  CHOICE_DVAREDIT_NUMERIC( 32, "@OW_EXPLOSIVE_DAMAGE_VALUE", menu_perk_explosivedamage, 3, SETA_PERK_EXPLOSIVEDAMAGE; )
  
  #undef CHOICE_Y_COUNT
  #define CHOICE_Y_COUNT 8
  
  CHOICE_DVARYESNO( 33, "@OW_SPECIALTY_GRENADEPULLDEATH_CHECK_FRAGS", menu_specialty_grenadepulldeath_check_frags, SETA_SPECIALTY_GRENADEPULLDEATH_CHECK_FRAGS; )
  CHOICE_DVARYESNO( 34, "@OW_SPECIALTY_PISTOLDEATH_CHECK_PISTOL", menu_specialty_pistoldeath_check_pistol, SETA_SPECIALTY_PISTOLDEATH_CHECK_PISTOL; )
  CHOICE_DVARYESNO( 35, "@OW_SCR_CLAYMORE_CHECK_PLANT_DISTANCE", menu_scr_claymore_check_plant_distance, SETA_SCR_CLAYMORE_CHECK_PLANT_DISTANCE; )
  
  CHOICE_DVAREDIT_NUMERIC( 36, "@OW_SCR_CLAYMORE_ADD_KILLS_MAX_TIME", menu_scr_claymore_add_kills_max_time, 2, SETA_SCR_CLAYMORE_ADD_KILLS_MAX_TIME; )
  CHOICE_DVAREDIT_NUMERIC( 37, "@OW_SCR_CLAYMORE_ARM_TIME", menu_scr_claymore_arm_time, 2, SETA_SCR_CLAYMORE_ARM_TIME; )
  CHOICE_DVARYESNO( 38, "@OW_SCR_EXPLOSIVES_ALLOW_DISARM", menu_scr_explosives_allow_disarm, SETA_SCR_EXPLOSIVES_ALLOW_DISARM; )
  CHOICE_DVAREDIT_VIS( 39, "@OW_SCR_EXPLOSIVES_DISARM_TIME", menu_scr_explosives_disarm_time, 4, 4, SETA_SCR_EXPLOSIVES_DISARM_TIME, 1 )
  CHOICE_DVARYESNO( 40, "@OW_SCR_CLAYMORE_SHOW_HEADICON", menu_scr_claymore_show_headicon, SETA_SCR_CLAYMORE_SHOW_HEADICON; )
  CHOICE_DVARYESNO( 41, "@OW_SCR_CLAYMORE_SHOW_LASER_BEAMS", menu_scr_claymore_show_laser_beams, SETA_SCR_CLAYMORE_SHOW_LASER_BEAMS; )
  CHOICE_DVARYESNO( 42, "@OW_SCR_SHOW_C4_BLINK_EFFECT", menu_scr_show_c4_blink_effect, SETA_SCR_SHOW_C4_BLINK_EFFECT; )

  //CHOICE_DVARSTRINGLIST( 1, "Configure to gametype:", ct_serverCfgGametype, { "ALL" ""; "DM" "_dm"; "TDM" "_war"; "DOM" "_dom"; "SAB" "_sab"; "HQ" "_koth"; "SD" "_sd"; "GG" "_gg"; "SS" "_ss"; "OITC" "_oitc"; "GR" "_gr"; "CTF" "_ctf"; }, ; )
}