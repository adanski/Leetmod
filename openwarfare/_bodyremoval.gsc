#include openwarfare\_eventmanager;
#include openwarfare\_utils;

init()
{
	// Get the main module's dvar
	level.scr_bodyremoval_enable = getdvarx( "scr_bodyremoval_enable", "int", 0, 0, 2 );

	// If body removal is not enabled then there's nothing else to do here
	if ( level.scr_bodyremoval_enable == 0 || getdvarx( "scr_dogtags_enable", "int", 0, 0, 1 ) == 1 )
		return;

	level.scr_bodyremoval_time = getdvarx( "scr_bodyremoval_time", "float", 20, 5, 300 );
	level._effect["body_remove"] = loadfx( "props/crateExp_dust" );

	level thread addNewEvent( "onPlayerConnected", ::onPlayerConnected );
}


onPlayerConnected()
{
	self thread onPlayerBody();
}


onPlayerBody()
{
	self endon("disconnect");

	while(1)
	{
		self waittill("player_body");
		self thread removeBody();
	}
}


removeBody()
{
	level endon( "game_ended" );
	
	// Save the body in case the player disconnects
	thisBody = self.body;
	
	// Wait the required time to remove the body
	xWait( level.scr_bodyremoval_time );
		
	// Remove the body if it's still there
	if ( isDefined( thisBody ) ) {
		switch ( level.scr_bodyremoval_enable ) {
			case 2:
				playfx( level._effect["body_remove"], thisBody.origin );
				break;
		}
		thisBody delete();	
	}
}