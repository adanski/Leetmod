#include openwarfare\_utils;


setRuleset()
{
	setDvar( "scr_league_ruleset", "OW Hardcore All Weapons" );

	rulesets\leetmod\perks\some::init();
	init();
}

init()
{
	setDvar( "perk_allow_rpg_mp", "1" );

	setDvar( "perk_allow_specialty_armorvest", "1" );

	setDvar( "perk_allow_specialty_pistoldeath", "1" );
	setDvar( "perk_allow_specialty_grenadepulldeath", "1" );
}

