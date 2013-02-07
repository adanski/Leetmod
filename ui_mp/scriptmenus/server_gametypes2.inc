#include "ui_mp/menustyle.inc"

#define ROTATEMENUGAMETYPES3 uiScript closeMenuOnDvar settings_config_gametype p settings_quick_dom; uiScript closeMenuOnDvar settings_config_gametype n settings_quick_dom; uiScript openMenuOnDvar settings_config_gametype p settings_quick_ctf; uiScript openMenuOnDvar settings_config_gametype n settings_quick_koth;

menuDef
{
	name			"settings_quick_dom"
	fullscreen		0
	rect			0 0 640 480
	focusColor		COLOR_FOCUSED
	//soundloop		""
	onOpen
	{
		execondvarstringvalue settings_config_gametype p "set settings_config_gametype gg";
		execondvarstringvalue settings_config_gametype n "set settings_config_gametype dom";
	}
	onClose
	{
	
	}
	onESC
	{
		close self;
	}
#include "ui_mp/blurredbg.inc"
#include "ui_mp/navcontrols.inc"
	
#undef CHOICE_X_START
#define CHOICE_X_START 80
	
#undef CHOICE_Y_START
#define CHOICE_Y_START 6
	
#undef TEXTSIZE_BUTTON_PC
#define TEXTSIZE_BUTTON_PC	0.4
	
#undef	CHOICE_SIZE_X
#define CHOICE_SIZE_X		200
	
	CHOICE_DVARSTRINGLIST( 1, "@MENU_GAME_TYPE", settings_config_gametype, { ""; "p"; "@MPUI_DOMINATION"; "dom"; "@MPUI_DEATHMATCH"; "dm"; "@OW_FREEZETAG"; "ftag"; "@OW_GREED"; "gr"; "@OW_GUNGAME"; "gg"; ""; "n" }, ROTATEMENUGAMETYPES3 )
	
#undef TEXTSIZE_BUTTON_PC
#define TEXTSIZE_BUTTON_PC	0.33
	
#undef CHOICE_X_START
#define CHOICE_X_START 0
	
#undef CHOICE_Y_START
#define CHOICE_Y_START 34
	
#undef CHOICE_SIZE_Y
#define CHOICE_SIZE_Y 		20
	
#undef	CHOICE_SIZE_X
#define CHOICE_SIZE_X		250
	
	//#undef CHOICE_X_SPACING
	//#define CHOICE_X_SPACING 200
	
#include "ui_mp/server_gametype_dom.inc"
#include "ui_mp/server_gametype_dm.inc"
#include "ui_mp/server_gametype_ftag.inc"
#include "ui_mp/server_gametype_gr.inc"
#include "ui_mp/server_gametype_gg.inc"
}