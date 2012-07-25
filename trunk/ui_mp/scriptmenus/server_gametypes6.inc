#include "ui_mp/menustyle_forcascadeinclude.inc"

#define ROTATEMENUGAMETYPES6 uiScript closeMenuOnDvar settings_config_gametype p "settings_quick_dom_@MPUI_RULES_SPECTATING"; uiScript closeMenuOnDvar settings_config_gametype n "settings_quick_dom_@MPUI_RULES_SPECTATING"; uiScript openMenuOnDvar settings_config_gametype p settings_quick_ctf; uiScript openMenuOnDvar settings_config_gametype n settings_quick_dom;

menuDef 
{
  name			"settings_quick_dom_@MPUI_RULES_SPECTATING"
  fullscreen		0
  rect			0 0 640 480
  focusColor		COLOR_FOCUSED
  //soundloop		""
  onOpen
  {
    execondvarstringvalue settings_config_gametype p "set settings_config_gametype oitc";
    execondvarstringvalue settings_config_gametype n "set settings_config_gametype gg";
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
  
  CHOICE_DVARSTRINGLIST( 1, "@MENU_GAME_TYPE", settings_config_gametype, { ""; "p"; "Gun Game"; "gg"; "Sharp shooter"; "ss"; "One in the chamber"; "oitc"; ""; "n" }, ROTATEMENUGAMETYPES6 )
  
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
  
  #include "ui_mp/server_gametype_gg.inc"
  #include "ui_mp/server_gametype_ss.inc"
  #include "ui_mp/server_gametype_oitc.inc"
  
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