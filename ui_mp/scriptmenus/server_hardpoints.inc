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
  #define CHOICE_SIZE_X		300

  #undef CHOICE_X_SPACING
  #define CHOICE_X_SPACING 320
  
  #undef CHOICE_X_START
  #define CHOICE_X_START -75

  #undef CHOICE_Y_START
  #define CHOICE_Y_START 34
  
  #undef CHOICE_Y_COUNT
  #define CHOICE_Y_COUNT			12

  CHOICE_DVARYESNO( 1, "@OW_SCR_GAME_HARDPOINTS", menu_scr_game_hardpoints, SETA_SCR_GAME_HARDPOINTS; )
  CHOICE_DVAREDIT_NUMERIC_VIS( 2, "@OW_SCR_HARDPOINT_SHOW_REMINDER", menu_scr_hardpoint_show_reminder, 2, SETA_SCR_HARDPOINT_SHOW_REMINDER;, when( dvarBool(menu_scr_game_hardpoints) ) )
  CHOICE_DVARYESNO_VIS( 3, "@OW_SCR_REMOVE_HARDPOINT_ON_DEATH", menu_scr_remove_hardpoint_on_death, SETA_SCR_REMOVE_HARDPOINT_ON_DEATH;, when( dvarBool(menu_scr_game_hardpoints) ) )
  CHOICE_DVARYESNO_VIS( 4, "@OW_SCR_GAME_HARDPOINTS_CYCLE", menu_scr_game_hardpoints_cycle, SETA_SCR_GAME_HARDPOINTS_CYCLE;, when( dvarBool(menu_scr_game_hardpoints) ) )
  CHOICE_DVARFLOATLIST_VIS( 5, "@OW_SCR_GAME_HARDPOINTS_MODE", menu_scr_game_hardpoints_mode, { "Kill streak" 0 "Total kills amount" 1 }, SETA_SCR_GAME_HARDPOINTS_MODE;, when( dvarBool(menu_scr_game_hardpoints) ) )
  CHOICE_DVARYESNO_VIS( 6, "@OW_SCR_ANNOUNCE_KILLSTREAK", menu_scr_announce_killstreak, SETA_SCR_ANNOUNCE_KILLSTREAK;, when( dvarBool(menu_scr_game_hardpoints) ) )
  
  CHOICE_DVARYESNO_VIS( 7, "@OW_SCR_HARDPOINT_ALLOW_UAV", menu_scr_hardpoint_allow_uav, SETA_SCR_HARDPOINT_ALLOW_UAV;, when( dvarBool(menu_scr_game_hardpoints) ) )
  CHOICE_DVARYESNO_VIS( 8, "@OW_SCR_GAME_FORCEUAV", menu_scr_game_forceuav, SETA_SCR_GAME_FORCEUAV;, when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_uav) ) )
  CHOICE_DVAREDIT_NUMERIC_VIS( 9, "@OW_SCR_HARDPOINT_UAV_STREAK", menu_scr_hardpoint_uav_streak, 2, SETA_SCR_HARDPOINT_UAV_STREAK;, when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_uav) ) )
  CHOICE_DVAREDIT_NUMERIC_VIS( 10, "@OW_SCR_UAV_VIEW_TIME", menu_scr_uav_view_time, 3, SETA_SCR_UAV_VIEW_TIME;, when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_uav) ) )
  CHOICE_DVARYESNO_VIS( 11, "@OW_SCR_ANNOUNCE_ENEMY_UAV_ONLINE", menu_scr_announce_enemy_uav_online, SETA_SCR_ANNOUNCE_ENEMY_UAV_ONLINE;, when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_uav) ) )
  CHOICE_DVARYESNO_VIS( 12, "@OW_SCR_UAV_SHOW_HARDPOINTS", menu_scr_uav_show_hardpoints, SETA_SCR_UAV_SHOW_HARDPOINTS;, when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_uav) ) )
  
  CHOICE_DVARYESNO_VIS( 13, "@OW_SCR_HARDPOINT_ALLOW_AIRSTRIKE", menu_scr_hardpoint_allow_airstrike, SETA_SCR_HARDPOINT_ALLOW_AIRSTRIKE;, when( dvarBool(menu_scr_game_hardpoints) ) )
  CHOICE_DVAREDIT_NUMERIC_VIS( 14, "@OW_SCR_HARDPOINT_AIRSTRIKE_STREAK", menu_scr_hardpoint_airstrike_streak, 2, SETA_SCR_HARDPOINT_AIRSTRIKE_STREAK;, when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_airstrike) ) )
  CHOICE_DVAREDIT_NUMERIC_VIS( 15, "@OW_SCR_AIRSTRIKE_HARDPOINT_INTERVAL", menu_scr_airstrike_hardpoint_interval, 3, SETA_SCR_AIRSTRIKE_HARDPOINT_INTERVAL;, when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_airstrike) ) )
  CHOICE_DVARYESNO_VIS( 16, "@OW_SCR_ANNOUNCE_ENEMY_AIRSTRIKE_INBOUND", menu_scr_announce_enemy_airstrike_inbound, SETA_SCR_ANNOUNCE_ENEMY_AIRSTRIKE_INBOUND;, when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_airstrike) ) )
  CHOICE_DVARYESNO_VIS( 17, "@OW_SCR_AIRSTRIKE_ADD_KILLS", menu_scr_airstrike_add_kills, SETA_SCR_AIRSTRIKE_ADD_KILLS;, when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_airstrike) ) )
  CHOICE_DVARYESNO_VIS( 18, "@OW_SCR_AIRSTRIKE_KILLS_TOWARD_STREAK", menu_scr_airstrike_kills_toward_streak, SETA_SCR_AIRSTRIKE_KILLS_TOWARD_STREAK;, when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_airstrike) ) )
  CHOICE_DVAREDIT_NUMERIC_VIS( 19, "@OW_SCR_AIRSTRIKE_DELAY", menu_scr_airstrike_delay, 2, SETA_SCR_AIRSTRIKE_DELAY;, when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_airstrike) ) )
  
  CHOICE_DVARYESNO_VIS( 20, "@OW_SCR_HARDPOINT_ALLOW_HELICOPTER", menu_scr_hardpoint_allow_helicopter, SETA_SCR_HARDPOINT_ALLOW_HELICOPTER;, when( dvarBool(menu_scr_game_hardpoints) ) )
  CHOICE_DVAREDIT_NUMERIC_VIS( 21, "@OW_SCR_HARDPOINT_HELICOPTER_STREAK", menu_scr_hardpoint_helicopter_streak, 2, SETA_SCR_HARDPOINT_HELICOPTER_STREAK;, when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_helicopter) ) )
  CHOICE_DVAREDIT_NUMERIC_VIS( 22, "@OW_SCR_HELI_HARDPOINT_INTERVAL", menu_scr_heli_hardpoint_interval, 3, SETA_SCR_HELI_HARDPOINT_INTERVAL;, when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_helicopter) ) )
  CHOICE_DVARYESNO_VIS( 23, "@OW_SCR_ANNOUNCE_ENEMY_HELI_INBOUND", menu_scr_announce_enemy_heli_inbound, SETA_SCR_ANNOUNCE_ENEMY_HELI_INBOUND;, when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_helicopter) ) )
  CHOICE_DVARYESNO_VIS( 24, "@OW_SCR_HELICOPTER_ADD_KILLS", menu_scr_helicopter_add_kills, SETA_SCR_HELICOPTER_ADD_KILLS;, when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_helicopter) ) )
  CHOICE_DVARYESNO_VIS( 25, "@OW_SCR_HELICOPTER_KILLS_TOWARD_STREAK", menu_scr_helicopter_kills_toward_streak, SETA_SCR_HELICOPTER_KILLS_TOWARD_STREAK;, when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_helicopter) ) )
  CHOICE_DVAREDIT_NUMERIC_VIS( 26, "@OW_SCR_HELICOPTER_DELAY", menu_scr_helicopter_delay, 2, SETA_SCR_HELICOPTER_DELAY;, when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_helicopter) ) )
  //CHOICE_DVAREDIT_NUMERIC_VIS( 27, "@OW_SCR_HELI_MAXHEALTH", menu_scr_heli_maxhealth, 4, SETA_SCR_HELI_MAXHEALTH;, when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_helicopter) ) )
  //CHOICE_DVARSLIDER_VIS( 28, "@OW_SCR_HELI_TARGET_RECOGNITION", menu_scr_heli_target_recognition, 0.95, 0, 1, SETA_SCR_HELI_TARGET_RECOGNITION;, when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_helicopter) ) )
  
  //CHOICE_DVARSTRINGLIST( 1, "Configure to gametype:", ct_serverCfgGametype, { "ALL" ""; "DM" "_dm"; "TDM" "_war"; "DOM" "_dom"; "SAB" "_sab"; "HQ" "_koth"; "SD" "_sd"; "GG" "_gg"; "SS" "_ss"; "OITC" "_oitc"; "GR" "_gr"; "CTF" "_ctf"; }, ; )
}