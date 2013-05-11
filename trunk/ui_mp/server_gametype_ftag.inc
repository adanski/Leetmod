#undef CHOICE_GROUP
#define CHOICE_GROUP ftag

#define G_GAMETYPE_FTAG (dvarString( "settings_config_gametype" ) == "ftag")

CHOICE_DVAREDIT_NUMERIC_VIS( 2, "@OW_TIMELIMIT", scr_ftag_timelimit, 5, ; , when(G_GAMETYPE_FTAG) )
CHOICE_DVAREDIT_NUMERIC_VIS( 3, "@OW_SCORELIMIT", scr_ftag_scorelimit, 3, ; , when(G_GAMETYPE_FTAG) )
CHOICE_DVAREDIT_NUMERIC_VIS( 4, "@OW_ROUNDLIMIT", scr_ftag_roundlimit, 3, ; , when(G_GAMETYPE_FTAG) )
CHOICE_DVAREDIT_NUMERIC_VIS( 5, "@OW_ROUND_SWITCH", scr_ftag_roundswitch, 3, ; , when(G_GAMETYPE_FTAG) )
CHOICE_DVAREDIT_NUMERIC_VIS( 6, "@OW_NUMBER_OF_LIVES", scr_ftag_numlives, 3, ; , when(G_GAMETYPE_FTAG) )
CHOICE_DVARYESNO_VIS( 7, "@OW_TEAM_BALANCE_EOR", scr_ftag_teambalanceendofround, ; , when(G_GAMETYPE_FTAG) )
CHOICE_DVARYESNO_VIS( 8, "@OW_FORCE_START_SPAWNS", scr_ftag_forcestartspawns, ; , when(G_GAMETYPE_FTAG) )

//FTAG
CHOICE_DVARYESNO_VIS( 9, "@OW_FTAG_FREE_LOOK", scr_ftag_frozen_freelook, ; , when(G_GAMETYPE_FTAG) )
CHOICE_DVAREDIT_NUMERIC_VIS( 10, "@OW_FTAG_UNFREEZE_SCORE", scr_ftag_unfreeze_score, 2, ; , when(G_GAMETYPE_FTAG) )
CHOICE_DVAREDIT_NUMERIC_VIS( 11, "@OW_FTAG_UNFREEZE_TIME", scr_ftag_unfreeze_time, 5, ; , when(G_GAMETYPE_FTAG) )
CHOICE_DVAREDIT_NUMERIC_VIS( 12, "@OW_FTAG_AUTO_UNFREEZE_TIME", scr_ftag_auto_unfreeze_time, 5, ; , when(G_GAMETYPE_FTAG) )
CHOICE_DVAREDIT_NUMERIC_VIS( 13, "@OW_FTAG_UNFREEZE_MAXDISTANCE", scr_ftag_unfreeze_maxdistance, 6, ; , when(G_GAMETYPE_FTAG) )
CHOICE_DVARYESNO_VIS( 14, "@OW_FTAG_UNFREEZE_BEAM", scr_ftag_unfreeze_beam, ; , when(G_GAMETYPE_FTAG) )
CHOICE_DVARYESNO_VIS( 15, "@OW_FTAG_UNFREEZE_MELT_ICEBERG", scr_ftag_unfreeze_melt_iceberg, ; , when(G_GAMETYPE_FTAG) )
CHOICE_DVARYESNO_VIS( 16, "@OW_FTAG_UNFREEZE_RESPAWN", scr_ftag_unfreeze_respawn, ; , when(G_GAMETYPE_FTAG) )
CHOICE_DVARYESNO_VIS( 17, "@OW_FTAG_SHOW_STATS", scr_ftag_show_stats, ; , when(G_GAMETYPE_FTAG) )

itemDef
{
	name			resetftag
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
	visible				when(G_GAMETYPE_FTAG)
	mouseEnter		{ play "mouse_over"; }
	action
	{
		play "mouse_click";
		exec "exec menudvars/_defcfg/gametypes/freezetag.cfg";
	}
}