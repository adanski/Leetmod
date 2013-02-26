#include openwarfare\_utils;

init()
{
	// Armory rulesets
	addLeagueRuleset( "armory_all", "all", rulesets\openwarfare\armory\all::setRuleset );
	addLeagueRuleset( "armory_boltaction", "all", rulesets\openwarfare\armory\boltaction::setRuleset );
	addLeagueRuleset( "armory_leetmod", "all", rulesets\openwarfare\armory\leetmod::setRuleset );
	addLeagueRuleset( "armory_pistol", "all", rulesets\openwarfare\armory\pistol::setRuleset );
	addLeagueRuleset( "armory_promod", "all", rulesets\openwarfare\armory\promod::setRuleset );
	addLeagueRuleset( "armory_shotgun", "all", rulesets\openwarfare\armory\shotgun::setRuleset );
	addLeagueRuleset( "armory_sniper", "all", rulesets\openwarfare\armory\sniper::setRuleset );
	
	// Perks rulesets
	addLeagueRuleset( "perks_all", "all", rulesets\openwarfare\perks\all::setRuleset );
	addLeagueRuleset( "perks_leetmod", "all", rulesets\openwarfare\perks\leetmod::setRuleset );
	addLeagueRuleset( "perks_some", "all", rulesets\openwarfare\perks\some::setRuleset );
	addLeagueRuleset( "perks_none", "all", rulesets\openwarfare\perks\none::setRuleset );
	
	// Server rulesets
	addLeagueRuleset( "server_public", "all", rulesets\openwarfare\server\public::setRuleset );
	addLeagueRuleset( "server_match", "all", rulesets\openwarfare\server\match::setRuleset );
	
	// Full profiles
	addLeagueRuleset( "profile_leetmod", "all", rulesets\openwarfare\profile\leetmod::setRuleset );
	addLeagueRuleset( "profile_promod", "all", rulesets\openwarfare\profile\promod::setRuleset );
}