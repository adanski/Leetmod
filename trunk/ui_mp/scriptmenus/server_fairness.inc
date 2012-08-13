#include "ui_mp/menustyle.inc"

#include "ui_mp/scriptmenus/server_fairness_setadvars.inc"

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

  
  CHOICE_DVARFLOATLIST( 1, "@OW_SCR_FORCE_AUTOASSIGN", scr_force_autoassign, { "Disabled" 0 "Enabled (to everyone)" 1 "Enabled (not for clan members)" 2 }, SETA_SCR_FORCE_AUTOASSIGN; )
  CHOICE_DVAREDIT( 2, "@OW_SCR_FORCE_AUTOASSIGN_CLAN_TAGS", scr_force_autoassign_clan_tags, SETA_SCR_FORCE_AUTOASSIGN_CLAN_TAGS; )
  CHOICE_DVARYESNO( 3, "@OW_SCR_SWITCH_TEAMS_AT_HALFTIME", scr_switch_teams_at_halftime, SETA_SCR_SWITCH_TEAMS_AT_HALFTIME; )
  
  CHOICE_DVARFLOATLIST( 4, "@OW_SCR_TEAMBALANCE", scr_teambalance, { "Disabled" 0 "Enabled (clan members too if everyone is one)" 1 "Enabled (not for clan members)" 2 }, SETA_SCR_TEAMBALANCE; )
  CHOICE_DVARYESNO( 5, "@OW_SCR_TEAMBALANCE_SHOW_MESSAGE", scr_teambalance_show_message, SETA_SCR_TEAMBALANCE_SHOW_MESSAGE; )
  CHOICE_DVAREDIT_NUMERIC( 6, "@OW_SCR_TEAMBALANCE_CHECK_INTERVAL", scr_teambalance_check_interval, 3, SETA_SCR_TEAMBALANCE_CHECK_INTERVAL; )
  CHOICE_DVAREDIT_NUMERIC( 7, "@OW_SCR_TEAMBALANCE_DELAY", scr_teambalance_delay, 2, SETA_SCR_TEAMBALANCE_DELAY; )
  CHOICE_DVAREDIT( 8, "@OW_SCR_TEAMBALANCE_PROTECTED_CLAN_TAGS", scr_teambalance_protected_clan_tags, SETA_SCR_TEAMBALANCE_PROTECTED_CLAN_TAGS; )
  
  CHOICE_DVARFLOATLIST( 9, "@OW_SCR_TEAM_FFTYPE", scr_team_fftype, { "Disabled" 0 "Enabled (victim receives damage)" 1 "Reflective (attacker receives damage)" 2 "Shared (50% attacker 50% victim" 3 }, SETA_SCR_TEAM_FFTYPE; )
  CHOICE_DVARYESNO( 10, "@OW_SCR_TEAM_TEAMKILLPOINTLOSS", scr_team_teamkillpointloss, SETA_SCR_TEAM_TEAMKILLPOINTLOSS; )
  CHOICE_DVAREDIT_NUMERIC( 11, "@OW_SCR_TEAM_TEAMKILLSPAWNDELAY", scr_team_teamkillspawndelay, 2, SETA_SCR_TEAM_TEAMKILLSPAWNDELAY; )
  CHOICE_DVARYESNO( 12, "@OW_SCR_GAME_DEATHPOINTLOSS", scr_game_deathpointloss, SETA_SCR_GAME_DEATHPOINTLOSS; )
  CHOICE_DVARYESNO( 13, "@OW_SCR_GAME_SUICIDEPOINTLOSS", scr_game_suicidepointloss, SETA_SCR_GAME_SUICIDEPOINTLOSS; )
  CHOICE_DVAREDIT_NUMERIC( 14, "@OW_SCR_PLAYER_SUICIDESPAWNDELAY", scr_player_suicidespawndelay, 2, SETA_SCR_PLAYER_SUICIDESPAWNDELAY; )
  
  CHOICE_DVAREDIT_NUMERIC( 15, "@OW_SCR_TK_LIMIT", scr_tk_limit, 2, SETA_SCR_TK_LIMIT; )
  CHOICE_DVARYESNO( 16, "@OW_SCR_TK_EXPLOSIVE_COUNTASONE", scr_tk_explosive_countasone, SETA_SCR_TK_EXPLOSIVE_COUNTASONE; )
  CHOICE_DVARFLOATLIST( 17, "@OW_SCR_TK_PUNISHMENT", scr_tk_punishment, { "Warning message" 0 "Disable player weapons" 1 "Lock player in its position" 2 "Kill player on the spot" 3 "Kick player from the server" 4 }, SETA_SCR_TK_PUNISHMENT; )
  CHOICE_DVAREDIT_NUMERIC( 18, "@OW_SCR_TK_PUNISHMENT_TIME", scr_tk_punishment_time, 2, SETA_SCR_TK_PUNISHMENT_TIME; )
  
  CHOICE_DVARYESNO( 19, "@OW_SCR_SPAWN_PROTECTION_ENABLE", scr_spawn_protection_enable, SETA_SCR_SPAWN_PROTECTION_ENABLE; )
  CHOICE_DVAREDIT_VIS( 20, "@OW_SCR_SPAWN_PROTECTION_TIME", scr_spawn_protection_time, 4, 4, SETA_SCR_SPAWN_PROTECTION_TIME;, 1 )
  CHOICE_DVARYESNO( 21, "@OW_SCR_SPAWN_PROTECTION_INVISIBLE", scr_spawn_protection_invisible, SETA_SCR_SPAWN_PROTECTION_INVISIBLE; )
  CHOICE_DVARYESNO( 22, "@OW_SCR_SPAWN_PROTECTION_HITICON", scr_spawn_protection_hiticon, SETA_SCR_SPAWN_PROTECTION_HITICON; )
  CHOICE_DVAREDIT_NUMERIC( 23, "@OW_SCR_SPAWN_PROTECTION_MAXDISTANCE", scr_spawn_protection_maxdistance, 4, SETA_SCR_SPAWN_PROTECTION_MAXDISTANCE; )
  CHOICE_DVAREDIT_NUMERIC( 24, "@OW_SCR_SPAWN_PROTECTION_PUNISHMENT_TIME", scr_spawn_protection_punishment_time, 2, SETA_SCR_SPAWN_PROTECTION_PUNISHMENT_TIME; )
  
  CHOICE_DVARYESNO( 25, "@OW_SCR_ANTI_CAMPING_ENABLE", scr_anti_camping_enable, SETA_SCR_ANTI_CAMPING_ENABLE; )
  CHOICE_DVARFLOATLIST( 26, "@OW_SCR_ANTI_CAMPING_SHOW", scr_anti_camping_show, { "Show only icon" 0 "Show only message" 1 "Show both" 2 }, SETA_SCR_ANTI_CAMPING_SHOW; )
  CHOICE_DVAREDIT( 27, "@OW_SCR_ANTI_CAMPING_MESSAGE", scr_anti_camping_message, SETA_SCR_ANTI_CAMPING_MESSAGE; )
  CHOICE_DVAREDIT_NUMERIC( 28, "@OW_SCR_ANTI_CAMPING_DISTANCE", scr_anti_camping_distance, 3, SETA_SCR_ANTI_CAMPING_DISTANCE; )
  CHOICE_DVAREDIT_NUMERIC( 29, "@OW_SCR_ANTI_CAMPING_TIME", scr_anti_camping_time, 3, SETA_SCR_ANTI_CAMPING_TIME; )
  
  CHOICE_DVARFLOATLIST( 30, "@OW_SCR_ANTI_BUNNY_HOPPING_ENABLE", scr_anti_bunny_hopping_enable, { "Disabled" 0 "Lower weapon when jumping" 1 "Lower weapon only after 2 consecutive jumps" 2 "Shift aim when jumping" 3 "Shift aim only after 2 consecutive jumps" 4 }, SETA_SCR_ANTI_BUNNY_HOPPING_ENABLE; )
  CHOICE_DVARYESNO( 31, "@OW_SCR_ANTI_DOLPHIN_DIVE_ENABLE", scr_anti_dolphin_dive_enable, SETA_SCR_ANTI_DOLPHIN_DIVE_ENABLE; )
  
  //CHOICE_DVARSTRINGLIST( 1, "Configure to gametype:", ct_serverCfgGametype, { "ALL" ""; "DM" "_dm"; "TDM" "_war"; "DOM" "_dom"; "SAB" "_sab"; "HQ" "_koth"; "SD" "_sd"; "GG" "_gg"; "SS" "_ss"; "OITC" "_oitc"; "GR" "_gr"; "CTF" "_ctf"; }, ; )
}