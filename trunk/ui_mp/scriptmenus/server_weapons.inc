#include "ui_mp/menustyle_forcascadeinclude.inc"

menuDef 
{
  name			"settings_quick_war"
  fullScreen		1
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
  
  CHOICE_DVARYESNO( 1, "@WEAPON_M16", weap_allow_assault_m16, ; )
  CHOICE_DVARYESNO( 2, "@WEAPON_AK47", weap_allow_assault_ak47, ; )
  CHOICE_DVARYESNO( 3, "@WEAPON_M4_CARBINE", weap_allow_assault_m4, ; )
  CHOICE_DVARYESNO( 4, "@WEAPON_G3", weap_allow_assault_g3, ; )
  CHOICE_DVARYESNO( 5, "@WEAPON_G36C", weap_allow_assault_g36c, ; )
  CHOICE_DVARYESNO( 6, "@WEAPON_M14", weap_allow_assault_m14, ; )
  CHOICE_DVARYESNO( 7, "@WEAPON_MP44", weap_allow_assault_mp44, ; )
  
  //CHOICE_SEPARATOR( 8 )
  
  CHOICE_DVARYESNO( 8, "@WEAPON_MP5", weap_allow_specops_mp5, ; )
  CHOICE_DVARYESNO( 9, "@WEAPON_SKORPION", weap_allow_specops_skorpion, ; )
  CHOICE_DVARYESNO( 10, "@WEAPON_UZI", weap_allow_specops_uzi, ; )
  CHOICE_DVARYESNO( 11, "@WEAPON_AK74U", weap_allow_specops_ak74u, ; )
  CHOICE_DVARYESNO( 12, "@WEAPON_P90", weap_allow_specops_p90, ; )
  
  #undef CHOICE_Y_COUNT
  #define CHOICE_Y_COUNT			6
  
  //CHOICE_SEPARATOR( 13 )
  
  CHOICE_DVARYESNO( 13, "@WEAPON_SAW", weap_allow_heavygunner_saw, ; )
  CHOICE_DVARYESNO( 14, "@WEAPON_RPD", weap_allow_heavygunner_rpd, ; )
  CHOICE_DVARYESNO( 15, "@WEAPON_M60E4", weap_allow_heavygunner_m60e4, ; )
  
  //CHOICE_SEPARATOR( 16 )
  
  CHOICE_DVARYESNO( 17, "@WEAPON_WINCHESTER1200", weap_allow_demolitions_winchester1200, ; )
  CHOICE_DVARYESNO( 18, "@WEAPON_BENELLI", weap_allow_demolitions_m1014, ; )
  
  //CHOICE_SEPARATOR( 18 )
  
  CHOICE_DVARYESNO( 19, "@WEAPON_M40A3", weap_allow_sniper_m40a3, ; )
  CHOICE_DVARYESNO( 20, "@WEAPON_M21", weap_allow_sniper_m21, ; )
  CHOICE_DVARYESNO( 21, "@WEAPON_DRAGUNOV", weap_allow_sniper_dragunov, ; )
  CHOICE_DVARYESNO( 22, "@WEAPON_REMINGTON700", weap_allow_sniper_remington700, ; )
  CHOICE_DVARYESNO( 23, "@WEAPON_BARRETT", weap_allow_sniper_barrett, ; )
  
  
  
  CHOICE_DVARYESNO( 24, "Teste", weap_allow_sniper_barrett, ; )
  
  itemDef {
    name			back
    text			"@MENU_BACK"
    type			1
    style			WINDOW_STYLE_FILLED
    forecolor		TEXTBUTTON_COLOR
    textstyle		ITEM_TEXTSTYLE_SHADOWED
    rect			-250 -26 40 20 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
    textfont		UI_FONT_NORMAL
    textalign		ITEM_ALIGN_LEFT
    textscale		TEXTSIZE_SMALL
    textaligny		18
    visible			1
    mouseEnter		{ play "mouse_over"; }
    action 
    {
      play "mouse_click";
      close self;
    }	
  }
}