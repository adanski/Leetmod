#include openwarfare\_utils;
#include openwarfare\_eventmanager;

init()
{
	level.scr_cap_enable = getdvarx( "scr_cap_enable", "int", 0, 0, 1 ); 
	level.scr_cap_time = getdvarx( "scr_cap_time", "float", 5.0, 1.0, 15.0 );
	level.scr_cap_activated = getdvarx( "scr_cap_time_activated", "float", 15.0, 5.0, 30.0 );
	level.scr_cap_firstspawn = getdvarx( "scr_cap_firstspawn", "int", 1, 0, 1 );
	
  //# TODO: Allow in "assassination" gametype too, but not if player is VIP
  // For now and because of it's not yet implemented, it is disabled for "ass"
	if ( !level.scr_cap_enable )
		return;
	
	level thread addNewEvent( "onPlayerConnected", ::onPlayerConnected );
}

onPlayerConnected()
{
	if ( level.scr_cap_firstspawn && !isDefined( self.pers["spawned_once"] ) )
		self.pers["spawned_once"] = false;
		
	self.isInCAP = false;
	
	self thread addNewEvent( "onPlayerSpawned", ::onPlayerSpawned );
	self thread addNewEvent( "onPlayerKilled", ::onPlayerKilled );
}

onPlayerSpawned()
{	
	if ( level.inReadyUpPeriod )
		return;
		
	if ( isDefined( level.inPrematchPeriod ) )
	{
		while ( level.inPrematchPeriod )
			wait .05;
	}
	
	self.cap_protected = false;
	
	isVip = (isDefined(self.isVIP) && self.isVIP);
  // set model at spawn (the one that was selected if already done), don't set if VIP
  if( !isVip )
    self checkAndChangeModel();
  
  isBot = (isDefined( self.pers["isBot"] ) && self.pers["isBot"]);
	if ( !isBot && !isVip )
	{
		if ( ( level.scr_cap_firstspawn && ( isDefined( self.pers["spawned_once"] ) && self.pers["spawned_once"] == false ) ) || !level.scr_cap_firstspawn )
		{
			if ( level.scr_cap_firstspawn && isDefined( self.pers["spawned_once"] ) )
				self.pers["spawned_once"] = true;
				
			if ( level.scr_player_forcerespawn == 0 )
				xWait(2);
			
			self setClientDvar( "cap_enable", "true" );	
			self thread customizePlayer();
		}
	}
}

onPlayerKilled()
{
	self.isInCAP = false;
	
	if ( level.scr_thirdperson_enable )
		self setClientDvars( "cg_thirdPerson", "1", "cg_thirdPersonAngle", "360", "cg_thirdPersonRange", "72", "cap_enable", "false" );
	else
		self setClientDvars( "cg_thirdPerson", "0", "cg_thirdPersonAngle", "0", "cg_thirdPersonRange", "120", "cap_enable", "false" );	
}

checkAndChangeModel()
{
	if ( isDefined( self.pers["current_body_model"] ) )
	{
		self.isHeadOff = false;
		//Detach Head Model (Original snip of script by BionicNipple)
		count = self getattachsize();
		for ( index = 0; index < count; index++ )
		{
			iModel = self getattachmodelname( index );
		
			if ( startsWith( iModel, "head" ) )
			{
				self detach( iModel );
				self.isHeadOff = true;
				break;
			}
		}
		
    team = "neutral";
    if ( level.teamBased )
      team = self.pers["team"];

    for ( index = 0; index < game["cap_" +team+ "_model"]["body_model"].size; index++ )
    {
      if ( game["cap_" +team+ "_model"]["body_model"][index] == self.pers["current_body_model"] )
      {
        self [[game["cap_" +team+ "_model"]["function"][index]]]();
        self.isHeadOff = false;
      }
    }
		
		if ( self.isHeadOff ) //Something went wrong or dvar changed in game
		{
			//set player back to default
			self maps\mp\gametypes\_teams::playerModelForClass( self.pers["class"] );
		}
		
		if ( ( isDefined( level.scr_spawn_protection_invisible ) && level.scr_spawn_protection_invisible == 1 ) && isDefined( self.spawn_protected ) && self.spawn_protected )
			self hide();
	}
}

