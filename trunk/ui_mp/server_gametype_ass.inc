#undef CHOICE_GROUP
#define CHOICE_GROUP ass

#define G_GAMETYPE_ASS (dvarString( "settings_config_gametype" ) == "ass")

CHOICE_DVAREDIT_NUMERIC_VIS( 2, "@OW_TIMELIMIT", scr_ass_timelimit, 5, ; , when(G_GAMETYPE_ASS) )
CHOICE_DVAREDIT_NUMERIC_VIS( 3, "@OW_SCORELIMIT", scr_ass_scorelimit, 3, ; , when(G_GAMETYPE_ASS) )
CHOICE_DVAREDIT_NUMERIC_VIS( 4, "@OW_ROUNDLIMIT", scr_ass_roundlimit, 3, ; , when(G_GAMETYPE_ASS) )
CHOICE_DVAREDIT_NUMERIC_VIS( 5, "@OW_ROUND_SWITCH", scr_ass_roundswitch, 3, ; , when(G_GAMETYPE_ASS) )

CHOICE_DVARYESNO_VIS( 6, "@OW_TEAM_BALANCE_EOR", scr_ass_teambalanceendofround, ; , when(G_GAMETYPE_ASS) )

CHOICE_DVAREDIT_VIS( 7, "@OW_SCR_ASS_EXTRACTING_TIME", scr_ass_extracting_time, 4, 4, ; , when(G_GAMETYPE_ASS) )
CHOICE_DVARYESNO_VIS( 8, "@OW_SCR_ASS_SCOREBOARD_VIP", scr_ass_scoreboard_vip, ; , when(G_GAMETYPE_ASS) )
CHOICE_DVAREDIT_NUMERIC_VIS( 9, "@OW_SCR_ASS_VIP_HEALTH", scr_ass_vip_health, 3, ; , when(G_GAMETYPE_ASS) )
CHOICE_DVAREDIT_VIS( 10, "@OW_SCR_ASS_FORCE_VIP_HANDGUN", scr_ass_force_vip_handgun, 32, 32, ; , when(G_GAMETYPE_ASS) )
CHOICE_DVAREDIT_VIS( 11, "@OW_SCR_ASS_VIP_CLAN_TAGS", scr_ass_vip_clan_tags, 1000, 1000, ; , when(G_GAMETYPE_ASS) )

itemDef
{
	name			resetass
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
	visible				when(G_GAMETYPE_ASS)
	mouseEnter		{ play "mouse_over"; }
	action
	{
		play "mouse_click";
		exec "exec menudvars/_defcfg/gametypes/assassination.cfg";
	}
}