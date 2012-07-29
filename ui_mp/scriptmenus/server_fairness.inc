#include "ui_mp/menustyle_forcascadeinclude.inc"

menuDef 
{
  name			"settings_quick_koth_@MPUI_RULES_TIME_LIMIT"
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
  
  CHOICE_MENU_TITLE("@OW_SERVER_FAIRNESS" )
  
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

  
  CHOICE_DVARFLOATLIST( 1, "@OW_TEAM_FFTYPE", scr_team_fftype, { "Disabled" 0 "Enabled (victim receives damage)" 1 "Reflective (attacker receives damage)" 2 "Shared (50% attacker 50% victim" 3 }, ; )
  CHOICE_DVARYESNO( 2, "@OW_TEAM_TEAMKILLPOINTLOSS", scr_team_teamkillpointloss, ; )
  CHOICE_DVAREDIT_NUMERIC( 3, "@OW_TEAM_TEAMKILLSPAWNDELAY", scr_team_teamkillspawndelay, 2, ; )
  CHOICE_DVARYESNO( 4, "@OW_GAME_DEATHPOINTLOSS", scr_game_deathpointloss, ; )
  CHOICE_DVARYESNO( 5, "@OW_GAME_SUICIDEPOINTLOSS", scr_game_suicidepointloss, ; )
  CHOICE_DVAREDIT_NUMERIC( 6, "@OW_PLAYER_SUICIDESPAWNDELAY", scr_player_suicidespawndelay, 2, ; )
  
  CHOICE_DVAREDIT_NUMERIC( 7, "@OW_TK_LIMIT", scr_tk_limit, 2, ; )
  CHOICE_DVARYESNO( 8, "@OW_TK_EXPLOSIVE_COUNTASONE", scr_tk_explosive_countasone, ; )
  CHOICE_DVARFLOATLIST( 9, "@OW_TK_PUNISHMENT", scr_tk_punishment, { "Warning message" 0 "Disable player weapons" 1 "Lock player in it's position" 2 "Kill player on the spot" 3 "Kick player from the server" 4 }, ; )
  CHOICE_DVAREDIT_NUMERIC( 10, "@OW_TK_PUNISHMENT_TIME", scr_tk_punishment_time, 2, ; )
  
  
  CHOICE_DVARYESNO( 11, "@OW_SPAWN_PROTECTION_ENABLE", scr_spawn_protection_enable, ; )
  CHOICE_DVAREDIT( 12, "@OW_SPAWN_PROTECTION_TIME", scr_spawn_protection_time, ; )
  CHOICE_DVARYESNO( 13, "@OW_SPAWN_PROTECTION_INVISIBLE", scr_spawn_protection_invisible, ; )
  CHOICE_DVARYESNO( 14, "@OW_SPAWN_PROTECTION_HITICON", scr_spawn_protection_hiticon, ; )
  CHOICE_DVAREDIT_NUMERIC( 15, "@OW_SPAWN_PROTECTION_MAXDISTANCE", scr_spawn_protection_maxdistance, 4, ; )
  CHOICE_DVAREDIT_NUMERIC( 16, "@OW_SPAWN_PROTECTION_PUNISHMENT_TIME", scr_spawn_protection_punishment_time, 2, ; )
  
  CHOICE_DVARYESNO( 17, "@OW_ANTI_CAMPING_ENABLE", scr_anti_camping_enable, ; )
  CHOICE_DVARFLOATLIST( 18, "@OW_ANTI_CAMPING_SHOW", scr_anti_camping_show, { "Show only icon" 0 "Show only message" 1 "Show both" 2 }, ; )
  CHOICE_DVAREDIT( 19, "@OW_ANTI_CAMPING_MESSAGE", scr_anti_camping_message, ; )
  CHOICE_DVAREDIT_NUMERIC( 20, "@OW_ANTI_CAMPING_DISTANCE", scr_anti_camping_distance, 3, ; )
  CHOICE_DVAREDIT_NUMERIC( 21, "@OW_ANTI_CAMPING_TIME", scr_anti_camping_time, 3, ; )
  
  CHOICE_DVARFLOATLIST( 22, "@OW_ANTI_BUNNY_HOPPING_ENABLE", scr_anti_bunny_hopping_enable, { "Disabled" 0 "Lower weapon when jumping" 1 "Lower weapon only after 2 consecutive jumps" 2 "Shift aim when jumping" 3 "Shift aim only after 2 consecutive jumps" 4 }, ; )
  CHOICE_DVARYESNO( 23, "@OW_ANTI_DOLPHIN_DIVE_ENABLE", scr_anti_dolphin_dive_enable, ; )
  
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