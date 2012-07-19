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
	
	self.viewingPerks = 0;
	while ( 1/*isDefined( self ) && isAlive( self )*/ ) { // isSpectating
		wait (0.05);
		lookedAtPl = self getLookingAtEntity();
		// Check if he's looking at a player within radius
		if ( isDefined( lookedAtPl ) && isPlayer( lookedAtPl ) && distance( self.origin, lookedAtPl.origin ) <= level.scr_spectator_showperks_radius && self isLookingAtPlayer( lookedAtPl ) ) {
			if( !self.viewingPerks ) {
				iprintln("ViewingPerks");
				perks = maps\mp\gametypes\_globallogic::getPerks( lookedAtPl );
				self showPerk( 0, perks[0], -50 );
				self showPerk( 1, perks[1], -50 );
				self showPerk( 2, perks[2], -50 );
				self.viewingPerks = 1;
			}
		}
		else if( self.viewingPerks ) {
			self thread maps\mp\gametypes\_globallogic::hidePerksAfterTime( 2.0 );
			self waittill("perks_hidden");
			iprintln("HidingPerks");
			self.viewingPerks = 0;
		}
	}
}

getLookingAtEntity()
{
	// Get position of player's eyes and angles
	playerEyes = self getPlayerEyes();
	playerAngles = self getPlayerAngles();
	
	// Calculate the origin
	origin = playerEyes + maps\mp\_utility::vector_Scale( anglesToForward( playerAngles ), 9999999 );

	// Run the trace
	trace = bulletTrace( playerEyes, origin, true, self );
	return trace["entity"];
}


isLookingAtPlayer( gameEntity )
{
	// Get position of player's eyes and angles
	playerEyes = self getPlayerEyes();
	playerAngles = self getPlayerAngles();
	
	// Calculate the origin
	origin = playerEyes + maps\mp\_utility::vector_Scale( anglesToForward( playerAngles ), 9999999 );

	// Run the trace
	trace = bulletTrace( playerEyes, origin, true, self );
	if( trace["fraction"] != 1 ) {
		if ( isDefined( trace["entity"] ) && trace["entity"] == gameEntity ) {
			return true;
		} else {
			return false;
		}		
	} else {
		return false;
	}
}