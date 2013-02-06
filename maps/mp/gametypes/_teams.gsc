#include openwarfare\_utils;

init()
{

	// Get the module's dvar
	level.teamBalance = getdvarx( "scr_teambalance", "int", 1, 0, 2 );
  
  // teamBalanceEndOfRound in no respawn gametypes (or numlives = 1) defaults at 1 (balancing only at the end of the round)
  isNoRespawnGametype = ( level.gameType == "ass" || level.gameType == "ftag" || level.gameType == "re" || level.gameType == "sd" || (isDefined(level.numLives) && level.numLives == 1) );
  
	level.teamBalanceEndOfRound = getdvarx( "scr_" + level.gameType + "_teamBalanceEndOfRound", "int", isNoRespawnGametype, 0, 1 );
	level.scr_teambalance_show_message = getdvarx( "scr_teambalance_show_message", "int", 1, 0, 1 );
	level.scr_teambalance_check_interval = getdvarx( "scr_teambalance_check_interval", "float", 20.0, 5.0, 120.0 );
	level.scr_teambalance_delay = getdvarx( "scr_teambalance_delay", "int", 10, 0, 30 );

	level.scr_teambalance_protected_clan_tags = getdvarx( "scr_teambalance_protected_clan_tags", "string", "" );
	level.scr_teambalance_protected_clan_tags = strtok( level.scr_teambalance_protected_clan_tags, " " );
  // also set on _capeditor.gsc, but setting here first because this file is called threaded, so that file could
  // be executed before thit one
  level.scr_cap_allow_othermodels = getdvarx( "scr_cap_allow_othermodels", "int", 0, 0, 3 );
	
	switch(game["allies"])
	{
	case "marines":
		precacheShader("mpflag_american");
		break;
	}

	precacheShader("mpflag_russian");
	precacheShader("mpflag_spectator");

	game["strings"]["autobalance"] = &"MP_AUTOBALANCE_NOW";
	precacheString( &"MP_AUTOBALANCE_NOW" );
	precacheString( &"MP_AUTOBALANCE_NEXT_ROUND" );
	precacheString( &"MP_AUTOBALANCE_SECONDS" );

	level.maxClients = getDvarInt( "sv_maxclients" );

	setPlayerModels();

	level.freeplayers = [];

	if( level.teamBased ) {
		level thread onPlayerConnect();
		level thread updateTeamBalance();
	}
	else {
		level thread onFreePlayerConnect();
	}
  wait .15;
  level thread updatePlayerTimes();
}


onPlayerConnect()
{
	while(1)
	{
		level waittill("connected", player);

		// Check if this player should be excempt from the auto-balancer
		if ( level.scr_teambalance_protected_clan_tags.size > 0 && player isPlayerClanMember( level.scr_teambalance_protected_clan_tags ) ) {
			player.dont_auto_balance = true;
		} else {
			player.dont_auto_balance = undefined;
		}

		player thread onJoinedTeam();
		player thread onJoinedSpectators();

		player thread trackPlayedTime();
	}
}


onFreePlayerConnect()
{
	while(1)
	{
		level waittill("connecting", player);

		player thread trackFreePlayedTime();
	}
}


onJoinedTeam()
{
	self endon("disconnect");

	while(1)
	{
		self waittill("joined_team");
		self logString( "joined team: " + self.pers["team"] );
		self updateTeamTime();
	}
}


onJoinedSpectators()
{
	self endon("disconnect");

	while(1)
	{
		self waittill("joined_spectators");
		self.pers["teamTime"] = undefined;
	}
}


trackPlayedTime()
{
	self endon( "disconnect" );

	self.timePlayed["allies"] = 0;
	self.timePlayed["axis"] = 0;
	self.timePlayed["free"] = 0;
	self.timePlayed["other"] = 0;
	self.timePlayed["total"] = 0;

	while ( level.inPrematchPeriod )
		wait ( 0.05 );

	while(1)
	{
		if ( game["state"] == "playing" )
		{
			if ( self.sessionteam == "allies" )
			{
				self.timePlayed["allies"]++;
				self.timePlayed["total"]++;
			}
			else if ( self.sessionteam == "axis" )
			{
				self.timePlayed["axis"]++;
				self.timePlayed["total"]++;
			}
			else if ( self.sessionteam == "spectator" )
			{
				self.timePlayed["other"]++;
			}

		}

		wait ( 1.0 );
	}
}

updatePlayerTimes()
{
	nextToUpdate = 0;
	while(1)
	{
		nextToUpdate++;
		if ( nextToUpdate >= level.players.size )
			nextToUpdate = 0;

		if ( isDefined( level.players[nextToUpdate] ) )
			level.players[nextToUpdate] updatePlayedTime();

    if(level.teamBased)
      wait ( 4.0 );
    else
      wait ( 1.0 );
	}
}


updatePlayedTime()
{
	if ( self.timePlayed["allies"] )
	{
		self maps\mp\gametypes\_persistence::statAdd( "time_played_allies", self.timePlayed["allies"] );
		self maps\mp\gametypes\_persistence::statAdd( "time_played_total", self.timePlayed["allies"] );
	}

	if ( self.timePlayed["axis"] )
	{
		self maps\mp\gametypes\_persistence::statAdd( "time_played_opfor", self.timePlayed["axis"] );
		self maps\mp\gametypes\_persistence::statAdd( "time_played_total", self.timePlayed["axis"] );
	}

	if ( self.timePlayed["other"] )
	{
		self maps\mp\gametypes\_persistence::statAdd( "time_played_other", self.timePlayed["other"] );
		self maps\mp\gametypes\_persistence::statAdd( "time_played_total", self.timePlayed["other"] );
	}

	if ( game["state"] == "postgame" )
		return;

	self.timePlayed["allies"] = 0;
	self.timePlayed["axis"] = 0;
	self.timePlayed["other"] = 0;
}


updateTeamTime()
{
	if ( game["state"] != "playing" )
		return;

	self.pers["teamTime"] = getTime();
}


updateTeamBalanceDvar()
{
	while(1)
	{
		teambalance = getdvarx( "scr_teambalance", "int", 0, 0, 2 );
		if(level.teambalance != teambalance)
			level.teambalance = teambalance;

		wait 1;
	}
}


updateTeamBalanceWarning()
{
	level endon ( "roundSwitching" );
	
	while(1)
	{
		if( !getTeamBalance() )
		{
			iPrintLn( &"MP_AUTOBALANCE_NEXT_ROUND" );
			break; 
		}
		wait level.scr_teambalance_check_interval; 
	}
}

