#undef CHOICE_GROUP
#define CHOICE_GROUP oitc

#define G_GAMETYPE_OITC (dvarString( "settings_config_gametype" ) == "oitc")

CHOICE_DVAREDIT_NUMERIC_VIS( 2, "@OW_TIMELIMIT", scr_oitc_timelimit, 5, ; , when(G_GAMETYPE_OITC) )
CHOICE_DVAREDIT_NUMERIC_VIS( 3, "@OW_SCORELIMIT", scr_oitc_scorelimit, 3, ; , when(G_GAMETYPE_OITC) )
CHOICE_DVAREDIT_NUMERIC_VIS( 4, "@OW_ROUNDLIMIT", scr_oitc_roundlimit, 3, ; , when(G_GAMETYPE_OITC) )
CHOICE_DVAREDIT_NUMERIC_VIS( 5, "@OW_PLAYER_RESPAWN_DELAY", scr_oitc_playerrespawndelay, 3, ; , when(G_GAMETYPE_OITC) )

//OITC
CHOICE_DVAREDIT_VIS( 6, "@OW_SS_OITC_AVAILABLE_WEAPONS", scr_oitc_handgun, 1000, 60, ; , when(G_GAMETYPE_OITC) )

CHOICE_DVARSTRINGLIST_VIS( 7, "@OW_PERK_SLOT1", scr_oitc_specialty_slot1, { "None" specialty_null "@PERKS_STOPPING_POWER" specialty_bulletdamage "@PERKS_JUGGERNAUT" specialty_armorvest "@PERKS_SLEIGHT_OF_HAND" specialty_fastreload "@PERKS_DOUBLE_TAP" specialty_rof "@PERKS_UAV_JAMMER" specialty_gpsjammer "@PERKS_SONIC_BOOM" specialty_explosivedamage }, ; , when(G_GAMETYPE_OITC) )

CHOICE_DVARSTRINGLIST_VIS( 8, "@OW_PERK_SLOT2", scr_oitc_specialty_slot2, { "None" specialty_null "@PERKS_EXTREME_CONDITIONING" specialty_longersprint "@PERKS_STEADY_AIM" perk_allow_specialty_bulletaccuracy "@PERKS_LAST_STAND" perk_allow_specialty_pistoldeath "@PERKS_MARTYRDOM" perk_allow_specialty_grenadepulldeath "@PERKS_DEEP_IMPACT" perk_allow_specialty_bulletpenetration "@PERKS_IRON_LUNGS" perk_allow_specialty_holdbreath "@PERKS_DEAD_SILENCE" perk_allow_specialty_quieter }, ; , when(G_GAMETYPE_OITC) )

CHOICE_DVARYESNO_VIS( 9, "@OW_SUDDEN_SHOW_ENEMIES", scr_oitc_suddendeath_show_enemies, ; , when(G_GAMETYPE_OITC) )
CHOICE_DVAREDIT_NUMERIC_VIS( 10, "@OW_SUDDEN_TIMELIMIT", scr_oitc_suddendeath_timelimit, 3, ; , when(G_GAMETYPE_OITC) )

itemDef
{
	name			resetoitc
	text			"@OW_RESET_GT_TO_DEFAULT"
	type			1
	style			WINDOW_STYLE_FILLED
	forecolor		TEXTBUTTON_COLOR
	textstyle		ITEM_TEXTSTYLE_SHADOWED
	rect			-150 -26 100 20 HORIZONTAL_ALIGN_CENTER VERTICAL_ALIGN_BOTTOM
	textfont		UI_FONT_NORMAL
	textalign		ITEM_ALIGN_LEFT
	textscale		TEXTSIZE_SMALL
	textaligny		18
	visible				when(G_GAMETYPE_OITC)
	mouseEnter		{ play "mouse_over"; }
	action
	{
		play "mouse_click";
		exec "exec menudvars/_defcfg/gametypes/oneinthechamber.cfg";
	}
}