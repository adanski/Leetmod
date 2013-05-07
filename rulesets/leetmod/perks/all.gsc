#include openwarfare\_utils;


setRuleset()
{
	rulesets\leetmod\perks\some::setRuleset();
	init();
	
	setDvar( "scr_league_ruleset", "Perks All" );
}

init()
{
	setDvar( "perk_allow_rpg_mp", "1" );

	setDvar( "perk_allow_specialty_armorvest", "1" );

	setDvar( "perk_allow_specialty_pistoldeath", "1" );
	setDvar( "perk_allow_specialty_grenadepulldeath", "1" );
}

