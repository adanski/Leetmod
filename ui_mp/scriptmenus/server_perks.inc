#include "ui_mp/menustyle_forcascadeinclude.inc"

menuDef 
{
  name			"settings_quick_dm"
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
  
  CHOICE_MENU_TITLE("@OW_SERVER_PERKS" )
  
  #undef TEXTSIZE_BUTTON_PC
  #define TEXTSIZE_BUTTON_PC	0.33

  #undef CHOICE_SIZE_Y
  #define CHOICE_SIZE_Y 		20

  #undef	CHOICE_SIZE_X
  #define CHOICE_SIZE_X		150

  #undef CHOICE_X_SPACING
  #define CHOICE_X_SPACING 200
  
  #undef CHOICE_X_START
  #define CHOICE_X_START 0

  #undef CHOICE_Y_START
  #define CHOICE_Y_START 34

  #undef CHOICE_Y_COUNT
  #define CHOICE_Y_COUNT			8

  CHOICE_DVARYESNO( 1, "@PERKS_C4_X_2", "perk_allow_c4_mp", ; )
  CHOICE_DVARYESNO( 2, "@PERKS_SPECIAL_GRENADES_X_3", "perk_allow_specialty_specialgrenade", ; )
  CHOICE_DVARYESNO( 3, "@PERKS_RPG7_X_2", "perk_allow_rpg_mp", ; )
  CHOICE_DVARYESNO( 4, "@PERKS_CLAYMORE_X_2", "perk_allow_claymore_mp", ; )
  CHOICE_DVARYESNO( 5, "@PERKS_FRAG_X_3", "perk_allow_specialty_fraggrenade", ; )
  CHOICE_DVARYESNO( 6, "@PERKS_BANDOLIER", "perk_allow_specialty_extraammo", ; )
  CHOICE_DVARYESNO( 7, "@PERKS_BOMB_SQUAD", "perk_allow_specialty_detectexplosive", ; )

  CHOICE_DVARYESNO( 9, "@PERKS_STOPPING_POWER", "perk_allow_specialty_bulletdamage", ; )
  CHOICE_DVARYESNO( 10, "@PERKS_JUGGERNAUT", "perk_allow_specialty_armorvest", ; )
  CHOICE_DVARYESNO( 11, "@PERKS_SLEIGHT_OF_HAND", "perk_allow_specialty_fastreload", ; )
  CHOICE_DVARYESNO( 12, "@PERKS_DOUBLE_TAP", "perk_allow_specialty_rof", ; )
  CHOICE_DVARYESNO( 13, "@PERKS_OVERKILL", "perk_allow_specialty_twoprimaries", ; )
  CHOICE_DVARYESNO( 14, "@PERKS_UAV_JAMMER", "perk_allow_specialty_gpsjammer", ; )
  CHOICE_DVARYESNO( 15, "@PERKS_SONIC_BOOM", "perk_allow_specialty_explosivedamage", ; )

  CHOICE_DVARYESNO( 17, "@PERKS_EXTREME_CONDITIONING", specialty_detectexplosive, ; )
  CHOICE_DVARYESNO( 18, "@PERKS_STEADY_AIM", specialty_detectexplosive, ; )
  CHOICE_DVARYESNO( 19, "@PERKS_LAST_STAND", specialty_detectexplosive, ; )
  CHOICE_DVARYESNO( 20, "@PERKS_MARTYRDOM", specialty_detectexplosive, ; )
  CHOICE_DVARYESNO( 21, "@PERKS_DEEP_IMPACT", specialty_detectexplosive, ; )
  CHOICE_DVARYESNO( 22, "@PERKS_IRON_LUNGS", specialty_detectexplosive, ; )
  CHOICE_DVARYESNO( 23, "@PERKS_DEAD_SILENCE", specialty_detectexplosive, ; )
  CHOICE_DVARYESNO( 24, "@PERKS_EAVESDROP", specialty_detectexplosive, ; )

  #undef	CHOICE_X_START
  #define CHOICE_X_START			-150

  #undef CHOICE_Y_START
  #define CHOICE_Y_START 130

  #undef CHOICE_Y_COUNT
  #define CHOICE_Y_COUNT 20

  CHOICE_DVAREDIT_NUMERIC( 25, "@OW_AMMOCOUNT_C4", scr_c4_ammo_count, 2, ; )
  CHOICE_DVAREDIT_NUMERIC( 26, "@OW_AMMOCOUNT_CLAYMORE", scr_claymore_ammo_count, 2, ; )
  CHOICE_DVAREDIT_NUMERIC( 27, "@OW_AMMOCOUNT_RPG", scr_rpg_ammo_count, 2, ; )

  CHOICE_DVAREDIT_NUMERIC( 28, "@OW_AMMOCOUNT_FRAG", specialty_fraggrenade_ammo_count, 2, ; )
  CHOICE_DVAREDIT_NUMERIC( 29, "@OW_AMMOCOUNT_SPECIAL", specialty_specialgrenade_ammo_count, 2, ; )

  CHOICE_DVAREDIT_NUMERIC( 30, "@OW_ARMOR_VEST_VALUE", perk_armorvest, 3, ; )
  CHOICE_DVAREDIT_NUMERIC( 31, "@OW_BULLET_DAMAGE_VALUE", perk_bulletdamage, 3, ;)
  CHOICE_DVAREDIT_NUMERIC( 32, "@OW_EXPLOSIVE_DAMAGE_VALUE", perk_explosivedamage, 3, ; )

  CHOICE_DVARYESNO( 33, "@OW_CHECK_FRAGS", specialty_grenadepulldeath_check_frags, ; )
  CHOICE_DVARYESNO( 34, "@OW_CHECK_PISTOL", specialty_pistoldeath_check_pistol, ; )
  
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