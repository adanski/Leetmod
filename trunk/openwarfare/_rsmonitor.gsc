#include openwarfare\_utils;

init()
{
	// Just start the thread that will monitor if a new ruleset needs to be loaded
	precacheString( &"OW_RULESET_DISABLED" );
	precacheString( &"OW_RULESET_VALID" );
	precacheString( &"OW_RULESET_NOT_VALID" );
	
	level thread rulesetMonitor();
}

rulesetMonitor()
{
	level endon( "game_ended" );
	
	// Initialize a variable to keep the current ruleset
	currentRuleset = level.ruleset;
	
	// Loop until we have a valid new ruleset
	while(1) {
		// Monitor a change in ruleset
		currentRulesetText = generateRulesetText(currentRuleset);
		
		while ( level.cod_mode == currentRulesetText ) {
			wait (1.0);
			//level.ruleset = parseRules(level.cod_mode);
			level.cod_mode = generateRulesetText(level.ruleset);
			
			// If the game ends we'll kill the thread as a new one will start with the new map
			if ( game["state"] == "postgame" )
				return;
		}
		
		// Check if we have a rule for this league and gametype first
		if( level.cod_mode == "" )
			iprintln( &"OW_RULESET_DISABLED" );
			
		if ( isDefined( level.matchRules ) && isDefined( level.ruleset ) ) {	// implies (level.cod_mode == "") too
			// if all specified rules exist
			if ( checkRuleExists( level.ruleset["pfl"] )
				&& checkRuleExists( level.ruleset["arm"] )
				&& checkRuleExists( level.ruleset["prk"] )
				&& checkRuleExists( level.ruleset["svr"] )
			) {
				// if rule exist for given gametype
				if ( level.cod_mode == "" ||
						(  ( level.ruleset["pfl"] == "" || isDefined( level.matchRules[ level.ruleset["pfl"] ][ level.gametype ] ) || isDefined( level.matchRules[ level.ruleset["pfl"] ]["all"] ) )
						&& ( level.ruleset["arm"] == "" || isDefined( level.matchRules[ level.ruleset["arm"] ][ level.gametype ] ) || isDefined( level.matchRules[ level.ruleset["arm"] ]["all"] ) )
						&& ( level.ruleset["prk"] == "" || isDefined( level.matchRules[ level.ruleset["prk"] ][ level.gametype ] ) || isDefined( level.matchRules[ level.ruleset["prk"] ]["all"] ) )
						&& ( level.ruleset["svr"] == "" || isDefined( level.matchRules[ level.ruleset["svr"] ][ level.gametype ] ) || isDefined( level.matchRules[ level.ruleset["svr"] ]["all"] ) )
						)
				 ) {
					if( level.cod_mode != "" )
						iprintln( &"OW_RULESET_VALID", level.cod_mode );
					setDvar("cod_mode_curr", level.cod_mode);
					wait 3;
					nextRotation = " " + getDvar( "sv_mapRotationCurrent" );
					setdvar( "sv_mapRotationCurrent", "gametype " + level.gametype + " map " + level.script + nextRotation );
					exitLevel( false );
					return;
				}
			}
		}
		
		// The ruleset is not valid
		iprintln( &"OW_RULESET_NOT_VALID", level.cod_mode );
		//setDvar( "cod_mode", currentRulesetText );
		level.cod_mode = currentRulesetText;
		level.ruleset = currentRuleset;
	}
}

parseRules(ruleset_text)
{
	ruleset = [];
	ruleset["pfl"] = "";
	ruleset["arm"] = "";
	ruleset["prk"] = "";
	ruleset["svr"] = "";
	
	if( ruleset_text == "" )
		return ruleset;
	
	ruleset_text = strtok( ruleset_text, ";" );
	if ( ruleset_text.size <= 0 )
		return ruleset;
	
	for(i = 0; i < ruleset_text.size; i++) {
		rule = strtok( ruleset_text[i], "_" );
		if( rule.size <= 0)
			break;
		
		if( rule[0] == "pfl" && checkRuleExists(ruleset_text[i]) )
			ruleset["pfl"] = ruleset_text[i];
		else if( rule[0] == "arm" && checkRuleExists(ruleset_text[i]) )
			ruleset["arm"] = ruleset_text[i];
		else if( rule[0] == "prk" && checkRuleExists(ruleset_text[i]) )
			ruleset["prk"] = ruleset_text[i];
		else if( rule[0] == "svr" && checkRuleExists(ruleset_text[i]) )
			ruleset["svr"] = ruleset_text[i];
	}
	return ruleset;
}

checkRuleExists(rule)
{
	if( rule == "" || isDefined( level.matchRules[ rule ] ) )
		return true;
	return false;
}

generateRulesetText(rulesetObject) {
	if( !isDefined(rulesetObject["pfl"]) || !isDefined(rulesetObject["arm"]) || !isDefined(rulesetObject["prk"])
	|| !isDefined(rulesetObject["svr"]) )
		return "";

	ruleset_text = rulesetObject["pfl"];
	
	if( ruleset_text != "" && rulesetObject["arm"] != "" )
		ruleset_text = ruleset_text+";";
	ruleset_text = ruleset_text+rulesetObject["arm"];
	
	if( ruleset_text != "" && rulesetObject["prk"] != "" )
		ruleset_text = ruleset_text+";";
	ruleset_text = ruleset_text+rulesetObject["prk"];
	
	if( ruleset_text != "" && rulesetObject["svr"] != "" )
		ruleset_text = ruleset_text+";";
	ruleset_text = ruleset_text+rulesetObject["svr"];
	
	return ruleset_text;
}

getMGRules(index) {
	// we increment index because in sv_mapRotation_rules they start at 1 not at 0
	index = index+1;
	elements = strtok(level.mapRotation_rules, " ");
	if ( elements.size <= 0 )
		return "";
	for( i=0; i < elements.size; i++ ) {
		anElement = strtok( elements[i], ":" );
		if( anElement.size <= 0)
			break;
		firstLastIndexes = strtok( anElement[0], "-" );
		if( firstLastIndexes.size > 1 ) {
			if( index >= int(firstLastIndexes[0]) && index <= int(firstLastIndexes[1]) )
				return anElement[1];
		} else {
			if( index == int(firstLastIndexes[0]) )
				return anElement[1];
		}
	}
	return "";
}