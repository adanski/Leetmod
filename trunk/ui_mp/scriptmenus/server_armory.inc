#include "ui_mp/menustyle.inc"

#include "ui_mp/scriptmenus/server_armory_setadvars.inc"

menuDef 
{
  name			"settings_quick_war_@MPUI_RULES_SCORE_LIMIT"
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
  #include "ui_mp/blurredbg.inc"
  #include "ui_mp/navcontrols.inc"
  
  CHOICE_MENU_TITLE("@OW_SERVER_ARMORY" )
  
  #undef TEXTSIZE_BUTTON_PC
  #define TEXTSIZE_BUTTON_PC	0.33
  
  #undef	CHOICE_SIZE_X
  #define CHOICE_SIZE_X		60
  
  #undef CHOICE_X_SPACING
  #define CHOICE_X_SPACING 130

  #undef CHOICE_X_START
  #define CHOICE_X_START 16
  
  #undef CHOICE_Y_START
  #define CHOICE_Y_START 34
  
  #undef CHOICE_Y_COUNT
  #define CHOICE_Y_COUNT			7
  
  CHOICE_DVARYESNO( 1, "@WEAPON_M16", menu_weap_allow_assault_m16, SETA_WEAP_ALLOW_ASSAULT_M16; )
  CHOICE_DVARYESNO( 2, "@WEAPON_AK47", menu_weap_allow_assault_ak47, SETA_WEAP_ALLOW_ASSAULT_AK47; )
  CHOICE_DVARYESNO( 3, "@WEAPON_M4_CARBINE", menu_weap_allow_assault_m4, SETA_WEAP_ALLOW_ASSAULT_M4; )
  CHOICE_DVARYESNO( 4, "@WEAPON_G3", menu_weap_allow_assault_g3, SETA_WEAP_ALLOW_ASSAULT_G3; )
  CHOICE_DVARYESNO( 5, "@WEAPON_G36C", menu_weap_allow_assault_g36c, SETA_WEAP_ALLOW_ASSAULT_G36C; )
  CHOICE_DVARYESNO( 6, "@WEAPON_M14", menu_weap_allow_assault_m14, SETA_WEAP_ALLOW_ASSAULT_M14; )
  CHOICE_DVARYESNO( 7, "@WEAPON_MP44", menu_weap_allow_assault_mp44, SETA_WEAP_ALLOW_ASSAULT_MP44; )
  
  CHOICE_DVARYESNO( 8, "@WEAPON_MP5", menu_weap_allow_specops_mp5, SETA_WEAP_ALLOW_SPECOPS_MP5; )
  CHOICE_DVARYESNO( 9, "@WEAPON_SKORPION", menu_weap_allow_specops_skorpion, SETA_WEAP_ALLOW_SPECOPS_SKORPION; )
  CHOICE_DVARYESNO( 10, "@WEAPON_UZI", menu_weap_allow_specops_uzi, SETA_WEAP_ALLOW_SPECOPS_UZI; )
  CHOICE_DVARYESNO( 11, "@WEAPON_AK74U", menu_weap_allow_specops_ak74u, SETA_WEAP_ALLOW_SPECOPS_AK74U; )
  CHOICE_DVARYESNO( 12, "@WEAPON_P90", menu_weap_allow_specops_p90, SETA_WEAP_ALLOW_SPECOPS_P90; )
  
  CHOICE_DVARYESNO( 15, "@WEAPON_SAW", menu_weap_allow_heavygunner_saw, SETA_WEAP_ALLOW_HEAVYGUNNER_SAW; )
  CHOICE_DVARYESNO( 16, "@WEAPON_RPD", menu_weap_allow_heavygunner_rpd, SETA_WEAP_ALLOW_HEAVYGUNNER_RPD; )
  CHOICE_DVARYESNO( 17, "@WEAPON_M60E4", menu_weap_allow_heavygunner_m60e4, SETA_WEAP_ALLOW_HEAVYGUNNER_M60E4; )
  
  CHOICE_DVARYESNO( 20, "@WEAPON_WINCHESTER1200", menu_weap_allow_demolitions_winchester1200, SETA_WEAP_ALLOW_DEMOLITIONS_WINCHESTER1200; )
  CHOICE_DVARYESNO( 21, "@WEAPON_BENELLI", menu_weap_allow_demolitions_m1014, SETA_WEAP_ALLOW_DEMOLITIONS_M1014; )
  
  CHOICE_DVARYESNO( 22, "@WEAPON_M40A3", menu_weap_allow_sniper_m40a3, SETA_WEAP_ALLOW_SNIPER_M40A3; )
  CHOICE_DVARYESNO( 23, "@WEAPON_M21", menu_weap_allow_sniper_m21, SETA_WEAP_ALLOW_SNIPER_M21; )
  CHOICE_DVARYESNO( 24, "@WEAPON_DRAGUNOV", menu_weap_allow_sniper_dragunov, SETA_WEAP_ALLOW_SNIPER_DRAGUNOV; )
  CHOICE_DVARYESNO( 25, "@WEAPON_REMINGTON700", menu_weap_allow_sniper_remington700, SETA_WEAP_ALLOW_SNIPER_REMINGTON700; )
  CHOICE_DVARYESNO( 26, "@WEAPON_BARRETT", menu_weap_allow_sniper_barrett, SETA_WEAP_ALLOW_SNIPER_BARRETT; )
  
  
  CHOICE_DVARYESNO( 29, "@WEAPON_BERETTA", menu_weap_allow_beretta, SETA_WEAP_ALLOW_BERETTA; )
  CHOICE_DVARYESNO( 30, "@WEAPON_COLT1911", menu_weap_allow_colt45, SETA_WEAP_ALLOW_COLT45; )
  CHOICE_DVARYESNO( 31, "@WEAPON_USP", menu_weap_allow_usp, SETA_WEAP_ALLOW_USP; )
  CHOICE_DVARYESNO( 33, "@WEAPON_DESERTEAGLE", menu_weap_allow_deserteagle, SETA_WEAP_ALLOW_DESERTEAGLE; )
  CHOICE_DVARYESNO( 34, "@WEAPON_DESERTEAGLEGOLD", menu_weap_allow_deserteaglegold, SETA_WEAP_ALLOW_DESERTEAGLEGOLD; )
  
  #undef	CHOICE_X_START
  #define CHOICE_X_START	-400

  #undef CHOICE_Y_START
  #define CHOICE_Y_START 100
  
  #undef	CHOICE_SIZE_X
  #define CHOICE_SIZE_X		120
  
  #undef CHOICE_X_SPACING
  #define CHOICE_X_SPACING 200

  #undef CHOICE_Y_COUNT
  #define CHOICE_Y_COUNT 15
  
  CHOICE_DVARYESNO_VIS( 36, "@OW_MENU_FRAG_GRENADE", menu_weap_allow_frag_grenade, SETA_WEAP_ALLOW_FRAG_GRENADE;, 1 )
  CHOICE_DVARYESNO_VIS( 37, "@WEAPON_CONCUSSION_GRENADE", menu_weap_allow_concussion_grenade, SETA_WEAP_ALLOW_CONCUSSION_GRENADE;, 1 )
  CHOICE_DVARYESNO_VIS( 38, "@WEAPON_FLASH_GRENADE", menu_weap_allow_flash_grenade, SETA_WEAP_ALLOW_FLASH_GRENADE;, 1 )
  CHOICE_DVARYESNO_VIS( 39, "@WEAPON_SMOKE_GRENADE", menu_weap_allow_smoke_grenade, SETA_WEAP_ALLOW_SMOKE_GRENADE;, 1 )
  
  CHOICE_DVARYESNO_VIS( 40, "@OW_SCR_ALLOW_STATIONARY_TURRETS", menu_scr_allow_stationary_turrets, SETA_SCR_ALLOW_STATIONARY_TURRETS;, 1 )
  CHOICE_DVARYESNO_VIS( 41, "@OW_BINOCULARS", menu_weap_allow_binoculars, SETA_WEAP_ALLOW_BINOCULARS;, 1 )
  
  CHOICE_DVARYESNO_VIS( 42, "@OW_SCR_MELEE_ENABLE", menu_scr_melee_enable, SETA_SCR_MELEE_ENABLE;, 1 )
  CHOICE_DVAREDIT_NUMERIC_VIS( 43, "@OW_SCR_MELEE_RANGE", menu_scr_melee_range, 3, SETA_SCR_MELEE_RANGE;, when( dvarBool(scr_melee_enable) == 1 ) )
  CHOICE_DVAREDIT_NUMERIC_VIS( 44, "@OW_SCR_MELEE_STAB_RANGE", menu_scr_melee_stab_range, 3, SETA_SCR_MELEE_STAB_RANGE;, when( dvarBool(scr_melee_enable) == 1 ) )
  CHOICE_DVAREDIT_NUMERIC_VIS( 45, "@OW_SCR_MELEECHARGEFRICTION", menu_scr_meleeChargeFriction, 3, SETA_SCR_MELEECHARGEFRICTION;, when( dvarBool(scr_melee_enable) == 1 ) )
  
  #undef	CHOICE_X_START
  #define CHOICE_X_START	-510

  #undef CHOICE_Y_START
  #define CHOICE_Y_START 210
  
  #undef	CHOICE_SIZE_X
  #define CHOICE_SIZE_X		120
  
  #undef CHOICE_X_SPACING
  #define CHOICE_X_SPACING 240
  
  CHOICE_DVARFLOATLIST_VIS( 46, "@OW_MENU_MANAGE_ATTACHMENTS", menu_cfg_att, { "@WEAPON_ASSAULTRIFLES" 0 "@WEAPON_SMGS" 1 "@OW_LMGS" 2 "@WEAPON_SHOTGUNS" 3 "@WEAPON_SNIPERRIFLES" 4 "@OW_PISTOLS" 5 }, ;, 1 )
  CHOICE_DVARYESNO_VIS( 47, "@OW_MENU_ALLOW_NO_ATTACHMENTS", menu_attach_allow_pistol_none, ;, when( dvarInt(menu_cfg_att) == 5 ))
  CHOICE_DVARYESNO_VIS( 47, "@OW_MENU_ALLOW_NO_ATTACHMENTS", menu_attach_allow_assault_none, ;, when( dvarInt(menu_cfg_att) == 0 ))
  CHOICE_DVARYESNO_VIS( 47, "@OW_MENU_ALLOW_NO_ATTACHMENTS", menu_attach_allow_specops_none, ;, when( dvarInt(menu_cfg_att) == 1 ))
  CHOICE_DVARYESNO_VIS( 47, "@OW_MENU_ALLOW_NO_ATTACHMENTS", menu_attach_allow_heavygunner_none, ;, when( dvarInt(menu_cfg_att) == 2 ))
  CHOICE_DVARYESNO_VIS( 47, "@OW_MENU_ALLOW_NO_ATTACHMENTS", menu_attach_allow_shotgun_none, ;, when( dvarInt(menu_cfg_att) == 3 ))
  CHOICE_DVARYESNO_VIS( 47, "@OW_MENU_ALLOW_NO_ATTACHMENTS", menu_attach_allow_sniper_none, ;, when( dvarInt(menu_cfg_att) == 4 ))
  CHOICE_DVARYESNO_VIS( 48, "@WEAPON_SILENCER", menu_attach_allow_pistol_silencer, ;, when( dvarInt(menu_cfg_att) == 5 ) )
  CHOICE_DVARYESNO_VIS( 48, "@WEAPON_SILENCER", menu_attach_allow_assault_silencer, ;, when( dvarInt(menu_cfg_att) == 0 ) )
  CHOICE_DVARYESNO_VIS( 48, "@WEAPON_SILENCER", menu_attach_allow_specops_silencer, ;, when( dvarInt(menu_cfg_att) == 1 ) )
  CHOICE_DVARYESNO_VIS( 49, "@WEAPON_REDDOT", menu_attach_allow_assault_reflex, ;, when( dvarInt(menu_cfg_att) == 0 ) )
  CHOICE_DVARYESNO_VIS( 49, "@WEAPON_REDDOT", menu_attach_allow_specops_reflex, ;, when( dvarInt(menu_cfg_att) == 1 ) )
  CHOICE_DVARYESNO_VIS( 49, "@WEAPON_REDDOT", menu_attach_allow_heavygunner_reflex, ;, when( dvarInt(menu_cfg_att) == 2 ) )
  CHOICE_DVARYESNO_VIS( 49, "@WEAPON_REDDOT", menu_attach_allow_shotgun_reflex, ;, when( dvarInt(menu_cfg_att) == 3 ) )
  CHOICE_DVARYESNO_VIS( 50, "@WEAPON_ACOG", menu_attach_allow_assault_acog, ;, when( dvarInt(menu_cfg_att) == 0 ) )
  CHOICE_DVARYESNO_VIS( 50, "@WEAPON_ACOG", menu_attach_allow_specops_acog, ;, when( dvarInt(menu_cfg_att) == 1 ) )
  CHOICE_DVARYESNO_VIS( 50, "@WEAPON_ACOG", menu_attach_allow_heavygunner_acog, ;, when( dvarInt(menu_cfg_att) == 2 ) )
  CHOICE_DVARYESNO_VIS( 50, "@WEAPON_ACOG", menu_attach_allow_sniper_acog, ;, when( dvarInt(menu_cfg_att) == 4 ) )
  CHOICE_DVARYESNO_VIS( 51, "@WEAPON_GRIP", menu_attach_allow_heavygunner_grip, ;, when( dvarInt(menu_cfg_att) == 2 ) )
  CHOICE_DVARYESNO_VIS( 51, "@WEAPON_GRIP", menu_attach_allow_shotgun_grip, ;, when( dvarInt(menu_cfg_att) == 3 ) )
  CHOICE_DVARYESNO_VIS( 52, "@WEAPON_GRENADE_LAUNCHER", menu_attach_allow_assault_gl, ;, when( dvarInt(menu_cfg_att) == 0 ) )
  CHOICE_DVARYESNO_VIS( 54, "@OW_SCR_DYNAMIC_ATTACHMENTS_ENABLE", menu_scr_dynamic_attachments_enable, SETA_SCR_DYNAMIC_ATTACHMENTS_ENABLE;, 1 )
}