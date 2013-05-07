#include "ui_mp/menustyle.inc"

#include "ui_mp/scriptmenus/server_player_setadvars.inc"

menuDef
{
	name			"settings_quick_dom_@MPUI_RULES_TIME_LIMIT"
	fullScreen		0
	rect			0 0 640 480
	focusColor		COLOR_FOCUSED
	//soundloop		""
	onOpen
	{
		setdvar tmp_menu_name pla;
		setdvar tmp_menu_optcount 0;
		setdvar tmp_menu_savedsess 0;
		setdvar tmp_open_event_d1 1;
		execNow "set menu_cfg_gt _def";
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
	
	CHOICE_MENU_TITLE("@OW_SERVER_PLAYER" )
	
#undef TEXTSIZE_BUTTON_PC
#define TEXTSIZE_BUTTON_PC	0.33
	
#undef CHOICE_SIZE_Y
#define CHOICE_SIZE_Y 		20
	
#undef	CHOICE_SIZE_X
#define CHOICE_SIZE_X		180
	
#undef CHOICE_X_SPACING
#define CHOICE_X_SPACING 280
	
#undef CHOICE_X_START
#define CHOICE_X_START 0
	
#undef CHOICE_Y_START
#define CHOICE_Y_START 34
	
#undef CHOICE_Y_COUNT
#define CHOICE_Y_COUNT			16
	
	
	CHOICE_DVAREDIT_NUMERIC( 1, "@OW_SCR_FALLDAMAGEMINHEIGHT", menu_scr_fallDamageMinHeight, 4, SET_SCR_FALLDAMAGEMINHEIGHT; )
	CHOICE_DVAREDIT_NUMERIC( 2, "@OW_SCR_FALLDAMAGEMAXHEIGHT", menu_scr_fallDamageMaxHeight, 4, SET_SCR_FALLDAMAGEMAXHEIGHT; )
	CHOICE_DVAREDIT_NUMERIC( 3, "@OW_SCR_JUMP_HEIGHT", menu_scr_jump_height, 4, SET_SCR_JUMP_HEIGHT; )
	CHOICE_DVARYESNO( 4, "@OW_SCR_JUMP_SLOWDOWN_ENABLE", menu_scr_jump_slowdown_enable, SET_SCR_JUMP_SLOWDOWN_ENABLE; )
	CHOICE_DVARYESNO_VIS( 5, "@OW_SCR_GAME_ALLOW_KILLCAM", menu_scr_game_allow_killcam, SET_SCR_GAME_ALLOW_KILLCAM; , when( dvarString(menu_cfg_gt) != "ftag" ) )
	CHOICE_DVARYESNO_VIS( 6, "@OW_SCR_PLAYER_FORCERESPAWN", menu_scr_player_forcerespawn, SET_SCR_PLAYER_FORCERESPAWN; , when( dvarString(menu_cfg_gt) != "ass" && dvarString(menu_cfg_gt) != "ftag" && dvarString(menu_cfg_gt) != "oitc" && dvarString(menu_cfg_gt) != "re" && dvarString(menu_cfg_gt) != "sd" ) )
	CHOICE_DVARYESNO_VIS( 7, "@OW_SCR_QUICKACTIONS_ENABLE", menu_scr_quickactions_enable, SET_SCR_QUICKACTIONS_ENABLE; , when( dvarString(menu_cfg_gt) != "oitc" ) )
	CHOICE_DVARYESNO( 8, "@OW_SCR_THIRDPERSON_ENABLE", menu_scr_thirdperson_enable, SET_SCR_THIRDPERSON_ENABLE; )
	CHOICE_DVARYESNO( 9, "@OW_SCR_PLAYER_LEAN_FIX", menu_scr_player_lean_fix, SET_SCR_PLAYER_LEAN_FIX; )
	CHOICE_DVARYESNO( 10, "@OW_SCR_BOB_EFFECT_ENABLE", menu_scr_bob_effect_enable, SET_SCR_BOB_EFFECT_ENABLE; )
	CHOICE_DVARYESNO( 11, "@OW_SCR_CG_FOOTSTEPS", menu_scr_cg_footsteps, SET_SCR_CG_FOOTSTEPS; )
	
	CHOICE_DVARYESNO( 12, "@OW_SCR_CAP_ENABLE", menu_scr_cap_enable, SET_SCR_CAP_ENABLE; )
	CHOICE_DVAREDIT_VIS( 13, "@OW_SCR_CAP_TIME", menu_scr_cap_time, 4, 4, SET_SCR_CAP_TIME; , when( dvarBool(menu_scr_cap_enable) ) )
	CHOICE_DVAREDIT_VIS( 14, "@OW_SCR_CAP_TIME_ACTIVATED", menu_scr_cap_time_activated, 4, 4, SET_SCR_CAP_TIME_ACTIVATED; , when( dvarBool(menu_scr_cap_enable) ) )
	CHOICE_DVARYESNO_VIS( 15, "@OW_SCR_CAP_FIRSTSPAWN", menu_scr_cap_firstspawn, SET_SCR_CAP_FIRSTSPAWN; , when( dvarBool(menu_scr_cap_enable) ) )
	CHOICE_DVARFLOATLIST_VIS( 16, "@OW_SCR_CAP_ALLOW_OTHERMODELS", menu_scr_cap_allow_othermodels, { "Disabled" 0 "Enabled (Free-based gametypes only)" 1 "Enabled (Team-based gametypes only)" 2 "Enabled (All gametypes)" 3 }, SET_SCR_CAP_ALLOW_OTHERMODELS;, when( dvarBool(menu_scr_cap_enable) ) )
	
	CHOICE_DVARFLOATLIST_VIS( 17, "@OW_SCR_DE_DROPWEAPON_ON_ARM_HIT", menu_scr_de_dropweapon_on_arm_hit, { "Disabled" 0 "On hands" 1 "On hands/lower arms" 2 "On hands/lower/upper arms" 3 }, SET_SCR_DE_DROPWEAPON_ON_ARM_HIT; , when( dvarString(menu_cfg_gt) != "oitc" ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 18, "@OW_SCR_DE_DROPWEAPON_CHANCE", menu_scr_de_dropweapon_chance, 3, SET_SCR_DE_DROPWEAPON_CHANCE; , when( dvarBool(menu_scr_de_dropweapon_on_arm_hit) && dvarString(menu_cfg_gt) != "oitc" ) )
	CHOICE_DVARFLOATLIST_VIS( 19, "@OW_SCR_DE_FALLDOWN_ON_LEG_HIT", menu_scr_de_falldown_on_leg_hit, { "Disabled" 0 "Enabled (no speed reduction)" 1 "Enabled (also speed reduction)" 2 }, SET_SCR_DE_FALLDOWN_ON_LEG_HIT;, when( dvarString(menu_cfg_gt) != "oitc" ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 20, "@OW_SCR_DE_FALLDOWN_CHANCE", menu_scr_de_falldown_chance, 3, SET_SCR_DE_FALLDOWN_CHANCE; , when( dvarBool(menu_scr_de_falldown_on_leg_hit) && dvarString(menu_cfg_gt) != "oitc" ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 21, "@OW_SCR_DE_SHIFTVIEW_ON_DAMAGE", menu_scr_de_shiftview_on_damage, 2, SET_SCR_DE_SHIFTVIEW_ON_DAMAGE; , when( dvarString(menu_cfg_gt) != "oitc" ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 22, "@OW_SCR_DE_BREAK_ANKLE_ON_FALL", menu_scr_de_break_ankle_on_fall, 2, SET_SCR_DE_BREAK_ANKLE_ON_FALL; , when( dvarString(menu_cfg_gt) != "oitc" ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 23, "@OW_SCR_DE_SLOWDOWN_ON_LEG_HIT", menu_scr_de_slowdown_on_leg_hit, 2, SET_SCR_DE_SLOWDOWN_ON_LEG_HIT; , when( dvarString(menu_cfg_gt) != "oitc" ) )
	
#undef CHOICE_Y_COUNT
#define CHOICE_Y_COUNT			100
	
#undef CHOICE_Y_START
#define CHOICE_Y_START -2172
	
#undef CHOICE_HORIZONTAL_ALIGN
#define CHOICE_HORIZONTAL_ALIGN	HORIZONTAL_ALIGN_RIGHT

#undef CHOICE_X_START
#define CHOICE_X_START -400
	
#undef CHOICE_SIZE_X
#define CHOICE_SIZE_X 160
	
#undef TEXTSIZE_BUTTON_PC
#define TEXTSIZE_BUTTON_PC	0.38
	
	CHOICE_DVARSTRINGLIST_VIS( 100, "@OW_MENU_CONFIGURE_TO_GAMETYPE", menu_cfg_gt, { "@OW_MENU_CFG_FOR_DEF_GT"; "_def"; "@OW_ASSASSINATION"; "ass"; "@OW_BEHIND_ENEMY_LINES"; "bel"; "@OW_CAPTURE_AND_HOLD"; "ch"; "@MPUI_CAPTURE_THE_FLAG"; "ctf"; "@MPUI_DOMINATION"; "dom"; "@MPUI_DEATHMATCH"; "dm"; "@OW_FREEZETAG"; "ftag"; "@OW_GREED"; "gr"; "@OW_GUNGAME"; "gg"; "@MPUI_HEADQUARTERS"; "koth"; "@OW_ONEINTHECHAMBER"; "oitc"; "@OW_RETRIEVAL"; "re"; "@MPUI_SABOTAGE"; "sab"; "@MPUI_SEARCH_AND_DESTROY_CLASSIC"; "sd"; "@OW_SHARPSHOOTER"; "ss"; "@MPUI_WAR"; "war"; "@OW_TEAM_GREED"; "tgr"; }, setdvar tmp_menu_optcount 0;setdvar tmp_menu_savedsess 0;FILLMENUDVARS;setdvar tmp_open_event_d1 1; , 1 )
	
	// hack for cleaning dvars (long script) on menu open
	itemDef {
		type			ITEM_TYPE_BUTTON
		rect			-600 -800 2000 2000 0 0
		text			""
		textfont		UI_FONT_NORMAL
		visible			when( dvarbool(tmp_open_event_d1) )
		onfocus { CLEANMENUDVARS;setdvar tmp_open_event_d1 0; }
		mouseEnter { CLEANMENUDVARS;setdvar tmp_open_event_d1 0; }
	}
	
	itemDef {
		name			save
		text			"@OW_MENU_SAVE_FOR_SESSION"
		type			1
		style			WINDOW_STYLE_FILLED
		textstyle		ITEM_TEXTSTYLE_SHADOWED
		rect			130 -26 100 20 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		textfont		UI_FONT_NORMAL
		textalign		ITEM_ALIGN_LEFT
		textscale		TEXTSIZE_SMALL
		textaligny		18
		visible			1
		mouseEnter		{ play "mouse_over"; }
		action
		{
			setdvar tmp_menu_savedsess 1;
			play "menu_save_changes";
			SAVEMENUDVARS;
		}
	}
	itemDef {
		name			storedisk
		text			"@OW_MENU_STORE_TO_DISK"
		type			1
		style			WINDOW_STYLE_FILLED
		textstyle		ITEM_TEXTSTYLE_SHADOWED
		rect			-100 -26 100 20 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		textfont		UI_FONT_NORMAL
		textalign		ITEM_ALIGN_LEFT
		textscale		TEXTSIZE_SMALL
		textaligny		18
		visible			when( !dvarbool(tmp_menu_savedsess) )
		mouseEnter		{ play "mouse_over"; }
		action { setdvar tmp_menu_optcount 1; open auconfirm; }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_checked"
		forecolor		COLOR_FOCUSED
		visible			when( dvarInt(tmp_menu_optcount) == 25)
	}
}