#include maps\mp\_utility;
#include maps\mp\gametypes\_hud_util;
#include openwarfare\_utils;

/*
	Deathmatch
	Objective: 	Score points by eliminating other players
	Map ends:	When one player reaches the score limit, or time limit is reached
	Respawning:	No wait / Away from other players

	Level requirements
	------------------
		Spawnpoints:
			classname		mp_dm_spawn
			All players spawn from these. The spawnpoint chosen is dependent on the current locations of enemies at the time of spawn.
			Players generally spawn away from enemies.

		Spectator Spawnpoints:
			classname		mp_global_intermission
			Spectators spawn from these and intermission is viewed from these positions.
			Atleast one is required, any more and they are randomly chosen between.

	Level script requirements
	-------------------------
		Team Definitions:
			game["allies"] = "marines";
			game["axis"] = "opfor";
			Because Deathmatch doesn't have teams with regard to gameplay or scoring, this effectively sets the available weapons.

		If using minefields or exploders:
			maps\mp\_load::main();

	Optional level script settings
	------------------------------
		Soldier Type and Variation:
			game["american_soldiertype"] = "normandy";
			game["german_soldiertype"] = "normandy";
			This sets what character models are used for each nationality on a particular map.

			Valid settings:
				american_soldiertype	normandy
				british_soldiertype		normandy, africa
				russian_soldiertype		coats, padded
				german_soldiertype		normandy, africa, winterlight, winterdark
*/

/*QUAKED mp_dm_spawn (1.0 0.5 0.0) (-16 -16 0) (16 16 72)
Players spawn away from enemies at one of these positions.*/

main()
{
	maps\mp\gametypes\_globallogic::init();
	maps\mp\gametypes\_callbacksetup::SetupCallbacks();
	maps\mp\gametypes\_globallogic::SetupCallbacks();
  
  level.scr_dm_lms_enable = getdvarx( "scr_dm_lms_enable", "int", 0, 0, 1 );
  
	if( !level.scr_dm_lms_enable) {
    maps\mp\gametypes\_globallogic::registerNumLivesDvar( level.gameType, 0, 0, 10 );
    maps\mp\gametypes\_globallogic::registerRoundLimitDvar( level.gameType, 1, 0, 500 );
    maps\mp\gametypes\_globallogic::registerScoreLimitDvar( level.gameType, 150, 0, 5000 );
    maps\mp\gametypes\_globallogic::registerTimeLimitDvar( level.gameType, 8, 0, 1440 );
  } else {
    maps\mp\gametypes\_globallogic::registerNumLivesDvar( "dm_lms", 1, 1, 10 );
    maps\mp\gametypes\_globallogic::registerRoundLimitDvar( "dm_lms", 0, 0, 500 );
    maps\mp\gametypes\_globallogic::registerScoreLimitDvar( "dm_lms", 3, 0, 50 );
    maps\mp\gametypes\_globallogic::registerTimeLimitDvar( "dm_lms", 4, 0, 1440 );
  }


	level.teamBased = false;

	level.onStartGameType = ::onStartGameType;
	level.onSpawnPlayer = ::onSpawnPlayer;

	if( !level.scr_dm_lms_enable )
    game["dialog"]["gametype"] = gameTypeDialog( "freeforall" );
  else
    game["dialog"]["gametype"] = gameTypeDialog( "lastman" );
}


