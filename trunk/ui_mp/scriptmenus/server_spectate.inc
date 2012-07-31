#include "ui_mp/menustyle_forcascadeinclude.inc"

menuDef 
{
  name			"settings_quick_koth_@MPUI_RULES_FRIENDLY_FIRE"
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
  
  CHOICE_MENU_TITLE("@OW_SERVER_SPECTATE" )
  
  #undef TEXTSIZE_BUTTON_PC
  #define TEXTSIZE_BUTTON_PC	0.33

  #undef CHOICE_SIZE_Y
  #define CHOICE_SIZE_Y 		20

  #undef	CHOICE_SIZE_X
  #define CHOICE_SIZE_X		150

  #undef CHOICE_X_SPACING
  #define CHOICE_X_SPACING 300
  
  #undef CHOICE_X_START
  #define CHOICE_X_START 0

  #undef CHOICE_Y_START
  #define CHOICE_Y_START 34
  
  #undef CHOICE_Y_COUNT
  #define CHOICE_Y_COUNT			20

  
  CHOICE_DVARFLOATLIST( 1, "@OW_SCR_GAME_SPECTATETYPE", scr_game_spectatetype, { "Disabled" 0 "Team/Player only" 1 "Free" 2 }, ; )
  CHOICE_DVARFLOATLIST( 2, "@OW_SCR_GAME_SPECTATETYPE_SPECTATORS", scr_game_spectatetype_spectators, { "Disabled" 0 "Team/Player only" 1 "Free" 2 }, ; )
  CHOICE_DVAREDIT( 3, "@OW_SCR_GAME_SPECTATORS_GUIDS", scr_game_spectators_guids, ; )
  CHOICE_DVARYESNO( 4, "@OW_SCR_ALLOW_THIRDPERSON", scr_allow_thirdperson, ; )
  CHOICE_DVAREDIT( 5, "@OW_SCR_ALLOW_THIRDPERSON_GUIDS", scr_allow_thirdperson_guids, ; )
  
  CHOICE_DVAREDIT_NUMERIC( 6, "@OW_SCR_IDLE_SWITCH_SPECTATOR", scr_idle_switch_spectator, 3, ; )
  CHOICE_DVAREDIT_NUMERIC( 7, "@OW_SCR_IDLE_SPECTATOR_TIMEOUT", scr_idle_spectator_timeout, 3, ; )
  CHOICE_DVARYESNO( 8, "@OW_SCR_IDLE_SHOW_WARNING", scr_idle_show_warning, ; )
  CHOICE_DVAREDIT( 9, "@OW_SCR_IDLE_PROTECTED_TAGS", scr_idle_protected_tags, ; )
  CHOICE_DVAREDIT( 10, "@OW_SCR_IDLE_PROTECTED_GUIDS", scr_idle_protected_guids, ; )
  
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
  //CHOICE_DVARSTRINGLIST( 1, "Configure to gametype:", ct_serverCfgGametype, { "ALL" ""; "DM" "_dm"; "TDM" "_war"; "DOM" "_dom"; "SAB" "_sab"; "HQ" "_koth"; "SD" "_sd"; "GG" "_gg"; "SS" "_ss"; "OITC" "_oitc"; "GR" "_gr"; "CTF" "_ctf"; }, ; )
}