updateTeamBalance()
{
	level.teamLimit = level.maxclients / 2;
	
	// level thread updateTeamBalanceDvar();

	wait .15;

	if ( level.teamBalance && level.teamBalanceEndOfRound && ( level.roundLimit > 1 || ( !level.roundLimit && level.scoreLimit != 1 ) ) )
	{
		level thread updateTeamBalanceWarning();
		level waittill( "roundSwitching" );

		if( !getTeamBalance() )
		{
			level balanceTeams();
		}
	}
	else
	{
		level endon ( "game_ended" );
		while(1)
		{
			if( level.teamBalance )
			{
				if( !getTeamBalance() )
				{
					// Check if we should show the message about auto balancing
					if ( level.scr_teambalance_show_message == 1 ) {
						// Make sure the that the delay is not zero
						if ( level.scr_teambalance_delay > 0 ) {
							iPrintLn( &"MP_AUTOBALANCE_SECONDS", level.scr_teambalance_delay );
						}
					}
					// Use the new variable instead of a fixed value
				    wait ( level.scr_teambalance_delay );

					if( !getTeamBalance() )
						level balanceTeams();
				}

				// Use the new variable to see how long we need to wait for the next cycle
				wait ( level.scr_teambalance_check_interval );
			}

			wait 1.0;
		}
	}

}


getTeamBalance()
{
	level.team["allies"] = 0;
	level.team["axis"] = 0;

	players = level.players;
	for(i = 0; i < players.size; i++)
	{
		if((isdefined(players[i].pers["team"])) && (players[i].pers["team"] == "allies"))
			level.team["allies"]++;
		else if((isdefined(players[i].pers["team"])) && (players[i].pers["team"] == "axis"))
			level.team["axis"]++;
	}

	if((level.team["allies"] > (level.team["axis"] + 1)) || (level.team["axis"] > (level.team["allies"] + 1)))
		return false;
	else
		return true;
}


canAutobalance(player)
{
	if ( !level.teamBalanceEndOfRound && ( ( isdefined( player.isDefusing ) && player.isDefusing ) || ( isdefined( player.isPlanting ) && player.isPlanting ) || isDefined( player.carryObject ) ) )
		return false;
	else
		return true;
	
}


balanceMostRecent()
{
	//Create/Clear the team arrays
	AlliedPlayers = [];
	AxisPlayers = [];

	// Populate the team arrays
	players = level.players;
	for(i = 0; i < players.size; i++)
	{
		if(!isdefined(players[i].pers["teamTime"]))
			continue;

		if((isdefined(players[i].pers["team"])) && (players[i].pers["team"] == "allies"))
			AlliedPlayers[AlliedPlayers.size] = players[i];
		else if((isdefined(players[i].pers["team"])) && (players[i].pers["team"] == "axis"))
			AxisPlayers[AxisPlayers.size] = players[i];
	}

	MostRecent = undefined;
	autoBalanced = true;
	
	while ( autoBalanced && ( ( AlliedPlayers.size > ( AxisPlayers.size + 1 ) ) || ( AxisPlayers.size > ( AlliedPlayers.size + 1 ) ) ) )
	{
		autoBalanced = false;
		
		if(AlliedPlayers.size > (AxisPlayers.size + 1))
		{
			// Move the player that's been on the team the shortest ammount of time (highest teamTime value)
			for(j = 0; j < AlliedPlayers.size; j++)
			{
				resetTimeout();
				if( !canAutobalance(AlliedPlayers[j]) || isdefined( AlliedPlayers[j].dont_auto_balance ) )
					continue;

				if(!isdefined(MostRecent))
					MostRecent = AlliedPlayers[j];
				else if(AlliedPlayers[j].pers["teamTime"] > MostRecent.pers["teamTime"])
					MostRecent = AlliedPlayers[j];
			}

			if ( isDefined( MostRecent ) ) {
				MostRecent changeTeam("axis");
				autoBalanced = true;
				
			} else if ( level.teamBalance == 2 ) {
				// Same loop but we ignore the dont_auto_balance flag
				for(j = 0; j < AlliedPlayers.size; j++)
				{
					resetTimeout();
					if( !canAutobalance(AlliedPlayers[j]) )
						continue;
					if(!isdefined(MostRecent))
						MostRecent = AlliedPlayers[j];
					else if(AlliedPlayers[j].pers["teamTime"] > MostRecent.pers["teamTime"])
						MostRecent = AlliedPlayers[j];
				}
				if ( isDefined( MostRecent ) ) {
					MostRecent changeTeam("axis");
					autoBalanced = true;
				}
			}
		}
		else if(AxisPlayers.size > (AlliedPlayers.size + 1))
		{
			// Move the player that's been on the team the shortest ammount of time (highest teamTime value)
			for(j = 0; j < AxisPlayers.size; j++)
			{
				resetTimeout();
				if( !canAutobalance(AxisPlayers[j]) || isdefined( AxisPlayers[j].dont_auto_balance ) )
					continue;

				if(!isdefined(MostRecent))
					MostRecent = AxisPlayers[j];
				else if(AxisPlayers[j].pers["teamTime"] > MostRecent.pers["teamTime"])
					MostRecent = AxisPlayers[j];
			}

			if ( isDefined( MostRecent ) ) {
				MostRecent changeTeam("allies");
				autoBalanced = true;
				
			} else if ( level.teamBalance == 2 ) {
				// Same loop but we ignore the dont_auto_balance flag
				for(j = 0; j < AxisPlayers.size; j++)
				{
					resetTimeout();
					if( !canAutobalance(AxisPlayers[j]) )
						continue;
					if(!isdefined(MostRecent))
						MostRecent = AxisPlayers[j];
					else if(AxisPlayers[j].pers["teamTime"] > MostRecent.pers["teamTime"])
						MostRecent = AxisPlayers[j];
				}
				if ( isDefined( MostRecent ) ) {
					MostRecent changeTeam("allies");
					autoBalanced = true;
				}
			}
		}

		MostRecent = undefined;
		AlliedPlayers = [];
		AxisPlayers = [];

		players = level.players;
		for(i = 0; i < players.size; i++)
		{
			resetTimeout();

			if((isdefined(players[i].pers["team"])) && (players[i].pers["team"] == "allies"))
				AlliedPlayers[AlliedPlayers.size] = players[i];
			else if((isdefined(players[i].pers["team"])) &&(players[i].pers["team"] == "axis"))
				AxisPlayers[AxisPlayers.size] = players[i];
		}
	}
}


