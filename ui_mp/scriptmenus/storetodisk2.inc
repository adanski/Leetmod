menuDef
{
	name			"single_popmenu"
	fullScreen		0
	rect			0 0 640 480
	focusColor		COLOR_FOCUSED
	
	popup

	itemDef {
		type			ITEM_TYPE_BUTTON
		rect			-600 -800 2000 2000 0 0
		text			""
		textfont		UI_FONT_NORMAL
		visible			1
		onfocus{ setdvar ui_popup_close_icon "1" }
		leavefocus{ setdvar ui_popup_close_icon "0" }
	}
	itemDef
	{
		style			WINDOW_STYLE_SHADER
		rect			-600 -800 2000 2000 0 0
		forecolor		0 0 0 0.5
		exp				material( "white" );
		visible			1
		decoration
	}
	
	// ----- SPECTATE -----
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "spe" && dvarInt(tmp_menu_optcount) < 13 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_GAME_SPECTATETYPE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "spe" && dvarInt(tmp_menu_optcount) < 13 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_GAME_SPECTATETYPE_SPECTATORS; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "spe" && dvarInt(tmp_menu_optcount) < 13 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_GAME_SPECTATORS_GUIDS; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "spe" && dvarInt(tmp_menu_optcount) < 13 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_ALLOW_THIRDPERSON; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "spe" && dvarInt(tmp_menu_optcount) < 13 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_ALLOW_THIRDPERSON_GUIDS; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "spe" && dvarInt(tmp_menu_optcount) < 13 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_LIVEBROADCAST_ENABLE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "spe" && dvarInt(tmp_menu_optcount) < 13 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_LIVEBROADCAST_GUIDS; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "spe" && dvarInt(tmp_menu_optcount) < 13 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_IDLE_SWITCH_SPECTATOR; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "spe" && dvarInt(tmp_menu_optcount) < 13 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_IDLE_SPECTATOR_TIMEOUT; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "spe" && dvarInt(tmp_menu_optcount) < 13 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_IDLE_SHOW_WARNING; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "spe" && dvarInt(tmp_menu_optcount) < 13 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_IDLE_PROTECTED_TAGS; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "spe" && dvarInt(tmp_menu_optcount) < 13 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_IDLE_PROTECTED_GUIDS; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_over"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "spe" && dvarInt(tmp_menu_optcount) == 13)
		mouseExit	{	SAVEMENUDVARS; play "menu_save_changes"; setdvar tmp_menu_optcount 14; close self; }
	}
	// ----- WEAPONS -----
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "wea" && dvarInt(tmp_menu_optcount) < 25 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_RANKED_CLASSES_ENABLE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "wea" && dvarInt(tmp_menu_optcount) < 25 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_GRENADE_ALLOW_COOKING; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "wea" && dvarInt(tmp_menu_optcount) < 25 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_WEAPON_FILLMAGS; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "wea" && dvarInt(tmp_menu_optcount) < 25 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_BULLET_PENETRATION_ENABLED; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "wea" && dvarInt(tmp_menu_optcount) < 25 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_CONCUSSION_GRENADES_BASE_TIME; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "wea" && dvarInt(tmp_menu_optcount) < 25 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_DELETEEXPLOSIVESONSPAWN; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "wea" && dvarInt(tmp_menu_optcount) < 25 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_DELETEEXPLOSIVESONDEATH; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "wea" && dvarInt(tmp_menu_optcount) < 25 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_OBJECTIVE_SAFEZONE_ENABLE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "wea" && dvarInt(tmp_menu_optcount) < 25 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_OBJECTIVE_SAFEZONE_RADIUS; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "wea" && dvarInt(tmp_menu_optcount) < 25 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_DELAY_FRAG_GRENADES; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "wea" && dvarInt(tmp_menu_optcount) < 25 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_DELAY_GRENADE_LAUNCHERS; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "wea" && dvarInt(tmp_menu_optcount) < 25 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_DELAY_SMOKE_GRENADES; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "wea" && dvarInt(tmp_menu_optcount) < 25 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_DELAY_FLASH_GRENADES; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "wea" && dvarInt(tmp_menu_optcount) < 25 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_DELAY_CONCUSSION_GRENADES; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "wea" && dvarInt(tmp_menu_optcount) < 25 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_DELAY_RPGS; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "wea" && dvarInt(tmp_menu_optcount) < 25 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_DELAY_C4S; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "wea" && dvarInt(tmp_menu_optcount) < 25 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_DELAY_CLAYMORES; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "wea" && dvarInt(tmp_menu_optcount) < 25 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_DELAY_ONLY_ROUND_START; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "wea" && dvarInt(tmp_menu_optcount) < 25 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_DELAY_SOUND_ENABLE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "wea" && dvarInt(tmp_menu_optcount) < 25 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_WEAPONJAMS_ENABLE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "wea" && dvarInt(tmp_menu_optcount) < 25 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_WEAPONJAMS_PROBABILITY; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "wea" && dvarInt(tmp_menu_optcount) < 25 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_WEAPONJAMS_GAP_TIME; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "wea" && dvarInt(tmp_menu_optcount) < 25 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SNIPERZOOM_ENABLE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "wea" && dvarInt(tmp_menu_optcount) < 25 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SNIPERZOOM_LOWER_LEVELS; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "wea" && dvarInt(tmp_menu_optcount) < 25 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SNIPERZOOM_UPPER_LEVELS; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "wea" && dvarInt(tmp_menu_optcount) < 25 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_RANGEFINDER_ENABLE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_over"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "wea" && dvarInt(tmp_menu_optcount) == 27)
		mouseExit	{	SAVEMENUDVARS; play "menu_save_changes"; setdvar tmp_menu_optcount 28; close self; }
	}
	// ----- WORLD -----
		itemDef {
			type			1
			style			WINDOW_STYLE_SHADER
			rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
			background		"checkbox_clear"
			forecolor		COLOR_FOCUSED
			visible			when( dvarString(tmp_menu_name) == "wor" && dvarInt(tmp_menu_optcount) < 15 && dvarBool(tmp_menu_optcount) )
			mouseEnter { SETA_SCR_G_GRAVITY; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15" }
	}
	itemDef {
			type			1
			style			WINDOW_STYLE_SHADER
			rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
			background		"checkbox_clear"
			forecolor		COLOR_FOCUSED
			visible			when( dvarString(tmp_menu_name) == "wor" && dvarInt(tmp_menu_optcount) < 15 && dvarBool(tmp_menu_optcount) )
			mouseEnter { SETA_SCR_MAP_SPECIAL_FX_ENABLE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15" }
	}
	itemDef {
			type			1
			style			WINDOW_STYLE_SHADER
			rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
			background		"checkbox_clear"
			forecolor		COLOR_FOCUSED
			visible			when( dvarString(tmp_menu_name) == "wor" && dvarInt(tmp_menu_optcount) < 15 && dvarBool(tmp_menu_optcount) )
			mouseEnter { SETA_SCR_MAP_SPECIAL_FX_RAIN; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15" }
	}
	itemDef {
			type			1
			style			WINDOW_STYLE_SHADER
			rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
			background		"checkbox_clear"
			forecolor		COLOR_FOCUSED
			visible			when( dvarString(tmp_menu_name) == "wor" && dvarInt(tmp_menu_optcount) < 15 && dvarBool(tmp_menu_optcount) )
			mouseEnter { SETA_SCR_MAP_SPECIAL_FX_PARTICLES; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15" }
	}
	itemDef {
			type			1
			style			WINDOW_STYLE_SHADER
			rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
			background		"checkbox_clear"
			forecolor		COLOR_FOCUSED
			visible			when( dvarString(tmp_menu_name) == "wor" && dvarInt(tmp_menu_optcount) < 15 && dvarBool(tmp_menu_optcount) )
			mouseEnter { SETA_SCR_MAP_SPECIAL_FX_BGSOUND; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15" }
	}
	itemDef {
			type			1
			style			WINDOW_STYLE_SHADER
			rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
			background		"checkbox_clear"
			forecolor		COLOR_FOCUSED
			visible			when( dvarString(tmp_menu_name) == "wor" && dvarInt(tmp_menu_optcount) < 15 && dvarBool(tmp_menu_optcount) )
			mouseEnter { SETA_SCR_SHOW_FOG; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15" }
	}
	itemDef {
			type			1
			style			WINDOW_STYLE_SHADER
			rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
			background		"checkbox_clear"
			forecolor		COLOR_FOCUSED
			visible			when( dvarString(tmp_menu_name) == "wor" && dvarInt(tmp_menu_optcount) < 15 && dvarBool(tmp_menu_optcount) )
			mouseEnter { SETA_SCR_DCS_ENABLED; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15" }
	}
	itemDef {
			type			1
			style			WINDOW_STYLE_SHADER
			rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
			background		"checkbox_clear"
			forecolor		COLOR_FOCUSED
			visible			when( dvarString(tmp_menu_name) == "wor" && dvarInt(tmp_menu_optcount) < 15 && dvarBool(tmp_menu_optcount) )
			mouseEnter { SETA_SCR_DCS_DAY_LENGTH; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15" }
	}
	itemDef {
			type			1
			style			WINDOW_STYLE_SHADER
			rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
			background		"checkbox_clear"
			forecolor		COLOR_FOCUSED
			visible			when( dvarString(tmp_menu_name) == "wor" && dvarInt(tmp_menu_optcount) < 15 && dvarBool(tmp_menu_optcount) )
			mouseEnter { SETA_SCR_DCS_DUSK_LENGTH; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15" }
	}
	itemDef {
			type			1
			style			WINDOW_STYLE_SHADER
			rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
			background		"checkbox_clear"
			forecolor		COLOR_FOCUSED
			visible			when( dvarString(tmp_menu_name) == "wor" && dvarInt(tmp_menu_optcount) < 15 && dvarBool(tmp_menu_optcount) )
			mouseEnter { SETA_SCR_DCS_NIGHT_LENGTH; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15" }
	}
	itemDef {
			type			1
			style			WINDOW_STYLE_SHADER
			rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
			background		"checkbox_clear"
			forecolor		COLOR_FOCUSED
			visible			when( dvarString(tmp_menu_name) == "wor" && dvarInt(tmp_menu_optcount) < 15 && dvarBool(tmp_menu_optcount) )
			mouseEnter { SETA_SCR_DCS_DAWN_LENGTH; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15" }
	}
	itemDef {
			type			1
			style			WINDOW_STYLE_SHADER
			rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
			background		"checkbox_clear"
			forecolor		COLOR_FOCUSED
			visible			when( dvarString(tmp_menu_name) == "wor" && dvarInt(tmp_menu_optcount) < 15 && dvarBool(tmp_menu_optcount) )
			mouseEnter { SETA_SCR_DCS_FIRST_CYCLE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15" }
	}
	itemDef {
			type			1
			style			WINDOW_STYLE_SHADER
			rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
			background		"checkbox_clear"
			forecolor		COLOR_FOCUSED
			visible			when( dvarString(tmp_menu_name) == "wor" && dvarInt(tmp_menu_optcount) < 15 && dvarBool(tmp_menu_optcount) )
			mouseEnter { SETA_SCR_DCS_SOUNDS_ENABLE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15" }
	}
	itemDef {
			type			1
			style			WINDOW_STYLE_SHADER
			rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
			background		"checkbox_clear"
			forecolor		COLOR_FOCUSED
			visible			when( dvarString(tmp_menu_name) == "wor" && dvarInt(tmp_menu_optcount) < 15 && dvarBool(tmp_menu_optcount) )
			mouseEnter { SETA_SCR_DCS_RESET_CYCLE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15" }
	}
	
	itemDef {
			type			1
			style			WINDOW_STYLE_SHADER
			rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
			background		"checkbox_over"
			forecolor		COLOR_FOCUSED
			visible			when( dvarString(tmp_menu_name) == "wor" && dvarInt(tmp_menu_optcount) == 15)
			mouseExit	{	SAVEMENUDVARS; play "menu_save_changes"; setdvar tmp_menu_optcount 16; close self; }
	}
}