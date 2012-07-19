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
	self.viewingPerks = 0;
	self thread addNewEvent( "onPlayerSpawned", ::onPlayerSpawned );
	self thread addNewEvent( "onPlayerKilled", ::onPlayerKilled );
}

onPlayerSpawned()
{
	self.ctperks = maps\mp\gametypes\_globallogic::getPerks( self );
	// Remove also the body trigger
	if ( isDefined( self.bodyTrigger ) ) {
		self.bodyTrigger delete();
		self.bodyTrigger = undefined;
	}
	self thread removeTriggerOnDisconnect();
	iprintln("Spawned");
	for (;;)
	{
		wait (0.05);
		self.bodyTrigger = spawn( "trigger_radius", self.origin, 0, 150, 150 );
		self thread checkTrigger();
	}
}

checkTrigger()
{
	self.bodyTrigger waittill("trigger", player);
	if ( !isDefined( player ) || player == self || player.viewingPerks)
		continue;
	iprintln("TRIGGER");
	player thread showSpectatorPerks( self );
}

onPlayerKilled()
{
	// Remove also the body trigger
	if ( isDefined( self.bodyTrigger ) ) {
		self.bodyTrigger delete();
		self.bodyTrigger = undefined;
	}
}

showSpectatorPerks( target )
{
	self endon("disconnect");
	level endon( "game_ended" );
	iprintln("SPP");
	
	//self.viewingPerks = 0;
	//while ( 1 ) {
		//wait (0.05);
		// Check if he's looking at a player within radius
		/*if ( isDefined( target ) && isPlayer( target ) && distance( self.origin, target.origin ) <= level.scr_spectator_showperks_radius ) {*/
				iprintln("ViewingPerks");
				self showPerk( 0, target.ctperks[0], -50 );
				self showPerk( 1, target.ctperks[1], -50 );
				self showPerk( 2, target.ctperks[2], -50 );
				self.viewingPerks = 1;
				self thread maps\mp\gametypes\_globallogic::hidePerksAfterTime( 2.0 );
				self waittill("perks_hidden");
				self.viewingPerks = 0;
				iprintln("Hidded perks");
	//}
}


removeTriggerOnDisconnect()
{
	self endon("spawned_player");
	
	bodyTrigger = self.bodyTrigger;
	
	// Wait for the player to disconnect and remove his body and trigger from the game
	self waittill("disconnect");
		
	if ( isDefined( bodyTrigger ) )
		bodyTrigger delete();	
}