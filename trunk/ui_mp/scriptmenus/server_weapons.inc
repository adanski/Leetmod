#include "ui_mp/menustyle.inc"

#include "ui_mp/scriptmenus/server_weapons_setadvars.inc"

menuDef 
{
  name			"settings_quick_dom_@MPUI_RULES_SCORE_LIMIT"
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
  
  CHOICE_MENU_TITLE("@OW_SERVER_WEAPONS" )
  
  #undef TEXTSIZE_BUTTON_PC
  #define TEXTSIZE_BUTTON_PC	0.33

  #undef CHOICE_SIZE_Y
  #define CHOICE_SIZE_Y 		20

  #undef	CHOICE_SIZE_X
  #define CHOICE_SIZE_X		150

  #undef CHOICE_X_SPACING
  #define CHOICE_X_SPACING 300
  
  #undef CHOICE_X_START
  #define CHOICE_X_START 40

  #undef CHOICE_Y_START
  #define CHOICE_Y_START 34
  
  #undef CHOICE_Y_COUNT
  #define CHOICE_Y_COUNT			17
  
  CHOICE_DVARYESNO_VIS( 1, "@OW_SCR_GRENADE_ALLOW_COOKING", menu_scr_grenade_allow_cooking, SETA_SCR_GRENADE_ALLOW_COOKING;, 1 )
  CHOICE_DVARYESNO_VIS( 2, "@OW_SCR_BULLET_PENETRATION_ENABLED", menu_scr_bullet_penetration_enabled, SETA_SCR_BULLET_PENETRATION_ENABLED;, 1)
  CHOICE_DVAREDIT_NUMERIC_VIS( 3, "@OW_SCR_CONCUSSION_GRENADES_BASE_TIME", menu_scr_concussion_grenades_base_time, 2, SETA_SCR_CONCUSSION_GRENADES_BASE_TIME;, 1 )
  
  CHOICE_DVARYESNO_VIS( 4, "@OW_SCR_DELETEEXPLOSIVESONSPAWN", menu_scr_deleteexplosivesonspawn, SETA_SCR_DELETEEXPLOSIVESONSPAWN;, 1)
  CHOICE_DVARYESNO_VIS( 5, "@OW_SCR_DELETEEXPLOSIVESONDEATH", menu_scr_deleteexplosivesondeath, SETA_SCR_DELETEEXPLOSIVESONDEATH;, 1)
  
  CHOICE_DVARYESNO_VIS( 6, "@OW_SCR_OBJECTIVE_SAFEZONE_ENABLE", menu_scr_objective_safezone_enable, SETA_SCR_OBJECTIVE_SAFEZONE_ENABLE;, 1)
  CHOICE_DVAREDIT_NUMERIC_VIS( 7, "@OW_SCR_OBJECTIVE_SAFEZONE_RADIUS", menu_scr_objective_safezone_radius, 3, SETA_SCR_OBJECTIVE_SAFEZONE_RADIUS;, when( dvarBool(menu_scr_objective_safezone_enable) == 1 ) )
  
  CHOICE_DVAREDIT_NUMERIC_VIS( 8, "@OW_SCR_DELAY_FRAG_GRENADES", menu_scr_delay_frag_grenades, 2, SETA_SCR_DELAY_FRAG_GRENADES;, 1 )
  CHOICE_DVAREDIT_NUMERIC_VIS( 9, "@OW_SCR_DELAY_GRENADE_LAUNCHERS", menu_scr_delay_grenade_launchers, 2, SETA_SCR_DELAY_GRENADE_LAUNCHERS;, 1 )
  CHOICE_DVAREDIT_NUMERIC_VIS( 10, "@OW_SCR_DELAY_SMOKE_GRENADES", menu_scr_delay_smoke_grenades, 2, SETA_SCR_DELAY_SMOKE_GRENADES;, 1 )
  CHOICE_DVAREDIT_NUMERIC_VIS( 11, "@OW_SCR_DELAY_FLASH_GRENADES", menu_scr_delay_flash_grenades, 2, SETA_SCR_DELAY_FLASH_GRENADES;, 1 )
  CHOICE_DVAREDIT_NUMERIC_VIS( 12, "@OW_SCR_DELAY_CONCUSSION_GRENADES", menu_scr_delay_concussion_grenades, 2, SETA_SCR_DELAY_CONCUSSION_GRENADES;, 1 )
  CHOICE_DVAREDIT_NUMERIC_VIS( 13, "@OW_SCR_DELAY_RPGS", menu_scr_delay_rpgs, 2, SETA_SCR_DELAY_RPGS;, 1 )
  CHOICE_DVAREDIT_NUMERIC_VIS( 14, "@OW_SCR_DELAY_C4S", menu_scr_delay_c4s, 2, SETA_SCR_DELAY_C4S;, 1 )
  CHOICE_DVAREDIT_NUMERIC_VIS( 15, "@OW_SCR_DELAY_CLAYMORES", menu_scr_delay_claymores, 2, SETA_SCR_DELAY_CLAYMORES;, 1 )
  CHOICE_DVARYESNO_VIS( 16, "@OW_SCR_DELAY_ONLY_ROUND_START", menu_scr_delay_only_round_start, SETA_SCR_DELAY_ONLY_ROUND_START;, 1)
  CHOICE_DVARYESNO_VIS( 17, "@OW_SCR_DELAY_SOUND_ENABLE", menu_scr_delay_sound_enable, SETA_SCR_DELAY_SOUND_ENABLE;, 1)
  
  CHOICE_DVARYESNO_VIS( 18, "@OW_SCR_WEAPONJAMS_ENABLE", menu_scr_weaponjams_enable, SETA_SCR_WEAPONJAMS_ENABLE;, 1 )
  CHOICE_DVAREDIT_NUMERIC_VIS( 19, "@OW_SCR_WEAPONJAMS_PROBABILITY", menu_scr_weaponjams_probability, 4, SETA_SCR_WEAPONJAMS_PROBABILITY;, when( dvarBool(menu_scr_weaponjams_enable) ) )
  CHOICE_DVAREDIT_NUMERIC_VIS( 20, "@OW_SCR_WEAPONJAMS_GAP_TIME", menu_scr_weaponjams_gap_time, 4, SETA_SCR_WEAPONJAMS_GAP_TIME;, when( dvarBool(menu_scr_weaponjams_enable) ) )
  
  CHOICE_DVARYESNO_VIS( 21, "@OW_SCR_SNIPERZOOM_ENABLE", menu_scr_sniperzoom_enable, SETA_SCR_SNIPERZOOM_ENABLE;, 1)
  CHOICE_DVAREDIT_NUMERIC_VIS( 22, "@OW_SCR_SNIPERZOOM_LOWER_LEVELS", menu_scr_sniperzoom_lower_levels, 4, SETA_SCR_SNIPERZOOM_LOWER_LEVELS;, when( dvarBool(menu_scr_sniperzoom_enable) ) )
  CHOICE_DVAREDIT_NUMERIC_VIS( 23, "@OW_SCR_SNIPERZOOM_UPPER_LEVELS", menu_scr_sniperzoom_upper_levels, 4, SETA_SCR_SNIPERZOOM_UPPER_LEVELS;, when( dvarBool(menu_scr_sniperzoom_enable) ) )
  CHOICE_DVARYESNO_VIS( 24, "@OW_SCR_RANGEFINDER_ENABLE", menu_scr_rangefinder_enable, SETA_SCR_RANGEFINDER_ENABLE;, when( dvarBool(menu_scr_sniperzoom_enable) ) )
  
  #undef CHOICE_Y_COUNT
  #define CHOICE_Y_COUNT			100
  
  #undef CHOICE_Y_START
  #define CHOICE_Y_START -2172
  
  #undef CHOICE_X_START
  #define CHOICE_X_START 190
  
  #undef CHOICE_SIZE_X
  #define CHOICE_SIZE_X 160
  
  #undef TEXTSIZE_BUTTON_PC
  #define TEXTSIZE_BUTTON_PC	0.38
  
  CHOICE_DVARSTRINGLIST_VIS( 100, "@OW_MENU_CONFIGURE_TO_GAMETYPE", menu_cfg_gt, { "Default value when not specifically defined"; "_def"; "@OW_ASSASSINATION"; "ass"; "@OW_BEHIND_ENEMY_LINES"; "bel"; "@OW_CAPTURE_AND_HOLD"; "ch"; "@MPUI_CAPTURE_THE_FLAG"; "ctf"; "@MPUI_DOMINATION"; "dom"; "@MPUI_DEATHMATCH"; "dm"; "@OW_FREEZETAG"; "ftag"; "@OW_GREED"; "gr"; "@OW_GUNGAME"; "gg"; "@MPUI_HEADQUARTERS"; "koth"; "@OW_ONEINTHECHAMBER"; "oitc"; "@OW_RETRIEVAL"; "re"; "@MPUI_SABOTAGE"; "sab"; "@MPUI_SEARCH_AND_DESTROY_CLASSIC"; "sd"; "@OW_SHARPSHOOTER"; "ss"; "@MPUI_WAR"; "war"; "@OW_TEAM_GREED"; "tgr"; }, FILLMENUDVARS;, 1 )
}