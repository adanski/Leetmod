#include "ui_mp/menustyle.inc"

#include "ui_mp/scriptmenus/server_scores_setadvars.inc"

menuDef 
{
  name			"settings_quick_koth_@MPUI_RULES_SPECTATING"
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
  
  CHOICE_MENU_TITLE("@OW_SERVER_SCORES" )
  
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

  
  CHOICE_DVARFLOATLIST( 1, "@OW_SCR_ENABLE_SCORESYSTEM", scr_enable_scoresystem, { "Disabled (use cod4 default score values)" 0 "Enabled (define score values bellow)" 1 }, SETA_SCR_ENABLE_SCORESYSTEM; )
  CHOICE_DVARYESNO( 2, "@OW_SCR_SCORE_TK_AFFECTS_TEAMSCORE", scr_score_tk_affects_teamscore, SETA_SCR_SCORE_TK_AFFECTS_TEAMSCORE; )
  
  CHOICE_DVAREDIT_NUMERIC( 3, "@OW_SCR_SCORE_STANDARD_KILL", scr_score_standard_kill, 2, SETA_SCR_SCORE_STANDARD_KILL; )
  CHOICE_DVAREDIT_NUMERIC( 4, "@OW_SCR_SCORE_HEADSHOT_KILL", scr_score_headshot_kill, 2, SETA_SCR_SCORE_HEADSHOT_KILL; )
  CHOICE_DVAREDIT_NUMERIC( 5, "@OW_SCR_SCORE_MELEE_KILL", scr_score_melee_kill, 2, SETA_SCR_SCORE_MELEE_KILL; )
  CHOICE_DVAREDIT_NUMERIC( 6, "@OW_SCR_SCORE_GRENADE_KILL", scr_score_grenade_kill, 2, SETA_SCR_SCORE_GRENADE_KILL; )
  CHOICE_DVAREDIT_NUMERIC( 7, "@OW_SCR_SCORE_C4_KILL", scr_score_c4_kill, 2, SETA_SCR_SCORE_C4_KILL; )
  CHOICE_DVAREDIT_NUMERIC( 8, "@OW_SCR_SCORE_CLAYMORE_KILL", scr_score_claymore_kill, 2, SETA_SCR_SCORE_CLAYMORE_KILL; )
  CHOICE_DVAREDIT_NUMERIC( 9, "@OW_SCR_SCORE_RPG_KILL", scr_score_rpg_kill, 2, SETA_SCR_SCORE_RPG_KILL; )
  CHOICE_DVAREDIT_NUMERIC( 10, "@OW_SCR_SCORE_GRENADE_LAUNCHER_KILL", scr_score_grenade_launcher_kill, 2, SETA_SCR_SCORE_GRENADE_LAUNCHER_KILL; )
  CHOICE_DVAREDIT_NUMERIC( 11, "@OW_SCR_SCORE_AIRSTRIKE_KILL", scr_score_airstrike_kill, 2, SETA_SCR_SCORE_AIRSTRIKE_KILL; )
  CHOICE_DVAREDIT_NUMERIC( 12, "@OW_SCR_SCORE_HELICOPTER_KILL", scr_score_helicopter_kill, 2, SETA_SCR_SCORE_HELICOPTER_KILL; )
  CHOICE_DVAREDIT_NUMERIC( 13, "@OW_SCR_SCORE_VEHICLE_EXPLOSION_KILL", scr_score_vehicle_explosion_kill, 2, SETA_SCR_SCORE_VEHICLE_EXPLOSION_KILL; )
  CHOICE_DVAREDIT_NUMERIC( 14, "@OW_SCR_SCORE_BARREL_EXPLOSION_KILL", scr_score_barrel_explosion_kill, 2, SETA_SCR_SCORE_BARREL_EXPLOSION_KILL; )
  
  CHOICE_DVAREDIT_NUMERIC( 15, "@OW_SCR_SCORE_ASSIST_KILL", scr_score_assist_kill, 2, SETA_SCR_SCORE_ASSIST_KILL; )
  CHOICE_DVAREDIT_NUMERIC( 16, "@OW_SCR_SCORE_ASSIST_25_KILL", scr_score_assist_25_kill, 2, SETA_SCR_SCORE_ASSIST_25_KILL; )
  CHOICE_DVAREDIT_NUMERIC( 17, "@OW_SCR_SCORE_ASSIST_50_KILL", scr_score_assist_50_kill, 2, SETA_SCR_SCORE_ASSIST_50_KILL; )
  CHOICE_DVAREDIT_NUMERIC( 18, "@OW_SCR_SCORE_ASSIST_75_KILL", scr_score_assist_75_kill, 2, SETA_SCR_SCORE_ASSIST_75_KILL; )
  
  CHOICE_DVAREDIT_VIS( 19, "@OW_SCR_SCORE_PLAYER_DEATH", scr_score_player_death, 3, 3, SETA_SCR_SCORE_PLAYER_DEATH, 1 )
  CHOICE_DVAREDIT_VIS( 20, "@OW_SCR_SCORE_PLAYER_SUICIDE", scr_score_player_suicide, 3, 3, SETA_SCR_SCORE_PLAYER_SUICIDE, 1 )
  CHOICE_DVAREDIT_VIS( 21, "@OW_SCR_SCR_SCORE_PLAYER_TEAMKILL", scr_score_player_teamkill, 3, 3, SETA_SCR_SCORE_PLAYER_TEAMKILL, 1 )
  
  CHOICE_DVAREDIT_NUMERIC( 22, "@OW_SCR_SCORE_HARDPOINT_USED", scr_score_hardpoint_used, 2, SETA_SCR_SCORE_HARDPOINT_USED; )
  CHOICE_DVAREDIT_NUMERIC( 23, "@OW_SCR_SCORE_SHOT_DOWN_HELICOPTER", scr_score_shot_down_helicopter, 2, SETA_SCR_SCORE_SHOT_DOWN_HELICOPTER; )
  CHOICE_DVAREDIT_NUMERIC( 24, "@OW_SCR_SCORE_CAPTURE_OBJECTIVE", scr_score_capture_objective, 2, SETA_SCR_SCORE_CAPTURE_OBJECTIVE; )
  CHOICE_DVAREDIT_NUMERIC( 25, "@OW_SCR_SCORE_TAKE_OBJECTIVE", scr_score_take_objective, 2, SETA_SCR_SCORE_TAKE_OBJECTIVE; )
  CHOICE_DVAREDIT_NUMERIC( 26, "@OW_SCR_SCORE_RETURN_OBJECTIVE", scr_score_return_objective, 2, SETA_SCR_SCORE_RETURN_OBJECTIVE; )
  CHOICE_DVAREDIT_NUMERIC( 27, "@OW_SCR_SCORE_DEFEND_OBJECTIVE", scr_score_defend_objective, 2, SETA_SCR_SCORE_DEFEND_OBJECTIVE; )
  CHOICE_DVAREDIT_NUMERIC( 28, "@OW_SCR_SCORE_HOLDING_OBJECTIVE", scr_score_holding_objective, 2, SETA_SCR_SCORE_HOLDING_OBJECTIVE; )
  CHOICE_DVAREDIT_NUMERIC( 29, "@OW_SCR_SCORE_KILL_OBJECTIVE_CARRIER", scr_score_kill_objective_carrier, 2, SETA_SCR_SCORE_KILL_OBJECTIVE_CARRIER; )
  CHOICE_DVAREDIT_NUMERIC( 30, "@OW_SCR_SCORE_ASSAULT_OBJECTIVE", scr_score_assault_objective, 2, SETA_SCR_SCORE_ASSAULT_OBJECTIVE; )
  CHOICE_DVAREDIT_NUMERIC( 31, "@OW_SCR_SCORE_PLANT_BOMB", scr_score_plant_bomb, 2, SETA_SCR_SCORE_PLANT_BOMB; )
  CHOICE_DVAREDIT_NUMERIC( 32, "@OW_SCR_SCORE_DEFUSE_BOMB", scr_score_defuse_bomb, 2, SETA_SCR_SCORE_DEFUSE_BOMB; )

  //CHOICE_DVARSTRINGLIST( 1, "Configure to gametype:", ct_serverCfgGametype, { "ALL" ""; "DM" "_dm"; "TDM" "_war"; "DOM" "_dom"; "SAB" "_sab"; "HQ" "_koth"; "SD" "_sd"; "GG" "_gg"; "SS" "_ss"; "OITC" "_oitc"; "GR" "_gr"; "CTF" "_ctf"; }, ; )
}