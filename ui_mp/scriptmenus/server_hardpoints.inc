#include "ui_mp/menustyle.inc"

#include "ui_mp/scriptmenus/server_hardpoints_setadvars.inc"

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
  #include "ui_mp/blurredbg.inc"
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

  CHOICE_DVARYESNO( 1, "@OW_SCR_GAME_HARDPOINTS", scr_game_hardpoints, SETA_SCR_GAME_HARDPOINTS; )
  CHOICE_DVAREDIT_NUMERIC( 2, "@OW_SCR_HARDPOINT_SHOW_REMINDER", scr_hardpoint_show_reminder, 2, SETA_SCR_HARDPOINT_SHOW_REMINDER; )
  CHOICE_DVARYESNO( 3, "@OW_SCR_REMOVE_HARDPOINT_ON_DEATH", scr_remove_hardpoint_on_death, SETA_SCR_REMOVE_HARDPOINT_ON_DEATH; )
  CHOICE_DVARYESNO( 4, "@OW_SCR_GAME_HARDPOINTS_CYCLE", scr_game_hardpoints_cycle, SETA_SCR_GAME_HARDPOINTS_CYCLE; )
  CHOICE_DVARFLOATLIST( 5, "@OW_SCR_GAME_HARDPOINTS_MODE", scr_game_hardpoints_mode, { "Use killstreak" 0 "Use overall amount of kills" 1 }, SETA_SCR_GAME_HARDPOINTS_MODE; )
  CHOICE_DVARYESNO( 6, "@OW_SCR_ANNOUNCE_KILLSTREAK", scr_announce_killstreak, SETA_SCR_ANNOUNCE_KILLSTREAK; )
  
  CHOICE_DVARYESNO( 7, "@OW_SCR_HARDPOINT_ALLOW_UAV", scr_hardpoint_allow_uav, SETA_SCR_HARDPOINT_ALLOW_UAV; )
  CHOICE_DVARYESNO( 8, "@OW_SCR_GAME_FORCEUAV", scr_game_forceuav, SETA_SCR_GAME_FORCEUAV; )
  CHOICE_DVAREDIT_NUMERIC( 9, "@OW_SCR_HARDPOINT_UAV_STREAK", scr_hardpoint_uav_streak, 2, SETA_SCR_HARDPOINT_UAV_STREAK; )
  CHOICE_DVAREDIT_NUMERIC( 10, "@OW_SCR_UAV_VIEW_TIME", scr_uav_view_time, 3, SETA_SCR_UAV_VIEW_TIME; )
  CHOICE_DVARYESNO( 11, "@OW_SCR_ANNOUNCE_ENEMY_UAV_ONLINE", scr_announce_enemy_uav_online, SETA_SCR_ANNOUNCE_ENEMY_UAV_ONLINE; )
  CHOICE_DVARYESNO( 12, "@OW_SCR_UAV_SHOW_HARDPOINTS", scr_uav_show_hardpoints, SETA_SCR_UAV_SHOW_HARDPOINTS; )
  
  CHOICE_DVARYESNO( 13, "@OW_SCR_HARDPOINT_ALLOW_AIRSTRIKE", scr_hardpoint_allow_airstrike, SETA_SCR_HARDPOINT_ALLOW_AIRSTRIKE; )
  CHOICE_DVAREDIT_NUMERIC( 14, "@OW_SCR_HARDPOINT_AIRSTRIKE_STREAK", scr_hardpoint_airstrike_streak, 2, SETA_SCR_HARDPOINT_AIRSTRIKE_STREAK; )
  CHOICE_DVAREDIT_NUMERIC( 15, "@OW_SCR_AIRSTRIKE_HARDPOINT_INTERVAL", scr_airstrike_hardpoint_interval, 3, SETA_SCR_AIRSTRIKE_HARDPOINT_INTERVAL; )
  CHOICE_DVARYESNO( 16, "@OW_SCR_ANNOUNCE_ENEMY_AIRSTRIKE_INBOUND", scr_announce_enemy_airstrike_inbound, SETA_SCR_ANNOUNCE_ENEMY_AIRSTRIKE_INBOUND; )
  CHOICE_DVARYESNO( 17, "@OW_SCR_AIRSTRIKE_ADD_KILLS", scr_airstrike_add_kills, SETA_SCR_AIRSTRIKE_ADD_KILLS; )
  CHOICE_DVARYESNO( 18, "@OW_SCR_AIRSTRIKE_KILLS_TOWARD_STREAK", scr_airstrike_kills_toward_streak, SETA_SCR_AIRSTRIKE_KILLS_TOWARD_STREAK; )
  CHOICE_DVAREDIT_NUMERIC( 19, "@OW_SCR_AIRSTRIKE_DELAY", scr_airstrike_delay, 2, SETA_SCR_AIRSTRIKE_DELAY; )
  
  CHOICE_DVARYESNO( 20, "@OW_SCR_HARDPOINT_ALLOW_HELICOPTER", scr_hardpoint_allow_helicopter, SETA_SCR_HARDPOINT_ALLOW_HELICOPTER; )
  CHOICE_DVAREDIT_NUMERIC( 21, "@OW_SCR_HARDPOINT_HELICOPTER_STREAK", scr_hardpoint_helicopter_streak, 2, SETA_SCR_HARDPOINT_HELICOPTER_STREAK; )
  CHOICE_DVAREDIT_NUMERIC( 22, "@OW_SCR_HELI_HARDPOINT_INTERVAL", scr_heli_hardpoint_interval, 3, SETA_SCR_HELI_HARDPOINT_INTERVAL; )
  CHOICE_DVARYESNO( 23, "@OW_SCR_ANNOUNCE_ENEMY_HELI_INBOUND", scr_announce_enemy_heli_inbound, SETA_SCR_ANNOUNCE_ENEMY_HELI_INBOUND; )
  CHOICE_DVARYESNO( 24, "@OW_SCR_HELICOPTER_ADD_KILLS", scr_helicopter_add_kills, SETA_SCR_HELICOPTER_ADD_KILLS; )
  CHOICE_DVARYESNO( 25, "@OW_SCR_HELICOPTER_KILLS_TOWARD_STREAK", scr_helicopter_kills_toward_streak, SETA_SCR_HELICOPTER_KILLS_TOWARD_STREAK; )
  CHOICE_DVAREDIT_NUMERIC( 26, "@OW_SCR_HELICOPTER_DELAY", scr_helicopter_delay, 2, SETA_SCR_HELICOPTER_DELAY; )
  CHOICE_DVAREDIT_NUMERIC( 27, "@OW_SCR_HELI_MAXHEALTH", scr_heli_maxhealth, 4, SETA_SCR_HELI_MAXHEALTH; )
  //CHOICE_DVAREDIT( 28, "@OW_SCR_HELI_TARGET_RECOGNITION", scr_heli_target_recognition, ; )
  CHOICE_DVARSLIDER( 28, "@OW_SCR_HELI_TARGET_RECOGNITION", scr_heli_target_recognition, 0.95, 0, 1, SETA_SCR_HELI_TARGET_RECOGNITION; )
  
  //CHOICE_DVARSTRINGLIST( 1, "Configure to gametype:", ct_serverCfgGametype, { "ALL" ""; "DM" "_dm"; "TDM" "_war"; "DOM" "_dom"; "SAB" "_sab"; "HQ" "_koth"; "SD" "_sd"; "GG" "_gg"; "SS" "_ss"; "OITC" "_oitc"; "GR" "_gr"; "CTF" "_ctf"; }, ; )
}