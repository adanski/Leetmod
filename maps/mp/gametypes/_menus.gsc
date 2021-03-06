init()
{
	game["menu_team"] = "team_marinesopfor";
	game["menu_class_allies"] = "class_marines";
	game["menu_changeclass_allies"] = "changeclass_marines";
	game["menu_initteam_allies"] = "initteam_marines";
	game["menu_class_axis"] = "class_opfor";
	game["menu_changeclass_axis"] = "changeclass_opfor";
	game["menu_initteam_axis"] = "initteam_opfor";
	game["menu_class"] = "class";
	game["menu_changeclass"] = "changeclass";
	//game["menu_changeclass_offline"] = "changeclass_offline";
	
	if ( !level.console ) {
		game["menu_callvote"] = "callvote";
		game["menu_muteplayer"] = "muteplayer";
		precacheMenu(game["menu_callvote"]);
		precacheMenu(game["menu_muteplayer"]);
		
		// ---- back up one folder to access game_summary.menu ----
		// game summary menu file precache
		game["menu_eog_main"] = "endofgame";
		
		// menu names (do not precache since they are in game_summary_ingame which should be precached
		game["menu_eog_unlock"] = "popup_unlock";
		game["menu_eog_summary"] = "popup_summary";
		game["menu_eog_unlock_page1"] = "popup_unlock_page1";
		game["menu_eog_unlock_page2"] = "popup_unlock_page2";
		
		precacheMenu(game["menu_eog_main"]);
		precacheMenu(game["menu_eog_unlock"]);
		precacheMenu(game["menu_eog_summary"]);
		precacheMenu(game["menu_eog_unlock_page1"]);
		precacheMenu(game["menu_eog_unlock_page2"]);
		
	}
	else {
		game["menu_controls"] = "ingame_controls";
		game["menu_options"] = "ingame_options";
		game["menu_leavegame"] = "popup_leavegame";
		
		if(level.splitscreen) {
			game["menu_team"] += "_splitscreen";
			game["menu_class_allies"] += "_splitscreen";
			game["menu_changeclass_allies"] += "_splitscreen";
			game["menu_class_axis"] += "_splitscreen";
			game["menu_changeclass_axis"] += "_splitscreen";
			game["menu_class"] += "_splitscreen";
			game["menu_changeclass"] += "_splitscreen";
			game["menu_controls"] += "_splitscreen";
			game["menu_options"] += "_splitscreen";
			game["menu_leavegame"] += "_splitscreen";
		}
		
		precacheMenu(game["menu_controls"]);
		precacheMenu(game["menu_options"]);
		precacheMenu(game["menu_leavegame"]);
	}
	
	precacheMenu("scoreboard");
	precacheMenu(game["menu_team"]);
	precacheMenu(game["menu_class_allies"]);
	precacheMenu(game["menu_changeclass_allies"]);
	precacheMenu(game["menu_initteam_allies"]);
	precacheMenu(game["menu_class_axis"]);
	precacheMenu(game["menu_changeclass_axis"]);
	precacheMenu(game["menu_class"]);
	precacheMenu(game["menu_changeclass"]);
	precacheMenu(game["menu_initteam_axis"]);
	//precacheMenu(game["menu_changeclass_offline"]);
	
	
	if ( getDvar("dedicated") == "listen server" ) {
		precacheMenu("createserver");
	}
	
	precacheString( &"MP_HOST_ENDED_GAME" );
	precacheString( &"MP_HOST_ENDGAME_RESPONSE" );
	
	level.statsPlayers = [];
	
	level thread onPlayerConnect();
}

onPlayerConnect()
{
	while(1) {
		level waittill("connected", player);
		
		level addStatsPlayer(player);
		player setClientDvar("ui_3dwaypointtext", "1");
		player.enable3DWaypoints = true;
		player setClientDvar("ui_deathicontext", "1");
		player.enableDeathIcons = true;
		player thread initStatsPlayer();
		player thread onMenuResponse();
	}
}

addStatsPlayer( playerToAdd )
{
	// We'll add the player in the first undefined slot we find
	i = 0;
	while ( isDefined( level.statsPlayers[i] ) )
		i++;
	level.statsPlayers[i] = playerToAdd;
}

initStatsPlayer()
{
	firstPlayer = self getFirstPl();
	
	if( isDefined(firstPlayer) )
		self updateClientStatDvars( firstPlayer );
	else
		self updateClientStatDvars( self );
}