balanceDeadPlayers()
{
	if( level.teamBalanceEndOfRound )
		return;

	//Create/Clear the team arrays
	AlliedPlayers = [];
	AxisPlayers = [];

	// Populate the team arrays
	players = level.players;
	for(i = 0; i < players.size; i++)
	{
		if((isdefined(players[i].pers["team"])) && (players[i].pers["team"] == "allies"))
			AlliedPlayers[AlliedPlayers.size] = players[i];
		else if((isdefined(players[i].pers["team"])) && (players[i].pers["team"] == "axis"))
			AxisPlayers[AxisPlayers.size] = players[i];
	}

	numToBalance = int( abs( AxisPlayers.size - AlliedPlayers.size) ) - 1;

	while( numToBalance > 0 && ((AlliedPlayers.size > (AxisPlayers.size + 1)) || (AxisPlayers.size > (AlliedPlayers.size + 1))))
	{	
		if(AlliedPlayers.size > (AxisPlayers.size + 1))
		{
			for(j = 0; j < AlliedPlayers.size; j++)
			{
				if( !isalive(AlliedPlayers[j]) )
				{
					AlliedPlayers[j] changeTeam("axis");
					break;
				}
			}			
		}
		else if(AxisPlayers.size > (AlliedPlayers.size + 1))
		{
			for(j = 0; j < AxisPlayers.size; j++)
			{
				if( !isalive(AxisPlayers[j]) )
				{
					AxisPlayers[j] changeTeam("axis");
					break;
				}
			}
		}

		AlliedPlayers = [];
		AxisPlayers = [];
		numToBalance--;
		
		players = level.players;
		for(i = 0; i < players.size; i++)
		{
			if((isdefined(players[i].pers["team"])) && (players[i].pers["team"] == "allies"))
				AlliedPlayers[AlliedPlayers.size] = players[i];
			else if((isdefined(players[i].pers["team"])) &&(players[i].pers["team"] == "axis"))
				AxisPlayers[AxisPlayers.size] = players[i];
		}
	}
}

balanceTeams()
{
	if ( level.scr_teambalance_show_message == 1 ) {
		iPrintLnBold( game["strings"]["autobalance"] );
	}
	
	//if( level.teamBalanceDeadFirst )
		//balanceDeadPlayers();
	//if( !getTeamBalance() )
		balanceMostRecent();
}

changeTeam( team )
{
	teams[0] = "allies";
	teams[1] = "axis";
	assignment = team;
	
	self switchPlayerTeam( assignment, false );

	if ( !isAlive( self ) ) {
		if ( level.scr_show_player_status == 1 ) {
			self.statusicon = "hud_status_dead";
		} else {
			self.statusicon = "";
		}
	}

	//self maps\mp\gametypes\_globallogic::beginClassChoice();
}


