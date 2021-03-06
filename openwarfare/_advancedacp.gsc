#include common_scripts\utility;

#include openwarfare\_eventmanager;
#include openwarfare\_utils;

init()
{
	// Get the main module's dvar
	level.scr_aacp_enable = getdvard( "scr_aacp_enable", "int", 0, 0, 2 );
	tempGUIDs = getdvarlistx( "scr_aacp_guids_access_", "string", "" );
	
	isListenServer = (getDvar("dedicated") == "listen server");
	
	if( level.scr_aacp_enable == 0 && isListenServer )
		level.scr_aacp_enable = isListenServer;
		
	if( level.scr_aacp_enable == 0 || ( tempGUIDs.size == 0 && !isListenServer ) ) {
		level.scr_aacp_enable = 0;
		return;
	}
	
	// Load the rest of the module variables
	level.scr_aacp_protected_guids = getdvard( "scr_aacp_protected_guids", "string", level.scr_server_overall_admin_guids );
	
	// GUIDs access levels
	level.scr_aacp_guids_access = [];
	for ( iLine=0; iLine < tempGUIDs.size; iLine++ ) {
		thisLine = toLower( tempGUIDs[iLine] );
		thisLine = strtok( thisLine, ";" );
		for ( iGUID = 0; iGUID < thisLine.size; iGUID++ ) {
			guidAccess = strtok( thisLine[iGUID], "=" );
			if ( isDefined ( guidAccess[1] ) ) {
				level.scr_aacp_guids_access[ ""+guidAccess[0] ] = guidAccess[1];
			}
			else {
				level.scr_aacp_guids_access[ ""+guidAccess[0] ] = "";
			}
		}
	}
	
	// Check if we should get the maps and gametypes from the current map rotation
	if ( level.scr_aacp_enable == 2 ) {
	
		// Distribute the gametype and map names to the corresponding variables
		level.scr_aacp_maps = [];
		level.scr_aacp_gametypes = [];
		tempObjects = [];
		
		// Process the array containing the gametypes and maps
		for ( index=0; index < level.mgCombinations.size; index++ ) {
			// Check if we need to add this gametype
			if ( !isDefined( tempObjects[ level.mgCombinations[index]["gametype"] ] ) ) {
				tempObjects[ level.mgCombinations[index]["gametype"] ] = true;
				level.scr_aacp_gametypes[ level.scr_aacp_gametypes.size ] = level.mgCombinations[index]["gametype"];
			}
			
			// Check if we need to add this map
			if ( !isDefined( tempObjects[ level.mgCombinations[index]["mapname"] ] ) ) {
				tempObjects[ level.mgCombinations[index]["mapname"] ] = true;
				level.scr_aacp_maps[ level.scr_aacp_maps.size ] = level.mgCombinations[index]["mapname"];
			}
		}
		
	}
	else {
		// Load maps
		tempMaps = getdvarlistx( "scr_aacp_maps_", "string", "" );
		// If we don't have any maps we'll set the stock ones
		if ( tempMaps.size == 0 ) {
			tempMaps[0] = level.defaultMapList;
		}
		
		// Process all the maps and add them to the internal array
		level.scr_aacp_maps = [];
		for ( iMapLine = 0; iMapLine < tempMaps.size; iMapLine++ ) {
			theseMaps = strtok( toLower( tempMaps[iMapLine] ), ";" );
			for ( iMap = 0; iMap < theseMaps.size; iMap++ ) {
				level.scr_aacp_maps[ level.scr_aacp_maps.size ] = theseMaps[iMap];
			}
		}
		
		// Gametypes
		level.scr_aacp_gametypes = getdvard( "scr_aacp_gametypes", "string", level.defaultGametypeList );
		level.scr_aacp_gametypes = strtok( level.scr_aacp_gametypes, ";" );
	}
	
	// Load map rotation values and calculate current position
	//tmpValue = calculateMapRotationCurrentIndex();
	level.scr_aacp_maprotationstartup_index = level.maprotation_index;
	if(level.scr_aacp_maprotationstartup_index < 0)
		level.scr_aacp_maprotationstartup_index = 0;
	
	level.scr_aacp_maprotationstartup_index = level.maprotation_index;
	level.scr_aacp_maprotationcurrent_index = level.scr_aacp_maprotationstartup_index;
	
	// Rulesets
	//level.scr_aacp_rulesets = getdvard( "scr_aacp_rulesets", "string", "pfl_promod;pfl_leetmod" );
	//level.scr_aacp_rulesets = strtok( level.scr_aacp_rulesets, ";" );
	// Rules
	level.scr_aacp_rules = [];

	level.scr_aacp_rules["pfl"] = getdvard( "scr_aacp_rulesets", "string", "pfl_leetmod;pfl_promod" );
	level.scr_aacp_rules["pfl"] = strtok( level.scr_aacp_rules["pfl"], ";" );
	level.scr_aacp_rules["pfl"] = insertBeforeFirstArrayElem(level.scr_aacp_rules["pfl"], "");
	
	level.scr_aacp_rules["arm"] = getdvard( "scr_aacp_rules_arm", "string", "arm_boltaction;arm_sniper;arm_shotgun;arm_pistol;arm_promod;arm_leetmod;arm_all" );
	level.scr_aacp_rules["arm"] = strtok( level.scr_aacp_rules["arm"], ";" );
	level.scr_aacp_rules["arm"] = insertBeforeFirstArrayElem(level.scr_aacp_rules["arm"], "");
	
	level.scr_aacp_rules["prk"] = getdvard( "scr_aacp_rules_prk", "string", "prk_none;prk_leetmod;prk_some;prk_all" );
	level.scr_aacp_rules["prk"] = strtok( level.scr_aacp_rules["prk"], ";" );
	level.scr_aacp_rules["prk"] = insertBeforeFirstArrayElem(level.scr_aacp_rules["prk"], "");
	
	level.scr_aacp_rules["svr"] = getdvard( "scr_aacp_rules_svr", "string", "svr_match;svr_public" );
	level.scr_aacp_rules["svr"] = strtok( level.scr_aacp_rules["svr"], ";" );
	level.scr_aacp_rules["svr"] = insertBeforeFirstArrayElem(level.scr_aacp_rules["svr"], "");
	
	// Custom reasons
	tempReasons = getdvarlistx( "scr_aacp_custom_reason_", "string", "" );
	level.scr_aacp_custom_reasons_code = [];
	level.scr_aacp_custom_reasons_text = [];
	
	// Add no custom reason option
	level.scr_aacp_custom_reasons_code[0] = "<No Custom Reason>";
	level.scr_aacp_custom_reasons_text[0] = "";
	level.scr_aacp_custom_reasons_code[1] = "Cheats";
	level.scr_aacp_custom_reasons_text[1] = "Your freedom ends where another's begins. Cheats never!";
	for ( iLine=0; iLine < tempReasons.size; iLine++ ) {
		thisLine = strtok( tempReasons[iLine], ";" );
		
		// Add the new custom reason
		newElement = level.scr_aacp_custom_reasons_code.size;
		level.scr_aacp_custom_reasons_code[newElement] = thisLine[0];
		level.scr_aacp_custom_reasons_text[newElement] = thisLine[1];
	}
	
	// Access codes
	level.scr_aacp_load_map_access_code = toLower( getdvard( "scr_aacp_load_map_access_code", "string", "maps" ) );
	level.scr_aacp_next_map_access_code = toLower( getdvard( "scr_aacp_next_map_access_code", "string", "maps" ) );
	level.scr_aacp_restart_map_access_code = toLower( getdvard( "scr_aacp_restart_map_access_code", "string", "maps" ) );
	level.scr_aacp_fast_restart_map_access_code = toLower( getdvard( "scr_aacp_fast_restart_map_access_code", "string", "maps" ) );
	level.scr_aacp_end_map_access_code = toLower( getdvard( "scr_aacp_end_map_access_code", "string", "maps" ) );
	
	level.scr_aacp_load_ruleset_access_code = toLower( getdvard( "scr_aacp_load_ruleset_access_code", "string", "rulesets" ) );
	
	level.scr_aacp_returnspawn_player_access_code = toLower( getdvard( "scr_aacp_returnspawn_player_access_code", "string", "players" ) );
	level.scr_aacp_pointout_player_access_code = toLower( getdvard( "scr_aacp_pointout_player_access_code", "string", "players" ) );
	level.scr_aacp_shock_player_access_code = toLower( getdvard( "scr_aacp_shock_player_access_code", "string", "players" ) );
	level.scr_aacp_explode_player_access_code = toLower( getdvard( "scr_aacp_explode_player_access_code", "string", "players" ) );
	level.scr_aacp_switch_spectator_player_access_code = toLower( getdvard( "scr_aacp_switch_spectator_player_access_code", "string", "players" ) );
	level.scr_aacp_switch_team_player_access_code = toLower( getdvard( "scr_aacp_switch_team_player_access_code", "string", "players" ) );
	level.scr_aacp_kill_player_access_code = toLower( getdvard( "scr_aacp_kill_player_access_code", "string", "players" ) );
	
	level.scr_aacp_redirect_player_access_code = toLower( getdvard( "scr_aacp_redirect_player_access_code", "string", "admin" ) );
	level.scr_aacp_kick_player_access_code = toLower( getdvard( "scr_aacp_kick_player_access_code", "string", "admin" ) );
	level.scr_aacp_ban_player_access_code = toLower( getdvard( "scr_aacp_ban_player_access_code", "string", "admin" ) );
	
	// Auxiliary variables
	level.scr_aacp_shock_time = getdvarx( "scr_aacp_shock_time", "float", 5, 1, 20 );
	level.scr_aacp_shock_disables_weapons = getdvarx( "scr_aacp_shock_disables_weapons", "int", 0, 0, 1 );
	level.scr_aacp_max_warnings = getdvarx( "scr_aacp_max_warnings", "int", 0, 0, 5 );
	level.scr_aacp_sws_show_welcome_screen = getdvarx( "scr_aacp_sws_show_welcome_screen", "int", 0, 0, 1 );
	
	level.scr_reservedslots_redirectip = getdvarx( "scr_reservedslots_redirectip", "string", "" );
	
	level.aacpIconOffset = (0,0,75);
	level.aacpIconShader = "waypoint_kill";
	level.aacpIconCompass = "compass_waypoint_target";
	precacheShader("waypoint_kill");
	precacheShader("waypoint_cheater_mat1");
	precacheShader(level.aacpIconCompass);
	
	precacheMenu( "advancedacp" );
	precacheShellShock( "frag_grenade_mp" );
	
	level._effect["aacp_explode"] = loadfx( "props/barrelexp" );
	
	level.aacpPlayers = [];
	level thread addNewEvent( "onPlayerConnecting", ::addPlayer );
	level thread addNewEvent( "onPlayerConnected", ::onPlayerConnected );
	
}


