#ifndef SPLITSCREEN_ENABLED
#ifndef MAP_X
#define MAP_X					(- (MAP_WIDTH - RIGHTITEM_OFFSET + 20 ))
#endif

#ifndef MAP_Y
#define MAP_Y					114
#endif

#ifndef MAP_WIDTH
#define MAP_WIDTH				240
#endif

#ifndef MAP_HEIGHT
#define MAP_HEIGHT				268
#endif

#define ORIGIN_MAP_FRAME		MAP_X MAP_Y
#define MAP_WIDTH2				(MAP_WIDTH+5)
#else
#ifndef MAP_X
#define MAP_X					(- (MAP_WIDTH - RIGHTITEM_OFFSET+4 ))
#endif

#ifndef MAP_Y
#define MAP_Y					47
#endif

#ifndef MAP_WIDTH
#define MAP_WIDTH				140
#endif

#ifndef MAP_HEIGHT
#define MAP_HEIGHT				120
#endif

#define ORIGIN_MAP_FRAME		MAP_X MAP_Y
#define MAP_WIDTH2				(MAP_WIDTH+5)
#endif

#ifndef TEAM_IS_MARINES
#error "TEAM_IS_MARINES undefined"
#endif

#ifndef TEAM_IS_OPFOR
#error "TEAM_IS_OPFOR undefined"
#endif

#define ALLIES_HAVE_UAV (dvarint( ui_uav_allies ) && team( name ) == "TEAM_ALLIES" )
#define AXIS_HAVE_UAV (dvarint( ui_uav_axis ) && team( name ) == "TEAM_AXIS" )
#define CLIENT_HAS_UAV (dvarint( ui_uav_client ) && team( name ) == "TEAM_FREE" )
//#define SHOULD_SHOW_MAP ( dvarbool( ui_hud_hardcore ) == 0 || ALLIES_HAVE_UAV || AXIS_HAVE_UAV || CLIENT_HAS_UAV )
#define SHOULD_SHOW_MAP 1

// map display ================================================

#define UI_MAP_NAME		"@"+tablelookup("mp/mapsTable.csv",0,dvarString(mapname),3)
#define MAP_OFFSET		0 21 //2 20

itemDef
{
	name			"mini_map2"
	rect			ORIGIN_MAP_FRAME MAP_WIDTH MAP_WIDTH RIGHTITEM_ALIGN VERTICAL_ALIGN_TOP
	origin			MAP_OFFSET
	forecolor		1 1 1 1
	background		"compass_map_default"
	ownerdraw		CG_PLAYER_FULLMAP_MAP
	visible			when ( SHOULD_SHOW_MAP );
	decoration
}

itemDef
{
	style			WINDOW_STYLE_SHADER
	name			"mini_map2_overlay"
	rect			ORIGIN_MAP_FRAME MAP_WIDTH MAP_WIDTH RIGHTITEM_ALIGN VERTICAL_ALIGN_TOP
	origin			MAP_OFFSET
	forecolor		1 1 1 1
	exp				material( tableLookup( "mp/mapsTable.csv", 0, dvarString( mapname ), 7 ) )
	//visible			when ( SHOULD_SHOW_MAP );
	visible			0
	decoration
}

