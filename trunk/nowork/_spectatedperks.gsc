//******************************************************************************
//  _____                  _    _             __
// |  _  |                | |  | |           / _|
// | | | |_ __   ___ _ __ | |  | | __ _ _ __| |_ __ _ _ __ ___
// | | | | '_ \ / _ \ '_ \| |/\| |/ _` | '__|  _/ _` | '__/ _ \
// \ \_/ / |_) |  __/ | | \  /\  / (_| | |  | || (_| | | |  __/
//  \___/| .__/ \___|_| |_|\/  \/ \__,_|_|  |_| \__,_|_|  \___|
//       | |               We don't make the game you play.
//       |_|                 We make the game you play BETTER.
//
//            Website: http://openwarfaremod.com/
//******************************************************************************

#include maps\mp\gametypes\_hud_util;

#include openwarfare\_eventmanager;
#include openwarfare\_utils;

init()
{
	// Get the main module's dvar
	level.scr_spectator_showperks = getdvarx( "scr_spectator_showperks", "int", 0, 0, 1 );
	level.scr_spectator_showperks_radius = getdvarx( "scr_spectator_showperks_radius", "int", 200, 0, 100000 );
	
	if ( level.scr_spectator_showperks == 0 )
		return;
	
	level thread addNewEvent( "onPlayerConnected", ::onPlayerConnected );
}


onPlayerConnected()
{
	self thread monitorSpectatorLook();
}

monitorSpectatorLook()
{
	self endon("disconnect");
	level endon( "game_ended" );
	iprintln("MonitorSPL");
	
	target = self;
	self.viewingPerks = 0;
	foundWithinRange = 0;
	
	while ( 1/*isDefined( self ) && isAlive( self )*/ ) { // isSpectating
		wait (0.05);
		players = getEntArray( "player", "classname" );
		minDistance = 999999;
		iprintln(self.s.origin);
		wait (0.8);
		for( i = 0; i < players.size; i++) {
			// Check if player is within radius
			currentPlDistance = distance( self.origin, players[i].origin );
			if ( isDefined( players[i] ) && isPlayer( players[i] ) && players[i] != self && currentPlDistance <= level.scr_spectator_showperks_radius ) {
				if( currentPlDistance <= minDistance ) {
					minDistance = currentPlDistance;
					target = players[i];
				}
				foundWithinRange = 1;
			}
		}
		if ( foundWithinRange ) {
				iprintln("ViewingPerks");
				self.viewingperks = 1;
				perks = maps\mp\gametypes\_globallogic::getPerks( target );
				self showPerk( 0, perks[0], -50 );
				self showPerk( 1, perks[1], -50 );
				self showPerk( 2, perks[2], -50 );
		}
		else if( self.viewingperks ) {
			self thread hidePerk( 0 );
			self thread hidePerk( 1 );
			self thread hidePerk( 2 );
			self notify("perks_hidden");
		}
		foundWithinRange = 0;
	}
}