addPlayer()
{
	// We'll add the player in the first undefined slot we find
	i = 0;
	while ( isDefined( level.aacpPlayers[i] ) )
		i++;
	level.aacpPlayers[i] = self;
}


onPlayerConnected()
{
	self thread initAACP();
	self thread addNewEvent( "onPlayerSpawned", ::onPlayerSpawned );
}


onPlayerSpawned()
{
	// Save spawn information
	self.spawnOrigin = self getOrigin();
	self.spawnAngles = self getPlayerAngles();
}


initAACP()
{
	self endon("disconnect");
	
	// Get the access level from this player
	playerGUID = ""+self getGUID();
	playerNum = self getEntityNumber();
	
	if ( isDefined( level.scr_aacp_guids_access[ playerGUID ] ) ) {
		self.aacpAccess = level.scr_aacp_guids_access[ playerGUID ];
		self.aacpActiveCommand = false;
	}
	else if ( (getDvar("dedicated") == "listen server") && playerGUID == "" && playerNum == 0 ) {
		self.aacpAccess = "maps,players,admin,rulesets";
		self.aacpActiveCommand = false;
	}
	else
		self.aacpAccess = "";
		
	// If the player has some type of access then set the rest of the variables
	if ( self.aacpAccess != "" ) {
		self setClientDvars(
		    "ui_aacp_ldm", ( issubstr( self.aacpAccess, level.scr_aacp_load_map_access_code ) ),
		    "ui_aacp_edm", ( issubstr( self.aacpAccess, level.scr_aacp_end_map_access_code ) ),
		    "ui_aacp_nxm", ( issubstr( self.aacpAccess, level.scr_aacp_next_map_access_code ) ),
		    "ui_aacp_rtm", ( issubstr( self.aacpAccess, level.scr_aacp_restart_map_access_code ) ),
		    "ui_aacp_ftm", ( issubstr( self.aacpAccess, level.scr_aacp_fast_restart_map_access_code ) ),
		    
		    "ui_aacp_lrs", ( issubstr( self.aacpAccess, level.scr_aacp_load_ruleset_access_code ) )
		);
		
		self setClientDvars(
		    "ui_aacp_rsp", ( issubstr( self.aacpAccess, level.scr_aacp_returnspawn_player_access_code ) ),
		    "ui_aacp_pnt", ( issubstr( self.aacpAccess, level.scr_aacp_pointout_player_access_code ) ),
		    "ui_aacp_sck", ( issubstr( self.aacpAccess, level.scr_aacp_shock_player_access_code ) ),
		    "ui_aacp_exp", ( issubstr( self.aacpAccess, level.scr_aacp_explode_player_access_code ) ),
		    "ui_aacp_sws", ( issubstr( self.aacpAccess, level.scr_aacp_switch_spectator_player_access_code ) ),
		    "ui_aacp_swt", ( issubstr( self.aacpAccess, level.scr_aacp_switch_team_player_access_code ) ),
		    "ui_aacp_kll", ( issubstr( self.aacpAccess, level.scr_aacp_kill_player_access_code ) ),
		    "ui_aacp_red", ( issubstr( self.aacpAccess, level.scr_aacp_redirect_player_access_code ) && level.scr_reservedslots_redirectip != "" ),
		    "ui_aacp_kck", ( issubstr( self.aacpAccess, level.scr_aacp_kick_player_access_code ) ),
		    "ui_aacp_ban", ( issubstr( self.aacpAccess, level.scr_aacp_ban_player_access_code ) ),
		    
		    "ui_aacp_map", self getMapNameSetAacpPosition(getDvar( "mapname" )),
		    "ui_aacp_gametype", self getGametypeSetAacpPosition(getDvar( "g_gametype" )),
		    "ui_aacp_mridx", level.scr_aacp_maprotationstartup_index+1,
		    "ui_aacp_mrcurridx", level.scr_aacp_maprotationstartup_index+1,
		    "ui_aacp_player", self getFirstPlayer(),
		    "ui_aacp_reason", self getFirstReason()
		);
		
		self.aacpRule = [];
		self.aacpRule["pfl"] = -1;
		self.aacpRule["arm"] = -1;
		self.aacpRule["prk"] = -1;
		self.aacpRule["svr"] = -1;
		
		self setClientDvars(
				"ui_aacp_ruleset", self getCurrentRule("pfl"),
				"ui_aacp_rule_arm", self getCurrentRule("arm"),
				"ui_aacp_rule_prk", self getCurrentRule("prk"),
				"ui_aacp_rule_svr", self getCurrentRule("svr")
		);
		
		self.aacpMapRotationCurrent_index = level.scr_aacp_maprotationstartup_index;
		
		self thread onMenuResponse();
	}
}