setPlayerModels()
{
	game["allies_model"] = [];
  game["axis_model"] = [];
  
  game["cap_allies_model"]["function"] = [];
  game["cap_allies_model"]["body_model"] = [];
  game["cap_axis_model"]["function"] = [];
  game["cap_axis_model"]["body_model"] = [];
  game["cap_neutral_model"]["function"] = [];
  game["cap_neutral_model"]["body_model"] = [];

	alliesCharSet = tableLookup( "mp/mapsTable.csv", 0, getDvar( "mapname" ), 1 );
	if ( !isDefined( alliesCharSet ) || alliesCharSet == "" )
	{
		if ( !isDefined( game["allies_soldiertype"] ) || !isDefined( game["allies"] ) )
		{
			game["allies_soldiertype"] = "desert";
			game["allies"] = "marines";
		}
	}
	else
		game["allies_soldiertype"] = alliesCharSet;

	axisCharSet = tableLookup( "mp/mapsTable.csv", 0, getDvar( "mapname" ), 2 );
	if ( !isDefined( axisCharSet ) || axisCharSet == "" )
	{
		if ( !isDefined( game["axis_soldiertype"] ) || !isDefined( game["axis"] ) )
		{
			game["axis_soldiertype"] = "desert";
			game["axis"] = "arab";
		}
	}
	else
		game["axis_soldiertype"] = axisCharSet;

  // level.scr_cap_allow_othermodels
  // 1 - free gametypes only
  // 2 - teambased gametypes only
  // 3 - all gametypes
  // Allies models precaching
  
  alliesModelsFound = false;
	if( game["allies_soldiertype"] == "desert" || level.scr_cap_allow_othermodels != 0 ) {
    alliesModelsFound = true;
    mptype\mptype_ally_cqb::precache();
		mptype\mptype_ally_sniper::precache();
		mptype\mptype_ally_engineer::precache();
		mptype\mptype_ally_rifleman::precache();
		mptype\mptype_ally_support::precache();
    
    if( game["allies_soldiertype"] == "desert" || level.scr_cap_allow_othermodels > 1 ) {
      game["cap_allies_model"]["function"][game["cap_allies_model"]["function"].size] = mptype\mptype_ally_rifleman::main;
      game["cap_allies_model"]["body_model"][game["cap_allies_model"]["body_model"].size] = "body_mp_usmc_assault";
      game["cap_allies_model"]["function"][game["cap_allies_model"]["function"].size] = mptype\mptype_ally_cqb::main;
      game["cap_allies_model"]["body_model"][game["cap_allies_model"]["body_model"].size] = "body_mp_usmc_specops";
      game["cap_allies_model"]["function"][game["cap_allies_model"]["function"].size] = mptype\mptype_ally_support::main;
      game["cap_allies_model"]["body_model"][game["cap_allies_model"]["body_model"].size] = "body_mp_usmc_support";
      game["cap_allies_model"]["function"][game["cap_allies_model"]["function"].size] = mptype\mptype_ally_engineer::main;
      game["cap_allies_model"]["body_model"][game["cap_allies_model"]["body_model"].size] = "body_mp_usmc_recon";
      game["cap_allies_model"]["function"][game["cap_allies_model"]["function"].size] = mptype\mptype_ally_sniper::main;
      game["cap_allies_model"]["body_model"][game["cap_allies_model"]["body_model"].size] = "body_mp_usmc_sniper";
    }
    if( game["allies_soldiertype"] == "desert" || (level.scr_cap_allow_othermodels != 0 && level.scr_cap_allow_othermodels != 2) ) {
      game["cap_neutral_model"]["function"][game["cap_neutral_model"]["function"].size] = mptype\mptype_ally_rifleman::main;
      game["cap_neutral_model"]["body_model"][game["cap_neutral_model"]["body_model"].size] = "body_mp_usmc_assault";
      game["cap_neutral_model"]["function"][game["cap_neutral_model"]["function"].size] = mptype\mptype_ally_cqb::main;
      game["cap_neutral_model"]["body_model"][game["cap_neutral_model"]["body_model"].size] = "body_mp_usmc_specops";
      game["cap_neutral_model"]["function"][game["cap_neutral_model"]["function"].size] = mptype\mptype_ally_support::main;
      game["cap_neutral_model"]["body_model"][game["cap_neutral_model"]["body_model"].size] = "body_mp_usmc_support";
      game["cap_neutral_model"]["function"][game["cap_neutral_model"]["function"].size] = mptype\mptype_ally_engineer::main;
      game["cap_neutral_model"]["body_model"][game["cap_neutral_model"]["body_model"].size] = "body_mp_usmc_recon";
      game["cap_neutral_model"]["function"][game["cap_neutral_model"]["function"].size] = mptype\mptype_ally_sniper::main;
      game["cap_neutral_model"]["body_model"][game["cap_neutral_model"]["body_model"].size] = "body_mp_usmc_sniper";
    }
  }
  if( game["allies_soldiertype"] == "urban" || level.scr_cap_allow_othermodels != 0 ) {
    alliesModelsFound = true;
    mptype\mptype_ally_urban_sniper::precache();
		mptype\mptype_ally_urban_support::precache();
		mptype\mptype_ally_urban_assault::precache();
		mptype\mptype_ally_urban_recon::precache();
		mptype\mptype_ally_urban_specops::precache();
    
    if( game["allies_soldiertype"] == "urban" || level.scr_cap_allow_othermodels > 1 ) {
      game["cap_allies_model"]["function"][game["cap_allies_model"]["function"].size] = mptype\mptype_ally_urban_assault::main;
      game["cap_allies_model"]["body_model"][game["cap_allies_model"]["body_model"].size] = "body_mp_sas_urban_assault";
      game["cap_allies_model"]["function"][game["cap_allies_model"]["function"].size] = mptype\mptype_ally_urban_specops::main;
      game["cap_allies_model"]["body_model"][game["cap_allies_model"]["body_model"].size] = "body_mp_sas_urban_specops";
      game["cap_allies_model"]["function"][game["cap_allies_model"]["function"].size] = mptype\mptype_ally_urban_support::main;
      game["cap_allies_model"]["body_model"][game["cap_allies_model"]["body_model"].size] = "body_mp_sas_urban_support";
      game["cap_allies_model"]["function"][game["cap_allies_model"]["function"].size] = mptype\mptype_ally_urban_recon::main;
      game["cap_allies_model"]["body_model"][game["cap_allies_model"]["body_model"].size] = "body_mp_sas_urban_recon";
      game["cap_allies_model"]["function"][game["cap_allies_model"]["function"].size] = mptype\mptype_ally_urban_sniper::main;
      game["cap_allies_model"]["body_model"][game["cap_allies_model"]["body_model"].size] = "body_mp_sas_urban_sniper";
    }
    if( game["allies_soldiertype"] == "urban" || (level.scr_cap_allow_othermodels != 0 && level.scr_cap_allow_othermodels != 2) ) {
      game["cap_neutral_model"]["function"][game["cap_neutral_model"]["function"].size] = mptype\mptype_ally_urban_assault::main;
      game["cap_neutral_model"]["body_model"][game["cap_neutral_model"]["body_model"].size] = "body_mp_sas_urban_assault";
      game["cap_neutral_model"]["function"][game["cap_neutral_model"]["function"].size] = mptype\mptype_ally_urban_specops::main;
      game["cap_neutral_model"]["body_model"][game["cap_neutral_model"]["body_model"].size] = "body_mp_sas_urban_specops";
      game["cap_neutral_model"]["function"][game["cap_neutral_model"]["function"].size] = mptype\mptype_ally_urban_support::main;
      game["cap_neutral_model"]["body_model"][game["cap_neutral_model"]["body_model"].size] = "body_mp_sas_urban_support";
      game["cap_neutral_model"]["function"][game["cap_neutral_model"]["function"].size] = mptype\mptype_ally_urban_recon::main;
      game["cap_neutral_model"]["body_model"][game["cap_neutral_model"]["body_model"].size] = "body_mp_sas_urban_recon";
      game["cap_neutral_model"]["function"][game["cap_neutral_model"]["function"].size] = mptype\mptype_ally_urban_sniper::main;
      game["cap_neutral_model"]["body_model"][game["cap_neutral_model"]["body_model"].size] = "body_mp_sas_urban_sniper";
    }
  }
  if( !alliesModelsFound || level.scr_cap_allow_othermodels != 0 ) {
    mptype\mptype_ally_woodland_assault::precache();
		mptype\mptype_ally_woodland_recon::precache();
		mptype\mptype_ally_woodland_sniper::precache();
		mptype\mptype_ally_woodland_specops::precache();
		mptype\mptype_ally_woodland_support::precache();
    
    if( !alliesModelsFound || level.scr_cap_allow_othermodels > 1 ) {
      game["cap_allies_model"]["function"][game["cap_allies_model"]["function"].size] = mptype\mptype_ally_woodland_assault::main;
      game["cap_allies_model"]["body_model"][game["cap_allies_model"]["body_model"].size] = "body_mp_usmc_woodland_assault";
      game["cap_allies_model"]["function"][game["cap_allies_model"]["function"].size] = mptype\mptype_ally_woodland_specops::main;
      game["cap_allies_model"]["body_model"][game["cap_allies_model"]["body_model"].size] = "body_mp_usmc_woodland_specops";
      game["cap_allies_model"]["function"][game["cap_allies_model"]["function"].size] = mptype\mptype_ally_woodland_support::main;
      game["cap_allies_model"]["body_model"][game["cap_allies_model"]["body_model"].size] = "body_mp_usmc_woodland_support";
      game["cap_allies_model"]["function"][game["cap_allies_model"]["function"].size] = mptype\mptype_ally_woodland_recon::main;
      game["cap_allies_model"]["body_model"][game["cap_allies_model"]["body_model"].size] = "body_mp_usmc_woodland_recon";
      game["cap_allies_model"]["function"][game["cap_allies_model"]["function"].size] = mptype\mptype_ally_woodland_sniper::main;
      game["cap_allies_model"]["body_model"][game["cap_allies_model"]["body_model"].size] = "body_mp_usmc_woodland_sniper";
    }
    if( !alliesModelsFound || (level.scr_cap_allow_othermodels != 0 && level.scr_cap_allow_othermodels != 2) ) {
      game["cap_neutral_model"]["function"][game["cap_neutral_model"]["function"].size] = mptype\mptype_ally_woodland_assault::main;
      game["cap_neutral_model"]["body_model"][game["cap_neutral_model"]["body_model"].size] = "body_mp_usmc_woodland_assault";
      game["cap_neutral_model"]["function"][game["cap_neutral_model"]["function"].size] = mptype\mptype_ally_woodland_specops::main;
      game["cap_neutral_model"]["body_model"][game["cap_neutral_model"]["body_model"].size] = "body_mp_usmc_woodland_specops";
      game["cap_neutral_model"]["function"][game["cap_neutral_model"]["function"].size] = mptype\mptype_ally_woodland_support::main;
      game["cap_neutral_model"]["body_model"][game["cap_neutral_model"]["body_model"].size] = "body_mp_usmc_woodland_support";
      game["cap_neutral_model"]["function"][game["cap_neutral_model"]["function"].size] = mptype\mptype_ally_woodland_recon::main;
      game["cap_neutral_model"]["body_model"][game["cap_neutral_model"]["body_model"].size] = "body_mp_usmc_woodland_recon";
      game["cap_neutral_model"]["function"][game["cap_neutral_model"]["function"].size] = mptype\mptype_ally_woodland_sniper::main;
      game["cap_neutral_model"]["body_model"][game["cap_neutral_model"]["body_model"].size] = "body_mp_usmc_woodland_sniper";
    }
  }
  
  // Axis models precaching
  axisModelsFound = false;
  if( game["axis_soldiertype"] == "desert" || level.scr_cap_allow_othermodels != 0 ) {
    axisModelsFound = true;
    mptype\mptype_axis_cqb::precache();
		mptype\mptype_axis_sniper::precache();
		mptype\mptype_axis_engineer::precache();
		mptype\mptype_axis_rifleman::precache();
		mptype\mptype_axis_support::precache();
    
    if( game["axis_soldiertype"] == "desert" || level.scr_cap_allow_othermodels > 1 ) {
      game["cap_axis_model"]["function"][game["cap_axis_model"]["function"].size] = mptype\mptype_axis_rifleman::main;
      game["cap_axis_model"]["body_model"][game["cap_axis_model"]["body_model"].size] = "body_mp_arab_regular_assault";
      game["cap_axis_model"]["function"][game["cap_axis_model"]["function"].size] = mptype\mptype_axis_cqb::main;
      game["cap_axis_model"]["body_model"][game["cap_axis_model"]["body_model"].size] = "body_mp_arab_regular_cqb";
      game["cap_axis_model"]["function"][game["cap_axis_model"]["function"].size] = mptype\mptype_axis_support::main;
      game["cap_axis_model"]["body_model"][game["cap_axis_model"]["body_model"].size] = "body_mp_arab_regular_support";
      game["cap_axis_model"]["function"][game["cap_axis_model"]["function"].size] = mptype\mptype_axis_engineer::main;
      game["cap_axis_model"]["body_model"][game["cap_axis_model"]["body_model"].size] = "body_mp_arab_regular_engineer";
      game["cap_axis_model"]["function"][game["cap_axis_model"]["function"].size] = mptype\mptype_axis_sniper::main;
      game["cap_axis_model"]["body_model"][game["cap_axis_model"]["body_model"].size] = "body_mp_arab_regular_sniper";
    }
		if( game["axis_soldiertype"] == "desert" || (level.scr_cap_allow_othermodels != 0 && level.scr_cap_allow_othermodels != 2) ) {
      game["cap_neutral_model"]["function"][game["cap_neutral_model"]["function"].size] = mptype\mptype_axis_rifleman::main;
      game["cap_neutral_model"]["body_model"][game["cap_neutral_model"]["body_model"].size] = "body_mp_arab_regular_assault";
      game["cap_neutral_model"]["function"][game["cap_neutral_model"]["function"].size] = mptype\mptype_axis_cqb::main;
      game["cap_neutral_model"]["body_model"][game["cap_neutral_model"]["body_model"].size] = "body_mp_arab_regular_cqb";
      game["cap_neutral_model"]["function"][game["cap_neutral_model"]["function"].size] = mptype\mptype_axis_support::main;
      game["cap_neutral_model"]["body_model"][game["cap_neutral_model"]["body_model"].size] = "body_mp_arab_regular_support";
      game["cap_neutral_model"]["function"][game["cap_neutral_model"]["function"].size] = mptype\mptype_axis_engineer::main;
      game["cap_neutral_model"]["body_model"][game["cap_neutral_model"]["body_model"].size] = "body_mp_arab_regular_engineer";
      game["cap_neutral_model"]["function"][game["cap_neutral_model"]["function"].size] = mptype\mptype_axis_sniper::main;
      game["cap_neutral_model"]["body_model"][game["cap_neutral_model"]["body_model"].size] = "body_mp_arab_regular_sniper";
    }
    
  }
  if( game["axis_soldiertype"] == "urban" || level.scr_cap_allow_othermodels != 0 ) {
    axisModelsFound = true;
    mptype\mptype_axis_urban_sniper::precache();
		mptype\mptype_axis_urban_support::precache();
		mptype\mptype_axis_urban_assault::precache();
		mptype\mptype_axis_urban_engineer::precache();
		mptype\mptype_axis_urban_cqb::precache();
    
    if( game["axis_soldiertype"] == "urban" || level.scr_cap_allow_othermodels > 1 ) {
      game["cap_axis_model"]["function"][game["cap_axis_model"]["function"].size] = mptype\mptype_axis_urban_assault::main;
      game["cap_axis_model"]["body_model"][game["cap_axis_model"]["body_model"].size] = "body_mp_opforce_assault";
      game["cap_axis_model"]["function"][game["cap_axis_model"]["function"].size] = mptype\mptype_axis_urban_cqb::main;
      game["cap_axis_model"]["body_model"][game["cap_axis_model"]["body_model"].size] = "body_mp_opforce_cqb";
      game["cap_axis_model"]["function"][game["cap_axis_model"]["function"].size] = mptype\mptype_axis_urban_support::main;
      game["cap_axis_model"]["body_model"][game["cap_axis_model"]["body_model"].size] = "body_mp_opforce_support";
      game["cap_axis_model"]["function"][game["cap_axis_model"]["function"].size] = mptype\mptype_axis_urban_engineer::main;
      game["cap_axis_model"]["body_model"][game["cap_axis_model"]["body_model"].size] = "body_mp_opforce_eningeer";
      game["cap_axis_model"]["function"][game["cap_axis_model"]["function"].size] = mptype\mptype_axis_urban_sniper::main;
      game["cap_axis_model"]["body_model"][game["cap_axis_model"]["body_model"].size] = "body_mp_opforce_sniper_urban";
    }
    if( game["axis_soldiertype"] == "urban" || (level.scr_cap_allow_othermodels != 0 && level.scr_cap_allow_othermodels != 2) ) {
      game["cap_neutral_model"]["function"][game["cap_neutral_model"]["function"].size] = mptype\mptype_axis_urban_assault::main;
      game["cap_neutral_model"]["body_model"][game["cap_neutral_model"]["body_model"].size] = "body_mp_opforce_assault";
      game["cap_neutral_model"]["function"][game["cap_neutral_model"]["function"].size] = mptype\mptype_axis_urban_cqb::main;
      game["cap_neutral_model"]["body_model"][game["cap_neutral_model"]["body_model"].size] = "body_mp_opforce_cqb";
      game["cap_neutral_model"]["function"][game["cap_neutral_model"]["function"].size] = mptype\mptype_axis_urban_support::main;
      game["cap_neutral_model"]["body_model"][game["cap_neutral_model"]["body_model"].size] = "body_mp_opforce_support";
      game["cap_neutral_model"]["function"][game["cap_neutral_model"]["function"].size] = mptype\mptype_axis_urban_engineer::main;
      game["cap_neutral_model"]["body_model"][game["cap_neutral_model"]["body_model"].size] = "body_mp_opforce_eningeer";
      game["cap_neutral_model"]["function"][game["cap_neutral_model"]["function"].size] = mptype\mptype_axis_urban_sniper::main;
      game["cap_neutral_model"]["body_model"][game["cap_neutral_model"]["body_model"].size] = "body_mp_opforce_sniper_urban";
    }
  }
  if( !axisModelsFound || level.scr_cap_allow_othermodels != 0 ) {
    mptype\mptype_axis_woodland_rifleman::precache();
		mptype\mptype_axis_woodland_cqb::precache();
		mptype\mptype_axis_woodland_sniper::precache();
		mptype\mptype_axis_woodland_engineer::precache();
		mptype\mptype_axis_woodland_support::precache();
    
    if( !axisModelsFound || level.scr_cap_allow_othermodels > 1 ) {
      game["cap_axis_model"]["function"][game["cap_axis_model"]["function"].size] = mptype\mptype_axis_woodland_rifleman::main;
      game["cap_axis_model"]["body_model"][game["cap_axis_model"]["body_model"].size] = "body_mp_opforce_assault";
      game["cap_axis_model"]["function"][game["cap_axis_model"]["function"].size] = mptype\mptype_axis_woodland_cqb::main;
      game["cap_axis_model"]["body_model"][game["cap_axis_model"]["body_model"].size] = "body_mp_opforce_cqb";
      game["cap_axis_model"]["function"][game["cap_axis_model"]["function"].size] = mptype\mptype_axis_woodland_support::main;
      game["cap_axis_model"]["body_model"][game["cap_axis_model"]["body_model"].size] = "body_mp_opforce_support";
      game["cap_axis_model"]["function"][game["cap_axis_model"]["function"].size] = mptype\mptype_axis_woodland_engineer::main;
      game["cap_axis_model"]["body_model"][game["cap_axis_model"]["body_model"].size] = "body_mp_opforce_eningeer";
      game["cap_axis_model"]["function"][game["cap_axis_model"]["function"].size] = mptype\mptype_axis_woodland_sniper::main;
      game["cap_axis_model"]["body_model"][game["cap_axis_model"]["body_model"].size]= "body_mp_opforce_sniper";
    }
    if( !axisModelsFound || (level.scr_cap_allow_othermodels != 0 && level.scr_cap_allow_othermodels != 2) ) {
      game["cap_neutral_model"]["function"][game["cap_neutral_model"]["function"].size] = mptype\mptype_axis_woodland_rifleman::main;
      game["cap_neutral_model"]["body_model"][game["cap_neutral_model"]["body_model"].size] = "body_mp_opforce_assault";
      game["cap_neutral_model"]["function"][game["cap_neutral_model"]["function"].size] = mptype\mptype_axis_woodland_cqb::main;
      game["cap_neutral_model"]["body_model"][game["cap_neutral_model"]["body_model"].size] = "body_mp_opforce_cqb";
      game["cap_neutral_model"]["function"][game["cap_neutral_model"]["function"].size] = mptype\mptype_axis_woodland_support::main;
      game["cap_neutral_model"]["body_model"][game["cap_neutral_model"]["body_model"].size] = "body_mp_opforce_support";
      game["cap_neutral_model"]["function"][game["cap_neutral_model"]["function"].size] = mptype\mptype_axis_woodland_engineer::main;
      game["cap_neutral_model"]["body_model"][game["cap_neutral_model"]["body_model"].size] = "body_mp_opforce_eningeer";
      game["cap_neutral_model"]["function"][game["cap_neutral_model"]["function"].size] = mptype\mptype_axis_woodland_sniper::main;
      game["cap_neutral_model"]["body_model"][game["cap_neutral_model"]["body_model"].size] = "body_mp_opforce_sniper";
    }
  }

  if ( game["allies_soldiertype"] == "desert" ) {
		// assert( game["allies"] == "marines" );
		if ( game["allies"] != "marines" ) {
			iprintln( "WARNING: game['allies'] == "+game["allies"]+", expected 'marines'." );
			game["allies"] = "marines";
		}
		game["allies_model"]["ASSAULT"] = mptype\mptype_ally_rifleman::main;
		game["allies_model"]["SPECOPS"] = mptype\mptype_ally_cqb::main;
		game["allies_model"]["SUPPORT"] = mptype\mptype_ally_support::main;
		game["allies_model"]["RECON"] = mptype\mptype_ally_engineer::main;
    game["allies_model"]["SNIPER"] = mptype\mptype_ally_sniper::main;
		// custom class defaults
		game["allies_model"]["CLASS_CUSTOM1"] = mptype\mptype_ally_cqb::main;
		game["allies_model"]["CLASS_CUSTOM2"] = mptype\mptype_ally_cqb::main;
		game["allies_model"]["CLASS_CUSTOM3"] = mptype\mptype_ally_cqb::main;
		game["allies_model"]["CLASS_CUSTOM4"] = mptype\mptype_ally_cqb::main;
		game["allies_model"]["CLASS_CUSTOM5"] = mptype\mptype_ally_cqb::main;
    game["allies_model"]["CLASS_CUSTOM6"] = mptype\mptype_ally_cqb::main;
		game["allies_model"]["CLASS_CUSTOM7"] = mptype\mptype_ally_cqb::main;
		game["allies_model"]["CLASS_CUSTOM8"] = mptype\mptype_ally_cqb::main;
		game["allies_model"]["CLASS_CUSTOM9"] = mptype\mptype_ally_cqb::main;
  }
  else if ( game["allies_soldiertype"] == "urban" ) {
		// assert( game["allies"] == "sas" );
		if ( game["allies"] != "sas" ) {
			iprintln( "WARNING: game['allies'] == "+game["allies"]+", expected 'sas'." );
			game["allies"] = "sas";
		}
		game["allies_model"]["ASSAULT"] = mptype\mptype_ally_urban_assault::main;
		game["allies_model"]["SPECOPS"] = mptype\mptype_ally_urban_specops::main;
		game["allies_model"]["SUPPORT"] = mptype\mptype_ally_urban_support::main;
		game["allies_model"]["RECON"] = mptype\mptype_ally_urban_recon::main;
    game["allies_model"]["SNIPER"] = mptype\mptype_ally_urban_sniper::main;
		// custom class defaults
		game["allies_model"]["CLASS_CUSTOM1"] = mptype\mptype_ally_urban_assault::main;
		game["allies_model"]["CLASS_CUSTOM2"] = mptype\mptype_ally_urban_assault::main;
		game["allies_model"]["CLASS_CUSTOM3"] = mptype\mptype_ally_urban_assault::main;
		game["allies_model"]["CLASS_CUSTOM4"] = mptype\mptype_ally_urban_assault::main;
		game["allies_model"]["CLASS_CUSTOM5"] = mptype\mptype_ally_urban_assault::main;
    game["allies_model"]["CLASS_CUSTOM6"] = mptype\mptype_ally_urban_assault::main;
		game["allies_model"]["CLASS_CUSTOM7"] = mptype\mptype_ally_urban_assault::main;
		game["allies_model"]["CLASS_CUSTOM8"] = mptype\mptype_ally_urban_assault::main;
		game["allies_model"]["CLASS_CUSTOM9"] = mptype\mptype_ally_urban_assault::main;
  }
	else {
		// assert( game["allies"] == "sas" );
		if ( game["allies"] != "marines" ) {
			iprintln( "WARNING: game['allies'] == "+game["allies"]+", expected 'marines'." );
			game["allies"] = "marines";
		}
		game["allies_model"]["ASSAULT"] = mptype\mptype_ally_woodland_assault::main;
		game["allies_model"]["SPECOPS"] = mptype\mptype_ally_woodland_specops::main;
		game["allies_model"]["SUPPORT"] = mptype\mptype_ally_woodland_support::main;
		game["allies_model"]["RECON"] = mptype\mptype_ally_woodland_recon::main;
		game["allies_model"]["SNIPER"] = mptype\mptype_ally_woodland_sniper::main;
		// custom class defaults
		game["allies_model"]["CLASS_CUSTOM1"] = mptype\mptype_ally_woodland_recon::main;
		game["allies_model"]["CLASS_CUSTOM2"] = mptype\mptype_ally_woodland_recon::main;
		game["allies_model"]["CLASS_CUSTOM3"] = mptype\mptype_ally_woodland_recon::main;
		game["allies_model"]["CLASS_CUSTOM4"] = mptype\mptype_ally_woodland_recon::main;
		game["allies_model"]["CLASS_CUSTOM5"] = mptype\mptype_ally_woodland_recon::main;
		game["allies_model"]["CLASS_CUSTOM6"] = mptype\mptype_ally_woodland_recon::main;
		game["allies_model"]["CLASS_CUSTOM7"] = mptype\mptype_ally_woodland_recon::main;
		game["allies_model"]["CLASS_CUSTOM8"] = mptype\mptype_ally_woodland_recon::main;
		game["allies_model"]["CLASS_CUSTOM9"] = mptype\mptype_ally_woodland_recon::main;
  }
  
  if ( game["axis_soldiertype"] == "desert" ) {
		// assert( game["axis"] == "opfor" || game["axis"] == "arab" );
		if ( game["axis"] != "opfor" && game["axis"] != "arab" ) {
			iprintln( "WARNING: game['axis'] == "+game["axis"]+", expected 'opfor' or 'arab'.");
			game["axis"] = "opfor";
		}
		game["axis_model"]["ASSAULT"] = mptype\mptype_axis_rifleman::main;
		game["axis_model"]["SPECOPS"] = mptype\mptype_axis_cqb::main;
		game["axis_model"]["SUPPORT"] = mptype\mptype_axis_support::main;
		game["axis_model"]["RECON"] = mptype\mptype_axis_engineer::main;
		game["axis_model"]["SNIPER"] = mptype\mptype_axis_sniper::main;
		// custom class defaults
		game["axis_model"]["CLASS_CUSTOM1"] = mptype\mptype_axis_cqb::main;
		game["axis_model"]["CLASS_CUSTOM2"] = mptype\mptype_axis_cqb::main;
		game["axis_model"]["CLASS_CUSTOM3"] = mptype\mptype_axis_cqb::main;
		game["axis_model"]["CLASS_CUSTOM4"] = mptype\mptype_axis_cqb::main;
		game["axis_model"]["CLASS_CUSTOM5"] = mptype\mptype_axis_cqb::main;
		game["axis_model"]["CLASS_CUSTOM6"] = mptype\mptype_axis_cqb::main;
		game["axis_model"]["CLASS_CUSTOM7"] = mptype\mptype_axis_cqb::main;
		game["axis_model"]["CLASS_CUSTOM8"] = mptype\mptype_axis_cqb::main;
		game["axis_model"]["CLASS_CUSTOM9"] = mptype\mptype_axis_cqb::main;
	}
	else if ( game["axis_soldiertype"] == "urban" ) {
		// assert( game["axis"] == "opfor" );
		if ( game["axis"] != "russian" ) {
			iprintln( "WARNING: game['axis'] == "+game["axis"]+", expected 'russian'.");
			game["axis"] = "russian";
		}
		game["axis_model"]["ASSAULT"] = mptype\mptype_axis_urban_assault::main;
		game["axis_model"]["SPECOPS"] = mptype\mptype_axis_urban_cqb::main;
		game["axis_model"]["SUPPORT"] = mptype\mptype_axis_urban_support::main;
		game["axis_model"]["RECON"] = mptype\mptype_axis_urban_engineer::main;
    game["axis_model"]["SNIPER"] = mptype\mptype_axis_urban_sniper::main;
		// custom class defaults
		game["axis_model"]["CLASS_CUSTOM1"] = mptype\mptype_axis_urban_assault::main;
		game["axis_model"]["CLASS_CUSTOM2"] = mptype\mptype_axis_urban_assault::main;
		game["axis_model"]["CLASS_CUSTOM3"] = mptype\mptype_axis_urban_assault::main;
		game["axis_model"]["CLASS_CUSTOM4"] = mptype\mptype_axis_urban_assault::main;
		game["axis_model"]["CLASS_CUSTOM5"] = mptype\mptype_axis_urban_assault::main;
    game["axis_model"]["CLASS_CUSTOM6"] = mptype\mptype_axis_urban_assault::main;
		game["axis_model"]["CLASS_CUSTOM7"] = mptype\mptype_axis_urban_assault::main;
		game["axis_model"]["CLASS_CUSTOM8"] = mptype\mptype_axis_urban_assault::main;
		game["axis_model"]["CLASS_CUSTOM9"] = mptype\mptype_axis_urban_assault::main;
	}
	else {
		// assert( game["axis"] == "opfor" );
		if ( game["axis"] != "russian" ) {
			iprintln( "WARNING: game['axis'] == "+game["axis"]+", expected 'russian'.");
			game["axis"] = "russian";
		}
		game["axis_model"]["ASSAULT"] = mptype\mptype_axis_woodland_rifleman::main;
		game["axis_model"]["SPECOPS"] = mptype\mptype_axis_woodland_cqb::main;
		game["axis_model"]["SUPPORT"] = mptype\mptype_axis_woodland_support::main;
		game["axis_model"]["RECON"] = mptype\mptype_axis_woodland_engineer::main;
    game["axis_model"]["SNIPER"] = mptype\mptype_axis_woodland_sniper::main;
		// custom class defaults
		game["axis_model"]["CLASS_CUSTOM1"] = mptype\mptype_axis_woodland_cqb::main;
		game["axis_model"]["CLASS_CUSTOM2"] = mptype\mptype_axis_woodland_cqb::main;
		game["axis_model"]["CLASS_CUSTOM3"] = mptype\mptype_axis_woodland_cqb::main;
		game["axis_model"]["CLASS_CUSTOM4"] = mptype\mptype_axis_woodland_cqb::main;
		game["axis_model"]["CLASS_CUSTOM5"] = mptype\mptype_axis_woodland_cqb::main;
    game["axis_model"]["CLASS_CUSTOM6"] = mptype\mptype_axis_woodland_cqb::main;
		game["axis_model"]["CLASS_CUSTOM7"] = mptype\mptype_axis_woodland_cqb::main;
		game["axis_model"]["CLASS_CUSTOM8"] = mptype\mptype_axis_woodland_cqb::main;
		game["axis_model"]["CLASS_CUSTOM9"] = mptype\mptype_axis_woodland_cqb::main;
	}
}


