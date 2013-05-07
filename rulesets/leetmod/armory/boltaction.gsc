#include openwarfare\_utils;


setRuleset()
{
	rulesets\leetmod\armory\sniper::setRuleset();
	init();
	
	setDvar( "scr_league_ruleset", "Armory BoltAction" );
}

init()
{
	setDvar( "classes_default_enable", "2" );
}