getMapNameSetAacpPosition(MapFile)
{
	MapFile = toLower( MapFile );
	
	index = 0;
	while ( index < level.scr_aacp_maps.size && MapFile != level.scr_aacp_maps[ index ] ) {
		index++;
	}
	
	// If we can't find the map then we just use the first map in the array
	if ( index == level.scr_aacp_maps.size ) {
		index = 0;
		MapFile = level.scr_aacp_maps[ index ];
	}
	
	self.aacpMap = index;
	return getMapName( MapFile );
}


getGametypeSetAacpPosition(gametype)
{
	gametype = toLower( gametype );
	
	index = 0;
	while ( index < level.scr_aacp_gametypes.size && gametype != level.scr_aacp_gametypes[ index ] ) {
		index++;
	}
	
	// If we can't find the gametype then we just use the first gametype in the array
	if ( index == level.scr_aacp_gametypes.size ) {
		index = 0;
		gametype = level.scr_aacp_gametypes[ index ];
	}
	
	self.aacpType = index;
	return getGameType( gametype );
}

/*
getCurrentRuleset()
{
	// If there's no active ruleset then there's no need to search for it
	currentRuleset = level.cod_mode;
	if ( currentRuleset != "" ) {
		index = 0;
		while ( index < level.scr_aacp_rulesets.size && currentRuleset != level.scr_aacp_rulesets[ index ] ) {
			index++;
		}
	}
	else {
		index = level.scr_aacp_rulesets.size;
	}
	
	// If we can't find the ruleset then we just return the first element in the array if there's one
	if ( index == level.scr_aacp_rulesets.size ) {
		if ( level.scr_aacp_rulesets.size > 0 ) {
			index = 0;
			currentRuleset = level.scr_aacp_rulesets[ index ];
		}
		else {
			index = -1;
			currentRuleset = "";
		}
	}
	
	self.aacpRuleset = index;
	return currentRuleset;
}
*/
getCurrentRule(type)
{
	// If there's no active ruleset then there's no need to search for it
	currentRuleset = level.ruleset[type];
	if ( currentRuleset != "" ) {
		index = 0;
		while ( index < level.scr_aacp_rules[type].size && currentRuleset != level.scr_aacp_rules[type][ index ] ) {
			index++;
		}
	}
	else {
		index = level.scr_aacp_rules[type].size;
	}
	
	// If we can't find the ruleset then we just return the first element in the array if there's one
	if ( index == level.scr_aacp_rules[type].size ) {
		/*if ( level.scr_aacp_rules[type].size > 0 ) {
			index = 0;
			currentRuleset = level.scr_aacp_rules[type][ index ];
		}
		else {*/
			index = 0;
			currentRuleset = "";
		/*}*/
	}
	
	self.aacpRule[type] = index;
	return currentRuleset;
}


getFirstPlayer()
{
	// Get the first defined player
	index = 0;
	while ( index < level.aacpPlayers.size ) {
		if ( isDefined( level.aacpPlayers[index] ) && !issubstr( level.scr_aacp_protected_guids, level.aacpPlayers[index] getGUID() ) ) {
			break;
		}
		index++;
	}
	
	if ( index == level.aacpPlayers.size ) {
		// In the case all the players are protected
		self.aacpPlayer = "";
		return "";
	}
	else {
		// Save player's GUID
		self.aacpPlayer = ""+level.aacpPlayers[index] getGUID();
		return level.aacpPlayers[index].name;
	}
}