// Objective pointers
itemDef
{
	name			"compasspointers2"
	rect			ORIGIN_MAP_FRAME MAP_WIDTH MAP_WIDTH RIGHTITEM_ALIGN VERTICAL_ALIGN_TOP
	origin			MAP_OFFSET
	forecolor		1 1 1 1
	background		"objective_line"
	ownerdraw		CG_PLAYER_FULLMAP_POINTERS
	//visible when ( (dvarint( ui_hud_hardcore ) == 0 || dvarint( ui_hud_hardcore_show_minimap ) == 1 || ALLIES_HAVE_UAV || AXIS_HAVE_UAV || CLIENT_HAS_UAV || dvarInt( g_compassShowEnemies ) ) && NOT_SPECTATING && dvarint( ui_hud_showobjicons ) > 0 );
	visible			when ( SHOULD_SHOW_MAP );
	
	decoration
}
// Friendlies pointers
itemDef
{
	name			"compassfriendlies2"
	rect			ORIGIN_MAP_FRAME MAP_WIDTH MAP_WIDTH RIGHTITEM_ALIGN VERTICAL_ALIGN_TOP
	origin			MAP_OFFSET
	forecolor		1 1 1 1
	background		"compassping_friendly"
	ownerdraw		CG_PLAYER_FULLMAP_FRIENDS
	//visible when ( (dvarint( ui_hud_hardcore ) == 0 || dvarint( ui_hud_hardcore_show_minimap ) == 1 || ALLIES_HAVE_UAV || AXIS_HAVE_UAV || CLIENT_HAS_UAV || dvarInt( g_compassShowEnemies ) ) && NOT_SPECTATING );
	visible			when ( SHOULD_SHOW_MAP );
	decoration
}
// Enemy pings
itemDef
{
	name			"compassenemies2"
	rect			ORIGIN_MAP_FRAME MAP_WIDTH MAP_WIDTH RIGHTITEM_ALIGN VERTICAL_ALIGN_TOP
	origin			MAP_OFFSET
	forecolor		1 1 1 1
	background		"compassping_enemy"
	ownerdraw		CG_PLAYER_FULLMAP_ENEMIES
	//visible when ( ( ( ( dvarint( ui_hud_hardcore ) == 0 || dvarint( ui_hud_hardcore_show_minimap ) == 1 ) && dvarint( ui_minimap_show_enemies_firing ) == 1 ) || ALLIES_HAVE_UAV || AXIS_HAVE_UAV || CLIENT_HAS_UAV || dvarInt( g_compassShowEnemies ) ) && NOT_SPECTATING );
	visible			when ( ( dvarbool( ui_hud_hardcore ) == 0 && dvarint( ui_minimap_show_enemies_firing ) == 1 ) || ALLIES_HAVE_UAV || AXIS_HAVE_UAV || CLIENT_HAS_UAV );
	decoration
}
// Player direction indicator
itemDef
{
	name			"compassplayer2"
	rect			ORIGIN_MAP_FRAME MAP_WIDTH MAP_WIDTH RIGHTITEM_ALIGN VERTICAL_ALIGN_TOP
	origin			MAP_OFFSET
	forecolor		1 1 1 1
	background		"compassping_player"
	ownerdraw		CG_PLAYER_FULLMAP_PLAYER
	visible			when ( SHOULD_SHOW_MAP );
	decoration
}

#ifndef SPLITSCREEN_ENABLED
PREPROC_SHADER_DRAW_ALIGNED( ORIGIN_MAP_FRAME (-(MAP_WIDTH)) 20 RIGHTITEM_ALIGN VERTICAL_ALIGN_TOP, 5 0, "white", 0 0 0 0.3, 0, 0, 0 0 0 0 )
PREPROC_SHADER_DRAW_ALIGNED( ORIGIN_MAP_FRAME (-(MAP_WIDTH)) 20 RIGHTITEM_ALIGN VERTICAL_ALIGN_TOP, 5 0, "gradient_fadein", 0.9 0.95 1 0.4, 0, 0, 0 0 0 0 )

UI_EDGE_REVERSE( ORIGIN_MAP_FRAME, RIGHTITEM_ALIGN VERTICAL_ALIGN_TOP, 0, 0, 0 0 0 0.3 )
UI_EDGE_REVERSE( ORIGIN_MAP_FRAME, RIGHTITEM_ALIGN VERTICAL_ALIGN_TOP, 0, 0, 0.9 0.95 1 0.4 )

PREPROC_SHADER_DRAW_ALIGNED( ORIGIN_MAP_FRAME (-(MAP_WIDTH2)) 6 RIGHTITEM_ALIGN VERTICAL_ALIGN_TOP, 0 (MAP_HEIGHT-6), "gradient_fadein",0.9 0.95 1 0.35, 0, 0, 0 0 0 0 )
PREPROC_SHADER_DRAW_ALIGNED( ORIGIN_MAP_FRAME -80 20 RIGHTITEM_ALIGN VERTICAL_ALIGN_TOP, (MAP_WIDTH-78) 0, "ui_perforation", 1 1 1 1, 0, 0, 0 0 0 0 )
PREPROC_TEXT_DRAW_ALIGNED_EXP( ORIGIN_MAP_FRAME MAP_WIDTH 0 RIGHTITEM_ALIGN VERTICAL_ALIGN_TOP, 5 20, UI_MAP_NAME, TEXTSIZE_DEFAULT, 0, 0, ITEM_ALIGN_LEFT, 1 1 1 0.7 )

