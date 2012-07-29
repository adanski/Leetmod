#include "ui_mp/menustyle_forcascadeinclude.inc"

menuDef 
{
  name			"settings_quick_koth_@MPUI_RULES_SCORE_LIMIT"
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
  
  CHOICE_MENU_TITLE("@OW_SERVER_MAPDESIGN" )
  
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

  CHOICE_DVARYESNO( 1, "@OW_MAP_SPECIAL_FX_ENABLE", scr_map_special_fx_enable, ; )
  CHOICE_DVARYESNO( 2, "@OW_MAP_SPECIAL_FX_RAIN", scr_map_special_fx_rain, ; )
  CHOICE_DVARYESNO( 3, "@OW_MAP_SPECIAL_FX_PARTICLES", scr_map_special_fx_particles, ; )
  CHOICE_DVARYESNO( 4, "@OW_MAP_SPECIAL_FX_BGSOUND", scr_map_special_fx_bgsound, ; )
  CHOICE_DVARYESNO( 5, "@OW_SHOW_FOG", scr_show_fog, ; )
  
  CHOICE_DVARYESNO( 6, "@OW_DCS_ENABLED", scr_dcs_enabled, ; )
  CHOICE_DVAREDIT_NUMERIC( 7, "@OW_DCS_DAY_LENGTH", scr_dcs_day_length, 4, ; )
  CHOICE_DVAREDIT_NUMERIC( 8, "@OW_DCS_DUSK_LENGTH", scr_dcs_dusk_length, 4, ; )
  CHOICE_DVAREDIT_NUMERIC( 9, "@OW_DCS_NIGHT_LENGTH", scr_dcs_night_length, 4, ; )
  CHOICE_DVAREDIT_NUMERIC( 10, "@OW_DCS_DAWN_LENGTH", scr_dcs_dawn_length, 4, ; )
  CHOICE_DVARFLOATLIST( 11, "@OW_DCS_FIRST_CYCLE", scr_dcs_first_cycle, { "Random" -1 "Dawn" 0 "Day" 1 "Dusk" 2 "Night" 3 }, ; )
  CHOICE_DVARYESNO( 12, "@OW_DCS_SOUNDS_ENABLE", scr_dcs_sounds_enable, ; )
  CHOICE_DVARFLOATLIST( 13, "@OW_DCS_RESET_CYCLE", scr_dcs_reset_cycle, { "Disabled" 0 "Enabled (Resets on new map)" 1 "Enabled (Resets on new round)" 2}, ; )
  
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