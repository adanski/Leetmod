#include "ui_mp/menustyle.inc"

#include "ui_mp/scriptmenus/server_weapons_setadvars.inc"

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
  #include "ui/blurredbg.inc"
  #include "ui_mp/navcontrols.inc"
  
  CHOICE_MENU_TITLE("@OW_SERVER_WEAPONS" )
  
  #undef TEXTSIZE_BUTTON_PC
  #define TEXTSIZE_BUTTON_PC	0.33
  
  #undef CHOICE_SIZE_Y
  #define CHOICE_SIZE_Y 		20
  
  #undef	CHOICE_SIZE_X
  #define CHOICE_SIZE_X		80
  
  #undef CHOICE_X_SPACING
  #define CHOICE_X_SPACING 150

  #undef CHOICE_X_START
  #define CHOICE_X_START 16
  
  #undef CHOICE_Y_START
  #define CHOICE_Y_START 34
  
  #undef CHOICE_Y_COUNT
  #define CHOICE_Y_COUNT			7
  
  CHOICE_DVARYESNO( 1, "@WEAPON_M16", weap_allow_assault_m16, SETA_WEAP_ALLOW_ASSAULT_M16; )
  CHOICE_DVARYESNO( 2, "@WEAPON_AK47", weap_allow_assault_ak47, SETA_WEAP_ALLOW_ASSAULT_AK47; )
  CHOICE_DVARYESNO( 3, "@WEAPON_M4_CARBINE", weap_allow_assault_m4, SETA_WEAP_ALLOW_ASSAULT_M4; )
  CHOICE_DVARYESNO( 4, "@WEAPON_G3", weap_allow_assault_g3, SETA_WEAP_ALLOW_ASSAULT_G3; )
  CHOICE_DVARYESNO( 5, "@WEAPON_G36C", weap_allow_assault_g36c, SETA_WEAP_ALLOW_ASSAULT_G36C; )
  CHOICE_DVARYESNO( 6, "@WEAPON_M14", weap_allow_assault_m14, SETA_WEAP_ALLOW_ASSAULT_M14; )
  CHOICE_DVARYESNO( 7, "@WEAPON_MP44", weap_allow_assault_mp44, SETA_WEAP_ALLOW_ASSAULT_MP44; )
  
  //CHOICE_SEPARATOR( 8 )
  
  CHOICE_DVARYESNO( 8, "@WEAPON_MP5", weap_allow_specops_mp5, SETA_WEAP_ALLOW_SPECOPS_MP5; )
  CHOICE_DVARYESNO( 9, "@WEAPON_SKORPION", weap_allow_specops_skorpion, SETA_WEAP_ALLOW_SPECOPS_SKORPION; )
  CHOICE_DVARYESNO( 10, "@WEAPON_UZI", weap_allow_specops_uzi, SETA_WEAP_ALLOW_SPECOPS_UZI; )
  CHOICE_DVARYESNO( 11, "@WEAPON_AK74U", weap_allow_specops_ak74u, SETA_WEAP_ALLOW_SPECOPS_AK74U; )
  CHOICE_DVARYESNO( 12, "@WEAPON_P90", weap_allow_specops_p90, SETA_WEAP_ALLOW_SPECOPS_P90; )
  
  #undef CHOICE_Y_COUNT
  #define CHOICE_Y_COUNT			6
  
  //CHOICE_SEPARATOR( 13 )
  
  CHOICE_DVARYESNO( 13, "@WEAPON_SAW", weap_allow_heavygunner_saw, SETA_WEAP_ALLOW_HEAVYGUNNER_SAW; )
  CHOICE_DVARYESNO( 14, "@WEAPON_RPD", weap_allow_heavygunner_rpd, SETA_WEAP_ALLOW_HEAVYGUNNER_RPD; )
  CHOICE_DVARYESNO( 15, "@WEAPON_M60E4", weap_allow_heavygunner_m60e4, SETA_WEAP_ALLOW_HEAVYGUNNER_M60E4; )
  
  //CHOICE_SEPARATOR( 16 )
  
  CHOICE_DVARYESNO( 17, "@WEAPON_WINCHESTER1200", weap_allow_demolitions_winchester1200, SETA_WEAP_ALLOW_DEMOLITIONS_WINCHESTER1200; )
  CHOICE_DVARYESNO( 18, "@WEAPON_BENELLI", weap_allow_demolitions_m1014, SETA_WEAP_ALLOW_DEMOLITIONS_M1014; )
  
  //CHOICE_SEPARATOR( 18 )
  
  CHOICE_DVARYESNO( 19, "@WEAPON_M40A3", weap_allow_sniper_m40a3, SETA_WEAP_ALLOW_SNIPER_M40A3; )
  CHOICE_DVARYESNO( 20, "@WEAPON_M21", weap_allow_sniper_m21, SETA_WEAP_ALLOW_SNIPER_M21; )
  CHOICE_DVARYESNO( 21, "@WEAPON_DRAGUNOV", weap_allow_sniper_dragunov, SETA_WEAP_ALLOW_SNIPER_DRAGUNOV; )
  CHOICE_DVARYESNO( 22, "@WEAPON_REMINGTON700", weap_allow_sniper_remington700, SETA_WEAP_ALLOW_SNIPER_REMINGTON700; )
  CHOICE_DVARYESNO( 23, "@WEAPON_BARRETT", weap_allow_sniper_barrett, SETA_WEAP_ALLOW_SNIPER_BARRETT; )
  
  
  
  CHOICE_DVARYESNO( 24, "Teste", weap_allow_sniper_barrett, ; )
}