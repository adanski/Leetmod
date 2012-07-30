#include "ui_mp/menustyle_forcascadeinclude.inc"

menuDef 
{
  name			"settings_quick_war_@MPUI_RULES_SPECTATING"
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
  
  CHOICE_MENU_TITLE("@OW_SERVER_HARDPOINTS" )
  
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

  CHOICE_DVARYESNO( 1, "@OW_GAME_HARDPOINTS", scr_game_hardpoints, ; )
  CHOICE_DVAREDIT_NUMERIC( 2, "@OW_HARDPOINT_SHOW_REMINDER", scr_hardpoint_show_reminder, 2, ; )
  CHOICE_DVARYESNO( 3, "@OW_REMOVE_HARDPOINT_ON_DEATH", scr_remove_hardpoint_on_death, ; )
  CHOICE_DVARYESNO( 4, "@OW_GAME_HARDPOINTS_CYCLE", scr_game_hardpoints_cycle, ; )
  CHOICE_DVARFLOATLIST( 5, "@OW_GAME_HARDPOINTS_MODE", scr_game_hardpoints_mode, { "Use killstreak" 0 "Use overall amount of kills" 1 }, ; )
  CHOICE_DVARYESNO( 6, "@OW_ANNOUNCE_KILLSTREAK", scr_announce_killstreak, ; )
  
  CHOICE_DVARYESNO( 7, "@OW_ALLOW_SPECIALTY_DETECTEXPLOSIVE", scr_hardpoint_allow_uav, ; )
  CHOICE_DVARYESNO( 8, "@OW_GAME_FORCEUAV", scr_game_forceuav, ; )
  CHOICE_DVAREDIT_NUMERIC( 9, "@OW_HARDPOINT_UAV_STREAK", scr_hardpoint_uav_streak, 2, ; )
  CHOICE_DVAREDIT_NUMERIC( 10, "@OW_UAV_VIEW_TIME", scr_uav_view_time, 3, ; )
  CHOICE_DVARYESNO( 11, "@OW_ANNOUNCE_ENEMY_UAV_ONLINE", scr_announce_enemy_uav_online, ; )
  CHOICE_DVARYESNO( 12, "@OW_UAV_SHOW_HARDPOINTS", scr_uav_show_hardpoints, ; )
  
  CHOICE_DVARYESNO( 13, "@OW_HARDPOINT_ALLOW_AIRSTRIKE", scr_hardpoint_allow_airstrike, ; )
  CHOICE_DVAREDIT_NUMERIC( 14, "@OW_HARDPOINT_AIRSTRIKE_STREAK", scr_hardpoint_airstrike_streak, 2, ; )
  CHOICE_DVAREDIT_NUMERIC( 15, "@OW_AIRSTRIKE_HARDPOINT_INTERVAL", scr_airstrike_hardpoint_interval, 3, ; )
  CHOICE_DVARYESNO( 16, "@OW_ANNOUNCE_ENEMY_AIRSTRIKE_INBOUND", scr_announce_enemy_airstrike_inbound, ; )
  CHOICE_DVARYESNO( 17, "@OW_AIRSTRIKE_ADD_KILLS", scr_airstrike_add_kills, ; )
  CHOICE_DVARYESNO( 18, "@OW_AIRSTRIKE_KILLS_TOWARD_STREAK", scr_airstrike_kills_toward_streak, ; )
  CHOICE_DVAREDIT_NUMERIC( 19, "@OW_AIRSTRIKE_DELAY", scr_airstrike_delay, 2, ; )
  
  CHOICE_DVARYESNO( 20, "@OW_HARDPOINT_ALLOW_HELICOPTER", scr_hardpoint_allow_helicopter, ; )
  CHOICE_DVAREDIT_NUMERIC( 21, "@OW_HARDPOINT_HELICOPTER_STREAK", scr_hardpoint_helicopter_streak, 2, ; )
  CHOICE_DVAREDIT_NUMERIC( 22, "@OW_HELI_HARDPOINT_INTERVAL", scr_heli_hardpoint_interval, 3, ; )
  CHOICE_DVARYESNO( 23, "@OW_ANNOUNCE_ENEMY_HELI_INBOUND", scr_announce_enemy_heli_inbound, ; )
  CHOICE_DVARYESNO( 24, "@OW_HELICOPTER_ADD_KILLS", scr_helicopter_add_kills, ; )
  CHOICE_DVARYESNO( 25, "@OW_HELICOPTER_KILLS_TOWARD_STREAK", scr_helicopter_kills_toward_streak, ; )
  CHOICE_DVAREDIT_NUMERIC( 26, "@OW_HELICOPTER_DELAY", scr_helicopter_delay, 2, ; )
  CHOICE_DVAREDIT_NUMERIC( 27, "@OW_HELI_MAXHEALTH", scr_heli_maxhealth, 4, ; )
  //CHOICE_DVAREDIT( 28, "@OW_HELI_TARGET_RECOGNITION", scr_heli_target_recognition, ; )
  CHOICE_DVARSLIDER( 28, "@OW_HELI_TARGET_RECOGNITION", scr_heli_target_recognition, 0.95, 0, 1, ; )
  
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