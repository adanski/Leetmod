#include openwarfare\_utils;


setRuleset()
{
	setDvar( "scr_league_ruleset", "OW Hardcore All Weapons" );

	rulesets\leetmod\perks\leetmod::init();
	init();
}

init()
{
	setDvar( "perk_allow_c4_mp", "1" );
	setDvar( "perk_allow_claymore_mp", "1" );
}