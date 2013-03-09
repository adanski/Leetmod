#include openwarfare\_utils;

init()
{
	// Armory rulesets
	addLeagueRuleset( "armory_all", "all", rulesets\leetmod\armory\all::setRuleset );
	addLeagueRuleset( "armory_boltaction", "all", rulesets\leetmod\armory\boltaction::setRuleset );
	addLeagueRuleset( "armory_leetmod", "all", rulesets\leetmod\armory\leetmod::setRuleset );
	addLeagueRuleset( "armory_pistol", "all", rulesets\leetmod\armory\pistol::setRuleset );
	addLeagueRuleset( "armory_promod", "all", rulesets\leetmod\armory\promod::setRuleset );
	addLeagueRuleset( "armory_shotgun", "all", rulesets\leetmod\armory\shotgun::setRuleset );
	addLeagueRuleset( "armory_sniper", "all", rulesets\leetmod\armory\sniper::setRuleset );
	
	// Perks rulesets
	addLeagueRuleset( "perks_all", "all", rulesets\leetmod\perks\all::setRuleset );
	addLeagueRuleset( "perks_leetmod", "all", rulesets\leetmod\perks\leetmod::setRuleset );
	addLeagueRuleset( "perks_some", "all", rulesets\leetmod\perks\some::setRuleset );
	addLeagueRuleset( "perks_none", "all", rulesets\leetmod\perks\none::setRuleset );
	
	// Server rulesets
	addLeagueRuleset( "server_public", "all", rulesets\leetmod\server\public::setRuleset );
	addLeagueRuleset( "server_match", "all", rulesets\leetmod\server\match::setRuleset );
	
	// Full profiles
	addLeagueRuleset( "profile_leetmod", "all", rulesets\leetmod\profile\leetmod::setRuleset );
	addLeagueRuleset( "profile_promod", "all", rulesets\leetmod\profile\promod::setRuleset );
}