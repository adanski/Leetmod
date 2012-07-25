#include "ui_mp/menustyle_forcascadeinclude.inc"

#define ROTATEMENUGAMETYPES2 uiScript closeMenuOnDvar settings_config_gametype p settings_quick_koth; uiScript closeMenuOnDvar settings_config_gametype n settings_quick_koth; uiScript openMenuOnDvar settings_config_gametype p settings_quick_dom; uiScript openMenuOnDvar settings_config_gametype n settings_quick_sab;

menuDef 
{
  name			"settings_quick_koth"
  fullScreen		1
  rect			0 0 640 480
  focusColor		COLOR_FOCUSED
  //soundloop		""
  onOpen
  {
    execondvarstringvalue settings_config_gametype p "set settings_config_gametype sab";
    execondvarstringvalue settings_config_gametype n "set settings_config_gametype koth";
  }
  onClose
  {
    
  }
  onESC 
  { 
    close self;
  }
  #include "ui/blurredbg.inc"
  //#define 	BACK_ENABLE		0
  //#include "ui_mp/navcontrols.inc"
  
  #undef CHOICE_X_START
  #define CHOICE_X_START 80
  
  #undef CHOICE_Y_START
  #define CHOICE_Y_START 6
  
  #undef TEXTSIZE_BUTTON_PC
  #define TEXTSIZE_BUTTON_PC	0.4
  
  CHOICE_DVARSTRINGLIST( 1, "@MENU_GAME_TYPE", settings_config_gametype, { ""; "p"; "Headquarters"; "koth"; "Sabotage"; "sab"; ""; "n" }, ROTATEMENUGAMETYPES2 )
  
  #undef TEXTSIZE_BUTTON_PC
  #define TEXTSIZE_BUTTON_PC	0.33
  
  #undef CHOICE_X_START
  #define CHOICE_X_START 0
  
  #undef CHOICE_Y_START
  #define CHOICE_Y_START 34
  
  #undef CHOICE_SIZE_Y
  #define CHOICE_SIZE_Y 		20

  //#undef	CHOICE_SIZE_X
  //#define CHOICE_SIZE_X		150
  
  //#undef CHOICE_X_SPACING
  //#define CHOICE_X_SPACING 200
  
  #include "ui_mp/server_gametype_sab.inc"
  #include "ui_mp/server_gametype_koth.inc"
}