onStartGameType()
{
	setClientNameMode("auto_change");

	if( !level.scr_dm_lms_enable ) {
    maps\mp\gametypes\_globallogic::setObjectiveText( "allies", &"OBJECTIVES_DM" );
    maps\mp\gametypes\_globallogic::setObjectiveText( "axis", &"OBJECTIVES_DM" );
  } else {
    maps\mp\gametypes\_globallogic::setObjectiveText( "allies", &"OW_OBJECTIVES_LMS" );
    maps\mp\gametypes\_globallogic::setObjectiveText( "axis", &"OW_OBJECTIVES_LMS" );
  }

	if ( level.splitscreen )
	{
    if( !level.scr_dm_lms_enable ) {
      maps\mp\gametypes\_globallogic::setObjectiveScoreText( "allies", &"OBJECTIVES_DM" );
      maps\mp\gametypes\_globallogic::setObjectiveScoreText( "axis", &"OBJECTIVES_DM" );
    } else {
      maps\mp\gametypes\_globallogic::setObjectiveScoreText( "allies", &"OW_OBJECTIVES_LMS" );
      maps\mp\gametypes\_globallogic::setObjectiveScoreText( "axis", &"OW_OBJECTIVES_LMS" );
    }
	}
	else
	{
    if( !level.scr_dm_lms_enable ) {
      maps\mp\gametypes\_globallogic::setObjectiveScoreText( "allies", &"OBJECTIVES_DM_SCORE" );
      maps\mp\gametypes\_globallogic::setObjectiveScoreText( "axis", &"OBJECTIVES_DM_SCORE" );
    } else {
      maps\mp\gametypes\_globallogic::setObjectiveScoreText( "allies", &"OW_OBJECTIVES_LMS_SCORE" );
      maps\mp\gametypes\_globallogic::setObjectiveScoreText( "axis", &"OW_OBJECTIVES_LMS_SCORE" );
    }
	}
  
  if( !level.scr_dm_lms_enable ) {
    maps\mp\gametypes\_globallogic::setObjectiveHintText( "allies", &"OBJECTIVES_DM_HINT" );
    maps\mp\gametypes\_globallogic::setObjectiveHintText( "axis", &"OBJECTIVES_DM_HINT" );
  } else {
    maps\mp\gametypes\_globallogic::setObjectiveHintText( "allies", &"OW_OBJECTIVES_LMS_HINT" );
    maps\mp\gametypes\_globallogic::setObjectiveHintText( "axis", &"OW_OBJECTIVES_LMS_HINT" );
  }

	level.spawnMins = ( 0, 0, 0 );
	level.spawnMaxs = ( 0, 0, 0 );
	maps\mp\gametypes\_spawnlogic::addSpawnPoints( "allies", "mp_dm_spawn" );
	maps\mp\gametypes\_spawnlogic::addSpawnPoints( "axis", "mp_dm_spawn" );
	level.mapCenter = maps\mp\gametypes\_spawnlogic::findBoxCenter( level.spawnMins, level.spawnMaxs );
	setMapCenter( level.mapCenter );
	
	allowed[0] = "dm";
	maps\mp\gametypes\_gameobjects::main(allowed);

	level.displayRoundEndText = false;
	level.QuickMessageToAll = true;

	// elimination style
  if ( !level.scr_dm_lms_enable && level.roundLimit != 1 && level.numLives )
	{
		level.overridePlayerScore = true;
		level.displayRoundEndText = true;
		level.onEndGame = ::onEndGame;
	}
  
  // last man standing
	if ( level.scr_dm_lms_enable || (level.roundLimit != 1 && level.numLives) )
	{
		level.overridePlayerScore = true;
		level.displayRoundEndText = true;
    level.onOneLeftEvent = ::onOneLeftEvent;
	}
}


onSpawnPlayer()
{
	spawnPoints = maps\mp\gametypes\_spawnlogic::getTeamSpawnPoints( self.pers["team"] );
	spawnPoint = maps\mp\gametypes\_spawnlogic::getSpawnpoint_DM( spawnPoints );

	self spawn( spawnPoint.origin, spawnPoint.angles );
}

onEndGame( winningPlayer )
{
	if ( isDefined( winningPlayer ) )
		[[level._setPlayerScore]]( winningPlayer, winningPlayer [[level._getPlayerScore]]() + 1 );	
}

// copied from lms.gsc, is the only new piece of logic
onOneLeftEvent( team )
{
	winner = getLastAlivePlayer();

	if ( isDefined( winner ) )
		logString( "last one alive, win: " + winner.name );
	else
		logString( "last one alive, win: unknown" );

	if ( isDefined( winner ) ) {
		[[level._setPlayerScore]]( winner, [[level._getPlayerScore]]( winner ) + 1 );
	}
	
	thread maps\mp\gametypes\_globallogic::endGame( winner, &"MP_ENEMIES_ELIMINATED" );		
}