playerModelForWeapon( weapon )
{
	self detachAll();

	weaponClass = tablelookup( "mp/statstable.csv", 4, weapon, 2 );

	switch ( weaponClass )
	{
		case "weapon_assault":
			[[game[self.pers["team"]+"_model"]["ASSAULT"]]]();
			break;
		case "weapon_smg":
			[[game[self.pers["team"]+"_model"]["SPECOPS"]]]();
			break;
		case "weapon_lmg":
			[[game[self.pers["team"]+"_model"]["SUPPORT"]]]();
			break;
		case "weapon_shotgun":
			[[game[self.pers["team"]+"_model"]["RECON"]]]();
			break;
		case "weapon_sniper":
			[[game[self.pers["team"]+"_model"]["SNIPER"]]]();
			break;
		default:
			[[game[self.pers["team"]+"_model"]["ASSAULT"]]]();
			break;
	}
}


playerModelForClass( class )
{
	self detachAll();

	switch ( class )
	{
		case "assault":
			[[game[self.pers["team"]+"_model"]["ASSAULT"]]]();
			break;
		case "specops":
			[[game[self.pers["team"]+"_model"]["SPECOPS"]]]();
			break;
		case "heavygunner":
			[[game[self.pers["team"]+"_model"]["SUPPORT"]]]();
			break;
		case "demolitions":
			[[game[self.pers["team"]+"_model"]["RECON"]]]();
			break;
		case "sniper":
			[[game[self.pers["team"]+"_model"]["SNIPER"]]]();
			break;
		default:
			[[game[self.pers["team"]+"_model"]["ASSAULT"]]]();
			break;
	}
}


