#include "ui_mp/menustyle_forcascadeinclude.inc"

#define FILLMENUDVARS     exec "exec menudvars/mapdesign/l/_def.cfg"\
    execOnDvarStringValue menu_cfg_gt ass "exec menudvars/mapdesign/l/ass.cfg"\
    execOnDvarStringValue menu_cfg_gt bel "exec menudvars/mapdesign/l/bel.cfg"\
    execOnDvarStringValue menu_cfg_gt ch "exec menudvars/mapdesign/l/ch.cfg"\
    execOnDvarStringValue menu_cfg_gt ctf "exec menudvars/mapdesign/l/ctf.cfg"\
    execOnDvarStringValue menu_cfg_gt dm "exec menudvars/mapdesign/l/dm.cfg"\
    execOnDvarStringValue menu_cfg_gt dom "exec menudvars/mapdesign/l/dom.cfg"\
    execOnDvarStringValue menu_cfg_gt ftag "exec menudvars/mapdesign/l/ftag.cfg"\
    execOnDvarStringValue menu_cfg_gt gg "exec menudvars/mapdesign/l/gg.cfg"\
    execOnDvarStringValue menu_cfg_gt gr "exec menudvars/mapdesign/l/gr.cfg"\
    execOnDvarStringValue menu_cfg_gt koth "exec menudvars/mapdesign/l/koth.cfg"\
    execOnDvarStringValue menu_cfg_gt oitc "exec menudvars/mapdesign/l/oitc.cfg"\
    execOnDvarStringValue menu_cfg_gt re "exec menudvars/mapdesign/l/re.cfg"\
    execOnDvarStringValue menu_cfg_gt sab "exec menudvars/mapdesign/l/sab.cfg"\
    execOnDvarStringValue menu_cfg_gt sd "exec menudvars/mapdesign/l/sd.cfg"\
    execOnDvarStringValue menu_cfg_gt ss "exec menudvars/mapdesign/l/ss.cfg"\
    execOnDvarStringValue menu_cfg_gt tgr "exec menudvars/mapdesign/l/tgr.cfg"\
    execOnDvarStringValue menu_cfg_gt war "exec menudvars/mapdesign/l/war.cfg"
    