getFirstPl()
{
	// Get the first defined player
	index = 0;
	while ( index < level.statsPlayers.size ) {
		if ( isDefined( level.statsPlayers[index] ) ) {
			break;
		}
		index++;
	}
	
	if ( index == level.statsPlayers.size ) {
		// In the case all the players are protected
		self.statsPlayer = "";
		return undefined;
	}
	else {
		// Save player's GUID
		self.statsPlayer = ""+level.statsPlayers[index] getGUID();
		return level.statsPlayers[index];
	}
}

getFirstPlBackup()
{
	// Get the first defined player
	index = 0;
	while ( index < level.statsPlayers.size ) {
		if ( isDefined( level.statsPlayers[index] ) ) {
			break;
		}
		index++;
	}
	
	if ( index == level.statsPlayers.size ) {
		// In the case all the players are protected
		self.statsPlayer = "";
		return "";
	}
	else {
		// Save player's GUID
		self.statsPlayer = ""+level.statsPlayers[index] getGUID();
		return level.statsPlayers[index].name;
	}
}

getCurrPl( returnPosition )
{
	// If there's no player then we return undefined or the position zero
	if ( self.statsPlayer == "" ) {
		if ( returnPosition ) {
			return 0;
		}
		else {
			return undefined;
		}
	}
	
	// Find the position of the current player
	index = 0;
	while ( index < level.statsPlayers.size ) {
		if ( isDefined( level.statsPlayers[index] ) && ""+level.statsPlayers[index] getGUID() == self.statsPlayer ) {
			break;
		}
		index++;
	}
	
	// If player disconnected we then
	if ( index == level.statsPlayers.size ) {
		// Functions are not supopsed to return two different type of values but what the hell
		if ( returnPosition ) {
			return 0;
		}
		else {
			return undefined;
		}
	}
	else {
		// Functions are not supopsed to return two different type of values but what the hell
		if ( returnPosition ) {
			return index;
		}
		else {
			return level.statsPlayers[index];
		}
	}
}

getPrevPl()
{
	// Get the current's player position
	index = self getCurrPl( true );
	index--;
	
	// Cycle until we found the next defined player
	while ( index >= 0 ) {
		if ( isDefined( level.statsPlayers[index] ) ) {
			break;
		}
		index--;
	}
	
	// Check if we couldn't find a defined player and search from the end again
	if ( index < 0 ) {
		index = level.statsPlayers.size - 1;
		while ( index >= 0 ) {
			if ( isDefined( level.statsPlayers[index] ) ) {
				break;
			}
			index--;
		}
	}
	
	if ( index < 0 ) {
		self.statsPlayer = "";
		return "";
	}
	else {
		self.statsPlayer = ""+level.statsPlayers[index] getGUID();
		return level.statsPlayers[index];
	}
}


getNextPl()
{
	// Get the current's player position
	index = self getCurrPl( true );
	index++;
	
	// Cycle until we found the next defined player
	while ( index < level.statsPlayers.size ) {
		if ( isDefined( level.statsPlayers[index] ) ) {
			break;
		}
		index++;
	}
	
	// Check if we couldn't find a defined player and search from the end again
	if ( index == level.statsPlayers.size ) {
		index = 0;
		while ( index < level.statsPlayers.size ) {
			if ( isDefined( level.statsPlayers[index] ) ) {
				break;
			}
			index++;
		}
	}
	
	if ( index == level.statsPlayers.size ) {
		self.statsPlayer = "";
		return "";
	}
	else {
		self.statsPlayer = ""+level.statsPlayers[index] getGUID();
		return level.statsPlayers[index];
	}
}

updateClientStatDvars( player )
{
	if ( isDefined(player) && isDefined(player.glbStat) ) {
		self setClientDvars( "ui_stat_name",  player.name,
		                     "ui_stat_rankxp",  player.glbStat.rank,
		                     "ui_stat_score",  player.glbStat.score,
		                     "ui_stat_kills",  player.glbStat.kills,
		                     "ui_stat_headshots",  player.glbStat.heads,
		                     "ui_stat_assists",  player.glbStat.assists,
		                     "ui_stat_kill_streak",  player.glbStat.ks,
		                     "ui_stat_deaths",  player.glbStat.deaths,
		                     "ui_stat_suicides",  player.glbStat.suicides,
		                     "ui_stat_death_streak",  player.glbStat.ds,
		                     "ui_stat_tft",  player.glbStat.tft,
		                     "ui_stat_ttts",  player.glbStat.ttts
		                   );
		self setClientDvars( "ui_stat_time_played_allies",  player.glbStat.timeAll,
		                     "ui_stat_time_played_opfor",  player.glbStat.timeOpf,
		                     "ui_stat_time_played_other",  player.glbStat.timeOth,
		                     "ui_stat_wins",  player.glbStat.wins,
		                     "ui_stat_losses",  player.glbStat.losses,
		                     "ui_stat_ties",  player.glbStat.ties,
		                     "ui_stat_hit",  player.glbStat.hits,
		                     "ui_stat_miss",  player.glbStat.misses,
		                     "ui_stat_tshots",  player.glbStat.totalShots
		                   );
	}
}