getFirstReason()
{
	index = 0;
	currentReason = level.scr_aacp_custom_reasons_code[ index ];
	
	self.aacpReason = index;
	return currentReason;
}


getPreviousMap()
{
	// Check if we are going outside the array
	if ( self.aacpMap == 0 ) {
		self.aacpMap = level.scr_aacp_maps.size - 1;
	}
	else {
		self.aacpMap--;
	}
	return getMapName( level.scr_aacp_maps[ self.aacpMap ] );
}


getNextMap()
{
	// Check if we are going outside the array
	if ( self.aacpMap == level.scr_aacp_maps.size - 1 ) {
		self.aacpMap = 0;
	}
	else {
		self.aacpMap++;
	}
	return getMapName( level.scr_aacp_maps[ self.aacpMap ] );
}


getPreviousGametype()
{
	// Check if we are going outside the array
	if ( self.aacpType == 0 ) {
		self.aacpType = level.scr_aacp_gametypes.size - 1;
	}
	else {
		self.aacpType--;
	}
	return getGameType( level.scr_aacp_gametypes[ self.aacpType ] );
}


getNextGametype()
{
	// Check if we are going outside the array
	if ( self.aacpType == level.scr_aacp_gametypes.size - 1 ) {
		self.aacpType = 0;
	}
	else {
		self.aacpType++;
	}
	return getGameType( level.scr_aacp_gametypes[ self.aacpType ] );
}

getPreviousRotationMG()
{
	if( self.aacpMapRotationCurrent_index <= 0 ) {
		self.aacpMapRotationCurrent_index = level.mgCombinations.size-1;
	}
	else {
		self.aacpMapRotationCurrent_index--;
	}
	
	MapGametype["mapname"] = self getMapNameSetAacpPosition(level.mgCombinations[self.aacpMapRotationCurrent_index]["mapname"]);
	MapGametype["gametype"] = self getGametypeSetAacpPosition(level.mgCombinations[self.aacpMapRotationCurrent_index]["gametype"]);
	
	return MapGametype;
}

getNextRotationMG()
{
	if( self.aacpMapRotationCurrent_index >= level.mgCombinations.size-1 ) {
		self.aacpMapRotationCurrent_index = 0;
	}
	else {
		self.aacpMapRotationCurrent_index++;
	}
	
	MapGametype["mapname"] = getMapNameSetAacpPosition(level.mgCombinations[self.aacpMapRotationCurrent_index]["mapname"]);
	MapGametype["gametype"] = getGametypeSetAacpPosition(level.mgCombinations[self.aacpMapRotationCurrent_index]["gametype"]);
	
	return MapGametype;
}

/*
getPreviousRuleset()
{
	// Check if we have any rulesets
	if ( level.scr_aacp_rulesets.size > 0 ) {
		// Check if we are going outside the array
		if ( self.aacpRuleset == 0 ) {
			self.aacpRuleset = level.scr_aacp_rulesets.size - 1;
		}
		else {
			self.aacpRuleset--;
		}
		return level.scr_aacp_rulesets[ self.aacpRuleset ];
	}
	else {
		return "";
	}
}


getNextRuleset()
{
	// Check if we have any rulesets
	if ( level.scr_aacp_rulesets.size > 0 ) {
		// Check if we are going outside the array
		if ( self.aacpRuleset == level.scr_aacp_rulesets.size - 1 ) {
			self.aacpRuleset = 0;
		}
		else {
			self.aacpRuleset++;
		}
		return level.scr_aacp_rulesets[ self.aacpRuleset ];
	}
	else {
		return "";
	}
}
*/
getPreviousRule(type)
{
	// Check if we have any rulesets
	if ( level.scr_aacp_rules[type].size > 0 ) {
		// Check if we are going outside the array
		if ( self.aacpRule[type] == 0 ) {
			self.aacpRule[type] = level.scr_aacp_rules[type].size - 1;
		}
		else {
			self.aacpRule[type]--;
		}
		return level.scr_aacp_rules[type][ self.aacpRule[type] ];
	}
	else {
		return "";
	}
}


getNextRule(type)
{
	// Check if we have any rulesets
	if ( level.scr_aacp_rules[type].size > 0 ) {
		// Check if we are going outside the array
		if ( self.aacpRule[type] == level.scr_aacp_rules[type].size - 1 ) {
			self.aacpRule[type] = 0;
		}
		else {
			self.aacpRule[type]++;
		}
		return level.scr_aacp_rules[type][ self.aacpRule[type] ];
	}
	else {
		return "";
	}
}


getPreviousPlayer()
{
	// Get the current's player position
	index = self getCurrentPlayer( true );
	index--;
	
	// Cycle until we found the next defined player
	while ( index >= 0 ) {
		if ( isDefined( level.aacpPlayers[index] ) && !issubstr( level.scr_aacp_protected_guids, level.aacpPlayers[index] getGUID() ) ) {
			break;
		}
		index--;
	}
	
	// Check if we couldn't find a defined player and search from the end again
	if ( index < 0 ) {
		index = level.aacpPlayers.size - 1;
		while ( index >= 0 ) {
			if ( isDefined( level.aacpPlayers[index] ) && !issubstr( level.scr_aacp_protected_guids, level.aacpPlayers[index] getGUID() ) ) {
				break;
			}
			index--;
		}
	}
	
	if ( index < 0 ) {
		self.aacpPlayer = "";
		return "";
	}
	else {
		self.aacpPlayer = ""+level.aacpPlayers[index] getGUID();
		return level.aacpPlayers[index].name;
	}
}