// Pezbot options
#define BUTTON_SCR_PEZBOT_AXIS( textArg, actionArg, visArg ) \
    itemDef /*CHOICE_HIGHLIGHT_CUSTOM*/ \
    { \
      style			WINDOW_STYLE_SHADER \
      rect			MAP_X (MAP_Y+MAP_HEIGHT) (CHOICE_SIZE_X-(CHOICE_SIZE_Y/4)) CHOICE_SIZE_Y RIGHTITEM_ALIGN VERTICAL_ALIGN_TOP \
      background		HIGHLIGHT_SHADER \
      forecolor		HIGHLIGHT_COLOR \
      border			HIGHLIGHT_BORDER \
      bordersize		2 \
      bordercolor		HIGHLIGHT_BORDER_COLOR \
      visible			when( localVarInt( ui_highlight ) == 40 && localVarString( ui_choicegroup ) == CHOICE_GROUP ); \
      decoration \
    } \
    itemDef \
    { \
      style			WINDOW_STYLE_SHADER \
      rect			(MAP_X+(CHOICE_SIZE_X-(CHOICE_SIZE_Y/4))) (MAP_Y+MAP_HEIGHT) (CHOICE_SIZE_Y/4) CHOICE_SIZE_Y RIGHTITEM_ALIGN VERTICAL_ALIGN_TOP \
      background		HIGHLIGHT_SHADER_ART \
      forecolor		HIGHLIGHT_COLOR \
      visible			when( localVarInt( ui_highlight ) == 40 && localVarString( ui_choicegroup ) == CHOICE_GROUP ); \
      decoration \
    } /*CHOICE_HIGHLIGHT_CUSTOM / */ \
		itemDef \
		{ \
			type			ITEM_TYPE_BUTTON \
			rect			MAP_X (MAP_Y+MAP_HEIGHT) CHOICE_SIZE_X CHOICE_SIZE_Y RIGHTITEM_ALIGN VERTICAL_ALIGN_TOP \
			exp				text( textArg ); \
			textfont		CHOICE_TEXTFONT \
			textscale		CHOICE_TEXTSIZE \
			textstyle		CHOICE_TEXTSTYLE \
			textAlign		CHOICE_TEXTALIGN \
			textAlignX		CHOICE_TEXT_OFFSET_X \
			forecolor		CHOICE_TEXTCOLOR \
			visible			visArg \
			CHOICE_SCRIPTS_ALL( 40, actionArg, onFocusArg, leaveFocusArg ) \
		}
		
#define BUTTON_SCR_PEZBOT_ALLIES( textArg, actionArg, visArg ) \
    itemDef /*CHOICE_HIGHLIGHT_CUSTOM*/ \
    { \
      style			WINDOW_STYLE_SHADER \
      rect			MAP_X (MAP_Y+MAP_HEIGHT+CHOICE_Y_SPACING) (CHOICE_SIZE_X-(CHOICE_SIZE_Y/4)) CHOICE_SIZE_Y RIGHTITEM_ALIGN VERTICAL_ALIGN_TOP \
      background		HIGHLIGHT_SHADER \
      forecolor		HIGHLIGHT_COLOR \
      border			HIGHLIGHT_BORDER \
      bordersize		2 \
      bordercolor		HIGHLIGHT_BORDER_COLOR \
      visible			when( localVarInt( ui_highlight ) == 41 && localVarString( ui_choicegroup ) == CHOICE_GROUP ); \
      decoration \
    } \
    itemDef \
    { \
      style			WINDOW_STYLE_SHADER \
      rect			(MAP_X+(CHOICE_SIZE_X-(CHOICE_SIZE_Y/4))) (MAP_Y+MAP_HEIGHT+CHOICE_Y_SPACING) (CHOICE_SIZE_Y/4) CHOICE_SIZE_Y RIGHTITEM_ALIGN VERTICAL_ALIGN_TOP \
      background		HIGHLIGHT_SHADER_ART \
      forecolor		HIGHLIGHT_COLOR \
      visible			when( localVarInt( ui_highlight ) == 41 && localVarString( ui_choicegroup ) == CHOICE_GROUP ); \
      decoration \
    } /*CHOICE_HIGHLIGHT_CUSTOM / */ \
		itemDef \
		{ \
			type			ITEM_TYPE_BUTTON \
			rect			MAP_X (MAP_Y+MAP_HEIGHT+CHOICE_Y_SPACING) CHOICE_SIZE_X CHOICE_SIZE_Y RIGHTITEM_ALIGN VERTICAL_ALIGN_TOP \
			exp				text( textArg ); \
			textfont		CHOICE_TEXTFONT \
			textscale		CHOICE_TEXTSIZE \
			textstyle		CHOICE_TEXTSTYLE \
			textAlign		CHOICE_TEXTALIGN \
			textAlignX		CHOICE_TEXT_OFFSET_X \
			forecolor		CHOICE_TEXTCOLOR \
			visible			visArg \
			CHOICE_SCRIPTS_ALL( 41, actionArg, onFocusArg, leaveFocusArg ) \
		}
		
