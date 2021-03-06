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
		setdvar tmp_menu_name har;
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
	
	CHOICE_DVARYESNO( 1, "@OW_SCR_GAME_HARDPOINTS", menu_scr_game_hardpoints, SET_SCR_GAME_HARDPOINTS; )
	CHOICE_DVAREDIT_NUMERIC_VIS( 2, "@OW_SCR_HARDPOINT_SHOW_REMINDER", menu_scr_hardpoint_show_reminder, 2, SET_SCR_HARDPOINT_SHOW_REMINDER; , when( dvarBool(menu_scr_game_hardpoints) ) )
	CHOICE_DVARYESNO_VIS( 3, "@OW_SCR_REMOVE_HARDPOINT_ON_DEATH", menu_scr_remove_hardpoint_on_death, SET_SCR_REMOVE_HARDPOINT_ON_DEATH; , when( dvarBool(menu_scr_game_hardpoints) ) )
	CHOICE_DVARYESNO_VIS( 4, "@OW_SCR_GAME_HARDPOINTS_CYCLE", menu_scr_game_hardpoints_cycle, SET_SCR_GAME_HARDPOINTS_CYCLE; , when( dvarBool(menu_scr_game_hardpoints) ) )
	CHOICE_DVARFLOATLIST_VIS( 5, "@OW_SCR_GAME_HARDPOINTS_MODE", menu_scr_game_hardpoints_mode, { "Kill streak" 0 "Total kills amount" 1 }, SET_SCR_GAME_HARDPOINTS_MODE; , when( dvarBool(menu_scr_game_hardpoints) ) )
	CHOICE_DVARYESNO_VIS( 6, "@OW_SCR_ANNOUNCE_KILLSTREAK", menu_scr_announce_killstreak, SET_SCR_ANNOUNCE_KILLSTREAK; , when( dvarBool(menu_scr_game_hardpoints) ) )
	
	CHOICE_DVARYESNO_VIS( 7, "@OW_SCR_HARDPOINT_ALLOW_UAV", menu_scr_hardpoint_allow_uav, SET_SCR_HARDPOINT_ALLOW_UAV; , when( dvarBool(menu_scr_game_hardpoints) ) )
	CHOICE_DVARYESNO_VIS( 8, "@OW_SCR_GAME_FORCEUAV", menu_scr_game_forceuav, SET_SCR_GAME_FORCEUAV; , when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_uav) ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 9, "@OW_SCR_HARDPOINT_UAV_STREAK", menu_scr_hardpoint_uav_streak, 2, SET_SCR_HARDPOINT_UAV_STREAK; , when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_uav) ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 10, "@OW_SCR_UAV_VIEW_TIME", menu_scr_uav_view_time, 3, SET_SCR_UAV_VIEW_TIME; , when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_uav) ) )
	CHOICE_DVARYESNO_VIS( 11, "@OW_SCR_ANNOUNCE_ENEMY_UAV_ONLINE", menu_scr_announce_enemy_uav_online, SET_SCR_ANNOUNCE_ENEMY_UAV_ONLINE; , when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_uav) ) )
	CHOICE_DVARYESNO_VIS( 12, "@OW_SCR_UAV_SHOW_HARDPOINTS", menu_scr_uav_show_hardpoints, SET_SCR_UAV_SHOW_HARDPOINTS; , when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_uav) ) )
	
	CHOICE_DVARYESNO_VIS( 13, "@OW_SCR_HARDPOINT_ALLOW_AIRSTRIKE", menu_scr_hardpoint_allow_airstrike, SET_SCR_HARDPOINT_ALLOW_AIRSTRIKE; , when( dvarBool(menu_scr_game_hardpoints) ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 14, "@OW_SCR_HARDPOINT_AIRSTRIKE_STREAK", menu_scr_hardpoint_airstrike_streak, 2, SET_SCR_HARDPOINT_AIRSTRIKE_STREAK; , when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_airstrike) ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 15, "@OW_SCR_AIRSTRIKE_HARDPOINT_INTERVAL", menu_scr_airstrike_hardpoint_interval, 3, SET_SCR_AIRSTRIKE_HARDPOINT_INTERVAL; , when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_airstrike) ) )
	CHOICE_DVARYESNO_VIS( 16, "@OW_SCR_ANNOUNCE_ENEMY_AIRSTRIKE_INBOUND", menu_scr_announce_enemy_airstrike_inbound, SET_SCR_ANNOUNCE_ENEMY_AIRSTRIKE_INBOUND; , when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_airstrike) ) )
	CHOICE_DVARYESNO_VIS( 17, "@OW_SCR_AIRSTRIKE_ADD_KILLS", menu_scr_airstrike_add_kills, SET_SCR_AIRSTRIKE_ADD_KILLS; , when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_airstrike) ) )
	CHOICE_DVARYESNO_VIS( 18, "@OW_SCR_AIRSTRIKE_KILLS_TOWARD_STREAK", menu_scr_airstrike_kills_toward_streak, SET_SCR_AIRSTRIKE_KILLS_TOWARD_STREAK; , when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_airstrike) ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 19, "@OW_SCR_AIRSTRIKE_DELAY", menu_scr_airstrike_delay, 2, SET_SCR_AIRSTRIKE_DELAY; , when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_airstrike) ) )
	
	CHOICE_DVARYESNO_VIS( 20, "@OW_SCR_HARDPOINT_ALLOW_HELICOPTER", menu_scr_hardpoint_allow_helicopter, SET_SCR_HARDPOINT_ALLOW_HELICOPTER; , when( dvarBool(menu_scr_game_hardpoints) ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 21, "@OW_SCR_HARDPOINT_HELICOPTER_STREAK", menu_scr_hardpoint_helicopter_streak, 2, SET_SCR_HARDPOINT_HELICOPTER_STREAK; , when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_helicopter) ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 22, "@OW_SCR_HELI_HARDPOINT_INTERVAL", menu_scr_heli_hardpoint_interval, 3, SET_SCR_HELI_HARDPOINT_INTERVAL; , when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_helicopter) ) )
	CHOICE_DVARYESNO_VIS( 23, "@OW_SCR_ANNOUNCE_ENEMY_HELI_INBOUND", menu_scr_announce_enemy_heli_inbound, SET_SCR_ANNOUNCE_ENEMY_HELI_INBOUND; , when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_helicopter) ) )
	CHOICE_DVARYESNO_VIS( 24, "@OW_SCR_HELICOPTER_ADD_KILLS", menu_scr_helicopter_add_kills, SET_SCR_HELICOPTER_ADD_KILLS; , when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_helicopter) ) )
	CHOICE_DVARYESNO_VIS( 25, "@OW_SCR_HELICOPTER_KILLS_TOWARD_STREAK", menu_scr_helicopter_kills_toward_streak, SET_SCR_HELICOPTER_KILLS_TOWARD_STREAK; , when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_helicopter) ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 26, "@OW_SCR_HELICOPTER_DELAY", menu_scr_helicopter_delay, 2, SET_SCR_HELICOPTER_DELAY; , when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_helicopter) ) )
	//CHOICE_DVAREDIT_NUMERIC_VIS( 27, "@OW_SCR_HELI_MAXHEALTH", menu_scr_heli_maxhealth, 4, SET_SCR_HELI_MAXHEALTH;, when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_helicopter) ) )
	//CHOICE_DVARSLIDER_VIS( 28, "@OW_SCR_HELI_TARGET_RECOGNITION", menu_scr_heli_target_recognition, 0.95, 0, 1, SET_SCR_HELI_TARGET_RECOGNITION;, when( dvarBool(menu_scr_game_hardpoints) && dvarBool(menu_scr_hardpoint_allow_helicopter) ) )
	
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
	
	CHOICE_DVARSTRINGLIST_VIS( 100, "@OW_MENU_CONFIGURE_TO_GAMETYPE", menu_cfg_gt, { "@OW_MENU_CFG_FOR_DEF_GT"; "_def"; "@OW_ASSASSINATION"; "ass"; "@OW_BEHIND_ENEMY_LINES"; "bel"; "@OW_CAPTURE_AND_HOLD"; "ch"; "@MPUI_CAPTURE_THE_FLAG"; "ctf"; "@MPUI_DOMINATION"; "dom"; "@MPUI_DEATHMATCH"; "dm"; "@OW_FREEZETAG"; "ftag"; "@OW_GREED"; "gr"; "@OW_GUNGAME"; "gg"; "@MPUI_HEADQUARTERS"; "koth"; "@OW_RETRIEVAL"; "re"; "@MPUI_SABOTAGE"; "sab"; "@MPUI_SEARCH_AND_DESTROY_CLASSIC"; "sd"; "@OW_SHARPSHOOTER"; "ss"; "@MPUI_WAR"; "war"; "@OW_TEAM_GREED"; "tgr"; }, setdvar tmp_menu_optcount 0;setdvar tmp_menu_savedsess 0;FILLMENUDVARS;setdvar tmp_open_event_d1 1; , 1 )
	
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
		visible			when( dvarInt(tmp_menu_optcount) == 30)
	}
}