CountPlayers()
{
	//chad
	players = level.players;
	allies = 0;
	axis = 0;
	for(i = 0; i < players.size; i++)
	{
		if ( players[i] == self )
			continue;

		if((isdefined(players[i].pers["team"])) && (players[i].pers["team"] == "allies"))
			allies++;
		else if((isdefined(players[i].pers["team"])) && (players[i].pers["team"] == "axis"))
			axis++;
	}
	players["allies"] = allies;
	players["axis"] = axis;
	return players;
}


trackFreePlayedTime()
{
	self endon( "disconnect" );

	self.timePlayed["allies"] = 0;
	self.timePlayed["axis"] = 0;
	self.timePlayed["other"] = 0;
	self.timePlayed["total"] = 0;

	while(1)
	{
		if ( game["state"] == "playing" )
		{
			if ( isDefined( self.pers["team"] ) && self.pers["team"] == "allies" && self.sessionteam != "spectator" )
			{
				self.timePlayed["allies"]++;
				self.timePlayed["total"]++;
			}
			else if ( isDefined( self.pers["team"] ) && self.pers["team"] == "axis" && self.sessionteam != "spectator" )
			{
				self.timePlayed["axis"]++;
				self.timePlayed["total"]++;
			}
			else
			{
				self.timePlayed["other"]++;
			}
		}

		wait ( 1.0 );
	}
}

getJoinTeamPermissions( team )
{
	teamcount = 0;

	players = level.players;
	for(i = 0; i < players.size; i++)
	{
		player = players[i];

		if((isdefined(player.pers["team"])) && (player.pers["team"] == team))
			teamcount++;
	}

	if( teamCount < level.teamLimit )
		return true;
	else
		return false;
}