#define STOCK_GAMEMODE (gametype() == "dm" || gametype() == "war" || gametype() == "dom" || gametype() == "koth" || gametype() == "sab" || gametype() == "sd")

BUTTON_SCR_PEZBOT_AXIS( "@OW_SCR_PEZBOTS_AXIS",  execNow "toggle scr_pezbots_axis 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16"; , when( dvarbool( sv_running ) && dvarbool(scr_pezbots_enable) && STOCK_GAMEMODE ) )
BUTTON_SCR_PEZBOT_ALLIES( "@OW_SCR_PEZBOTS_ALLIES",  execNow "toggle scr_pezbots_allies 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16"; , when( dvarbool( sv_running ) && dvarbool(scr_pezbots_enable) && STOCK_GAMEMODE ) )

// Pezbot options /

#else
PREPROC_SHADER_DRAW_ALIGNED( ORIGIN_MAP_FRAME (MAP_WIDTH-5) 18 RIGHTITEM_ALIGN VERTICAL_ALIGN_TOP, 0 20, "white", 0.15 0.15 0.15 1, 0, 0, 0 0 0 0 )
PREPROC_SHADER_DRAW_ALIGNED( ORIGIN_MAP_FRAME 5 18 RIGHTITEM_ALIGN VERTICAL_ALIGN_TOP, (MAP_WIDTH-5) 20, "button_highlight_end", 0.15 0.15 0.15 1, 0, 0, 0 0 0 0 )

PREPROC_SHADER_DRAW_ALIGNED( ORIGIN_MAP_FRAME (MAP_WIDTH-5) 18 RIGHTITEM_ALIGN VERTICAL_ALIGN_TOP, 0 20, "gradient_fadein", 0.9 0.95 1 0.4, 0, 0, 0 0 0 0 )
PREPROC_SHADER_DRAW_ALIGNED( ORIGIN_MAP_FRAME 5 18 RIGHTITEM_ALIGN VERTICAL_ALIGN_TOP, (MAP_WIDTH-5) 20, "button_highlight_end", 0.9 0.95 1 0.4, 0, 0, 0 0 0 0 )

PREPROC_SHADER_DRAW_ALIGNED( ORIGIN_MAP_FRAME MAP_WIDTH 18 RIGHTITEM_ALIGN VERTICAL_ALIGN_TOP, 0 (MAP_WIDTH+1), "white", 0.15 0.15 0.15 1, 0, 0, 0 0 0 0 )
PREPROC_SHADER_DRAW_ALIGNED( ORIGIN_MAP_FRAME MAP_WIDTH 18 RIGHTITEM_ALIGN VERTICAL_ALIGN_TOP, 0 (MAP_WIDTH+1), "gradient_fadein", 0.9 0.95 1 0.4, 0, 0, 0 0 0 0 )

itemDef	{
	rect			ORIGIN_MAP_FRAME MAP_WIDTH 20 RIGHTITEM_ALIGN VERTICAL_ALIGN_TOP
	origin			-6 36
	textfont		UI_FONT_SMALL
	textstyle		ITEM_TEXTSTYLE_SHADOWED
	textscale		TEXTSIZE_SMALL
	textalign		ITEM_ALIGN_RIGHT
	forecolor		1 1 1 0.85
	exp text ( dvarString(ui_mapname_text) );
	visible			1	decoration
}
itemDef	{
	rect			ORIGIN_MAP_FRAME MAP_WIDTH 20 RIGHTITEM_ALIGN VERTICAL_ALIGN_TOP
	origin			-4 (MAP_WIDTH+16)
	textfont		UI_FONT_SMALL
	textstyle		ITEM_TEXTSTYLE_SHADOWED
	textscale		TEXTSIZE_SMALL
	textalign		ITEM_ALIGN_RIGHT
	forecolor		1 1 1 0.85
	exp text ( gametypename() );
	visible			1	decoration
}
#endif
