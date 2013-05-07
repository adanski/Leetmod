#include openwarfare\_utils;

init()
{
	// Documentation: addLeagueRuleset( leagueName, gameType, functionPointer )	{	level.matchRules[ leagueName ][ gameType ] = functionPointer;	}
	
	// Armory rulesets
	addLeagueRuleset( "arm_all", "all", rulesets\leetmod\armory\all::setRuleset );
	addLeagueRuleset( "arm_boltaction", "all", rulesets\leetmod\armory\boltaction::setRuleset );
	addLeagueRuleset( "arm_leetmod", "all", rulesets\leetmod\armory\leetmod::setRuleset );
	addLeagueRuleset( "arm_pistol", "all", rulesets\leetmod\armory\pistol::setRuleset );
	addLeagueRuleset( "arm_promod", "all", rulesets\leetmod\armory\promod::setRuleset );
	addLeagueRuleset( "arm_shotgun", "all", rulesets\leetmod\armory\shotgun::setRuleset );
	addLeagueRuleset( "arm_sniper", "all", rulesets\leetmod\armory\sniper::setRuleset );
	
	// Perks rulesets
	addLeagueRuleset( "prk_all", "all", rulesets\leetmod\perks\all::setRuleset );
	addLeagueRuleset( "prk_leetmod", "all", rulesets\leetmod\perks\leetmod::setRuleset );
	addLeagueRuleset( "prk_some", "all", rulesets\leetmod\perks\some::setRuleset );
	addLeagueRuleset( "prk_none", "all", rulesets\leetmod\perks\none::setRuleset );
	
	// Server rulesets
	addLeagueRuleset( "svr_public", "all", rulesets\leetmod\server\public::setRuleset );
	addLeagueRuleset( "svr_match", "all", rulesets\leetmod\server\match::setRuleset );
	
	// Full profiles
	addLeagueRuleset( "pfl_leetmod", "all", rulesets\leetmod\profile\leetmod::setRuleset );
	addLeagueRuleset( "pfl_promod", "all", rulesets\leetmod\profile\promod::setRuleset );
}