menuDef
{
	name			"auconfirm"
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
	// ----- ARMORY -----
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_WEAP_ALLOW_ASSAULT_M16; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_WEAP_ALLOW_ASSAULT_AK47; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_WEAP_ALLOW_ASSAULT_M4; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_WEAP_ALLOW_ASSAULT_G3; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_WEAP_ALLOW_ASSAULT_G36C; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_WEAP_ALLOW_ASSAULT_M14; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_WEAP_ALLOW_ASSAULT_MP44; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_WEAP_ALLOW_SPECOPS_MP5; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_WEAP_ALLOW_SPECOPS_SKORPION; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_WEAP_ALLOW_SPECOPS_UZI; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_WEAP_ALLOW_SPECOPS_AK74U; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_WEAP_ALLOW_SPECOPS_P90; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_WEAP_ALLOW_HEAVYGUNNER_SAW; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_WEAP_ALLOW_HEAVYGUNNER_RPD; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
			type			1
			style			WINDOW_STYLE_SHADER
			rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
			background		"checkbox_clear"
			forecolor		COLOR_FOCUSED
			visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
			mouseEnter { SETA_WEAP_ALLOW_HEAVYGUNNER_M60E4; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_WEAP_ALLOW_DEMOLITIONS_WINCHESTER1200; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_WEAP_ALLOW_DEMOLITIONS_M1014; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_WEAP_ALLOW_SNIPER_M40A3; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_WEAP_ALLOW_SNIPER_M21; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_WEAP_ALLOW_SNIPER_DRAGUNOV; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_WEAP_ALLOW_SNIPER_REMINGTON700; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_WEAP_ALLOW_SNIPER_BARRETT; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_WEAP_ALLOW_BERETTA; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_WEAP_ALLOW_COLT45; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_WEAP_ALLOW_USP; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_WEAP_ALLOW_DESERTEAGLE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_WEAP_ALLOW_DESERTEAGLEGOLD; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_WEAP_ALLOW_FRAG_GRENADE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_WEAP_ALLOW_CONCUSSION_GRENADE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_WEAP_ALLOW_FLASH_GRENADE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_WEAP_ALLOW_SMOKE_GRENADE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_ALLOW_STATIONARY_TURRETS; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_WEAP_ALLOW_BINOCULARS; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_ENABLE_NIGHTVISION; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_MELEE_ENABLE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_MELEE_RANGE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_MELEE_STAB_RANGE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_MELEECHARGEFRICTION; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_DYNAMIC_ATTACHMENTS_ENABLE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_ATTACH_ALLOW_PISTOL_NONE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_ATTACH_ALLOW_ASSAULT_NONE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_ATTACH_ALLOW_SPECOPS_NONE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_ATTACH_ALLOW_HEAVYGUNNER_NONE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_ATTACH_ALLOW_SHOTGUN_NONE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_ATTACH_ALLOW_SNIPER_NONE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_ATTACH_ALLOW_PISTOL_SILENCER; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_ATTACH_ALLOW_ASSAULT_SILENCER; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_ATTACH_ALLOW_SPECOPS_SILENCER; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_ATTACH_ALLOW_ASSAULT_REFLEX; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_ATTACH_ALLOW_SPECOPS_REFLEX; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_ATTACH_ALLOW_HEAVYGUNNER_REFLEX; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_ATTACH_ALLOW_SHOTGUN_REFLEX; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_ATTACH_ALLOW_ASSAULT_ACOG; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_ATTACH_ALLOW_SPECOPS_ACOG; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_ATTACH_ALLOW_HEAVYGUNNER_ACOG; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_ATTACH_ALLOW_SNIPER_ACOG; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_ATTACH_ALLOW_HEAVYGUNNER_GRIP; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_ATTACH_ALLOW_SHOTGUN_GRIP; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) < 60 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_ATTACH_ALLOW_ASSAULT_GL; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_over"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "arm" && dvarInt(tmp_menu_optcount) == 60)
		mouseExit	{	SAVEMENUDVARS; play "menu_save_changes"; setdvar tmp_menu_optcount 61; close self; }
	}
	// ----- FAIRNESS -----
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_FORCE_AUTOASSIGN; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_FORCE_AUTOASSIGN_CLAN_TAGS; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SWITCH_TEAMS_AT_HALFTIME; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_TEAMBALANCE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_TEAMBALANCE_SHOW_MESSAGE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_TEAMBALANCE_CHECK_INTERVAL; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_TEAMBALANCE_DELAY; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_TEAMBALANCE_PROTECTED_CLAN_TAGS; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_TEAM_FFTYPE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_TEAM_TEAMKILLPOINTLOSS; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_TEAM_TEAMKILLSPAWNDELAY; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_GAME_DEATHPOINTLOSS; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_GAME_SUICIDEPOINTLOSS; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_PLAYER_SUICIDESPAWNDELAY; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_TK_LIMIT; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_TK_EXPLOSIVE_COUNTASONE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_TK_PUNISHMENT; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_TK_PUNISHMENT_TIME; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SPAWN_PROTECTION_ENABLE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SPAWN_PROTECTION_TIME; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SPAWN_PROTECTION_INVISIBLE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SPAWN_PROTECTION_HITICON; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SPAWN_PROTECTION_MAXDISTANCE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SPAWN_PROTECTION_PUNISHMENT_TIME; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_ANTI_CAMPING_ENABLE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_ANTI_CAMPING_SHOW; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_ANTI_CAMPING_MESSAGE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_ANTI_CAMPING_DISTANCE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_ANTI_CAMPING_TIME; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_ANTI_BUNNY_HOPPING_ENABLE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_ANTI_DOLPHIN_DIVE_ENABLE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_RNG_ENABLED; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_RNG_DISTANCE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_RNG_DAMAGE_CLOSER; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) < 36 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_RNG_DAMAGE_LONGER; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_over"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "fai" && dvarInt(tmp_menu_optcount) == 36)
		mouseExit	{	SAVEMENUDVARS; play "menu_save_changes"; setdvar tmp_menu_optcount 37; close self; }
	}
	// ----- HARDPOINTS -----
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "har" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_GAME_HARDPOINTS; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "har" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HARDPOINT_SHOW_REMINDER; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "har" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_REMOVE_HARDPOINT_ON_DEATH; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "har" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_GAME_HARDPOINTS_CYCLE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "har" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_GAME_HARDPOINTS_MODE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "har" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_ANNOUNCE_KILLSTREAK; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "har" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HARDPOINT_ALLOW_UAV; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "har" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_GAME_FORCEUAV; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "har" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HARDPOINT_UAV_STREAK; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "har" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_UAV_VIEW_TIME; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "har" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_ANNOUNCE_ENEMY_UAV_ONLINE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "har" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_UAV_SHOW_HARDPOINTS; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "har" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HARDPOINT_ALLOW_AIRSTRIKE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "har" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HARDPOINT_AIRSTRIKE_STREAK; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "har" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_AIRSTRIKE_HARDPOINT_INTERVAL; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "har" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_ANNOUNCE_ENEMY_AIRSTRIKE_INBOUND; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "har" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_AIRSTRIKE_ADD_KILLS; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "har" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_AIRSTRIKE_KILLS_TOWARD_STREAK; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "har" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_AIRSTRIKE_DELAY; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "har" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HARDPOINT_ALLOW_HELICOPTER; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "har" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HARDPOINT_HELICOPTER_STREAK; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "har" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HELI_HARDPOINT_INTERVAL; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "har" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_ANNOUNCE_ENEMY_HELI_INBOUND; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "har" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HELICOPTER_ADD_KILLS; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "har" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HELICOPTER_KILLS_TOWARD_STREAK; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "har" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HELICOPTER_DELAY; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "har" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HELI_MAXHEALTH; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "har" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HELI_TARGET_RECOGNITION; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_over"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "har" && dvarInt(tmp_menu_optcount) == 29)
		mouseExit	{	SAVEMENUDVARS; play "menu_save_changes"; setdvar tmp_menu_optcount 30; close self; }
	}
	// ----- HEALTHSYSTEM -----
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "hea" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_PLAYER_MAXHEALTH; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "hea" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HEALTHREGEN_METHOD; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "hea" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_PLAYER_HEALTHREGENTIME; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "hea" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HEALTH_PAIN_SOUND; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "hea" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HEALTH_DEATH_SOUND; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "hea" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HEALTH_HURT_SOUND; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "hea" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HEALTHSYSTEM_SHOW_HEALTHBAR; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "hea" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HEALTHSYSTEM_BLEEDING_ENABLE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "hea" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HEALTHSYSTEM_BLEEDING_START_PERCENTAGE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "hea" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HEALTHSYSTEM_BLEEDING_ICON; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "hea" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HEALTHSYSTEM_BANDAGE_START; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "hea" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HEALTHSYSTEM_BANDAGE_MAX; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "hea" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HEALTHSYSTEM_BANDAGE_SELF; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "hea" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HEALTHSYSTEM_BANDAGE_TIME; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "hea" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HEALTHSYSTEM_MEDIC_ENABLE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "hea" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HEALTHSYSTEM_MEDIC_BANDAGING; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "hea" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HEALTHSYSTEM_MEDIC_HEALING; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "hea" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HEALTHSYSTEM_MEDIC_HEALING_SELF; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "hea" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HEALTHSYSTEM_MEDIC_HEALING_HEALTH; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "hea" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HEALTHSYSTEM_MEDIC_HEALING_TIME; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "hea" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HEALTHSYSTEM_MEDIC_TAKE_BANDAGE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "hea" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HEALTHSYSTEM_HEALING_ICON; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "hea" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HEALTHSYSTEM_HEALTHPACKS_ENABLE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "hea" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HEALTHSYSTEM_HEALTHPACKS_TIMEOUT; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "hea" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HEALTHSYSTEM_HEALTHPACKS_HEALTH; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "hea" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_HEALTHSYSTEM_HEALTHPACKS_RANDOM_HEALTH; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "hea" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_BARREL_DAMAGE_ENABLE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "hea" && dvarInt(tmp_menu_optcount) < 29 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_VEHICLE_DAMAGE_ENABLE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_over"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "hea" && dvarInt(tmp_menu_optcount) == 29)
		mouseExit	{	SAVEMENUDVARS; play "menu_save_changes"; setdvar tmp_menu_optcount 30; close self; }
	}
	// ----- PERKS -----
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_PERK_ALLOW_C4_MP; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_PERK_ALLOW_SPECIALTY_SPECIALGRENADE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_PERK_ALLOW_RPG_MP; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_PERK_ALLOW_CLAYMORE_MP; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_PERK_ALLOW_SPECIALTY_FRAGGRENADE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_PERK_ALLOW_SPECIALTY_EXTRAAMMO; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_PERK_ALLOW_SPECIALTY_DETECTEXPLOSIVE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_PERK_ALLOW_SPECIALTY_BULLETDAMAGE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_PERK_ALLOW_SPECIALTY_ARMORVEST; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_PERK_ALLOW_SPECIALTY_FASTRELOAD; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_PERK_ALLOW_SPECIALTY_ROF; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_PERK_ALLOW_SPECIALTY_TWOPRIMARIES; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_PERK_ALLOW_SPECIALTY_GPSJAMMER; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_PERK_ALLOW_SPECIALTY_EXPLOSIVEDAMAGE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_PERK_ALLOW_SPECIALTY_LONGERSPRINT; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_PERK_ALLOW_SPECIALTY_BULLETACCURACY; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_PERK_ALLOW_SPECIALTY_PISTOLDEATH; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_PERK_ALLOW_SPECIALTY_GRENADEPULLDEATH; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_PERK_ALLOW_SPECIALTY_BULLETPENETRATION; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_PERK_ALLOW_SPECIALTY_HOLDBREATH; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_PERK_ALLOW_SPECIALTY_QUIETER; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_PERK_ALLOW_SPECIALTY_PARABOLIC; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_C4_AMMO_COUNT; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_CLAYMORE_AMMO_COUNT; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_RPG_AMMO_COUNT; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SPECIALTY_FRAGGRENADE_AMMO_COUNT; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SPECIALTY_SPECIALGRENADE_AMMO_COUNT; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_PERK_ARMORVEST; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_PERK_BULLETDAMAGE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_PERK_EXPLOSIVEDAMAGE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_CLAYMORE_FRIENDLY_FIRE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SPECIALTY_GRENADEPULLDEATH_CHECK_FRAGS; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SPECIALTY_PISTOLDEATH_CHECK_PISTOL; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_CLAYMORE_CHECK_PLANT_DISTANCE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_CLAYMORE_ADD_KILL_ONLY_IF_DIRECTED; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_CLAYMORE_ARM_TIME; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_EXPLOSIVES_ALLOW_DISARM; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_EXPLOSIVES_DISARM_TIME; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_CLAYMORE_SHOW_HEADICON; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_CLAYMORE_SHOW_LASER_BEAMS; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) < 42 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SHOW_C4_BLINK_EFFECT; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_over"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "per" && dvarInt(tmp_menu_optcount) == 42)
		mouseExit	{	SAVEMENUDVARS; play "menu_save_changes"; setdvar tmp_menu_optcount 43; close self; }
	}
	// ----- PLAYER -----
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "pla" && dvarInt(tmp_menu_optcount) < 23 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_FALLDAMAGEMINHEIGHT; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "pla" && dvarInt(tmp_menu_optcount) < 23 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_FALLDAMAGEMAXHEIGHT; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "pla" && dvarInt(tmp_menu_optcount) < 23 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_JUMP_HEIGHT; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "pla" && dvarInt(tmp_menu_optcount) < 23 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_JUMP_SLOWDOWN_ENABLE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "pla" && dvarInt(tmp_menu_optcount) < 23 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_GAME_ALLOW_KILLCAM; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "pla" && dvarInt(tmp_menu_optcount) < 23 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_PLAYER_FORCERESPAWN; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "pla" && dvarInt(tmp_menu_optcount) < 23 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_QUICKACTIONS_ENABLE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "pla" && dvarInt(tmp_menu_optcount) < 23 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_THIRDPERSON_ENABLE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "pla" && dvarInt(tmp_menu_optcount) < 23 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_PLAYER_LEAN_FIX; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "pla" && dvarInt(tmp_menu_optcount) < 23 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_BOB_EFFECT_ENABLE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "pla" && dvarInt(tmp_menu_optcount) < 23 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_CG_FOOTSTEPS; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "pla" && dvarInt(tmp_menu_optcount) < 23 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_CAP_ENABLE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "pla" && dvarInt(tmp_menu_optcount) < 23 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_CAP_TIME; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "pla" && dvarInt(tmp_menu_optcount) < 23 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_CAP_TIME_ACTIVATED; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "pla" && dvarInt(tmp_menu_optcount) < 23 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_CAP_FIRSTSPAWN; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "pla" && dvarInt(tmp_menu_optcount) < 23 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_CAP_ALLOW_OTHERMODELS; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "pla" && dvarInt(tmp_menu_optcount) < 23 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_DE_DROPWEAPON_ON_ARM_HIT; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "pla" && dvarInt(tmp_menu_optcount) < 23 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_DE_DROPWEAPON_CHANCE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "pla" && dvarInt(tmp_menu_optcount) < 23 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_DE_FALLDOWN_ON_LEG_HIT; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "pla" && dvarInt(tmp_menu_optcount) < 23 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_DE_FALLDOWN_CHANCE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "pla" && dvarInt(tmp_menu_optcount) < 23 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_DE_SHIFTVIEW_ON_DAMAGE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "pla" && dvarInt(tmp_menu_optcount) < 23 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_DE_BREAK_ANKLE_ON_FALL; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "pla" && dvarInt(tmp_menu_optcount) < 23 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_DE_SLOWDOWN_ON_LEG_HIT; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_over"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "pla" && dvarInt(tmp_menu_optcount) == 24)
		mouseExit	{	SAVEMENUDVARS; play "menu_save_changes"; setdvar tmp_menu_optcount 25; close self; }
	}
	// ----- SCORES -----
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "sco" && dvarInt(tmp_menu_optcount) < 33 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_ENABLE_SCORESYSTEM; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "sco" && dvarInt(tmp_menu_optcount) < 33 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SCORE_TK_AFFECTS_TEAMSCORE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "sco" && dvarInt(tmp_menu_optcount) < 33 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SCORE_STANDARD_KILL; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "sco" && dvarInt(tmp_menu_optcount) < 33 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SCORE_HEADSHOT_KILL; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "sco" && dvarInt(tmp_menu_optcount) < 33 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SCORE_MELEE_KILL; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "sco" && dvarInt(tmp_menu_optcount) < 33 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SCORE_GRENADE_KILL; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "sco" && dvarInt(tmp_menu_optcount) < 33 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SCORE_C4_KILL; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "sco" && dvarInt(tmp_menu_optcount) < 33 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SCORE_CLAYMORE_KILL; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "sco" && dvarInt(tmp_menu_optcount) < 33 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SCORE_RPG_KILL; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "sco" && dvarInt(tmp_menu_optcount) < 33 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SCORE_GRENADE_LAUNCHER_KILL; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "sco" && dvarInt(tmp_menu_optcount) < 33 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SCORE_AIRSTRIKE_KILL; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "sco" && dvarInt(tmp_menu_optcount) < 33 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SCORE_HELICOPTER_KILL; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "sco" && dvarInt(tmp_menu_optcount) < 33 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SCORE_VEHICLE_EXPLOSION_KILL; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "sco" && dvarInt(tmp_menu_optcount) < 33 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SCORE_BARREL_EXPLOSION_KILL; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "sco" && dvarInt(tmp_menu_optcount) < 33 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SCORE_ASSIST_KILL; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "sco" && dvarInt(tmp_menu_optcount) < 33 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SCORE_ASSIST_25_KILL; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "sco" && dvarInt(tmp_menu_optcount) < 33 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SCORE_ASSIST_50_KILL; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "sco" && dvarInt(tmp_menu_optcount) < 33 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SCORE_ASSIST_75_KILL; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "sco" && dvarInt(tmp_menu_optcount) < 33 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SCORE_PLAYER_DEATH; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "sco" && dvarInt(tmp_menu_optcount) < 33 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SCORE_PLAYER_SUICIDE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "sco" && dvarInt(tmp_menu_optcount) < 33 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SCORE_PLAYER_TEAMKILL; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "sco" && dvarInt(tmp_menu_optcount) < 33 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SCORE_HARDPOINT_USED; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "sco" && dvarInt(tmp_menu_optcount) < 33 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SCORE_SHOT_DOWN_HELICOPTER; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "sco" && dvarInt(tmp_menu_optcount) < 33 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SCORE_CAPTURE_OBJECTIVE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "sco" && dvarInt(tmp_menu_optcount) < 33 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SCORE_TAKE_OBJECTIVE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "sco" && dvarInt(tmp_menu_optcount) < 33 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SCORE_RETURN_OBJECTIVE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "sco" && dvarInt(tmp_menu_optcount) < 33 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SCORE_DEFEND_OBJECTIVE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "sco" && dvarInt(tmp_menu_optcount) < 33 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SCORE_HOLDING_OBJECTIVE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "sco" && dvarInt(tmp_menu_optcount) < 33 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SCORE_KILL_OBJECTIVE_CARRIER; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "sco" && dvarInt(tmp_menu_optcount) < 33 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SCORE_ASSAULT_OBJECTIVE; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "sco" && dvarInt(tmp_menu_optcount) < 33 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SCORE_PLANT_BOMB; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_clear"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "sco" && dvarInt(tmp_menu_optcount) < 33 && dvarBool(tmp_menu_optcount) )
		mouseEnter { SETA_SCR_SCORE_DEFUSE_BOMB; execNow "toggle tmp_menu_optcount 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33" }
	}
	itemDef {
		type			1
		style			WINDOW_STYLE_SHADER
		rect			-20 -26 16 16 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
		background		"checkbox_over"
		forecolor		COLOR_FOCUSED
		visible			when( dvarString(tmp_menu_name) == "sco" && dvarInt(tmp_menu_optcount) == 33)
		mouseExit	{	SAVEMENUDVARS; play "menu_save_changes"; setdvar tmp_menu_optcount 34; close self; }
	}
}