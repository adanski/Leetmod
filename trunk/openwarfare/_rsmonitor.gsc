#include openwarfare\_utils;

init()
{
	// Just start the thread that will monitor if a new ruleset needs to be loaded
	precacheString( &"OW_RULESET_VALID" );
	precacheString( &"OW_RULESET_NOT_VALID" );
	
	// We do this so it can be changed without the need to enter "set"
	setDvar( "cod_mode", getdvard( "cod_mode", "string", "", undefined, undefined ) );
	level thread rulesetMonitor();
}

rulesetMonitor()
{
	level endon( "game_ended" );
	
	// Initialize a variable to keep the current ruleset
	currentRuleset = level.cod_mode;
	
	// Loop until we have a valid new ruleset
	while(1) {
		// Monitor a change in ruleset
		while ( level.cod_mode == currentRuleset ) {
			wait (1.0);
			level.cod_mode = getdvard( "cod_mode", "string", "", undefined, undefined );
			
			// If the game ends we'll kill the thread as a new one will start with the new map
			if ( game["state"] == "postgame" )
				return;
		}
		
		// Check if we have a rule for this league and gametype first
		if ( isDefined( level.matchRules ) && isDefined( level.matchRules[ level.cod_mode ] ) ) {
			if ( isDefined( level.matchRules[ level.cod_mode ][ level.gametype ] ) || isDefined( level.matchRules[ level.cod_mode ]["all"] ) ) {
				iprintln( &"OW_RULESET_VALID", level.cod_mode );
				wait 3;
				nextRotation = " " + getDvar( "sv_mapRotationCurrent" );
				setdvar( "sv_mapRotationCurrent", "gametype " + level.gametype + " map " + level.script + nextRotation );
				//# For now, we don't reset server variables to default values because:
				//# 1. They were changed
				//# 2. There are many new dvars that aren't on the variables to reset array
				//openwarfare\_resetvariables::resetServerVariables();
				exitLevel( false );
				return;
			}
		}
		else if ( level.cod_mode == "" ) {
			iprintln( &"OW_RULESET_DISABLED" );
			wait 3;
			nextRotation = " " + getDvar( "sv_mapRotationCurrent" );
			setdvar( "sv_mapRotationCurrent", "gametype " + level.gametype + " map " + level.script + nextRotation );
			//openwarfare\_resetvariables::resetServerVariables();
			exitLevel( false );
			return;
		}
		
		// The ruleset is not valid
		iprintln( &"OW_RULESET_NOT_VALID", level.cod_mode );
		setDvar( "cod_mode", currentRuleset );
		level.cod_mode = currentRuleset;
	}
}

