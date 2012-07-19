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

#include common_scripts\utility;
#include maps\mp\_utility;
#include maps\mp\gametypes\_hud_util;

#include openwarfare\_eventmanager;
#include openwarfare\_utils;

init()
{
	// Get the main module's dvars
	//level.scr_idle_switch_spectator = getdvarx( "scr_idle_switch_spectator", "int", 0, 0, 600 );

	level.unfreezeMinDistance = 60;
	level.unfreezeSafeDistance = 75;
	level thread addNewEvent( "onPlayerConnected", ::onPlayerConnected );
}

onPlayerConnected()
{
	//self thread ShowSpectatedPerks();
	//self thread addNewEvent( "onJoinedTeam", ::onJoinedTeam );
	//self thread addNewEvent( "onJoinedSpectators", ::onJoinedSpectators );
	//self thread addNewEvent( "onPlayerSpawned", ::onPlayerSpawned );
	//self thread addNewEvent( "onPlayerKilled", ::onPlayerKilled );
	self thread showPerksTriggerZone();
}
/*
onPlayerKilled()
{
	
}


onPlayerSpawned()
{
	//self notify("no_spectate");
}


onJoinedTeam()
{

}


onJoinedSpectators()
{
	self thread ShowSpectatedPerks();
}
*/

showPerksTriggerZone()
{
	self endon("disconnect");
	//self endon("death");
	
	// Create the trigger and monitor it
	triggerRadius = spawn( "trigger_radius", self.origin, 0, level.unfreezeMinDistance, level.unfreezeMinDistance );
	self thread deleteTriggerZone( triggerRadius );
	self thread monitorTriggerZone( triggerRadius );
}

deleteTriggerZone( triggerRadius )
{
	// Wait for the player to disconnect, change teams or be unfrozen
	while ( isDefined( self ) && isAlive( self ) )
		wait (0.05);
	
	// Remove the trigger
	triggerRadius delete();	
}

monitorTriggerZone( triggerRadius )
{
	self endon("disconnect");
	//self endon("death");
	
	//triggerRadius endon("death"); // ALIVE PLAYER, NO SPECTATING...
	
	for (;;)
	{
		// Wait until a player has entered my radius
		triggerRadius waittill( "trigger", player );

		// Check if the player has disconnected
		if ( !isDefined( player ) || !isDefined( player.pers ) )
			continue;

		// Make sure it's a player
		//if ( !isPlayer( player ) )
			//continue;
			
		// Make sure it's not us
		//if ( player == self )
			//continue;
			
		// Make sure it's not an enemy
		//if ( player.pers["team"] != self.pers["team"] )
			//continue;

		// Make sure this player is not giving heat already
		//if ( player.hasPerksOnHud )
			//continue;
			
		// We have a canditate for heat transfer
		player ShowSpectatedPerks( self, triggerRadius );
	}
}

ShowSpectatedPerks( spectatedPlayer, triggerRadius )
{
	/*self.freezeTag["transfer"] = true;
					
	if ( isDefined( self ) )
		self.freezeTag["transfer"] = false;
	*/
	perks = maps\mp\gametypes\_globallogic::getPerks( spectatedPlayer );
	self showPerk( 0, perks[0], -50 );
	self showPerk( 1, perks[1], -50 );
	self showPerk( 2, perks[2], -50 );
	self thread maps\mp\gametypes\_globallogic::hidePerksAfterTime( 1.0 );
}

/*ShowSpectatedPerks()
{
	self endon("disconnect");
	level endon( "game_ended" );
	//self endon("no_spectate");
	//self endon("spawned");
	
	currSptedPl = -1;
	iprintln("Entered SSP");
	for (;;)
	{
		wait (1.05);
		//if ( isDefined( self.sessionteam ) && self.sessionteam == "spectator" ) {
			players = getEntArray( "player", "classname" );
			for ( index = 0; index < players.size; index++ )
				if(self isTouching( players[index] ) )
					iprintln(players[index]);
			
			/*if( self.spectatorclient != currSptedPl)
			if(self isTouching( iplayer ) && currSptedPl != iplayer )
			{
				currSptedPl = iplayer;
				perks = maps\mp\gametypes\_globallogic::getPerks( maps\mp\gametypes\_globallogic::getPlayerFromClientNum( self.spectatorclient ) );
				self showPerk( 0, perks[0], -50 );
				self showPerk( 1, perks[1], -50 );
				self showPerk( 2, perks[2], -50 );
				self thread maps\mp\gametypes\_globallogic::hidePerksAfterTime( 1.0 );
				iprintln(self.spectatorclient);
			}*/
		//}
	}
}*/