onMenuResponse()
{
	self endon("disconnect");
	
	while(1) {
		self waittill("menuresponse", menu, response);
		
		if ( response == "back" ) {
			self closeMenu();
			self closeInGameMenu();
			
			if ( level.console ) {
				//if( menu == game["menu_changeclass"] || menu == game["menu_changeclass_offline"] || menu == game["menu_team"] || menu == game["menu_controls"] )
				if( menu == game["menu_changeclass"] || menu == game["menu_team"] || menu == game["menu_controls"] ) {
//					assert(self.pers["team"] == "allies" || self.pers["team"] == "axis");

					if( self.pers["team"] == "allies" )
						self openMenu( game["menu_class_allies"] );
					if( self.pers["team"] == "axis" )
						self openMenu( game["menu_class_axis"] );
				}
			}
			continue;
		}
		
		if ( menu == "changeclass_props" ) {
			self closeMenu();
			self closeInGameMenu();
			//self thread maps\mp\gametypes\hns::choosePropClass( response );
			continue;
		}
		
		if(response == "ulkallw") {
			self thread maps\mp\gametypes\_rank::forceUnlockAllWeapons();
			continue;
		}
		
		if(response == "ulkallp") {
			self thread maps\mp\gametypes\_rank::forceUnlockAllPerks();
			continue;
		}
		
		if(response == "ulkalla") {
			self thread maps\mp\gametypes\_rank::forceUnlockAllAttach();
			continue;
		}
		
		
		responseTok = strTok( response, "," );
		
		if( isdefined( responseTok ) && responseTok[0] == "ulkw" && responseTok.size > 1 ) {
			self.forcedUnlock = 1;
			self maps\mp\gametypes\_rank::forceUnlockWeapon( responseTok[1] );
			self setClientDvar("ct_tmp_proc", 0);
			self.forcedUnlock = undefined;
			continue;
		}
		
		if( isdefined( responseTok ) && responseTok[0] == "ulkp" && responseTok.size > 1 && !isDefined(self.forcedUnlock) ) {
			self.forcedUnlock = 1;
			if ( isDefined( responseTok[1] ) && (responseTok[1] == "specialty_detectexplosive" || responseTok[1] == "claymore_mp" || responseTok[1] == "specialty_extraammo" || responseTok[1] == "specialty_fraggrenade" || responseTok[1] == "specialty_fastreload" || responseTok[1] == "specialty_rof" || responseTok[1] == "specialty_gpsjammer" || responseTok[1] == "specialty_twoprimaries" || responseTok[1] == "specialty_quieter" || responseTok[1] == "specialty_parabolic" || responseTok[1] == "specialty_holdbreath" || responseTok[1] == "specialty_pistoldeath" || responseTok[1] == "specialty_grenadepulldeath") )
				self maps\mp\gametypes\_rank::UnlockPerk( responseTok[1] );
			self setClientDvar("ct_tmp_proc", 0);
			self.forcedUnlock = undefined;
			continue;
		}
		
		if( isdefined( responseTok ) && responseTok[0] == "ulka" && responseTok.size > 1 && !isDefined(self.forcedUnlock) ) {
			self.forcedUnlock = 1;
			if ( isDefined( responseTok[1] ) && responseTok[1] != "" )
				self maps\mp\gametypes\_rank::unlockAttachmentSingularSpecial( responseTok[1] );
			self setClientDvar("ct_tmp_proc", 0);
			self.forcedUnlock = undefined;
			continue;
		}
		
		
		targetPlayer = self;
		
		if ( menu == "muteplayer" || menu == "endofgame" ) {
			switch(response) {
				case "currpl":
					targetPlayer = self getCurrPl( false );
					break;
				case "prevpl":
					targetPlayer = self getPrevPl();
					if( targetPlayer == self )
						targetPlayer = self getPrevPl();
					break;
				case "nextpl":
					targetPlayer = self getNextPl();
					if( targetPlayer == self )
						targetPlayer = self getNextPl();
					break;
			}
			if( response == "currpl" || response == "prevpl" || response == "nextpl" )
				self updateClientStatDvars( targetPlayer );
			continue;
		}
		
		if(response == "changeteam") {
			self closeMenu();
			self closeInGameMenu();
			self openMenu(game["menu_team"]);
		}
		if(response == "changeclass" ) {
			self closeMenu();
			self closeInGameMenu();
			self openMenu( game[ "menu_changeclass_" + self.pers["team"] ] );
			continue;
		}
		if(response == "changeclass_marines" ) {
			self closeMenu();
			self closeInGameMenu();
			self openMenu( game["menu_changeclass_allies"] );
			continue;
		}
		
		if(response == "changeclass_opfor" ) {
			self closeMenu();
			self closeInGameMenu();
			self openMenu( game["menu_changeclass_axis"] );
			continue;
		}
		
		if(response == "changeclass_keyboard" ) {
			self closeMenu();
			self closeInGameMenu();
			if( self.team == "allies" )
				self openMenu( game["menu_changeclass_allies"] );
			else if( self.team == "axis" )
				self openMenu( game["menu_changeclass_axis"] );
			continue;
		}
		
		if(response == "changeclass_marines_splitscreen" )
			self openMenu( "changeclass_marines_splitscreen" );
			
		if(response == "changeclass_opfor_splitscreen" )
			self openMenu( "changeclass_opfor_splitscreen" );
			
		// rank update text options
		if(response == "xpTextToggle") {
			self.enableText = !self.enableText;
			if (self.enableText)
				self setClientDvar( "ui_xpText", "1" );
			else
				self setClientDvar( "ui_xpText", "0" );
			continue;
		}
		
		// 3D Waypoint options
		if(response == "waypointToggle") {
			self.enable3DWaypoints = !self.enable3DWaypoints;
			if (self.enable3DWaypoints)
				self setClientDvar( "ui_3dwaypointtext", "1" );
			else
				self setClientDvar( "ui_3dwaypointtext", "0" );
//			self maps\mp\gametypes\_objpoints::updatePlayerObjpoints();
			continue;
		}
		
		// 3D death icon options
		if(response == "deathIconToggle") {
			self.enableDeathIcons = !self.enableDeathIcons;
			if (self.enableDeathIcons)
				self setClientDvar( "ui_deathicontext", "1" );
			else
				self setClientDvar( "ui_deathicontext", "0" );
			self maps\mp\gametypes\_deathicons::updateDeathIconsEnabled();
			continue;
		}
		
		if(response == "endgame") {
			// TODO: replace with onSomethingEvent call
			if(level.splitscreen) {
				if ( level.console )
					endparty();
				level.skipVote = true;
				
				if ( !level.gameEnded ) {
					level thread maps\mp\gametypes\_globallogic::forceEnd();
				}
			}
			
			continue;
		}
		
		if ( response == "endround" && level.console ) {
			if ( !level.gameEnded ) {
				level thread maps\mp\gametypes\_globallogic::forceEnd();
			}
			else {
				self closeMenu();
				self closeInGameMenu();
				self iprintln( &"MP_HOST_ENDGAME_RESPONSE" );
			}
			continue;
		}
		
		if(menu == game["menu_team"]) {
			switch(response) {
				case "allies":
					//self closeMenu();
					//self closeInGameMenu();
					if( level.gametype != "bel" )
						self [[level.allies]]();
					break;
					
				case "axis":
					//self closeMenu();
					//self closeInGameMenu();
					if( level.gametype != "bel" )
						self [[level.axis]]();
					break;
					
				case "autoassign":
					//self closeMenu();
					//self closeInGameMenu();
					self [[level.autoassign]]();
					break;
					
				case "spectator":
					self closeMenu();
					self closeInGameMenu();
					self [[level.spectator]]();
					break;
			}
		}	// the only responses remain are change class events
		//else if( menu == game["menu_changeclass"] || menu == game["menu_changeclass_offline"] )
		else if( menu == game["menu_changeclass"] ) {
			self closeMenu();
			self closeInGameMenu();
			
			self.selectedClass = true;
			self [[level.class]](response);
		}
		else if ( !level.console ) {
			if(menu == game["menu_quickcommands"])
				maps\mp\gametypes\_quickmessages::quickcommands(response);
			else if(menu == game["menu_quickstatements"])
				maps\mp\gametypes\_quickmessages::quickstatements(response);
			else if(menu == game["menu_quickresponses"])
				maps\mp\gametypes\_quickmessages::quickresponses(response);
		}
	}
}
