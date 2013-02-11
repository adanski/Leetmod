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
		setdvar tmp_menu_name sco;
		setdvar tmp_menu_optcount 0;
		setdvar tmp_menu_savedsess 0;
		setdvar tmp_open_event_d1 0;
		execNow "setfromdvar menu_cfg_gt g_gametype";
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
	
	CHOICE_MENU_TITLE("@OW_SERVER_SCORES" )
	
#undef TEXTSIZE_BUTTON_PC
#define TEXTSIZE_BUTTON_PC	0.33
	
#undef CHOICE_SIZE_Y
#define CHOICE_SIZE_Y 		20
	
#undef	CHOICE_SIZE_X
#define CHOICE_SIZE_X		180
	
#undef CHOICE_X_SPACING
#define CHOICE_X_SPACING 300
	
#undef CHOICE_X_START
#define CHOICE_X_START 0
	
#undef CHOICE_Y_START
#define CHOICE_Y_START 34
	
#undef CHOICE_Y_COUNT
#define CHOICE_Y_COUNT			18

//#define OBJECTIVEGT		(dvarString(menu_cfg_gt) != "bel" && dvarString(menu_cfg_gt) != "dm" && dvarString(menu_cfg_gt) != "ftag" && dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "oitc" && dvarString(menu_cfg_gt) != "ss" && dvarString(menu_cfg_gt) != "war")
#ifndef	TEAMBASED
#define TEAMBASED		(dvarString(menu_cfg_gt) != "bel" && dvarString(menu_cfg_gt) != "dm" && dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "gr" && dvarString(menu_cfg_gt) != "oitc" && dvarString(menu_cfg_gt) != "ss")
#endif
#define CAPTUREDEFENDGT		(dvarString(menu_cfg_gt) == "ass" || dvarString(menu_cfg_gt) == "ch" || dvarString(menu_cfg_gt) == "ctf" || dvarString(menu_cfg_gt) == "dom" || dvarString(menu_cfg_gt) == "koth" || dvarString(menu_cfg_gt) == "re")
#define TAKEGT (dvarString(menu_cfg_gt) == "ch" || dvarString(menu_cfg_gt) == "ctf" || dvarString(menu_cfg_gt) == "re")
// yes, points for killing carrier are only given in these gametypes (from what I've found) although there are other gametypes where you can kill the carrier
#define KILLCARRIERGT (dvarString(menu_cfg_gt) == "ch" || dvarString(menu_cfg_gt) == "re" )
	
	
	CHOICE_DVARFLOATLIST_VIS( 1, "@OW_SCR_ENABLE_SCORESYSTEM", menu_scr_enable_scoresystem, { "Disabled (Stock cod4 values)" 0 "Enabled (manual override)" 1 }, SET_SCR_ENABLE_SCORESYSTEM; , 1 )
	CHOICE_DVARYESNO_VIS( 2, "@OW_SCR_SCORE_TK_AFFECTS_TEAMSCORE", menu_scr_score_tk_affects_teamscore, SET_SCR_SCORE_TK_AFFECTS_TEAMSCORE; , when( TEAMBASED ) )
	
	CHOICE_DVAREDIT_NUMERIC_VIS( 3, "@OW_SCR_SCORE_STANDARD_KILL", menu_scr_score_standard_kill, 2, SET_SCR_SCORE_STANDARD_KILL; , when( dvarBool(menu_scr_enable_scoresystem) ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 4, "@OW_SCR_SCORE_HEADSHOT_KILL", menu_scr_score_headshot_kill, 2, SET_SCR_SCORE_HEADSHOT_KILL; , when( dvarBool(menu_scr_enable_scoresystem) ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 5, "@OW_SCR_SCORE_MELEE_KILL", menu_scr_score_melee_kill, 2, SET_SCR_SCORE_MELEE_KILL; , when( dvarBool(menu_scr_enable_scoresystem) ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 6, "@OW_SCR_SCORE_GRENADE_KILL", menu_scr_score_grenade_kill, 2, SET_SCR_SCORE_GRENADE_KILL; , when( dvarBool(menu_scr_enable_scoresystem) && dvarString(menu_cfg_gt) != "oitc" ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 7, "@OW_SCR_SCORE_C4_KILL", menu_scr_score_c4_kill, 2, SET_SCR_SCORE_C4_KILL; , when( dvarBool(menu_scr_enable_scoresystem) && dvarString(menu_cfg_gt) != "oitc" ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 8, "@OW_SCR_SCORE_CLAYMORE_KILL", menu_scr_score_claymore_kill, 2, SET_SCR_SCORE_CLAYMORE_KILL; , when( dvarBool(menu_scr_enable_scoresystem) && dvarString(menu_cfg_gt) != "oitc" ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 9, "@OW_SCR_SCORE_RPG_KILL", menu_scr_score_rpg_kill, 2, SET_SCR_SCORE_RPG_KILL; , when( dvarBool(menu_scr_enable_scoresystem) && dvarString(menu_cfg_gt) != "oitc" ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 10, "@OW_SCR_SCORE_GRENADE_LAUNCHER_KILL", menu_scr_score_grenade_launcher_kill, 2, SET_SCR_SCORE_GRENADE_LAUNCHER_KILL; , when( dvarBool(menu_scr_enable_scoresystem) && dvarString(menu_cfg_gt) != "oitc" ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 11, "@OW_SCR_SCORE_AIRSTRIKE_KILL", menu_scr_score_airstrike_kill, 2, SET_SCR_SCORE_AIRSTRIKE_KILL; , when( dvarBool(menu_scr_enable_scoresystem) && dvarString(menu_cfg_gt) != "oitc" ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 12, "@OW_SCR_SCORE_HELICOPTER_KILL", menu_scr_score_helicopter_kill, 2, SET_SCR_SCORE_HELICOPTER_KILL; , when( dvarBool(menu_scr_enable_scoresystem) && dvarString(menu_cfg_gt) != "oitc" ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 13, "@OW_SCR_SCORE_VEHICLE_EXPLOSION_KILL", menu_scr_score_vehicle_explosion_kill, 2, SET_SCR_SCORE_VEHICLE_EXPLOSION_KILL, when( dvarBool(menu_scr_enable_scoresystem) && dvarString(menu_cfg_gt) != "oitc" ); )
	CHOICE_DVAREDIT_NUMERIC_VIS( 14, "@OW_SCR_SCORE_BARREL_EXPLOSION_KILL", menu_scr_score_barrel_explosion_kill, 2, SET_SCR_SCORE_BARREL_EXPLOSION_KILL; , when( dvarBool(menu_scr_enable_scoresystem) && dvarString(menu_cfg_gt) != "oitc" ) )
	
	CHOICE_DVAREDIT_NUMERIC_VIS( 15, "@OW_SCR_SCORE_ASSIST_KILL", menu_scr_score_assist_kill, 2, SET_SCR_SCORE_ASSIST_KILL; , when( dvarBool(menu_scr_enable_scoresystem) && TEAMBASED ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 16, "@OW_SCR_SCORE_ASSIST_25_KILL", menu_scr_score_assist_25_kill, 2, SET_SCR_SCORE_ASSIST_25_KILL; , when( dvarBool(menu_scr_enable_scoresystem) && TEAMBASED ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 17, "@OW_SCR_SCORE_ASSIST_50_KILL", menu_scr_score_assist_50_kill, 2, SET_SCR_SCORE_ASSIST_50_KILL; , when( dvarBool(menu_scr_enable_scoresystem) && TEAMBASED ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 18, "@OW_SCR_SCORE_ASSIST_75_KILL", menu_scr_score_assist_75_kill, 2, SET_SCR_SCORE_ASSIST_75_KILL; , when( dvarBool(menu_scr_enable_scoresystem) && TEAMBASED ) )
	
	CHOICE_DVAREDIT_VIS( 19, "@OW_SCR_SCORE_PLAYER_DEATH", menu_scr_score_player_death, 3, 3, SET_SCR_SCORE_PLAYER_DEATH, when( dvarBool(menu_scr_enable_scoresystem) ) )
	CHOICE_DVAREDIT_VIS( 20, "@OW_SCR_SCORE_PLAYER_SUICIDE", menu_scr_score_player_suicide, 3, 3, SET_SCR_SCORE_PLAYER_SUICIDE, when( dvarBool(menu_scr_enable_scoresystem) ) )
	CHOICE_DVAREDIT_VIS( 21, "@OW_SCR_SCORE_PLAYER_TEAMKILL", menu_scr_score_player_teamkill, 3, 3, SET_SCR_SCORE_PLAYER_TEAMKILL, when( dvarBool(menu_scr_enable_scoresystem) && TEAMBASED ) )
	
	CHOICE_DVAREDIT_NUMERIC_VIS( 22, "@OW_SCR_SCORE_HARDPOINT_USED", menu_scr_score_hardpoint_used, 2, SET_SCR_SCORE_HARDPOINT_USED; , when( dvarBool(menu_scr_enable_scoresystem) && dvarString(menu_cfg_gt) != "oitc" ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 23, "@OW_SCR_SCORE_SHOT_DOWN_HELICOPTER", menu_scr_score_shot_down_helicopter, 2, SET_SCR_SCORE_SHOT_DOWN_HELICOPTER; , when( dvarBool(menu_scr_enable_scoresystem) && dvarString(menu_cfg_gt) != "oitc" ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 24, "@OW_SCR_SCORE_CAPTURE_OBJECTIVE", menu_scr_score_capture_objective, 2, SET_SCR_SCORE_CAPTURE_OBJECTIVE; , when( dvarBool(menu_scr_enable_scoresystem) && CAPTUREDEFENDGT ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 25, "@OW_SCR_SCORE_TAKE_OBJECTIVE", menu_scr_score_take_objective, 2, SET_SCR_SCORE_TAKE_OBJECTIVE; , when( dvarBool(menu_scr_enable_scoresystem) && TAKEGT ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 26, "@OW_SCR_SCORE_RETURN_OBJECTIVE", menu_scr_score_return_objective, 2, SET_SCR_SCORE_RETURN_OBJECTIVE; , when( dvarBool(menu_scr_enable_scoresystem) && dvarString(menu_cfg_gt) == "ctf" ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 27, "@OW_SCR_SCORE_DEFEND_OBJECTIVE", menu_scr_score_defend_objective, 2, SET_SCR_SCORE_DEFEND_OBJECTIVE; , when( dvarBool(menu_scr_enable_scoresystem) && CAPTUREDEFENDGT ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 28, "@OW_SCR_SCORE_HOLDING_OBJECTIVE", menu_scr_score_holding_objective, 2, SET_SCR_SCORE_HOLDING_OBJECTIVE; , when( dvarBool(menu_scr_enable_scoresystem) && dvarString(menu_cfg_gt) == "ch" ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 29, "@OW_SCR_SCORE_KILL_OBJECTIVE_CARRIER", menu_scr_score_kill_objective_carrier, 2, SET_SCR_SCORE_KILL_OBJECTIVE_CARRIER; , when( dvarBool(menu_scr_enable_scoresystem) && KILLCARRIERGT ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 30, "@OW_SCR_SCORE_ASSAULT_OBJECTIVE", menu_scr_score_assault_objective, 2, SET_SCR_SCORE_ASSAULT_OBJECTIVE; , when( dvarBool(menu_scr_enable_scoresystem) && (dvarString(menu_cfg_gt) == "dom" || dvarString(menu_cfg_gt) == "koth" ) ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 31, "@OW_SCR_SCORE_PLANT_BOMB", menu_scr_score_plant_bomb, 2, SET_SCR_SCORE_PLANT_BOMB; , when( dvarBool(menu_scr_enable_scoresystem) && (dvarString(menu_cfg_gt) == "sab" || dvarString(menu_cfg_gt) == "sd" ) ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 32, "@OW_SCR_SCORE_DEFUSE_BOMB", menu_scr_score_defuse_bomb, 2, SET_SCR_SCORE_DEFUSE_BOMB; , when( dvarBool(menu_scr_enable_scoresystem) && (dvarString(menu_cfg_gt) == "sab" || dvarString(menu_cfg_gt) == "sd" ) ) )
	
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
	
	CHOICE_DVARSTRINGLIST_VIS( 100, "@OW_MENU_CONFIGURE_TO_GAMETYPE", menu_cfg_gt, { "Default value when not specifically defined"; "_def"; "@OW_ASSASSINATION"; "ass"; "@OW_BEHIND_ENEMY_LINES"; "bel"; "@OW_CAPTURE_AND_HOLD"; "ch"; "@MPUI_CAPTURE_THE_FLAG"; "ctf"; "@MPUI_DOMINATION"; "dom"; "@MPUI_DEATHMATCH"; "dm"; "@OW_FREEZETAG"; "ftag"; "@OW_GUNGAME"; "gg"; "@MPUI_HEADQUARTERS"; "koth"; "@OW_ONEINTHECHAMBER"; "oitc"; "@OW_RETRIEVAL"; "re"; "@MPUI_SABOTAGE"; "sab"; "@MPUI_SEARCH_AND_DESTROY_CLASSIC"; "sd"; "@OW_SHARPSHOOTER"; "ss"; "@MPUI_WAR"; "war"; }, setdvar tmp_menu_optcount 0;setdvar tmp_menu_savedsess 0;FILLMENUDVARS;setdvar tmp_open_event_d1 0; , 1 )
	
	// hack for cleaning dvars (long script) on menu open
	itemDef {
		type			ITEM_TYPE_BUTTON
		rect			-600 -800 2000 2000 0 0
		text			""
		textfont		UI_FONT_NORMAL
		visible			when( !dvarbool(tmp_open_event_d1) )
		onfocus { CLEANMENUDVARS;setdvar tmp_open_event_d1 1; }
		mouseEnter { CLEANMENUDVARS;setdvar tmp_open_event_d1 1; }
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
		visible			when( dvarInt(tmp_menu_optcount) == 34)
	}
}