#include "ui_mp/menustyle.inc"

#define ROTATEMENUGAMETYPES4 uiScript closeMenuOnDvar settings_config_gametype p settings_quick_ctf; uiScript closeMenuOnDvar settings_config_gametype n settings_quick_ctf; uiScript openMenuOnDvar settings_config_gametype p settings_quick_war; uiScript openMenuOnDvar settings_config_gametype n settings_quick_dom;

menuDef 
{
  name			"settings_quick_ctf"
  fullscreen		0
  rect			0 0 640 480
  focusColor		COLOR_FOCUSED
  //soundloop		""
  onOpen
  {
    execondvarstringvalue settings_config_gametype p "set settings_config_gametype ctf";
    execondvarstringvalue settings_config_gametype n "set settings_config_gametype ass";
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
  
  #undef CHOICE_X_START
  #define CHOICE_X_START 80
  
  #undef CHOICE_Y_START
  #define CHOICE_Y_START 6
  
  #undef TEXTSIZE_BUTTON_PC
  #define TEXTSIZE_BUTTON_PC	0.4
  
  CHOICE_DVARSTRINGLIST( 1, "@MENU_GAME_TYPE", settings_config_gametype, { ""; "p"; "@OW_ASSASSINATION"; "ass"; "@OW_BEHIND_ENEMY_LINES"; "bel"; "@OW_CAPTURE_AND_HOLD"; "ch"; "@MPUI_CAPTURE_THE_FLAG"; "ctf"; ""; "n" }, ROTATEMENUGAMETYPES4 )
  
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
  
  #include "ui_mp/server_gametype_ass.inc"
  #include "ui_mp/server_gametype_bel.inc"
  #include "ui_mp/server_gametype_ctf.inc"
  #include "ui_mp/server_gametype_ch.inc"
}