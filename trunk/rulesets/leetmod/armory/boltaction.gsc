#include openwarfare\_utils;


setRuleset()
{
	setDvar( "scr_league_ruleset", "OW Hardcore All Weapons" );

	rulesets\leetmod\armory\sniper::init();
	init();
}

init()
{
	setDvar( "classes_default_enable", "2" );
}