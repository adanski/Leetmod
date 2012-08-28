#include "ui_mp/menustyle.inc"

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
  #include "ui_mp/blurredbg.inc"
  #include "ui_mp/navcontrols.inc"
  
  CHOICE_MENU_TITLE("@OW_SERVER_SPECTATE" )
  
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

  
  CHOICE_DVARFLOATLIST( 1, "@OW_SCR_GAME_SPECTATETYPE", menu_scr_game_spectatetype, { "Disabled" 0 "Team/Player only" 1 "Free" 2 }, SETA_SCR_GAME_SPECTATETYPE; )
  CHOICE_DVARFLOATLIST( 2, "@OW_SCR_GAME_SPECTATETYPE_SPECTATORS", menu_scr_game_spectatetype_spectators, { "Disabled" 0 "Team/Player only" 1 "Free" 2 }, SETA_SCR_GAME_SPECTATETYPE_SPECTATORS; )
  CHOICE_DVAREDIT( 3, "@OW_SCR_GAME_SPECTATORS_GUIDS", menu_scr_game_spectators_guids, SETA_SCR_GAME_SPECTATORS_GUIDS; )
  CHOICE_DVARYESNO( 4, "@OW_SCR_ALLOW_THIRDPERSON", menu_scr_allow_thirdperson, SETA_SCR_ALLOW_THIRDPERSON; )
  CHOICE_DVAREDIT_VIS( 5, "@OW_SCR_ALLOW_THIRDPERSON_GUIDS", menu_scr_allow_thirdperson_guids, 1000, 80, SETA_SCR_ALLOW_THIRDPERSON_GUIDS;, when( dvarBool(menu_scr_allow_thirdperson) ) )
  
  CHOICE_DVARYESNO( 6, "@OW_SCR_LIVEBROADCAST_ENABLE", menu_scr_livebroadcast_enable, SETA_SCR_LIVEBROADCAST_ENABLE; )
  CHOICE_DVAREDIT_VIS( 7, "@OW_SCR_LIVEBROADCAST_GUIDS", menu_scr_livebroadcast_guids, 1000, 80, SETA_SCR_LIVEBROADCAST_GUIDS;, when( dvarBool(menu_scr_livebroadcast_enable) ) )
  
  CHOICE_DVAREDIT_NUMERIC( 8, "@OW_SCR_IDLE_SWITCH_SPECTATOR", menu_scr_idle_switch_spectator, 3, SETA_SCR_IDLE_SWITCH_SPECTATOR; )
  CHOICE_DVAREDIT_NUMERIC_VIS( 9, "@OW_SCR_IDLE_SPECTATOR_TIMEOUT", menu_scr_idle_spectator_timeout, 3, SETA_SCR_IDLE_SPECTATOR_TIMEOUT;, when( dvarBool(menu_scr_idle_switch_spectator) ) )
  CHOICE_DVARYESNO_VIS( 10, "@OW_SCR_IDLE_SHOW_WARNING", menu_scr_idle_show_warning, SETA_SCR_IDLE_SHOW_WARNING;, when( dvarBool(menu_scr_idle_switch_spectator) ) )
  CHOICE_DVAREDIT_VIS( 11, "@OW_SCR_IDLE_PROTECTED_TAGS", menu_scr_idle_protected_tags, 1000, 80, SETA_SCR_IDLE_PROTECTED_TAGS;, when( dvarBool(menu_scr_idle_switch_spectator) ) )
  CHOICE_DVAREDIT_VIS( 12, "@OW_SCR_IDLE_PROTECTED_GUIDS", menu_scr_idle_protected_guids, 1000, 80, SETA_SCR_IDLE_PROTECTED_GUIDS;, when( dvarBool(menu_scr_idle_switch_spectator) ) )
  
}