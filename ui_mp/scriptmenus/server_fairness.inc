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
		setdvar tmp_menu_name fai;
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
	
	CHOICE_MENU_TITLE("@OW_SERVER_FAIRNESS" )
	
#undef TEXTSIZE_BUTTON_PC
#define TEXTSIZE_BUTTON_PC	0.33
	
#undef CHOICE_SIZE_Y
#define CHOICE_SIZE_Y 		20
	
#undef	CHOICE_SIZE_X
#define CHOICE_SIZE_X		212
	
#undef CHOICE_X_SPACING
#define CHOICE_X_SPACING 290
	
#undef CHOICE_X_START
#define CHOICE_X_START 0
	
#undef CHOICE_Y_START
#define CHOICE_Y_START 34
	
#undef CHOICE_Y_COUNT
#define CHOICE_Y_COUNT			18

#define TEAMBASED		(dvarString(menu_cfg_gt) != "bel" && dvarString(menu_cfg_gt) != "dm" && dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "gr" && dvarString(menu_cfg_gt) != "oitc" && dvarString(menu_cfg_gt) != "ss")
	
	CHOICE_DVARYESNO_VIS( 1, "@OW_SCR_SPAWN_PROTECTION_ENABLE", menu_scr_spawn_protection_enable, SET_SCR_SPAWN_PROTECTION_ENABLE; , when( dvarString(menu_cfg_gt) != "oitc" ) )
	CHOICE_DVAREDIT_VIS( 2, "@OW_SCR_SPAWN_PROTECTION_TIME", menu_scr_spawn_protection_time, 4, 4, SET_SCR_SPAWN_PROTECTION_TIME; , when( dvarBool(menu_scr_spawn_protection_enable) && dvarString(menu_cfg_gt) != "oitc" ) )
	CHOICE_DVARYESNO_VIS( 3, "@OW_SCR_SPAWN_PROTECTION_INVISIBLE", menu_scr_spawn_protection_invisible, SET_SCR_SPAWN_PROTECTION_INVISIBLE; , when( dvarBool(menu_scr_spawn_protection_enable) && dvarString(menu_cfg_gt) != "oitc" ) )
	CHOICE_DVARYESNO_VIS( 4, "@OW_SCR_SPAWN_PROTECTION_HITICON", menu_scr_spawn_protection_hiticon, SET_SCR_SPAWN_PROTECTION_HITICON; , when( dvarBool(menu_scr_spawn_protection_enable) && dvarString(menu_cfg_gt) != "oitc" ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 5, "@OW_SCR_SPAWN_PROTECTION_MAXDISTANCE", menu_scr_spawn_protection_maxdistance, 4, SET_SCR_SPAWN_PROTECTION_MAXDISTANCE; , when( dvarBool(menu_scr_spawn_protection_enable) && dvarString(menu_cfg_gt) != "oitc" ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 6, "@OW_SCR_SPAWN_PROTECTION_PUNISHMENT_TIME", menu_scr_spawn_protection_punishment_time, 2, SET_SCR_SPAWN_PROTECTION_PUNISHMENT_TIME; , when( dvarBool(menu_scr_spawn_protection_enable) && dvarString(menu_cfg_gt) != "oitc" ) )
	
	CHOICE_DVARYESNO_VIS( 7, "@OW_SCR_ANTI_CAMPING_ENABLE", menu_scr_anti_camping_enable, SET_SCR_ANTI_CAMPING_ENABLE; , when( dvarString(menu_cfg_gt) != "ftag" ) )
	CHOICE_DVARFLOATLIST_VIS( 8, "@OW_SCR_ANTI_CAMPING_SHOW", menu_scr_anti_camping_show, { "Icon" 0 "Message" 1 "Both" 2 }, SET_SCR_ANTI_CAMPING_SHOW; , when( dvarBool(menu_scr_anti_camping_enable) && dvarString(menu_cfg_gt) != "ftag" ) )
	CHOICE_DVAREDIT_VIS( 9, "@OW_SCR_ANTI_CAMPING_MESSAGE", menu_scr_anti_camping_message, 32, 32, SET_SCR_ANTI_CAMPING_MESSAGE; , when( dvarBool(menu_scr_anti_camping_enable) && dvarString(menu_cfg_gt) != "ftag" ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 10, "@OW_SCR_ANTI_CAMPING_DISTANCE", menu_scr_anti_camping_distance, 3, SET_SCR_ANTI_CAMPING_DISTANCE; , when( dvarBool(menu_scr_anti_camping_enable) && dvarString(menu_cfg_gt) != "ftag" ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 11, "@OW_SCR_ANTI_CAMPING_TIME", menu_scr_anti_camping_time, 3, SET_SCR_ANTI_CAMPING_TIME; , when( dvarBool(menu_scr_anti_camping_enable) && dvarString(menu_cfg_gt) != "ftag" ) )
	
	CHOICE_DVARFLOATLIST( 12, "@OW_SCR_ANTI_BUNNY_HOPPING_ENABLE", menu_scr_anti_bunny_hopping_enable, { "Disabled" 0 "Lower weapon when jumping" 1 "Lower only after 2 jumps" 2 "Shift aim when jumping" 3 "Shift only after 2 jumps" 4 }, SET_SCR_ANTI_BUNNY_HOPPING_ENABLE; )
	CHOICE_DVARYESNO( 13, "@OW_SCR_ANTI_DOLPHIN_DIVE_ENABLE", menu_scr_anti_dolphin_dive_enable, SET_SCR_ANTI_DOLPHIN_DIVE_ENABLE; )
	
	CHOICE_DVARFLOATLIST_VIS( 14, "@OW_SCR_RNG_ENABLED", menu_scr_rng_enabled, { "Disabled" 0 "Enabled" 1 "Enab. (not shotguns)" 2 }, SET_SCR_RNG_ENABLED; , 1 )
	CHOICE_DVAREDIT_NUMERIC_VIS( 15, "@OW_SCR_RNG_DISTANCE", menu_scr_rng_distance, 5, SET_SCR_RNG_DISTANCE; , when( dvarBool(menu_scr_rng_enabled) ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 16, "@OW_SCR_RNG_DAMAGE_CLOSER", menu_scr_rng_damage_closer, 3, SET_SCR_RNG_DAMAGE_CLOSER; , when( dvarBool(menu_scr_rng_enabled) ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 17, "@OW_SCR_RNG_DAMAGE_LONGER", menu_scr_rng_damage_longer, 3, SET_SCR_RNG_DAMAGE_LONGER; , when( dvarBool(menu_scr_rng_enabled) ) )
	
	
	CHOICE_DVARFLOATLIST_VIS( 19, "@OW_SCR_FORCE_AUTOASSIGN", menu_scr_force_autoassign, { "Disabled" 0 "Enabled (to everyone)" 1 "Enabled (not members)" 2 }, SET_SCR_FORCE_AUTOASSIGN; , when( TEAMBASED ) )
	CHOICE_DVAREDIT_VIS( 20, "@OW_SCR_FORCE_AUTOASSIGN_CLAN_TAGS", menu_scr_force_autoassign_clan_tags, 1000, 80, SET_SCR_FORCE_AUTOASSIGN_CLAN_TAGS; , when( dvarBool(menu_scr_force_autoassign) && TEAMBASED ) )
	CHOICE_DVARYESNO_VIS( 21, "@OW_SCR_SWITCH_TEAMS_AT_HALFTIME", menu_scr_switch_teams_at_halftime, SET_SCR_SWITCH_TEAMS_AT_HALFTIME; , when( TEAMBASED ) )
	
	CHOICE_DVARFLOATLIST_VIS( 22, "@OW_SCR_TEAMBALANCE", menu_scr_teambalance, { "Disabled" 0 "Enab. (avoid members)" 1 "Enab. (never members)" 2 }, SET_SCR_TEAMBALANCE; , when( TEAMBASED ) )
	CHOICE_DVARYESNO_VIS( 23, "@OW_SCR_TEAMBALANCE_SHOW_MESSAGE", menu_scr_teambalance_show_message, SET_SCR_TEAMBALANCE_SHOW_MESSAGE; , when( dvarBool(menu_scr_teambalance) && TEAMBASED ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 24, "@OW_SCR_TEAMBALANCE_CHECK_INTERVAL", menu_scr_teambalance_check_interval, 3, SET_SCR_TEAMBALANCE_CHECK_INTERVAL; , when( dvarBool(menu_scr_teambalance) && TEAMBASED) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 25, "@OW_SCR_TEAMBALANCE_DELAY", menu_scr_teambalance_delay, 2, SET_SCR_TEAMBALANCE_DELAY; , when( dvarBool(menu_scr_teambalance) && TEAMBASED ) )
	CHOICE_DVAREDIT_VIS( 26, "@OW_SCR_TEAMBALANCE_PROTECTED_CLAN_TAGS", menu_scr_teambalance_protected_clan_tags, 1000, 40, SET_SCR_TEAMBALANCE_PROTECTED_CLAN_TAGS; , when( dvarInt(menu_scr_teambalance) == 1 && TEAMBASED ) )
	
	CHOICE_DVARFLOATLIST_VIS( 27, "@OW_SCR_TEAM_FFTYPE", menu_scr_team_fftype, { "Disabled" 0 "Enabled" 1 "Reflective" 2 "Shared (50%/50%)" 3 }, SET_SCR_TEAM_FFTYPE; , when( TEAMBASED ) )
	CHOICE_DVARYESNO_VIS( 28, "@OW_SCR_TEAM_TEAMKILLPOINTLOSS", menu_scr_team_teamkillpointloss, SET_SCR_TEAM_TEAMKILLPOINTLOSS; , when( (dvarInt(menu_scr_team_fftype) == 1 || dvarInt(menu_scr_team_fftype) == 3) && TEAMBASED ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 29, "@OW_SCR_TEAM_TEAMKILLSPAWNDELAY", menu_scr_team_teamkillspawndelay, 2, SET_SCR_TEAM_TEAMKILLSPAWNDELAY; , when( (dvarInt(menu_scr_team_fftype) == 1 || dvarInt(menu_scr_team_fftype) == 3) && TEAMBASED ) )
	CHOICE_DVARYESNO( 30, "@OW_SCR_GAME_DEATHPOINTLOSS", menu_scr_game_deathpointloss, SET_SCR_GAME_DEATHPOINTLOSS; )
	CHOICE_DVARYESNO( 31, "@OW_SCR_GAME_SUICIDEPOINTLOSS", menu_scr_game_suicidepointloss, SET_SCR_GAME_SUICIDEPOINTLOSS; )
	CHOICE_DVAREDIT_NUMERIC( 32, "@OW_SCR_PLAYER_SUICIDESPAWNDELAY", menu_scr_player_suicidespawndelay, 2, SET_SCR_PLAYER_SUICIDESPAWNDELAY; )
	
	CHOICE_DVAREDIT_NUMERIC_VIS( 33, "@OW_SCR_TK_LIMIT", menu_scr_tk_limit, 2, SET_SCR_TK_LIMIT; , when( (dvarInt(menu_scr_team_fftype) == 1 || dvarInt(menu_scr_team_fftype) == 3) && TEAMBASED ) )
	CHOICE_DVARYESNO_VIS( 34, "@OW_SCR_TK_EXPLOSIVE_COUNTASONE", menu_scr_tk_explosive_countasone, SET_SCR_TK_EXPLOSIVE_COUNTASONE; , when( (dvarInt(menu_scr_team_fftype) == 1 || dvarInt(menu_scr_team_fftype) == 3) && TEAMBASED ) )
	CHOICE_DVARFLOATLIST_VIS( 35, "@OW_SCR_TK_PUNISHMENT", menu_scr_tk_punishment, { "Warning message" 0 "Disable player weapons" 1 "Lock player in position" 2 "Kill player on the spot" 3 "Kick player from server" 4 }, SET_SCR_TK_PUNISHMENT; , when( (dvarInt(menu_scr_team_fftype) == 1 || dvarInt(menu_scr_team_fftype) == 3) && TEAMBASED ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 36, "@OW_SCR_TK_PUNISHMENT_TIME", menu_scr_tk_punishment_time, 2, SET_SCR_TK_PUNISHMENT_TIME; , when( (dvarInt(menu_scr_team_fftype) == 1 || dvarInt(menu_scr_team_fftype) == 3) && TEAMBASED ) )
	
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
		visible			when( dvarInt(tmp_menu_optcount) == 37)
	}
}