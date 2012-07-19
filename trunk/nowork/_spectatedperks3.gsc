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
	
	// If dog tags are not enabled then there's nothing else to do here
	if ( level.scr_spectator_showperks == 0 )
		return;
	
	level.unfreezeMinDistance = 60;
	level.unfreezeSafeDistance = 75;
	level thread addNewEvent( "onPlayerConnected", ::onPlayerConnected );
}


onPlayerConnected()
{
	self thread addNewEvent( "onPlayerSpawned", ::onPlayerSpawned );
	self thread addNewEvent( "onPlayerKilled", ::onPlayerKilled );
}


onPlayerSpawned()
{
	self endon("disconnect");
	self endon("death");
	self thread playerPerksDistanceMonitor();
}


onPlayerKilled()
{
	// Remove also the near trigger
	if ( isDefined( self.nearTrigger ) ) {
		self.nearTrigger delete();
		self.nearTrigger = undefined;
	}
}

playerPerksDistanceMonitor()
{
	self endon("disconnect");
	self endon("death");
	level endon( "game_ended" );
	
	// Create the trigger we'll be using for players to check the dog tags
	self.nearTrigger = spawn( "trigger_radius", self.origin, 0, level.unfreezeMinDistance, level.unfreezeMinDistance );
	self thread removeTriggerOnDisconnect();
	
	for (;;)
	{
		wait (0.05);
		// wait till Spectator is near player
		self.nearTrigger waittill("trigger", player);
		// check spectator looking at
		player thread monitorSpectatorLook();
	}	
}

monitorSpectatorLook()
{
	self endon("disconnect");
	level endon( "game_ended" );
	iprintln("MonitorSPL");
	while ( isDefined( self ) /*&& isAlive( self )*/ ) { // isSpectating
		wait (0.05);
			// Check if he's looking at a player
			lookedAtPl = self getLookingAtEntity();
			if ( isDefined( lookedAtPl ) && isPlayer( lookedAtPl ) ) {
				iprintln("IsLookingAt");
				// Check if we are at a good distance and looking at
				if ( distance( self.origin, lookedAtPl.origin ) > level.unfreezeSafeDistance && distance( self.origin, lookedAtPl.origin ) <= level.scr_spectator_showperks_radius && isDefined( self ) /*&& isAlive( self ) */&& isDefined( lookedAtPl ) && self isLookingAtPlayer( lookedAtPl )) {
					iprintln("IsAtRadius");
					perks = maps\mp\gametypes\_globallogic::getPerks( lookedAtPl );
					self showPerk( 0, perks[0], -50 );
					self showPerk( 1, perks[1], -50 );
					self showPerk( 2, perks[2], -50 );
				}
				else {
					self hidePerk( 0 );
					self hidePerk( 1 );
					self hidePerk( 2 );
					self notify("perks_hidden");
				}
			}
	}

	// Body is not there or the player is not touching the trigger anymore	
	self.checkingBody = false;	
}

removeTriggerOnDisconnect()
{
	//self endon("spawned_player"); //## FIX: check it
	
	// Save the body and trigger
	nearTrigger = self.nearTrigger;
	
	// Wait for the player to disconnect and remove his body and trigger from the game
	self waittill("disconnect");
		
	if ( isDefined( nearTrigger ) )
		nearTrigger delete();	
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

/*
// Stay here as long as the body exists and the player is touching it
	while ( isDefined( self ) && isDefined( deadPlayer.body ) && self isTouching( deadPlayer.nearTrigger ) ) {
		wait (0.05);
		
			// Update the information with the dead player's name and show the HUD elements
			self.dogTags["name"] setPlayerNameString( deadPlayer );
			self.dogTags["name"] fadeOverTime(1); self.dogTags["image"] fadeOverTime(1);
			self.dogTags["name"].alpha = 1;	self.dogTags["image"].alpha = 1;
			
			// Wait for the body to be removed, player leaving the trigger zone or player is not crouched or proned
			while ( isDefined( self ) && isDefined( deadPlayer.body ) && self isTouching( deadPlayer.nearTrigger ) && ( self getStance() == "crouch" || self getStance() == "prone" ) )
				wait (0.05);
				
			// Hide the HUD elements
			if ( isDefined( self ) )
				self.dogTags["name"].alpha = 0;	self.dogTags["image"].alpha = 0;			
	}
*/