customizePlayer()
{
	self endon( "disconnect" );
	self endon( "death" );
	
	//Begin countdown before cap access expires
	passedTime = openwarfare\_timer::getTimePassed();
	maxTime = level.scr_cap_time * 1000;
	timeDifference = 0;
	
	//Display Interface Message
	self setClientDvar( "cap_info", "open" );
	
	while ( !self useButtonPressed() && timeDifference < maxTime )
	{
		timeDifference = openwarfare\_timer::getTimePassed() - passedTime;
		wait .01;
	}
	
	if ( timeDifference >= maxTime )
	{
		self setClientDvar( "cap_enable", "false" );	
		return;	
	}
	
	self setClientDvar( "cap_info", "init", "cap_enable", "true" );
	wait 1;
	
	self.isInCAP = true;
	
	if ( ( isDefined( level.scr_spawn_protection_invisible ) && level.scr_spawn_protection_invisible == 1 ) && isDefined( self.spawn_protected ) && self.spawn_protected )
		self show();

	self setClientDvars( "cg_thirdPerson", "1", "cg_thirdPersonAngle", "180", "cg_thirdPersonRange", "120" );
	
	self thread openwarfare\_speedcontrol::setModifierSpeed( "_capeditor", 100 );
	self thread maps\mp\gametypes\_gameobjects::_disableWeapon();
	self thread maps\mp\gametypes\_gameobjects::_disableJump();
	self thread maps\mp\gametypes\_gameobjects::_disableSprint();

	self setClientDvar( "cap_info", "cycle_close" );
	
	//How long player can be in CAP
	passedTime = openwarfare\_timer::getTimePassed();
	maxTime = level.scr_cap_activated * 1000;
	timeDifference = 0;
  
  //#Moved from below
  modelIndex = self getCurrentModelIndex();
  
  self thread showCountDownAccessTime(maxTime, passedTime);
	
	while( !self meleeButtonPressed() && ( timeDifference < maxTime ) )
	{
		if ( !isDefined( self.cap_protected ) )
			self.cap_protected = true;
		
		hudTimer = int( ( maxTime - timeDifference ) / 1000 );
		//# This sets every x miliseconds a dvar that should only be set every 1 second
    // commenting for now, fix later
    //self setClientDvar( "cap_time", hudTimer );
			
		timeDifference = openwarfare\_timer::getTimePassed() - passedTime;
		if ( self useButtonPressed() )
		{
			//Find current model of player
      //#Moved above
			//modelIndex = self getCurrentModelIndex();
			
			//Detach Head Model (Original snip of script by BionicNipple)
			count = self getattachsize();
			for ( index = 0; index < count; index++ )
			{
				iModel = self getattachmodelname( index );
		
				if ( startsWith( iModel, "head" ) )
				{
					self detach( iModel );
					break;
				}
			}
		
			team = "neutral";
      if( level.teamBased )
        team = self.pers["team"];
      
      modelIndex++;
      if( modelIndex >= game["cap_" +team+ "_model"]["body_model"].size )
        modelIndex = 0;
      
      iprintln("Size body: ", game["cap_" +team+ "_model"]["body_model"].size);
      iprintln("Size func: ", game["cap_" +team+ "_model"]["function"].size);
      iprintln("Model index: ", modelIndex);
      
			//Change player model
      self [[game["cap_" +team+ "_model"]["function"][modelIndex]]]();
			self.pers["current_body_model"] = self.model;
			wait .5;
		}
		wait .01;
	}
	self.cap_protected = false;
	
	if ( ( isDefined( level.scr_spawn_protection_invisible ) && level.scr_spawn_protection_invisible == 1 ) && isDefined( self.spawn_protected ) && self.spawn_protected )
		self hide();
	
	if ( level.scr_thirdperson_enable )
		self setClientDvars( "cg_thirdPerson", "1", "cg_thirdPersonAngle", "360", "cg_thirdPersonRange", "72", "cap_enable", "false" );
	else
		self setClientDvars( "cg_thirdPerson", "0", "cg_thirdPersonAngle", "0", "cg_thirdPersonRange", "120", "cap_enable", "false" );	
	
	self thread openwarfare\_speedcontrol::setModifierSpeed( "_capeditor", 0 );
	self thread maps\mp\gametypes\_gameobjects::_enableWeapon();
	self thread maps\mp\gametypes\_gameobjects::_enableJump();
	self thread maps\mp\gametypes\_gameobjects::_enableSprint();
		
	wait 1;
	
	self.isInCAP = false;	
}

getCurrentModelIndex()
{
  team = "neutral";
	if ( level.teamBased )
    team = self.pers["team"];
  for ( index = 0; index < game["cap_" +team+ "_model"]["body_model"].size; index++ )
  {
    if ( game["cap_" +team+ "_model"]["body_model"][index] == self.model )
      return index;
  }
	
	return 0;
}

//Original Code by BionicNipple
startsWith( string, pattern )
{
    if ( string == pattern ) 
		return true;
    if ( pattern.size > string.size ) 
		return false;

    for ( index = 0; index < pattern.size; index++ )
	{
        if ( string[index] != pattern[index] ) 
			return false;
	}		

    return true;
}

showCountDownAccessTime(maxTime, passedTime) {
	self endon( "disconnect" );
	self endon( "death" );
  
  timeDifference = 0;
  while( timeDifference < maxTime ) {
    timeDifference = openwarfare\_timer::getTimePassed() - passedTime;
    self setClientDvar( "cap_time", int( ( maxTime - timeDifference ) / 1000 ) );
    wait 1;
  }
}