getNextPlayer()
{
	// Get the current's player position
	index = self getCurrentPlayer( true );
	index++;
	
	// Cycle until we found the next defined player
	while ( index < level.aacpPlayers.size ) {
		if ( isDefined( level.aacpPlayers[index] ) && !issubstr( level.scr_aacp_protected_guids, level.aacpPlayers[index] getGUID() ) ) {
			break;
		}
		index++;
	}
	
	// Check if we couldn't find a defined player and search from the end again
	if ( index == level.aacpPlayers.size ) {
		index = 0;
		while ( index < level.aacpPlayers.size ) {
			if ( isDefined( level.aacpPlayers[index] ) && !issubstr( level.scr_aacp_protected_guids, level.aacpPlayers[index] getGUID() ) ) {
				break;
			}
			index++;
		}
	}
	
	if ( index == level.aacpPlayers.size ) {
		self.aacpPlayer = "";
		return "";
	}
	else {
		self.aacpPlayer = ""+level.aacpPlayers[index] getGUID();
		return level.aacpPlayers[index].name;
	}
}


getPreviousReason()
{
	// Check if we are going outside the array
	if ( self.aacpReason == 0 ) {
		self.aacpReasons = level.scr_aacp_custom_reasons_code.size - 1;
	}
	else {
		self.aacpReason--;
	}
	return level.scr_aacp_custom_reasons_code[self.aacpReason];
}


getNextReason()
{
	// Check if we are going outside the array
	if ( self.aacpReason == level.scr_aacp_custom_reasons_code.size - 1 ) {
		self.aacpReason = 0;
	}
	else {
		self.aacpReason++;
	}
	return level.scr_aacp_custom_reasons_code[self.aacpReason];
}


getCurrentPlayer( returnPosition )
{
	// If there's no player then we return undefined or the position zero
	if ( self.aacpPlayer == "" ) {
		if ( returnPosition ) {
			return 0;
		}
		else {
			return undefined;
		}
	}
	
	// Find the position of the current player
	index = 0;
	while ( index < level.aacpPlayers.size ) {
		if ( isDefined( level.aacpPlayers[index] ) && ""+level.aacpPlayers[index] getGUID() == self.aacpPlayer ) {
			break;
		}
		index++;
	}
	
	// If player disconnected we then
	if ( index == level.aacpPlayers.size ) {
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
			return level.aacpPlayers[index];
		}
	}
}


