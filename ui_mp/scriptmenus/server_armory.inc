#include "ui_mp/menustyle.inc"

#include "ui_mp/scriptmenus/server_armory_setadvars.inc"
{
menuDef
{
	name			"settings_quick_war_@MPUI_RULES_SCORE_LIMIT"
	fullScreen		0
	rect			0 0 640 480
	focusColor		COLOR_FOCUSED
	//soundloop		""
	onOpen
	{
		setdvar tmp_menu_name arm;
		setdvar tmp_menu_optcount 0;
		setdvar tmp_menu_savedsess 0;
		setdvar tmp_open_event_d1 1;
		setdvar tmp_open_event_d2 1;
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
	
	CHOICE_MENU_TITLE("@OW_SERVER_ARMORY" )
	
#undef TEXTSIZE_BUTTON_PC
#define TEXTSIZE_BUTTON_PC	0.33
	
#undef	CHOICE_SIZE_X
#define CHOICE_SIZE_X		60
	
#undef CHOICE_X_SPACING
#define CHOICE_X_SPACING 130
	
#undef CHOICE_X_START
#define CHOICE_X_START 16
	
#undef CHOICE_Y_START
#define CHOICE_Y_START 34
	
#undef CHOICE_Y_COUNT
#define CHOICE_Y_COUNT			7
	
	CHOICE_DVARYESNO_VIS( 1, "@WEAPON_M16", menu_weap_allow_assault_m16, SET_WEAP_ALLOW_ASSAULT_M16; , 1 )
	CHOICE_DVARYESNO_VIS( 2, "@WEAPON_AK47", menu_weap_allow_assault_ak47, SET_WEAP_ALLOW_ASSAULT_AK47; , 1 )
	CHOICE_DVARYESNO_VIS( 3, "@WEAPON_M4_CARBINE", menu_weap_allow_assault_m4, SET_WEAP_ALLOW_ASSAULT_M4; , 1 )
	CHOICE_DVARYESNO_VIS( 4, "@WEAPON_G3", menu_weap_allow_assault_g3, SET_WEAP_ALLOW_ASSAULT_G3; , 1 )
	CHOICE_DVARYESNO_VIS( 5, "@WEAPON_G36C", menu_weap_allow_assault_g36c, SET_WEAP_ALLOW_ASSAULT_G36C; , 1 )
	CHOICE_DVARYESNO_VIS( 6, "@WEAPON_M14", menu_weap_allow_assault_m14, SET_WEAP_ALLOW_ASSAULT_M14; , 1 )
	CHOICE_DVARYESNO_VIS( 7, "@WEAPON_MP44", menu_weap_allow_assault_mp44, SET_WEAP_ALLOW_ASSAULT_MP44; , 1 )
	
	CHOICE_DVARYESNO_VIS( 8, "@WEAPON_MP5", menu_weap_allow_specops_mp5, SET_WEAP_ALLOW_SPECOPS_MP5; , 1 )
	CHOICE_DVARYESNO_VIS( 9, "@WEAPON_SKORPION", menu_weap_allow_specops_skorpion, SET_WEAP_ALLOW_SPECOPS_SKORPION; , 1 )
	CHOICE_DVARYESNO_VIS( 10, "@WEAPON_UZI", menu_weap_allow_specops_uzi, SET_WEAP_ALLOW_SPECOPS_UZI; , 1 )
	CHOICE_DVARYESNO_VIS( 11, "@WEAPON_AK74U", menu_weap_allow_specops_ak74u, SET_WEAP_ALLOW_SPECOPS_AK74U; , 1 )
	CHOICE_DVARYESNO_VIS( 12, "@WEAPON_P90", menu_weap_allow_specops_p90, SET_WEAP_ALLOW_SPECOPS_P90; , 1 )
	
	CHOICE_DVARYESNO_VIS( 15, "@WEAPON_SAW", menu_weap_allow_heavygunner_saw, SET_WEAP_ALLOW_HEAVYGUNNER_SAW; , 1 )
	CHOICE_DVARYESNO_VIS( 16, "@WEAPON_RPD", menu_weap_allow_heavygunner_rpd, SET_WEAP_ALLOW_HEAVYGUNNER_RPD; , 1 )
	CHOICE_DVARYESNO_VIS( 17, "@WEAPON_M60E4", menu_weap_allow_heavygunner_m60e4, SET_WEAP_ALLOW_HEAVYGUNNER_M60E4; , 1 )
	
	CHOICE_DVARYESNO_VIS( 20, "@WEAPON_WINCHESTER1200", menu_weap_allow_demolitions_winchester1200, SET_WEAP_ALLOW_DEMOLITIONS_WINCHESTER1200; , 1 )
	CHOICE_DVARYESNO_VIS( 21, "@WEAPON_BENELLI", menu_weap_allow_demolitions_m1014, SET_WEAP_ALLOW_DEMOLITIONS_M1014; , 1 )
	
	CHOICE_DVARYESNO_VIS( 22, "@WEAPON_M40A3", menu_weap_allow_sniper_m40a3, SET_WEAP_ALLOW_SNIPER_M40A3; , 1 )
	CHOICE_DVARYESNO_VIS( 23, "@WEAPON_M21", menu_weap_allow_sniper_m21, SET_WEAP_ALLOW_SNIPER_M21; , 1 )
	CHOICE_DVARYESNO_VIS( 24, "@WEAPON_DRAGUNOV", menu_weap_allow_sniper_dragunov, SET_WEAP_ALLOW_SNIPER_DRAGUNOV; , 1 )
	CHOICE_DVARYESNO_VIS( 25, "@WEAPON_REMINGTON700", menu_weap_allow_sniper_remington700, SET_WEAP_ALLOW_SNIPER_REMINGTON700; , 1 )
	CHOICE_DVARYESNO_VIS( 26, "@WEAPON_BARRETT", menu_weap_allow_sniper_barrett, SET_WEAP_ALLOW_SNIPER_BARRETT; , 1 )
	
	
	CHOICE_DVARYESNO_VIS( 29, "@WEAPON_BERETTA", menu_weap_allow_beretta, SET_WEAP_ALLOW_BERETTA; , 1 )
	CHOICE_DVARYESNO_VIS( 30, "@WEAPON_COLT1911", menu_weap_allow_colt45, SET_WEAP_ALLOW_COLT45; , 1 )
	CHOICE_DVARYESNO_VIS( 31, "@WEAPON_USP", menu_weap_allow_usp, SET_WEAP_ALLOW_USP; , 1 )
	CHOICE_DVARYESNO_VIS( 33, "@WEAPON_DESERTEAGLE", menu_weap_allow_deserteagle, SET_WEAP_ALLOW_DESERTEAGLE; , 1 )
	CHOICE_DVARYESNO_VIS( 34, "@WEAPON_DESERTEAGLEGOLD", menu_weap_allow_deserteaglegold, SET_WEAP_ALLOW_DESERTEAGLEGOLD; , 1 )
	
#undef	CHOICE_X_START
#define CHOICE_X_START	-400
	
#undef CHOICE_Y_START
#define CHOICE_Y_START 100
	
#undef	CHOICE_SIZE_X
#define CHOICE_SIZE_X		120
	
#undef CHOICE_X_SPACING
#define CHOICE_X_SPACING 200
	
#undef CHOICE_Y_COUNT
#define CHOICE_Y_COUNT 15
	
	CHOICE_DVARYESNO_VIS( 36, "@OW_MENU_FRAG_GRENADE", menu_weap_allow_frag_grenade, SET_WEAP_ALLOW_FRAG_GRENADE; , 1 )
	CHOICE_DVARYESNO_VIS( 37, "@WEAPON_CONCUSSION_GRENADE", menu_weap_allow_concussion_grenade, SET_WEAP_ALLOW_CONCUSSION_GRENADE; , 1 )
	CHOICE_DVARYESNO_VIS( 38, "@WEAPON_FLASH_GRENADE", menu_weap_allow_flash_grenade, SET_WEAP_ALLOW_FLASH_GRENADE; , 1 )
	CHOICE_DVARYESNO_VIS( 39, "@WEAPON_SMOKE_GRENADE", menu_weap_allow_smoke_grenade, SET_WEAP_ALLOW_SMOKE_GRENADE; , 1 )
	
	CHOICE_DVARYESNO_VIS( 40, "@OW_SCR_ALLOW_STATIONARY_TURRETS", menu_scr_allow_stationary_turrets, SET_SCR_ALLOW_STATIONARY_TURRETS; , when( dvarString(menu_cfg_gt) != "ftag" ) )
	
	CHOICE_DVARYESNO_VIS( 42, "@OW_SCR_MELEE_ENABLE", menu_scr_melee_enable, SET_SCR_MELEE_ENABLE; , 1 )
	CHOICE_DVAREDIT_NUMERIC_VIS( 43, "@OW_SCR_MELEE_RANGE", menu_scr_melee_range, 3, SET_SCR_MELEE_RANGE; , when( dvarBool(menu_scr_melee_enable) == 1 ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 44, "@OW_SCR_MELEE_STAB_RANGE", menu_scr_melee_stab_range, 3, SET_SCR_MELEE_STAB_RANGE; , when( dvarBool(menu_scr_melee_enable) == 1 ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 45, "@OW_SCR_MELEECHARGEFRICTION", menu_scr_meleeChargeFriction, 3, SET_SCR_MELEECHARGEFRICTION; , when( dvarBool(menu_scr_melee_enable) == 1 ) )
	
#undef	CHOICE_X_START
#define CHOICE_X_START	-510
	
#undef CHOICE_Y_START
#define CHOICE_Y_START 210
	
#undef	CHOICE_SIZE_X
#define CHOICE_SIZE_X		120
	
#undef CHOICE_X_SPACING
#define CHOICE_X_SPACING 240
	
	CHOICE_DVARYESNO_VIS( 46, "@OW_SCR_DYNAMIC_ATTACHMENTS_ENABLE", menu_scr_dynamic_attachments_enable, SET_SCR_DYNAMIC_ATTACHMENTS_ENABLE; , 1 )
	CHOICE_DVARFLOATLIST_VIS( 48, "@OW_MENU_MANAGE_ATTACHMENTS", menu_cfg_att, { "@WEAPON_ASSAULTRIFLES" 0 "@WEAPON_SMGS" 1 "@OW_LMGS" 2 "@WEAPON_SHOTGUNS" 3 "@WEAPON_SNIPERRIFLES" 4 "@OW_PISTOLS" 5 }, ; , 1 )
	CHOICE_DVARYESNO_VIS( 49, "@OW_MENU_ALLOW_NO_ATTACHMENTS", menu_attach_allow_pistol_none, SET_ATTACH_ALLOW_PISTOL_NONE; , when( dvarInt(menu_cfg_att) == 5 ) )
	CHOICE_DVARYESNO_VIS( 49, "@OW_MENU_ALLOW_NO_ATTACHMENTS", menu_attach_allow_assault_none, SET_ATTACH_ALLOW_ASSAULT_NONE; , when( dvarInt(menu_cfg_att) == 0 ))
	CHOICE_DVARYESNO_VIS( 49, "@OW_MENU_ALLOW_NO_ATTACHMENTS", menu_attach_allow_specops_none, SET_ATTACH_ALLOW_SPECOPS_NONE; , when( dvarInt(menu_cfg_att) == 1 ))
	CHOICE_DVARYESNO_VIS( 49, "@OW_MENU_ALLOW_NO_ATTACHMENTS", menu_attach_allow_heavygunner_none, SET_ATTACH_ALLOW_HEAVYGUNNER_NONE; , when( dvarInt(menu_cfg_att) == 2 ))
	CHOICE_DVARYESNO_VIS( 49, "@OW_MENU_ALLOW_NO_ATTACHMENTS", menu_attach_allow_shotgun_none, SET_ATTACH_ALLOW_SHOTGUN_NONE; , when( dvarInt(menu_cfg_att) == 3 ))
	CHOICE_DVARYESNO_VIS( 49, "@OW_MENU_ALLOW_NO_ATTACHMENTS", menu_attach_allow_sniper_none, SET_ATTACH_ALLOW_SNIPER_NONE; , when( dvarInt(menu_cfg_att) == 4 ))
	CHOICE_DVARYESNO_VIS( 50, "@WEAPON_SILENCER", menu_attach_allow_pistol_silencer, SET_ATTACH_ALLOW_PISTOL_SILENCER; , when( dvarInt(menu_cfg_att) == 5 ) )
	CHOICE_DVARYESNO_VIS( 50, "@WEAPON_SILENCER", menu_attach_allow_assault_silencer, SET_ATTACH_ALLOW_ASSAULT_SILENCER; , when( dvarInt(menu_cfg_att) == 0 ) )
	CHOICE_DVARYESNO_VIS( 50, "@WEAPON_SILENCER", menu_attach_allow_specops_silencer, SET_ATTACH_ALLOW_SPECOPS_SILENCER; , when( dvarInt(menu_cfg_att) == 1 ) )
	CHOICE_DVARYESNO_VIS( 51, "@WEAPON_REDDOT", menu_attach_allow_assault_reflex, SET_ATTACH_ALLOW_ASSAULT_REFLEX; , when( dvarInt(menu_cfg_att) == 0 ) )
	CHOICE_DVARYESNO_VIS( 51, "@WEAPON_REDDOT", menu_attach_allow_specops_reflex, SET_ATTACH_ALLOW_SPECOPS_REFLEX; , when( dvarInt(menu_cfg_att) == 1 ) )
	CHOICE_DVARYESNO_VIS( 51, "@WEAPON_REDDOT", menu_attach_allow_heavygunner_reflex, SET_ATTACH_ALLOW_HEAVYGUNNER_REFLEX; , when( dvarInt(menu_cfg_att) == 2 ) )
	CHOICE_DVARYESNO_VIS( 51, "@WEAPON_REDDOT", menu_attach_allow_shotgun_reflex, SET_ATTACH_ALLOW_SHOTGUN_REFLEX; , when( dvarInt(menu_cfg_att) == 3 ) )
	CHOICE_DVARYESNO_VIS( 52, "@WEAPON_ACOG", menu_attach_allow_assault_acog, SET_ATTACH_ALLOW_ASSAULT_ACOG; , when( dvarInt(menu_cfg_att) == 0 ) )
	CHOICE_DVARYESNO_VIS( 52, "@WEAPON_ACOG", menu_attach_allow_specops_acog, SET_ATTACH_ALLOW_SPECOPS_ACOG; , when( dvarInt(menu_cfg_att) == 1 ) )
	CHOICE_DVARYESNO_VIS( 52, "@WEAPON_ACOG", menu_attach_allow_heavygunner_acog, SET_ATTACH_ALLOW_HEAVYGUNNER_ACOG; , when( dvarInt(menu_cfg_att) == 2 ) )
	CHOICE_DVARYESNO_VIS( 52, "@WEAPON_ACOG", menu_attach_allow_sniper_acog, SET_ATTACH_ALLOW_SNIPER_ACOG; , when( dvarInt(menu_cfg_att) == 4 ) )
	CHOICE_DVARYESNO_VIS( 53, "@WEAPON_GRIP", menu_attach_allow_heavygunner_grip, SET_ATTACH_ALLOW_HEAVYGUNNER_GRIP; , when( dvarInt(menu_cfg_att) == 2 ) )
	CHOICE_DVARYESNO_VIS( 53, "@WEAPON_GRIP", menu_attach_allow_shotgun_grip, SET_ATTACH_ALLOW_SHOTGUN_GRIP; , when( dvarInt(menu_cfg_att) == 3 ) )
	CHOICE_DVARYESNO_VIS( 54, "@WEAPON_GRENADE_LAUNCHER", menu_attach_allow_assault_gl, SET_ATTACH_ALLOW_ASSAULT_GL; , when( dvarInt(menu_cfg_att) == 0 ) )
	
#undef	CHOICE_X_START
#define CHOICE_X_START	-280
	
#undef CHOICE_Y_START
#define CHOICE_Y_START -15
	
	CHOICE_DVARYESNO_VIS( 56, "@OW_BINOCULARS", menu_weap_allow_binoculars, SET_WEAP_ALLOW_BINOCULARS; , 1 )
	//CHOICE_DVARYESNO_VIS( 57, "@MENU_NIGHT_VISION", menu_scr_enable_nightvision, SET_SCR_ENABLE_NIGHTVISION; , 1 )
	
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
	
	CHOICE_DVARSTRINGLIST_VIS( 100, "@OW_MENU_CONFIGURE_TO_GAMETYPE", menu_cfg_gt, { "@OW_MENU_CFG_FOR_DEF_GT"; "_def"; "@OW_ASSASSINATION"; "ass"; "@OW_BEHIND_ENEMY_LINES"; "bel"; "@OW_CAPTURE_AND_HOLD"; "ch"; "@MPUI_CAPTURE_THE_FLAG"; "ctf"; "@MPUI_DOMINATION"; "dom"; "@MPUI_DEATHMATCH"; "dm"; "@OW_FREEZETAG"; "ftag"; "@OW_GREED"; "gr"; "@MPUI_HEADQUARTERS"; "koth"; "@OW_RETRIEVAL"; "re"; "@MPUI_SABOTAGE"; "sab"; "@MPUI_SEARCH_AND_DESTROY_CLASSIC"; "sd"; "@MPUI_WAR"; "war"; "@OW_TEAM_GREED"; "tgr"; }, setdvar tmp_menu_optcount 0;setdvar tmp_menu_savedsess 0;FILLMENUDVARS;setdvar tmp_open_event_d1 1;setdvar tmp_open_event_d2 1; , 1 )
	
	// hack for cleaning dvars (long script) on menu open
	itemDef {
		type			ITEM_TYPE_BUTTON
		rect			-600 -800 2000 2000 0 0
		text			""
		textfont		UI_FONT_NORMAL
		visible			when( dvarbool(tmp_open_event_d1) )
		onfocus { CLEANMENUDVARS1;setdvar tmp_open_event_d1 0; }
		mouseEnter { CLEANMENUDVARS1;setdvar tmp_open_event_d1 0; }
	}
		
	// Part 2 (script action is really long on this menu)
	itemDef {
		type			ITEM_TYPE_BUTTON
		rect			-600 -800 2000 2000 0 0
		text			""
		textfont		UI_FONT_NORMAL
		visible			when( dvarbool(tmp_open_event_d2) )
		onfocus { CLEANMENUDVARS2;setdvar tmp_open_event_d2 0; }
		mouseEnter { CLEANMENUDVARS2;setdvar tmp_open_event_d2 0; }
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
		visible			when( dvarInt(tmp_menu_optcount) == 61)
	}
}
#include "ui_mp/scriptmenus/storetodisk1.inc"
#include "ui_mp/scriptmenus/storetodisk2.inc"
}