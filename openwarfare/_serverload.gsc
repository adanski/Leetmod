#include openwarfare\_utils;

init()
{
	// Get the module's dvars
	level.scr_server_load_on_startup = getdvard( "scr_server_load_on_startup", "string", "low" );
	
	// Check the value for the server load on startup is valid
	if ( level.scr_server_load_on_startup != "low" && level.scr_server_load_on_startup != "medium" && level.scr_server_load_on_startup != "high" ) {
		level.scr_server_load_on_startup = "low";
	}
	
	level.scr_server_load_low = getdvard( "scr_server_load_low", "int", 5, 0, 64 );
	level.scr_server_load_medium = getdvard( "scr_server_load_medium", "int", 11, level.scr_server_load_low, 64 );
	
	// Check if this is the server startup
	if ( getDvar( "_sl_current" ) == "" || !isDefined(level.serverLoad) ) {
		level.serverLoad = level.scr_server_load_on_startup;
		setDvar( "_sl_current", level.scr_server_load_on_startup );
	}
	
	// If both variables are set to "0" we don't do anything else
	if ( level.scr_server_load_low == 0 && level.scr_server_load_medium == 0 )
		return;
		
	
	level thread onIntermission();
}


onIntermission()
{
	// Wait until the map ends to count for the amount of players
	level waittill( "intermission" );
	
	// Wait until its almost about to rotate (4 seconds left), so we have time to calculate everything
	wait( level.scr_intermission_time-4 );
	// Count how many players we have in the server
	players = 0;
	for ( index = 0; index < level.players.size; index++ ) {
		if ( isDefined( level.players[index] ) ) {
			players++;
		}
	}
	
	// Decide the server's load for next game
	if ( players <= level.scr_server_load_low ) {
		serverLoad = "low";
		
	}
	else if ( players <= level.scr_server_load_medium ) {
		serverLoad = "medium";
		
	}
	else {
		serverLoad = "high";
	}
	
	// Set the internal variable
	setDvar( "_sl_current", serverLoad );
	level.serverLoad = serverLoad;
	level notify( "server_load", serverLoad );
}