onMenuResponse()
{
	self endon("disconnect");
	
	while(1) {
		self waittill( "menuresponse", menuName, menuOption );
		
		// Make sure we handle only responses coming from the Advanced ACP menu
		if ( menuName == "advancedacp" && !self.aacpActiveCommand ) {
			self.aacpActiveCommand = true;
			
			switch ( menuOption ) {
				case "previousmap":
					self setClientDvar( "ui_aacp_map", self getPreviousMap() );
					break;
					
				case "nextmap":
					self setClientDvar( "ui_aacp_map", self getNextMap() );
					break;
					
				case "previoustype":
					self setClientDvar( "ui_aacp_gametype", self getPreviousGametype() );
					break;
					
				case "nexttype":
					self setClientDvar( "ui_aacp_gametype", self getNextGametype() );
					break;
					
				case "protationmg":
					MapGametype = self getPreviousRotationMG();
					self setClientDvars( "ui_aacp_mrcurridx", self.aacpMapRotationCurrent_index+1,
					                     "ui_aacp_map", MapGametype["mapname"],
					                     "ui_aacp_gametype", MapGametype["gametype"]);
					break;
					
				case "nrotationmg":
					MapGametype = self getNextRotationMG();
					self setClientDvars( "ui_aacp_mrcurridx", self.aacpMapRotationCurrent_index+1,
					                     "ui_aacp_map", MapGametype["mapname"],
					                     "ui_aacp_gametype", MapGametype["gametype"]);
					break;
					
				case "setmrhere":
					if( self generateRotationFromIdx() )
						self setClientDvar("ui_aacp_mridx", level.scr_aacp_maprotationcurrent_index+1);
					break;
					
				case "loadmap":
					// Make sure the map being loaded is not the current one
					if ( level.scr_aacp_gametypes[ self.aacpType ] != level.gametype || level.scr_aacp_maps[ self.aacpMap ] != level.script ) {
						self adminActionLog( "LM" );
						nextRotation = " " + getDvar( "sv_mapRotationCurrent" );
						setDvar( "sv_mapRotationCurrent", "gametype " + level.scr_aacp_gametypes[ self.aacpType ] + " map " + level.scr_aacp_maps[ self.aacpMap ] + nextRotation );
						exitLevel( false );
					}
					break;
					
				case "setnext":
					// Make sure the map being added is not the same as the next map in the rotation
					if ( level.scr_aacp_gametypes[ self.aacpType ] != level.nextMapInfo["gametype"] || level.scr_aacp_maps[ self.aacpMap ] != level.nextMapInfo["mapname"] ) {
						self adminActionLog( "SN" );
						nextRotation = getDvar( "sv_mapRotationCurrent" );
						newMap = "gametype " + level.scr_aacp_gametypes[ self.aacpType ] + " map " + level.scr_aacp_maps[ self.aacpMap ];
						// Make sure the map rotation is not too long
						if ( nextRotation.size + newMap.size <= 1020 ) {
							setDvar( "sv_mapRotationCurrent",  newMap + " " + nextRotation );
							game["amvs_skip_voting"] = true;
							openwarfare\_maprotationcs::getNextMapInRotation();
						}
					}
					else {
						// Don't add the new map to the rotation but prevent the map votation anyway
						game["amvs_skip_voting"] = true;
					}
					break;
					
				case "endmap":
					self adminActionLog( "EM" );
					level.forcedEnd = true;
					if ( level.teamBased && level.gametype != "bel" ) {
						thread maps\mp\gametypes\_globallogic::endGame( "tie", game["strings"]["round_draw"] );
					}
					else {
						thread maps\mp\gametypes\_globallogic::endGame( undefined, game["strings"]["round_draw"] );
					}
					break;
					
				case "rotatemap":
					self adminActionLog( "NM" );
					exitLevel( false );
					break;
					
				case "restartmap":
					self adminActionLog( "RM" );
					nextRotation = " " + getDvar( "sv_mapRotationCurrent" );
					setDvar( "sv_mapRotationCurrent", "gametype " + level.gametype + " map " + level.script + nextRotation );
					exitLevel( false );
					break;
					
				case "fastrestartmap":
					self adminActionLog( "FM" );
					map_restart( false );
					break;
					
				case "previousruleset_pfl":
					self setClientDvar( "ui_aacp_ruleset", self getPreviousRule("pfl") );
					break;
				case "nextruleset_pfl":
					self setClientDvar( "ui_aacp_ruleset", self getNextRule("pfl") );
					break;
					
				case "previousrule_arm":
					self setClientDvar( "ui_aacp_rule_arm", self getPreviousRule("arm") );
					break;
				case "nextrule_arm":
					self setClientDvar( "ui_aacp_rule_arm", self getNextRule("arm") );
					break;
					
				case "previousrule_prk":
					self setClientDvar( "ui_aacp_rule_prk", self getPreviousRule("prk") );
					break;
				case "nextrule_prk":
					self setClientDvar( "ui_aacp_rule_prk", self getNextRule("prk") );
					break;
					
				case "previousrule_svr":
					self setClientDvar( "ui_aacp_rule_svr", self getPreviousRule("svr") );
					break;
				case "nextrule_svr":
					self setClientDvar( "ui_aacp_rule_svr", self getNextRule("svr") );
					break;
					
				case "loadruleset":
					// Make sure there's a selected ruleset
					if ( self.aacpRule["pfl"] != -1 ) {
						self adminActionLog( "RS" );
						
						// Set the new ruleset
						level.ruleset["pfl"] = level.scr_aacp_rules["pfl"][ self.aacpRule["pfl"] ];
						level.cod_mode = openwarfare\_rsmonitor::generateRulesetText(level.ruleset);
						setDvar( "scr_ruleset_forced", 1);
						//setDvar( "cod_mode", openwarfare\_rsmonitor::generateRulesetText( level.ruleset ) );
					}
					break;
				case "loadrules":
					// Make sure there's a selected ruleset
					if ( self.aacpRule["arm"] != -1 ) {
						level.ruleset["arm"] = level.scr_aacp_rules["arm"][ self.aacpRule["arm"] ];
					}
					if ( self.aacpRule["prk"] != -1 ) {
						level.ruleset["prk"] = level.scr_aacp_rules["prk"][ self.aacpRule["prk"] ];
					}
					if ( self.aacpRule["svr"] != -1 ) {
						level.ruleset["svr"] = level.scr_aacp_rules["svr"][ self.aacpRule["svr"] ];
					}
					level.cod_mode = openwarfare\_rsmonitor::generateRulesetText(level.ruleset);
					//setDvar( "cod_mode", openwarfare\_rsmonitor::generateRulesetText( level.ruleset ) );
					setDvar( "scr_ruleset_forced", 1);
					self adminActionLog( "RS" );
					break;
					
				case "resetgameplay":
					openwarfare\_resetvariables::resetGameplayVariables();
					break;
				
				case "resetgametype":
					openwarfare\_resetvariables::resetGametypeVariables();
					break;
					
				case "previousplayer":
					self setClientDvar( "ui_aacp_player", self getPreviousPlayer() );
					break;
					
				case "nextplayer":
					self setClientDvar( "ui_aacp_player", self getNextPlayer() );
					break;
					
				case "previousreason":
					self setClientDvar( "ui_aacp_reason", self getPreviousReason() );
					break;
					
				case "nextreason":
					self setClientDvar( "ui_aacp_reason", self getNextReason() );
					break;
					
				case "returnspawn":
					// Check if this player is still connected and alive
					player = self getCurrentPlayer( false );
					if ( isDefined( player ) ) {
						if ( isDefined( player.pers ) && isDefined( player.pers["team"] ) && player.pers["team"] != "spectator" && isAlive( player ) ) {
							// Return player to his/her last known spawn
							self adminActionLog( "RS", player );
							player iprintlnbold( &"OW_AACP_PLAYER_RETURNED" );
							player setOrigin( player.spawnOrigin );
							player setPlayerAngles( player.spawnAngles );
						}
					}
					else {
						self setClientDvar( "ui_aacp_player", self getNextPlayer() );
					}
					break;
					
				case "pointoutplayer":
					// Check if this player is still connected and alive
					player = self getCurrentPlayer( false );
					if ( isDefined( player ) ) {
						if ( isDefined( player.pers ) && isDefined( player.pers["team"] ) && player.pers["team"] != "spectator" && isAlive( player ) ) {
							self adminActionLog( "PO", player );
							self thread pointOutPlayer( player );
						}
					}
					else {
						self setClientDvar( "ui_aacp_player", self getNextPlayer() );
					}
					break;
					
				case "shockplayer":
					// Check if this player is still connected and alive
					player = self getCurrentPlayer( false );
					if ( isDefined( player ) ) {
						if ( isDefined( player.pers ) && isDefined( player.pers["team"] ) && player.pers["team"] != "spectator" && isAlive( player ) ) {
							self adminActionLog( "SP", player );
							
							playerKicked = player punishOrWarning( level.scr_aacp_custom_reasons_text[ self.aacpReason ] );
							
							if ( !playerKicked ) {
								// Check if we need to disable the weapons
								if ( level.scr_aacp_shock_disables_weapons == 1 )
									player thread maps\mp\gametypes\_gameobjects::_disableWeapon();
									
								player shellshock( "frag_grenade_mp", level.scr_aacp_shock_time );
								
								// If we disabled the weapons then re-enable them
								if ( level.scr_aacp_shock_disables_weapons == 1 && isDefined( player ) ) {
									wait ( level.scr_aacp_shock_time );
									player thread maps\mp\gametypes\_gameobjects::_enableWeapon();
								}
							}
							else {
								self setClientDvar( "ui_aacp_player", self getNextPlayer() );
							}
						}
					}
					else {
						self setClientDvar( "ui_aacp_player", self getNextPlayer() );
					}
					break;
					
				case "switchplayerspectator":
					// Check if this player is still connected
					player = self getCurrentPlayer( false );
					if ( isDefined( player ) ) {
						if ( isDefined( player.pers ) && isDefined( player.pers["team"] ) && player.pers["team"] != "spectator" ) {
							self adminActionLog( "SS", player );
							
							if ( isAlive( player ) ) {
								// Set a flag on the player to they aren't robbed points for dying - the callback will remove the flag
								player.switching_teams = true;
								player.joining_team = "spectator";
								player.leaving_team = player.pers["team"];
								
								// Suicide the player so they can't hit escape
								player suicidePlayer();
							}
							player.pers["team"] = "spectator";
							player.team = "spectator";
							player.pers["class"] = undefined;
							player.class = undefined;
							player.pers["weapon"] = undefined;
							player.pers["savedmodel"] = undefined;
							
							player maps\mp\gametypes\_globallogic::updateObjectiveText();
							
							player.sessionteam = "spectator";
							player [[level.spawnSpectator]]();
							
							player setclientdvar("g_scriptMainMenu", game["menu_team"]);
							
							player notify("joined_spectators");
							
							// Check if we should show the welcome screen to this player
							if ( level.scr_aacp_sws_show_welcome_screen == 1 && level.scr_welcome_enable != 0 ) {
								player openMenu( game["menu_serverinfo"] );
							}
						}
					}
					else {
						self setClientDvar( "ui_aacp_player", self getNextPlayer() );
					}
					break;
					
				case "switchplayerteam":
					// Check if this player is still connected
					player = self getCurrentPlayer( false );
					if ( isDefined( player ) ) {
						if ( isDefined( player.pers ) && isDefined( player.pers["team"] ) && player.pers["team"] != "spectator" ) {
							self adminActionLog( "ST", player );
							player switchPlayerTeam( level.otherTeam[ player.pers["team"] ], false );
							player iprintlnbold( &"OW_B3_TEAMSWITCH" );
						}
					}
					else {
						self setClientDvar( "ui_aacp_player", self getNextPlayer() );
					}
					break;
					
				case "explodeplayer":
					// Check if this player is still connected and alive
					player = self getCurrentPlayer( false );
					if ( isDefined( player ) ) {
						if ( isDefined( player.pers ) && isDefined( player.pers["team"] ) && player.pers["team"] != "spectator" && isAlive( player ) ) {
							self adminActionLog( "EP", player );
							
							playerKicked = player punishOrWarning( level.scr_aacp_custom_reasons_text[ self.aacpReason ] );
							
							if ( !playerKicked ) {
								// Explode the player
								playfx( level._effect["aacp_explode"], player.origin );
								player playLocalSound( "exp_suitcase_bomb_main" );
								player suicidePlayer();
							}
							else {
								self setClientDvar( "ui_aacp_player", self getNextPlayer() );
							}
						}
					}
					else {
						self setClientDvar( "ui_aacp_player", self getNextPlayer() );
					}
					break;
					
				case "killplayer":
					// Check if this player is still connected and alive
					player = self getCurrentPlayer( false );
					if ( isDefined( player ) ) {
						if ( isDefined( player.pers ) && isDefined( player.pers["team"] ) && player.pers["team"] != "spectator" && isAlive( player ) ) {
							self adminActionLog( "KP", player );
							
							// Check if we should display a custom message
							if ( level.scr_aacp_custom_reasons_text[ self.aacpReason ] != "" ) {
								player iprintlnbold( level.scr_aacp_custom_reasons_text[ self.aacpReason ] );
							}
							else {
								player iprintlnbold( &"OW_B3_PUNISHED" );
							}
							player suicidePlayer();
						}
					}
					else {
						self setClientDvar( "ui_aacp_player", self getNextPlayer() );
					}
					break;
					
				case "redirectplayer":
					// Check if this player is still connected
					player = self getCurrentPlayer( false );
					if ( isDefined( player ) ) {
						self adminActionLog( "RC", player );
						player thread openwarfare\_reservedslots::disconnectPlayer( false );
					}
					self setClientDvar( "ui_aacp_player", self getNextPlayer() );
					break;
					
				case "kickplayer":
					// Check if this player is still connected
					player = self getCurrentPlayer( false );
					if ( isDefined( player ) ) {
						self adminActionLog( "KC", player );
						
						// Check if we should display a custom message or just kick the player directly
						if ( level.scr_aacp_custom_reasons_text[ self.aacpReason ] != "" ) {
							player iprintlnbold( level.scr_aacp_custom_reasons_text[ self.aacpReason ] );
							wait (2.0);
						}
						kick( player getEntityNumber() );
					}
					self setClientDvar( "ui_aacp_player", self getNextPlayer() );
					break;
					
				case "banplayer":
					// Check if this player is still connected
					player = self getCurrentPlayer( false );
					if ( isDefined( player ) ) {
						self adminActionLog( "BN", player );
						
						// Check if we should display a custom message or just kick the player directly
						if ( level.scr_aacp_custom_reasons_text[ self.aacpReason ] != "" ) {
							player iprintlnbold( level.scr_aacp_custom_reasons_text[ self.aacpReason ] );
							wait (2.0);
						}
						ban( player getEntityNumber() );
					}
					self setClientDvar( "ui_aacp_player", self getNextPlayer() );
					break;
			}
			
			self.aacpActiveCommand = false;
		}
	}
}


