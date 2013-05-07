#include openwarfare\_utils;


setRuleset()
{
	rulesets\leetmod\perks\leetmod::setRuleset();
	init();
	
	setDvar( "scr_league_ruleset", "Perks Some" );
}

init()
{
	setDvar( "perk_allow_c4_mp", "1" );
	setDvar( "perk_allow_claymore_mp", "1" );
}