#define SAVEMENUDVARS     exec "exec menudvars/mapdesign/s/_def.cfg"\
    execOnDvarStringValue menu_cfg_gt ass "exec menudvars/mapdesign/s/ass.cfg"\
    execOnDvarStringValue menu_cfg_gt bel "exec menudvars/mapdesign/s/bel.cfg"\
    execOnDvarStringValue menu_cfg_gt ch "exec menudvars/mapdesign/s/ch.cfg"\
    execOnDvarStringValue menu_cfg_gt ctf "exec menudvars/mapdesign/s/ctf.cfg"\
    execOnDvarStringValue menu_cfg_gt dm "exec menudvars/mapdesign/s/dm.cfg"\
    execOnDvarStringValue menu_cfg_gt dom "exec menudvars/mapdesign/s/dom.cfg"\
    execOnDvarStringValue menu_cfg_gt ftag "exec menudvars/mapdesign/s/ftag.cfg"\
    execOnDvarStringValue menu_cfg_gt gg "exec menudvars/mapdesign/s/gg.cfg"\
    execOnDvarStringValue menu_cfg_gt gr "exec menudvars/mapdesign/s/gr.cfg"\
    execOnDvarStringValue menu_cfg_gt koth "exec menudvars/mapdesign/s/koth.cfg"\
    execOnDvarStringValue menu_cfg_gt oitc "exec menudvars/mapdesign/s/oitc.cfg"\
    execOnDvarStringValue menu_cfg_gt re "exec menudvars/mapdesign/s/re.cfg"\
    execOnDvarStringValue menu_cfg_gt sab "exec menudvars/mapdesign/s/sab.cfg"\
    execOnDvarStringValue menu_cfg_gt sd "exec menudvars/mapdesign/s/sd.cfg"\
    execOnDvarStringValue menu_cfg_gt ss "exec menudvars/mapdesign/s/ss.cfg"\
    execOnDvarStringValue menu_cfg_gt tgr "exec menudvars/mapdesign/s/tgr.cfg"\
    execOnDvarStringValue menu_cfg_gt war "exec menudvars/mapdesign/s/war.cfg"

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
  #include "ui/blurredbg.inc"
  #include "ui_mp/navcontrols.inc"
  
  CHOICE_MENU_TITLE("@OW_SERVER_MAPDESIGN" )
  
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
  
  CHOICE_DVARSTRINGLIST_VIS( 1, "Configure to gametype:", menu_cfg_gt, { "Default value when not specifically defined"; "_def"; "@OW_ASSASSINATION"; "ass"; "@OW_BEHIND_ENEMY_LINES"; "bel"; "@OW_CAPTURE_AND_HOLD"; "ch"; "@MPUI_CAPTURE_THE_FLAG"; "ctf"; "@MPUI_DOMINATION"; "dom"; "@MPUI_DEATHMATCH"; "dm"; "@OW_FREEZETAG"; "ftag"; "@OW_GREED"; "gr"; "@OW_GUNGAME"; "gg"; "@MPUI_HEADQUARTERS"; "koth"; "@OW_ONEINTHECHAMBER"; "oitc"; "@OW_RETRIEVAL"; "re"; "@MPUI_SABOTAGE"; "sab"; "@MPUI_SEARCH_AND_DESTROY_CLASSIC"; "sd"; "@OW_SHARPSHOOTER"; "ss"; "@MPUI_WAR"; "war"; "@OW_TEAM_GREED"; "tgr"; }, FILLMENUDVARS;, 1 )
  
  CHOICE_DVARYESNO( 2, "@OW_SCR_MAP_SPECIAL_FX_ENABLE", menu_scr_map_special_fx_enable, ; )
  CHOICE_DVARYESNO( 3, "@OW_SCR_MAP_SPECIAL_FX_RAIN", menu_scr_map_special_fx_rain, ; )
  CHOICE_DVARYESNO( 4, "@OW_SCR_MAP_SPECIAL_FX_PARTICLES", menu_scr_map_special_fx_particles, ; )
  CHOICE_DVARYESNO( 5, "@OW_SCR_MAP_SPECIAL_FX_BGSOUND", menu_scr_map_special_fx_bgsound, ; )
  CHOICE_DVARYESNO( 6, "@OW_SCR_SHOW_FOG", menu_scr_show_fog, ; )
  
  CHOICE_DVARYESNO( 7, "@OW_SCR_DCS_ENABLED", menu_scr_dcs_enabled, ; )
  CHOICE_DVAREDIT_NUMERIC( 8, "@OW_SCR_DCS_DAY_LENGTH", menu_scr_dcs_day_length, 4, ; )
  CHOICE_DVAREDIT_NUMERIC( 9, "@OW_SCR_DCS_DUSK_LENGTH", menu_scr_dcs_dusk_length, 4, ; )
  CHOICE_DVAREDIT_NUMERIC( 10, "@OW_SCR_DCS_NIGHT_LENGTH", menu_scr_dcs_night_length, 4, ; )
  CHOICE_DVAREDIT_NUMERIC( 11, "@OW_SCR_DCS_DAWN_LENGTH", menu_scr_dcs_dawn_length, 4, ; )
  CHOICE_DVARFLOATLIST( 12, "@OW_SCR_DCS_FIRST_CYCLE", menu_scr_dcs_first_cycle, { "Random" -1 "Dawn" 0 "Day" 1 "Dusk" 2 "Night" 3 }, ; )
  CHOICE_DVARYESNO( 13, "@OW_SCR_DCS_SOUNDS_ENABLE", menu_scr_dcs_sounds_enable, ; )
  CHOICE_DVARFLOATLIST( 14, "@OW_SCR_DCS_RESET_CYCLE", menu_scr_dcs_reset_cycle, { "Disabled" 0 "Enabled (Resets on new map)" 1 "Enabled (Resets on new round)" 2}, ; )
  
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