punishOrWarning( customMessage )
{
	// Check if this should be a warning
	if ( level.scr_aacp_max_warnings != 0 ) {
		// Check if this is the first warning
		if ( !isDefined( self.aacpWarnings ) )
			self.aacpWarnings = 0;
			
		// Increase the warnings for this player
		self.aacpWarnings++;
		
		// Check if there are any left or if it's time for a kick
		if ( self.aacpWarnings == level.scr_aacp_max_warnings ) {
			kick( self getEntityNumber() );
			return true;
			
		}
		else {
			if ( customMessage != "" ) {
				self iprintlnbold( customMessage );
			}
			self iprintlnbold( &"OW_AACP_WARNING", self.aacpWarnings, level.scr_aacp_max_warnings );
		}
	}
	else {
		if ( customMessage != "" ) {
			self iprintlnbold( customMessage );
		}
		else {
			self iprintlnbold( &"OW_B3_PUNISHED" );
		}
	}
	
	return false;
}


pointOutPlayer( player )
{
	player endon("death");
	player endon("disconnect");
	
	// Make sure this player is not being point out already
	if ( isDefined( player.pointOut ) && player.pointOut ) {
		return;
	}
	else {
		self adminActionLog( "PP", player );
		player.pointOut = true;
	}
	
	// Get the next objective ID to use
	objCompass = maps\mp\gametypes\_gameobjects::getNextObjID();
	if ( objCompass != -1 ) {
		objective_add( objCompass, "active", player.origin + level.aacpIconOffset );
		objective_icon( objCompass, level.aacpIconCompass );
		objective_onentity( objCompass, player );
		if ( level.teamBased ) {
			objective_team( objCompass, level.otherTeam[ player.pers["team"] ] );
		}
	}
	
	// Check if only one team should see this
	if ( level.teamBased ) {
		objWorld = newTeamHudElem( level.otherTeam[ player.pers["team"] ] );
	}
	else {
		objWorld = newHudElem();
	}
	// if Reason == Cheats
	if( self.aacpReason == 1 ) {
		level.aacpIconShader = "waypoint_cheater_mat1";
	}
	else
		level.aacpIconShader = "waypoint_kill";
		
	// Set stuff for world icon
	origin = player.origin + level.aacpIconOffset;
	objWorld.name = "pointout_" + player getEntityNumber();
	objWorld.x = origin[0];
	objWorld.y = origin[1];
	objWorld.z = origin[2];
	objWorld.baseAlpha = 1.0;
	objWorld.isFlashing = false;
	objWorld.isShown = true;
	objWorld setShader( level.aacpIconShader, level.objPointSize, level.objPointSize );
	objWorld setWayPoint( true, level.aacpIconShader );
	objWorld setTargetEnt( player );
	objWorld thread maps\mp\gametypes\_objpoints::startFlashing();
	
	// Start the thread to delete the objective once the player dies or disconnects
	player thread deleteObjectiveOnDD( objCompass, objWorld );
	
	// Let all the players know about it
	player thread announceTarget( level.scr_aacp_custom_reasons_text[ self.aacpReason ] );
}


