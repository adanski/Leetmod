#include "ui_mp/menustyle.inc"

#include "ui_mp/scriptmenus/server_healthsystem_setadvars.inc"

menuDef 
{
  name			"settings_quick_war_@MPUI_RULES_FRIENDLY_FIRE"
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
  
  CHOICE_MENU_TITLE("@OW_SERVER_HEALTHSYSTEM" )
  
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
  #define CHOICE_Y_COUNT			14

  CHOICE_DVAREDIT_NUMERIC( 1, "@OW_SCR_PLAYER_MAXHEALTH", menu_scr_player_maxhealth, 3, SETA_SCR_PLAYER_MAXHEALTH; )
  CHOICE_DVARFLOATLIST( 2, "@OW_SCR_HEALTHREGEN_METHOD", menu_scr_healthregen_method, { "No health reg." 0 "Stock method" 1 "Reg. progressively" 2 }, SETA_SCR_HEALTHREGEN_METHOD; )
  CHOICE_DVAREDIT_NUMERIC( 3, "@OW_SCR_PLAYER_HEALTHREGENTIME", menu_scr_player_healthregentime, 3, SETA_SCR_PLAYER_HEALTHREGENTIME; )
  CHOICE_DVAREDIT_NUMERIC( 4, "@OW_SCR_HEALTH_PAIN_SOUND", menu_scr_health_pain_sound, 2, SETA_SCR_HEALTH_PAIN_SOUND; )
  CHOICE_DVARYESNO( 5, "@OW_SCR_HEALTH_DEATH_SOUND", menu_scr_health_death_sound, SETA_SCR_HEALTH_DEATH_SOUND; )
  CHOICE_DVARYESNO( 6, "@OW_SCR_HEALTH_HURT_SOUND", menu_scr_health_hurt_sound, SETA_SCR_HEALTH_HURT_SOUND; )
  CHOICE_DVARYESNO( 7, "@OW_SCR_HEALTHSYSTEM_SHOW_HEALTHBAR", menu_scr_healthsystem_show_healthbar, SETA_SCR_HEALTHSYSTEM_SHOW_HEALTHBAR; )
  
  //CHOICE_DVAREDIT( 8, "@OW_SCR_HEALTHSYSTEM_BLEEDING_ENABLE", menu_scr_healthsystem_bleeding_enable, ; )
  CHOICE_DVARSLIDER( 8, "@OW_SCR_HEALTHSYSTEM_BLEEDING_ENABLE", menu_scr_healthsystem_bleeding_enable, 0, 0, 15, SETA_SCR_HEALTHSYSTEM_BLEEDING_ENABLE; )
  //CHOICE_DVAREDIT_NUMERIC( 9, "@OW_SCR_HEALTHSYSTEM_BLEEDING_START_PERCENTAGE", menu_scr_healthsystem_bleeding_start_percentage, 2, ; )
  CHOICE_DVARSLIDER_VIS( 9, "@OW_SCR_HEALTHSYSTEM_BLEEDING_START_PERCENTAGE", menu_scr_healthsystem_bleeding_start_percentage, 0, 0, 99, SETA_SCR_HEALTHSYSTEM_BLEEDING_START_PERCENTAGE;, when( dvarBool(menu_scr_healthsystem_bleeding_enable) ) )
  CHOICE_DVARYESNO_VIS( 10, "@OW_SCR_HEALTHSYSTEM_BLEEDING_ICON", menu_scr_healthsystem_bleeding_icon, SETA_SCR_HEALTHSYSTEM_BLEEDING_ICON;, when( dvarBool(menu_scr_healthsystem_bleeding_enable) ) )
  
  CHOICE_DVAREDIT_NUMERIC( 11, "@OW_SCR_HEALTHSYSTEM_BANDAGE_START", menu_scr_healthsystem_bandage_start, 1, SETA_SCR_HEALTHSYSTEM_BANDAGE_START; )
  CHOICE_DVAREDIT_NUMERIC( 12, "@OW_SCR_HEALTHSYSTEM_BANDAGE_MAX", menu_scr_healthsystem_bandage_max, 1, SETA_SCR_HEALTHSYSTEM_BANDAGE_MAX; )
  CHOICE_DVARYESNO( 13, "@OW_SCR_HEALTHSYSTEM_BANDAGE_SELF", menu_scr_healthsystem_bandage_self, SETA_SCR_HEALTHSYSTEM_BANDAGE_SELF; )
  CHOICE_DVARYESNO( 14, "@OW_SCR_HEALTHSYSTEM_BANDAGE_TIME", menu_scr_healthsystem_bandage_time, SETA_SCR_HEALTHSYSTEM_BANDAGE_TIME; )
  
  #undef	CHOICE_SIZE_X
  #define CHOICE_SIZE_X		200
  
  #undef CHOICE_X_START
  #define CHOICE_X_START 25
  
  
  CHOICE_DVARYESNO( 15, "@OW_SCR_HEALTHSYSTEM_MEDIC_ENABLE", menu_scr_healthsystem_medic_enable, SETA_SCR_HEALTHSYSTEM_MEDIC_ENABLE; )
  CHOICE_DVARYESNO( 16, "@OW_SCR_HEALTHSYSTEM_MEDIC_BANDAGING", menu_scr_healthsystem_medic_bandaging, SETA_SCR_HEALTHSYSTEM_MEDIC_BANDAGING; )
  CHOICE_DVARYESNO( 17, "@OW_SCR_HEALTHSYSTEM_MEDIC_HEALING", menu_scr_healthsystem_medic_healing, SETA_SCR_HEALTHSYSTEM_MEDIC_HEALING; )
  CHOICE_DVARYESNO( 18, "@OW_SCR_HEALTHSYSTEM_MEDIC_HEALING_SELF", menu_scr_healthsystem_medic_healing_self, SETA_SCR_HEALTHSYSTEM_MEDIC_HEALING_SELF; )
  CHOICE_DVAREDIT_NUMERIC( 19, "@OW_SCR_HEALTHSYSTEM_MEDIC_HEALING_HEALTH", menu_scr_healthsystem_medic_healing_health, 3, SETA_SCR_HEALTHSYSTEM_MEDIC_HEALING_HEALTH; )
  CHOICE_DVAREDIT_NUMERIC( 20, "@OW_SCR_HEALTHSYSTEM_MEDIC_HEALING_TIME", menu_scr_healthsystem_medic_healing_time, 2, SETA_SCR_HEALTHSYSTEM_MEDIC_HEALING_TIME; )
  CHOICE_DVARYESNO( 21, "@OW_SCR_HEALTHSYSTEM_MEDIC_TAKE_BANDAGE", menu_scr_healthsystem_medic_take_bandage, SETA_SCR_HEALTHSYSTEM_MEDIC_TAKE_BANDAGE; )
  CHOICE_DVARYESNO( 22, "@OW_SCR_HEALTHSYSTEM_HEALING_ICON", menu_scr_healthsystem_healing_icon, SETA_SCR_HEALTHSYSTEM_HEALING_ICON; )
  
  CHOICE_DVARFLOATLIST( 23, "@OW_SCR_HEALTHSYSTEM_HEALTHPACKS_ENABLE", menu_scr_healthsystem_healthpacks_enable, { "Disabled" 0 "Enabled" 1 "Enabled (glow)" 2 }, SETA_SCR_HEALTHSYSTEM_HEALTHPACKS_ENABLE; )
  CHOICE_DVAREDIT_NUMERIC_VIS( 24, "@OW_SCR_HEALTHSYSTEM_HEALTHPACKS_TIMEOUT", menu_scr_healthsystem_healthpacks_timeout, 3, SETA_SCR_HEALTHSYSTEM_HEALTHPACKS_TIMEOUT;, when( dvarBool(menu_scr_healthsystem_healthpacks_enable) ) )
  CHOICE_DVAREDIT_NUMERIC_VIS( 25, "@OW_SCR_HEALTHSYSTEM_HEALTHPACKS_HEALTH", menu_scr_healthsystem_healthpacks_health, 3, SETA_SCR_HEALTHSYSTEM_HEALTHPACKS_HEALTH;, when( dvarBool(menu_scr_healthsystem_healthpacks_enable) ) )
  CHOICE_DVARYESNO_VIS( 26, "@OW_SCR_HEALTHSYSTEM_HEALTHPACKS_RANDOM_HEALTH", menu_scr_healthsystem_healthpacks_random_health, SETA_SCR_HEALTHSYSTEM_HEALTHPACKS_RANDOM_HEALTH;, when( dvarBool(menu_scr_healthsystem_healthpacks_enable) ) )
  
  CHOICE_DVARYESNO( 27, "@OW_SCR_BARREL_DAMAGE_ENABLE", menu_scr_barrel_damage_enable, SETA_SCR_BARREL_DAMAGE_ENABLE; )
  CHOICE_DVARYESNO( 28, "@OW_SCR_VEHICLE_DAMAGE_ENABLE", menu_scr_vehicle_damage_enable, SETA_SCR_VEHICLE_DAMAGE_ENABLE; )
  
  //CHOICE_DVARSTRINGLIST( 1, "Configure to gametype:", ct_serverCfgGametype, { "ALL" ""; "DM" "_dm"; "TDM" "_war"; "DOM" "_dom"; "SAB" "_sab"; "HQ" "_koth"; "SD" "_sd"; "GG" "_gg"; "SS" "_ss"; "OITC" "_oitc"; "GR" "_gr"; "CTF" "_ctf"; }, ; )
}