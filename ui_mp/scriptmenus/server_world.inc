#include "ui_mp/menustyle.inc"

#include "ui_mp/scriptmenus/server_world_setadvars.inc"

menuDef 
{
  name			"settings_quick_koth_@MPUI_RULES_SCORE_LIMIT"
  fullScreen		0
  rect			0 0 640 480
  focusColor		COLOR_FOCUSED
  //soundloop		""
  onOpen
  {
    FILLMENUDVARS;
  }
  onClose
  {
    
  }
  onESC 
  { 
    close self;
  }
  #include "ui_mp/blurredbg.inc"
  #define MENU_TOPBARSHORT
  #include "ui_mp/navcontrols.inc"
  #undef MENU_TOPBARSHORT
  
  CHOICE_MENU_TITLE_VIS("@OW_SERVER_WORLD", 1 )
  
  #undef TEXTSIZE_BUTTON_PC
  #define TEXTSIZE_BUTTON_PC	0.33

  #undef CHOICE_SIZE_Y
  #define CHOICE_SIZE_Y 		20

  #undef	CHOICE_SIZE_X
  #define CHOICE_SIZE_X		220

  #undef CHOICE_X_SPACING
  #define CHOICE_X_SPACING 300
  
  #undef CHOICE_X_START
  #define CHOICE_X_START 0

  #undef CHOICE_Y_START
  #define CHOICE_Y_START 34
  
  #undef CHOICE_Y_COUNT
  #define CHOICE_Y_COUNT			20
  
  CHOICE_DVAREDIT_NUMERIC( 1, "@OW_SCR_G_GRAVITY", menu_scr_g_gravity, 5, SETA_SCR_G_GRAVITY; )
  
  CHOICE_DVARYESNO( 2, "@OW_SCR_MAP_SPECIAL_FX_ENABLE", menu_scr_map_special_fx_enable, SETA_SCR_MAP_SPECIAL_FX_ENABLE; )
  CHOICE_DVARYESNO_VIS( 3, "@OW_SCR_MAP_SPECIAL_FX_RAIN", menu_scr_map_special_fx_rain, SETA_SCR_MAP_SPECIAL_FX_RAIN;, when( dvarBool(menu_scr_map_special_fx_enable) ) )
  CHOICE_DVARYESNO_VIS( 4, "@OW_SCR_MAP_SPECIAL_FX_PARTICLES", menu_scr_map_special_fx_particles, SETA_SCR_MAP_SPECIAL_FX_PARTICLES;, when( dvarBool(menu_scr_map_special_fx_enable) ) )
  CHOICE_DVARYESNO_VIS( 5, "@OW_SCR_MAP_SPECIAL_FX_BGSOUND", menu_scr_map_special_fx_bgsound, SETA_SCR_MAP_SPECIAL_FX_BGSOUND;, when( dvarBool(menu_scr_map_special_fx_enable) ) )
  CHOICE_DVARYESNO( 6, "@OW_SCR_SHOW_FOG", menu_scr_show_fog, SETA_SCR_SHOW_FOG; )
  
  CHOICE_DVARYESNO( 7, "@OW_SCR_DCS_ENABLED", menu_scr_dcs_enabled, SETA_SCR_DCS_ENABLED; )
  CHOICE_DVAREDIT_NUMERIC_VIS( 8, "@OW_SCR_DCS_DAY_LENGTH", menu_scr_dcs_day_length, 4, SETA_SCR_DCS_DAY_LENGTH;, when( dvarBool(menu_scr_dcs_enabled) ) )
  CHOICE_DVAREDIT_NUMERIC_VIS( 9, "@OW_SCR_DCS_DUSK_LENGTH", menu_scr_dcs_dusk_length, 4, SETA_SCR_DCS_DUSK_LENGTH;, when( dvarBool(menu_scr_dcs_enabled) ) )
  CHOICE_DVAREDIT_NUMERIC_VIS( 10, "@OW_SCR_DCS_NIGHT_LENGTH", menu_scr_dcs_night_length, 4, SETA_SCR_DCS_NIGHT_LENGTH;, when( dvarBool(menu_scr_dcs_enabled) ) )
  CHOICE_DVAREDIT_NUMERIC_VIS( 11, "@OW_SCR_DCS_DAWN_LENGTH", menu_scr_dcs_dawn_length, 4, SETA_SCR_DCS_DAWN_LENGTH;, when( dvarBool(menu_scr_dcs_enabled) ) )
  CHOICE_DVARFLOATLIST_VIS( 12, "@OW_SCR_DCS_FIRST_CYCLE", menu_scr_dcs_first_cycle, { "Random" -1 "Dawn" 0 "Day" 1 "Dusk" 2 "Night" 3 }, SETA_SCR_DCS_FIRST_CYCLE;, when( dvarBool(menu_scr_dcs_enabled) ) )
  CHOICE_DVARYESNO_VIS( 13, "@OW_SCR_DCS_SOUNDS_ENABLE", menu_scr_dcs_sounds_enable, SETA_SCR_DCS_SOUNDS_ENABLE;, when( dvarBool(menu_scr_dcs_enabled) ) )
  CHOICE_DVARFLOATLIST_VIS( 14, "@OW_SCR_DCS_RESET_CYCLE", menu_scr_dcs_reset_cycle, { "Disabled" 0 "Enabled (Resets on new map)" 1 "Enabled (Resets on new round)" 2}, SETA_SCR_DCS_RESET_CYCLE;, when( dvarBool(menu_scr_dcs_enabled) ) )
  
  #undef CHOICE_Y_COUNT
  #define CHOICE_Y_COUNT			100
  
  #undef CHOICE_Y_START
  #define CHOICE_Y_START -2170
  
  #undef CHOICE_X_START
  #define CHOICE_X_START 180
  
  #undef CHOICE_SIZE_X
  #define CHOICE_SIZE_X 160
  
  CHOICE_DVARSTRINGLIST_VIS( 100, "@OW_MENU_CONFIGURE_TO_GAMETYPE", menu_cfg_gt, { "Default value when not specifically defined"; "_def"; "@OW_ASSASSINATION"; "ass"; "@OW_BEHIND_ENEMY_LINES"; "bel"; "@OW_CAPTURE_AND_HOLD"; "ch"; "@MPUI_CAPTURE_THE_FLAG"; "ctf"; "@MPUI_DOMINATION"; "dom"; "@MPUI_DEATHMATCH"; "dm"; "@OW_FREEZETAG"; "ftag"; "@OW_GREED"; "gr"; "@OW_GUNGAME"; "gg"; "@MPUI_HEADQUARTERS"; "koth"; "@OW_ONEINTHECHAMBER"; "oitc"; "@OW_RETRIEVAL"; "re"; "@MPUI_SABOTAGE"; "sab"; "@MPUI_SEARCH_AND_DESTROY_CLASSIC"; "sd"; "@OW_SHARPSHOOTER"; "ss"; "@MPUI_WAR"; "war"; "@OW_TEAM_GREED"; "tgr"; }, FILLMENUDVARS;, 1 )
  
  itemDef {
    name			save
    text			"@OW_CAC_SUBMIT"
    type			1
    style			WINDOW_STYLE_FILLED
    forecolor		TEXTBUTTON_COLOR
    textstyle		ITEM_TEXTSTYLE_SHADOWED
    rect			170 -26 100 20 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
    textfont		UI_FONT_NORMAL
    textalign		ITEM_ALIGN_LEFT
    textscale		TEXTSIZE_SMALL
    textaligny		18
    visible			1
    mouseEnter		{ play "mouse_over"; }
    action 
    {
      play "menu_save_changes";
      SAVEMENUDVARS;
    }	
  }
}