deleteObjectiveOnDD( objID, objWorld )
{
	self waittill_any( "killed_player", "disconnect" );
	
	// Make sure this player can be pointed out again
	if ( isDefined( self ) )
		self.pointOut = false;
		
	// Stop flashing
	objWorld notify("stop_flashing_thread");
	objWorld thread maps\mp\gametypes\_objpoints::stopFlashing();
	
	// Wait some time to make sure the main loop ends
	wait (0.25);
	
	// Delete the objective
	if ( objID != -1 ) {
		objective_delete( objID );
		maps\mp\gametypes\_gameobjects::resetObjID( objID );
	}
	objWorld destroy();
}


announceTarget( customMessage )
{
	for ( index = 0; index < level.players.size; index++ ) {
		player = level.players[index];
		
		if ( !isDefined( player.pers["team"] ) || player.pers["team"] == "spectator" )
			continue;
			
		// Check if this is the player that needs to be killed
		if ( player == self ) {
			if ( customMessage != "" ) {
				self iprintlnbold( customMessage );
			}
			self iprintlnbold( &"OW_AACP_YOU_TARGETED" );
			self playLocalSound( "mp_challenge_complete" );
		}
		else {
			// Don't show anything to teammates
			if ( !level.teamBased || player.pers["team"] != self.pers["team"] ) {
				player iprintlnbold( &"OW_AACP_PLAYER_TARGETED", self.name );
				player playLocalSound( "mp_challenge_complete" );
			}
		}
	}
}


adminActionLog( adminAction, playerAffected )
{
	// Get the info from the player executing this action
	lpselfnum = self getEntityNumber();
	lpselfname = self.name;
	lpselfteam = self.pers["team"];
	lpselfguid = self getGuid();
	
	// Build the line to log
	logLine = "AA;" + adminAction + ";" + lpselfguid + ";" + lpselfnum + ";" + lpselfteam + ";" + lpselfname;
	
	// Check if we should print the information about the player affected by the action
	if ( isDefined( playerAffected ) ) {
		// Get the information from the player and add it to the log
		lpplayernum = playerAffected getEntityNumber();
		if ( !isDefined( lpplayernum ) ) lpplayernum = "";
		lpplayername = playerAffected.name;
		if ( !isDefined( lpplayername ) ) lpplayername = "";
		lpplayerteam = playerAffected.pers["team"];
		if ( !isDefined( lpplayerteam ) ) lpplayerteam = "";
		lpplayerguid = playerAffected getGuid();
		if ( !isDefined( lpplayerguid ) ) lpplayerguid = "";
		
		logLine += ";" + lpplayerguid + ";" + lpplayernum + ";" + lpplayerteam + ";" + lpplayername;
	}
	else {
		// For load map we add the loaded map/gametype information
		if ( adminAction == "LM" || adminAction == "SN" ) {
			logLine += ";" + level.scr_aacp_gametypes[ self.aacpType ] + ";" + level.scr_aacp_maps[ self.aacpMap ];
			
			// For rulesets we add the ruleset loaded
		}
		else if ( adminAction == "RS" ) { //#EDIT!!
			logLine += ";" + level.cod_mode;
			
			// For anything else we add the current map/gametype information
		}
		else {
			logLine += ";" + level.gametype + ";" + level.script;
		}
	}
	
	// Send the line to the server log
	logPrint( logLine + "\n" );
}

// guaranteed to work work well only in single line rotations (no sv_mapRotationCurrent_1, _2..., that logic isn't implemented yet)
generateRotationFromIdx()
{
	// Index of the last map in this rotation
	idxOfLastMapInCurrRot = level.scr_aacp_maprotationstartup_index + level.mgCombinationsCurr.size;
	
	currIdx = self.aacpMapRotationCurrent_index;
	if( currIdx > idxOfLastMapInCurrRot )
		return false;
	
	newCurrRotation = "";
	for ( mgc=currIdx; mgc <= idxOfLastMapInCurrRot; mgc++ ) {
		// Make sure we don't overflow the string
		if ( newCurrRotation.size > 900 )
			break;
		
		// Add a space only if this is not the first thing we add to this line
		if ( newCurrRotation != "" )
			newCurrRotation += " ";
		
		// Check if we're out of bounds (if there was an error in indexes calculations)
		if( !isDefined(level.mgCombinations[mgc]) )
			break;
		// Add the gametype change
		newCurrRotation += "gametype " + level.mgCombinations[mgc]["gametype"];
		newCurrRotation += " map " + level.mgCombinations[mgc]["mapname"];
	}
	
	setDvar( "sv_mapRotationCurrent", newCurrRotation );
	level.scr_aacp_maprotationcurrent_index = self.aacpMapRotationCurrent_index;
	
	return true;
}