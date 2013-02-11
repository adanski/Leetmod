#include "ui_mp/menustyle.inc"

#include "ui_mp/scriptmenus/server_perks_setadvars.inc"

menuDef
{
	name			"settings_quick_war_@MPUI_RULES_TIME_LIMIT"
	fullScreen		0
	rect			0 0 640 480
	focusColor		COLOR_FOCUSED
	//soundloop		""
	onOpen
	{
		setdvar tmp_menu_name per;
		setdvar tmp_menu_optcount 0;
		setdvar tmp_menu_savedsess 0;
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
	
	CHOICE_DVARYESNO_VIS( 1, "@PERKS_C4_X_2", menu_perk_allow_c4_mp, SET_PERK_ALLOW_C4_MP; , when( dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "ss" ) )
	CHOICE_DVARYESNO_VIS( 2, "@PERKS_SPECIAL_GRENADES_X_3", menu_perk_allow_specialty_specialgrenade, SET_PERK_ALLOW_SPECIALTY_SPECIALGRENADE; , when( dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "ss" ) )
	CHOICE_DVARYESNO_VIS( 3, "@PERKS_RPG7_X_2", menu_perk_allow_rpg_mp, SET_PERK_ALLOW_RPG_MP; , when( dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "ss" ) )
	CHOICE_DVARYESNO_VIS( 4, "@PERKS_CLAYMORE_X_2", menu_perk_allow_claymore_mp, SET_PERK_ALLOW_CLAYMORE_MP; , when( dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "ss" ) )
	CHOICE_DVARYESNO_VIS( 5, "@PERKS_FRAG_X_3", menu_perk_allow_specialty_fraggrenade, SET_PERK_ALLOW_SPECIALTY_FRAGGRENADE; , when( dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "ss" ) )
	CHOICE_DVARYESNO_VIS( 6, "@PERKS_BANDOLIER", menu_perk_allow_specialty_extraammo, SET_PERK_ALLOW_SPECIALTY_EXTRAAMMO; , when( dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "ss" ) )
	CHOICE_DVARYESNO_VIS( 7, "@PERKS_BOMB_SQUAD", menu_perk_allow_specialty_detectexplosive, SET_PERK_ALLOW_SPECIALTY_DETECTEXPLOSIVE; , when( dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "ss" ) )
	
	CHOICE_DVARYESNO_VIS( 9, "@PERKS_STOPPING_POWER", menu_perk_allow_specialty_bulletdamage, SET_PERK_ALLOW_SPECIALTY_BULLETDAMAGE; , when( dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "ss" ) )
	CHOICE_DVARYESNO_VIS( 10, "@PERKS_JUGGERNAUT", menu_perk_allow_specialty_armorvest, SET_PERK_ALLOW_SPECIALTY_ARMORVEST; , when( dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "ss" ) )
	CHOICE_DVARYESNO_VIS( 11, "@PERKS_SLEIGHT_OF_HAND", menu_perk_allow_specialty_fastreload, SET_PERK_ALLOW_SPECIALTY_FASTRELOAD; , when( dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "ss" ) )
	CHOICE_DVARYESNO_VIS( 12, "@PERKS_DOUBLE_TAP", menu_perk_allow_specialty_rof, SET_PERK_ALLOW_SPECIALTY_ROF; , when( dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "ss" ) )
	CHOICE_DVARYESNO_VIS( 13, "@PERKS_OVERKILL", menu_perk_allow_specialty_twoprimaries, SET_PERK_ALLOW_SPECIALTY_TWOPRIMARIES; , when( dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "ss" ) )
	CHOICE_DVARYESNO_VIS( 14, "@PERKS_UAV_JAMMER", menu_perk_allow_specialty_gpsjammer, SET_PERK_ALLOW_SPECIALTY_GPSJAMMER; , when( dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "ss" ) )
	CHOICE_DVARYESNO_VIS( 15, "@PERKS_SONIC_BOOM", menu_perk_allow_specialty_explosivedamage, SET_PERK_ALLOW_SPECIALTY_EXPLOSIVEDAMAGE; , when( dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "ss" ) )
	
	CHOICE_DVARYESNO_VIS( 17, "@PERKS_EXTREME_CONDITIONING", menu_perk_allow_specialty_longersprint, SET_PERK_ALLOW_SPECIALTY_LONGERSPRINT; , when( dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "ss" ) )
	CHOICE_DVARYESNO_VIS( 18, "@PERKS_STEADY_AIM", menu_perk_allow_specialty_bulletaccuracy, SET_PERK_ALLOW_SPECIALTY_BULLETACCURACY; , when( dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "ss" ) )
	CHOICE_DVARYESNO_VIS( 19, "@PERKS_LAST_STAND", menu_perk_allow_specialty_pistoldeath, SET_PERK_ALLOW_SPECIALTY_PISTOLDEATH; , when( dvarString(menu_cfg_gt) != "bel" && dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "ss" ) )
	CHOICE_DVARYESNO_VIS( 20, "@PERKS_MARTYRDOM", menu_perk_allow_specialty_grenadepulldeath, SET_PERK_ALLOW_SPECIALTY_GRENADEPULLDEATH; , when( dvarString(menu_cfg_gt) != "bel" && dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "ss" ) )
	CHOICE_DVARYESNO_VIS( 21, "@PERKS_DEEP_IMPACT", menu_perk_allow_specialty_bulletpenetration, SET_PERK_ALLOW_SPECIALTY_BULLETPENETRATION; , when( dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "ss" ) )
	CHOICE_DVARYESNO_VIS( 22, "@PERKS_IRON_LUNGS", menu_perk_allow_specialty_holdbreath, SET_PERK_ALLOW_SPECIALTY_HOLDBREATH; , when( dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "ss" ) )
	CHOICE_DVARYESNO_VIS( 23, "@PERKS_DEAD_SILENCE", menu_perk_allow_specialty_quieter, SET_PERK_ALLOW_SPECIALTY_QUIETER; , when( dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "ss" ) )
	CHOICE_DVARYESNO_VIS( 24, "@PERKS_EAVESDROP", menu_perk_allow_specialty_parabolic, SET_PERK_ALLOW_SPECIALTY_PARABOLIC; , when( dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "ss" ) )
	
#undef	CHOICE_X_START
#define CHOICE_X_START			-860
	
#undef CHOICE_Y_START
#define CHOICE_Y_START 220
	
#undef CHOICE_X_SPACING
#define CHOICE_X_SPACING 310
	
#undef CHOICE_Y_COUNT
#define CHOICE_Y_COUNT 10
	
	CHOICE_DVAREDIT_NUMERIC_VIS( 31, "@OW_SCR_C4_AMMO_COUNT", menu_scr_c4_ammo_count, 2, SET_SCR_C4_AMMO_COUNT; , when( dvarBool(menu_perk_allow_c4_mp) && dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "ss" ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 32, "@OW_SCR_CLAYMORE_AMMO_COUNT", menu_scr_claymore_ammo_count, 2, SET_SCR_CLAYMORE_AMMO_COUNT; , when( dvarBool(menu_perk_allow_claymore_mp) && dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "ss" ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 33, "@OW_SCR_RPG_AMMO_COUNT", menu_scr_rpg_ammo_count, 2, SET_SCR_RPG_AMMO_COUNT; , when( dvarBool(menu_perk_allow_rpg_mp) && dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "ss" ) )
	
	CHOICE_DVAREDIT_NUMERIC_VIS( 34, "@OW_SPECIALTY_FRAGGRENADE_AMMO_COUNT", menu_specialty_fraggrenade_ammo_count, 2, SET_SPECIALTY_FRAGGRENADE_AMMO_COUNT; , when( dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "ss" ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 35, "@OW_SPECIALTY_SPECIALGRENADE_AMMO_COUNT", menu_specialty_specialgrenade_ammo_count, 2, SET_SPECIALTY_SPECIALGRENADE_AMMO_COUNT; , when( dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "ss" ) )
	
	CHOICE_DVAREDIT_NUMERIC_VIS( 36, "@OW_ARMOR_VEST_VALUE", menu_perk_armorvest, 3, SET_PERK_ARMORVEST; , when( dvarBool(menu_perk_allow_specialty_armorvest) ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 37, "@OW_BULLET_DAMAGE_VALUE", menu_perk_bulletdamage, 3, SET_PERK_BULLETDAMAGE; , when( dvarBool(menu_perk_allow_specialty_bulletdamage) ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 38, "@OW_EXPLOSIVE_DAMAGE_VALUE", menu_perk_explosivedamage, 3, SET_PERK_EXPLOSIVEDAMAGE; , when( dvarBool(menu_perk_allow_specialty_explosivedamage) ) )
	
	CHOICE_DVARFLOATLIST_VIS( 39, "@OW_SCR_CLAYMORE_FRIENDLY_FIRE", menu_scr_claymore_friendly_fire, { "Disabled" 0 "Enabled (except owner)" 1 "Enabled (everyone)" 2 }, SET_SCR_CLAYMORE_FRIENDLY_FIRE; , when( dvarBool(menu_perk_allow_claymore_mp) && dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "ss" ) )
	
	CHOICE_DVARYESNO_VIS( 41, "@OW_SPECIALTY_GRENADEPULLDEATH_CHECK_FRAGS", menu_specialty_grenadepulldeath_check_frags, SET_SPECIALTY_GRENADEPULLDEATH_CHECK_FRAGS; , when( dvarBool(menu_perk_allow_specialty_grenadepulldeath) ) )
	CHOICE_DVARYESNO_VIS( 42, "@OW_SPECIALTY_PISTOLDEATH_CHECK_PISTOL", menu_specialty_pistoldeath_check_pistol, SET_SPECIALTY_PISTOLDEATH_CHECK_PISTOL; , when( dvarBool(menu_perk_allow_specialty_pistoldeath) ) )
	CHOICE_DVARYESNO_VIS( 43, "@OW_SCR_CLAYMORE_CHECK_PLANT_DISTANCE", menu_scr_claymore_check_plant_distance, SET_SCR_CLAYMORE_CHECK_PLANT_DISTANCE; , when( dvarBool(menu_perk_allow_claymore_mp) && dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "ss" ) )
	CHOICE_DVARYESNO_VIS( 44, "@OW_SCR_CLAYMORE_ADD_KILL_ONLY_IF_DIRECTED", menu_scr_claymore_add_kill_only_if_directed, SET_SCR_CLAYMORE_ADD_KILL_ONLY_IF_DIRECTED; , when( dvarBool(menu_perk_allow_claymore_mp) && dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "ss" ) )
	CHOICE_DVAREDIT_NUMERIC_VIS( 45, "@OW_SCR_CLAYMORE_ARM_TIME", menu_scr_claymore_arm_time, 2, SET_SCR_CLAYMORE_ARM_TIME; , when( dvarBool(menu_perk_allow_claymore_mp) && dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "ss" ) )
	CHOICE_DVARYESNO_VIS( 46, "@OW_SCR_EXPLOSIVES_ALLOW_DISARM", menu_scr_explosives_allow_disarm, SET_SCR_EXPLOSIVES_ALLOW_DISARM; , when( dvarString(menu_cfg_gt) != "ss" ) )
	CHOICE_DVAREDIT_VIS( 47, "@OW_SCR_EXPLOSIVES_DISARM_TIME", menu_scr_explosives_disarm_time, 4, 4, SET_SCR_EXPLOSIVES_DISARM_TIME, when( dvarBool(menu_scr_explosives_allow_disarm) == 1 && dvarString(menu_cfg_gt) != "ss" ) )
	CHOICE_DVARYESNO_VIS( 48, "@OW_SCR_CLAYMORE_SHOW_HEADICON", menu_scr_claymore_show_headicon, SET_SCR_CLAYMORE_SHOW_HEADICON; , when( dvarBool(menu_perk_allow_claymore_mp) && dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "ss" ) )
	CHOICE_DVARYESNO_VIS( 49, "@OW_SCR_CLAYMORE_SHOW_LASER_BEAMS", menu_scr_claymore_show_laser_beams, SET_SCR_CLAYMORE_SHOW_LASER_BEAMS; , when( dvarBool(menu_perk_allow_claymore_mp) && dvarString(menu_cfg_gt) != "gg" && dvarString(menu_cfg_gt) != "ss" ) )
	CHOICE_DVARYESNO_VIS( 50, "@OW_SCR_SHOW_C4_BLINK_EFFECT", menu_scr_show_c4_blink_effect, SET_SCR_SHOW_C4_BLINK_EFFECT; , when( dvarBool(menu_perk_allow_c4_mp) ) )
	
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
	
	CHOICE_DVARSTRINGLIST_VIS( 100, "@OW_MENU_CONFIGURE_TO_GAMETYPE", menu_cfg_gt, { "Default value when not specifically defined"; "_def"; "@OW_ASSASSINATION"; "ass"; "@OW_BEHIND_ENEMY_LINES"; "bel"; "@OW_CAPTURE_AND_HOLD"; "ch"; "@MPUI_CAPTURE_THE_FLAG"; "ctf"; "@MPUI_DOMINATION"; "dom"; "@MPUI_DEATHMATCH"; "dm"; "@OW_FREEZETAG"; "ftag"; "@OW_GREED"; "gr"; "@OW_GUNGAME"; "gg"; "@MPUI_HEADQUARTERS"; "koth"; "@OW_RETRIEVAL"; "re"; "@MPUI_SABOTAGE"; "sab"; "@MPUI_SEARCH_AND_DESTROY_CLASSIC"; "sd"; "@OW_SHARPSHOOTER"; "ss"; "@MPUI_WAR"; "war"; "@OW_TEAM_GREED"; "tgr"; }, setdvar tmp_menu_optcount 0;setdvar tmp_menu_savedsess 0;FILLMENUDVARS; , 1 )
	
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
		visible			when( dvarInt(tmp_menu_optcount) == 43)
	}
}