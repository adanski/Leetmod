#include "ui_mp/menustyle.inc"

#define ROTATEMENUGAMETYPES1 uiScript closeMenuOnDvar settings_config_gametype p settings_quick_war; uiScript closeMenuOnDvar settings_config_gametype n settings_quick_war; uiScript openMenuOnDvar settings_config_gametype p "settings_quick_koth"; uiScript openMenuOnDvar settings_config_gametype n settings_quick_ctf;

menuDef 
{
  name			"settings_quick_war"
  fullscreen		0
  rect			0 0 640 480
  focusColor		COLOR_FOCUSED
  //soundloop		""
  onOpen
  {
    execondvarstringvalue settings_config_gametype p "set settings_config_gametype tgr";
    execondvarstringvalue settings_config_gametype n "set settings_config_gametype sd";
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
  
  #undef CHOICE_X_START
  #define CHOICE_X_START 80
  
  #undef CHOICE_Y_START
  #define CHOICE_Y_START 6
  
  #undef TEXTSIZE_BUTTON_PC
  #define TEXTSIZE_BUTTON_PC	0.4
  //
  CHOICE_DVARSTRINGLIST( 1, "@MENU_GAME_TYPE", settings_config_gametype, { ""; "p"; "@MPUI_SEARCH_AND_DESTROY_CLASSIC"; "sd"; "@OW_SHARPSHOOTER"; "ss"; "@MPUI_WAR"; "war"; "@OW_TEAM_GREED"; "tgr"; ""; "n" }, ROTATEMENUGAMETYPES1 )
  
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
  
  #include "ui_mp/server_gametype_sd.inc"
  #include "ui_mp/server_gametype_ss.inc"
  #include "ui_mp/server_gametype_war.inc"
  #include "ui_mp/server_gametype_tgr.inc"
}
