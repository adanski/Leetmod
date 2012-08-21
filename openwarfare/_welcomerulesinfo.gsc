#include openwarfare\_eventmanager;
#include openwarfare\_utils;

init()
{
	game["menu_serverinfo"] = "serverinfo";
	
	// Get the main module's dvar
	level.scr_welcome_enable = getdvarx( "scr_welcome_enable", "int", 0, 0, 2 );	

	// If the welcome screen is not enabled then there's nothing else to do here
	if ( level.scr_welcome_enable == 0 )
		return;
		
	precacheMenu( game["menu_serverinfo"] );

	// Initialize the mod information and the title for the screen
	leetmodText = "^7" + getDvar( "_Mod" ) + " " + getDvar( "_ModVer" ) + " - ^5www.Leetmod.pt.am";
  level.scr_welcome_modinfo = getdvarx( "scr_welcome_modinfo", "string", "" );
  
  if( level.scr_welcome_modinfo == "" )
    level.scr_welcome_modinfo += leetmodText;
  else
    level.scr_welcome_modinfo += "^7, " + leetmodText;
    
	level.scr_welcome_title = getdvarx( "scr_welcome_title", "string", getDvar( "sv_hostname" ) );

	// Load the messages to display
	level.scr_welcome_lines = [];
	for ( iLine = 1; iLine <= 8; iLine++ ) {
		level.scr_welcome_lines[ iLine - 1 ] = getdvarx( "scr_welcome_line_" + iLine, "string", "" );
	}

	level thread addNewEvent( "onPlayerConnected", ::onPlayerConnected );
}

onPlayerConnected()
{
	self thread setServerInformation();
}

setServerInformation()
{
	self endon("disconnect");
  
  self setClientDvars( 
		"ui_welcome_title", level.scr_welcome_title,
		"ui_welcome_modinfo", level.scr_welcome_modinfo
	);
  // Fix: Since this string variables can be so big, I separated setClientDvars() for all in several setClientDvar() for each
  // line, so that the text doesn't cap at 836 characters
  self setClientDvar( "ui_welcome_line_0", level.scr_welcome_lines[ 0 ] );
	self setClientDvar( "ui_welcome_line_1", level.scr_welcome_lines[ 1 ] );
  self setClientDvar( "ui_welcome_line_2", level.scr_welcome_lines[ 2 ] );
  self setClientDvar( "ui_welcome_line_3", level.scr_welcome_lines[ 3 ] );
  self setClientDvar( "ui_welcome_line_4", level.scr_welcome_lines[ 4 ] );
  self setClientDvar( "ui_welcome_line_5", level.scr_welcome_lines[ 5 ] );
  self setClientDvar( "ui_welcome_line_6", level.scr_welcome_lines[ 6 ] );
  self setClientDvar( "ui_welcome_line_7", level.scr_welcome_lines[ 7 ] );
}
